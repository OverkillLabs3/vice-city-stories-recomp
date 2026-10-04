#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0048[4096] = {
    1, 0, 2, 0, 0, 3, 0, 0, 4, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 22, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0,
    48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 80,
    0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117,
    0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124,
    0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138,
    0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0,
    0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 164, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0,
    0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0,
    203, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 216, 0, 0, 217, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0,
    0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 236, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0,
    240, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0,
    0, 0, 0, 248, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 256, 0, 0, 0,
    257, 0, 0, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0,
    265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 291, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 303,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 309,
    0, 310, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 318, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323,
    0, 324, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 335, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0,
    0, 341, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0,
    0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357,
    0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 361, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0,
    0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 377, 0, 0, 0, 0, 0, 0, 378,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 383, 0, 0, 0, 0, 384, 385, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 390, 0, 0, 391, 0, 0, 0,
    0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0,
    397, 0, 0, 398, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0,
    0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 413,
    0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0,
    422, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0,
    0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 431, 0, 0, 432, 0, 0, 433, 0, 434, 0, 0, 435, 0, 0,
    436, 0, 437, 0, 0, 438, 0, 0, 439, 0, 440, 0, 0, 441, 0, 0, 442, 0, 443, 0, 0, 444, 0, 0, 445, 0, 446, 0, 0, 447, 0, 0,
    448, 0, 449, 0, 0, 450, 0, 0, 451, 0, 452, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 455, 0, 456, 0, 457, 0, 458, 0, 0, 459, 0,
    0, 0, 0, 0, 0, 460, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0,
    465, 0, 0, 466, 0, 0, 0, 467, 0, 468, 0, 0, 469, 0, 0, 0, 470, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 474, 0, 0, 475, 0,
    0, 0, 476, 0, 477, 0, 0, 478, 0, 0, 479, 0, 480, 0, 0, 0, 481, 0, 482, 0, 483, 0, 484, 0, 0, 485, 0, 486, 0, 487, 0, 0,
    488, 0, 489, 0, 490, 0, 491, 0, 0, 492, 0, 493, 0, 494, 0, 0, 495, 0, 496, 0, 497, 0, 0, 498, 0, 0, 0, 499, 0, 500, 0, 0,
    501, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0,
    511, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0,
    0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523, 524, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 538, 0, 0, 0, 539, 0, 540, 0, 541, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 543, 544, 0, 545, 0, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 0,
    0, 551, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0,
    0, 557, 0, 558, 0, 0, 0, 559, 560, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 565, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 571, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0,
    575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 579, 580, 0, 0, 0, 581, 582, 0, 0, 0, 0, 0,
    0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 0,
    0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 593, 0, 0, 0,
    0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0,
    0, 0, 0, 0, 0, 596, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0,
    605, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0,
    0, 0, 608, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 614, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617,
    0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 622, 623, 0, 0, 0, 0, 624, 0, 0, 0,
    625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627,
    0, 628, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631,
    0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0,
    635, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 0, 641,
    0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 646,
    0, 0, 0, 0, 647, 0, 648, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 652,
    0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 655, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0,
    0, 0, 660, 661, 0, 662, 0, 0, 0, 0, 663, 0, 664, 0, 665, 0, 0, 666, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674,
    0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 677, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 0, 693, 0, 694, 0,
    695, 696, 0, 697, 0, 0, 0, 698, 0, 699, 0, 700, 701, 0, 0, 702, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 705, 0, 706, 0, 707, 0,
    708, 709, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 713,
    0, 0, 0, 0, 714, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723,
    0, 724, 725, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 728, 0, 729, 0, 730, 0, 731, 0, 732, 0, 0, 733, 0, 0, 734,
    0, 735, 0, 736, 0, 737, 0, 738, 0, 739, 0, 740, 0, 741, 0, 742, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744,
    0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0,
    749, 0, 0, 750, 0, 751, 0, 752, 0, 0, 0, 0, 0, 0, 753, 0, 0, 754, 0, 0, 0, 0, 755, 0, 756, 0, 0, 0, 0, 757, 0, 0,
    0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 760, 761, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 764, 0, 0, 0, 765, 0, 766, 0, 767, 0, 0, 0, 768, 0, 0, 0, 769, 0, 0,
    0, 770, 0, 771, 0, 772, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 778, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 781, 0, 0, 0, 0, 0, 782, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 789,
    790, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0,
    0, 0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 798,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 800, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 802, 0, 803, 804, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806,
};
void recomp_unit_0048_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C4000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0048[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C4000;
    case 2u: goto L_088C4008;
    case 3u: goto L_088C4014;
    case 4u: goto L_088C4020;
    case 5u: goto L_088C4024;
    case 6u: goto L_088C403C;
    case 7u: goto L_088C4080;
    case 8u: goto L_088C408C;
    case 9u: goto L_088C4094;
    case 10u: goto L_088C40A0;
    case 11u: goto L_088C40B0;
    case 12u: goto L_088C40BC;
    case 13u: goto L_088C40C4;
    case 14u: goto L_088C40CC;
    case 15u: goto L_088C40D4;
    case 16u: goto L_088C40F0;
    case 17u: goto L_088C410C;
    case 18u: goto L_088C4128;
    case 19u: goto L_088C4144;
    case 20u: goto L_088C4154;
    case 21u: goto L_088C4170;
    case 22u: goto L_088C4184;
    case 23u: goto L_088C4188;
    case 24u: goto L_088C419C;
    case 25u: goto L_088C41C8;
    case 26u: goto L_088C41D0;
    case 27u: goto L_088C41E8;
    case 28u: goto L_088C41F0;
    case 29u: goto L_088C4200;
    case 30u: goto L_088C4228;
    case 31u: goto L_088C4254;
    case 32u: goto L_088C4264;
    case 33u: goto L_088C427C;
    case 34u: goto L_088C4280;
    case 35u: goto L_088C42AC;
    case 36u: goto L_088C42CC;
    case 37u: goto L_088C42DC;
    case 38u: goto L_088C42EC;
    case 39u: goto L_088C42F4;
    case 40u: goto L_088C4308;
    case 41u: goto L_088C4324;
    case 42u: goto L_088C433C;
    case 43u: goto L_088C4360;
    case 44u: goto L_088C4390;
    case 45u: goto L_088C43C8;
    case 46u: goto L_088C43EC;
    case 47u: goto L_088C43F8;
    case 48u: goto L_088C4400;
    case 49u: goto L_088C4410;
    case 50u: goto L_088C4424;
    case 51u: goto L_088C442C;
    case 52u: goto L_088C4464;
    case 53u: goto L_088C4488;
    case 54u: goto L_088C4498;
    case 55u: goto L_088C44B8;
    case 56u: goto L_088C44CC;
    case 57u: goto L_088C44F8;
    case 58u: goto L_088C4500;
    case 59u: goto L_088C4520;
    case 60u: goto L_088C4534;
    case 61u: goto L_088C4548;
    case 62u: goto L_088C4558;
    case 63u: goto L_088C4564;
    case 64u: goto L_088C4574;
    case 65u: goto L_088C4594;
    case 66u: goto L_088C45A8;
    case 67u: goto L_088C45D4;
    case 68u: goto L_088C45DC;
    case 69u: goto L_088C45F0;
    case 70u: goto L_088C461C;
    case 71u: goto L_088C4624;
    case 72u: goto L_088C464C;
    case 73u: goto L_088C4654;
    case 74u: goto L_088C468C;
    case 75u: goto L_088C46A0;
    case 76u: goto L_088C46B4;
    case 77u: goto L_088C46C4;
    case 78u: goto L_088C46D8;
    case 79u: goto L_088C46EC;
    case 80u: goto L_088C46FC;
    case 81u: goto L_088C4710;
    case 82u: goto L_088C4718;
    case 83u: goto L_088C4744;
    case 84u: goto L_088C4760;
    case 85u: goto L_088C4768;
    case 86u: goto L_088C4770;
    case 87u: goto L_088C4790;
    case 88u: goto L_088C47A4;
    case 89u: goto L_088C47B8;
    case 90u: goto L_088C47C8;
    case 91u: goto L_088C47F8;
    case 92u: goto L_088C4804;
    case 93u: goto L_088C4814;
    case 94u: goto L_088C4834;
    case 95u: goto L_088C4848;
    case 96u: goto L_088C4874;
    case 97u: goto L_088C487C;
    case 98u: goto L_088C4890;
    case 99u: goto L_088C48BC;
    case 100u: goto L_088C48C4;
    case 101u: goto L_088C48D8;
    case 102u: goto L_088C48EC;
    case 103u: goto L_088C48FC;
    case 104u: goto L_088C4910;
    case 105u: goto L_088C4924;
    case 106u: goto L_088C4934;
    case 107u: goto L_088C4944;
    case 108u: goto L_088C4954;
    case 109u: goto L_088C496C;
    case 110u: goto L_088C4984;
    case 111u: goto L_088C498C;
    case 112u: goto L_088C49A0;
    case 113u: goto L_088C49B4;
    case 114u: goto L_088C49C4;
    case 115u: goto L_088C49D8;
    case 116u: goto L_088C49EC;
    case 117u: goto L_088C49FC;
    case 118u: goto L_088C4A0C;
    case 119u: goto L_088C4A1C;
    case 120u: goto L_088C4A34;
    case 121u: goto L_088C4A4C;
    case 122u: goto L_088C4A54;
    case 123u: goto L_088C4A68;
    case 124u: goto L_088C4A7C;
    case 125u: goto L_088C4A8C;
    case 126u: goto L_088C4AA0;
    case 127u: goto L_088C4AB4;
    case 128u: goto L_088C4AC4;
    case 129u: goto L_088C4AD4;
    case 130u: goto L_088C4AE4;
    case 131u: goto L_088C4AFC;
    case 132u: goto L_088C4B14;
    case 133u: goto L_088C4B1C;
    case 134u: goto L_088C4B30;
    case 135u: goto L_088C4B44;
    case 136u: goto L_088C4B54;
    case 137u: goto L_088C4B68;
    case 138u: goto L_088C4B7C;
    case 139u: goto L_088C4B8C;
    case 140u: goto L_088C4B9C;
    case 141u: goto L_088C4BAC;
    case 142u: goto L_088C4BC4;
    case 143u: goto L_088C4BDC;
    case 144u: goto L_088C4BE4;
    case 145u: goto L_088C4BF8;
    case 146u: goto L_088C4C0C;
    case 147u: goto L_088C4C1C;
    case 148u: goto L_088C4C30;
    case 149u: goto L_088C4C44;
    case 150u: goto L_088C4C54;
    case 151u: goto L_088C4C6C;
    case 152u: goto L_088C4C74;
    case 153u: goto L_088C4C94;
    case 154u: goto L_088C4C9C;
    case 155u: goto L_088C4CA8;
    case 156u: goto L_088C4CC0;
    case 157u: goto L_088C4CE8;
    case 158u: goto L_088C4CF0;
    case 159u: goto L_088C4D0C;
    case 160u: goto L_088C4D14;
    case 161u: goto L_088C4D30;
    case 162u: goto L_088C4D50;
    case 163u: goto L_088C4D68;
    case 164u: goto L_088C4D6C;
    case 165u: goto L_088C4D7C;
    case 166u: goto L_088C4D9C;
    case 167u: goto L_088C4DE8;
    case 168u: goto L_088C4DF0;
    case 169u: goto L_088C4DF8;
    case 170u: goto L_088C4E28;
    case 171u: goto L_088C4E3C;
    case 172u: goto L_088C4E50;
    case 173u: goto L_088C4E64;
    case 174u: goto L_088C4E78;
    case 175u: goto L_088C4E8C;
    case 176u: goto L_088C4EA0;
    case 177u: goto L_088C4EAC;
    case 178u: goto L_088C4EC0;
    case 179u: goto L_088C4ED4;
    case 180u: goto L_088C4EE4;
    case 181u: goto L_088C4EF8;
    case 182u: goto L_088C4F0C;
    case 183u: goto L_088C4F1C;
    case 184u: goto L_088C4F2C;
    case 185u: goto L_088C4F34;
    case 186u: goto L_088C4F3C;
    case 187u: goto L_088C4F44;
    case 188u: goto L_088C4F54;
    case 189u: goto L_088C4F80;
    case 190u: goto L_088C4F88;
    case 191u: goto L_088C4F9C;
    case 192u: goto L_088C4FB0;
    case 193u: goto L_088C4FC0;
    case 194u: goto L_088C4FD4;
    case 195u: goto L_088C4FE8;
    case 196u: goto L_088C4FF8;
    case 197u: goto L_088C5008;
    case 198u: goto L_088C5014;
    case 199u: goto L_088C5024;
    case 200u: goto L_088C5050;
    case 201u: goto L_088C5058;
    case 202u: goto L_088C506C;
    case 203u: goto L_088C5080;
    case 204u: goto L_088C5090;
    case 205u: goto L_088C50A4;
    case 206u: goto L_088C50B8;
    case 207u: goto L_088C50C8;
    case 208u: goto L_088C50D8;
    case 209u: goto L_088C50E4;
    case 210u: goto L_088C50F4;
    case 211u: goto L_088C5120;
    case 212u: goto L_088C5128;
    case 213u: goto L_088C5144;
    case 214u: goto L_088C5154;
    case 215u: goto L_088C5160;
    case 216u: goto L_088C5168;
    case 217u: goto L_088C5174;
    case 218u: goto L_088C5184;
    case 219u: goto L_088C51CC;
    case 220u: goto L_088C51D4;
    case 221u: goto L_088C51E4;
    case 222u: goto L_088C51F0;
    case 223u: goto L_088C5208;
    case 224u: goto L_088C5214;
    case 225u: goto L_088C5224;
    case 226u: goto L_088C5234;
    case 227u: goto L_088C523C;
    case 228u: goto L_088C5248;
    case 229u: goto L_088C5250;
    case 230u: goto L_088C5270;
    case 231u: goto L_088C5280;
    case 232u: goto L_088C529C;
    case 233u: goto L_088C52B8;
    case 234u: goto L_088C52C4;
    case 235u: goto L_088C52E0;
    case 236u: goto L_088C52E4;
    case 237u: goto L_088C5328;
    case 238u: goto L_088C532C;
    case 239u: goto L_088C5378;
    case 240u: goto L_088C5380;
    case 241u: goto L_088C5394;
    case 242u: goto L_088C53A4;
    case 243u: goto L_088C53B0;
    case 244u: goto L_088C53BC;
    case 245u: goto L_088C53C0;
    case 246u: goto L_088C53E4;
    case 247u: goto L_088C53EC;
    case 248u: goto L_088C540C;
    case 249u: goto L_088C5414;
    case 250u: goto L_088C5420;
    case 251u: goto L_088C5428;
    case 252u: goto L_088C543C;
    case 253u: goto L_088C544C;
    case 254u: goto L_088C545C;
    case 255u: goto L_088C5464;
    case 256u: goto L_088C5470;
    case 257u: goto L_088C5480;
    case 258u: goto L_088C5490;
    case 259u: goto L_088C5498;
    case 260u: goto L_088C54A4;
    case 261u: goto L_088C54B4;
    case 262u: goto L_088C54D0;
    case 263u: goto L_088C54E4;
    case 264u: goto L_088C54EC;
    case 265u: goto L_088C5500;
    case 266u: goto L_088C5508;
    case 267u: goto L_088C5534;
    case 268u: goto L_088C553C;
    case 269u: goto L_088C55D0;
    case 270u: goto L_088C55F4;
    case 271u: goto L_088C5624;
    case 272u: goto L_088C5630;
    case 273u: goto L_088C5640;
    case 274u: goto L_088C566C;
    case 275u: goto L_088C5674;
    case 276u: goto L_088C5684;
    case 277u: goto L_088C56B4;
    case 278u: goto L_088C56C4;
    case 279u: goto L_088C56D0;
    case 280u: goto L_088C56F0;
    case 281u: goto L_088C571C;
    case 282u: goto L_088C572C;
    case 283u: goto L_088C5750;
    case 284u: goto L_088C575C;
    case 285u: goto L_088C5764;
    case 286u: goto L_088C578C;
    case 287u: goto L_088C5798;
    case 288u: goto L_088C57B0;
    case 289u: goto L_088C57D4;
    case 290u: goto L_088C57DC;
    case 291u: goto L_088C57E8;
    case 292u: goto L_088C57F0;
    case 293u: goto L_088C5828;
    case 294u: goto L_088C5840;
    case 295u: goto L_088C5858;
    case 296u: goto L_088C5884;
    case 297u: goto L_088C58A0;
    case 298u: goto L_088C58AC;
    case 299u: goto L_088C58C8;
    case 300u: goto L_088C58CC;
    case 301u: goto L_088C58EC;
    case 302u: goto L_088C58F4;
    case 303u: goto L_088C58FC;
    case 304u: goto L_088C5928;
    case 305u: goto L_088C5940;
    case 306u: goto L_088C5950;
    case 307u: goto L_088C5964;
    case 308u: goto L_088C5970;
    case 309u: goto L_088C597C;
    case 310u: goto L_088C5984;
    case 311u: goto L_088C5990;
    case 312u: goto L_088C59A0;
    case 313u: goto L_088C59B0;
    case 314u: goto L_088C59C4;
    case 315u: goto L_088C59D0;
    case 316u: goto L_088C59DC;
    case 317u: goto L_088C59E4;
    case 318u: goto L_088C59F0;
    case 319u: goto L_088C59F8;
    case 320u: goto L_088C5A1C;
    case 321u: goto L_088C5A40;
    case 322u: goto L_088C5A60;
    case 323u: goto L_088C5A7C;
    case 324u: goto L_088C5A84;
    case 325u: goto L_088C5A88;
    case 326u: goto L_088C5AB0;
    case 327u: goto L_088C5AB8;
    case 328u: goto L_088C5AC0;
    case 329u: goto L_088C5AC8;
    case 330u: goto L_088C5AD0;
    case 331u: goto L_088C5AD8;
    case 332u: goto L_088C5AE0;
    case 333u: goto L_088C5AE8;
    case 334u: goto L_088C5B00;
    case 335u: goto L_088C5B10;
    case 336u: goto L_088C5B14;
    case 337u: goto L_088C5B1C;
    case 338u: goto L_088C5B50;
    case 339u: goto L_088C5B64;
    case 340u: goto L_088C5B6C;
    case 341u: goto L_088C5B84;
    case 342u: goto L_088C5B94;
    case 343u: goto L_088C5B9C;
    case 344u: goto L_088C5BA4;
    case 345u: goto L_088C5BB8;
    case 346u: goto L_088C5BD0;
    case 347u: goto L_088C5BE0;
    case 348u: goto L_088C5BF0;
    case 349u: goto L_088C5BF8;
    case 350u: goto L_088C5C0C;
    case 351u: goto L_088C5C18;
    case 352u: goto L_088C5C28;
    case 353u: goto L_088C5C30;
    case 354u: goto L_088C5C44;
    case 355u: goto L_088C5C5C;
    case 356u: goto L_088C5C6C;
    case 357u: goto L_088C5C7C;
    case 358u: goto L_088C5C84;
    case 359u: goto L_088C5C98;
    case 360u: goto L_088C5CAC;
    case 361u: goto L_088C5CBC;
    case 362u: goto L_088C5CC0;
    case 363u: goto L_088C5CD0;
    case 364u: goto L_088C5CF4;
    case 365u: goto L_088C5D3C;
    case 366u: goto L_088C5D5C;
    case 367u: goto L_088C5D94;
    case 368u: goto L_088C5DA4;
    case 369u: goto L_088C5DC8;
    case 370u: goto L_088C5DD0;
    case 371u: goto L_088C5DD8;
    case 372u: goto L_088C5DF4;
    case 373u: goto L_088C5E18;
    case 374u: goto L_088C5E2C;
    case 375u: goto L_088C5E48;
    case 376u: goto L_088C5E5C;
    case 377u: goto L_088C5E60;
    case 378u: goto L_088C5E7C;
    case 379u: goto L_088C5EA8;
    case 380u: goto L_088C5EB0;
    case 381u: goto L_088C5ED0;
    case 382u: goto L_088C5EF0;
    case 383u: goto L_088C5F08;
    case 384u: goto L_088C5F1C;
    case 385u: goto L_088C5F20;
    case 386u: goto L_088C5F2C;
    case 387u: goto L_088C5F44;
    case 388u: goto L_088C5F50;
    case 389u: goto L_088C5F5C;
    case 390u: goto L_088C5F64;
    case 391u: goto L_088C5F70;
    case 392u: goto L_088C5F88;
    case 393u: goto L_088C6004;
    case 394u: goto L_088C6050;
    case 395u: goto L_088C6058;
    case 396u: goto L_088C6060;
    case 397u: goto L_088C6080;
    case 398u: goto L_088C608C;
    case 399u: goto L_088C609C;
    case 400u: goto L_088C60A4;
    case 401u: goto L_088C60C8;
    case 402u: goto L_088C60D8;
    case 403u: goto L_088C60E8;
    case 404u: goto L_088C60F8;
    case 405u: goto L_088C6104;
    case 406u: goto L_088C6114;
    case 407u: goto L_088C6124;
    case 408u: goto L_088C6130;
    case 409u: goto L_088C6140;
    case 410u: goto L_088C6150;
    case 411u: goto L_088C615C;
    case 412u: goto L_088C616C;
    case 413u: goto L_088C617C;
    case 414u: goto L_088C6188;
    case 415u: goto L_088C6198;
    case 416u: goto L_088C61A8;
    case 417u: goto L_088C61B4;
    case 418u: goto L_088C61C4;
    case 419u: goto L_088C61D4;
    case 420u: goto L_088C61E0;
    case 421u: goto L_088C61F0;
    case 422u: goto L_088C6200;
    case 423u: goto L_088C620C;
    case 424u: goto L_088C621C;
    case 425u: goto L_088C6228;
    case 426u: goto L_088C626C;
    case 427u: goto L_088C6278;
    case 428u: goto L_088C6298;
    case 429u: goto L_088C62B4;
    case 430u: goto L_088C62C0;
    case 431u: goto L_088C62C8;
    case 432u: goto L_088C62D4;
    case 433u: goto L_088C62E0;
    case 434u: goto L_088C62E8;
    case 435u: goto L_088C62F4;
    case 436u: goto L_088C6300;
    case 437u: goto L_088C6308;
    case 438u: goto L_088C6314;
    case 439u: goto L_088C6320;
    case 440u: goto L_088C6328;
    case 441u: goto L_088C6334;
    case 442u: goto L_088C6340;
    case 443u: goto L_088C6348;
    case 444u: goto L_088C6354;
    case 445u: goto L_088C6360;
    case 446u: goto L_088C6368;
    case 447u: goto L_088C6374;
    case 448u: goto L_088C6380;
    case 449u: goto L_088C6388;
    case 450u: goto L_088C6394;
    case 451u: goto L_088C63A0;
    case 452u: goto L_088C63A8;
    case 453u: goto L_088C63B8;
    case 454u: goto L_088C63C0;
    case 455u: goto L_088C63D4;
    case 456u: goto L_088C63DC;
    case 457u: goto L_088C63E4;
    case 458u: goto L_088C63EC;
    case 459u: goto L_088C63F8;
    case 460u: goto L_088C6414;
    case 461u: goto L_088C6418;
    case 462u: goto L_088C642C;
    case 463u: goto L_088C6458;
    case 464u: goto L_088C6468;
    case 465u: goto L_088C6480;
    case 466u: goto L_088C648C;
    case 467u: goto L_088C649C;
    case 468u: goto L_088C64A4;
    case 469u: goto L_088C64B0;
    case 470u: goto L_088C64C0;
    case 471u: goto L_088C64C8;
    case 472u: goto L_088C64D4;
    case 473u: goto L_088C64E4;
    case 474u: goto L_088C64EC;
    case 475u: goto L_088C64F8;
    case 476u: goto L_088C6508;
    case 477u: goto L_088C6510;
    case 478u: goto L_088C651C;
    case 479u: goto L_088C6528;
    case 480u: goto L_088C6530;
    case 481u: goto L_088C6540;
    case 482u: goto L_088C6548;
    case 483u: goto L_088C6550;
    case 484u: goto L_088C6558;
    case 485u: goto L_088C6564;
    case 486u: goto L_088C656C;
    case 487u: goto L_088C6574;
    case 488u: goto L_088C6580;
    case 489u: goto L_088C6588;
    case 490u: goto L_088C6590;
    case 491u: goto L_088C6598;
    case 492u: goto L_088C65A4;
    case 493u: goto L_088C65AC;
    case 494u: goto L_088C65B4;
    case 495u: goto L_088C65C0;
    case 496u: goto L_088C65C8;
    case 497u: goto L_088C65D0;
    case 498u: goto L_088C65DC;
    case 499u: goto L_088C65EC;
    case 500u: goto L_088C65F4;
    case 501u: goto L_088C6600;
    case 502u: goto L_088C6624;
    case 503u: goto L_088C663C;
    case 504u: goto L_088C6648;
    case 505u: goto L_088C6650;
    case 506u: goto L_088C6658;
    case 507u: goto L_088C6660;
    case 508u: goto L_088C6668;
    case 509u: goto L_088C6670;
    case 510u: goto L_088C6678;
    case 511u: goto L_088C6680;
    case 512u: goto L_088C669C;
    case 513u: goto L_088C66A4;
    case 514u: goto L_088C66AC;
    case 515u: goto L_088C66B4;
    case 516u: goto L_088C66BC;
    case 517u: goto L_088C66C8;
    case 518u: goto L_088C66F8;
    case 519u: goto L_088C6718;
    case 520u: goto L_088C6720;
    case 521u: goto L_088C6728;
    case 522u: goto L_088C6730;
    case 523u: goto L_088C6738;
    case 524u: goto L_088C673C;
    case 525u: goto L_088C675C;
    case 526u: goto L_088C6770;
    case 527u: goto L_088C67A4;
    case 528u: goto L_088C67B4;
    case 529u: goto L_088C67BC;
    case 530u: goto L_088C67C4;
    case 531u: goto L_088C67EC;
    case 532u: goto L_088C67F8;
    case 533u: goto L_088C6854;
    case 534u: goto L_088C686C;
    case 535u: goto L_088C68B0;
    case 536u: goto L_088C68BC;
    case 537u: goto L_088C68C8;
    case 538u: goto L_088C68D0;
    case 539u: goto L_088C68E0;
    case 540u: goto L_088C68E8;
    case 541u: goto L_088C68F0;
    case 542u: goto L_088C6920;
    case 543u: goto L_088C6928;
    case 544u: goto L_088C692C;
    case 545u: goto L_088C6934;
    case 546u: goto L_088C6944;
    case 547u: goto L_088C6950;
    case 548u: goto L_088C695C;
    case 549u: goto L_088C6968;
    case 550u: goto L_088C6974;
    case 551u: goto L_088C6984;
    case 552u: goto L_088C6990;
    case 553u: goto L_088C69C4;
    case 554u: goto L_088C69D4;
    case 555u: goto L_088C69E4;
    case 556u: goto L_088C69F4;
    case 557u: goto L_088C6A04;
    case 558u: goto L_088C6A0C;
    case 559u: goto L_088C6A1C;
    case 560u: goto L_088C6A20;
    case 561u: goto L_088C6A2C;
    case 562u: goto L_088C6A40;
    case 563u: goto L_088C6A50;
    case 564u: goto L_088C6AA8;
    case 565u: goto L_088C6AB0;
    case 566u: goto L_088C6AB4;
    case 567u: goto L_088C6ADC;
    case 568u: goto L_088C6B18;
    case 569u: goto L_088C6B2C;
    case 570u: goto L_088C6B3C;
    case 571u: goto L_088C6B44;
    case 572u: goto L_088C6B4C;
    case 573u: goto L_088C6B64;
    case 574u: goto L_088C6B70;
    case 575u: goto L_088C6B80;
    case 576u: goto L_088C6B98;
    case 577u: goto L_088C6BB0;
    case 578u: goto L_088C6BBC;
    case 579u: goto L_088C6BD0;
    case 580u: goto L_088C6BD4;
    case 581u: goto L_088C6BE4;
    case 582u: goto L_088C6BE8;
    case 583u: goto L_088C6C0C;
    case 584u: goto L_088C6C1C;
    case 585u: goto L_088C6C48;
    case 586u: goto L_088C6C5C;
    case 587u: goto L_088C6C6C;
    case 588u: goto L_088C6C84;
    case 589u: goto L_088C6C94;
    case 590u: goto L_088C6CAC;
    case 591u: goto L_088C6CE4;
    case 592u: goto L_088C6CEC;
    case 593u: goto L_088C6CF0;
    case 594u: goto L_088C6D14;
    case 595u: goto L_088C6D70;
    case 596u: goto L_088C6D94;
    case 597u: goto L_088C6D98;
    case 598u: goto L_088C6DB4;
    case 599u: goto L_088C6DC4;
    case 600u: goto L_088C6DCC;
    case 601u: goto L_088C6DF4;
    case 602u: goto L_088C6E20;
    case 603u: goto L_088C6E54;
    case 604u: goto L_088C6E64;
    case 605u: goto L_088C6E80;
    case 606u: goto L_088C6E90;
    case 607u: goto L_088C6EE8;
    case 608u: goto L_088C6F08;
    case 609u: goto L_088C6F24;
    case 610u: goto L_088C6F34;
    case 611u: goto L_088C6F8C;
    case 612u: goto L_088C6FA4;
    case 613u: goto L_088C6FB0;
    case 614u: goto L_088C6FB8;
    case 615u: goto L_088C6FC0;
    case 616u: goto L_088C6FC8;
    case 617u: goto L_088C6FFC;
    case 618u: goto L_088C7010;
    case 619u: goto L_088C7028;
    case 620u: goto L_088C7038;
    case 621u: goto L_088C7050;
    case 622u: goto L_088C7058;
    case 623u: goto L_088C705C;
    case 624u: goto L_088C7070;
    case 625u: goto L_088C7080;
    case 626u: goto L_088C70A8;
    case 627u: goto L_088C70FC;
    case 628u: goto L_088C7104;
    case 629u: goto L_088C7108;
    case 630u: goto L_088C7120;
    case 631u: goto L_088C717C;
    case 632u: goto L_088C7190;
    case 633u: goto L_088C71E8;
    case 634u: goto L_088C71F4;
    case 635u: goto L_088C7200;
    case 636u: goto L_088C7224;
    case 637u: goto L_088C722C;
    case 638u: goto L_088C7244;
    case 639u: goto L_088C7254;
    case 640u: goto L_088C725C;
    case 641u: goto L_088C727C;
    case 642u: goto L_088C728C;
    case 643u: goto L_088C72B4;
    case 644u: goto L_088C72C4;
    case 645u: goto L_088C72F8;
    case 646u: goto L_088C72FC;
    case 647u: goto L_088C7310;
    case 648u: goto L_088C7318;
    case 649u: goto L_088C731C;
    case 650u: goto L_088C7360;
    case 651u: goto L_088C7374;
    case 652u: goto L_088C737C;
    case 653u: goto L_088C7394;
    case 654u: goto L_088C73A0;
    case 655u: goto L_088C73AC;
    case 656u: goto L_088C73B4;
    case 657u: goto L_088C73C4;
    case 658u: goto L_088C73E4;
    case 659u: goto L_088C73EC;
    case 660u: goto L_088C7408;
    case 661u: goto L_088C740C;
    case 662u: goto L_088C7414;
    case 663u: goto L_088C7428;
    case 664u: goto L_088C7430;
    case 665u: goto L_088C7438;
    case 666u: goto L_088C7444;
    case 667u: goto L_088C744C;
    case 668u: goto L_088C7454;
    case 669u: goto L_088C7470;
    case 670u: goto L_088C7498;
    case 671u: goto L_088C74A0;
    case 672u: goto L_088C74BC;
    case 673u: goto L_088C74DC;
    case 674u: goto L_088C74FC;
    case 675u: goto L_088C751C;
    case 676u: goto L_088C752C;
    case 677u: goto L_088C7530;
    case 678u: goto L_088C7538;
    case 679u: goto L_088C755C;
    case 680u: goto L_088C7598;
    case 681u: goto L_088C75AC;
    case 682u: goto L_088C75B4;
    case 683u: goto L_088C75CC;
    case 684u: goto L_088C75E8;
    case 685u: goto L_088C761C;
    case 686u: goto L_088C7630;
    case 687u: goto L_088C7638;
    case 688u: goto L_088C7648;
    case 689u: goto L_088C7650;
    case 690u: goto L_088C7658;
    case 691u: goto L_088C7660;
    case 692u: goto L_088C7668;
    case 693u: goto L_088C7670;
    case 694u: goto L_088C7678;
    case 695u: goto L_088C7680;
    case 696u: goto L_088C7684;
    case 697u: goto L_088C768C;
    case 698u: goto L_088C769C;
    case 699u: goto L_088C76A4;
    case 700u: goto L_088C76AC;
    case 701u: goto L_088C76B0;
    case 702u: goto L_088C76BC;
    case 703u: goto L_088C76D8;
    case 704u: goto L_088C76E0;
    case 705u: goto L_088C76E8;
    case 706u: goto L_088C76F0;
    case 707u: goto L_088C76F8;
    case 708u: goto L_088C7700;
    case 709u: goto L_088C7704;
    case 710u: goto L_088C7710;
    case 711u: goto L_088C7748;
    case 712u: goto L_088C775C;
    case 713u: goto L_088C777C;
    case 714u: goto L_088C7790;
    case 715u: goto L_088C7794;
    case 716u: goto L_088C77B0;
    case 717u: goto L_088C77C4;
    case 718u: goto L_088C77D4;
    case 719u: goto L_088C7804;
    case 720u: goto L_088C7814;
    case 721u: goto L_088C782C;
    case 722u: goto L_088C7840;
    case 723u: goto L_088C787C;
    case 724u: goto L_088C7884;
    case 725u: goto L_088C7888;
    case 726u: goto L_088C78A8;
    case 727u: goto L_088C78B8;
    case 728u: goto L_088C78C4;
    case 729u: goto L_088C78CC;
    case 730u: goto L_088C78D4;
    case 731u: goto L_088C78DC;
    case 732u: goto L_088C78E4;
    case 733u: goto L_088C78F0;
    case 734u: goto L_088C78FC;
    case 735u: goto L_088C7904;
    case 736u: goto L_088C790C;
    case 737u: goto L_088C7914;
    case 738u: goto L_088C791C;
    case 739u: goto L_088C7924;
    case 740u: goto L_088C792C;
    case 741u: goto L_088C7934;
    case 742u: goto L_088C793C;
    case 743u: goto L_088C7944;
    case 744u: goto L_088C797C;
    case 745u: goto L_088C7990;
    case 746u: goto L_088C79A8;
    case 747u: goto L_088C79C4;
    case 748u: goto L_088C79E4;
    case 749u: goto L_088C7A00;
    case 750u: goto L_088C7A0C;
    case 751u: goto L_088C7A14;
    case 752u: goto L_088C7A1C;
    case 753u: goto L_088C7A38;
    case 754u: goto L_088C7A44;
    case 755u: goto L_088C7A58;
    case 756u: goto L_088C7A60;
    case 757u: goto L_088C7A74;
    case 758u: goto L_088C7A84;
    case 759u: goto L_088C7AC4;
    case 760u: goto L_088C7ACC;
    case 761u: goto L_088C7AD0;
    case 762u: goto L_088C7AF0;
    case 763u: goto L_088C7B20;
    case 764u: goto L_088C7B34;
    case 765u: goto L_088C7B44;
    case 766u: goto L_088C7B4C;
    case 767u: goto L_088C7B54;
    case 768u: goto L_088C7B64;
    case 769u: goto L_088C7B74;
    case 770u: goto L_088C7B84;
    case 771u: goto L_088C7B8C;
    case 772u: goto L_088C7B94;
    case 773u: goto L_088C7BA4;
    case 774u: goto L_088C7BC0;
    case 775u: goto L_088C7BD0;
    case 776u: goto L_088C7BF8;
    case 777u: goto L_088C7C30;
    case 778u: goto L_088C7C38;
    case 779u: goto L_088C7C3C;
    case 780u: goto L_088C7C54;
    case 781u: goto L_088C7C8C;
    case 782u: goto L_088C7CA4;
    case 783u: goto L_088C7CB0;
    case 784u: goto L_088C7CC4;
    case 785u: goto L_088C7CF0;
    case 786u: goto L_088C7D18;
    case 787u: goto L_088C7D80;
    case 788u: goto L_088C7DF4;
    case 789u: goto L_088C7DFC;
    case 790u: goto L_088C7E00;
    case 791u: goto L_088C7E1C;
    case 792u: goto L_088C7E50;
    case 793u: goto L_088C7E78;
    case 794u: goto L_088C7E88;
    case 795u: goto L_088C7EA4;
    case 796u: goto L_088C7EC4;
    case 797u: goto L_088C7EEC;
    case 798u: goto L_088C7EFC;
    case 799u: goto L_088C7F40;
    case 800u: goto L_088C7F50;
    case 801u: goto L_088C7F64;
    case 802u: goto L_088C7F9C;
    case 803u: goto L_088C7FA4;
    case 804u: goto L_088C7FA8;
    case 805u: goto L_088C7FC0;
    case 806u: goto L_088C7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C4000:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4024;
      }
      goto L_088C4008;
    }
L_088C4008:
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[2] = (0u | 1u);
        goto L_088C4024;
    }
    goto L_088C4014;
L_088C4014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4024;
      }
      goto L_088C4020;
    }
L_088C4020:
    ctx.gpr[2] = (0u | 1u);
    goto L_088C4024;
L_088C4024:
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
L_088C403C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C4080u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 349u, 0x088C2EA4u>(ctx, &aot_mem) && ctx.pc == 0x088C4080u) goto L_088C4080;
    return;
L_088C4080:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088C41D0;
      }
      goto L_088C408C;
    }
L_088C408C:
    ctx.gpr[31] = (0x088C4094u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 349u, 0x088C2EA4u>(ctx, &aot_mem) && ctx.pc == 0x088C4094u) goto L_088C4094;
    return;
L_088C4094:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C41D0;
      }
      goto L_088C40A0;
    }
L_088C40A0:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(-6));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(-6));
      if (branch_taken) {
          goto L_088C41C8;
      }
      goto L_088C40B0;
    }
L_088C40B0:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088C40F0;
      }
      goto L_088C40BC;
    }
L_088C40BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088C410C;
      }
      goto L_088C40C4;
    }
L_088C40C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C4128;
      }
      goto L_088C40CC;
    }
L_088C40CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088C4144;
      }
      goto L_088C40D4;
    }
L_088C40D4:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088C4200;
      }
      goto L_088C40F0;
    }
L_088C40F0:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088C4200;
      }
      goto L_088C410C;
    }
L_088C410C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088C4200;
      }
      goto L_088C4128;
    }
L_088C4128:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088C4200;
      }
      goto L_088C4144;
    }
L_088C4144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (0x088C4154u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 640u, 0x08A93FC4u>(ctx, &aot_mem) && ctx.pc == 0x088C4154u) goto L_088C4154;
    return;
L_088C4154:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[5]);
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C4188;
      }
      goto L_088C4170;
    }
L_088C4170:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C4184u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21672));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem) && ctx.pc == 0x088C4184u) goto L_088C4184;
    return;
L_088C4184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088C4188;
L_088C4188:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C419Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 387u, 0x088C312Cu>(ctx, &aot_mem) && ctx.pc == 0x088C419Cu) goto L_088C419C;
    return;
L_088C419C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C4200;
      }
      goto L_088C41C8;
    }
L_088C41C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4200;
      }
      goto L_088C41D0;
    }
L_088C41D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C41E8u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 452u, 0x088C3708u>(ctx, &aot_mem) && ctx.pc == 0x088C41E8u) goto L_088C41E8;
    return;
L_088C41E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4200;
      }
      goto L_088C41F0;
    }
L_088C41F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088C4200u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 718u, 0x089E7584u>(ctx, &aot_mem) && ctx.pc == 0x088C4200u) goto L_088C4200;
    return;
L_088C4200:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    goto L_088C4254;
L_088C4254:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_088C4280;
    }
    goto L_088C4264;
L_088C4264:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[29]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C427Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 485u, 0x08871D88u>(ctx, &aot_mem) && ctx.pc == 0x088C427Cu) goto L_088C427C;
    return;
L_088C427C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_088C4280;
L_088C4280:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[29]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_088C42AC;
L_088C42AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] & 12u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4308;
      }
      goto L_088C42CC;
    }
L_088C42CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C42EC;
      }
      goto L_088C42DC;
    }
L_088C42DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4308;
      }
      goto L_088C42EC;
    }
L_088C42EC:
    ctx.gpr[31] = (0x088C42F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 365u, 0x088C2FB4u>(ctx, &aot_mem) && ctx.pc == 0x088C42F4u) goto L_088C42F4;
    return;
L_088C42F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C433C;
      }
      goto L_088C4308;
    }
L_088C4308:
    ctx.gpr[4] = (ctx.gpr[19] >> 24u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[22] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[19] & 63u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[23] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4324;
    }
L_088C4324:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-21496)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C433C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C58FC;
      }
      goto L_088C4360;
    }
L_088C4360:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4390;
    }
L_088C4390:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C43C8;
    }
L_088C43C8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[19] >> 15u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & 511u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C43F8;
      }
      goto L_088C43EC;
    }
L_088C43EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088C43F8;
L_088C43F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4400;
    }
L_088C4400:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[19] = (ctx.gpr[4] << 3u);
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
    goto L_088C4410;
L_088C4410:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4410;
      }
      goto L_088C4424;
    }
L_088C4424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C442C;
    }
L_088C442C:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4464;
    }
L_088C4464:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[4] << 3u);
    ctx.gpr[20] = (ctx.gpr[18] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088C4488u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 640u, 0x08A93FC4u>(ctx, &aot_mem) && ctx.pc == 0x088C4488u) goto L_088C4488;
    return;
L_088C4488:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C44B8;
      }
      goto L_088C4498;
    }
L_088C4498:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C44F8;
      }
      goto L_088C44B8;
    }
L_088C44B8:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C44CCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 397u, 0x088C32ECu>(ctx, &aot_mem) && ctx.pc == 0x088C44CCu) goto L_088C44CC;
    return;
L_088C44CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088C44F8;
L_088C44F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4500;
    }
L_088C4500:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[20] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[23] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088C4534;
      }
      goto L_088C4520;
    }
L_088C4520:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[21] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[23] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_088C4548;
      }
      goto L_088C4534;
    }
L_088C4534:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[21] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2000));
    goto L_088C4548;
L_088C4548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C45DC;
      }
      goto L_088C4558;
    }
L_088C4558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088C4564u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 6u, 0x08A9402Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4564u) goto L_088C4564;
    return;
L_088C4564:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4594;
      }
      goto L_088C4574;
    }
L_088C4574:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C45D4;
      }
      goto L_088C4594;
    }
L_088C4594:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C45A8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 397u, 0x088C32ECu>(ctx, &aot_mem) && ctx.pc == 0x088C45A8u) goto L_088C45A8;
    return;
L_088C45A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088C45D4;
L_088C45D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C461C;
      }
      goto L_088C45DC;
    }
L_088C45DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C45F0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 408u, 0x088C33B0u>(ctx, &aot_mem) && ctx.pc == 0x088C45F0u) goto L_088C45F0;
    return;
L_088C45F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088C461C;
L_088C461C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4624;
    }
L_088C4624:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C464Cu);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 427u, 0x088C3520u>(ctx, &aot_mem) && ctx.pc == 0x088C464Cu) goto L_088C464C;
    return;
L_088C464C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4654;
    }
L_088C4654:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C468C;
    }
L_088C468C:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C46B4;
      }
      goto L_088C46A0;
    }
L_088C46A0:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C46C4;
      }
      goto L_088C46B4;
    }
L_088C46B4:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088C46C4;
L_088C46C4:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C46EC;
      }
      goto L_088C46D8;
    }
L_088C46D8:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[19] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C46FC;
      }
      goto L_088C46EC;
    }
L_088C46EC:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088C46FC;
L_088C46FC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088C4710u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 427u, 0x088C3520u>(ctx, &aot_mem) && ctx.pc == 0x088C4710u) goto L_088C4710;
    return;
L_088C4710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4718;
    }
L_088C4718:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[5] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (ctx.gpr[19] >> 6u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] & 511u);
    ctx.gpr[31] = (0x088C4744u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 588u, 0x08A93C14u>(ctx, &aot_mem) && ctx.pc == 0x088C4744u) goto L_088C4744;
    return;
L_088C4744:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4768;
      }
      goto L_088C4760;
    }
L_088C4760:
    ctx.gpr[31] = (0x088C4768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 534u, 0x08A16D40u>(ctx, &aot_mem) && ctx.pc == 0x088C4768u) goto L_088C4768;
    return;
L_088C4768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4770;
    }
L_088C4770:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[20] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[23] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088C47A4;
      }
      goto L_088C4790;
    }
L_088C4790:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[21] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[23] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_088C47B8;
      }
      goto L_088C47A4;
    }
L_088C47A4:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[21] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2000));
    goto L_088C47B8;
L_088C47B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C575C;
      }
      goto L_088C47C8;
    }
L_088C47C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C487C;
      }
      goto L_088C47F8;
    }
L_088C47F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088C4804u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 640u, 0x08A93FC4u>(ctx, &aot_mem) && ctx.pc == 0x088C4804u) goto L_088C4804;
    return;
L_088C4804:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4834;
      }
      goto L_088C4814;
    }
L_088C4814:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C4874;
      }
      goto L_088C4834;
    }
L_088C4834:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C4848u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 397u, 0x088C32ECu>(ctx, &aot_mem) && ctx.pc == 0x088C4848u) goto L_088C4848;
    return;
L_088C4848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088C4874;
L_088C4874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C48BC;
      }
      goto L_088C487C;
    }
L_088C487C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C4890u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 408u, 0x088C33B0u>(ctx, &aot_mem) && ctx.pc == 0x088C4890u) goto L_088C4890;
    return;
L_088C4890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088C48BC;
L_088C48BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C48C4;
    }
L_088C48C4:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C48EC;
      }
      goto L_088C48D8;
    }
L_088C48D8:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C48FC;
      }
      goto L_088C48EC;
    }
L_088C48EC:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088C48FC;
L_088C48FC:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C4924;
      }
      goto L_088C4910;
    }
L_088C4910:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[19] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C4934;
      }
      goto L_088C4924;
    }
L_088C4924:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088C4934;
L_088C4934:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C496C;
      }
      goto L_088C4944;
    }
L_088C4944:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088C496C;
      }
      goto L_088C4954;
    }
L_088C4954:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088C4984;
      }
      goto L_088C496C;
    }
L_088C496C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C4984u);
    ctx.gpr[8] = (0u | 6u);
    goto L_088C403C;
L_088C4984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C498C;
    }
L_088C498C:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C49B4;
      }
      goto L_088C49A0;
    }
L_088C49A0:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C49C4;
      }
      goto L_088C49B4;
    }
L_088C49B4:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088C49C4;
L_088C49C4:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C49EC;
      }
      goto L_088C49D8;
    }
L_088C49D8:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[19] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C49FC;
      }
      goto L_088C49EC;
    }
L_088C49EC:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088C49FC;
L_088C49FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C4A34;
      }
      goto L_088C4A0C;
    }
L_088C4A0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088C4A34;
      }
      goto L_088C4A1C;
    }
L_088C4A1C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088C4A4C;
      }
      goto L_088C4A34;
    }
L_088C4A34:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C4A4Cu);
    ctx.gpr[8] = (0u | 7u);
    goto L_088C403C;
L_088C4A4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4A54;
    }
L_088C4A54:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C4A7C;
      }
      goto L_088C4A68;
    }
L_088C4A68:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C4A8C;
      }
      goto L_088C4A7C;
    }
L_088C4A7C:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088C4A8C;
L_088C4A8C:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C4AB4;
      }
      goto L_088C4AA0;
    }
L_088C4AA0:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[19] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C4AC4;
      }
      goto L_088C4AB4;
    }
L_088C4AB4:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088C4AC4;
L_088C4AC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C4AFC;
      }
      goto L_088C4AD4;
    }
L_088C4AD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088C4AFC;
      }
      goto L_088C4AE4;
    }
L_088C4AE4:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088C4B14;
      }
      goto L_088C4AFC;
    }
L_088C4AFC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C4B14u);
    ctx.gpr[8] = (0u | 8u);
    goto L_088C403C;
L_088C4B14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4B1C;
    }
L_088C4B1C:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C4B44;
      }
      goto L_088C4B30;
    }
L_088C4B30:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C4B54;
      }
      goto L_088C4B44;
    }
L_088C4B44:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088C4B54;
L_088C4B54:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C4B7C;
      }
      goto L_088C4B68;
    }
L_088C4B68:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[19] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C4B8C;
      }
      goto L_088C4B7C;
    }
L_088C4B7C:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088C4B8C;
L_088C4B8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C4BC4;
      }
      goto L_088C4B9C;
    }
L_088C4B9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088C4BC4;
      }
      goto L_088C4BAC;
    }
L_088C4BAC:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088C4BDC;
      }
      goto L_088C4BC4;
    }
L_088C4BC4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C4BDCu);
    ctx.gpr[8] = (0u | 9u);
    goto L_088C403C;
L_088C4BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4BE4;
    }
L_088C4BE4:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C4C0C;
      }
      goto L_088C4BF8;
    }
L_088C4BF8:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C4C1C;
      }
      goto L_088C4C0C;
    }
L_088C4C0C:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088C4C1C;
L_088C4C1C:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C4C44;
      }
      goto L_088C4C30;
    }
L_088C4C30:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[19] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C4C54;
      }
      goto L_088C4C44;
    }
L_088C4C44:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088C4C54;
L_088C4C54:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C4C6Cu);
    ctx.gpr[8] = (0u | 10u);
    goto L_088C403C;
L_088C4C6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4C74;
    }
L_088C4C74:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C4CA8;
      }
      goto L_088C4C94;
    }
L_088C4C94:
    ctx.gpr[31] = (0x088C4C9Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 349u, 0x088C2EA4u>(ctx, &aot_mem) && ctx.pc == 0x088C4C9Cu) goto L_088C4C9C;
    return;
L_088C4C9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4CC0;
      }
      goto L_088C4CA8;
    }
L_088C4CA8:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088C4D0C;
      }
      goto L_088C4CC0;
    }
L_088C4CC0:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088C4CE8u);
    ctx.gpr[8] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 452u, 0x088C3708u>(ctx, &aot_mem) && ctx.pc == 0x088C4CE8u) goto L_088C4CE8;
    return;
L_088C4CE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4D0C;
      }
      goto L_088C4CF0;
    }
L_088C4CF0:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088C4D0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 718u, 0x089E7584u>(ctx, &aot_mem) && ctx.pc == 0x088C4D0Cu) goto L_088C4D0C;
    return;
L_088C4D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4D14;
    }
L_088C4D14:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4D68;
      }
      goto L_088C4D30;
    }
L_088C4D30:
    ctx.gpr[5] = (ctx.gpr[19] >> 15u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C4D6C;
      }
      goto L_088C4D50;
    }
L_088C4D50:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4D6C;
      }
      goto L_088C4D68;
    }
L_088C4D68:
    ctx.gpr[4] = (0u | 1u);
    goto L_088C4D6C;
L_088C4D6C:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4D7C;
    }
L_088C4D7C:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[6] = (ctx.gpr[19] >> 6u);
    ctx.gpr[20] = (ctx.gpr[4] & 511u);
    ctx.gpr[6] = (ctx.gpr[6] & 511u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x088C4D9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 537u, 0x088C3C94u>(ctx, &aot_mem) && ctx.pc == 0x088C4D9Cu) goto L_088C4D9C;
    return;
L_088C4D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[19] >> 24u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4DF0;
      }
      goto L_088C4DE8;
    }
L_088C4DE8:
    ctx.gpr[31] = (0x088C4DF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 534u, 0x08A16D40u>(ctx, &aot_mem) && ctx.pc == 0x088C4DF0u) goto L_088C4DF0;
    return;
L_088C4DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4DF8;
    }
L_088C4DF8:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4E28;
    }
L_088C4E28:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4E50;
      }
      goto L_088C4E3C;
    }
L_088C4E3C:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C4E64;
      }
      goto L_088C4E50;
    }
L_088C4E50:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088C4E64;
L_088C4E64:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C4E8C;
      }
      goto L_088C4E78;
    }
L_088C4E78:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C4EA0;
      }
      goto L_088C4E8C;
    }
L_088C4E8C:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2000));
    goto L_088C4EA0;
L_088C4EA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[19] >> 24u);
      if (branch_taken) {
          goto L_088C4F3C;
      }
      goto L_088C4EAC;
    }
L_088C4EAC:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C4ED4;
      }
      goto L_088C4EC0;
    }
L_088C4EC0:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C4EE4;
      }
      goto L_088C4ED4;
    }
L_088C4ED4:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088C4EE4;
L_088C4EE4:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C4F0C;
      }
      goto L_088C4EF8;
    }
L_088C4EF8:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C4F1C;
      }
      goto L_088C4F0C;
    }
L_088C4F0C:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[23] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2000));
    goto L_088C4F1C;
L_088C4F1C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C4F2Cu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 566u, 0x088C3EB8u>(ctx, &aot_mem) && ctx.pc == 0x088C4F2Cu) goto L_088C4F2C;
    return;
L_088C4F2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 24u);
      if (branch_taken) {
          goto L_088C4F3C;
      }
      goto L_088C4F34;
    }
L_088C4F34:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[19] >> 24u);
    goto L_088C4F3C;
L_088C4F3C:
    if (ctx.gpr[20] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_088C4F54;
    }
    goto L_088C4F44;
L_088C4F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C4F80;
      }
      goto L_088C4F54;
    }
L_088C4F54:
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088C4F80;
L_088C4F80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4F88;
    }
L_088C4F88:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C4FB0;
      }
      goto L_088C4F9C;
    }
L_088C4F9C:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C4FC0;
      }
      goto L_088C4FB0;
    }
L_088C4FB0:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088C4FC0;
L_088C4FC0:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C4FE8;
      }
      goto L_088C4FD4;
    }
L_088C4FD4:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C4FF8;
      }
      goto L_088C4FE8;
    }
L_088C4FE8:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[23] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2000));
    goto L_088C4FF8;
L_088C4FF8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5008u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 504u, 0x088C3A8Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5008u) goto L_088C5008;
    return;
L_088C5008:
    ctx.gpr[4] = (ctx.gpr[19] >> 24u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_088C5024;
    }
    goto L_088C5014;
L_088C5014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C5050;
      }
      goto L_088C5024;
    }
L_088C5024:
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088C5050;
L_088C5050:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C5058;
    }
L_088C5058:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C5080;
      }
      goto L_088C506C;
    }
L_088C506C:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C5090;
      }
      goto L_088C5080;
    }
L_088C5080:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088C5090;
L_088C5090:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C50B8;
      }
      goto L_088C50A4;
    }
L_088C50A4:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C50C8;
      }
      goto L_088C50B8;
    }
L_088C50B8:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[23] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2000));
    goto L_088C50C8;
L_088C50C8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C50D8u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 519u, 0x088C3B78u>(ctx, &aot_mem) && ctx.pc == 0x088C50D8u) goto L_088C50D8;
    return;
L_088C50D8:
    ctx.gpr[4] = (ctx.gpr[19] >> 24u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_088C50F4;
    }
    goto L_088C50E4;
L_088C50E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C5120;
      }
      goto L_088C50F4;
    }
L_088C50F4:
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088C5120;
L_088C5120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C5128;
    }
L_088C5128:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C5160;
      }
      goto L_088C5144;
    }
L_088C5144:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C5168;
      }
      goto L_088C5154;
    }
L_088C5154:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C5168;
      }
      goto L_088C5160;
    }
L_088C5160:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    goto L_088C5168;
L_088C5168:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_088C5184;
    }
    goto L_088C5174;
L_088C5174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C51CC;
      }
      goto L_088C5184;
    }
L_088C5184:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (4u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088C51CC;
L_088C51CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C51D4;
    }
L_088C51D4:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C51F0;
      }
      goto L_088C51E4;
    }
L_088C51E4:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088C51F0;
L_088C51F0:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[20] = (ctx.gpr[4] & 511u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5208u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 522u, 0x08872148u>(ctx, &aot_mem) && ctx.pc == 0x088C5208u) goto L_088C5208;
    return;
L_088C5208:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5270;
      }
      goto L_088C5214;
    }
L_088C5214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5250;
      }
      goto L_088C5224;
    }
L_088C5224:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C5234u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 550u, 0x088723DCu>(ctx, &aot_mem) && ctx.pc == 0x088C5234u) goto L_088C5234;
    return;
L_088C5234:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C5248;
      }
      goto L_088C523C;
    }
L_088C523C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088C5248;
L_088C5248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C5250;
    }
L_088C5250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-16), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088C58FC;
      }
      goto L_088C5270;
    }
L_088C5270:
    ctx.gpr[4] = (ctx.gpr[19] & 63u);
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C529C;
      }
      goto L_088C5280;
    }
L_088C5280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-16), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088C5378;
      }
      goto L_088C529C;
    }
L_088C529C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[19] >> 24u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24)));
    ctx.gpr[19] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C52C4;
      }
      goto L_088C52B8;
    }
L_088C52B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C52C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 68u, 0x08AB05DCu>(ctx, &aot_mem) && ctx.pc == 0x088C52C4u) goto L_088C52C4;
    return;
L_088C52C4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
        goto L_088C532C;
    }
    goto L_088C52E0;
L_088C52E0:
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    goto L_088C52E4;
L_088C52E4:
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_088C52E4;
      }
      goto L_088C5328;
    }
L_088C5328:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    goto L_088C532C;
L_088C532C:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-16), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_088C5378;
L_088C5378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4254;
      }
      goto L_088C5380;
    }
L_088C5380:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (ctx.gpr[19] >> 15u);
    ctx.gpr[19] = (ctx.gpr[19] & 511u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24));
      if (branch_taken) {
          goto L_088C53A4;
      }
      goto L_088C5394;
    }
L_088C5394:
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088C53A4;
L_088C53A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_088C53C0;
    }
    goto L_088C53B0;
L_088C53B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C53BCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 68u, 0x08AB05DCu>(ctx, &aot_mem) && ctx.pc == 0x088C53BCu) goto L_088C53BC;
    return;
L_088C53BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_088C53C0;
L_088C53C0:
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_088C53EC;
    }
    goto L_088C53E4;
L_088C53E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088C58FC;
      }
      goto L_088C53EC;
    }
L_088C53EC:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088C540Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 550u, 0x088723DCu>(ctx, &aot_mem) && ctx.pc == 0x088C540Cu) goto L_088C540C;
    return;
L_088C540C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C5420;
      }
      goto L_088C5414;
    }
L_088C5414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088C5420;
L_088C5420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088C4280;
      }
      goto L_088C5428;
    }
L_088C5428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[21] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088C544C;
      }
      goto L_088C543C;
    }
L_088C543C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C544Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21628));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem) && ctx.pc == 0x088C544Cu) goto L_088C544C;
    return;
L_088C544C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088C5480;
      }
      goto L_088C545C;
    }
L_088C545C:
    ctx.gpr[31] = (0x088C5464u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 349u, 0x088C2EA4u>(ctx, &aot_mem) && ctx.pc == 0x088C5464u) goto L_088C5464;
    return;
L_088C5464:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5480;
      }
      goto L_088C5470;
    }
L_088C5470:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5480u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21588));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem) && ctx.pc == 0x088C5480u) goto L_088C5480;
    return;
L_088C5480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088C54B4;
      }
      goto L_088C5490;
    }
L_088C5490:
    ctx.gpr[31] = (0x088C5498u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 349u, 0x088C2EA4u>(ctx, &aot_mem) && ctx.pc == 0x088C5498u) goto L_088C5498;
    return;
L_088C5498:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C54B4;
      }
      goto L_088C54A4;
    }
L_088C54A4:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C54B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21556));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem) && ctx.pc == 0x088C54B4u) goto L_088C54B4;
    return;
L_088C54B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
      if (branch_taken) {
          goto L_088C54EC;
      }
      goto L_088C54D0;
    }
L_088C54D0:
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088C54E4;
    }
    goto L_088C54E4;
L_088C54E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5500;
      }
      goto L_088C54EC;
    }
L_088C54EC:
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088C5500;
    }
    goto L_088C5500;
L_088C5500:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (4u << 16u);
      if (branch_taken) {
          goto L_088C5534;
      }
      goto L_088C5508;
    }
L_088C5508:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088C5534;
L_088C5534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C553C;
    }
L_088C553C:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] >> 6u);
    ctx.gpr[19] = (ctx.gpr[4] & 511u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C55D0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 560u, 0x088724C4u>(ctx, &aot_mem) && ctx.pc == 0x088C55D0u) goto L_088C55D0;
    return;
L_088C55D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[20] >> 24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[21]);
    goto L_088C55F4;
L_088C55F4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088C55F4;
      }
      goto L_088C5624;
    }
L_088C5624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_088C5640;
    }
    goto L_088C5630;
L_088C5630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C566C;
      }
      goto L_088C5640;
    }
L_088C5640:
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088C566C;
L_088C566C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C5674;
    }
L_088C5674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (4u << 16u);
      if (branch_taken) {
          goto L_088C56F0;
      }
      goto L_088C5684;
    }
L_088C5684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-23872));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088C56B4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x088C56B4u) goto L_088C56B4;
    return;
L_088C56B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C56C4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem) && ctx.pc == 0x088C56C4u) goto L_088C56C4;
    return;
L_088C56C4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C56D0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 640u, 0x08A93FC4u>(ctx, &aot_mem) && ctx.pc == 0x088C56D0u) goto L_088C56D0;
    return;
L_088C56D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (4u << 16u);
    goto L_088C56F0;
L_088C56F0:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C571C;
    }
L_088C571C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C575C;
      }
      goto L_088C572C;
    }
L_088C572C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088C5764;
      }
      goto L_088C5750;
    }
L_088C5750:
    ctx.gpr[21] = (ctx.gpr[20] & 31u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C578C;
      }
      goto L_088C575C;
    }
L_088C575C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C58FC;
      }
      goto L_088C5764;
    }
L_088C5764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088C578C;
L_088C578C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C57D4;
      }
      goto L_088C5798;
    }
L_088C5798:
    ctx.gpr[4] = (ctx.gpr[21] << 3u);
    ctx.gpr[23] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C57B0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 28u, 0x08A94190u>(ctx, &aot_mem) && ctx.pc == 0x088C57B0u) goto L_088C57B0;
    return;
L_088C57B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C5798;
      }
      goto L_088C57D4;
    }
L_088C57D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C57DC;
    }
L_088C57DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C57E8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 68u, 0x08AB05DCu>(ctx, &aot_mem) && ctx.pc == 0x088C57E8u) goto L_088C57E8;
    return;
L_088C57E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C57F0;
    }
L_088C57F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5828u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 56u, 0x08AB04C0u>(ctx, &aot_mem) && ctx.pc == 0x088C5828u) goto L_088C5828;
    return;
L_088C5828:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_088C58CC;
      }
      goto L_088C5840;
    }
L_088C5840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_088C5884;
    }
    goto L_088C5858;
L_088C5858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C58AC;
      }
      goto L_088C5884;
    }
L_088C5884:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] >> 15u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[31] = (0x088C58A0u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 59u, 0x08AB0548u>(ctx, &aot_mem) && ctx.pc == 0x088C58A0u) goto L_088C58A0;
    return;
L_088C58A0:
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_088C58AC;
L_088C58AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5840;
      }
      goto L_088C58C8;
    }
L_088C58C8:
    ctx.gpr[4] = (0u | 6u);
    goto L_088C58CC;
L_088C58CC:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C58EC;
    }
L_088C58EC:
    ctx.gpr[31] = (0x088C58F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 534u, 0x08A16D40u>(ctx, &aot_mem) && ctx.pc == 0x088C58F4u) goto L_088C58F4;
    return;
L_088C58F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C42AC;
      }
      goto L_088C58FC;
    }
L_088C58FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5928:
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22528));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5940:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5984;
      }
      goto L_088C5950;
    }
L_088C5950:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27508));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5904), 0u);
      if (branch_taken) {
          goto L_088C5970;
      }
      goto L_088C5964;
    }
L_088C5964:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_088C5970;
L_088C5970:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5984;
      }
      goto L_088C597C;
    }
L_088C597C:
    ctx.gpr[31] = (0x088C5984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x088C5984u) goto L_088C5984;
    return;
L_088C5984:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5990:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C59E4;
      }
      goto L_088C59A0;
    }
L_088C59A0:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22528));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088C59D0;
      }
      goto L_088C59B0;
    }
L_088C59B0:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27508));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5904), 0u);
      if (branch_taken) {
          goto L_088C59D0;
      }
      goto L_088C59C4;
    }
L_088C59C4:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_088C59D0;
L_088C59D0:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C59E4;
      }
      goto L_088C59DC;
    }
L_088C59DC:
    ctx.gpr[31] = (0x088C59E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x088C59E4u) goto L_088C59E4;
    return;
L_088C59E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C59F0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C59F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[12] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_088C5B10;
      }
      goto L_088C5A1C;
    }
L_088C5A1C:
    ctx.gpr[11] = (2234u << 16u);
    ctx.gpr[3] = (ctx.gpr[11] + static_cast<std::uint32_t>(14520));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[9]);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    ctx.gpr[14] = (ctx.gpr[5] & 255u);
    goto L_088C5A40;
L_088C5A40:
    ctx.gpr[13] = (ctx.gpr[14] & 255u);
    ctx.gpr[13] = (ctx.gpr[13] << 4u);
    ctx.gpr[15] = (ctx.gpr[13] + ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[15]);
    ctx.gpr[13] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[7];
    ctx.gpr[13] = (ctx.gpr[14] & 255u);
      if (branch_taken) {
          goto L_088C5B00;
      }
      goto L_088C5A60;
    }
L_088C5A60:
    ctx.gpr[13] = (ctx.gpr[13] << 4u);
    ctx.gpr[15] = (ctx.gpr[13] + ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[15]);
    ctx.gpr[13] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[8];
    ctx.gpr[13] = (ctx.gpr[14] & 255u);
      if (branch_taken) {
          goto L_088C5A88;
      }
      goto L_088C5A7C;
    }
L_088C5A7C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088C5B00;
      }
      goto L_088C5A84;
    }
L_088C5A84:
    ctx.gpr[13] = (ctx.gpr[14] & 255u);
    goto L_088C5A88;
L_088C5A88:
    ctx.gpr[13] = (ctx.gpr[13] << 4u);
    ctx.gpr[15] = (ctx.gpr[13] + ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[15]);
    ctx.gpr[13] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[15] = (ctx.gpr[3] + ctx.gpr[13]);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[15] = (ctx.gpr[15] & 1u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5AB8;
      }
      goto L_088C5AB0;
    }
L_088C5AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C5AB8;
      }
      goto L_088C5AB8;
    }
L_088C5AB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[15] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_088C5AC8;
      }
      goto L_088C5AC0;
    }
L_088C5AC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (ctx.gpr[11] | 0u);
      if (branch_taken) {
          goto L_088C5AC8;
      }
      goto L_088C5AC8;
    }
L_088C5AC8:
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[15];
    // nop
      if (branch_taken) {
          goto L_088C5AD8;
      }
      goto L_088C5AD0;
    }
L_088C5AD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088C5B00;
      }
      goto L_088C5AD8;
    }
L_088C5AD8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_088C5AE8;
      }
      goto L_088C5AE0;
    }
L_088C5AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C5B00;
      }
      goto L_088C5AE8;
    }
L_088C5AE8:
    ctx.gpr[4] = (ctx.gpr[14] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[12] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C5B14;
      }
      goto L_088C5B00;
    }
L_088C5B00:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[14] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088C5A40;
      }
      goto L_088C5B10;
    }
L_088C5B10:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C5B14;
L_088C5B14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5B1C:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26320)));
    ctx.gpr[5] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26344)));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5B64;
      }
      goto L_088C5B50;
    }
L_088C5B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26324)));
    ctx.gpr[5] = (0u | 60u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23835), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088C5B64;
L_088C5B64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5B6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C5B84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x088C5B84u) goto L_088C5B84;
    return;
L_088C5B84:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5B94u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x088C5B94u) goto L_088C5B94;
    return;
L_088C5B94:
    ctx.gpr[31] = (0x088C5B9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 542u, 0x08B59EE4u>(ctx, &aot_mem) && ctx.pc == 0x088C5B9Cu) goto L_088C5B9C;
    return;
L_088C5B9C:
    ctx.gpr[31] = (0x088C5BA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 75u, 0x08A8C7ACu>(ctx, &aot_mem) && ctx.pc == 0x088C5BA4u) goto L_088C5BA4;
    return;
L_088C5BA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088C5C0C;
      }
      goto L_088C5BB8;
    }
L_088C5BB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16356)));
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C5BF8;
      }
      goto L_088C5BD0;
    }
L_088C5BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(6027));
      if (branch_taken) {
          goto L_088C5BF0;
      }
      goto L_088C5BE0;
    }
L_088C5BE0:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088C5BF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x088C5BF0u) goto L_088C5BF0;
    return;
L_088C5BF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088C5CC0;
      }
      goto L_088C5BF8;
    }
L_088C5BF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5BB8;
      }
      goto L_088C5C0C;
    }
L_088C5C0C:
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-23788));
    ctx.gpr[31] = (0x088C5C18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x088C5C18u) goto L_088C5C18;
    return;
L_088C5C18:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5C28u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem) && ctx.pc == 0x088C5C28u) goto L_088C5C28;
    return;
L_088C5C28:
    ctx.gpr[31] = (0x088C5C30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 75u, 0x08A8C7ACu>(ctx, &aot_mem) && ctx.pc == 0x088C5C30u) goto L_088C5C30;
    return;
L_088C5C30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088C5C98;
      }
      goto L_088C5C44;
    }
L_088C5C44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16356)));
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C5C84;
      }
      goto L_088C5C5C;
    }
L_088C5C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(6027));
      if (branch_taken) {
          goto L_088C5C7C;
      }
      goto L_088C5C6C;
    }
L_088C5C6C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088C5C7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x088C5C7Cu) goto L_088C5C7C;
    return;
L_088C5C7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088C5CC0;
      }
      goto L_088C5C84;
    }
L_088C5C84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5C44;
      }
      goto L_088C5C98;
    }
L_088C5C98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          goto L_088C5CBC;
      }
      goto L_088C5CAC;
    }
L_088C5CAC:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088C5CBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x088C5CBCu) goto L_088C5CBC;
    return;
L_088C5CBC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_088C5CC0;
L_088C5CC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5CD0:
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
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5CF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (ctx.gpr[17] << 6u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C5D5C;
      }
      goto L_088C5D3C;
    }
L_088C5D3C:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[17] << 4u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1960), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C5D94;
      }
      goto L_088C5D5C;
    }
L_088C5D5C:
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1939)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5DD0;
      }
      goto L_088C5D94;
    }
L_088C5D94:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C5DA4u);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x088C5DA4u) goto L_088C5DA4;
    return;
L_088C5DA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C5DD8;
      }
      goto L_088C5DC8;
    }
L_088C5DC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5E5C;
      }
      goto L_088C5DD0;
    }
L_088C5DD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5E60;
      }
      goto L_088C5DD8;
    }
L_088C5DD8:
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[7] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    goto L_088C5DF4;
L_088C5DF4:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5E48;
      }
      goto L_088C5E18;
    }
L_088C5E18:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1921));
    ctx.gpr[7] = (0u | 19u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1920));
    ctx.gpr[31] = (0x088C5E2Cu);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x088C5E2Cu) goto L_088C5E2C;
    return;
L_088C5E2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C5E5C;
      }
      goto L_088C5E48;
    }
L_088C5E48:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C5DF4;
      }
      goto L_088C5E5C;
    }
L_088C5E5C:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1920), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088C5E60;
L_088C5E60:
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
L_088C5E7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21256)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
      if (branch_taken) {
          goto L_088C5F1C;
      }
      goto L_088C5EA8;
    }
L_088C5EA8:
    ctx.gpr[6] = (0u | 3000u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_088C5EB0;
L_088C5EB0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20256)));
    ctx.gpr[9] = (ctx.gpr[7] << 6u);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(6256)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5F08;
      }
      goto L_088C5ED0;
    }
L_088C5ED0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(6260)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (ctx.gpr[9] & 14u);
    ctx.gpr[9] = (ctx.gpr[9] ^ 6u);
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5F08;
      }
      goto L_088C5EF0;
    }
L_088C5EF0:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1960), ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = ctx.gpr[9]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[9] = (ctx.hi);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1964), ctx.gpr[9]);
    goto L_088C5F08;
L_088C5F08:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21256)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C5EB0;
      }
      goto L_088C5F1C;
    }
L_088C5F1C:
    ctx.gpr[18] = (0u | 0u);
    goto L_088C5F20;
L_088C5F20:
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
    ctx.gpr[31] = (0x088C5F2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 435u, 0x088CA378u>(ctx, &aot_mem) && ctx.pc == 0x088C5F2Cu) goto L_088C5F2C;
    return;
L_088C5F2C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5F20;
      }
      goto L_088C5F44;
    }
L_088C5F44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5F64;
      }
      goto L_088C5F50;
    }
L_088C5F50:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C5F5Cu);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x088C5F5Cu) goto L_088C5F5C;
    return;
L_088C5F5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5F70;
      }
      goto L_088C5F64;
    }
L_088C5F64:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C5F70u);
    ctx.gpr[5] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x088C5F70u) goto L_088C5F70;
    return;
L_088C5F70:
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
L_088C5F88:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26332)));
    ctx.gpr[6] = (0u | 26u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[10]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[10]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6004:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[10]);
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[9] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[11] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088C6058;
      }
      goto L_088C6050;
    }
L_088C6050:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088C6060;
      }
      goto L_088C6058;
    }
L_088C6058:
    ctx.gpr[6] = (0u | 100u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088C6060;
L_088C6060:
    ctx.gpr[6] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6080:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C609C;
      }
      goto L_088C608C;
    }
L_088C608C:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088C609C;
L_088C609C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C60A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[6] = (2238u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C60C8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(14864));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088C60C8u) goto L_088C60C8;
    return;
L_088C60C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(23520), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088C60E8;
      }
      goto L_088C60D8;
    }
L_088C60D8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C60E8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem) && ctx.pc == 0x088C60E8u) goto L_088C60E8;
    return;
L_088C60E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x088C60F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088C60F8u) goto L_088C60F8;
    return;
L_088C60F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24260), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C6114;
      }
      goto L_088C6104;
    }
L_088C6104:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C6114u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem) && ctx.pc == 0x088C6114u) goto L_088C6114;
    return;
L_088C6114:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x088C6124u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088C6124u) goto L_088C6124;
    return;
L_088C6124:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24256), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C6140;
      }
      goto L_088C6130;
    }
L_088C6130:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C6140u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem) && ctx.pc == 0x088C6140u) goto L_088C6140;
    return;
L_088C6140:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x088C6150u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088C6150u) goto L_088C6150;
    return;
L_088C6150:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(26144), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C616C;
      }
      goto L_088C615C;
    }
L_088C615C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C616Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem) && ctx.pc == 0x088C616Cu) goto L_088C616C;
    return;
L_088C616C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x088C617Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088C617Cu) goto L_088C617C;
    return;
L_088C617C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(23524), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C6198;
      }
      goto L_088C6188;
    }
L_088C6188:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C6198u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem) && ctx.pc == 0x088C6198u) goto L_088C6198;
    return;
L_088C6198:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x088C61A8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088C61A8u) goto L_088C61A8;
    return;
L_088C61A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(23528), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C61C4;
      }
      goto L_088C61B4;
    }
L_088C61B4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C61C4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem) && ctx.pc == 0x088C61C4u) goto L_088C61C4;
    return;
L_088C61C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[31] = (0x088C61D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088C61D4u) goto L_088C61D4;
    return;
L_088C61D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(26148), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C61F0;
      }
      goto L_088C61E0;
    }
L_088C61E0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C61F0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem) && ctx.pc == 0x088C61F0u) goto L_088C61F0;
    return;
L_088C61F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x088C6200u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088C6200u) goto L_088C6200;
    return;
L_088C6200:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(26152), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C621C;
      }
      goto L_088C620C;
    }
L_088C620C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C621Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem) && ctx.pc == 0x088C621Cu) goto L_088C621C;
    return;
L_088C621C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 127u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088C6228;
L_088C6228:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6028));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26248), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(26268), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(26273), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(26278), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(26304), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(26240), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26284), 0u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(26309), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(26314), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(26319), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C6228;
      }
      goto L_088C626C;
    }
L_088C626C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[31] = (0x088C6278u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C5E7C;
L_088C6278:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21528), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21529), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21532), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6298:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C62C8;
      }
      goto L_088C62B4;
    }
L_088C62B4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088C62C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem) && ctx.pc == 0x088C62C0u) goto L_088C62C0;
    return;
L_088C62C0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(26152), ctx.gpr[4]);
    goto L_088C62C8;
L_088C62C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C62E8;
      }
      goto L_088C62D4;
    }
L_088C62D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088C62E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem) && ctx.pc == 0x088C62E0u) goto L_088C62E0;
    return;
L_088C62E0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(26148), ctx.gpr[4]);
    goto L_088C62E8;
L_088C62E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(23528)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C6308;
      }
      goto L_088C62F4;
    }
L_088C62F4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088C6300u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem) && ctx.pc == 0x088C6300u) goto L_088C6300;
    return;
L_088C6300:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(23528), ctx.gpr[4]);
    goto L_088C6308;
L_088C6308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(23524)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C6328;
      }
      goto L_088C6314;
    }
L_088C6314:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088C6320u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem) && ctx.pc == 0x088C6320u) goto L_088C6320;
    return;
L_088C6320:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(23524), ctx.gpr[4]);
    goto L_088C6328;
L_088C6328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(23520)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C6348;
      }
      goto L_088C6334;
    }
L_088C6334:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088C6340u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem) && ctx.pc == 0x088C6340u) goto L_088C6340;
    return;
L_088C6340:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(23520), ctx.gpr[4]);
    goto L_088C6348;
L_088C6348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24260)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C6368;
      }
      goto L_088C6354;
    }
L_088C6354:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088C6360u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem) && ctx.pc == 0x088C6360u) goto L_088C6360;
    return;
L_088C6360:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24260), ctx.gpr[4]);
    goto L_088C6368;
L_088C6368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24256)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C6388;
      }
      goto L_088C6374;
    }
L_088C6374:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088C6380u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem) && ctx.pc == 0x088C6380u) goto L_088C6380;
    return;
L_088C6380:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24256), ctx.gpr[4]);
    goto L_088C6388;
L_088C6388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C63A8;
      }
      goto L_088C6394;
    }
L_088C6394:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088C63A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem) && ctx.pc == 0x088C63A0u) goto L_088C63A0;
    return;
L_088C63A0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(26144), ctx.gpr[4]);
    goto L_088C63A8;
L_088C63A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C63B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C63C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C63D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088C63D4u) goto L_088C63D4;
    return;
L_088C63D4:
    ctx.gpr[31] = (0x088C63DCu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088C63DCu) goto L_088C63DC;
    return;
L_088C63DC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088C6418;
      }
      goto L_088C63E4;
    }
L_088C63E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6418;
      }
      goto L_088C63EC;
    }
L_088C63EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6418;
      }
      goto L_088C63F8;
    }
L_088C63F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 4u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6418;
      }
      goto L_088C6414;
    }
L_088C6414:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_088C6418;
L_088C6418:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C642C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] << 6u);
    ctx.gpr[6] = (ctx.gpr[7] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(6265)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6458;
    }
L_088C6458:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(6256)));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6468;
    }
L_088C6468:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-21128)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6480:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C649C;
      }
      goto L_088C648C;
    }
L_088C648C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C649Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_088C6600;
L_088C649C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C64A4;
    }
L_088C64A4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C64C0;
      }
      goto L_088C64B0;
    }
L_088C64B0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C64C0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 127u, 0x088D85BCu>(ctx, &aot_mem) && ctx.pc == 0x088C64C0u) goto L_088C64C0;
    return;
L_088C64C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C64C8;
    }
L_088C64C8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C64E4;
      }
      goto L_088C64D4;
    }
L_088C64D4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C64E4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 155u, 0x088D8878u>(ctx, &aot_mem) && ctx.pc == 0x088C64E4u) goto L_088C64E4;
    return;
L_088C64E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C64EC;
    }
L_088C64EC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6508;
      }
      goto L_088C64F8;
    }
L_088C64F8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C6508u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 326u, 0x088C99ACu>(ctx, &aot_mem) && ctx.pc == 0x088C6508u) goto L_088C6508;
    return;
L_088C6508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6510;
    }
L_088C6510:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6540;
      }
      goto L_088C651C;
    }
L_088C651C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u | 13u);
      if (branch_taken) {
          goto L_088C6530;
      }
      goto L_088C6528;
    }
L_088C6528:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088C6540;
      }
      goto L_088C6530;
    }
L_088C6530:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C6540u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 326u, 0x088DA180u>(ctx, &aot_mem) && ctx.pc == 0x088C6540u) goto L_088C6540;
    return;
L_088C6540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6548;
    }
L_088C6548:
    ctx.gpr[31] = (0x088C6550u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 421u, 0x088DAA78u>(ctx, &aot_mem) && ctx.pc == 0x088C6550u) goto L_088C6550;
    return;
L_088C6550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6558;
    }
L_088C6558:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C656C;
      }
      goto L_088C6564;
    }
L_088C6564:
    ctx.gpr[31] = (0x088C656Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 507u, 0x088DB134u>(ctx, &aot_mem) && ctx.pc == 0x088C656Cu) goto L_088C656C;
    return;
L_088C656C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6574;
    }
L_088C6574:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6588;
      }
      goto L_088C6580;
    }
L_088C6580:
    ctx.gpr[31] = (0x088C6588u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 342u, 0x088C9B5Cu>(ctx, &aot_mem) && ctx.pc == 0x088C6588u) goto L_088C6588;
    return;
L_088C6588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6590;
    }
L_088C6590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6598;
    }
L_088C6598:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C65AC;
      }
      goto L_088C65A4;
    }
L_088C65A4:
    ctx.gpr[31] = (0x088C65ACu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 366u, 0x088DA5A0u>(ctx, &aot_mem) && ctx.pc == 0x088C65ACu) goto L_088C65AC;
    return;
L_088C65AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C65B4;
    }
L_088C65B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C65C8;
      }
      goto L_088C65C0;
    }
L_088C65C0:
    ctx.gpr[31] = (0x088C65C8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 335u, 0x088C9A4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C65C8u) goto L_088C65C8;
    return;
L_088C65C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C65D0;
    }
L_088C65D0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C65EC;
      }
      goto L_088C65DC;
    }
L_088C65DC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C65ECu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 317u, 0x088C9818u>(ctx, &aot_mem) && ctx.pc == 0x088C65ECu) goto L_088C65EC;
    return;
L_088C65EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C65F4;
    }
L_088C65F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6600:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(6260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C66BC;
      }
      goto L_088C6624;
    }
L_088C6624:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] >> 1u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 7u);
      if (branch_taken) {
          goto L_088C6660;
      }
      goto L_088C663C;
    }
L_088C663C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C66BC;
      }
      goto L_088C6648;
    }
L_088C6648:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6670;
      }
      goto L_088C6650;
    }
L_088C6650:
    ctx.gpr[31] = (0x088C6658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 617u, 0x088CB124u>(ctx, &aot_mem) && ctx.pc == 0x088C6658u) goto L_088C6658;
    return;
L_088C6658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C66BC;
      }
      goto L_088C6660;
    }
L_088C6660:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088C6680;
      }
      goto L_088C6668;
    }
L_088C6668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C66BC;
      }
      goto L_088C6670;
    }
L_088C6670:
    ctx.gpr[31] = (0x088C6678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 177u, 0x088C9078u>(ctx, &aot_mem) && ctx.pc == 0x088C6678u) goto L_088C6678;
    return;
L_088C6678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C66BC;
      }
      goto L_088C6680;
    }
L_088C6680:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C66AC;
      }
      goto L_088C669C;
    }
L_088C669C:
    ctx.gpr[31] = (0x088C66A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 395u, 0x08A75DA4u>(ctx, &aot_mem) && ctx.pc == 0x088C66A4u) goto L_088C66A4;
    return;
L_088C66A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C66B4;
      }
      goto L_088C66AC;
    }
L_088C66AC:
    ctx.gpr[31] = (0x088C66B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 180u, 0x088C90E4u>(ctx, &aot_mem) && ctx.pc == 0x088C66B4u) goto L_088C66B4;
    return;
L_088C66B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C66BC;
      }
      goto L_088C66BC;
    }
L_088C66BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C66C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17394u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C6854;
      }
      goto L_088C66F8;
    }
L_088C66F8:
    ctx.gpr[4] = (15395u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C6854;
      }
      goto L_088C6718;
    }
L_088C6718:
    ctx.gpr[31] = (0x088C6720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem) && ctx.pc == 0x088C6720u) goto L_088C6720;
    return;
L_088C6720:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_088C673C;
    }
    goto L_088C6728;
L_088C6728:
    ctx.gpr[31] = (0x088C6730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem) && ctx.pc == 0x088C6730u) goto L_088C6730;
    return;
L_088C6730:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6854;
      }
      goto L_088C6738;
    }
L_088C6738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_088C673C;
L_088C673C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(696)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(696), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(696)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C67BC;
      }
      goto L_088C675C;
    }
L_088C675C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(696), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088C6770u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088C6080;
L_088C6770:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16816u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088C67A4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088C67A4u) goto L_088C67A4;
    return;
L_088C67A4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_088C67C4;
    }
    goto L_088C67B4;
L_088C67B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6854;
      }
      goto L_088C67BC;
    }
L_088C67BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6854;
      }
      goto L_088C67C4;
    }
L_088C67C4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(697));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(697)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26324)));
        goto L_088C67F8;
    }
    goto L_088C67EC;
L_088C67EC:
    ctx.gpr[5] = (0u | 68u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(697), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26324)));
    goto L_088C67F8;
L_088C67F8:
    ctx.gpr[5] = (0u | 4000u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(81));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28000));
    ctx.gpr[31] = (0x088C6854u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088C6854u) goto L_088C6854;
    return;
L_088C6854:
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
L_088C686C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (17561u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C6AB4;
      }
      goto L_088C68B0;
    }
L_088C68B0:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088C68BCu);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem) && ctx.pc == 0x088C68BCu) goto L_088C68BC;
    return;
L_088C68BC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C68E8;
      }
      goto L_088C68C8;
    }
L_088C68C8:
    ctx.gpr[31] = (0x088C68D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088C68D0u) goto L_088C68D0;
    return;
L_088C68D0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16908u << 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C68F0;
      }
      goto L_088C68E0;
    }
L_088C68E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088C692C;
      }
      goto L_088C68E8;
    }
L_088C68E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6AB4;
      }
      goto L_088C68F0;
    }
L_088C68F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6928;
      }
      goto L_088C6920;
    }
L_088C6920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088C692C;
      }
      goto L_088C6928;
    }
L_088C6928:
    ctx.gpr[18] = (0u | 0u);
    goto L_088C692C;
L_088C692C:
    if (ctx.gpr[18] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(604)));
        goto L_088C6990;
    }
    goto L_088C6934;
L_088C6934:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6640));
    ctx.gpr[31] = (0x088C6944u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x088C6944u) goto L_088C6944;
    return;
L_088C6944:
    ctx.gpr[19] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (0x088C6950u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x088C6950u) goto L_088C6950;
    return;
L_088C6950:
    ctx.gpr[20] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (0x088C695Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 90u, 0x0898C3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C695Cu) goto L_088C695C;
    return;
L_088C695C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C6974;
      }
      goto L_088C6968;
    }
L_088C6968:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_088C6974;
L_088C6974:
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_088C6984;
    }
    goto L_088C6984;
L_088C6984:
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088C69C4;
      }
      goto L_088C6990;
    }
L_088C6990:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(608)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_088C69C4;
L_088C69C4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_088C69D4;
    }
    goto L_088C69D4;
L_088C69D4:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_088C6A20;
      }
      goto L_088C69E4;
    }
L_088C69E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23780)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6A0C;
      }
      goto L_088C69F4;
    }
L_088C69F4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30));
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_088C6A04;
    }
    goto L_088C6A04;
L_088C6A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088C6A20;
      }
      goto L_088C6A0C;
    }
L_088C6A0C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_088C6A1C;
    }
    goto L_088C6A1C;
L_088C6A1C:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_088C6A20;
L_088C6A20:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088C6A2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C6080;
L_088C6A2C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C6A40u);
    ctx.gpr[5] = (0u | 70u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088C6A40u) goto L_088C6A40;
    return;
L_088C6A40:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088C6AA8;
      }
      goto L_088C6A50;
    }
L_088C6A50:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5926u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C6AA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088C6AA8u) goto L_088C6AA8;
    return;
L_088C6AA8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6AB4;
      }
      goto L_088C6AB0;
    }
L_088C6AB0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23780), ctx.gpr[19]);
    goto L_088C6AB4;
L_088C6AB4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6ADC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C6CEC;
      }
      goto L_088C6B18;
    }
L_088C6B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088C6B44;
      }
      goto L_088C6B2C;
    }
L_088C6B2C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6B4C;
      }
      goto L_088C6B3C;
    }
L_088C6B3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6CE4;
      }
      goto L_088C6B44;
    }
L_088C6B44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C6CF0;
      }
      goto L_088C6B4C;
    }
L_088C6B4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C6B70;
      }
      goto L_088C6B64;
    }
L_088C6B64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(644)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6CE4;
      }
      goto L_088C6B70;
    }
L_088C6B70:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088C6B80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C6080;
L_088C6B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1885)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088C6BB0;
      }
      goto L_088C6B98;
    }
L_088C6B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_088C6BD4;
      }
      goto L_088C6BB0;
    }
L_088C6BB0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1886)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1888)));
      if (branch_taken) {
          goto L_088C6BD0;
      }
      goto L_088C6BBC;
    }
L_088C6BBC:
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1888), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088C6BD0;
L_088C6BD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_088C6BD4;
L_088C6BD4:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16832u << 16u);
      if (branch_taken) {
          goto L_088C6BE8;
      }
      goto L_088C6BE4;
    }
L_088C6BE4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    goto L_088C6BE8;
L_088C6BE8:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088C6C0Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088C6C0Cu) goto L_088C6C0C;
    return;
L_088C6C0C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088C6CE4;
      }
      goto L_088C6C1C;
    }
L_088C6C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (17851u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C6C5C;
      }
      goto L_088C6C48;
    }
L_088C6C48:
    ctx.gpr[4] = (0u | 61u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 292u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C6C6C;
      }
      goto L_088C6C5C;
    }
L_088C6C5C:
    ctx.gpr[4] = (0u | 62u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 293u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_088C6C6C;
L_088C6C6C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C6C94;
      }
      goto L_088C6C84;
    }
L_088C6C84:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7000));
      if (branch_taken) {
          goto L_088C6CAC;
      }
      goto L_088C6C94;
    }
L_088C6C94:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7000));
    goto L_088C6CAC;
L_088C6CAC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C6CE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088C6CE4u) goto L_088C6CE4;
    return;
L_088C6CE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C6CF0;
      }
      goto L_088C6CEC;
    }
L_088C6CEC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C6CF0;
L_088C6CF0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
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
L_088C6D14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (16916u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[21] = (ctx.gpr[8] & 255u);
    ctx.gpr[20] = (ctx.gpr[9] & 255u);
    ctx.gpr[19] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C6D70u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088C6D70u) goto L_088C6D70;
    return;
L_088C6D70:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (17579u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C6D98;
      }
      goto L_088C6D94;
    }
L_088C6D94:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    goto L_088C6D98;
L_088C6D98:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088C6DC4;
      }
      goto L_088C6DB4;
    }
L_088C6DB4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C6DCC;
      }
      goto L_088C6DC4;
    }
L_088C6DC4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    goto L_088C6DCC;
L_088C6DCC:
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C6DF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088C6DF4u) goto L_088C6DF4;
    return;
L_088C6DF4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6E20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (18204u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C6F8C;
      }
      goto L_088C6E54;
    }
L_088C6E54:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088C6E64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088C6080;
L_088C6E64:
    ctx.gpr[6] = (17224u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088C6E80u);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088C6E80u) goto L_088C6E80;
    return;
L_088C6E80:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 52u);
      if (branch_taken) {
          goto L_088C6EE8;
      }
      goto L_088C6E90;
    }
L_088C6E90:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 108u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 12500u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C6EE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088C6EE8u) goto L_088C6EE8;
    return;
L_088C6EE8:
    ctx.gpr[4] = (17917u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C6F8C;
      }
      goto L_088C6F08;
    }
L_088C6F08:
    ctx.gpr[6] = (17076u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088C6F24u);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088C6F24u) goto L_088C6F24;
    return;
L_088C6F24:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088C6F8C;
      }
      goto L_088C6F34;
    }
L_088C6F34:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 109u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 25000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C6F8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088C6F8Cu) goto L_088C6F8C;
    return;
L_088C6F8C:
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
L_088C6FA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6FB8;
      }
      goto L_088C6FB0;
    }
L_088C6FB0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23836), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088C6FB8;
L_088C6FB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6FC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6FC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (17692u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C7104;
      }
      goto L_088C6FFC;
    }
L_088C6FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C70FC;
      }
      goto L_088C7010;
    }
L_088C7010:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C70FC;
      }
      goto L_088C7028;
    }
L_088C7028:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088C7038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C6080;
L_088C7038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C7058;
      }
      goto L_088C7050;
    }
L_088C7050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 15u);
      if (branch_taken) {
          goto L_088C705C;
      }
      goto L_088C7058;
    }
L_088C7058:
    ctx.gpr[4] = (0u | 60u);
    goto L_088C705C;
L_088C705C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088C7070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088C7070u) goto L_088C7070;
    return;
L_088C7070:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 12u);
      if (branch_taken) {
          goto L_088C70FC;
      }
      goto L_088C7080;
    }
L_088C7080:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 294u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088C70A8u);
    ctx.gpr[5] = (0u | 294u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088C70A8u) goto L_088C70A8;
    return;
L_088C70A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 1023u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C70FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088C70FCu) goto L_088C70FC;
    return;
L_088C70FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C7108;
      }
      goto L_088C7104;
    }
L_088C7104:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7108;
L_088C7108:
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
L_088C7120:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C7318;
      }
      goto L_088C717C;
    }
L_088C717C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088C7190u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C6080;
L_088C7190:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(944));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (15205u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2237u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[30] = (0u | 6u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28320));
    goto L_088C71E8;
L_088C71E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088C71F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 382u, 0x08B0D940u>(ctx, &aot_mem) && ctx.pc == 0x088C71F4u) goto L_088C71F4;
    return;
L_088C71F4:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088C72FC;
      }
      goto L_088C7200;
    }
L_088C7200:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(976));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(42)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C722C;
      }
      goto L_088C7224;
    }
L_088C7224:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088C72FC;
      }
      goto L_088C722C;
    }
L_088C722C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C72FC;
      }
      goto L_088C7244;
    }
L_088C7244:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_088C725C;
    }
    goto L_088C7254;
L_088C7254:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_088C725C;
L_088C725C:
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088C727Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088C727Cu) goto L_088C727C;
    return;
L_088C727C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088C72FC;
      }
      goto L_088C728C;
    }
L_088C728C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26324)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[30]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(119));
    ctx.gpr[31] = (0x088C72B4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088C72B4u) goto L_088C72B4;
    return;
L_088C72B4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C72C4u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088C72C4u) goto L_088C72C4;
    return;
L_088C72C4:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C72F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088C72F8u) goto L_088C72F8;
    return;
L_088C72F8:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088C72FC;
L_088C72FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C71E8;
      }
      goto L_088C7310;
    }
L_088C7310:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C731C;
      }
      goto L_088C7318;
    }
L_088C7318:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C731C;
L_088C731C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_088C7360:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(604)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C73AC;
      }
      goto L_088C7374;
    }
L_088C7374:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C73AC;
      }
      goto L_088C737C;
    }
L_088C737C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-21072)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7394:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1888));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C73B4;
      }
      goto L_088C73A0;
    }
L_088C73A0:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1496));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C73B4;
      }
      goto L_088C73AC;
    }
L_088C73AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C740C;
      }
      goto L_088C73B4;
    }
L_088C73B4:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (15759u << 16u);
      if (branch_taken) {
          goto L_088C73EC;
      }
      goto L_088C73C4;
    }
L_088C73C4:
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088C73E4;
    }
    goto L_088C73E4;
L_088C73E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088C740C;
      }
      goto L_088C73EC;
    }
L_088C73EC:
    ctx.gpr[5] = (ctx.gpr[5] | 23593u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088C7408;
    }
    goto L_088C7408;
L_088C7408:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088C740C;
L_088C740C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7414:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088C7438;
      }
      goto L_088C7428;
    }
L_088C7428:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088C755C;
      }
      goto L_088C7430;
    }
L_088C7430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7454;
      }
      goto L_088C7438;
    }
L_088C7438:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C7538;
      }
      goto L_088C7444;
    }
L_088C7444:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C74A0;
      }
      goto L_088C744C;
    }
L_088C744C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C755C;
      }
      goto L_088C7454;
    }
L_088C7454:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_088C7498;
      }
      goto L_088C7470;
    }
L_088C7470:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    goto L_088C7498;
L_088C7498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C755C;
      }
      goto L_088C74A0;
    }
L_088C74A0:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C74DC;
      }
      goto L_088C74BC;
    }
L_088C74BC:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    goto L_088C74DC;
L_088C74DC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C751C;
      }
      goto L_088C74FC;
    }
L_088C74FC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088C751C;
    }
    goto L_088C751C;
L_088C751C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C7530;
      }
      goto L_088C752C;
    }
L_088C752C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088C7530;
L_088C7530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C755C;
      }
      goto L_088C7538;
    }
L_088C7538:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088C755C;
    }
    goto L_088C755C;
L_088C755C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088C7598;
    }
    goto L_088C7598;
L_088C7598:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_088C75AC;
    }
    goto L_088C75AC;
L_088C75AC:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C75B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_088C75E8;
      }
      goto L_088C75CC;
    }
L_088C75CC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_088C75E8;
    }
    goto L_088C75E8;
L_088C75E8:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(112));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_088C761C;
    }
    goto L_088C761C;
L_088C761C:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088C7630;
    }
    goto L_088C7630;
L_088C7630:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7638:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 71u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 67u);
      if (branch_taken) {
          goto L_088C7678;
      }
      goto L_088C7648;
    }
L_088C7648:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 50u);
      if (branch_taken) {
          goto L_088C7678;
      }
      goto L_088C7650;
    }
L_088C7650:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_088C7678;
      }
      goto L_088C7658;
    }
L_088C7658:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 24u);
      if (branch_taken) {
          goto L_088C7678;
      }
      goto L_088C7660;
    }
L_088C7660:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1136));
      if (branch_taken) {
          goto L_088C7678;
      }
      goto L_088C7668;
    }
L_088C7668:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1169));
      if (branch_taken) {
          goto L_088C7678;
      }
      goto L_088C7670;
    }
L_088C7670:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C7680;
      }
      goto L_088C7678;
    }
L_088C7678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C7684;
      }
      goto L_088C7680;
    }
L_088C7680:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7684;
L_088C7684:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C768C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C769Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 238u, 0x08B00E18u>(ctx, &aot_mem) && ctx.pc == 0x088C769Cu) goto L_088C769C;
    return;
L_088C769C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C76AC;
      }
      goto L_088C76A4;
    }
L_088C76A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C76B0;
      }
      goto L_088C76AC;
    }
L_088C76AC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C76B0;
L_088C76B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C76BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 74u);
      if (branch_taken) {
          goto L_088C76F8;
      }
      goto L_088C76D8;
    }
L_088C76D8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C76F8;
      }
      goto L_088C76E0;
    }
L_088C76E0:
    ctx.gpr[31] = (0x088C76E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 238u, 0x08B00E18u>(ctx, &aot_mem) && ctx.pc == 0x088C76E8u) goto L_088C76E8;
    return;
L_088C76E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7700;
      }
      goto L_088C76F0;
    }
L_088C76F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C7704;
      }
      goto L_088C76F8;
    }
L_088C76F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C7704;
      }
      goto L_088C7700;
    }
L_088C7700:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7704;
L_088C7704:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C7884;
      }
      goto L_088C7748;
    }
L_088C7748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088C787C;
      }
      goto L_088C775C;
    }
L_088C775C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (15564u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (48332u << 16u);
      if (branch_taken) {
          goto L_088C7794;
      }
      goto L_088C777C;
    }
L_088C777C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C77C4;
      }
      goto L_088C7790;
    }
L_088C7790:
    ctx.gpr[4] = (48332u << 16u);
    goto L_088C7794;
L_088C7794:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C787C;
      }
      goto L_088C77B0;
    }
L_088C77B0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C787C;
      }
      goto L_088C77C4;
    }
L_088C77C4:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088C77D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C6080;
L_088C77D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26320)));
    ctx.gpr[18] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(70));
    ctx.gpr[31] = (0x088C7804u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088C7804u) goto L_088C7804;
    return;
L_088C7804:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088C787C;
      }
      goto L_088C7814;
    }
L_088C7814:
    ctx.gpr[4] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088C782Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088C782Cu) goto L_088C782C;
    return;
L_088C782C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[19] >> 4u);
    ctx.gpr[31] = (0x088C7840u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088C7840u) goto L_088C7840;
    return;
L_088C7840:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C787Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088C787Cu) goto L_088C787C;
    return;
L_088C787C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C7888;
      }
      goto L_088C7884;
    }
L_088C7884:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7888;
L_088C7888:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
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
L_088C78A8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 46 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 68 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C78DC;
      }
      goto L_088C78B8;
    }
L_088C78B8:
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1136));
      if (branch_taken) {
          goto L_088C78D4;
      }
      goto L_088C78C4;
    }
L_088C78C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1169));
      if (branch_taken) {
          goto L_088C78D4;
      }
      goto L_088C78CC;
    }
L_088C78CC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C78FC;
      }
      goto L_088C78D4;
    }
L_088C78D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C793C;
      }
      goto L_088C78DC;
    }
L_088C78DC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 71u);
      if (branch_taken) {
          goto L_088C7904;
      }
      goto L_088C78E4;
    }
L_088C78E4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 51 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-46));
        goto L_088C7914;
    }
    goto L_088C78F0;
L_088C78F0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 67 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78D4;
      }
      goto L_088C78FC;
    }
L_088C78FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C793C;
      }
      goto L_088C7904;
    }
L_088C7904:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C78FC;
      }
      goto L_088C790C;
    }
L_088C790C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78D4;
      }
      goto L_088C7914;
    }
L_088C7914:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C78D4;
      }
      goto L_088C791C;
    }
L_088C791C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088C78FC;
      }
      goto L_088C7924;
    }
L_088C7924:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088C78D4;
      }
      goto L_088C792C;
    }
L_088C792C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C78FC;
      }
      goto L_088C7934;
    }
L_088C7934:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088C78D4;
      }
      goto L_088C793C;
    }
L_088C793C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7944:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17505u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C7ACC;
      }
      goto L_088C797C;
    }
L_088C797C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088C7A14;
      }
      goto L_088C7990;
    }
L_088C7990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C7A0C;
      }
      goto L_088C79A8;
    }
L_088C79A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(636)));
    ctx.gpr[4] = (17347u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C7A0C;
      }
      goto L_088C79C4;
    }
L_088C79C4:
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.gpr[4] = (0u | 7u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C7A1C;
      }
      goto L_088C79E4;
    }
L_088C79E4:
    ctx.gpr[5] = (0u | 80u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[19] = (0u | 60u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088C7A00u);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088C7A00u) goto L_088C7A00;
    return;
L_088C7A00:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7A38;
      }
      goto L_088C7A0C;
    }
L_088C7A0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C7AD0;
      }
      goto L_088C7A14;
    }
L_088C7A14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C7AD0;
      }
      goto L_088C7A1C;
    }
L_088C7A1C:
    ctx.gpr[5] = (0u | 261u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 27000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[19] = (0u | 30u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088C7A38;
L_088C7A38:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088C7A44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088C6080;
L_088C7A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7A60;
      }
      goto L_088C7A58;
    }
L_088C7A58:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    goto L_088C7A60;
L_088C7A60:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C7A74u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088C7A74u) goto L_088C7A74;
    return;
L_088C7A74:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 28u);
      if (branch_taken) {
          goto L_088C7AC4;
      }
      goto L_088C7A84;
    }
L_088C7A84:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C7AC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088C7AC4u) goto L_088C7AC4;
    return;
L_088C7AC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C7AD0;
      }
      goto L_088C7ACC;
    }
L_088C7ACC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7AD0;
L_088C7AD0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
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
L_088C7AF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C7C38;
      }
      goto L_088C7B20;
    }
L_088C7B20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088C7C30;
      }
      goto L_088C7B34;
    }
L_088C7B34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 6u);
      if (branch_taken) {
          goto L_088C7B74;
      }
      goto L_088C7B44;
    }
L_088C7B44:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088C7B64;
      }
      goto L_088C7B4C;
    }
L_088C7B4C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7B84;
      }
      goto L_088C7B54;
    }
L_088C7B54:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1653))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
      if (branch_taken) {
          goto L_088C7B8C;
      }
      goto L_088C7B64;
    }
L_088C7B64:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1378))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
      if (branch_taken) {
          goto L_088C7B8C;
      }
      goto L_088C7B74;
    }
L_088C7B74:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1653))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
      if (branch_taken) {
          goto L_088C7B8C;
      }
      goto L_088C7B84;
    }
L_088C7B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C7C3C;
      }
      goto L_088C7B8C;
    }
L_088C7B8C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C7C30;
      }
      goto L_088C7B94;
    }
L_088C7B94:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088C7BA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C6080;
L_088C7BA4:
    ctx.gpr[6] = (16928u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088C7BC0u);
    ctx.gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088C7BC0u) goto L_088C7BC0;
    return;
L_088C7BC0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088C7C30;
      }
      goto L_088C7BD0;
    }
L_088C7BD0:
    ctx.gpr[4] = (0u | 35u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 164u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088C7BF8u);
    ctx.gpr[5] = (0u | 164u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088C7BF8u) goto L_088C7BF8;
    return;
L_088C7BF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C7C30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088C7C30u) goto L_088C7C30;
    return;
L_088C7C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C7C3C;
      }
      goto L_088C7C38;
    }
L_088C7C38:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7C3C;
L_088C7C3C:
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
L_088C7C54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (17817u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C7DFC;
      }
      goto L_088C7C8C;
    }
L_088C7C8C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C7DF4;
      }
      goto L_088C7CA4;
    }
L_088C7CA4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088C7CB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088C6080;
L_088C7CB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C7DF4;
      }
      goto L_088C7CC4;
    }
L_088C7CC4:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 33u);
      if (branch_taken) {
          goto L_088C7DF4;
      }
      goto L_088C7CF0;
    }
L_088C7CF0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 25u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088C7D18u);
    ctx.gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088C7D18u) goto L_088C7D18;
    return;
L_088C7D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 987u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17036u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[31] = (0x088C7D80u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088C7D80u) goto L_088C7D80;
    return;
L_088C7D80:
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17136u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088C7DF4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088C7DF4u) goto L_088C7DF4;
    return;
L_088C7DF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C7E00;
      }
      goto L_088C7DFC;
    }
L_088C7DFC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7E00;
L_088C7E00:
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
L_088C7E1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (17692u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C7FA4;
      }
      goto L_088C7E50;
    }
L_088C7E50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[6] = (14851u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C7F9C;
      }
      goto L_088C7E78;
    }
L_088C7E78:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7F9C;
      }
      goto L_088C7E88;
    }
L_088C7E88:
    ctx.gpr[5] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_088C7EA4;
    }
    goto L_088C7EA4;
L_088C7EA4:
    ctx.gpr[5] = (16191u << 16u);
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[20];
    ctx.gpr[5] = (ctx.gpr[5] | 57147u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088C7EC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C6080;
L_088C7EC4:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088C7EECu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088C7EECu) goto L_088C7EEC;
    return;
L_088C7EEC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 38u);
      if (branch_taken) {
          goto L_088C7F9C;
      }
      goto L_088C7EFC;
    }
L_088C7EFC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 25u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (17853u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
        goto L_088C7F50;
    }
    goto L_088C7F40;
L_088C7F40:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_088C7F64;
      }
      goto L_088C7F50;
    }
L_088C7F50:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    goto L_088C7F64;
L_088C7F64:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C7F9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088C7F9Cu) goto L_088C7F9C;
    return;
L_088C7F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C7FA8;
      }
      goto L_088C7FA4;
    }
L_088C7FA4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7FA8;
L_088C7FA8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (17692u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 14u, 0x088C8174u>(ctx, &aot_mem); return;
      }
      goto L_088C7FFC;
    }
L_088C7FFC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.pc = 0x088C8000u; return;
}

void recomp_unit_0048(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0048_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_48(Runtime &runtime) {
    runtime.register_generated_unit(48u, 0x088C4000u, 16384u, &recomp_unit_0048, &recomp_unit_0048_entry);
    runtime.register_function(0x088C4000u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4008u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4014u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4020u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4024u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C403Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4080u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C408Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4094u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C410Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4128u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4144u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4154u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4170u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4184u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4188u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C419Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4200u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4228u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4254u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4264u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C427Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4280u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4308u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4324u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C433Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4360u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4390u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4400u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4410u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4424u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C442Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4464u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4488u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4498u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4500u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4520u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4534u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4548u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4558u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4564u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4574u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4594u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C461Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4624u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C464Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4654u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C468Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4710u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4718u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4744u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4760u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4768u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4770u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4790u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4804u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4814u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4834u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4848u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4874u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C487Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4890u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4910u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4924u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4934u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4944u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4954u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C496Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4984u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C498Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AFCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4ED4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5008u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5014u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5024u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5050u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5058u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C506Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5080u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5090u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5120u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5128u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5144u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5154u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5160u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5168u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5174u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5184u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5208u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5214u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5224u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5234u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C523Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5248u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5250u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5270u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5280u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C529Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5328u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C532Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5378u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5380u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5394u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C540Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5414u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5420u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5428u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C543Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C544Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C545Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5464u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5470u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5480u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5490u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5498u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5500u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5508u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5534u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C553Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5624u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5630u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5640u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C566Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5674u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5684u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C571Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C572Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5750u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C575Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5764u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C578Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5798u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5828u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5840u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5858u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5884u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5928u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5940u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5950u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5964u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5970u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C597Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5984u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5990u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AE0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BE0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5ED0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6004u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6050u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6058u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6060u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6080u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C608Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C609Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6104u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6114u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6124u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6130u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6140u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6150u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C615Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C616Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C617Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6188u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6198u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6200u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C620Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C621Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6228u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C626Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6278u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6298u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6300u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6308u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6314u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6320u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6328u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6334u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6340u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6348u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6354u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6360u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6368u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6374u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6380u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6388u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6394u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6414u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6418u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C642Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6458u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6468u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6480u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C648Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C649Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6508u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6510u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C651Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6528u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6530u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6540u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6548u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6550u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6558u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6564u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C656Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6574u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6580u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6588u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6590u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6598u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6600u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6624u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C663Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6648u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6650u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6658u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6660u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6668u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6670u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6678u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6680u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C669Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6718u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6720u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6728u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6730u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6738u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C673Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C675Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6770u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6854u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C686Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6920u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6928u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C692Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6934u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6944u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6950u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C695Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6968u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6974u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6984u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6990u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6ADCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DCCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6EE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6FA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6FB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6FB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6FC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6FC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6FFCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7010u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7028u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7038u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7050u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7058u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C705Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7070u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7080u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C70A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C70FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7104u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7108u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7120u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C717Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7190u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7200u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7224u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C722Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7244u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7254u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C725Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C727Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C728Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7310u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7318u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C731Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7360u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7374u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C737Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7394u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7408u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C740Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7414u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7428u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7430u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7438u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7444u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C744Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7454u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7470u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7498u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C751Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C752Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7530u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7538u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C755Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7598u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C75ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C75B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C75CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C75E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C761Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7630u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7638u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7648u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7650u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7658u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7660u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7668u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7670u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7678u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7680u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7684u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C768Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C769Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7700u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7704u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7710u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7748u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C775Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C777Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7790u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7794u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7804u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7814u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C782Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7840u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C787Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7884u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7888u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7904u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C790Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7914u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C791Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7924u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C792Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7934u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C793Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7944u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C797Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7990u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7ACCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DFCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EFCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FFCu, &recomp_unit_0048, "recomp_unit_0048");
}
} // namespace psprecomp
