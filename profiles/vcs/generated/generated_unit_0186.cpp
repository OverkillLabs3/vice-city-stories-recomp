#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0186[4093] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6,
    0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 14, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0,
    17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 21, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0,
    27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 0, 0, 39,
    0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 48, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 50, 0, 0, 51, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 0, 66, 0, 67, 0,
    68, 0, 69, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0,
    89, 0, 90, 0, 91, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 101, 0, 0,
    102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 114, 0, 0, 0,
    115, 116, 0, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0,
    127, 0, 0, 0, 128, 129, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0,
    0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 149, 0, 0, 150, 0, 0, 151, 0,
    152, 153, 0, 154, 0, 0, 0, 155, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 159, 0, 0, 160, 0, 0, 161, 0, 162, 163, 0, 164, 0, 0,
    0, 165, 166, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 0,
    0, 177, 0, 0, 0, 178, 0, 179, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0, 188,
    0, 189, 0, 0, 0, 190, 0, 0, 191, 192, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0,
    200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0,
    211, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0,
    222, 0, 223, 0, 224, 0, 225, 0, 0, 0, 226, 0, 0, 227, 228, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 233, 0,
    0, 234, 0, 235, 0, 236, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 240, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0, 0,
    245, 0, 0, 246, 0, 247, 0, 248, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 252, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 268, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0,
    0, 0, 0, 0, 0, 0, 280, 0, 281, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0,
    0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 0, 297, 298,
    299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0,
    0, 0, 307, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 316, 0, 317, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322,
    0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 327, 0, 328, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0,
    332, 0, 333, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 338, 0, 0, 339, 0, 340, 0, 0, 0, 0, 341, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 344, 0, 345, 0, 0, 0, 346, 0, 0, 347,
    0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 353, 0, 0, 354, 0, 355, 0, 356, 0, 0, 357, 0, 358, 0, 359, 0,
    360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 0, 0, 0, 365, 0, 0, 366, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 370, 0, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0,
    0, 376, 0, 0, 377, 0, 378, 379, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0,
    0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0,
    0, 0, 388, 0, 389, 0, 0, 0, 0, 390, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0,
    394, 0, 0, 0, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 404, 0, 0, 405, 0, 0, 406,
    0, 0, 407, 0, 0, 408, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 413, 414, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 0, 418,
    419, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0, 0, 423, 424, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0,
    428, 429, 0, 430, 0, 431, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0,
    0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0,
    0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 457, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 465, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0,
    0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 481, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 488, 0, 0, 489, 0, 0, 0, 0, 490, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0,
    493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 499, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0,
    0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 505,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0,
    0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0,
    519, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0,
    0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543,
    0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0,
    0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0,
    551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0,
    0, 0, 554, 0, 555, 0, 556, 0, 557, 558, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 562, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0,
    0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 568, 0, 569, 0, 570, 0, 571, 0, 0, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576,
    0, 577, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586, 0, 587, 0, 588, 0, 589, 0, 0, 590, 0, 591, 0,
    592, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 0,
    605, 0, 606, 0, 607, 0, 608, 0, 0, 609, 0, 610, 0, 611, 0, 612, 0, 0, 613, 0, 614, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 617, 0, 0, 618, 0, 619, 620, 0, 0, 0, 0, 621, 0, 0, 622, 0, 623, 624, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0,
    0, 626, 0, 627, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 630, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 636, 637, 638, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 641, 642, 0, 0,
    643, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 647, 0, 0, 648, 0, 0, 649, 0, 650, 651, 652, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 655, 656, 0, 0, 657, 0, 0, 0, 0,
    0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 662,
    0, 0, 663, 0, 664, 665, 666, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 669, 670, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0,
    0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 676, 0, 0, 677, 0,
    678, 679, 680, 0, 0, 0, 0, 0, 681, 0, 0, 682, 0, 683, 684, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0,
    0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 692, 0, 0,
    693, 0, 694, 695, 696, 0, 0, 0, 0, 0, 697, 0, 0, 698, 0, 699, 700, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 706,
    0, 0, 707, 0, 708, 709, 710, 0, 0, 0, 0, 0, 711, 0, 0, 712, 0, 713, 714, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0,
    720, 0, 0, 721, 0, 722, 723, 724, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 727, 728, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 730, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    733, 0, 0, 734, 0, 0, 735, 0, 736, 737, 738, 0, 0, 0, 0, 0, 739, 0, 0, 740, 0, 741, 742, 0, 0, 743, 0, 0, 0, 0, 0, 0,
    0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 747, 0, 0, 748, 0, 0, 749, 0, 750, 751, 752, 0, 0, 0, 0, 0, 753, 0, 0, 754, 0, 755, 756, 0, 0, 757, 0, 0, 0, 0, 0,
    0, 0, 758, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 762,
    0, 0, 763, 0, 764, 765, 766, 0, 0, 0, 0, 0, 767, 0, 0, 768, 0, 769, 770, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775,
    0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 780, 0, 0,
    781, 0, 782, 783, 784, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 787, 788, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 794, 0,
    0, 795, 0, 796, 797, 798, 0, 0, 0, 0, 0, 799, 0, 0, 800, 0, 801, 802, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0,
    0, 808, 0, 0, 809, 0, 810, 811, 812, 0, 0, 0, 0, 0, 813, 0, 0, 814, 0, 815, 816, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 818,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821,
    0, 0, 822, 0, 0, 823, 0, 824, 825, 826, 0, 0, 0, 0, 0, 827, 0, 0, 828, 0, 829, 830, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0,
    832, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    835, 0, 0, 836, 0, 0, 837, 0, 838, 839, 840, 0, 0, 0, 0, 0, 841, 0, 0, 842, 0, 843, 844, 0, 0, 845, 0, 0, 0, 0, 0, 0,
    0, 846, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 849, 0, 0, 850, 0, 0, 851, 0, 852, 853, 854, 0, 0, 0, 0, 0, 855, 0, 0, 856, 0, 857, 858, 0, 0, 859,
};
void recomp_unit_0186_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AEC000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0186[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AEC000;
    case 2u: goto L_08AEC010;
    case 3u: goto L_08AEC05C;
    case 4u: goto L_08AEC068;
    case 5u: goto L_08AEC070;
    case 6u: goto L_08AEC07C;
    case 7u: goto L_08AEC090;
    case 8u: goto L_08AEC098;
    case 9u: goto L_08AEC0A0;
    case 10u: goto L_08AEC0A8;
    case 11u: goto L_08AEC0B4;
    case 12u: goto L_08AEC0C0;
    case 13u: goto L_08AEC0D0;
    case 14u: goto L_08AEC0D4;
    case 15u: goto L_08AEC0F0;
    case 16u: goto L_08AEC0F8;
    case 17u: goto L_08AEC100;
    case 18u: goto L_08AEC110;
    case 19u: goto L_08AEC11C;
    case 20u: goto L_08AEC12C;
    case 21u: goto L_08AEC130;
    case 22u: goto L_08AEC144;
    case 23u: goto L_08AEC14C;
    case 24u: goto L_08AEC154;
    case 25u: goto L_08AEC164;
    case 26u: goto L_08AEC170;
    case 27u: goto L_08AEC180;
    case 28u: goto L_08AEC188;
    case 29u: goto L_08AEC190;
    case 30u: goto L_08AEC198;
    case 31u: goto L_08AEC1A0;
    case 32u: goto L_08AEC1B0;
    case 33u: goto L_08AEC1BC;
    case 34u: goto L_08AEC1CC;
    case 35u: goto L_08AEC1D4;
    case 36u: goto L_08AEC1DC;
    case 37u: goto L_08AEC1E4;
    case 38u: goto L_08AEC1EC;
    case 39u: goto L_08AEC1FC;
    case 40u: goto L_08AEC208;
    case 41u: goto L_08AEC218;
    case 42u: goto L_08AEC220;
    case 43u: goto L_08AEC228;
    case 44u: goto L_08AEC238;
    case 45u: goto L_08AEC244;
    case 46u: goto L_08AEC258;
    case 47u: goto L_08AEC260;
    case 48u: goto L_08AEC264;
    case 49u: goto L_08AEC280;
    case 50u: goto L_08AEC294;
    case 51u: goto L_08AEC2A0;
    case 52u: goto L_08AEC2A4;
    case 53u: goto L_08AEC2AC;
    case 54u: goto L_08AEC2F0;
    case 55u: goto L_08AEC314;
    case 56u: goto L_08AEC36C;
    case 57u: goto L_08AEC388;
    case 58u: goto L_08AEC394;
    case 59u: goto L_08AEC39C;
    case 60u: goto L_08AEC3A8;
    case 61u: goto L_08AEC3BC;
    case 62u: goto L_08AEC3C8;
    case 63u: goto L_08AEC3D0;
    case 64u: goto L_08AEC3DC;
    case 65u: goto L_08AEC3E4;
    case 66u: goto L_08AEC3F0;
    case 67u: goto L_08AEC3F8;
    case 68u: goto L_08AEC400;
    case 69u: goto L_08AEC408;
    case 70u: goto L_08AEC414;
    case 71u: goto L_08AEC41C;
    case 72u: goto L_08AEC428;
    case 73u: goto L_08AEC440;
    case 74u: goto L_08AEC480;
    case 75u: goto L_08AEC4D4;
    case 76u: goto L_08AEC4E4;
    case 77u: goto L_08AEC4F4;
    case 78u: goto L_08AEC508;
    case 79u: goto L_08AEC52C;
    case 80u: goto L_08AEC534;
    case 81u: goto L_08AEC53C;
    case 82u: goto L_08AEC544;
    case 83u: goto L_08AEC550;
    case 84u: goto L_08AEC558;
    case 85u: goto L_08AEC560;
    case 86u: goto L_08AEC568;
    case 87u: goto L_08AEC570;
    case 88u: goto L_08AEC578;
    case 89u: goto L_08AEC580;
    case 90u: goto L_08AEC588;
    case 91u: goto L_08AEC590;
    case 92u: goto L_08AEC598;
    case 93u: goto L_08AEC5A4;
    case 94u: goto L_08AEC5B0;
    case 95u: goto L_08AEC5BC;
    case 96u: goto L_08AEC5C4;
    case 97u: goto L_08AEC5D0;
    case 98u: goto L_08AEC5D8;
    case 99u: goto L_08AEC5E0;
    case 100u: goto L_08AEC5EC;
    case 101u: goto L_08AEC5F4;
    case 102u: goto L_08AEC600;
    case 103u: goto L_08AEC608;
    case 104u: goto L_08AEC610;
    case 105u: goto L_08AEC618;
    case 106u: goto L_08AEC620;
    case 107u: goto L_08AEC62C;
    case 108u: goto L_08AEC634;
    case 109u: goto L_08AEC63C;
    case 110u: goto L_08AEC644;
    case 111u: goto L_08AEC64C;
    case 112u: goto L_08AEC654;
    case 113u: goto L_08AEC66C;
    case 114u: goto L_08AEC670;
    case 115u: goto L_08AEC680;
    case 116u: goto L_08AEC684;
    case 117u: goto L_08AEC694;
    case 118u: goto L_08AEC69C;
    case 119u: goto L_08AEC6A4;
    case 120u: goto L_08AEC6AC;
    case 121u: goto L_08AEC6B8;
    case 122u: goto L_08AEC6C4;
    case 123u: goto L_08AEC6D0;
    case 124u: goto L_08AEC6D4;
    case 125u: goto L_08AEC6E8;
    case 126u: goto L_08AEC6F4;
    case 127u: goto L_08AEC700;
    case 128u: goto L_08AEC710;
    case 129u: goto L_08AEC714;
    case 130u: goto L_08AEC718;
    case 131u: goto L_08AEC73C;
    case 132u: goto L_08AEC798;
    case 133u: goto L_08AEC7A8;
    case 134u: goto L_08AEC7E0;
    case 135u: goto L_08AEC838;
    case 136u: goto L_08AEC844;
    case 137u: goto L_08AEC884;
    case 138u: goto L_08AEC8AC;
    case 139u: goto L_08AEC8B4;
    case 140u: goto L_08AEC8C8;
    case 141u: goto L_08AEC8D4;
    case 142u: goto L_08AEC8EC;
    case 143u: goto L_08AEC8F4;
    case 144u: goto L_08AEC904;
    case 145u: goto L_08AEC918;
    case 146u: goto L_08AEC930;
    case 147u: goto L_08AEC948;
    case 148u: goto L_08AEC95C;
    case 149u: goto L_08AEC960;
    case 150u: goto L_08AEC96C;
    case 151u: goto L_08AEC978;
    case 152u: goto L_08AEC980;
    case 153u: goto L_08AEC984;
    case 154u: goto L_08AEC98C;
    case 155u: goto L_08AEC99C;
    case 156u: goto L_08AEC9A0;
    case 157u: goto L_08AEC9B0;
    case 158u: goto L_08AEC9C4;
    case 159u: goto L_08AEC9C8;
    case 160u: goto L_08AEC9D4;
    case 161u: goto L_08AEC9E0;
    case 162u: goto L_08AEC9E8;
    case 163u: goto L_08AEC9EC;
    case 164u: goto L_08AEC9F4;
    case 165u: goto L_08AECA04;
    case 166u: goto L_08AECA08;
    case 167u: goto L_08AECA10;
    case 168u: goto L_08AECA18;
    case 169u: goto L_08AECA28;
    case 170u: goto L_08AECA38;
    case 171u: goto L_08AECA40;
    case 172u: goto L_08AECA50;
    case 173u: goto L_08AECA5C;
    case 174u: goto L_08AECA64;
    case 175u: goto L_08AECA6C;
    case 176u: goto L_08AECA74;
    case 177u: goto L_08AECA84;
    case 178u: goto L_08AECA94;
    case 179u: goto L_08AECA9C;
    case 180u: goto L_08AECAA0;
    case 181u: goto L_08AECAA8;
    case 182u: goto L_08AECAB8;
    case 183u: goto L_08AECAC8;
    case 184u: goto L_08AECAD0;
    case 185u: goto L_08AECAE0;
    case 186u: goto L_08AECAEC;
    case 187u: goto L_08AECAF4;
    case 188u: goto L_08AECAFC;
    case 189u: goto L_08AECB04;
    case 190u: goto L_08AECB14;
    case 191u: goto L_08AECB20;
    case 192u: goto L_08AECB24;
    case 193u: goto L_08AECB2C;
    case 194u: goto L_08AECB3C;
    case 195u: goto L_08AECB4C;
    case 196u: goto L_08AECB54;
    case 197u: goto L_08AECB64;
    case 198u: goto L_08AECB70;
    case 199u: goto L_08AECB78;
    case 200u: goto L_08AECB80;
    case 201u: goto L_08AECB88;
    case 202u: goto L_08AECB98;
    case 203u: goto L_08AECBA8;
    case 204u: goto L_08AECBAC;
    case 205u: goto L_08AECBB4;
    case 206u: goto L_08AECBC4;
    case 207u: goto L_08AECBD4;
    case 208u: goto L_08AECBDC;
    case 209u: goto L_08AECBEC;
    case 210u: goto L_08AECBF8;
    case 211u: goto L_08AECC00;
    case 212u: goto L_08AECC08;
    case 213u: goto L_08AECC10;
    case 214u: goto L_08AECC20;
    case 215u: goto L_08AECC30;
    case 216u: goto L_08AECC34;
    case 217u: goto L_08AECC3C;
    case 218u: goto L_08AECC4C;
    case 219u: goto L_08AECC5C;
    case 220u: goto L_08AECC64;
    case 221u: goto L_08AECC74;
    case 222u: goto L_08AECC80;
    case 223u: goto L_08AECC88;
    case 224u: goto L_08AECC90;
    case 225u: goto L_08AECC98;
    case 226u: goto L_08AECCA8;
    case 227u: goto L_08AECCB4;
    case 228u: goto L_08AECCB8;
    case 229u: goto L_08AECCC0;
    case 230u: goto L_08AECCD0;
    case 231u: goto L_08AECCE0;
    case 232u: goto L_08AECCE8;
    case 233u: goto L_08AECCF8;
    case 234u: goto L_08AECD04;
    case 235u: goto L_08AECD0C;
    case 236u: goto L_08AECD14;
    case 237u: goto L_08AECD1C;
    case 238u: goto L_08AECD2C;
    case 239u: goto L_08AECD3C;
    case 240u: goto L_08AECD40;
    case 241u: goto L_08AECD48;
    case 242u: goto L_08AECD58;
    case 243u: goto L_08AECD68;
    case 244u: goto L_08AECD70;
    case 245u: goto L_08AECD80;
    case 246u: goto L_08AECD8C;
    case 247u: goto L_08AECD94;
    case 248u: goto L_08AECD9C;
    case 249u: goto L_08AECDA4;
    case 250u: goto L_08AECDB4;
    case 251u: goto L_08AECDC4;
    case 252u: goto L_08AECDC8;
    case 253u: goto L_08AECDD0;
    case 254u: goto L_08AECDDC;
    case 255u: goto L_08AECE7C;
    case 256u: goto L_08AECE90;
    case 257u: goto L_08AECEA8;
    case 258u: goto L_08AECEE4;
    case 259u: goto L_08AECF0C;
    case 260u: goto L_08AECF18;
    case 261u: goto L_08AECF28;
    case 262u: goto L_08AECF7C;
    case 263u: goto L_08AECF90;
    case 264u: goto L_08AECFA8;
    case 265u: goto L_08AECFE4;
    case 266u: goto L_08AED00C;
    case 267u: goto L_08AED018;
    case 268u: goto L_08AED028;
    case 269u: goto L_08AED02C;
    case 270u: goto L_08AED054;
    case 271u: goto L_08AED07C;
    case 272u: goto L_08AED0B4;
    case 273u: goto L_08AED0C8;
    case 274u: goto L_08AED0D8;
    case 275u: goto L_08AED0E8;
    case 276u: goto L_08AED10C;
    case 277u: goto L_08AED164;
    case 278u: goto L_08AED16C;
    case 279u: goto L_08AED174;
    case 280u: goto L_08AED198;
    case 281u: goto L_08AED1A0;
    case 282u: goto L_08AED1A4;
    case 283u: goto L_08AED1CC;
    case 284u: goto L_08AED1D4;
    case 285u: goto L_08AED1E0;
    case 286u: goto L_08AED1EC;
    case 287u: goto L_08AED204;
    case 288u: goto L_08AED20C;
    case 289u: goto L_08AED214;
    case 290u: goto L_08AED21C;
    case 291u: goto L_08AED224;
    case 292u: goto L_08AED24C;
    case 293u: goto L_08AED254;
    case 294u: goto L_08AED25C;
    case 295u: goto L_08AED264;
    case 296u: goto L_08AED26C;
    case 297u: goto L_08AED278;
    case 298u: goto L_08AED27C;
    case 299u: goto L_08AED280;
    case 300u: goto L_08AED2A0;
    case 301u: goto L_08AED2F4;
    case 302u: goto L_08AED308;
    case 303u: goto L_08AED328;
    case 304u: goto L_08AED348;
    case 305u: goto L_08AED368;
    case 306u: goto L_08AED374;
    case 307u: goto L_08AED388;
    case 308u: goto L_08AED394;
    case 309u: goto L_08AED39C;
    case 310u: goto L_08AED3A4;
    case 311u: goto L_08AED3AC;
    case 312u: goto L_08AED3B8;
    case 313u: goto L_08AED3C0;
    case 314u: goto L_08AED3CC;
    case 315u: goto L_08AED3DC;
    case 316u: goto L_08AED414;
    case 317u: goto L_08AED41C;
    case 318u: goto L_08AED420;
    case 319u: goto L_08AED434;
    case 320u: goto L_08AED448;
    case 321u: goto L_08AED49C;
    case 322u: goto L_08AED4FC;
    case 323u: goto L_08AED508;
    case 324u: goto L_08AED518;
    case 325u: goto L_08AED530;
    case 326u: goto L_08AED538;
    case 327u: goto L_08AED544;
    case 328u: goto L_08AED54C;
    case 329u: goto L_08AED550;
    case 330u: goto L_08AED55C;
    case 331u: goto L_08AED578;
    case 332u: goto L_08AED580;
    case 333u: goto L_08AED588;
    case 334u: goto L_08AED58C;
    case 335u: goto L_08AED5A0;
    case 336u: goto L_08AED5B4;
    case 337u: goto L_08AED5BC;
    case 338u: goto L_08AED5D0;
    case 339u: goto L_08AED5DC;
    case 340u: goto L_08AED5E4;
    case 341u: goto L_08AED5F8;
    case 342u: goto L_08AED644;
    case 343u: goto L_08AED650;
    case 344u: goto L_08AED658;
    case 345u: goto L_08AED660;
    case 346u: goto L_08AED670;
    case 347u: goto L_08AED67C;
    case 348u: goto L_08AED684;
    case 349u: goto L_08AED690;
    case 350u: goto L_08AED69C;
    case 351u: goto L_08AED6B0;
    case 352u: goto L_08AED6B8;
    case 353u: goto L_08AED6C0;
    case 354u: goto L_08AED6CC;
    case 355u: goto L_08AED6D4;
    case 356u: goto L_08AED6DC;
    case 357u: goto L_08AED6E8;
    case 358u: goto L_08AED6F0;
    case 359u: goto L_08AED6F8;
    case 360u: goto L_08AED700;
    case 361u: goto L_08AED708;
    case 362u: goto L_08AED710;
    case 363u: goto L_08AED718;
    case 364u: goto L_08AED720;
    case 365u: goto L_08AED734;
    case 366u: goto L_08AED740;
    case 367u: goto L_08AED748;
    case 368u: goto L_08AED758;
    case 369u: goto L_08AED760;
    case 370u: goto L_08AED774;
    case 371u: goto L_08AED780;
    case 372u: goto L_08AED7B4;
    case 373u: goto L_08AED7C4;
    case 374u: goto L_08AED7C8;
    case 375u: goto L_08AED7E8;
    case 376u: goto L_08AED804;
    case 377u: goto L_08AED810;
    case 378u: goto L_08AED818;
    case 379u: goto L_08AED81C;
    case 380u: goto L_08AED82C;
    case 381u: goto L_08AED840;
    case 382u: goto L_08AED850;
    case 383u: goto L_08AED868;
    case 384u: goto L_08AED874;
    case 385u: goto L_08AED88C;
    case 386u: goto L_08AED8A0;
    case 387u: goto L_08AED8F8;
    case 388u: goto L_08AED908;
    case 389u: goto L_08AED910;
    case 390u: goto L_08AED924;
    case 391u: goto L_08AED928;
    case 392u: goto L_08AED934;
    case 393u: goto L_08AED970;
    case 394u: goto L_08AED980;
    case 395u: goto L_08AED994;
    case 396u: goto L_08AED99C;
    case 397u: goto L_08AED9A4;
    case 398u: goto L_08AED9AC;
    case 399u: goto L_08AED9B4;
    case 400u: goto L_08AED9BC;
    case 401u: goto L_08AED9C8;
    case 402u: goto L_08AED9D4;
    case 403u: goto L_08AED9E0;
    case 404u: goto L_08AED9E4;
    case 405u: goto L_08AED9F0;
    case 406u: goto L_08AED9FC;
    case 407u: goto L_08AEDA08;
    case 408u: goto L_08AEDA14;
    case 409u: goto L_08AEDA18;
    case 410u: goto L_08AEDA24;
    case 411u: goto L_08AEDA30;
    case 412u: goto L_08AEDA3C;
    case 413u: goto L_08AEDA48;
    case 414u: goto L_08AEDA4C;
    case 415u: goto L_08AEDA58;
    case 416u: goto L_08AEDA64;
    case 417u: goto L_08AEDA70;
    case 418u: goto L_08AEDA7C;
    case 419u: goto L_08AEDA80;
    case 420u: goto L_08AEDA98;
    case 421u: goto L_08AEDAA4;
    case 422u: goto L_08AEDAB0;
    case 423u: goto L_08AEDABC;
    case 424u: goto L_08AEDAC0;
    case 425u: goto L_08AEDAD8;
    case 426u: goto L_08AEDAE4;
    case 427u: goto L_08AEDAF0;
    case 428u: goto L_08AEDB00;
    case 429u: goto L_08AEDB04;
    case 430u: goto L_08AEDB0C;
    case 431u: goto L_08AEDB14;
    case 432u: goto L_08AEDB28;
    case 433u: goto L_08AEDB30;
    case 434u: goto L_08AEDB58;
    case 435u: goto L_08AEDB94;
    case 436u: goto L_08AEDBA8;
    case 437u: goto L_08AEDBC4;
    case 438u: goto L_08AEDBCC;
    case 439u: goto L_08AEDBE0;
    case 440u: goto L_08AEDC04;
    case 441u: goto L_08AEDC0C;
    case 442u: goto L_08AEDC14;
    case 443u: goto L_08AEDC28;
    case 444u: goto L_08AEDC4C;
    case 445u: goto L_08AEDC54;
    case 446u: goto L_08AEDC60;
    case 447u: goto L_08AEDC74;
    case 448u: goto L_08AEDC84;
    case 449u: goto L_08AEDC90;
    case 450u: goto L_08AEDCD0;
    case 451u: goto L_08AEDCE0;
    case 452u: goto L_08AEDCEC;
    case 453u: goto L_08AEDD38;
    case 454u: goto L_08AEDD44;
    case 455u: goto L_08AEDD58;
    case 456u: goto L_08AEDD68;
    case 457u: goto L_08AEDD74;
    case 458u: goto L_08AEDDB4;
    case 459u: goto L_08AEDDC4;
    case 460u: goto L_08AEDDD8;
    case 461u: goto L_08AEDE1C;
    case 462u: goto L_08AEDE28;
    case 463u: goto L_08AEDE34;
    case 464u: goto L_08AEDE48;
    case 465u: goto L_08AEDE54;
    case 466u: goto L_08AEDE5C;
    case 467u: goto L_08AEDE6C;
    case 468u: goto L_08AEDE78;
    case 469u: goto L_08AEDEB8;
    case 470u: goto L_08AEDEC0;
    case 471u: goto L_08AEDEC8;
    case 472u: goto L_08AEDEE4;
    case 473u: goto L_08AEDEF0;
    case 474u: goto L_08AEDF20;
    case 475u: goto L_08AEDF28;
    case 476u: goto L_08AEDF74;
    case 477u: goto L_08AEDF88;
    case 478u: goto L_08AEDFFC;
    case 479u: goto L_08AEE028;
    case 480u: goto L_08AEE034;
    case 481u: goto L_08AEE044;
    case 482u: goto L_08AEE048;
    case 483u: goto L_08AEE080;
    case 484u: goto L_08AEE0A0;
    case 485u: goto L_08AEE0EC;
    case 486u: goto L_08AEE120;
    case 487u: goto L_08AEE158;
    case 488u: goto L_08AEE184;
    case 489u: goto L_08AEE190;
    case 490u: goto L_08AEE1A4;
    case 491u: goto L_08AEE1A8;
    case 492u: goto L_08AEE1E0;
    case 493u: goto L_08AEE200;
    case 494u: goto L_08AEE24C;
    case 495u: goto L_08AEE294;
    case 496u: goto L_08AEE2E0;
    case 497u: goto L_08AEE30C;
    case 498u: goto L_08AEE318;
    case 499u: goto L_08AEE32C;
    case 500u: goto L_08AEE330;
    case 501u: goto L_08AEE368;
    case 502u: goto L_08AEE388;
    case 503u: goto L_08AEE3A8;
    case 504u: goto L_08AEE3F4;
    case 505u: goto L_08AEE3FC;
    case 506u: goto L_08AEE44C;
    case 507u: goto L_08AEE49C;
    case 508u: goto L_08AEE4AC;
    case 509u: goto L_08AEE520;
    case 510u: goto L_08AEE560;
    case 511u: goto L_08AEE568;
    case 512u: goto L_08AEE5A4;
    case 513u: goto L_08AEE5B4;
    case 514u: goto L_08AEE5F4;
    case 515u: goto L_08AEE610;
    case 516u: goto L_08AEE630;
    case 517u: goto L_08AEE668;
    case 518u: goto L_08AEE678;
    case 519u: goto L_08AEE680;
    case 520u: goto L_08AEE688;
    case 521u: goto L_08AEE6A0;
    case 522u: goto L_08AEE6AC;
    case 523u: goto L_08AEE6B4;
    case 524u: goto L_08AEE6E4;
    case 525u: goto L_08AEE6F4;
    case 526u: goto L_08AEE70C;
    case 527u: goto L_08AEE7B0;
    case 528u: goto L_08AEE7D0;
    case 529u: goto L_08AEE808;
    case 530u: goto L_08AEE840;
    case 531u: goto L_08AEE848;
    case 532u: goto L_08AEE850;
    case 533u: goto L_08AEE89C;
    case 534u: goto L_08AEE8B8;
    case 535u: goto L_08AEE8D0;
    case 536u: goto L_08AEE8E0;
    case 537u: goto L_08AEE914;
    case 538u: goto L_08AEE94C;
    case 539u: goto L_08AEE970;
    case 540u: goto L_08AEE9A0;
    case 541u: goto L_08AEE9A8;
    case 542u: goto L_08AEE9B0;
    case 543u: goto L_08AEE9FC;
    case 544u: goto L_08AEEA04;
    case 545u: goto L_08AEEA4C;
    case 546u: goto L_08AEEA70;
    case 547u: goto L_08AEEA94;
    case 548u: goto L_08AEEABC;
    case 549u: goto L_08AEEAF0;
    case 550u: goto L_08AEEAF8;
    case 551u: goto L_08AEEB00;
    case 552u: goto L_08AEEB18;
    case 553u: goto L_08AEEB78;
    case 554u: goto L_08AEEB88;
    case 555u: goto L_08AEEB90;
    case 556u: goto L_08AEEB98;
    case 557u: goto L_08AEEBA0;
    case 558u: goto L_08AEEBA4;
    case 559u: goto L_08AEEBAC;
    case 560u: goto L_08AEEBD8;
    case 561u: goto L_08AEEBE0;
    case 562u: goto L_08AEEBE8;
    case 563u: goto L_08AEEC30;
    case 564u: goto L_08AEEC48;
    case 565u: goto L_08AEECF8;
    case 566u: goto L_08AEED18;
    case 567u: goto L_08AEED2C;
    case 568u: goto L_08AEED34;
    case 569u: goto L_08AEED3C;
    case 570u: goto L_08AEED44;
    case 571u: goto L_08AEED4C;
    case 572u: goto L_08AEED5C;
    case 573u: goto L_08AEED64;
    case 574u: goto L_08AEED6C;
    case 575u: goto L_08AEED74;
    case 576u: goto L_08AEED7C;
    case 577u: goto L_08AEED84;
    case 578u: goto L_08AEED8C;
    case 579u: goto L_08AEED94;
    case 580u: goto L_08AEED9C;
    case 581u: goto L_08AEEDA4;
    case 582u: goto L_08AEEDAC;
    case 583u: goto L_08AEEDB4;
    case 584u: goto L_08AEEDBC;
    case 585u: goto L_08AEEDC4;
    case 586u: goto L_08AEEDCC;
    case 587u: goto L_08AEEDD4;
    case 588u: goto L_08AEEDDC;
    case 589u: goto L_08AEEDE4;
    case 590u: goto L_08AEEDF0;
    case 591u: goto L_08AEEDF8;
    case 592u: goto L_08AEEE00;
    case 593u: goto L_08AEEE0C;
    case 594u: goto L_08AEEE14;
    case 595u: goto L_08AEEE2C;
    case 596u: goto L_08AEEE34;
    case 597u: goto L_08AEEE3C;
    case 598u: goto L_08AEEE44;
    case 599u: goto L_08AEEE4C;
    case 600u: goto L_08AEEE54;
    case 601u: goto L_08AEEE5C;
    case 602u: goto L_08AEEE64;
    case 603u: goto L_08AEEE6C;
    case 604u: goto L_08AEEE74;
    case 605u: goto L_08AEEE80;
    case 606u: goto L_08AEEE88;
    case 607u: goto L_08AEEE90;
    case 608u: goto L_08AEEE98;
    case 609u: goto L_08AEEEA4;
    case 610u: goto L_08AEEEAC;
    case 611u: goto L_08AEEEB4;
    case 612u: goto L_08AEEEBC;
    case 613u: goto L_08AEEEC8;
    case 614u: goto L_08AEEED0;
    case 615u: goto L_08AEEED4;
    case 616u: goto L_08AEEEE4;
    case 617u: goto L_08AEEF10;
    case 618u: goto L_08AEEF1C;
    case 619u: goto L_08AEEF24;
    case 620u: goto L_08AEEF28;
    case 621u: goto L_08AEEF3C;
    case 622u: goto L_08AEEF48;
    case 623u: goto L_08AEEF50;
    case 624u: goto L_08AEEF54;
    case 625u: goto L_08AEEF60;
    case 626u: goto L_08AEEF84;
    case 627u: goto L_08AEEF8C;
    case 628u: goto L_08AEEFAC;
    case 629u: goto L_08AEEFB8;
    case 630u: goto L_08AEEFD0;
    case 631u: goto L_08AEEFD4;
    case 632u: goto L_08AEEFF0;
    case 633u: goto L_08AEF01C;
    case 634u: goto L_08AEF028;
    case 635u: goto L_08AEF034;
    case 636u: goto L_08AEF03C;
    case 637u: goto L_08AEF040;
    case 638u: goto L_08AEF044;
    case 639u: goto L_08AEF05C;
    case 640u: goto L_08AEF068;
    case 641u: goto L_08AEF070;
    case 642u: goto L_08AEF074;
    case 643u: goto L_08AEF080;
    case 644u: goto L_08AEF0A0;
    case 645u: goto L_08AEF0B8;
    case 646u: goto L_08AEF0DC;
    case 647u: goto L_08AEF108;
    case 648u: goto L_08AEF114;
    case 649u: goto L_08AEF120;
    case 650u: goto L_08AEF128;
    case 651u: goto L_08AEF12C;
    case 652u: goto L_08AEF130;
    case 653u: goto L_08AEF148;
    case 654u: goto L_08AEF154;
    case 655u: goto L_08AEF15C;
    case 656u: goto L_08AEF160;
    case 657u: goto L_08AEF16C;
    case 658u: goto L_08AEF18C;
    case 659u: goto L_08AEF1A0;
    case 660u: goto L_08AEF1C4;
    case 661u: goto L_08AEF1F0;
    case 662u: goto L_08AEF1FC;
    case 663u: goto L_08AEF208;
    case 664u: goto L_08AEF210;
    case 665u: goto L_08AEF214;
    case 666u: goto L_08AEF218;
    case 667u: goto L_08AEF230;
    case 668u: goto L_08AEF23C;
    case 669u: goto L_08AEF244;
    case 670u: goto L_08AEF248;
    case 671u: goto L_08AEF254;
    case 672u: goto L_08AEF274;
    case 673u: goto L_08AEF290;
    case 674u: goto L_08AEF2B4;
    case 675u: goto L_08AEF2E0;
    case 676u: goto L_08AEF2EC;
    case 677u: goto L_08AEF2F8;
    case 678u: goto L_08AEF300;
    case 679u: goto L_08AEF304;
    case 680u: goto L_08AEF308;
    case 681u: goto L_08AEF320;
    case 682u: goto L_08AEF32C;
    case 683u: goto L_08AEF334;
    case 684u: goto L_08AEF338;
    case 685u: goto L_08AEF344;
    case 686u: goto L_08AEF364;
    case 687u: goto L_08AEF378;
    case 688u: goto L_08AEF39C;
    case 689u: goto L_08AEF3AC;
    case 690u: goto L_08AEF3BC;
    case 691u: goto L_08AEF3E8;
    case 692u: goto L_08AEF3F4;
    case 693u: goto L_08AEF400;
    case 694u: goto L_08AEF408;
    case 695u: goto L_08AEF40C;
    case 696u: goto L_08AEF410;
    case 697u: goto L_08AEF428;
    case 698u: goto L_08AEF434;
    case 699u: goto L_08AEF43C;
    case 700u: goto L_08AEF440;
    case 701u: goto L_08AEF44C;
    case 702u: goto L_08AEF46C;
    case 703u: goto L_08AEF4A0;
    case 704u: goto L_08AEF4C4;
    case 705u: goto L_08AEF4F0;
    case 706u: goto L_08AEF4FC;
    case 707u: goto L_08AEF508;
    case 708u: goto L_08AEF510;
    case 709u: goto L_08AEF514;
    case 710u: goto L_08AEF518;
    case 711u: goto L_08AEF530;
    case 712u: goto L_08AEF53C;
    case 713u: goto L_08AEF544;
    case 714u: goto L_08AEF548;
    case 715u: goto L_08AEF554;
    case 716u: goto L_08AEF574;
    case 717u: goto L_08AEF5A4;
    case 718u: goto L_08AEF5C8;
    case 719u: goto L_08AEF5F4;
    case 720u: goto L_08AEF600;
    case 721u: goto L_08AEF60C;
    case 722u: goto L_08AEF614;
    case 723u: goto L_08AEF618;
    case 724u: goto L_08AEF61C;
    case 725u: goto L_08AEF634;
    case 726u: goto L_08AEF640;
    case 727u: goto L_08AEF648;
    case 728u: goto L_08AEF64C;
    case 729u: goto L_08AEF658;
    case 730u: goto L_08AEF678;
    case 731u: goto L_08AEF6B0;
    case 732u: goto L_08AEF6D4;
    case 733u: goto L_08AEF700;
    case 734u: goto L_08AEF70C;
    case 735u: goto L_08AEF718;
    case 736u: goto L_08AEF720;
    case 737u: goto L_08AEF724;
    case 738u: goto L_08AEF728;
    case 739u: goto L_08AEF740;
    case 740u: goto L_08AEF74C;
    case 741u: goto L_08AEF754;
    case 742u: goto L_08AEF758;
    case 743u: goto L_08AEF764;
    case 744u: goto L_08AEF784;
    case 745u: goto L_08AEF7B4;
    case 746u: goto L_08AEF7D8;
    case 747u: goto L_08AEF804;
    case 748u: goto L_08AEF810;
    case 749u: goto L_08AEF81C;
    case 750u: goto L_08AEF824;
    case 751u: goto L_08AEF828;
    case 752u: goto L_08AEF82C;
    case 753u: goto L_08AEF844;
    case 754u: goto L_08AEF850;
    case 755u: goto L_08AEF858;
    case 756u: goto L_08AEF85C;
    case 757u: goto L_08AEF868;
    case 758u: goto L_08AEF888;
    case 759u: goto L_08AEF8A0;
    case 760u: goto L_08AEF8C4;
    case 761u: goto L_08AEF8F0;
    case 762u: goto L_08AEF8FC;
    case 763u: goto L_08AEF908;
    case 764u: goto L_08AEF910;
    case 765u: goto L_08AEF914;
    case 766u: goto L_08AEF918;
    case 767u: goto L_08AEF930;
    case 768u: goto L_08AEF93C;
    case 769u: goto L_08AEF944;
    case 770u: goto L_08AEF948;
    case 771u: goto L_08AEF954;
    case 772u: goto L_08AEF974;
    case 773u: goto L_08AEF9A8;
    case 774u: goto L_08AEF9CC;
    case 775u: goto L_08AEF9FC;
    case 776u: goto L_08AEFA18;
    case 777u: goto L_08AEFA20;
    case 778u: goto L_08AEFA3C;
    case 779u: goto L_08AEFA68;
    case 780u: goto L_08AEFA74;
    case 781u: goto L_08AEFA80;
    case 782u: goto L_08AEFA88;
    case 783u: goto L_08AEFA8C;
    case 784u: goto L_08AEFA90;
    case 785u: goto L_08AEFAA8;
    case 786u: goto L_08AEFAB4;
    case 787u: goto L_08AEFABC;
    case 788u: goto L_08AEFAC0;
    case 789u: goto L_08AEFACC;
    case 790u: goto L_08AEFAEC;
    case 791u: goto L_08AEFB1C;
    case 792u: goto L_08AEFB40;
    case 793u: goto L_08AEFB6C;
    case 794u: goto L_08AEFB78;
    case 795u: goto L_08AEFB84;
    case 796u: goto L_08AEFB8C;
    case 797u: goto L_08AEFB90;
    case 798u: goto L_08AEFB94;
    case 799u: goto L_08AEFBAC;
    case 800u: goto L_08AEFBB8;
    case 801u: goto L_08AEFBC0;
    case 802u: goto L_08AEFBC4;
    case 803u: goto L_08AEFBD0;
    case 804u: goto L_08AEFBF0;
    case 805u: goto L_08AEFC28;
    case 806u: goto L_08AEFC4C;
    case 807u: goto L_08AEFC78;
    case 808u: goto L_08AEFC84;
    case 809u: goto L_08AEFC90;
    case 810u: goto L_08AEFC98;
    case 811u: goto L_08AEFC9C;
    case 812u: goto L_08AEFCA0;
    case 813u: goto L_08AEFCB8;
    case 814u: goto L_08AEFCC4;
    case 815u: goto L_08AEFCCC;
    case 816u: goto L_08AEFCD0;
    case 817u: goto L_08AEFCDC;
    case 818u: goto L_08AEFCFC;
    case 819u: goto L_08AEFD2C;
    case 820u: goto L_08AEFD50;
    case 821u: goto L_08AEFD7C;
    case 822u: goto L_08AEFD88;
    case 823u: goto L_08AEFD94;
    case 824u: goto L_08AEFD9C;
    case 825u: goto L_08AEFDA0;
    case 826u: goto L_08AEFDA4;
    case 827u: goto L_08AEFDBC;
    case 828u: goto L_08AEFDC8;
    case 829u: goto L_08AEFDD0;
    case 830u: goto L_08AEFDD4;
    case 831u: goto L_08AEFDE0;
    case 832u: goto L_08AEFE00;
    case 833u: goto L_08AEFE30;
    case 834u: goto L_08AEFE54;
    case 835u: goto L_08AEFE80;
    case 836u: goto L_08AEFE8C;
    case 837u: goto L_08AEFE98;
    case 838u: goto L_08AEFEA0;
    case 839u: goto L_08AEFEA4;
    case 840u: goto L_08AEFEA8;
    case 841u: goto L_08AEFEC0;
    case 842u: goto L_08AEFECC;
    case 843u: goto L_08AEFED4;
    case 844u: goto L_08AEFED8;
    case 845u: goto L_08AEFEE4;
    case 846u: goto L_08AEFF04;
    case 847u: goto L_08AEFF3C;
    case 848u: goto L_08AEFF60;
    case 849u: goto L_08AEFF8C;
    case 850u: goto L_08AEFF98;
    case 851u: goto L_08AEFFA4;
    case 852u: goto L_08AEFFAC;
    case 853u: goto L_08AEFFB0;
    case 854u: goto L_08AEFFB4;
    case 855u: goto L_08AEFFCC;
    case 856u: goto L_08AEFFD8;
    case 857u: goto L_08AEFFE0;
    case 858u: goto L_08AEFFE4;
    case 859u: goto L_08AEFFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AEC000:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AEC010u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem) && ctx.pc == 0x08AEC010u) goto L_08AEC010;
    return;
L_08AEC010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC068;
      }
      goto L_08AEC05C;
    }
L_08AEC05C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08AEC068;
L_08AEC068:
    ctx.gpr[31] = (0x08AEC070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC070u) goto L_08AEC070;
    return;
L_08AEC070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08AEC07Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem) && ctx.pc == 0x08AEC07Cu) goto L_08AEC07C;
    return;
L_08AEC07C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AEC090u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08AEC090u) goto L_08AEC090;
    return;
L_08AEC090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC3BC;
      }
      goto L_08AEC098;
    }
L_08AEC098:
    ctx.gpr[31] = (0x08AEC0A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    goto L_08AECC3C;
L_08AEC0A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC0F0;
      }
      goto L_08AEC0A8;
    }
L_08AEC0A8:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08AEC0B4u);
    ctx.gpr[4] = (0u | 1584u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC0B4u) goto L_08AEC0B4;
    return;
L_08AEC0B4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC0D4;
      }
      goto L_08AEC0C0;
    }
L_08AEC0C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AEC0D0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 581u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08AEC0D0u) goto L_08AEC0D0;
    return;
L_08AEC0D0:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    goto L_08AEC0D4;
L_08AEC0D4:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08AEC264;
      }
      goto L_08AEC0F0;
    }
L_08AEC0F0:
    ctx.gpr[31] = (0x08AEC0F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    goto L_08AECCC0;
L_08AEC0F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC144;
      }
      goto L_08AEC100;
    }
L_08AEC100:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08AEC110u);
    ctx.gpr[4] = (0u | 1632u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC110u) goto L_08AEC110;
    return;
L_08AEC110:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC130;
      }
      goto L_08AEC11C;
    }
L_08AEC11C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AEC12Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 304u, 0x08969648u>(ctx, &aot_mem) && ctx.pc == 0x08AEC12Cu) goto L_08AEC12C;
    return;
L_08AEC12C:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    goto L_08AEC130;
L_08AEC130:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AEC260;
      }
      goto L_08AEC144;
    }
L_08AEC144:
    ctx.gpr[31] = (0x08AEC14Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    goto L_08AECD48;
L_08AEC14C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC190;
      }
      goto L_08AEC154;
    }
L_08AEC154:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AEC164u);
    ctx.gpr[4] = (0u | 1984u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC164u) goto L_08AEC164;
    return;
L_08AEC164:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AEC188;
      }
      goto L_08AEC170;
    }
L_08AEC170:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AEC180u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 406u, 0x08B199C8u>(ctx, &aot_mem) && ctx.pc == 0x08AEC180u) goto L_08AEC180;
    return;
L_08AEC180:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    goto L_08AEC188;
L_08AEC188:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08AEC264;
      }
      goto L_08AEC190;
    }
L_08AEC190:
    ctx.gpr[31] = (0x08AEC198u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    goto L_08AECB2C;
L_08AEC198:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC1DC;
      }
      goto L_08AEC1A0;
    }
L_08AEC1A0:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AEC1B0u);
    ctx.gpr[4] = (0u | 2080u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC1B0u) goto L_08AEC1B0;
    return;
L_08AEC1B0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AEC1D4;
      }
      goto L_08AEC1BC;
    }
L_08AEC1BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AEC1CCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 226u, 0x089ED94Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC1CCu) goto L_08AEC1CC;
    return;
L_08AEC1CC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    goto L_08AEC1D4;
L_08AEC1D4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08AEC264;
      }
      goto L_08AEC1DC;
    }
L_08AEC1DC:
    ctx.gpr[31] = (0x08AEC1E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    goto L_08AECBB4;
L_08AEC1E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC228;
      }
      goto L_08AEC1EC;
    }
L_08AEC1EC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AEC1FCu);
    ctx.gpr[4] = (0u | 2064u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC1FCu) goto L_08AEC1FC;
    return;
L_08AEC1FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AEC220;
      }
      goto L_08AEC208;
    }
L_08AEC208:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AEC218u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 257u, 0x089D96B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC218u) goto L_08AEC218;
    return;
L_08AEC218:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    goto L_08AEC220;
L_08AEC220:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08AEC264;
      }
      goto L_08AEC228;
    }
L_08AEC228:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AEC238u);
    ctx.gpr[4] = (0u | 1920u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC238u) goto L_08AEC238;
    return;
L_08AEC238:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AEC260;
      }
      goto L_08AEC244;
    }
L_08AEC244:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AEC258u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC258u) goto L_08AEC258;
    return;
L_08AEC258:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    goto L_08AEC260;
L_08AEC260:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AEC264;
L_08AEC264:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[12])) && ctx.fpr[24] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (50042u << 16u);
      if (branch_taken) {
          goto L_08AEC294;
      }
      goto L_08AEC280;
    }
L_08AEC280:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AEC2A4;
      }
      goto L_08AEC294;
    }
L_08AEC294:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AEC2A0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08AEC2A0u) goto L_08AEC2A0;
    return;
L_08AEC2A0:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AEC2A4;
L_08AEC2A4:
    ctx.gpr[31] = (0x08AEC2ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 160u, 0x08AD0AE4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC2ACu) goto L_08AEC2AC;
    return;
L_08AEC2AC:
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEC2F0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem) && ctx.pc == 0x08AEC2F0u) goto L_08AEC2F0;
    return;
L_08AEC2F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AEC314u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem) && ctx.pc == 0x08AEC314u) goto L_08AEC314;
    return;
L_08AEC314:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(439), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(433), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(427), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x08AEC36Cu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem) && ctx.pc == 0x08AEC36Cu) goto L_08AEC36C;
    return;
L_08AEC36C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC394;
      }
      goto L_08AEC388;
    }
L_08AEC388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08AEC394;
L_08AEC394:
    ctx.gpr[31] = (0x08AEC39Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC39Cu) goto L_08AEC39C;
    return;
L_08AEC39C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08AEC3A8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem) && ctx.pc == 0x08AEC3A8u) goto L_08AEC3A8;
    return;
L_08AEC3A8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AEC3BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08AEC3BCu) goto L_08AEC3BC;
    return;
L_08AEC3BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC41C;
      }
      goto L_08AEC3C8;
    }
L_08AEC3C8:
    ctx.gpr[31] = (0x08AEC3D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x08AEC3D0u) goto L_08AEC3D0;
    return;
L_08AEC3D0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AEC400;
      }
      goto L_08AEC3DC;
    }
L_08AEC3DC:
    ctx.gpr[31] = (0x08AEC3E4u);
    ctx.gpr[4] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEC3E4u) goto L_08AEC3E4;
    return;
L_08AEC3E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC41C;
      }
      goto L_08AEC3F0;
    }
L_08AEC3F0:
    ctx.gpr[31] = (0x08AEC3F8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 120u, 0x08AA4C80u>(ctx, &aot_mem) && ctx.pc == 0x08AEC3F8u) goto L_08AEC3F8;
    return;
L_08AEC3F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC41C;
      }
      goto L_08AEC400;
    }
L_08AEC400:
    ctx.gpr[31] = (0x08AEC408u);
    ctx.gpr[4] = (0u | 408u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEC408u) goto L_08AEC408;
    return;
L_08AEC408:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC41C;
      }
      goto L_08AEC414;
    }
L_08AEC414:
    ctx.gpr[31] = (0x08AEC41Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 655u, 0x089F75BCu>(ctx, &aot_mem) && ctx.pc == 0x08AEC41Cu) goto L_08AEC41C;
    return;
L_08AEC41C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC440;
      }
      goto L_08AEC428;
    }
L_08AEC428:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21784));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AEC440u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem) && ctx.pc == 0x08AEC440u) goto L_08AEC440;
    return;
L_08AEC440:
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
L_08AEC480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
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
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (2236u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AEC4D4u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC4D4u) goto L_08AEC4D4;
    return;
L_08AEC4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC844;
      }
      goto L_08AEC4E4;
    }
L_08AEC4E4:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEC4F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AEC4F4u) goto L_08AEC4F4;
    return;
L_08AEC4F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AEC508u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC508u) goto L_08AEC508;
    return;
L_08AEC508:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-970));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-937));
    goto L_08AEC52C;
L_08AEC52C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEC694;
      }
      goto L_08AEC534;
    }
L_08AEC534:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC694;
      }
      goto L_08AEC53C;
    }
L_08AEC53C:
    ctx.gpr[31] = (0x08AEC544u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 641u, 0x08AD38BCu>(ctx, &aot_mem) && ctx.pc == 0x08AEC544u) goto L_08AEC544;
    return;
L_08AEC544:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC570;
      }
      goto L_08AEC550;
    }
L_08AEC550:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AEC570;
      }
      goto L_08AEC558;
    }
L_08AEC558:
    ctx.gpr[31] = (0x08AEC560u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AECC3C;
L_08AEC560:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC570;
      }
      goto L_08AEC568;
    }
L_08AEC568:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08AEC570;
L_08AEC570:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AEC670;
      }
      goto L_08AEC578;
    }
L_08AEC578:
    ctx.gpr[31] = (0x08AEC580u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AECAA8;
L_08AEC580:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC598;
      }
      goto L_08AEC588;
    }
L_08AEC588:
    ctx.gpr[31] = (0x08AEC590u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AECC3C;
L_08AEC590:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC66C;
      }
      goto L_08AEC598;
    }
L_08AEC598:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -954 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 172 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEC618;
      }
      goto L_08AEC5A4;
    }
L_08AEC5A4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -973 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -963 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEC5D0;
      }
      goto L_08AEC5B0;
    }
L_08AEC5B0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -1000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -983 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEC5E0;
      }
      goto L_08AEC5BC;
    }
L_08AEC5BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC5E0;
      }
      goto L_08AEC5C4;
    }
L_08AEC5C4:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC670;
      }
      goto L_08AEC5D0;
    }
L_08AEC5D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -960 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEC5EC;
      }
      goto L_08AEC5D8;
    }
L_08AEC5D8:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AEC5C4;
      }
      goto L_08AEC5E0;
    }
L_08AEC5E0:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC670;
      }
      goto L_08AEC5EC;
    }
L_08AEC5EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -959 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEC608;
      }
      goto L_08AEC5F4;
    }
L_08AEC5F4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -962 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC5E0;
      }
      goto L_08AEC600;
    }
L_08AEC600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC5C4;
      }
      goto L_08AEC608;
    }
L_08AEC608:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC5C4;
      }
      goto L_08AEC610;
    }
L_08AEC610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC670;
      }
      goto L_08AEC618;
    }
L_08AEC618:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 281 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEC64C;
      }
      goto L_08AEC620;
    }
L_08AEC620:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -942 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -943 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEC63C;
      }
      goto L_08AEC62C;
    }
L_08AEC62C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC5E0;
      }
      goto L_08AEC634;
    }
L_08AEC634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC5C4;
      }
      goto L_08AEC63C;
    }
L_08AEC63C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AEC5E0;
      }
      goto L_08AEC644;
    }
L_08AEC644:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC5C4;
      }
      goto L_08AEC64C;
    }
L_08AEC64C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-172));
      if (branch_taken) {
          goto L_08AEC5E0;
      }
      goto L_08AEC654;
    }
L_08AEC654:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(17216)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEC66C:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08AEC670;
L_08AEC670:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC684;
      }
      goto L_08AEC680;
    }
L_08AEC680:
    ctx.gpr[17] = (0u | 0u);
    goto L_08AEC684;
L_08AEC684:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC52C;
      }
      goto L_08AEC694;
    }
L_08AEC694:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AEC844;
      }
      goto L_08AEC69C;
    }
L_08AEC69C:
    ctx.gpr[31] = (0x08AEC6A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AECC3C;
L_08AEC6A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC6E8;
      }
      goto L_08AEC6AC;
    }
L_08AEC6AC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AEC6B8u);
    ctx.gpr[4] = (0u | 1584u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC6B8u) goto L_08AEC6B8;
    return;
L_08AEC6B8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AEC6D4;
      }
      goto L_08AEC6C4;
    }
L_08AEC6C4:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AEC6D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 581u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08AEC6D0u) goto L_08AEC6D0;
    return;
L_08AEC6D0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08AEC6D4;
L_08AEC6D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08AEC718;
      }
      goto L_08AEC6E8;
    }
L_08AEC6E8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AEC6F4u);
    ctx.gpr[4] = (0u | 1920u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC6F4u) goto L_08AEC6F4;
    return;
L_08AEC6F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AEC714;
      }
      goto L_08AEC700;
    }
L_08AEC700:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AEC710u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC710u) goto L_08AEC710;
    return;
L_08AEC710:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08AEC714;
L_08AEC714:
    ctx.gpr[4] = (2236u << 16u);
    goto L_08AEC718;
L_08AEC718:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AEC73Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEC73Cu) goto L_08AEC73C;
    return;
L_08AEC73C:
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x08AEC798u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x08AEC798u) goto L_08AEC798;
    return;
L_08AEC798:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEC7A8u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem) && ctx.pc == 0x08AEC7A8u) goto L_08AEC7A8;
    return;
L_08AEC7A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AEC7E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem) && ctx.pc == 0x08AEC7E0u) goto L_08AEC7E0;
    return;
L_08AEC7E0:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(439), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(433), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(427), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x08AEC838u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem) && ctx.pc == 0x08AEC838u) goto L_08AEC838;
    return;
L_08AEC838:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08AEC844u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC844u) goto L_08AEC844;
    return;
L_08AEC844:
    ctx.gpr[2] = (0u | 0u);
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
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEC884:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7656), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AEC918;
      }
      goto L_08AEC8AC;
    }
L_08AEC8AC:
    ctx.gpr[16] = (0u | 6u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08AEC8B4;
L_08AEC8B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC904;
      }
      goto L_08AEC8C8;
    }
L_08AEC8C8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AEC904;
      }
      goto L_08AEC8D4;
    }
L_08AEC8D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AEC8ECu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEC8ECu) goto L_08AEC8EC;
    return;
L_08AEC8EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC904;
      }
      goto L_08AEC8F4;
    }
L_08AEC8F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AEC904u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 565u, 0x08AA25E0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC904u) goto L_08AEC904;
    return;
L_08AEC904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AEC8B4;
      }
      goto L_08AEC918;
    }
L_08AEC918:
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
L_08AEC930:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEC948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 79u, 0x08A8C7F4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC948u) goto L_08AEC948;
    return;
L_08AEC948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AEC99C;
      }
      goto L_08AEC95C;
    }
L_08AEC95C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    goto L_08AEC960;
L_08AEC960:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC98C;
      }
      goto L_08AEC96C;
    }
L_08AEC96C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AEC98C;
      }
      goto L_08AEC978;
    }
L_08AEC978:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC984;
      }
      goto L_08AEC980;
    }
L_08AEC980:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AEC984;
L_08AEC984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC9A0;
      }
      goto L_08AEC98C;
    }
L_08AEC98C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AEC960;
      }
      goto L_08AEC99C;
    }
L_08AEC99C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AEC9A0;
L_08AEC9A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEC9B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECA04;
      }
      goto L_08AEC9C4;
    }
L_08AEC9C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    goto L_08AEC9C8;
L_08AEC9C8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC9F4;
      }
      goto L_08AEC9D4;
    }
L_08AEC9D4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AEC9F4;
      }
      goto L_08AEC9E0;
    }
L_08AEC9E0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC9EC;
      }
      goto L_08AEC9E8;
    }
L_08AEC9E8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_08AEC9EC;
L_08AEC9EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECA08;
      }
      goto L_08AEC9F4;
    }
L_08AEC9F4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AEC9C8;
      }
      goto L_08AECA04;
    }
L_08AECA04:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AECA08;
L_08AECA08:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AECA10:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8672), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AECA18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECA38;
      }
      goto L_08AECA28;
    }
L_08AECA28:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AECA38;
L_08AECA38:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECA6C;
      }
      goto L_08AECA40;
    }
L_08AECA40:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AECA64;
      }
      goto L_08AECA50;
    }
L_08AECA50:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECA74;
      }
      goto L_08AECA5C;
    }
L_08AECA5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECA84;
      }
      goto L_08AECA64;
    }
L_08AECA64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECAA0;
      }
      goto L_08AECA6C;
    }
L_08AECA6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECAA0;
      }
      goto L_08AECA74;
    }
L_08AECA74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AECA84;
L_08AECA84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08AECA9C;
      }
      goto L_08AECA94;
    }
L_08AECA94:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AECA64;
      }
      goto L_08AECA9C;
    }
L_08AECA9C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AECAA0;
L_08AECAA0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AECAA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECAC8;
      }
      goto L_08AECAB8;
    }
L_08AECAB8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AECAC8;
L_08AECAC8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECAFC;
      }
      goto L_08AECAD0;
    }
L_08AECAD0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AECAF4;
      }
      goto L_08AECAE0;
    }
L_08AECAE0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECB04;
      }
      goto L_08AECAEC;
    }
L_08AECAEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECB14;
      }
      goto L_08AECAF4;
    }
L_08AECAF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECB24;
      }
      goto L_08AECAFC;
    }
L_08AECAFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECB24;
      }
      goto L_08AECB04;
    }
L_08AECB04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AECB14;
L_08AECB14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AECAF4;
      }
      goto L_08AECB20;
    }
L_08AECB20:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AECB24;
L_08AECB24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AECB2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECB4C;
      }
      goto L_08AECB3C;
    }
L_08AECB3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AECB4C;
L_08AECB4C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECB80;
      }
      goto L_08AECB54;
    }
L_08AECB54:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AECB78;
      }
      goto L_08AECB64;
    }
L_08AECB64:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECB88;
      }
      goto L_08AECB70;
    }
L_08AECB70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECB98;
      }
      goto L_08AECB78;
    }
L_08AECB78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECBAC;
      }
      goto L_08AECB80;
    }
L_08AECB80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECBAC;
      }
      goto L_08AECB88;
    }
L_08AECB88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AECB98;
L_08AECB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AECB78;
      }
      goto L_08AECBA8;
    }
L_08AECBA8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AECBAC;
L_08AECBAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AECBB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECBD4;
      }
      goto L_08AECBC4;
    }
L_08AECBC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AECBD4;
L_08AECBD4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECC08;
      }
      goto L_08AECBDC;
    }
L_08AECBDC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AECC00;
      }
      goto L_08AECBEC;
    }
L_08AECBEC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECC10;
      }
      goto L_08AECBF8;
    }
L_08AECBF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECC20;
      }
      goto L_08AECC00;
    }
L_08AECC00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECC34;
      }
      goto L_08AECC08;
    }
L_08AECC08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECC34;
      }
      goto L_08AECC10;
    }
L_08AECC10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AECC20;
L_08AECC20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AECC00;
      }
      goto L_08AECC30;
    }
L_08AECC30:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AECC34;
L_08AECC34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AECC3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECC5C;
      }
      goto L_08AECC4C;
    }
L_08AECC4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AECC5C;
L_08AECC5C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECC90;
      }
      goto L_08AECC64;
    }
L_08AECC64:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AECC88;
      }
      goto L_08AECC74;
    }
L_08AECC74:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECC98;
      }
      goto L_08AECC80;
    }
L_08AECC80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECCA8;
      }
      goto L_08AECC88;
    }
L_08AECC88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECCB8;
      }
      goto L_08AECC90;
    }
L_08AECC90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECCB8;
      }
      goto L_08AECC98;
    }
L_08AECC98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AECCA8;
L_08AECCA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AECC88;
      }
      goto L_08AECCB4;
    }
L_08AECCB4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AECCB8;
L_08AECCB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AECCC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECCE0;
      }
      goto L_08AECCD0;
    }
L_08AECCD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AECCE0;
L_08AECCE0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECD14;
      }
      goto L_08AECCE8;
    }
L_08AECCE8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AECD0C;
      }
      goto L_08AECCF8;
    }
L_08AECCF8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECD1C;
      }
      goto L_08AECD04;
    }
L_08AECD04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECD2C;
      }
      goto L_08AECD0C;
    }
L_08AECD0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECD40;
      }
      goto L_08AECD14;
    }
L_08AECD14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECD40;
      }
      goto L_08AECD1C;
    }
L_08AECD1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AECD2C;
L_08AECD2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AECD0C;
      }
      goto L_08AECD3C;
    }
L_08AECD3C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AECD40;
L_08AECD40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AECD48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECD68;
      }
      goto L_08AECD58;
    }
L_08AECD58:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AECD68;
L_08AECD68:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECD9C;
      }
      goto L_08AECD70;
    }
L_08AECD70:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AECD94;
      }
      goto L_08AECD80;
    }
L_08AECD80:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECDA4;
      }
      goto L_08AECD8C;
    }
L_08AECD8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECDB4;
      }
      goto L_08AECD94;
    }
L_08AECD94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECDC8;
      }
      goto L_08AECD9C;
    }
L_08AECD9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AECDC8;
      }
      goto L_08AECDA4;
    }
L_08AECDA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AECDB4;
L_08AECDB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AECD94;
      }
      goto L_08AECDC4;
    }
L_08AECDC4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AECDC8;
L_08AECDC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AECDD0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AECDDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 8u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08AECE7Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 365u, 0x0889A004u>(ctx, &aot_mem) && ctx.pc == 0x08AECE7Cu) goto L_08AECE7C;
    return;
L_08AECE7C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AECF28;
      }
      goto L_08AECE90;
    }
L_08AECE90:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_08AECEA8;
L_08AECEA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AECF18;
      }
      goto L_08AECEE4;
    }
L_08AECEE4:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[18] = ctx.fpr[13] + ctx.fpr[18];
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AECF18;
      }
      goto L_08AECF0C;
    }
L_08AECF0C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AED02C;
      }
      goto L_08AECF18;
    }
L_08AECF18:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AECEA8;
      }
      goto L_08AECF28;
    }
L_08AECF28:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 8u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08AECF7Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 365u, 0x0889A004u>(ctx, &aot_mem) && ctx.pc == 0x08AECF7Cu) goto L_08AECF7C;
    return;
L_08AECF7C:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED028;
      }
      goto L_08AECF90;
    }
L_08AECF90:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    goto L_08AECFA8;
L_08AECFA8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AED018;
      }
      goto L_08AECFE4;
    }
L_08AECFE4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[16] = ctx.fpr[20] + ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AED018;
      }
      goto L_08AED00C;
    }
L_08AED00C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AED02C;
      }
      goto L_08AED018;
    }
L_08AED018:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AECFA8;
      }
      goto L_08AED028;
    }
L_08AED028:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AED02C;
L_08AED02C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AED054:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AED07Cu);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 48u, 0x08960450u>(ctx, &aot_mem) && ctx.pc == 0x08AED07Cu) goto L_08AED07C;
    return;
L_08AED07C:
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AED1A4;
      }
      goto L_08AED0B4;
    }
L_08AED0B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AED0D8;
      }
      goto L_08AED0C8;
    }
L_08AED0C8:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AED0D8;
L_08AED0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08AED1A4;
      }
      goto L_08AED0E8;
    }
L_08AED0E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1952)));
    ctx.gpr[4] = (17189u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AED1A4;
      }
      goto L_08AED10C;
    }
L_08AED10C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1840));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
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
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08AED16C;
      }
      goto L_08AED164;
    }
L_08AED164:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AED16C;
L_08AED16C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED1A4;
      }
      goto L_08AED174;
    }
L_08AED174:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AED198u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 497u, 0x08B12378u>(ctx, &aot_mem) && ctx.pc == 0x08AED198u) goto L_08AED198;
    return;
L_08AED198:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AED1A4;
      }
      goto L_08AED1A0;
    }
L_08AED1A0:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AED1A4;
L_08AED1A4:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1952)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AED1D4;
      }
      goto L_08AED1CC;
    }
L_08AED1CC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED26C;
      }
      goto L_08AED1D4;
    }
L_08AED1D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10357)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AED264;
      }
      goto L_08AED1E0;
    }
L_08AED1E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AED20C;
      }
      goto L_08AED1EC;
    }
L_08AED1EC:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
        goto L_08AED214;
    }
    goto L_08AED204;
L_08AED204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED21C;
      }
      goto L_08AED20C;
    }
L_08AED20C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AED280;
      }
      goto L_08AED214;
    }
L_08AED214:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED254;
      }
      goto L_08AED21C;
    }
L_08AED21C:
    ctx.gpr[31] = (0x08AED224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem) && ctx.pc == 0x08AED224u) goto L_08AED224;
    return;
L_08AED224:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AED25C;
      }
      goto L_08AED24C;
    }
L_08AED24C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AED280;
      }
      goto L_08AED254;
    }
L_08AED254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AED280;
      }
      goto L_08AED25C;
    }
L_08AED25C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AED280;
      }
      goto L_08AED264;
    }
L_08AED264:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AED280;
      }
      goto L_08AED26C;
    }
L_08AED26C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED27C;
      }
      goto L_08AED278;
    }
L_08AED278:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    goto L_08AED27C;
L_08AED27C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AED280;
L_08AED280:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AED2A0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AED2F4:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10352)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10352), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AED308:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AED328u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AECDD0;
L_08AED328:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10352)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10352), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AED348:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AED3AC;
      }
      goto L_08AED368;
    }
L_08AED368:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10357)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AED388;
      }
      goto L_08AED374;
    }
L_08AED374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AED3AC;
      }
      goto L_08AED388;
    }
L_08AED388:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AED3AC;
      }
      goto L_08AED394;
    }
L_08AED394:
    ctx.gpr[31] = (0x08AED39Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AED054;
L_08AED39C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED3AC;
      }
      goto L_08AED3A4;
    }
L_08AED3A4:
    ctx.gpr[31] = (0x08AED3ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AED5F8;
L_08AED3AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AED420;
      }
      goto L_08AED3B8;
    }
L_08AED3B8:
    ctx.gpr[31] = (0x08AED3C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08AED3C0u) goto L_08AED3C0;
    return;
L_08AED3C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED41C;
      }
      goto L_08AED3CC;
    }
L_08AED3CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AED420;
      }
      goto L_08AED3DC;
    }
L_08AED3DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 60000u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AED420;
      }
      goto L_08AED414;
    }
L_08AED414:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AED420;
      }
      goto L_08AED41C;
    }
L_08AED41C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    goto L_08AED420;
L_08AED420:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AED434:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10348), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10352), 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10356), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10357), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AED448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[3] = (ctx.gpr[11] | 0u);
    ctx.gpr[12] = (ctx.gpr[10] | 0u);
    ctx.gpr[13] = (ctx.gpr[6] | 0u);
    ctx.gpr[2] = (ctx.gpr[7] & 255u);
    ctx.gpr[11] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (ctx.gpr[9] & 255u);
    ctx.gpr[9] = (ctx.gpr[12] & 65535u);
    ctx.gpr[8] = (ctx.gpr[3] & 65535u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10348)));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[7]) < 195 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[13] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_08AED508;
      }
      goto L_08AED49C;
    }
L_08AED49C:
    ctx.gpr[3] = (ctx.gpr[9] | 0u);
    ctx.gpr[12] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2592));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AED4FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    goto L_08AED2A0;
L_08AED4FC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10348)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10348), ctx.gpr[7]);
    goto L_08AED508;
L_08AED508:
    ctx.gpr[2] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AED518:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AED530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 39u, 0x089603D4u>(ctx, &aot_mem) && ctx.pc == 0x08AED530u) goto L_08AED530;
    return;
L_08AED530:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AED580;
      }
      goto L_08AED538;
    }
L_08AED538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
        goto L_08AED550;
    }
    goto L_08AED544;
L_08AED544:
    ctx.gpr[31] = (0x08AED54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem) && ctx.pc == 0x08AED54Cu) goto L_08AED54C;
    return;
L_08AED54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08AED550;
L_08AED550:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AED580;
      }
      goto L_08AED55C;
    }
L_08AED55C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10356)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10356), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10356)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AED588;
      }
      goto L_08AED578;
    }
L_08AED578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED58C;
      }
      goto L_08AED580;
    }
L_08AED580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED5E4;
      }
      goto L_08AED588;
    }
L_08AED588:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10356), static_cast<std::uint8_t>(0u));
    goto L_08AED58C;
L_08AED58C:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10356)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10348)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2280u << 16u);
      if (branch_taken) {
          goto L_08AED5D0;
      }
      goto L_08AED5A0;
    }
L_08AED5A0:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(2592));
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08AED5B4;
L_08AED5B4:
    ctx.gpr[31] = (0x08AED5BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AED348;
L_08AED5BC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10348)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_08AED5B4;
      }
      goto L_08AED5D0;
    }
L_08AED5D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10357)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AED5E4;
      }
      goto L_08AED5DC;
    }
L_08AED5DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10357), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AED5E4;
L_08AED5E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AED5F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5448)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AED658;
      }
      goto L_08AED644;
    }
L_08AED644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AED660;
      }
      goto L_08AED650;
    }
L_08AED650:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED734;
      }
      goto L_08AED658;
    }
L_08AED658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDE78;
      }
      goto L_08AED660;
    }
L_08AED660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AED690;
      }
      goto L_08AED670;
    }
L_08AED670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AED67Cu);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x08AED67Cu) goto L_08AED67C;
    return;
L_08AED67C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED690;
      }
      goto L_08AED684;
    }
L_08AED684:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AED6DC;
      }
      goto L_08AED690;
    }
L_08AED690:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08AED69Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08AED69Cu) goto L_08AED69C;
    return;
L_08AED69C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AED6B0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 526u, 0x08A8EB48u>(ctx, &aot_mem) && ctx.pc == 0x08AED6B0u) goto L_08AED6B0;
    return;
L_08AED6B0:
    ctx.gpr[31] = (0x08AED6B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 443u, 0x08B41D30u>(ctx, &aot_mem) && ctx.pc == 0x08AED6B8u) goto L_08AED6B8;
    return;
L_08AED6B8:
    ctx.gpr[31] = (0x08AED6C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 511u, 0x08B42280u>(ctx, &aot_mem) && ctx.pc == 0x08AED6C0u) goto L_08AED6C0;
    return;
L_08AED6C0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AED6D4;
      }
      goto L_08AED6CC;
    }
L_08AED6CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDE78;
      }
      goto L_08AED6D4;
    }
L_08AED6D4:
    ctx.gpr[4] = (0u - ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AED6DC;
L_08AED6DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AED6E8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AECDDC;
L_08AED6E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AED720;
      }
      goto L_08AED6F0;
    }
L_08AED6F0:
    ctx.gpr[31] = (0x08AED6F8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x08AED6F8u) goto L_08AED6F8;
    return;
L_08AED6F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED718;
      }
      goto L_08AED700;
    }
L_08AED700:
    ctx.gpr[31] = (0x08AED708u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AECA18;
L_08AED708:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AED774;
      }
      goto L_08AED710;
    }
L_08AED710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED82C;
      }
      goto L_08AED718;
    }
L_08AED718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDE78;
      }
      goto L_08AED720;
    }
L_08AED720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDE78;
      }
      goto L_08AED734;
    }
L_08AED734:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AED740u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AECDDC;
L_08AED740:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AED760;
      }
      goto L_08AED748;
    }
L_08AED748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AED758u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AED758u) goto L_08AED758;
    return;
L_08AED758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AED6F0;
      }
      goto L_08AED760;
    }
L_08AED760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDE78;
      }
      goto L_08AED774;
    }
L_08AED774:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AED780u);
    ctx.gpr[4] = (0u | 1184u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AED780u) goto L_08AED780;
    return;
L_08AED780:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08AED7C8;
      }
      goto L_08AED7B4;
    }
L_08AED7B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AED7C4u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 689u, 0x088A2F88u>(ctx, &aot_mem) && ctx.pc == 0x08AED7C4u) goto L_08AED7C4;
    return;
L_08AED7C4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AED7C8;
L_08AED7C8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AED804;
      }
      goto L_08AED7E8;
    }
L_08AED7E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AED818;
      }
      goto L_08AED804;
    }
L_08AED804:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AED810u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08AED810u) goto L_08AED810;
    return;
L_08AED810:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AED81C;
      }
      goto L_08AED818;
    }
L_08AED818:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_08AED81C;
L_08AED81C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AEDB30;
      }
      goto L_08AED82C;
    }
L_08AED82C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AED850;
      }
      goto L_08AED840;
    }
L_08AED840:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AED850;
L_08AED850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(636)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED874;
      }
      goto L_08AED868;
    }
L_08AED868:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AED928;
      }
      goto L_08AED874;
    }
L_08AED874:
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (50042u << 16u);
      if (branch_taken) {
          goto L_08AED8A0;
      }
      goto L_08AED88C;
    }
L_08AED88C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AED910;
      }
      goto L_08AED8A0;
    }
L_08AED8A0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08AED8F8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem) && ctx.pc == 0x08AED8F8u) goto L_08AED8F8;
    return;
L_08AED8F8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED928;
      }
      goto L_08AED908;
    }
L_08AED908:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08AED928;
      }
      goto L_08AED910;
    }
L_08AED910:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AED924u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem) && ctx.pc == 0x08AED924u) goto L_08AED924;
    return;
L_08AED924:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AED928;
L_08AED928:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDB28;
      }
      goto L_08AED934;
    }
L_08AED934:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[6] = (16457u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17204u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08AED980;
      }
      goto L_08AED970;
    }
L_08AED970:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AED980;
L_08AED980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDAD8;
      }
      goto L_08AED994;
    }
L_08AED994:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AED9F0;
      }
      goto L_08AED99C;
    }
L_08AED99C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AEDA24;
      }
      goto L_08AED9A4;
    }
L_08AED9A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AEDA58;
      }
      goto L_08AED9AC;
    }
L_08AED9AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AEDAD8;
      }
      goto L_08AED9B4;
    }
L_08AED9B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AEDA98;
      }
      goto L_08AED9BC;
    }
L_08AED9BC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AED9C8u);
    ctx.gpr[4] = (0u | 1984u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AED9C8u) goto L_08AED9C8;
    return;
L_08AED9C8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AED9E4;
      }
      goto L_08AED9D4;
    }
L_08AED9D4:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AED9E0u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 406u, 0x08B199C8u>(ctx, &aot_mem) && ctx.pc == 0x08AED9E0u) goto L_08AED9E0;
    return;
L_08AED9E0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AED9E4;
L_08AED9E4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AEDB0C;
      }
      goto L_08AED9F0;
    }
L_08AED9F0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AED9FCu);
    ctx.gpr[4] = (0u | 2080u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AED9FCu) goto L_08AED9FC;
    return;
L_08AED9FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AEDA18;
      }
      goto L_08AEDA08;
    }
L_08AEDA08:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AEDA14u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 226u, 0x089ED94Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDA14u) goto L_08AEDA14;
    return;
L_08AEDA14:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AEDA18;
L_08AEDA18:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AEDB0C;
      }
      goto L_08AEDA24;
    }
L_08AEDA24:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AEDA30u);
    ctx.gpr[4] = (0u | 2064u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDA30u) goto L_08AEDA30;
    return;
L_08AEDA30:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AEDA4C;
      }
      goto L_08AEDA3C;
    }
L_08AEDA3C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AEDA48u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 257u, 0x089D96B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDA48u) goto L_08AEDA48;
    return;
L_08AEDA48:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AEDA4C;
L_08AEDA4C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AEDB0C;
      }
      goto L_08AEDA58;
    }
L_08AEDA58:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AEDA64u);
    ctx.gpr[4] = (0u | 1584u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDA64u) goto L_08AEDA64;
    return;
L_08AEDA64:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AEDA80;
      }
      goto L_08AEDA70;
    }
L_08AEDA70:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AEDA7Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 581u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08AEDA7Cu) goto L_08AEDA7C;
    return;
L_08AEDA7C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AEDA80;
L_08AEDA80:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AEDB0C;
      }
      goto L_08AEDA98;
    }
L_08AEDA98:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AEDAA4u);
    ctx.gpr[4] = (0u | 1632u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDAA4u) goto L_08AEDAA4;
    return;
L_08AEDAA4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AEDAC0;
      }
      goto L_08AEDAB0;
    }
L_08AEDAB0:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AEDABCu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 304u, 0x08969648u>(ctx, &aot_mem) && ctx.pc == 0x08AEDABCu) goto L_08AEDABC;
    return;
L_08AEDABC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AEDAC0;
L_08AEDAC0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AEDB0C;
      }
      goto L_08AEDAD8;
    }
L_08AEDAD8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AEDAE4u);
    ctx.gpr[4] = (0u | 1920u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDAE4u) goto L_08AEDAE4;
    return;
L_08AEDAE4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AEDB04;
      }
      goto L_08AEDAF0;
    }
L_08AEDAF0:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08AEDB00u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem) && ctx.pc == 0x08AEDB00u) goto L_08AEDB00;
    return;
L_08AEDB00:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AEDB04;
L_08AEDB04:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_08AEDB0C;
L_08AEDB0C:
    ctx.gpr[31] = (0x08AEDB14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 160u, 0x08AD0AE4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDB14u) goto L_08AEDB14;
    return;
L_08AEDB14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AEDB30;
      }
      goto L_08AEDB28;
    }
L_08AEDB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDE78;
      }
      goto L_08AEDB30;
    }
L_08AEDB30:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AEDB58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 160u, 0x08AD0AE4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDB58u) goto L_08AEDB58;
    return;
L_08AEDB58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[20] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[24];
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AEDB94u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08AEDB94u) goto L_08AEDB94;
    return;
L_08AEDB94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x08AEDBA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08AEDBA8u) goto L_08AEDBA8;
    return;
L_08AEDBA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), ctx.gpr[22]);
    ctx.gpr[31] = (0x08AEDBC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDBC4u) goto L_08AEDBC4;
    return;
L_08AEDBC4:
    ctx.gpr[31] = (0x08AEDBCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AEDBCCu) goto L_08AEDBCC;
    return;
L_08AEDBCC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AEDBE0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDBE0u) goto L_08AEDBE0;
    return;
L_08AEDBE0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDC0C;
      }
      goto L_08AEDC04;
    }
L_08AEDC04:
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(558), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AEDC0C;
L_08AEDC0C:
    ctx.gpr[31] = (0x08AEDC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AEDC14u) goto L_08AEDC14;
    return;
L_08AEDC14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AEDC28u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDC28u) goto L_08AEDC28;
    return;
L_08AEDC28:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(30)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDC54;
      }
      goto L_08AEDC4C;
    }
L_08AEDC4C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), ctx.gpr[4]);
    goto L_08AEDC54;
L_08AEDC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AEDD38;
      }
      goto L_08AEDC60;
    }
L_08AEDC60:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEDC84;
      }
      goto L_08AEDC74;
    }
L_08AEDC74:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AEDC84;
L_08AEDC84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AEDC90u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 764u, 0x08AA2FB4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDC90u) goto L_08AEDC90;
    return;
L_08AEDC90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(548), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(177)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(549), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(178)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(550), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(179)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(551), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEDCE0;
      }
      goto L_08AEDCD0;
    }
L_08AEDCD0:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AEDCE0;
L_08AEDCE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AEDCECu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 774u, 0x08AA3070u>(ctx, &aot_mem) && ctx.pc == 0x08AEDCECu) goto L_08AEDCEC;
    return;
L_08AEDCEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(177)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(553), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(178)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(554), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(179)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(555), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(896), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(897), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDE1C;
      }
      goto L_08AEDD38;
    }
L_08AEDD38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AEDE1C;
      }
      goto L_08AEDD44;
    }
L_08AEDD44:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEDD68;
      }
      goto L_08AEDD58;
    }
L_08AEDD58:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AEDD68;
L_08AEDD68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AEDD74u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 784u, 0x08AA312Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDD74u) goto L_08AEDD74;
    return;
L_08AEDD74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(548), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(181)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(549), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(182)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(550), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(183)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(551), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEDDC4;
      }
      goto L_08AEDDB4;
    }
L_08AEDDB4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AEDDC4;
L_08AEDDC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AEDDD8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 794u, 0x08AA31E8u>(ctx, &aot_mem) && ctx.pc == 0x08AEDDD8u) goto L_08AEDDD8;
    return;
L_08AEDDD8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(181)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(553), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(182)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(554), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(183)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(555), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(896), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(897), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AEDE1C;
L_08AEDE1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AEDE28u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem) && ctx.pc == 0x08AEDE28u) goto L_08AEDE28;
    return;
L_08AEDE28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08AEDE34u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem) && ctx.pc == 0x08AEDE34u) goto L_08AEDE34;
    return;
L_08AEDE34:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDE54;
      }
      goto L_08AEDE48;
    }
L_08AEDE48:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AEDE54;
L_08AEDE54:
    ctx.gpr[31] = (0x08AEDE5Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AECDD0;
L_08AEDE5C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDE78;
      }
      goto L_08AEDE6C;
    }
L_08AEDE6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10352)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10352), ctx.gpr[4]);
    goto L_08AEDE78;
L_08AEDE78:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEDEB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEDEC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEDEC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEDEE4u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 251u, 0x08B21418u>(ctx, &aot_mem) && ctx.pc == 0x08AEDEE4u) goto L_08AEDEE4;
    return;
L_08AEDEE4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AEDF74;
      }
      goto L_08AEDEF0;
    }
L_08AEDEF0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11))))));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 63u);
    ctx.gpr[5] = (ctx.gpr[5] & 63u);
    ctx.gpr[6] = (ctx.gpr[7] << (ctx.gpr[6] & 31u));
    ctx.gpr[5] = (ctx.gpr[7] << (ctx.gpr[5] & 31u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08AEDF74;
      }
      goto L_08AEDF20;
    }
L_08AEDF20:
    ctx.gpr[5] = (14336u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AEDF28;
L_08AEDF28:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AEDF28;
      }
      goto L_08AEDF74;
    }
L_08AEDF74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEDF88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEDFFCu);
    ctx.gpr[5] = (0u | 2u);
    goto L_08AEDEC8;
L_08AEDFFC:
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29552));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[18] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[6] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AEE028u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AEE028u) goto L_08AEE028;
    return;
L_08AEE028:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25556)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE080;
      }
      goto L_08AEE034;
    }
L_08AEE034:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AEE080;
      }
      goto L_08AEE044;
    }
L_08AEE044:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    goto L_08AEE048;
L_08AEE048:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
        goto L_08AEE048;
    }
    goto L_08AEE080;
L_08AEE080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (4736u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(286));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEE0EC;
      }
      goto L_08AEE0A0;
    }
L_08AEE0A0:
    ctx.gpr[5] = (ctx.gpr[18] >> 8u);
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[18] & ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    goto L_08AEE0EC;
L_08AEE0EC:
    ctx.gpr[5] = (1026u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
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
L_08AEE120:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEE158u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AEDEC8;
L_08AEE158:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(29552));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AEE184u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AEE184u) goto L_08AEE184;
    return;
L_08AEE184:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25556)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE1E0;
      }
      goto L_08AEE190;
    }
L_08AEE190:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AEE1E0;
      }
      goto L_08AEE1A4;
    }
L_08AEE1A4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    goto L_08AEE1A8;
L_08AEE1A8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
        goto L_08AEE1A8;
    }
    goto L_08AEE1E0;
L_08AEE1E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (4736u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(286));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEE24C;
      }
      goto L_08AEE200;
    }
L_08AEE200:
    ctx.gpr[5] = (ctx.gpr[20] >> 8u);
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[20] & ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    goto L_08AEE24C;
L_08AEE24C:
    ctx.gpr[5] = (ctx.gpr[17] << 16u);
    ctx.gpr[6] = (1024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
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
L_08AEE294:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEE2E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AEDEC8;
L_08AEE2E0:
    ctx.gpr[21] = (2236u << 16u);
    ctx.gpr[22] = (ctx.gpr[21] + static_cast<std::uint32_t>(29552));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[17] << 4u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AEE30Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AEE30Cu) goto L_08AEE30C;
    return;
L_08AEE30C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25556)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE368;
      }
      goto L_08AEE318;
    }
L_08AEE318:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] << 4u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AEE368;
      }
      goto L_08AEE32C;
    }
L_08AEE32C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    goto L_08AEE330;
L_08AEE330:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
        goto L_08AEE330;
    }
    goto L_08AEE368;
L_08AEE368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[23] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AEE388u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AEE388u) goto L_08AEE388;
    return;
L_08AEE388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (4736u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4382));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(29552), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AEE3F4;
      }
      goto L_08AEE3A8;
    }
L_08AEE3A8:
    ctx.gpr[4] = (ctx.gpr[23] >> 8u);
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[23] & ctx.gpr[5]);
    ctx.gpr[6] = (512u << 16u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(29552), ctx.gpr[18]);
    goto L_08AEE3F4;
L_08AEE3F4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 16u);
      if (branch_taken) {
          goto L_08AEE44C;
      }
      goto L_08AEE3FC;
    }
L_08AEE3FC:
    ctx.gpr[4] = (ctx.gpr[20] >> 8u);
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[20] & ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(29552), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] << 16u);
    goto L_08AEE44C;
L_08AEE44C:
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
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
L_08AEE49C:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AEE520;
      }
      goto L_08AEE4AC;
    }
L_08AEE4AC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AEE560;
      }
      goto L_08AEE520;
    }
L_08AEE520:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AEE560;
L_08AEE560:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEE568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AEE5A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AEE5A4u) goto L_08AEE5A4;
    return;
L_08AEE5A4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AEE5F4;
      }
      goto L_08AEE5B4;
    }
L_08AEE5B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AEE5B4;
      }
      goto L_08AEE5F4;
    }
L_08AEE5F4:
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
L_08AEE610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AEE680;
      }
      goto L_08AEE630;
    }
L_08AEE630:
    ctx.gpr[6] = (ctx.gpr[17] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(29552));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[18] = (2280u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12016));
      if (branch_taken) {
          goto L_08AEE688;
      }
      goto L_08AEE668;
    }
L_08AEE668:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AEE678u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AEE678u) goto L_08AEE678;
    return;
L_08AEE678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE6A0;
      }
      goto L_08AEE680;
    }
L_08AEE680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEE6F4;
      }
      goto L_08AEE688;
    }
L_08AEE688:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(7744));
    ctx.gpr[31] = (0x08AEE6A0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08AEE568;
L_08AEE6A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AEE6ACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AEE49C;
L_08AEE6AC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE6E4;
      }
      goto L_08AEE6B4;
    }
L_08AEE6B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7744)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7748)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7752)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AEE6E4;
L_08AEE6E4:
    ctx.gpr[4] = (0u | 415u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    goto L_08AEE6F4;
L_08AEE6F4:
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
L_08AEE70C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(1), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(5), ctx.gpr[9]));
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(9), ctx.gpr[10]));
    ctx.gpr[11] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(17), ctx.gpr[11]));
    ctx.gpr[12] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(21), ctx.gpr[12]));
    ctx.gpr[13] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(25), ctx.gpr[13]));
    ctx.gpr[14] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(33), ctx.gpr[14]));
    ctx.gpr[15] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(37), ctx.gpr[15]));
    ctx.gpr[24] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(41), ctx.gpr[24]));
    ctx.gpr[25] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(49), ctx.gpr[25]));
    ctx.gpr[2] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(53), ctx.gpr[2]));
    ctx.gpr[3] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(57), ctx.gpr[3]));
    ctx.gpr[8] = ((ctx.gpr[8] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[9] = ((ctx.gpr[9] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[11] = ((ctx.gpr[11] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[15] = ((ctx.gpr[15] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[24] = ((ctx.gpr[24] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[25] = ((ctx.gpr[25] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[3] = ((ctx.gpr[3] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEE7B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEE848;
      }
      goto L_08AEE7D0;
    }
L_08AEE7D0:
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (14848u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29552));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[6] = (2280u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[31] = (0x08AEE808u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12016));
    goto L_08AEE70C;
L_08AEE808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (4608u << 16u);
    ctx.gpr[6] = (ctx.gpr[18] << 3u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AEE850;
      }
      goto L_08AEE840;
    }
L_08AEE840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE89C;
      }
      goto L_08AEE848;
    }
L_08AEE848:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEE8B8;
      }
      goto L_08AEE850;
    }
L_08AEE850:
    ctx.gpr[6] = (ctx.gpr[4] >> 8u);
    ctx.gpr[7] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[7] = (4096u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    goto L_08AEE89C;
L_08AEE89C:
    ctx.gpr[4] = (1026u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    goto L_08AEE8B8;
L_08AEE8B8:
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
L_08AEE8D0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(88), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(92), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEE8E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AEE9A8;
      }
      goto L_08AEE914;
    }
L_08AEE914:
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (14848u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(29552));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[6] = (2280u << 16u);
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[31] = (0x08AEE94Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12016));
    goto L_08AEE70C;
L_08AEE94C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[17] = (ctx.gpr[17] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEE970u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AEE970u) goto L_08AEE970;
    return;
L_08AEE970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    ctx.gpr[6] = (4608u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AEE9B0;
      }
      goto L_08AEE9A0;
    }
L_08AEE9A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE9FC;
      }
      goto L_08AEE9A8;
    }
L_08AEE9A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEEA70;
      }
      goto L_08AEE9B0;
    }
L_08AEE9B0:
    ctx.gpr[6] = (ctx.gpr[17] >> 8u);
    ctx.gpr[7] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[7] = (4096u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[17] & ctx.gpr[6]);
    ctx.gpr[7] = (512u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    goto L_08AEE9FC;
L_08AEE9FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] >> 8u);
      if (branch_taken) {
          goto L_08AEEA4C;
      }
      goto L_08AEEA04;
    }
L_08AEEA04:
    ctx.gpr[7] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[7] = (4096u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    goto L_08AEEA4C;
L_08AEEA4C:
    ctx.gpr[4] = (ctx.gpr[18] << 16u);
    ctx.gpr[6] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    goto L_08AEEA70;
L_08AEEA70:
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
L_08AEEA94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2280u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(12016));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEEABCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AEE49C;
L_08AEEABC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7744)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7748)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7752)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AEEAF8;
      }
      goto L_08AEEAF0;
    }
L_08AEEAF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AEEB00;
      }
      goto L_08AEEAF8;
    }
L_08AEEAF8:
    ctx.gpr[4] = (0u | 415u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    goto L_08AEEB00;
L_08AEEB00:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEEB18:
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(391)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17656));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.hi);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08AEEBA0;
      }
      goto L_08AEEB78;
    }
L_08AEEB78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(391)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEBA0;
      }
      goto L_08AEEB88;
    }
L_08AEEB88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEEBA0;
      }
      goto L_08AEEB90;
    }
L_08AEEB90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEBA0;
      }
      goto L_08AEEB98;
    }
L_08AEEB98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AEEBA4;
      }
      goto L_08AEEBA0;
    }
L_08AEEBA0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AEEBA4;
L_08AEEBA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEEBAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEEBD8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AEEB18;
L_08AEEBD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 16u);
      if (branch_taken) {
          goto L_08AEEBE8;
      }
      goto L_08AEEBE0;
    }
L_08AEEBE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEEC30;
      }
      goto L_08AEEBE8;
    }
L_08AEEBE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] << (ctx.gpr[16] & 31u));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] >> (ctx.gpr[6] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] & 1023u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[2] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08AEEC30;
L_08AEEC30:
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
L_08AEEC48:
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(392)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(391)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(391)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.gpr[9] = (ctx.gpr[9] >> 31u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(391)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEECF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[16] < static_cast<std::uint32_t>(170) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEED44;
      }
      goto L_08AEED18;
    }
L_08AEED18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEED3C;
      }
      goto L_08AEED2C;
    }
L_08AEED2C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEED4C;
      }
      goto L_08AEED34;
    }
L_08AEED34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEE00;
      }
      goto L_08AEED3C;
    }
L_08AEED3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEEED4;
      }
      goto L_08AEED44;
    }
L_08AEED44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEEED4;
      }
      goto L_08AEED4C;
    }
L_08AEED4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 234u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 227u);
      if (branch_taken) {
          goto L_08AEEDDC;
      }
      goto L_08AEED5C;
    }
L_08AEED5C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 226u);
      if (branch_taken) {
          goto L_08AEEDBC;
      }
      goto L_08AEED64;
    }
L_08AEED64:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 207u);
      if (branch_taken) {
          goto L_08AEED9C;
      }
      goto L_08AEED6C;
    }
L_08AEED6C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 193u);
      if (branch_taken) {
          goto L_08AEED9C;
      }
      goto L_08AEED74;
    }
L_08AEED74:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 184u);
      if (branch_taken) {
          goto L_08AEEDBC;
      }
      goto L_08AEED7C;
    }
L_08AEED7C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 183u);
      if (branch_taken) {
          goto L_08AEEDDC;
      }
      goto L_08AEED84;
    }
L_08AEED84:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 174u);
      if (branch_taken) {
          goto L_08AEEDBC;
      }
      goto L_08AEED8C;
    }
L_08AEED8C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AEEDBC;
      }
      goto L_08AEED94;
    }
L_08AEED94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEE00;
      }
      goto L_08AEED9C;
    }
L_08AEED9C:
    ctx.gpr[31] = (0x08AEEDA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem) && ctx.pc == 0x08AEEDA4u) goto L_08AEEDA4;
    return;
L_08AEEDA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AEEDB4;
      }
      goto L_08AEEDAC;
    }
L_08AEEDAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEE00;
      }
      goto L_08AEEDB4;
    }
L_08AEEDB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AEEED4;
      }
      goto L_08AEEDBC;
    }
L_08AEEDBC:
    ctx.gpr[31] = (0x08AEEDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem) && ctx.pc == 0x08AEEDC4u) goto L_08AEEDC4;
    return;
L_08AEEDC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AEEDD4;
      }
      goto L_08AEEDCC;
    }
L_08AEEDCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEE00;
      }
      goto L_08AEEDD4;
    }
L_08AEEDD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AEEED4;
      }
      goto L_08AEEDDC;
    }
L_08AEEDDC:
    ctx.gpr[31] = (0x08AEEDE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem) && ctx.pc == 0x08AEEDE4u) goto L_08AEEDE4;
    return;
L_08AEEDE4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEDF8;
      }
      goto L_08AEEDF0;
    }
L_08AEEDF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEE00;
      }
      goto L_08AEEDF8;
    }
L_08AEEDF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AEEED4;
      }
      goto L_08AEEE00;
    }
L_08AEEE00:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 171 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 277 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEEE3C;
      }
      goto L_08AEEE0C;
    }
L_08AEEE0C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-171));
      if (branch_taken) {
          goto L_08AEEE3C;
      }
      goto L_08AEEE14;
    }
L_08AEEE14:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(17720)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEEE2C:
    ctx.gpr[31] = (0x08AEEE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem) && ctx.pc == 0x08AEEE34u) goto L_08AEEE34;
    return;
L_08AEEE34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AEEE44;
      }
      goto L_08AEEE3C;
    }
L_08AEEE3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEEED4;
      }
      goto L_08AEEE44;
    }
L_08AEEE44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AEEED4;
      }
      goto L_08AEEE4C;
    }
L_08AEEE4C:
    ctx.gpr[31] = (0x08AEEE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem) && ctx.pc == 0x08AEEE54u) goto L_08AEEE54;
    return;
L_08AEEE54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AEEE64;
      }
      goto L_08AEEE5C;
    }
L_08AEEE5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEE3C;
      }
      goto L_08AEEE64;
    }
L_08AEEE64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AEEED4;
      }
      goto L_08AEEE6C;
    }
L_08AEEE6C:
    ctx.gpr[31] = (0x08AEEE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem) && ctx.pc == 0x08AEEE74u) goto L_08AEEE74;
    return;
L_08AEEE74:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEE88;
      }
      goto L_08AEEE80;
    }
L_08AEEE80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEE3C;
      }
      goto L_08AEEE88;
    }
L_08AEEE88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AEEED4;
      }
      goto L_08AEEE90;
    }
L_08AEEE90:
    ctx.gpr[31] = (0x08AEEE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem) && ctx.pc == 0x08AEEE98u) goto L_08AEEE98;
    return;
L_08AEEE98:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEEAC;
      }
      goto L_08AEEEA4;
    }
L_08AEEEA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEE3C;
      }
      goto L_08AEEEAC;
    }
L_08AEEEAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AEEED4;
      }
      goto L_08AEEEB4;
    }
L_08AEEEB4:
    ctx.gpr[31] = (0x08AEEEBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem) && ctx.pc == 0x08AEEEBCu) goto L_08AEEEBC;
    return;
L_08AEEEBC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEED0;
      }
      goto L_08AEEEC8;
    }
L_08AEEEC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEE3C;
      }
      goto L_08AEEED0;
    }
L_08AEEED0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AEEED4;
L_08AEEED4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEEEE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEEF10u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEEF10u) goto L_08AEEF10;
    return;
L_08AEEF10:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEEF24;
    }
    goto L_08AEEF1C;
L_08AEEF1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEEF28;
      }
      goto L_08AEEF24;
    }
L_08AEEF24:
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08AEEF28;
L_08AEEF28:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AEEF3Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEEF3Cu) goto L_08AEEF3C;
    return;
L_08AEEF3C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEEF50;
    }
    goto L_08AEEF48;
L_08AEEF48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEEF54;
      }
      goto L_08AEEF50;
    }
L_08AEEF50:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_08AEEF54;
L_08AEEF54:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEEF60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x08AEEF60u) goto L_08AEEF60;
    return;
L_08AEEF60:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEEF8C;
      }
      goto L_08AEEF84;
    }
L_08AEEF84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AEEFD4;
      }
      goto L_08AEEF8C;
    }
L_08AEEF8C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEEFB8;
      }
      goto L_08AEEFAC;
    }
L_08AEEFAC:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AEEFD4;
      }
      goto L_08AEEFB8;
    }
L_08AEEFB8:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEFD4;
      }
      goto L_08AEEFD0;
    }
L_08AEEFD0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AEEFD4;
L_08AEEFD4:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEEFF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEF044;
      }
      goto L_08AEF01C;
    }
L_08AEF01C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEF028u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEF028u) goto L_08AEF028;
    return;
L_08AEF028:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF040;
      }
      goto L_08AEF034;
    }
L_08AEF034:
    ctx.gpr[31] = (0x08AEF03Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF03Cu) goto L_08AEF03C;
    return;
L_08AEF03C:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEF040;
L_08AEF040:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEF044;
L_08AEF044:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AEF05Cu);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF05Cu) goto L_08AEF05C;
    return;
L_08AEF05C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEF070;
    }
    goto L_08AEF068;
L_08AEF068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEF074;
      }
      goto L_08AEF070;
    }
L_08AEF070:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEF074;
L_08AEF074:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEF080u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEF080u) goto L_08AEF080;
    return;
L_08AEF080:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AEF0A0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF0A0u) goto L_08AEF0A0;
    return;
L_08AEF0A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x08AEF0B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 246u, 0x08AB9448u>(ctx, &aot_mem) && ctx.pc == 0x08AEF0B8u) goto L_08AEF0B8;
    return;
L_08AEF0B8:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEF0DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEF130;
      }
      goto L_08AEF108;
    }
L_08AEF108:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEF114u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEF114u) goto L_08AEF114;
    return;
L_08AEF114:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF12C;
      }
      goto L_08AEF120;
    }
L_08AEF120:
    ctx.gpr[31] = (0x08AEF128u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF128u) goto L_08AEF128;
    return;
L_08AEF128:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEF12C;
L_08AEF12C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEF130;
L_08AEF130:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AEF148u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF148u) goto L_08AEF148;
    return;
L_08AEF148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEF15C;
    }
    goto L_08AEF154;
L_08AEF154:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEF160;
      }
      goto L_08AEF15C;
    }
L_08AEF15C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEF160;
L_08AEF160:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEF16Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEF16Cu) goto L_08AEF16C;
    return;
L_08AEF16C:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AEF18Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF18Cu) goto L_08AEF18C;
    return;
L_08AEF18C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AEF1A0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 205u, 0x08AB8F3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF1A0u) goto L_08AEF1A0;
    return;
L_08AEF1A0:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEF1C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEF218;
      }
      goto L_08AEF1F0;
    }
L_08AEF1F0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEF1FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEF1FCu) goto L_08AEF1FC;
    return;
L_08AEF1FC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF214;
      }
      goto L_08AEF208;
    }
L_08AEF208:
    ctx.gpr[31] = (0x08AEF210u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF210u) goto L_08AEF210;
    return;
L_08AEF210:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEF214;
L_08AEF214:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEF218;
L_08AEF218:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AEF230u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF230u) goto L_08AEF230;
    return;
L_08AEF230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEF244;
    }
    goto L_08AEF23C;
L_08AEF23C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEF248;
      }
      goto L_08AEF244;
    }
L_08AEF244:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEF248;
L_08AEF248:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEF254u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEF254u) goto L_08AEF254;
    return;
L_08AEF254:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AEF274u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF274u) goto L_08AEF274;
    return;
L_08AEF274:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AEF290u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 216u, 0x08AB9068u>(ctx, &aot_mem) && ctx.pc == 0x08AEF290u) goto L_08AEF290;
    return;
L_08AEF290:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEF2B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEF308;
      }
      goto L_08AEF2E0;
    }
L_08AEF2E0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEF2ECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEF2ECu) goto L_08AEF2EC;
    return;
L_08AEF2EC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF304;
      }
      goto L_08AEF2F8;
    }
L_08AEF2F8:
    ctx.gpr[31] = (0x08AEF300u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF300u) goto L_08AEF300;
    return;
L_08AEF300:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEF304;
L_08AEF304:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEF308;
L_08AEF308:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AEF320u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF320u) goto L_08AEF320;
    return;
L_08AEF320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEF334;
    }
    goto L_08AEF32C;
L_08AEF32C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEF338;
      }
      goto L_08AEF334;
    }
L_08AEF334:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEF338;
L_08AEF338:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEF344u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEF344u) goto L_08AEF344;
    return;
L_08AEF344:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AEF364u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF364u) goto L_08AEF364;
    return;
L_08AEF364:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AEF378u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 222u, 0x08AB9160u>(ctx, &aot_mem) && ctx.pc == 0x08AEF378u) goto L_08AEF378;
    return;
L_08AEF378:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEF39C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEF3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 231u, 0x08AB92E8u>(ctx, &aot_mem) && ctx.pc == 0x08AEF3ACu) goto L_08AEF3AC;
    return;
L_08AEF3AC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEF3BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEF410;
      }
      goto L_08AEF3E8;
    }
L_08AEF3E8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEF3F4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEF3F4u) goto L_08AEF3F4;
    return;
L_08AEF3F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF40C;
      }
      goto L_08AEF400;
    }
L_08AEF400:
    ctx.gpr[31] = (0x08AEF408u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF408u) goto L_08AEF408;
    return;
L_08AEF408:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEF40C;
L_08AEF40C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEF410;
L_08AEF410:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEF428u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF428u) goto L_08AEF428;
    return;
L_08AEF428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEF43C;
    }
    goto L_08AEF434;
L_08AEF434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEF440;
      }
      goto L_08AEF43C;
    }
L_08AEF43C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEF440;
L_08AEF440:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEF44Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEF44Cu) goto L_08AEF44C;
    return;
L_08AEF44C:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08AEF46Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF46Cu) goto L_08AEF46C;
    return;
L_08AEF46C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AEF4A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 377u, 0x08ABA104u>(ctx, &aot_mem) && ctx.pc == 0x08AEF4A0u) goto L_08AEF4A0;
    return;
L_08AEF4A0:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEF4C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEF518;
      }
      goto L_08AEF4F0;
    }
L_08AEF4F0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEF4FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEF4FCu) goto L_08AEF4FC;
    return;
L_08AEF4FC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF514;
      }
      goto L_08AEF508;
    }
L_08AEF508:
    ctx.gpr[31] = (0x08AEF510u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF510u) goto L_08AEF510;
    return;
L_08AEF510:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEF514;
L_08AEF514:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEF518;
L_08AEF518:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEF530u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF530u) goto L_08AEF530;
    return;
L_08AEF530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEF544;
    }
    goto L_08AEF53C;
L_08AEF53C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEF548;
      }
      goto L_08AEF544;
    }
L_08AEF544:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEF548;
L_08AEF548:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEF554u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEF554u) goto L_08AEF554;
    return;
L_08AEF554:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08AEF574u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF574u) goto L_08AEF574;
    return;
L_08AEF574:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AEF5A4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 351u, 0x08AB9C74u>(ctx, &aot_mem) && ctx.pc == 0x08AEF5A4u) goto L_08AEF5A4;
    return;
L_08AEF5A4:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEF5C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEF61C;
      }
      goto L_08AEF5F4;
    }
L_08AEF5F4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEF600u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEF600u) goto L_08AEF600;
    return;
L_08AEF600:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF618;
      }
      goto L_08AEF60C;
    }
L_08AEF60C:
    ctx.gpr[31] = (0x08AEF614u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF614u) goto L_08AEF614;
    return;
L_08AEF614:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEF618;
L_08AEF618:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEF61C;
L_08AEF61C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEF634u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF634u) goto L_08AEF634;
    return;
L_08AEF634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEF648;
    }
    goto L_08AEF640;
L_08AEF640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEF64C;
      }
      goto L_08AEF648;
    }
L_08AEF648:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEF64C;
L_08AEF64C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEF658u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEF658u) goto L_08AEF658;
    return;
L_08AEF658:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08AEF678u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF678u) goto L_08AEF678;
    return;
L_08AEF678:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AEF6B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 362u, 0x08AB9DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEF6B0u) goto L_08AEF6B0;
    return;
L_08AEF6B0:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEF6D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEF728;
      }
      goto L_08AEF700;
    }
L_08AEF700:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEF70Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEF70Cu) goto L_08AEF70C;
    return;
L_08AEF70C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF724;
      }
      goto L_08AEF718;
    }
L_08AEF718:
    ctx.gpr[31] = (0x08AEF720u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF720u) goto L_08AEF720;
    return;
L_08AEF720:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEF724;
L_08AEF724:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEF728;
L_08AEF728:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEF740u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF740u) goto L_08AEF740;
    return;
L_08AEF740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEF754;
    }
    goto L_08AEF74C;
L_08AEF74C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEF758;
      }
      goto L_08AEF754;
    }
L_08AEF754:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEF758;
L_08AEF758:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEF764u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEF764u) goto L_08AEF764;
    return;
L_08AEF764:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08AEF784u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF784u) goto L_08AEF784;
    return;
L_08AEF784:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AEF7B4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 368u, 0x08AB9F28u>(ctx, &aot_mem) && ctx.pc == 0x08AEF7B4u) goto L_08AEF7B4;
    return;
L_08AEF7B4:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEF7D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEF82C;
      }
      goto L_08AEF804;
    }
L_08AEF804:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEF810u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEF810u) goto L_08AEF810;
    return;
L_08AEF810:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF828;
      }
      goto L_08AEF81C;
    }
L_08AEF81C:
    ctx.gpr[31] = (0x08AEF824u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF824u) goto L_08AEF824;
    return;
L_08AEF824:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEF828;
L_08AEF828:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEF82C;
L_08AEF82C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AEF844u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF844u) goto L_08AEF844;
    return;
L_08AEF844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEF858;
    }
    goto L_08AEF850;
L_08AEF850:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEF85C;
      }
      goto L_08AEF858;
    }
L_08AEF858:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEF85C;
L_08AEF85C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEF868u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEF868u) goto L_08AEF868;
    return;
L_08AEF868:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AEF888u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF888u) goto L_08AEF888;
    return;
L_08AEF888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x08AEF8A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 256u, 0x08AB953Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF8A0u) goto L_08AEF8A0;
    return;
L_08AEF8A0:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEF8C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEF918;
      }
      goto L_08AEF8F0;
    }
L_08AEF8F0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEF8FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEF8FCu) goto L_08AEF8FC;
    return;
L_08AEF8FC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF914;
      }
      goto L_08AEF908;
    }
L_08AEF908:
    ctx.gpr[31] = (0x08AEF910u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF910u) goto L_08AEF910;
    return;
L_08AEF910:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEF914;
L_08AEF914:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEF918;
L_08AEF918:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEF930u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF930u) goto L_08AEF930;
    return;
L_08AEF930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEF944;
    }
    goto L_08AEF93C;
L_08AEF93C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEF948;
      }
      goto L_08AEF944;
    }
L_08AEF944:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEF948;
L_08AEF948:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEF954u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEF954u) goto L_08AEF954;
    return;
L_08AEF954:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08AEF974u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF974u) goto L_08AEF974;
    return;
L_08AEF974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AEF9A8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 385u, 0x08ABA21Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF9A8u) goto L_08AEF9A8;
    return;
L_08AEF9A8:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEF9CC:
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
    ctx.gpr[31] = (0x08AEF9FCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF9FCu) goto L_08AEF9FC;
    return;
L_08AEF9FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEFA20;
      }
      goto L_08AEFA18;
    }
L_08AEFA18:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(523), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AEFA20;
L_08AEFA20:
    ctx.gpr[2] = (0u | 1u);
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
L_08AEFA3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEFA90;
      }
      goto L_08AEFA68;
    }
L_08AEFA68:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEFA74u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEFA74u) goto L_08AEFA74;
    return;
L_08AEFA74:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEFA8C;
      }
      goto L_08AEFA80;
    }
L_08AEFA80:
    ctx.gpr[31] = (0x08AEFA88u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFA88u) goto L_08AEFA88;
    return;
L_08AEFA88:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEFA8C;
L_08AEFA8C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEFA90;
L_08AEFA90:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEFAA8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFAA8u) goto L_08AEFAA8;
    return;
L_08AEFAA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEFABC;
    }
    goto L_08AEFAB4;
L_08AEFAB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEFAC0;
      }
      goto L_08AEFABC;
    }
L_08AEFABC:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEFAC0;
L_08AEFAC0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEFACCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEFACCu) goto L_08AEFACC;
    return;
L_08AEFACC:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AEFAECu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFAECu) goto L_08AEFAEC;
    return;
L_08AEFAEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AEFB1Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 351u, 0x08AB9C74u>(ctx, &aot_mem) && ctx.pc == 0x08AEFB1Cu) goto L_08AEFB1C;
    return;
L_08AEFB1C:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEFB40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEFB94;
      }
      goto L_08AEFB6C;
    }
L_08AEFB6C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEFB78u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEFB78u) goto L_08AEFB78;
    return;
L_08AEFB78:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEFB90;
      }
      goto L_08AEFB84;
    }
L_08AEFB84:
    ctx.gpr[31] = (0x08AEFB8Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFB8Cu) goto L_08AEFB8C;
    return;
L_08AEFB8C:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEFB90;
L_08AEFB90:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEFB94;
L_08AEFB94:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEFBACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFBACu) goto L_08AEFBAC;
    return;
L_08AEFBAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEFBC0;
    }
    goto L_08AEFBB8;
L_08AEFBB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEFBC4;
      }
      goto L_08AEFBC0;
    }
L_08AEFBC0:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEFBC4;
L_08AEFBC4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEFBD0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEFBD0u) goto L_08AEFBD0;
    return;
L_08AEFBD0:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AEFBF0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFBF0u) goto L_08AEFBF0;
    return;
L_08AEFBF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AEFC28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 362u, 0x08AB9DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEFC28u) goto L_08AEFC28;
    return;
L_08AEFC28:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEFC4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEFCA0;
      }
      goto L_08AEFC78;
    }
L_08AEFC78:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEFC84u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEFC84u) goto L_08AEFC84;
    return;
L_08AEFC84:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEFC9C;
      }
      goto L_08AEFC90;
    }
L_08AEFC90:
    ctx.gpr[31] = (0x08AEFC98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFC98u) goto L_08AEFC98;
    return;
L_08AEFC98:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEFC9C;
L_08AEFC9C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEFCA0;
L_08AEFCA0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEFCB8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFCB8u) goto L_08AEFCB8;
    return;
L_08AEFCB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEFCCC;
    }
    goto L_08AEFCC4;
L_08AEFCC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEFCD0;
      }
      goto L_08AEFCCC;
    }
L_08AEFCCC:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEFCD0;
L_08AEFCD0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEFCDCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEFCDCu) goto L_08AEFCDC;
    return;
L_08AEFCDC:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AEFCFCu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFCFCu) goto L_08AEFCFC;
    return;
L_08AEFCFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AEFD2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 368u, 0x08AB9F28u>(ctx, &aot_mem) && ctx.pc == 0x08AEFD2Cu) goto L_08AEFD2C;
    return;
L_08AEFD2C:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEFD50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEFDA4;
      }
      goto L_08AEFD7C;
    }
L_08AEFD7C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEFD88u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEFD88u) goto L_08AEFD88;
    return;
L_08AEFD88:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEFDA0;
      }
      goto L_08AEFD94;
    }
L_08AEFD94:
    ctx.gpr[31] = (0x08AEFD9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFD9Cu) goto L_08AEFD9C;
    return;
L_08AEFD9C:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEFDA0;
L_08AEFDA0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEFDA4;
L_08AEFDA4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEFDBCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFDBCu) goto L_08AEFDBC;
    return;
L_08AEFDBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEFDD0;
    }
    goto L_08AEFDC8;
L_08AEFDC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEFDD4;
      }
      goto L_08AEFDD0;
    }
L_08AEFDD0:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEFDD4;
L_08AEFDD4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEFDE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEFDE0u) goto L_08AEFDE0;
    return;
L_08AEFDE0:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08AEFE00u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFE00u) goto L_08AEFE00;
    return;
L_08AEFE00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AEFE30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 351u, 0x08AB9C74u>(ctx, &aot_mem) && ctx.pc == 0x08AEFE30u) goto L_08AEFE30;
    return;
L_08AEFE30:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEFE54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEFEA8;
      }
      goto L_08AEFE80;
    }
L_08AEFE80:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEFE8Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEFE8Cu) goto L_08AEFE8C;
    return;
L_08AEFE8C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEFEA4;
      }
      goto L_08AEFE98;
    }
L_08AEFE98:
    ctx.gpr[31] = (0x08AEFEA0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFEA0u) goto L_08AEFEA0;
    return;
L_08AEFEA0:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEFEA4;
L_08AEFEA4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEFEA8;
L_08AEFEA8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEFEC0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFEC0u) goto L_08AEFEC0;
    return;
L_08AEFEC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEFED4;
    }
    goto L_08AEFECC;
L_08AEFECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEFED8;
      }
      goto L_08AEFED4;
    }
L_08AEFED4:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEFED8;
L_08AEFED8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEFEE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEFEE4u) goto L_08AEFEE4;
    return;
L_08AEFEE4:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08AEFF04u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFF04u) goto L_08AEFF04;
    return;
L_08AEFF04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AEFF3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 362u, 0x08AB9DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEFF3Cu) goto L_08AEFF3C;
    return;
L_08AEFF3C:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEFF60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEFFB4;
      }
      goto L_08AEFF8C;
    }
L_08AEFF8C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AEFF98u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AEFF98u) goto L_08AEFF98;
    return;
L_08AEFF98:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEFFB0;
      }
      goto L_08AEFFA4;
    }
L_08AEFFA4:
    ctx.gpr[31] = (0x08AEFFACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFFACu) goto L_08AEFFAC;
    return;
L_08AEFFAC:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AEFFB0;
L_08AEFFB0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AEFFB4;
L_08AEFFB4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEFFCCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFFCCu) goto L_08AEFFCC;
    return;
L_08AEFFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AEFFE0;
    }
    goto L_08AEFFD8;
L_08AEFFD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEFFE4;
      }
      goto L_08AEFFE0;
    }
L_08AEFFE0:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AEFFE4;
L_08AEFFE4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEFFF0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AEFFF0u) goto L_08AEFFF0;
    return;
L_08AEFFF0:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AF0000u; return;
}

void recomp_unit_0186(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0186_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_186(Runtime &runtime) {
    runtime.register_generated_unit(186u, 0x08AEC000u, 16384u, &recomp_unit_0186, &recomp_unit_0186_entry);
    runtime.register_function(0x08AEC000u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC010u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC05Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC068u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC070u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC07Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC090u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC098u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC0A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC0A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC0B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC0C0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC0D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC0D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC0F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC0F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC100u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC110u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC11Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC12Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC130u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC144u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC14Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC154u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC164u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC170u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC180u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC188u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC190u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC198u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC1A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC1B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC1BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC1CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC1D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC1DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC1E4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC1ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC1FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC208u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC218u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC220u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC228u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC238u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC244u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC258u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC260u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC264u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC280u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC294u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC2A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC2A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC2ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC2F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC314u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC36Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC388u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC394u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC39Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC3A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC3BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC3C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC3D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC3DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC3E4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC3F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC3F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC400u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC408u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC414u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC41Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC428u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC440u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC480u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC4D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC4E4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC4F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC508u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC52Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC534u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC53Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC544u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC550u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC558u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC560u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC568u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC570u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC578u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC580u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC588u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC590u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC598u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5D8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC600u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC608u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC610u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC618u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC620u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC62Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC634u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC63Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC644u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC64Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC654u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC66Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC670u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC680u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC684u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC694u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC69Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC700u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC710u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC714u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC718u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC73Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC798u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC7A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC7E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC838u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC844u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC884u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC8ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC8B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC8C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC8D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC8ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC8F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC904u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC918u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC930u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC948u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC95Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC960u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC96Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC978u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC980u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC984u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC98Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC99Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC9A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC9B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC9C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC9C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC9D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC9E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC9E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC9ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC9F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA04u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA08u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA10u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA18u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA38u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA40u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA50u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA5Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA64u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA6Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA9Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAA0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAB8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAC8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAD0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAE0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAF4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAFCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB04u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB14u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB20u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB24u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB2Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB4Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB54u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB64u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB70u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB78u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB80u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB88u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECBA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECBACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECBB4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECBC4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECBD4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECBDCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECBECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECBF8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC00u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC08u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC10u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC20u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC30u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC34u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC4Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC5Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC64u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC80u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC88u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCB4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCB8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCC0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCD0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCE0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCE8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCF8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD04u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD0Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD14u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD1Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD2Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD40u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD48u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD58u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD68u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD70u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD80u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD8Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD9Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECDA4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECDB4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECDC4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECDC8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECDD0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECDDCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECE7Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECE90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECEA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECEE4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF0Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF18u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF7Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECFA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECFE4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED00Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED018u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED028u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED02Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED054u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED07Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED0B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED0C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED0D8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED0E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED10Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED164u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED16Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED174u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED198u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED1A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED1A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED1CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED1D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED1E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED1ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED204u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED20Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED214u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED21Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED224u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED24Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED254u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED25Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED264u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED26Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED278u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED27Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED280u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED2A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED2F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED308u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED328u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED348u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED368u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED374u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED388u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED394u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED39Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED3A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED3ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED3B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED3C0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED3CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED3DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED414u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED41Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED420u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED434u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED448u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED49Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED4FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED508u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED518u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED530u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED538u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED544u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED54Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED550u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED55Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED578u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED580u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED588u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED58Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED5A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED5B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED5BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED5D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED5DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED5E4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED5F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED644u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED650u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED658u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED660u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED670u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED67Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED684u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED690u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED69Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6C0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED700u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED708u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED710u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED718u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED720u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED734u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED740u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED748u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED758u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED760u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED774u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED780u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED7B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED7C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED7C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED7E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED804u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED810u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED818u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED81Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED82Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED840u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED850u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED868u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED874u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED88Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED8A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED8F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED908u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED910u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED924u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED928u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED934u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED970u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED980u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED994u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED99Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9E4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA08u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA14u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA18u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA24u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA30u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA48u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA4Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA58u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA64u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA70u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA7Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA80u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDAA4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDAB0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDABCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDAC0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDAD8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDAE4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDAF0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB00u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB04u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB0Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB14u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB30u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB58u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDBA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDBC4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDBCCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDBE0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC04u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC0Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC14u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC4Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC54u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC60u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDCD0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDCE0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDCECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD38u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD44u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD58u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD68u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDDB4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDDC4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDDD8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE1Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE34u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE48u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE54u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE5Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE6Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE78u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDEB8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDEC0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDEC8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDEE4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDEF0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDF20u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDF28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDF74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDF88u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDFFCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE028u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE034u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE044u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE048u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE080u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE0A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE0ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE120u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE158u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE184u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE190u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE1A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE1A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE1E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE200u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE24Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE294u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE2E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE30Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE318u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE32Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE330u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE368u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE388u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE3A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE3F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE3FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE44Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE49Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE4ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE520u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE560u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE568u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE5A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE5B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE5F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE610u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE630u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE668u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE678u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE680u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE688u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE6A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE6ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE6B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE6E4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE6F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE70Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE7B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE7D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE808u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE840u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE848u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE850u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE89Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE8B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE8D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE8E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE914u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE94Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE970u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE9A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE9A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE9B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE9FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEA04u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEA4Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEA70u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEA94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEABCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEAF0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEAF8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEB00u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEB18u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEB78u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEB88u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEB90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEB98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEBA0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEBA4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEBACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEBD8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEBE0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEBE8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEC30u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEC48u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEECF8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED18u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED2Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED34u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED44u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED4Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED5Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED64u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED6Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED7Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED8Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED9Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDA4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDB4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDBCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDC4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDCCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDD4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDDCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDE4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDF0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDF8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE00u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE0Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE14u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE2Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE34u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE44u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE4Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE54u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE5Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE64u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE6Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE80u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE88u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEEA4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEEACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEEB4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEEBCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEEC8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEED0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEED4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEEE4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF10u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF1Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF24u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF48u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF50u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF54u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF60u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF8Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEFACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEFB8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEFD0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEFD4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEFF0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF01Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF028u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF034u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF03Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF040u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF044u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF05Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF068u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF070u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF074u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF080u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF0A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF0B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF0DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF108u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF114u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF120u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF128u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF12Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF130u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF148u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF154u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF15Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF160u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF16Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF18Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF1A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF1C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF1F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF1FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF208u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF210u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF214u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF218u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF230u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF23Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF244u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF248u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF254u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF274u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF290u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF2B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF2E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF2ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF2F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF300u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF304u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF308u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF320u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF32Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF334u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF338u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF344u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF364u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF378u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF39Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF3ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF3BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF3E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF3F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF400u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF408u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF40Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF410u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF428u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF434u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF43Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF440u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF44Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF46Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF4A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF4C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF4F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF4FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF508u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF510u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF514u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF518u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF530u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF53Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF544u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF548u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF554u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF574u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF5A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF5C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF5F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF600u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF60Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF614u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF618u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF61Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF634u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF640u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF648u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF64Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF658u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF678u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF6B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF6D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF700u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF70Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF718u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF720u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF724u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF728u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF740u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF74Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF754u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF758u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF764u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF784u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF7B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF7D8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF804u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF810u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF81Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF824u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF828u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF82Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF844u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF850u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF858u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF85Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF868u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF888u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF8A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF8C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF8F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF8FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF908u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF910u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF914u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF918u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF930u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF93Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF944u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF948u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF954u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF974u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF9A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF9CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF9FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFA18u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFA20u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFA3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFA68u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFA74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFA80u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFA88u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFA8Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFA90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFAA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFAB4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFABCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFAC0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFACCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFAECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB1Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB40u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB6Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB78u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB8Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFBACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFBB8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFBC0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFBC4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFBD0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFBF0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC4Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC78u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC9Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFCA0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFCB8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFCC4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFCCCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFCD0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFCDCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFCFCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFD2Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFD50u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFD7Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFD88u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFD94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFD9Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFDA0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFDA4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFDBCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFDC8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFDD0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFDD4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFDE0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE00u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE30u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE54u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE80u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE8Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFEA0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFEA4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFEA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFEC0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFECCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFED4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFED8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFEE4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF04u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF60u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF8Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFA4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFB0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFB4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFCCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFD8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFE0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFE4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFF0u, &recomp_unit_0186, "recomp_unit_0186");
}
} // namespace psprecomp
