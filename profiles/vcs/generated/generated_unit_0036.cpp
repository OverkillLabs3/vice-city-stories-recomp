#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0036[4086] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0,
    6, 0, 0, 0, 0, 7, 0, 8, 9, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 0,
    0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 28, 0,
    0, 0, 0, 29, 0, 30, 31, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 59, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62, 63, 64, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 66, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    70, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 75, 76, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0,
    81, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0,
    106, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 110, 0, 111, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 115, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0,
    127, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137,
    0, 138, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 145, 0, 146, 0, 0, 0,
    147, 0, 148, 0, 0, 0, 0, 149, 0, 150, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 167, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0,
    172, 173, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    179, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 184, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191,
    0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197,
    0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 205, 0, 206,
    0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215,
    0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 222, 0, 223, 0, 224, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 0, 234,
    0, 235, 0, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 251, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 256, 257, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0,
    0, 0, 0, 0, 269, 0, 270, 0, 271, 272, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 278,
    0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0,
    0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0,
    297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 305, 0, 306, 0, 307, 0, 308, 0,
    309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 0, 0, 0, 0,
    319, 0, 320, 0, 0, 0, 0, 0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328, 0,
    329, 0, 330, 0, 331, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0,
    0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 343, 0, 344, 0, 345,
    0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0,
    0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 361, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0,
    0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0,
    0, 380, 0, 381, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 390, 0,
    0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 393, 394, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 399, 0, 400,
    0, 401, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 405, 0, 0, 0, 406, 407, 0, 408, 0, 409, 0, 410, 411, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    413, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0,
    420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425,
    426, 0, 427, 428, 0, 429, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 437, 0, 0, 0, 438, 0, 439, 0, 440, 0, 441, 442, 0, 0, 0, 443, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 449,
    0, 450, 0, 0, 0, 451, 452, 453, 0, 454, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 459, 0, 460, 0, 0, 0, 0, 461, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0,
    0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 472, 473, 0, 0, 0, 0, 0, 474, 0, 475, 0, 476,
    477, 0, 478, 0, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 486, 0, 0, 487, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0,
    0, 490, 491, 0, 492, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 496, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 499,
    0, 500, 0, 0, 0, 501, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0,
    508, 0, 0, 509, 510, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 517,
    0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 525, 0, 526,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 540, 0, 541, 542, 0,
    543, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0,
    548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 552,
    0, 553, 0, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 558, 0, 559, 0, 560, 0, 0, 0, 561, 0, 562, 0, 563, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 569, 0, 0, 0, 570, 0, 571, 0, 0, 0, 572, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 575, 0, 576, 0, 0, 0, 577,
    0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0,
    585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 590, 0, 0, 591, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 596, 0, 0, 0, 597, 0, 598, 0, 0, 599, 600, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 606,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 614, 0, 0, 0,
    615, 0, 616, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619,
    0, 620, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 629, 0, 0, 0, 630, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 636, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    641, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648,
    0, 0, 649, 0, 0, 650, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653,
    0, 654, 0, 655, 0, 0, 0, 656, 0, 657, 0, 0, 658, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 663, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 673, 0, 0, 0, 674, 0, 675, 0, 0, 676, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0,
    682, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686,
    0, 687, 0, 688, 0, 0, 0, 689, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 693, 0, 694, 0, 695, 0, 0, 0, 696, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 699, 0, 0, 0, 700, 0, 701, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0,
    705, 0, 0, 0, 0, 706, 707, 708, 0, 709, 0, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0,
    714, 0, 0, 0, 0, 715, 716, 717, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 721, 0, 722, 0,
    0, 723, 0, 0, 0, 724, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0, 0, 0, 728,
    0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 0, 738, 0, 739,
    740, 0, 741, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 744, 0, 745, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 751, 0, 0, 0, 752, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0,
    755, 0, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 758, 0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 763, 0, 764, 0, 0, 0, 765,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 0, 771,
};
void recomp_unit_0036_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08894000u;
        entry_id = (entry_delta < 16344u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0036[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08894000;
    case 2u: goto L_0889402C;
    case 3u: goto L_08894060;
    case 4u: goto L_08894068;
    case 5u: goto L_08894078;
    case 6u: goto L_08894080;
    case 7u: goto L_08894094;
    case 8u: goto L_0889409C;
    case 9u: goto L_088940A0;
    case 10u: goto L_088940AC;
    case 11u: goto L_088940C4;
    case 12u: goto L_088940D4;
    case 13u: goto L_088940DC;
    case 14u: goto L_088940E4;
    case 15u: goto L_088940EC;
    case 16u: goto L_088940F4;
    case 17u: goto L_08894108;
    case 18u: goto L_08894118;
    case 19u: goto L_08894150;
    case 20u: goto L_088941DC;
    case 21u: goto L_088941F0;
    case 22u: goto L_08894204;
    case 23u: goto L_08894244;
    case 24u: goto L_08894298;
    case 25u: goto L_088942D8;
    case 26u: goto L_088942E0;
    case 27u: goto L_088942F0;
    case 28u: goto L_088942F8;
    case 29u: goto L_0889430C;
    case 30u: goto L_08894314;
    case 31u: goto L_08894318;
    case 32u: goto L_08894324;
    case 33u: goto L_0889433C;
    case 34u: goto L_08894354;
    case 35u: goto L_08894390;
    case 36u: goto L_08894398;
    case 37u: goto L_088943A8;
    case 38u: goto L_088943BC;
    case 39u: goto L_088943C4;
    case 40u: goto L_088943CC;
    case 41u: goto L_088943D8;
    case 42u: goto L_088943E0;
    case 43u: goto L_088943E8;
    case 44u: goto L_08894418;
    case 45u: goto L_088944A8;
    case 46u: goto L_088944BC;
    case 47u: goto L_088944C4;
    case 48u: goto L_088944D4;
    case 49u: goto L_088944E4;
    case 50u: goto L_088944F0;
    case 51u: goto L_088944F8;
    case 52u: goto L_08894514;
    case 53u: goto L_08894528;
    case 54u: goto L_0889456C;
    case 55u: goto L_0889458C;
    case 56u: goto L_08894594;
    case 57u: goto L_088945A4;
    case 58u: goto L_088945B4;
    case 59u: goto L_088945B8;
    case 60u: goto L_088945C0;
    case 61u: goto L_088945C8;
    case 62u: goto L_088945E0;
    case 63u: goto L_088945E4;
    case 64u: goto L_088945E8;
    case 65u: goto L_08894618;
    case 66u: goto L_08894620;
    case 67u: goto L_08894624;
    case 68u: goto L_0889462C;
    case 69u: goto L_08894668;
    case 70u: goto L_08894680;
    case 71u: goto L_08894688;
    case 72u: goto L_08894698;
    case 73u: goto L_088946A0;
    case 74u: goto L_088946B4;
    case 75u: goto L_088946BC;
    case 76u: goto L_088946C0;
    case 77u: goto L_088946CC;
    case 78u: goto L_088946D8;
    case 79u: goto L_088946E8;
    case 80u: goto L_088946F4;
    case 81u: goto L_08894700;
    case 82u: goto L_08894708;
    case 83u: goto L_0889471C;
    case 84u: goto L_08894724;
    case 85u: goto L_08894730;
    case 86u: goto L_08894744;
    case 87u: goto L_08894750;
    case 88u: goto L_08894764;
    case 89u: goto L_08894780;
    case 90u: goto L_088947A0;
    case 91u: goto L_088947A8;
    case 92u: goto L_088947B0;
    case 93u: goto L_088947D8;
    case 94u: goto L_088947F4;
    case 95u: goto L_0889480C;
    case 96u: goto L_08894814;
    case 97u: goto L_0889481C;
    case 98u: goto L_08894824;
    case 99u: goto L_0889482C;
    case 100u: goto L_08894838;
    case 101u: goto L_08894840;
    case 102u: goto L_08894848;
    case 103u: goto L_08894850;
    case 104u: goto L_0889485C;
    case 105u: goto L_08894864;
    case 106u: goto L_08894880;
    case 107u: goto L_08894888;
    case 108u: goto L_08894898;
    case 109u: goto L_08894900;
    case 110u: goto L_08894904;
    case 111u: goto L_0889490C;
    case 112u: goto L_0889491C;
    case 113u: goto L_08894924;
    case 114u: goto L_08894938;
    case 115u: goto L_08894940;
    case 116u: goto L_08894944;
    case 117u: goto L_08894950;
    case 118u: goto L_08894970;
    case 119u: goto L_08894984;
    case 120u: goto L_08894998;
    case 121u: goto L_088949AC;
    case 122u: goto L_088949C0;
    case 123u: goto L_088949D4;
    case 124u: goto L_088949E4;
    case 125u: goto L_088949EC;
    case 126u: goto L_088949F4;
    case 127u: goto L_08894A00;
    case 128u: goto L_08894A08;
    case 129u: goto L_08894A14;
    case 130u: goto L_08894A28;
    case 131u: goto L_08894A34;
    case 132u: goto L_08894A3C;
    case 133u: goto L_08894A48;
    case 134u: goto L_08894A50;
    case 135u: goto L_08894A60;
    case 136u: goto L_08894A74;
    case 137u: goto L_08894A7C;
    case 138u: goto L_08894A84;
    case 139u: goto L_08894A90;
    case 140u: goto L_08894A98;
    case 141u: goto L_08894AB4;
    case 142u: goto L_08894AC4;
    case 143u: goto L_08894B04;
    case 144u: goto L_08894B64;
    case 145u: goto L_08894B68;
    case 146u: goto L_08894B70;
    case 147u: goto L_08894B80;
    case 148u: goto L_08894B88;
    case 149u: goto L_08894B9C;
    case 150u: goto L_08894BA4;
    case 151u: goto L_08894BA8;
    case 152u: goto L_08894BB0;
    case 153u: goto L_08894BB8;
    case 154u: goto L_08894BC0;
    case 155u: goto L_08894BC8;
    case 156u: goto L_08894BD0;
    case 157u: goto L_08894BF0;
    case 158u: goto L_08894C04;
    case 159u: goto L_08894C18;
    case 160u: goto L_08894C2C;
    case 161u: goto L_08894C40;
    case 162u: goto L_08894C54;
    case 163u: goto L_08894C5C;
    case 164u: goto L_08894C6C;
    case 165u: goto L_08894CA4;
    case 166u: goto L_08894CC0;
    case 167u: goto L_08894CC4;
    case 168u: goto L_08894CCC;
    case 169u: goto L_08894CDC;
    case 170u: goto L_08894CE4;
    case 171u: goto L_08894CF8;
    case 172u: goto L_08894D00;
    case 173u: goto L_08894D04;
    case 174u: goto L_08894D0C;
    case 175u: goto L_08894D28;
    case 176u: goto L_08894D38;
    case 177u: goto L_08894D40;
    case 178u: goto L_08894D78;
    case 179u: goto L_08894D80;
    case 180u: goto L_08894D88;
    case 181u: goto L_08894D98;
    case 182u: goto L_08894DA0;
    case 183u: goto L_08894DB4;
    case 184u: goto L_08894DBC;
    case 185u: goto L_08894DC0;
    case 186u: goto L_08894DC8;
    case 187u: goto L_08894E14;
    case 188u: goto L_08894E1C;
    case 189u: goto L_08894E2C;
    case 190u: goto L_08894E50;
    case 191u: goto L_08894EFC;
    case 192u: goto L_08894F08;
    case 193u: goto L_08894F1C;
    case 194u: goto L_08894F3C;
    case 195u: goto L_08894F48;
    case 196u: goto L_08894F5C;
    case 197u: goto L_08894F7C;
    case 198u: goto L_08894F88;
    case 199u: goto L_08894F98;
    case 200u: goto L_08894FB8;
    case 201u: goto L_08894FC4;
    case 202u: goto L_08894FD4;
    case 203u: goto L_08894FE4;
    case 204u: goto L_08894FEC;
    case 205u: goto L_08894FF4;
    case 206u: goto L_08894FFC;
    case 207u: goto L_0889500C;
    case 208u: goto L_08895018;
    case 209u: goto L_08895028;
    case 210u: goto L_08895034;
    case 211u: goto L_08895070;
    case 212u: goto L_08895098;
    case 213u: goto L_088950C4;
    case 214u: goto L_088950EC;
    case 215u: goto L_088950FC;
    case 216u: goto L_0889510C;
    case 217u: goto L_08895150;
    case 218u: goto L_088951A4;
    case 219u: goto L_088951BC;
    case 220u: goto L_088951D4;
    case 221u: goto L_088951E0;
    case 222u: goto L_088951E8;
    case 223u: goto L_088951F0;
    case 224u: goto L_088951F8;
    case 225u: goto L_08895210;
    case 226u: goto L_08895220;
    case 227u: goto L_08895234;
    case 228u: goto L_08895244;
    case 229u: goto L_0889524C;
    case 230u: goto L_08895254;
    case 231u: goto L_08895260;
    case 232u: goto L_08895268;
    case 233u: goto L_08895270;
    case 234u: goto L_0889527C;
    case 235u: goto L_08895284;
    case 236u: goto L_08895290;
    case 237u: goto L_08895298;
    case 238u: goto L_088952A0;
    case 239u: goto L_088952A8;
    case 240u: goto L_088952B0;
    case 241u: goto L_088952BC;
    case 242u: goto L_088952C4;
    case 243u: goto L_088952CC;
    case 244u: goto L_088952D4;
    case 245u: goto L_088952E0;
    case 246u: goto L_088952E8;
    case 247u: goto L_088952F8;
    case 248u: goto L_08895300;
    case 249u: goto L_08895340;
    case 250u: goto L_08895370;
    case 251u: goto L_08895384;
    case 252u: goto L_0889538C;
    case 253u: goto L_0889539C;
    case 254u: goto L_088953A4;
    case 255u: goto L_088953B8;
    case 256u: goto L_088953C0;
    case 257u: goto L_088953C4;
    case 258u: goto L_088953CC;
    case 259u: goto L_088953DC;
    case 260u: goto L_088953EC;
    case 261u: goto L_08895400;
    case 262u: goto L_08895420;
    case 263u: goto L_08895430;
    case 264u: goto L_08895438;
    case 265u: goto L_0889544C;
    case 266u: goto L_08895454;
    case 267u: goto L_08895464;
    case 268u: goto L_08895478;
    case 269u: goto L_08895490;
    case 270u: goto L_08895498;
    case 271u: goto L_088954A0;
    case 272u: goto L_088954A4;
    case 273u: goto L_088954AC;
    case 274u: goto L_088954BC;
    case 275u: goto L_088954C4;
    case 276u: goto L_088954D8;
    case 277u: goto L_088954F0;
    case 278u: goto L_088954FC;
    case 279u: goto L_08895514;
    case 280u: goto L_08895520;
    case 281u: goto L_08895538;
    case 282u: goto L_08895544;
    case 283u: goto L_0889555C;
    case 284u: goto L_08895568;
    case 285u: goto L_08895580;
    case 286u: goto L_08895590;
    case 287u: goto L_08895598;
    case 288u: goto L_088955F8;
    case 289u: goto L_08895610;
    case 290u: goto L_08895618;
    case 291u: goto L_08895630;
    case 292u: goto L_08895638;
    case 293u: goto L_08895650;
    case 294u: goto L_08895658;
    case 295u: goto L_08895670;
    case 296u: goto L_08895678;
    case 297u: goto L_08895680;
    case 298u: goto L_08895688;
    case 299u: goto L_08895690;
    case 300u: goto L_08895698;
    case 301u: goto L_088956A0;
    case 302u: goto L_088956A8;
    case 303u: goto L_088956C0;
    case 304u: goto L_088956C8;
    case 305u: goto L_088956E0;
    case 306u: goto L_088956E8;
    case 307u: goto L_088956F0;
    case 308u: goto L_088956F8;
    case 309u: goto L_08895700;
    case 310u: goto L_08895708;
    case 311u: goto L_08895720;
    case 312u: goto L_08895728;
    case 313u: goto L_08895740;
    case 314u: goto L_08895748;
    case 315u: goto L_08895750;
    case 316u: goto L_08895758;
    case 317u: goto L_08895760;
    case 318u: goto L_08895768;
    case 319u: goto L_08895780;
    case 320u: goto L_08895788;
    case 321u: goto L_088957A0;
    case 322u: goto L_088957A8;
    case 323u: goto L_088957B0;
    case 324u: goto L_088957C8;
    case 325u: goto L_088957D0;
    case 326u: goto L_088957E8;
    case 327u: goto L_088957F0;
    case 328u: goto L_088957F8;
    case 329u: goto L_08895800;
    case 330u: goto L_08895808;
    case 331u: goto L_08895810;
    case 332u: goto L_08895814;
    case 333u: goto L_08895844;
    case 334u: goto L_088958F8;
    case 335u: goto L_0889591C;
    case 336u: goto L_08895940;
    case 337u: goto L_08895964;
    case 338u: goto L_08895988;
    case 339u: goto L_08895990;
    case 340u: goto L_088959B4;
    case 341u: goto L_088959D8;
    case 342u: goto L_088959E0;
    case 343u: goto L_088959EC;
    case 344u: goto L_088959F4;
    case 345u: goto L_088959FC;
    case 346u: goto L_08895A04;
    case 347u: goto L_08895A28;
    case 348u: goto L_08895A4C;
    case 349u: goto L_08895A54;
    case 350u: goto L_08895A60;
    case 351u: goto L_08895A84;
    case 352u: goto L_08895AA8;
    case 353u: goto L_08895AB4;
    case 354u: goto L_08895AD8;
    case 355u: goto L_08895AE4;
    case 356u: goto L_08895B08;
    case 357u: goto L_08895B2C;
    case 358u: goto L_08895B30;
    case 359u: goto L_08895B54;
    case 360u: goto L_08895B60;
    case 361u: goto L_08895B64;
    case 362u: goto L_08895B94;
    case 363u: goto L_08895C18;
    case 364u: goto L_08895C3C;
    case 365u: goto L_08895C60;
    case 366u: goto L_08895C84;
    case 367u: goto L_08895CA8;
    case 368u: goto L_08895CB0;
    case 369u: goto L_08895CD4;
    case 370u: goto L_08895CF8;
    case 371u: goto L_08895D00;
    case 372u: goto L_08895D24;
    case 373u: goto L_08895D48;
    case 374u: goto L_08895D54;
    case 375u: goto L_08895D78;
    case 376u: goto L_08895D9C;
    case 377u: goto L_08895DA8;
    case 378u: goto L_08895DCC;
    case 379u: goto L_08895DF0;
    case 380u: goto L_08895E04;
    case 381u: goto L_08895E0C;
    case 382u: goto L_08895E10;
    case 383u: goto L_08895E44;
    case 384u: goto L_08895E88;
    case 385u: goto L_08895E98;
    case 386u: goto L_08895EA8;
    case 387u: goto L_08895EC4;
    case 388u: goto L_08895EDC;
    case 389u: goto L_08895EE4;
    case 390u: goto L_08895EF8;
    case 391u: goto L_08895F08;
    case 392u: goto L_08895F1C;
    case 393u: goto L_08895F28;
    case 394u: goto L_08895F2C;
    case 395u: goto L_08895F34;
    case 396u: goto L_08895F44;
    case 397u: goto L_08895F5C;
    case 398u: goto L_08895F6C;
    case 399u: goto L_08895F74;
    case 400u: goto L_08895F7C;
    case 401u: goto L_08895F84;
    case 402u: goto L_08895F88;
    case 403u: goto L_08895FB4;
    case 404u: goto L_08895FBC;
    case 405u: goto L_08895FC4;
    case 406u: goto L_08895FD4;
    case 407u: goto L_08895FD8;
    case 408u: goto L_08895FE0;
    case 409u: goto L_08895FE8;
    case 410u: goto L_08895FF0;
    case 411u: goto L_08895FF4;
    case 412u: goto L_08896024;
    case 413u: goto L_08896080;
    case 414u: goto L_08896090;
    case 415u: goto L_088960A0;
    case 416u: goto L_088960BC;
    case 417u: goto L_088960D4;
    case 418u: goto L_088960DC;
    case 419u: goto L_088960F0;
    case 420u: goto L_08896100;
    case 421u: goto L_08896118;
    case 422u: goto L_0889614C;
    case 423u: goto L_08896154;
    case 424u: goto L_0889615C;
    case 425u: goto L_0889617C;
    case 426u: goto L_08896180;
    case 427u: goto L_08896188;
    case 428u: goto L_0889618C;
    case 429u: goto L_08896194;
    case 430u: goto L_0889619C;
    case 431u: goto L_088961B4;
    case 432u: goto L_088961C4;
    case 433u: goto L_088961C8;
    case 434u: goto L_088961FC;
    case 435u: goto L_08896224;
    case 436u: goto L_0889622C;
    case 437u: goto L_08896234;
    case 438u: goto L_08896244;
    case 439u: goto L_0889624C;
    case 440u: goto L_08896254;
    case 441u: goto L_0889625C;
    case 442u: goto L_08896260;
    case 443u: goto L_08896270;
    case 444u: goto L_088962A8;
    case 445u: goto L_088962B8;
    case 446u: goto L_088962C8;
    case 447u: goto L_088962DC;
    case 448u: goto L_088962F0;
    case 449u: goto L_088962FC;
    case 450u: goto L_08896304;
    case 451u: goto L_08896314;
    case 452u: goto L_08896318;
    case 453u: goto L_0889631C;
    case 454u: goto L_08896324;
    case 455u: goto L_0889632C;
    case 456u: goto L_08896334;
    case 457u: goto L_08896394;
    case 458u: goto L_0889639C;
    case 459u: goto L_088963A8;
    case 460u: goto L_088963B0;
    case 461u: goto L_088963C4;
    case 462u: goto L_088963C8;
    case 463u: goto L_088963DC;
    case 464u: goto L_088963F8;
    case 465u: goto L_0889640C;
    case 466u: goto L_08896414;
    case 467u: goto L_08896440;
    case 468u: goto L_0889646C;
    case 469u: goto L_08896478;
    case 470u: goto L_088964B8;
    case 471u: goto L_088964C8;
    case 472u: goto L_088964D0;
    case 473u: goto L_088964D4;
    case 474u: goto L_088964EC;
    case 475u: goto L_088964F4;
    case 476u: goto L_088964FC;
    case 477u: goto L_08896500;
    case 478u: goto L_08896508;
    case 479u: goto L_08896514;
    case 480u: goto L_0889651C;
    case 481u: goto L_08896524;
    case 482u: goto L_0889652C;
    case 483u: goto L_08896534;
    case 484u: goto L_0889653C;
    case 485u: goto L_08896544;
    case 486u: goto L_08896548;
    case 487u: goto L_08896554;
    case 488u: goto L_0889655C;
    case 489u: goto L_08896568;
    case 490u: goto L_08896584;
    case 491u: goto L_08896588;
    case 492u: goto L_08896590;
    case 493u: goto L_088965A0;
    case 494u: goto L_088965B0;
    case 495u: goto L_088965C0;
    case 496u: goto L_088965C4;
    case 497u: goto L_088965D8;
    case 498u: goto L_088965E0;
    case 499u: goto L_088965FC;
    case 500u: goto L_08896604;
    case 501u: goto L_08896614;
    case 502u: goto L_08896618;
    case 503u: goto L_0889663C;
    case 504u: goto L_08896648;
    case 505u: goto L_08896654;
    case 506u: goto L_0889665C;
    case 507u: goto L_08896678;
    case 508u: goto L_08896680;
    case 509u: goto L_0889668C;
    case 510u: goto L_08896690;
    case 511u: goto L_088966A4;
    case 512u: goto L_088966AC;
    case 513u: goto L_088966C8;
    case 514u: goto L_088966D0;
    case 515u: goto L_088966E4;
    case 516u: goto L_088966EC;
    case 517u: goto L_088966FC;
    case 518u: goto L_08896710;
    case 519u: goto L_0889671C;
    case 520u: goto L_08896728;
    case 521u: goto L_08896734;
    case 522u: goto L_0889673C;
    case 523u: goto L_08896758;
    case 524u: goto L_0889676C;
    case 525u: goto L_08896774;
    case 526u: goto L_0889677C;
    case 527u: goto L_088967AC;
    case 528u: goto L_08896830;
    case 529u: goto L_08896840;
    case 530u: goto L_08896848;
    case 531u: goto L_08896850;
    case 532u: goto L_08896888;
    case 533u: goto L_08896894;
    case 534u: goto L_088968CC;
    case 535u: goto L_088968D8;
    case 536u: goto L_08896910;
    case 537u: goto L_0889691C;
    case 538u: goto L_08896954;
    case 539u: goto L_08896964;
    case 540u: goto L_0889696C;
    case 541u: goto L_08896974;
    case 542u: goto L_08896978;
    case 543u: goto L_08896980;
    case 544u: goto L_08896988;
    case 545u: goto L_088969C0;
    case 546u: goto L_088969EC;
    case 547u: goto L_088969F4;
    case 548u: goto L_08896A00;
    case 549u: goto L_08896A10;
    case 550u: goto L_08896A48;
    case 551u: goto L_08896A74;
    case 552u: goto L_08896A7C;
    case 553u: goto L_08896A84;
    case 554u: goto L_08896A94;
    case 555u: goto L_08896A9C;
    case 556u: goto L_08896AAC;
    case 557u: goto L_08896AE4;
    case 558u: goto L_08896B10;
    case 559u: goto L_08896B18;
    case 560u: goto L_08896B20;
    case 561u: goto L_08896B30;
    case 562u: goto L_08896B38;
    case 563u: goto L_08896B40;
    case 564u: goto L_08896B4C;
    case 565u: goto L_08896B5C;
    case 566u: goto L_08896B94;
    case 567u: goto L_08896BC0;
    case 568u: goto L_08896BC8;
    case 569u: goto L_08896BD0;
    case 570u: goto L_08896BE0;
    case 571u: goto L_08896BE8;
    case 572u: goto L_08896BF8;
    case 573u: goto L_08896C30;
    case 574u: goto L_08896C5C;
    case 575u: goto L_08896C64;
    case 576u: goto L_08896C6C;
    case 577u: goto L_08896C7C;
    case 578u: goto L_08896C84;
    case 579u: goto L_08896C9C;
    case 580u: goto L_08896CEC;
    case 581u: goto L_08896CF8;
    case 582u: goto L_08896D30;
    case 583u: goto L_08896D3C;
    case 584u: goto L_08896D74;
    case 585u: goto L_08896D80;
    case 586u: goto L_08896DB8;
    case 587u: goto L_08896DC4;
    case 588u: goto L_08896E1C;
    case 589u: goto L_08896E2C;
    case 590u: goto L_08896E38;
    case 591u: goto L_08896E44;
    case 592u: goto L_08896E48;
    case 593u: goto L_08896E80;
    case 594u: goto L_08896EAC;
    case 595u: goto L_08896EB4;
    case 596u: goto L_08896EBC;
    case 597u: goto L_08896ECC;
    case 598u: goto L_08896ED4;
    case 599u: goto L_08896EE0;
    case 600u: goto L_08896EE4;
    case 601u: goto L_08896F1C;
    case 602u: goto L_08896F48;
    case 603u: goto L_08896F50;
    case 604u: goto L_08896F58;
    case 605u: goto L_08896F68;
    case 606u: goto L_08896F7C;
    case 607u: goto L_08896FD4;
    case 608u: goto L_08896FE0;
    case 609u: goto L_08896FEC;
    case 610u: goto L_08896FF8;
    case 611u: goto L_08897034;
    case 612u: goto L_08897060;
    case 613u: goto L_08897068;
    case 614u: goto L_08897070;
    case 615u: goto L_08897080;
    case 616u: goto L_08897088;
    case 617u: goto L_08897094;
    case 618u: goto L_088970D0;
    case 619u: goto L_088970FC;
    case 620u: goto L_08897104;
    case 621u: goto L_0889710C;
    case 622u: goto L_0889711C;
    case 623u: goto L_08897130;
    case 624u: goto L_0889713C;
    case 625u: goto L_08897148;
    case 626u: goto L_08897180;
    case 627u: goto L_088971AC;
    case 628u: goto L_088971B4;
    case 629u: goto L_088971BC;
    case 630u: goto L_088971CC;
    case 631u: goto L_088971D4;
    case 632u: goto L_088971E0;
    case 633u: goto L_08897218;
    case 634u: goto L_08897244;
    case 635u: goto L_0889724C;
    case 636u: goto L_08897254;
    case 637u: goto L_08897264;
    case 638u: goto L_0889726C;
    case 639u: goto L_088972BC;
    case 640u: goto L_088972C8;
    case 641u: goto L_08897300;
    case 642u: goto L_0889730C;
    case 643u: goto L_08897344;
    case 644u: goto L_08897350;
    case 645u: goto L_08897388;
    case 646u: goto L_08897394;
    case 647u: goto L_088973EC;
    case 648u: goto L_088973FC;
    case 649u: goto L_08897408;
    case 650u: goto L_08897414;
    case 651u: goto L_08897418;
    case 652u: goto L_08897450;
    case 653u: goto L_0889747C;
    case 654u: goto L_08897484;
    case 655u: goto L_0889748C;
    case 656u: goto L_0889749C;
    case 657u: goto L_088974A4;
    case 658u: goto L_088974B0;
    case 659u: goto L_088974B4;
    case 660u: goto L_088974EC;
    case 661u: goto L_08897518;
    case 662u: goto L_08897520;
    case 663u: goto L_08897528;
    case 664u: goto L_08897538;
    case 665u: goto L_0889754C;
    case 666u: goto L_088975A4;
    case 667u: goto L_088975B0;
    case 668u: goto L_088975BC;
    case 669u: goto L_088975C8;
    case 670u: goto L_08897604;
    case 671u: goto L_08897630;
    case 672u: goto L_08897638;
    case 673u: goto L_08897640;
    case 674u: goto L_08897650;
    case 675u: goto L_08897658;
    case 676u: goto L_08897664;
    case 677u: goto L_088976A0;
    case 678u: goto L_088976CC;
    case 679u: goto L_088976D4;
    case 680u: goto L_088976DC;
    case 681u: goto L_088976EC;
    case 682u: goto L_08897700;
    case 683u: goto L_0889770C;
    case 684u: goto L_08897718;
    case 685u: goto L_08897750;
    case 686u: goto L_0889777C;
    case 687u: goto L_08897784;
    case 688u: goto L_0889778C;
    case 689u: goto L_0889779C;
    case 690u: goto L_088977A4;
    case 691u: goto L_088977B0;
    case 692u: goto L_088977E8;
    case 693u: goto L_08897814;
    case 694u: goto L_0889781C;
    case 695u: goto L_08897824;
    case 696u: goto L_08897834;
    case 697u: goto L_08897838;
    case 698u: goto L_0889786C;
    case 699u: goto L_08897910;
    case 700u: goto L_08897920;
    case 701u: goto L_08897928;
    case 702u: goto L_08897930;
    case 703u: goto L_08897954;
    case 704u: goto L_0889796C;
    case 705u: goto L_08897980;
    case 706u: goto L_08897994;
    case 707u: goto L_08897998;
    case 708u: goto L_0889799C;
    case 709u: goto L_088979A4;
    case 710u: goto L_088979C4;
    case 711u: goto L_088979CC;
    case 712u: goto L_088979D4;
    case 713u: goto L_088979EC;
    case 714u: goto L_08897A00;
    case 715u: goto L_08897A14;
    case 716u: goto L_08897A18;
    case 717u: goto L_08897A1C;
    case 718u: goto L_08897A24;
    case 719u: goto L_08897A60;
    case 720u: goto L_08897A68;
    case 721u: goto L_08897A70;
    case 722u: goto L_08897A78;
    case 723u: goto L_08897A84;
    case 724u: goto L_08897A94;
    case 725u: goto L_08897AA0;
    case 726u: goto L_08897AE0;
    case 727u: goto L_08897AEC;
    case 728u: goto L_08897AFC;
    case 729u: goto L_08897B08;
    case 730u: goto L_08897B48;
    case 731u: goto L_08897B54;
    case 732u: goto L_08897B64;
    case 733u: goto L_08897B70;
    case 734u: goto L_08897BB0;
    case 735u: goto L_08897BC0;
    case 736u: goto L_08897BD0;
    case 737u: goto L_08897BE0;
    case 738u: goto L_08897BF4;
    case 739u: goto L_08897BFC;
    case 740u: goto L_08897C00;
    case 741u: goto L_08897C08;
    case 742u: goto L_08897C10;
    case 743u: goto L_08897C48;
    case 744u: goto L_08897C94;
    case 745u: goto L_08897C9C;
    case 746u: goto L_08897CA8;
    case 747u: goto L_08897CB8;
    case 748u: goto L_08897CF0;
    case 749u: goto L_08897D40;
    case 750u: goto L_08897D50;
    case 751u: goto L_08897D58;
    case 752u: goto L_08897D68;
    case 753u: goto L_08897DA0;
    case 754u: goto L_08897DF0;
    case 755u: goto L_08897E00;
    case 756u: goto L_08897E20;
    case 757u: goto L_08897E28;
    case 758u: goto L_08897E30;
    case 759u: goto L_08897E3C;
    case 760u: goto L_08897E4C;
    case 761u: goto L_08897E84;
    case 762u: goto L_08897ED4;
    case 763u: goto L_08897EE4;
    case 764u: goto L_08897EEC;
    case 765u: goto L_08897EFC;
    case 766u: goto L_08897F34;
    case 767u: goto L_08897F84;
    case 768u: goto L_08897F94;
    case 769u: goto L_08897FB4;
    case 770u: goto L_08897FBC;
    case 771u: goto L_08897FD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08894000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08894204;
      }
      goto L_0889402C;
    }
L_0889402C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.lo);
    goto L_08894060;
L_08894060:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08894078;
      }
      goto L_08894068;
    }
L_08894068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
        goto L_08894080;
    }
    goto L_08894078;
L_08894078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088940A0;
      }
      goto L_08894080;
    }
L_08894080:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_0889409C;
    }
    goto L_08894094;
L_08894094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088940A0;
      }
      goto L_0889409C;
    }
L_0889409C:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[20]);
    goto L_088940A0;
L_088940A0:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088941F0;
      }
      goto L_088940AC;
    }
L_088940AC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088941F0;
      }
      goto L_088940C4;
    }
L_088940C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088940F4;
      }
      goto L_088940D4;
    }
L_088940D4:
    ctx.gpr[31] = (0x088940DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088940DCu) goto L_088940DC;
    return;
L_088940DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088940F4;
      }
      goto L_088940E4;
    }
L_088940E4:
    ctx.gpr[31] = (0x088940ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem) && ctx.pc == 0x088940ECu) goto L_088940EC;
    return;
L_088940EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088941F0;
      }
      goto L_088940F4;
    }
L_088940F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08894118;
      }
      goto L_08894108;
    }
L_08894108:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08894118;
L_08894118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[11] = (ctx.gpr[4] ^ 39u);
    ctx.gpr[11] = (ctx.gpr[11] < static_cast<std::uint32_t>(1) ? 1u : 0u);
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
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08894150u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem) && ctx.pc == 0x08894150u) goto L_08894150;
    return;
L_08894150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] << 3u);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088941DCu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088941DCu) goto L_088941DC;
    return;
L_088941DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088941F0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x088941F0u) goto L_088941F0;
    return;
L_088941F0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08894060;
      }
      goto L_08894204;
    }
L_08894204:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
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
L_08894244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08894528;
      }
      goto L_08894298;
    }
L_08894298:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[21] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9214u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088942D8;
L_088942D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_088942F0;
      }
      goto L_088942E0;
    }
L_088942E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
        goto L_088942F8;
    }
    goto L_088942F0;
L_088942F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08894318;
      }
      goto L_088942F8;
    }
L_088942F8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_08894314;
    }
    goto L_0889430C;
L_0889430C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08894318;
      }
      goto L_08894314;
    }
L_08894314:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[21]);
    goto L_08894318;
L_08894318:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894514;
      }
      goto L_08894324;
    }
L_08894324:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894514;
      }
      goto L_0889433C;
    }
L_0889433C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894398;
      }
      goto L_08894354;
    }
L_08894354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08894390u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08894390u) goto L_08894390;
    return;
L_08894390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894514;
      }
      goto L_08894398;
    }
L_08894398:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088943BC;
      }
      goto L_088943A8;
    }
L_088943A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088943E8;
      }
      goto L_088943BC;
    }
L_088943BC:
    ctx.gpr[31] = (0x088943C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088943C4u) goto L_088943C4;
    return;
L_088943C4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088943E8;
      }
      goto L_088943CC;
    }
L_088943CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088944C4;
      }
      goto L_088943D8;
    }
L_088943D8:
    ctx.gpr[31] = (0x088943E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088943E0u) goto L_088943E0;
    return;
L_088943E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088944C4;
      }
      goto L_088943E8;
    }
L_088943E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08894418u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem) && ctx.pc == 0x08894418u) goto L_08894418;
    return;
L_08894418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] << 3u);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088944A8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088944A8u) goto L_088944A8;
    return;
L_088944A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088944BCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x088944BCu) goto L_088944BC;
    return;
L_088944BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894514;
      }
      goto L_088944C4;
    }
L_088944C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088944E4;
      }
      goto L_088944D4;
    }
L_088944D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894514;
      }
      goto L_088944E4;
    }
L_088944E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088944F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x088944F0u) goto L_088944F0;
    return;
L_088944F0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894514;
      }
      goto L_088944F8;
    }
L_088944F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08894514u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08894514u) goto L_08894514;
    return;
L_08894514:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_088942D8;
      }
      goto L_08894528;
    }
L_08894528:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889456C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088945C0;
      }
      goto L_0889458C;
    }
L_0889458C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08894594;
L_08894594:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088945B4;
    }
    goto L_088945A4;
L_088945A4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088945B8;
      }
      goto L_088945B4;
    }
L_088945B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088945B8;
L_088945B8:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08894594;
    }
    goto L_088945C0;
L_088945C0:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_088945E4;
    }
    goto L_088945C8;
L_088945C8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
        goto L_088945E8;
    }
    goto L_088945E0;
L_088945E0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_088945E4;
L_088945E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_088945E8;
L_088945E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894620;
      }
      goto L_08894618;
    }
L_08894618:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08894624;
      }
      goto L_08894620;
    }
L_08894620:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_08894624;
L_08894624:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889462C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08894744;
      }
      goto L_08894668;
    }
L_08894668:
    ctx.gpr[21] = (0u | 3u);
    ctx.gpr[22] = (0u | 500u);
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[20] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_08894680;
L_08894680:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08894698;
      }
      goto L_08894688;
    }
L_08894688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_088946A0;
    }
    goto L_08894698;
L_08894698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088946C0;
      }
      goto L_088946A0;
    }
L_088946A0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088946BC;
    }
    goto L_088946B4;
L_088946B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088946C0;
      }
      goto L_088946BC;
    }
L_088946BC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_088946C0;
L_088946C0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894730;
      }
      goto L_088946CC;
    }
L_088946CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894730;
      }
      goto L_088946D8;
    }
L_088946D8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1653))))));
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08894730;
      }
      goto L_088946E8;
    }
L_088946E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1656)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08894730;
      }
      goto L_088946F4;
    }
L_088946F4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(666)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 501 ? 1u : 0u);
      if (branch_taken) {
          goto L_08894708;
      }
      goto L_08894700;
    }
L_08894700:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894730;
      }
      goto L_08894708;
    }
L_08894708:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(ctx.gpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1656)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(668), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894730;
      }
      goto L_0889471C;
    }
L_0889471C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(668));
      if (branch_taken) {
          goto L_08894730;
      }
      goto L_08894724;
    }
L_08894724:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08894730u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08894730u) goto L_08894730;
    return;
L_08894730:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08894680;
      }
      goto L_08894744;
    }
L_08894744:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088947A8;
      }
      goto L_08894750;
    }
L_08894750:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08894764u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 58u, 0x088806F8u>(ctx, &aot_mem) && ctx.pc == 0x08894764u) goto L_08894764;
    return;
L_08894764:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8433)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08894780u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0889456C;
L_08894780:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x088947A0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 186u, 0x08ADC9FCu>(ctx, &aot_mem) && ctx.pc == 0x088947A0u) goto L_088947A0;
    return;
L_088947A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088947B0;
      }
      goto L_088947A8;
    }
L_088947A8:
    ctx.gpr[31] = (0x088947B0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 58u, 0x088806F8u>(ctx, &aot_mem) && ctx.pc == 0x088947B0u) goto L_088947B0;
    return;
L_088947B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088947D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08894814;
      }
      goto L_088947F4;
    }
L_088947F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889481C;
      }
      goto L_0889480C;
    }
L_0889480C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894850;
      }
      goto L_08894814;
    }
L_08894814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894888;
      }
      goto L_0889481C;
    }
L_0889481C:
    ctx.gpr[31] = (0x08894824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08894824u) goto L_08894824;
    return;
L_08894824:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08894840;
      }
      goto L_0889482C;
    }
L_0889482C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08894838u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08894838u) goto L_08894838;
    return;
L_08894838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894848;
      }
      goto L_08894840;
    }
L_08894840:
    ctx.gpr[31] = (0x08894848u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem) && ctx.pc == 0x08894848u) goto L_08894848;
    return;
L_08894848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894888;
      }
      goto L_08894850;
    }
L_08894850:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889485Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x0889485Cu) goto L_0889485C;
    return;
L_0889485C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894880;
      }
      goto L_08894864;
    }
L_08894864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08894880u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08894880u) goto L_08894880;
    return;
L_08894880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894848;
      }
      goto L_08894888;
    }
L_08894888:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_08894AC4;
      }
      goto L_08894900;
    }
L_08894900:
    ctx.gpr[17] = (0u | 0u);
    goto L_08894904;
L_08894904:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_0889491C;
      }
      goto L_0889490C;
    }
L_0889490C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
        goto L_08894924;
    }
    goto L_0889491C;
L_0889491C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08894944;
      }
      goto L_08894924;
    }
L_08894924:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_08894940;
    }
    goto L_08894938;
L_08894938:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08894944;
      }
      goto L_08894940;
    }
L_08894940:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[17]);
    goto L_08894944;
L_08894944:
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_08894950;
    }
L_08894950:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_08894970;
    }
L_08894970:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_08894984;
    }
L_08894984:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_08894998;
    }
L_08894998:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_088949AC;
    }
L_088949AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_088949C0;
    }
L_088949C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_088949D4;
    }
L_088949D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_088949E4;
    }
L_088949E4:
    ctx.gpr[31] = (0x088949ECu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 772u, 0x08AFF508u>(ctx, &aot_mem) && ctx.pc == 0x088949ECu) goto L_088949EC;
    return;
L_088949EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_088949F4;
    }
L_088949F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894A14;
      }
      goto L_08894A00;
    }
L_08894A00:
    ctx.gpr[31] = (0x08894A08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem) && ctx.pc == 0x08894A08u) goto L_08894A08;
    return;
L_08894A08:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08894A14u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem) && ctx.pc == 0x08894A14u) goto L_08894A14;
    return;
L_08894A14:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(565)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894A74;
      }
      goto L_08894A28;
    }
L_08894A28:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08894A34u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08894A34u) goto L_08894A34;
    return;
L_08894A34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894A60;
      }
      goto L_08894A3C;
    }
L_08894A3C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08894A48u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08894A48u) goto L_08894A48;
    return;
L_08894A48:
    ctx.gpr[31] = (0x08894A50u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem) && ctx.pc == 0x08894A50u) goto L_08894A50;
    return;
L_08894A50:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08894A60u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem) && ctx.pc == 0x08894A60u) goto L_08894A60;
    return;
L_08894A60:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(565)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894A28;
      }
      goto L_08894A74;
    }
L_08894A74:
    ctx.gpr[31] = (0x08894A7Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 369u, 0x08B41658u>(ctx, &aot_mem) && ctx.pc == 0x08894A7Cu) goto L_08894A7C;
    return;
L_08894A7C:
    ctx.gpr[31] = (0x08894A84u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 550u, 0x08B02100u>(ctx, &aot_mem) && ctx.pc == 0x08894A84u) goto L_08894A84;
    return;
L_08894A84:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08894A90u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08894A90u) goto L_08894A90;
    return;
L_08894A90:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_08894A98;
    }
L_08894A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08894AB4u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08894AB4u) goto L_08894AB4;
    return;
L_08894AB4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_08894904;
      }
      goto L_08894AC4;
    }
L_08894AC4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894B04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_08894C6C;
      }
      goto L_08894B64;
    }
L_08894B64:
    ctx.gpr[16] = (0u | 0u);
    goto L_08894B68;
L_08894B68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08894B80;
      }
      goto L_08894B70;
    }
L_08894B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08894B88;
    }
    goto L_08894B80;
L_08894B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08894BA8;
      }
      goto L_08894B88;
    }
L_08894B88:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08894BA4;
    }
    goto L_08894B9C;
L_08894B9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08894BA8;
      }
      goto L_08894BA4;
    }
L_08894BA4:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[16]);
    goto L_08894BA8;
L_08894BA8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894BB0;
    }
L_08894BB0:
    ctx.gpr[31] = (0x08894BB8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08894BB8u) goto L_08894BB8;
    return;
L_08894BB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894BC0;
    }
L_08894BC0:
    ctx.gpr[31] = (0x08894BC8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 128u, 0x0890C798u>(ctx, &aot_mem) && ctx.pc == 0x08894BC8u) goto L_08894BC8;
    return;
L_08894BC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894BD0;
    }
L_08894BD0:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894BF0;
    }
L_08894BF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894C04;
    }
L_08894C04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894C18;
    }
L_08894C18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894C2C;
    }
L_08894C2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894C40;
    }
L_08894C40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894C54;
    }
L_08894C54:
    ctx.gpr[31] = (0x08894C5Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem) && ctx.pc == 0x08894C5Cu) goto L_08894C5C;
    return;
L_08894C5C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(3344));
      if (branch_taken) {
          goto L_08894B68;
      }
      goto L_08894C6C;
    }
L_08894C6C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894CA4:
    ctx.gpr[7] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-65));
      if (branch_taken) {
          goto L_08894D38;
      }
      goto L_08894CC0;
    }
L_08894CC0:
    ctx.gpr[9] = (0u | 0u);
    goto L_08894CC4;
L_08894CC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08894CDC;
      }
      goto L_08894CCC;
    }
L_08894CCC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_08894CE4;
    }
    goto L_08894CDC;
L_08894CDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08894D04;
      }
      goto L_08894CE4;
    }
L_08894CE4:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] & 128u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08894D00;
    }
    goto L_08894CF8;
L_08894CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08894D04;
      }
      goto L_08894D00;
    }
L_08894D00:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    goto L_08894D04;
L_08894D04:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894D28;
      }
      goto L_08894D0C;
    }
L_08894D0C:
    ctx.gpr[11] = (ctx.gpr[7] & 255u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[11] & 1u);
    ctx.gpr[11] = (ctx.gpr[11] << 6u);
    ctx.gpr[11] = (ctx.gpr[2] | ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[11]));
    goto L_08894D28;
L_08894D28:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_08894CC4;
      }
      goto L_08894D38;
    }
L_08894D38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894D40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08894E2C;
      }
      goto L_08894D78;
    }
L_08894D78:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[17] = (0u | 0u);
    goto L_08894D80;
L_08894D80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08894D98;
      }
      goto L_08894D88;
    }
L_08894D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08894DA0;
    }
    goto L_08894D98;
L_08894D98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08894DC0;
      }
      goto L_08894DA0;
    }
L_08894DA0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08894DBC;
    }
    goto L_08894DB4;
L_08894DB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08894DC0;
      }
      goto L_08894DBC;
    }
L_08894DBC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08894DC0;
L_08894DC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894E1C;
      }
      goto L_08894DC8;
    }
L_08894DC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894E1C;
      }
      goto L_08894E14;
    }
L_08894E14:
    ctx.gpr[31] = (0x08894E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 479u, 0x08B01C90u>(ctx, &aot_mem) && ctx.pc == 0x08894E1Cu) goto L_08894E1C;
    return;
L_08894E1C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_08894D80;
      }
      goto L_08894E2C;
    }
L_08894E2C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
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
L_08894E50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[17] - ctx.fpr[20];
    ctx.fpr[24] = ctx.fpr[30] + ctx.fpr[20];
    ctx.fpr[22] = ctx.fpr[16] - ctx.fpr[20];
    ctx.fpr[20] = ctx.fpr[15] + ctx.fpr[20];
    ctx.gpr[5] = (0u | 49u);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[26] / ctx.fpr[12];
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 49u);
        goto L_08894EFC;
    }
    goto L_08894EFC;
L_08894EFC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08894F08;
    }
    goto L_08894F08;
L_08894F08:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08894F1C;
    }
    goto L_08894F1C;
L_08894F1C:
    ctx.gpr[6] = (0u | 49u);
    ctx.fpr[15] = ctx.fpr[22] / ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 49u);
        goto L_08894F3C;
    }
    goto L_08894F3C;
L_08894F3C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08894F48;
    }
    goto L_08894F48;
L_08894F48:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_08894F5C;
    }
    goto L_08894F5C;
L_08894F5C:
    ctx.gpr[6] = (0u | 49u);
    ctx.fpr[15] = ctx.fpr[24] / ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 49u);
        goto L_08894F7C;
    }
    goto L_08894F7C;
L_08894F7C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08894F88;
    }
    goto L_08894F88;
L_08894F88:
    ctx.gpr[17] = (0u | 50u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08894F98;
    }
    goto L_08894F98;
L_08894F98:
    ctx.gpr[6] = (0u | 49u);
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 49u);
        goto L_08894FB8;
    }
    goto L_08894FB8;
L_08894FB8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08894FC4;
    }
    goto L_08894FC4;
L_08894FC4:
    ctx.gpr[18] = (0u | 50u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_08894FD4;
    }
    goto L_08894FD4;
L_08894FD4:
    ctx.gpr[4] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08894FEC;
      }
      goto L_08894FE4;
    }
L_08894FE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08894FFC;
      }
      goto L_08894FEC;
    }
L_08894FEC:
    ctx.gpr[31] = (0x08894FF4u);
    // nop
    goto L_088954BC;
L_08894FF4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08894FFC;
L_08894FFC:
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] << 4u);
      if (branch_taken) {
          goto L_0889510C;
      }
      goto L_0889500C;
    }
L_0889500C:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08895018;
L_08895018:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_088950FC;
      }
      goto L_08895028;
    }
L_08895028:
    ctx.gpr[22] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[4]);
    goto L_08895034;
L_08895034:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[23] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(28));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08895070u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 655u, 0x0889BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08895070u) goto L_08895070;
    return;
L_08895070:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08895098u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 655u, 0x0889BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08895098u) goto L_08895098;
    return;
L_08895098:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(36));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x088950C4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08895150;
L_088950C4:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(40));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088950ECu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08895150;
L_088950EC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08895034;
      }
      goto L_088950FC;
    }
L_088950FC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08895018;
      }
      goto L_0889510C;
    }
L_0889510C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08895150:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
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
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08895300;
      }
      goto L_088951A4;
    }
L_088951A4:
    ctx.gpr[19] = (0u | 58u);
    ctx.gpr[20] = (0u | 57u);
    ctx.gpr[21] = (0u | 8u);
    ctx.gpr[22] = (0u | 18u);
    ctx.gpr[23] = (0u | 9u);
    ctx.gpr[30] = (0u | 6u);
    goto L_088951BC;
L_088951BC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_088951D4;
    }
L_088951D4:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088951E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088951E0u) goto L_088951E0;
    return;
L_088951E0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_088951E8;
    }
L_088951E8:
    ctx.gpr[31] = (0x088951F0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(676)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088951F0u) goto L_088951F0;
    return;
L_088951F0:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_088951F8;
    }
L_088951F8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_08895210;
    }
L_08895210:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_08895220;
    }
L_08895220:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_08895234;
    }
L_08895234:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_08895244;
    }
L_08895244:
    ctx.gpr[31] = (0x0889524Cu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0889524Cu) goto L_0889524C;
    return;
L_0889524C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08895270;
      }
      goto L_08895254;
    }
L_08895254:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_08895260;
    }
L_08895260:
    ctx.gpr[31] = (0x08895268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08895268u) goto L_08895268;
    return;
L_08895268:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_08895270;
    }
L_08895270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_0889527C;
    }
L_0889527C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_08895284;
    }
L_08895284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088952A0;
      }
      goto L_08895290;
    }
L_08895290:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088952A0;
      }
      goto L_08895298;
    }
L_08895298:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_088952A0;
    }
L_088952A0:
    ctx.gpr[31] = (0x088952A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x088952A8u) goto L_088952A8;
    return;
L_088952A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088952E8;
      }
      goto L_088952B0;
    }
L_088952B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088952CC;
      }
      goto L_088952BC;
    }
L_088952BC:
    ctx.gpr[31] = (0x088952C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 712u, 0x08A33164u>(ctx, &aot_mem) && ctx.pc == 0x088952C4u) goto L_088952C4;
    return;
L_088952C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088952D4;
      }
      goto L_088952CC;
    }
L_088952CC:
    ctx.gpr[31] = (0x088952D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x088952D4u) goto L_088952D4;
    return;
L_088952D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088952E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x088952E0u) goto L_088952E0;
    return;
L_088952E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_088952E8;
    }
L_088952E8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088952F8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x088952F8u) goto L_088952F8;
    return;
L_088952F8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088951BC;
      }
      goto L_08895300;
    }
L_08895300:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_08895340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08895400;
      }
      goto L_08895370;
    }
L_08895370:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[16] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08895384;
L_08895384:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_0889539C;
      }
      goto L_0889538C;
    }
L_0889538C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_088953A4;
    }
    goto L_0889539C;
L_0889539C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088953C4;
      }
      goto L_088953A4;
    }
L_088953A4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088953C0;
    }
    goto L_088953B8;
L_088953B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088953C4;
      }
      goto L_088953C0;
    }
L_088953C0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_088953C4;
L_088953C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088953EC;
      }
      goto L_088953CC;
    }
L_088953CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088953EC;
      }
      goto L_088953DC;
    }
L_088953DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088953ECu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x088953ECu) goto L_088953EC;
    return;
L_088953EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08895384;
      }
      goto L_08895400;
    }
L_08895400:
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
L_08895420:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25484)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895438;
      }
      goto L_08895430;
    }
L_08895430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889544C;
      }
      goto L_08895438;
    }
L_08895438:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27872));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0889544C;
L_0889544C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08895454:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08895490;
      }
      goto L_08895464;
    }
L_08895464:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-120));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(34) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088954A0;
      }
      goto L_08895478;
    }
L_08895478:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-22992)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08895490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088954A4;
      }
      goto L_08895498;
    }
L_08895498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088954A4;
      }
      goto L_088954A0;
    }
L_088954A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088954A4;
L_088954A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088954AC:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2052)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088954BC:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    goto L_088954C4;
L_088954C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088954F0;
      }
      goto L_088954D8;
    }
L_088954D8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088954D8;
      }
      goto L_088954F0;
    }
L_088954F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895514;
      }
      goto L_088954FC;
    }
L_088954FC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088954FC;
      }
      goto L_08895514;
    }
L_08895514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895538;
      }
      goto L_08895520;
    }
L_08895520:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895520;
      }
      goto L_08895538;
    }
L_08895538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889555C;
      }
      goto L_08895544;
    }
L_08895544:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895544;
      }
      goto L_0889555C;
    }
L_0889555C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895580;
      }
      goto L_08895568;
    }
L_08895568:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895568;
      }
      goto L_08895580;
    }
L_08895580:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088954C4;
      }
      goto L_08895590;
    }
L_08895590:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08895598:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[30] = (ctx.gpr[7] & 255u);
    ctx.gpr[23] = (ctx.gpr[8] & 255u);
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    ctx.gpr[21] = (ctx.gpr[10] & 255u);
    ctx.gpr[20] = (ctx.gpr[11] & 255u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08895678;
      }
      goto L_088955F8;
    }
L_088955F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08895610u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_08895610:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088956A0;
      }
      goto L_08895618;
    }
L_08895618:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08895630u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_08895630:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895698;
      }
      goto L_08895638;
    }
L_08895638:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08895650u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_08895650:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895690;
      }
      goto L_08895658;
    }
L_08895658:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08895670u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_08895670:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895688;
      }
      goto L_08895678;
    }
L_08895678:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088956A8;
      }
      goto L_08895680;
    }
L_08895680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088956E8;
      }
      goto L_08895688;
    }
L_08895688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895690;
    }
L_08895690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895698;
    }
L_08895698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_088956A0;
    }
L_088956A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_088956A8;
    }
L_088956A8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088956C0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_088956C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895700;
      }
      goto L_088956C8;
    }
L_088956C8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088956E0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_088956E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088956F8;
      }
      goto L_088956E8;
    }
L_088956E8:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895708;
      }
      goto L_088956F0;
    }
L_088956F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895748;
      }
      goto L_088956F8;
    }
L_088956F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895700;
    }
L_08895700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895708;
    }
L_08895708:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08895720u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_08895720:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895760;
      }
      goto L_08895728;
    }
L_08895728:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08895740u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_08895740:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895758;
      }
      goto L_08895748;
    }
L_08895748:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895768;
      }
      goto L_08895750;
    }
L_08895750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088957A8;
      }
      goto L_08895758;
    }
L_08895758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895760;
    }
L_08895760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895768;
    }
L_08895768:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08895780u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_08895E44;
L_08895780:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895810;
      }
      goto L_08895788;
    }
L_08895788:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088957A0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_08895E44;
L_088957A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895808;
      }
      goto L_088957A8;
    }
L_088957A8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895800;
      }
      goto L_088957B0;
    }
L_088957B0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088957C8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_088957C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088957F8;
      }
      goto L_088957D0;
    }
L_088957D0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088957E8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_088957E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895800;
      }
      goto L_088957F0;
    }
L_088957F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_088957F8;
    }
L_088957F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895800;
    }
L_08895800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895808;
    }
L_08895808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895810;
    }
L_08895810:
    ctx.gpr[2] = (0u | 0u);
    goto L_08895814;
L_08895814:
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
L_08895844:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[22] = (ctx.gpr[10] & 255u);
    ctx.gpr[23] = (ctx.gpr[11] & 255u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8072)));
    ctx.gpr[10] = (0u < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8423)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (0u < ctx.gpr[11] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08895988;
      }
      goto L_088958F8;
    }
L_088958F8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0889591Cu);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem) && ctx.pc == 0x0889591Cu) goto L_0889591C;
    return;
L_0889591C:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08895940u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem) && ctx.pc == 0x08895940u) goto L_08895940;
    return;
L_08895940:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08895964u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem) && ctx.pc == 0x08895964u) goto L_08895964;
    return;
L_08895964:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08895988u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem) && ctx.pc == 0x08895988u) goto L_08895988;
    return;
L_08895988:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088959D8;
      }
      goto L_08895990;
    }
L_08895990:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088959B4u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem) && ctx.pc == 0x088959B4u) goto L_088959B4;
    return;
L_088959B4:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088959D8u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem) && ctx.pc == 0x088959D8u) goto L_088959D8;
    return;
L_088959D8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08895A54;
      }
      goto L_088959E0;
    }
L_088959E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088959F4;
      }
      goto L_088959EC;
    }
L_088959EC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088959F4;
L_088959F4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895A04;
      }
      goto L_088959FC;
    }
L_088959FC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08895A04;
L_08895A04:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08895A28u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem) && ctx.pc == 0x08895A28u) goto L_08895A28;
    return;
L_08895A28:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08895A4Cu);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem) && ctx.pc == 0x08895A4Cu) goto L_08895A4C;
    return;
L_08895A4C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(0u));
    goto L_08895A54;
L_08895A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895AA8;
      }
      goto L_08895A60;
    }
L_08895A60:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08895A84u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem) && ctx.pc == 0x08895A84u) goto L_08895A84;
    return;
L_08895A84:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08895AA8u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem) && ctx.pc == 0x08895AA8u) goto L_08895AA8;
    return;
L_08895AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895AD8;
      }
      goto L_08895AB4;
    }
L_08895AB4:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08895AD8u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem) && ctx.pc == 0x08895AD8u) goto L_08895AD8;
    return;
L_08895AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(9)));
        goto L_08895B30;
    }
    goto L_08895AE4;
L_08895AE4:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08895B08u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem) && ctx.pc == 0x08895B08u) goto L_08895B08;
    return;
L_08895B08:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08895B2Cu);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem) && ctx.pc == 0x08895B2Cu) goto L_08895B2C;
    return;
L_08895B2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(9)));
    goto L_08895B30;
L_08895B30:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895B60;
      }
      goto L_08895B54;
    }
L_08895B54:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08895B64;
      }
      goto L_08895B60;
    }
L_08895B60:
    ctx.gpr[2] = (0u | 0u);
    goto L_08895B64;
L_08895B64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08895B94:
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
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    ctx.gpr[23] = (ctx.gpr[10] & 255u);
    ctx.gpr[9] = (ctx.gpr[11] & 255u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08895CA8;
      }
      goto L_08895C18;
    }
L_08895C18:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895C3Cu);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895C3C:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895C60u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895C60:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895C84u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895C84:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895CA8u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895CA8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895CF8;
      }
      goto L_08895CB0;
    }
L_08895CB0:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895CD4u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895CD4:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895CF8u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895CF8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895D48;
      }
      goto L_08895D00;
    }
L_08895D00:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895D24u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895D24:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895D48u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895D48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895D9C;
      }
      goto L_08895D54;
    }
L_08895D54:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895D78u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_08896024;
L_08895D78:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895D9Cu);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_08896024;
L_08895D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895DF0;
      }
      goto L_08895DA8;
    }
L_08895DA8:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895DCCu);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895DCC:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895DF0u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895DF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895E0C;
      }
      goto L_08895E04;
    }
L_08895E04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08895E10;
      }
      goto L_08895E0C;
    }
L_08895E0C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08895E10;
L_08895E10:
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
L_08895E44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    ctx.gpr[18] = (ctx.gpr[7] & 255u);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08895FF0;
      }
      goto L_08895E88;
    }
L_08895E88:
    ctx.gpr[4] = (16168u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 58u);
    goto L_08895E98;
L_08895E98:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895EA8;
    }
L_08895EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[5] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895EF8;
      }
      goto L_08895EC4;
    }
L_08895EC4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(483))))));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895EF8;
      }
      goto L_08895EDC;
    }
L_08895EDC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895EF8;
      }
      goto L_08895EE4;
    }
L_08895EE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895EF8;
    }
L_08895EF8:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8072)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895F2C;
      }
      goto L_08895F08;
    }
L_08895F08:
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895F2C;
      }
      goto L_08895F1C;
    }
L_08895F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08895F2C;
      }
      goto L_08895F28;
    }
L_08895F28:
    ctx.gpr[5] = (0u | 0u);
    goto L_08895F2C;
L_08895F2C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895F34;
    }
L_08895F34:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895F44;
    }
L_08895F44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 512u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895F5C;
    }
L_08895F5C:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8068)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895F6C;
    }
L_08895F6C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08895F88;
      }
      goto L_08895F74;
    }
L_08895F74:
    ctx.gpr[31] = (0x08895F7Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_088961FC;
L_08895F7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895F84;
    }
L_08895F84:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08895F88;
L_08895F88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895FB4u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 207u, 0x088B1820u>(ctx, &aot_mem) && ctx.pc == 0x08895FB4u) goto L_08895FB4;
    return;
L_08895FB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08895FC4;
      }
      goto L_08895FBC;
    }
L_08895FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08895FD8;
      }
      goto L_08895FC4;
    }
L_08895FC4:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08895FD4u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 435u, 0x088B3800u>(ctx, &aot_mem) && ctx.pc == 0x08895FD4u) goto L_08895FD4;
    return;
L_08895FD4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08895FD8;
L_08895FD8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895FE0;
    }
L_08895FE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895FF4;
      }
      goto L_08895FE8;
    }
L_08895FE8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895E98;
      }
      goto L_08895FF0;
    }
L_08895FF0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08895FF4;
L_08895FF4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896024:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    ctx.gpr[21] = (ctx.gpr[11] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[23] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_0889619C;
      }
      goto L_08896080;
    }
L_08896080:
    ctx.gpr[4] = (16168u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08896090;
L_08896090:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889618C;
      }
      goto L_088960A0;
    }
L_088960A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088960F0;
      }
      goto L_088960BC;
    }
L_088960BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(483))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088960F0;
      }
      goto L_088960D4;
    }
L_088960D4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088960F0;
      }
      goto L_088960DC;
    }
L_088960DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889618C;
      }
      goto L_088960F0;
    }
L_088960F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889618C;
      }
      goto L_08896100;
    }
L_08896100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889618C;
      }
      goto L_08896118;
    }
L_08896118:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[22] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889614Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 207u, 0x088B1820u>(ctx, &aot_mem) && ctx.pc == 0x0889614Cu) goto L_0889614C;
    return;
L_0889614C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_0889615C;
      }
      goto L_08896154;
    }
L_08896154:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08896180;
      }
      goto L_0889615C;
    }
L_0889615C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[29] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889617Cu);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 23u, 0x088B426Cu>(ctx, &aot_mem) && ctx.pc == 0x0889617Cu) goto L_0889617C;
    return;
L_0889617C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08896180;
L_08896180:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889618C;
      }
      goto L_08896188;
    }
L_08896188:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_0889618C;
L_0889618C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896090;
      }
      goto L_08896194;
    }
L_08896194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0889619C;
L_0889619C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088961C4;
      }
      goto L_088961B4;
    }
L_088961B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088961C8;
      }
      goto L_088961C4;
    }
L_088961C4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088961C8;
L_088961C8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088961FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 10u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08896254;
      }
      goto L_08896224;
    }
L_08896224:
    ctx.gpr[31] = (0x0889622Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 426u, 0x0896DA80u>(ctx, &aot_mem) && ctx.pc == 0x0889622Cu) goto L_0889622C;
    return;
L_0889622C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889624C;
      }
      goto L_08896234;
    }
L_08896234:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(483))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889625C;
      }
      goto L_08896244;
    }
L_08896244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08896260;
      }
      goto L_0889624C;
    }
L_0889624C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08896260;
      }
      goto L_08896254;
    }
L_08896254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08896260;
      }
      goto L_0889625C;
    }
L_0889625C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08896260;
L_08896260:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25484), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7636)));
    ctx.gpr[31] = (0x088962A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088962A8u) goto L_088962A8;
    return;
L_088962A8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[22] = (2235u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(27872));
      if (branch_taken) {
          goto L_088963A8;
      }
      goto L_088962B8;
    }
L_088962B8:
    ctx.gpr[18] = (0u | 4u);
    ctx.gpr[20] = (0u | 65535u);
    ctx.gpr[21] = (0u | 80u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    goto L_088962C8;
L_088962C8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0889639C;
      }
      goto L_088962DC;
    }
L_088962DC:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896324;
      }
      goto L_088962F0;
    }
L_088962F0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(558)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08896318;
      }
      goto L_088962FC;
    }
L_088962FC:
    if (ctx.gpr[5] == ctx.gpr[20]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0889631C;
    }
    goto L_08896304;
L_08896304:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[21];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0889631C;
      }
      goto L_08896314;
    }
L_08896314:
    ctx.gpr[4] = (0u | 1u);
    goto L_08896318;
L_08896318:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0889631C;
L_0889631C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889639C;
      }
      goto L_08896324;
    }
L_08896324:
    ctx.gpr[31] = (0x0889632Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0889632Cu) goto L_0889632C;
    return;
L_0889632C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0889639C;
      }
      goto L_08896334;
    }
L_08896334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25484)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25484), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889639C;
      }
      goto L_08896394;
    }
L_08896394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088963A8;
      }
      goto L_0889639C;
    }
L_0889639C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088962C8;
      }
      goto L_088963A8;
    }
L_088963A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25484)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_088963B0;
L_088963B0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_0889640C;
      }
      goto L_088963C4;
    }
L_088963C4:
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    goto L_088963C8;
L_088963C8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_088963F8;
      }
      goto L_088963DC;
    }
L_088963DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    goto L_088963F8;
L_088963F8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088963C8;
      }
      goto L_0889640C;
    }
L_0889640C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088963B0;
      }
      goto L_08896414;
    }
L_08896414:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896440:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[7] = (2231u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32020));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 352u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0889646Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem) && ctx.pc == 0x0889646Cu) goto L_0889646C;
    return;
L_0889646C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896478:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088964B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 530u, 0x0886A6D0u>(ctx, &aot_mem) && ctx.pc == 0x088964B8u) goto L_088964B8;
    return;
L_088964B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    ctx.gpr[17] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6992));
      if (branch_taken) {
          goto L_088964D4;
      }
      goto L_088964C8;
    }
L_088964C8:
    ctx.gpr[31] = (0x088964D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem) && ctx.pc == 0x088964D0u) goto L_088964D0;
    return;
L_088964D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_088964D4;
L_088964D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896508;
      }
      goto L_088964EC;
    }
L_088964EC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896500;
      }
      goto L_088964F4;
    }
L_088964F4:
    ctx.gpr[31] = (0x088964FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem) && ctx.pc == 0x088964FCu) goto L_088964FC;
    return;
L_088964FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08896500;
L_08896500:
    ctx.gpr[31] = (0x08896508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 93u, 0x0884C8F8u>(ctx, &aot_mem) && ctx.pc == 0x08896508u) goto L_08896508;
    return;
L_08896508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889651C;
      }
      goto L_08896514;
    }
L_08896514:
    ctx.gpr[31] = (0x0889651Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0889651Cu) goto L_0889651C;
    return;
L_0889651C:
    ctx.gpr[31] = (0x08896524u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 47u, 0x089EC3FCu>(ctx, &aot_mem) && ctx.pc == 0x08896524u) goto L_08896524;
    return;
L_08896524:
    ctx.gpr[31] = (0x0889652Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 66u, 0x088807A8u>(ctx, &aot_mem) && ctx.pc == 0x0889652Cu) goto L_0889652C;
    return;
L_0889652C:
    ctx.gpr[31] = (0x08896534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 62u, 0x0882C3C8u>(ctx, &aot_mem) && ctx.pc == 0x08896534u) goto L_08896534;
    return;
L_08896534:
    ctx.gpr[31] = (0x0889653Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 93u, 0x0882C628u>(ctx, &aot_mem) && ctx.pc == 0x0889653Cu) goto L_0889653C;
    return;
L_0889653C:
    ctx.gpr[31] = (0x08896544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 867u, 0x089C7CE8u>(ctx, &aot_mem) && ctx.pc == 0x08896544u) goto L_08896544;
    return;
L_08896544:
    ctx.gpr[17] = (0u | 0u);
    goto L_08896548;
L_08896548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896588;
      }
      goto L_08896554;
    }
L_08896554:
    ctx.gpr[31] = (0x0889655Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x0889655Cu) goto L_0889655C;
    return;
L_0889655C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896584;
      }
      goto L_08896568;
    }
L_08896568:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08896584u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08896584u) goto L_08896584;
    return;
L_08896584:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_08896588;
L_08896588:
    ctx.gpr[31] = (0x08896590u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 87u, 0x089606D0u>(ctx, &aot_mem) && ctx.pc == 0x08896590u) goto L_08896590;
    return;
L_08896590:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(352));
      if (branch_taken) {
          goto L_08896548;
      }
      goto L_088965A0;
    }
L_088965A0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (0u | 5u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[18] = (0u | 0u);
    goto L_088965B0;
L_088965B0:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896604;
      }
      goto L_088965C0;
    }
L_088965C0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_088965C4;
L_088965C4:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088965D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x088965D8u) goto L_088965D8;
    return;
L_088965D8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088965FC;
      }
      goto L_088965E0;
    }
L_088965E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088965FCu);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088965FCu) goto L_088965FC;
    return;
L_088965FC:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088965C4;
      }
      goto L_08896604;
    }
L_08896604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25488)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896680;
      }
      goto L_08896614;
    }
L_08896614:
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    goto L_08896618;
L_08896618:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896678;
      }
      goto L_0889663C;
    }
L_0889663C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08896678;
      }
      goto L_08896648;
    }
L_08896648:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08896654u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08896654u) goto L_08896654;
    return;
L_08896654:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896678;
      }
      goto L_0889665C;
    }
L_0889665C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08896678u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08896678u) goto L_08896678;
    return;
L_08896678:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08896618;
      }
      goto L_08896680;
    }
L_08896680:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088966D0;
      }
      goto L_0889668C;
    }
L_0889668C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08896690;
L_08896690:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088966A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x088966A4u) goto L_088966A4;
    return;
L_088966A4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088966C8;
      }
      goto L_088966AC;
    }
L_088966AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088966C8u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088966C8u) goto L_088966C8;
    return;
L_088966C8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08896690;
      }
      goto L_088966D0;
    }
L_088966D0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
      if (branch_taken) {
          goto L_088965B0;
      }
      goto L_088966E4;
    }
L_088966E4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    goto L_088966EC;
L_088966EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088966EC;
      }
      goto L_088966FC;
    }
L_088966FC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889676C;
      }
      goto L_08896710;
    }
L_08896710:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889671Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x0889671Cu) goto L_0889671C;
    return;
L_0889671C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896758;
      }
      goto L_08896728;
    }
L_08896728:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08896734u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08896734u) goto L_08896734;
    return;
L_08896734:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896758;
      }
      goto L_0889673C;
    }
L_0889673C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08896758u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08896758u) goto L_08896758;
    return;
L_08896758:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896710;
      }
      goto L_0889676C;
    }
L_0889676C:
    ctx.gpr[31] = (0x08896774u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 771u, 0x08B67310u>(ctx, &aot_mem) && ctx.pc == 0x08896774u) goto L_08896774;
    return;
L_08896774:
    ctx.gpr[31] = (0x0889677Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 49u, 0x08990290u>(ctx, &aot_mem) && ctx.pc == 0x0889677Cu) goto L_0889677C;
    return;
L_0889677C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
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
L_088967AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-720));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(645), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(644), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(643), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(642), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[16] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(641), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    ctx.gpr[23] = (ctx.gpr[23] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[7] = (0u | 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08896840;
      }
      goto L_08896830;
    }
L_08896830:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08896850;
      }
      goto L_08896840;
    }
L_08896840:
    ctx.gpr[31] = (0x08896848u);
    // nop
    goto L_088954BC;
L_08896848:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08896850;
L_08896850:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16880u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
        goto L_08896888;
    }
    goto L_08896888;
L_08896888:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_08896894;
    }
    goto L_08896894;
L_08896894:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
        goto L_088968CC;
    }
    goto L_088968CC;
L_088968CC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_088968D8;
    }
    goto L_088968D8;
L_088968D8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16880u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_08896910;
    }
    goto L_08896910;
L_08896910:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_0889691C;
    }
    goto L_0889691C;
L_0889691C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08896954;
    }
    goto L_08896954;
L_08896954:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08896964;
    }
    goto L_08896964;
L_08896964:
    if (ctx.gpr[18] != ctx.gpr[20]) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(640), static_cast<std::uint8_t>(ctx.gpr[16]));
        goto L_08896978;
    }
    goto L_0889696C;
L_0889696C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08896988;
      }
      goto L_08896974;
    }
L_08896974:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(640), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08896978;
L_08896978:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088969F4;
      }
      goto L_08896980;
    }
L_08896980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08896B38;
      }
      goto L_08896988;
    }
L_08896988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088969C0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x088969C0u) goto L_088969C0;
    return;
L_088969C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x088969ECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_088969EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_088969F4;
    }
L_088969F4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896A9C;
      }
      goto L_08896A00;
    }
L_08896A00:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896A94;
      }
      goto L_08896A10;
    }
L_08896A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08896A48u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08896A48u) goto L_08896A48;
    return;
L_08896A48:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08896A74u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08896A74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896A84;
      }
      goto L_08896A7C;
    }
L_08896A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896A84;
    }
L_08896A84:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896A10;
      }
      goto L_08896A94;
    }
L_08896A94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08896B30;
      }
      goto L_08896A9C;
    }
L_08896A9C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896B30;
      }
      goto L_08896AAC;
    }
L_08896AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08896AE4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08896AE4u) goto L_08896AE4;
    return;
L_08896AE4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08896B10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08896B10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896B20;
      }
      goto L_08896B18;
    }
L_08896B18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896B20;
    }
L_08896B20:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896AAC;
      }
      goto L_08896B30;
    }
L_08896B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896B38;
    }
L_08896B38:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08896C84;
      }
      goto L_08896B40;
    }
L_08896B40:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896BE8;
      }
      goto L_08896B4C;
    }
L_08896B4C:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896BE0;
      }
      goto L_08896B5C;
    }
L_08896B5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08896B94u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08896B94u) goto L_08896B94;
    return;
L_08896B94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08896BC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08896BC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896BD0;
      }
      goto L_08896BC8;
    }
L_08896BC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896BD0;
    }
L_08896BD0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896B5C;
      }
      goto L_08896BE0;
    }
L_08896BE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08896C7C;
      }
      goto L_08896BE8;
    }
L_08896BE8:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896C7C;
      }
      goto L_08896BF8;
    }
L_08896BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08896C30u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08896C30u) goto L_08896C30;
    return;
L_08896C30:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08896C5Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08896C5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896C6C;
      }
      goto L_08896C64;
    }
L_08896C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896C6C;
    }
L_08896C6C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896BF8;
      }
      goto L_08896C7C;
    }
L_08896C7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896C84;
    }
L_08896C84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889726C;
      }
      goto L_08896C9C;
    }
L_08896C9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[14];
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.gpr[6] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[6] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_08896CEC;
    }
    goto L_08896CEC;
L_08896CEC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_08896CF8;
    }
    goto L_08896CF8;
L_08896CF8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16880u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
        goto L_08896D30;
    }
    goto L_08896D30;
L_08896D30:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_08896D3C;
    }
    goto L_08896D3C;
L_08896D3C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
        goto L_08896D74;
    }
    goto L_08896D74;
L_08896D74:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08896D80;
    }
    goto L_08896D80;
L_08896D80:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
        goto L_08896DB8;
    }
    goto L_08896DB8;
L_08896DB8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08896DC4;
    }
    goto L_08896DC4;
L_08896DC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-29));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[6] = (16840u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08896E1C;
    }
    goto L_08896E1C;
L_08896E1C:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08896E2C;
    }
    goto L_08896E2C;
L_08896E2C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896ED4;
      }
      goto L_08896E38;
    }
L_08896E38:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896ECC;
      }
      goto L_08896E44;
    }
L_08896E44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[17]);
    goto L_08896E48;
L_08896E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08896E80u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08896E80u) goto L_08896E80;
    return;
L_08896E80:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08896EACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08896EAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
      if (branch_taken) {
          goto L_08896EBC;
      }
      goto L_08896EB4;
    }
L_08896EB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896EBC;
    }
L_08896EBC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[17]);
        goto L_08896E48;
    }
    goto L_08896ECC;
L_08896ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08896F68;
      }
      goto L_08896ED4;
    }
L_08896ED4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896F68;
      }
      goto L_08896EE0;
    }
L_08896EE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[17]);
    goto L_08896EE4;
L_08896EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08896F1Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08896F1Cu) goto L_08896F1C;
    return;
L_08896F1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08896F48u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08896F48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
      if (branch_taken) {
          goto L_08896F58;
      }
      goto L_08896F50;
    }
L_08896F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896F58;
    }
L_08896F58:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[17]);
        goto L_08896EE4;
    }
    goto L_08896F68;
L_08896F68:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897130;
      }
      goto L_08896F7C;
    }
L_08896F7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-29));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[6] = (16840u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
        goto L_08896FD4;
    }
    goto L_08896FD4;
L_08896FD4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08896FE0;
    }
    goto L_08896FE0;
L_08896FE0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897088;
      }
      goto L_08896FEC;
    }
L_08896FEC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897080;
      }
      goto L_08896FF8;
    }
L_08896FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897034u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08897034u) goto L_08897034;
    return;
L_08897034:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08897060u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08897060:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
      if (branch_taken) {
          goto L_08897070;
      }
      goto L_08897068;
    }
L_08897068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08897070;
    }
L_08897070:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896FF8;
      }
      goto L_08897080;
    }
L_08897080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889711C;
      }
      goto L_08897088;
    }
L_08897088:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889711C;
      }
      goto L_08897094;
    }
L_08897094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088970D0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x088970D0u) goto L_088970D0;
    return;
L_088970D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x088970FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_088970FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
      if (branch_taken) {
          goto L_0889710C;
      }
      goto L_08897104;
    }
L_08897104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_0889710C;
    }
L_0889710C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897094;
      }
      goto L_0889711C;
    }
L_0889711C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896F7C;
      }
      goto L_08897130;
    }
L_08897130:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
      if (branch_taken) {
          goto L_088971D4;
      }
      goto L_0889713C;
    }
L_0889713C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088971CC;
      }
      goto L_08897148;
    }
L_08897148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897180u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08897180u) goto L_08897180;
    return;
L_08897180:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x088971ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_088971AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088971BC;
      }
      goto L_088971B4;
    }
L_088971B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_088971BC;
    }
L_088971BC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897148;
      }
      goto L_088971CC;
    }
L_088971CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897264;
      }
      goto L_088971D4;
    }
L_088971D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897264;
      }
      goto L_088971E0;
    }
L_088971E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897218u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08897218u) goto L_08897218;
    return;
L_08897218:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08897244u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08897244:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897254;
      }
      goto L_0889724C;
    }
L_0889724C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08897254;
    }
L_08897254:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088971E0;
      }
      goto L_08897264;
    }
L_08897264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897834;
      }
      goto L_0889726C;
    }
L_0889726C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[14];
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.gpr[6] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[6] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_088972BC;
    }
    goto L_088972BC;
L_088972BC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_088972C8;
    }
    goto L_088972C8;
L_088972C8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16880u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
        goto L_08897300;
    }
    goto L_08897300;
L_08897300:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_0889730C;
    }
    goto L_0889730C;
L_0889730C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
        goto L_08897344;
    }
    goto L_08897344;
L_08897344:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08897350;
    }
    goto L_08897350;
L_08897350:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
        goto L_08897388;
    }
    goto L_08897388;
L_08897388:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08897394;
    }
    goto L_08897394;
L_08897394:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-30));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[6] = (16840u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_088973EC;
    }
    goto L_088973EC;
L_088973EC:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_088973FC;
    }
    goto L_088973FC;
L_088973FC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088974A4;
      }
      goto L_08897408;
    }
L_08897408:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889749C;
      }
      goto L_08897414;
    }
L_08897414:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[17]);
    goto L_08897418;
L_08897418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897450u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08897450u) goto L_08897450;
    return;
L_08897450:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x0889747Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_0889747C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
      if (branch_taken) {
          goto L_0889748C;
      }
      goto L_08897484;
    }
L_08897484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_0889748C;
    }
L_0889748C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[17]);
        goto L_08897418;
    }
    goto L_0889749C;
L_0889749C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897538;
      }
      goto L_088974A4;
    }
L_088974A4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897538;
      }
      goto L_088974B0;
    }
L_088974B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[17]);
    goto L_088974B4;
L_088974B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088974ECu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x088974ECu) goto L_088974EC;
    return;
L_088974EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08897518u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08897518:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
      if (branch_taken) {
          goto L_08897528;
      }
      goto L_08897520;
    }
L_08897520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08897528;
    }
L_08897528:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[17]);
        goto L_088974B4;
    }
    goto L_08897538;
L_08897538:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897700;
      }
      goto L_0889754C;
    }
L_0889754C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-30));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[6] = (16840u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
        goto L_088975A4;
    }
    goto L_088975A4;
L_088975A4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_088975B0;
    }
    goto L_088975B0;
L_088975B0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897658;
      }
      goto L_088975BC;
    }
L_088975BC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897650;
      }
      goto L_088975C8;
    }
L_088975C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897604u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08897604u) goto L_08897604;
    return;
L_08897604:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08897630u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08897630:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
      if (branch_taken) {
          goto L_08897640;
      }
      goto L_08897638;
    }
L_08897638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08897640;
    }
L_08897640:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088975C8;
      }
      goto L_08897650;
    }
L_08897650:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088976EC;
      }
      goto L_08897658;
    }
L_08897658:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088976EC;
      }
      goto L_08897664;
    }
L_08897664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088976A0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x088976A0u) goto L_088976A0;
    return;
L_088976A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x088976CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_088976CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
      if (branch_taken) {
          goto L_088976DC;
      }
      goto L_088976D4;
    }
L_088976D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_088976DC;
    }
L_088976DC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897664;
      }
      goto L_088976EC;
    }
L_088976EC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889754C;
      }
      goto L_08897700;
    }
L_08897700:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
      if (branch_taken) {
          goto L_088977A4;
      }
      goto L_0889770C;
    }
L_0889770C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889779C;
      }
      goto L_08897718;
    }
L_08897718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897750u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08897750u) goto L_08897750;
    return;
L_08897750:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x0889777Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_0889777C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889778C;
      }
      goto L_08897784;
    }
L_08897784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_0889778C;
    }
L_0889778C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897718;
      }
      goto L_0889779C;
    }
L_0889779C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897834;
      }
      goto L_088977A4;
    }
L_088977A4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897834;
      }
      goto L_088977B0;
    }
L_088977B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088977E8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x088977E8u) goto L_088977E8;
    return;
L_088977E8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08897814u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08897814:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897824;
      }
      goto L_0889781C;
    }
L_0889781C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08897824;
    }
L_08897824:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088977B0;
      }
      goto L_08897834;
    }
L_08897834:
    ctx.gpr[2] = (0u | 1u);
    goto L_08897838;
L_08897838:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889786C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-768));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(694), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(693), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(692), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(691), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(690), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(780)));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(689), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(784)));
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[9] = (0u | 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08897920;
      }
      goto L_08897910;
    }
L_08897910:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08897930;
      }
      goto L_08897920;
    }
L_08897920:
    ctx.gpr[31] = (0x08897928u);
    // nop
    goto L_088954BC;
L_08897928:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08897930;
L_08897930:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (50454u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08897998;
      }
      goto L_08897954;
    }
L_08897954:
    ctx.gpr[5] = (17608u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (50426u << 16u);
      if (branch_taken) {
          goto L_08897998;
      }
      goto L_0889796C;
    }
L_0889796C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (17658u << 16u);
      if (branch_taken) {
          goto L_08897998;
      }
      goto L_08897980;
    }
L_08897980:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0889799C;
      }
      goto L_08897994;
    }
L_08897994:
    ctx.gpr[4] = (0u | 1u);
    goto L_08897998;
L_08897998:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0889799C;
L_0889799C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088979CC;
      }
      goto L_088979A4;
    }
L_088979A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (50454u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088979D4;
      }
      goto L_088979C4;
    }
L_088979C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08897A1C;
      }
      goto L_088979CC;
    }
L_088979CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 92u, 0x08898C70u>(ctx, &aot_mem); return;
      }
      goto L_088979D4;
    }
L_088979D4:
    ctx.gpr[5] = (17608u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (50426u << 16u);
      if (branch_taken) {
          goto L_08897A18;
      }
      goto L_088979EC;
    }
L_088979EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (17658u << 16u);
      if (branch_taken) {
          goto L_08897A18;
      }
      goto L_08897A00;
    }
L_08897A00:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08897A1C;
      }
      goto L_08897A14;
    }
L_08897A14:
    ctx.gpr[4] = (0u | 1u);
    goto L_08897A18;
L_08897A18:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08897A1C;
L_08897A1C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897A68;
      }
      goto L_08897A24;
    }
L_08897A24:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[8] = (16880u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08897A70;
      }
      goto L_08897A60;
    }
L_08897A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08897A78;
      }
      goto L_08897A68;
    }
L_08897A68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 92u, 0x08898C70u>(ctx, &aot_mem); return;
      }
      goto L_08897A70;
    }
L_08897A70:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08897A78;
L_08897A78:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
        goto L_08897A84;
    }
    goto L_08897A84;
L_08897A84:
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
        goto L_08897A94;
    }
    goto L_08897A94;
L_08897A94:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_08897AA0;
    }
    goto L_08897AA0;
L_08897AA0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (0u | 49u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_08897AE0;
    }
    goto L_08897AE0;
L_08897AE0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
        goto L_08897AEC;
    }
    goto L_08897AEC;
L_08897AEC:
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
        goto L_08897AFC;
    }
    goto L_08897AFC;
L_08897AFC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08897B08;
    }
    goto L_08897B08;
L_08897B08:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (0u | 49u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_08897B48;
    }
    goto L_08897B48;
L_08897B48:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
        goto L_08897B54;
    }
    goto L_08897B54;
L_08897B54:
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
        goto L_08897B64;
    }
    goto L_08897B64;
L_08897B64:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_08897B70;
    }
    goto L_08897B70;
L_08897B70:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[8] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
        goto L_08897BB0;
    }
    goto L_08897BB0;
L_08897BB0:
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
        goto L_08897BC0;
    }
    goto L_08897BC0;
L_08897BC0:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08897BD0;
    }
    goto L_08897BD0;
L_08897BD0:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08897BE0;
    }
    goto L_08897BE0;
L_08897BE0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (ctx.gpr[18] != ctx.gpr[20]) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(688), static_cast<std::uint8_t>(ctx.gpr[16]));
        goto L_08897C00;
    }
    goto L_08897BF4;
L_08897BF4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08897C10;
      }
      goto L_08897BFC;
    }
L_08897BFC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(688), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08897C00;
L_08897C00:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08897C9C;
      }
      goto L_08897C08;
    }
L_08897C08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897E28;
      }
      goto L_08897C10;
    }
L_08897C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897C48u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08897C48u) goto L_08897C48;
    return;
L_08897C48:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(693)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(689)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[31] = (0x08897C94u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_08895844;
L_08897C94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 92u, 0x08898C70u>(ctx, &aot_mem); return;
      }
      goto L_08897C9C;
    }
L_08897C9C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897D58;
      }
      goto L_08897CA8;
    }
L_08897CA8:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897D50;
      }
      goto L_08897CB8;
    }
L_08897CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897CF0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08897CF0u) goto L_08897CF0;
    return;
L_08897CF0:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(693)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(689)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[31] = (0x08897D40u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_08895844;
L_08897D40:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897CB8;
      }
      goto L_08897D50;
    }
L_08897D50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897E00;
      }
      goto L_08897D58;
    }
L_08897D58:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897E00;
      }
      goto L_08897D68;
    }
L_08897D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897DA0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08897DA0u) goto L_08897DA0;
    return;
L_08897DA0:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(693)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(689)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[31] = (0x08897DF0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_08895844;
L_08897DF0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897D68;
      }
      goto L_08897E00;
    }
L_08897E00:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08897E20;
    }
    goto L_08897E20;
L_08897E20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 92u, 0x08898C70u>(ctx, &aot_mem); return;
      }
      goto L_08897E28;
    }
L_08897E28:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08897FBC;
      }
      goto L_08897E30;
    }
L_08897E30:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897EEC;
      }
      goto L_08897E3C;
    }
L_08897E3C:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897EE4;
      }
      goto L_08897E4C;
    }
L_08897E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897E84u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08897E84u) goto L_08897E84;
    return;
L_08897E84:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(693)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(689)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[31] = (0x08897ED4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_08895844;
L_08897ED4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897E4C;
      }
      goto L_08897EE4;
    }
L_08897EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897F94;
      }
      goto L_08897EEC;
    }
L_08897EEC:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897F94;
      }
      goto L_08897EFC;
    }
L_08897EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897F34u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem) && ctx.pc == 0x08897F34u) goto L_08897F34;
    return;
L_08897F34:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(693)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(689)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[31] = (0x08897F84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_08895844;
L_08897F84:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897EFC;
      }
      goto L_08897F94;
    }
L_08897F94:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08897FB4;
    }
    goto L_08897FB4;
L_08897FB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 92u, 0x08898C70u>(ctx, &aot_mem); return;
      }
      goto L_08897FBC;
    }
L_08897FBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 46u, 0x08898614u>(ctx, &aot_mem); return;
      }
      goto L_08897FD4;
    }
L_08897FD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[14];
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.gpr[6] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.pc = 0x08898000u; return;
}

void recomp_unit_0036(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0036_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_36(Runtime &runtime) {
    runtime.register_generated_unit(36u, 0x08894000u, 16384u, &recomp_unit_0036, &recomp_unit_0036_entry);
    runtime.register_function(0x08894000u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889402Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894060u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894068u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894078u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894080u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894094u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889409Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894108u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894118u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894150u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894204u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894244u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894298u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889430Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894314u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894318u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894324u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889433Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894354u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894390u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894398u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894418u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894514u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894528u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889456Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889458Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894594u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894618u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894620u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894624u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889462Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894668u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894680u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894688u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894698u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894700u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894708u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889471Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894724u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894730u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894744u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894750u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894764u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894780u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889480Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894814u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889481Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894824u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889482Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894838u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894840u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894848u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894850u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889485Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894864u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894880u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894888u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894898u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894900u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894904u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889490Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889491Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894924u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894938u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894940u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894944u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894950u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894970u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894984u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894998u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894AB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894AC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BD0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CCCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889500Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895018u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895028u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895034u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895070u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895098u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088950C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088950ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088950FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889510Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895150u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895210u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895220u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895234u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895244u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889524Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895254u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895260u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895268u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895270u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889527Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895284u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895290u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895298u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895300u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895340u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895370u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895384u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889538Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889539Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895400u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895420u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895430u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895438u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889544Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895454u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895464u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895478u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895490u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895498u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895514u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895520u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895538u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895544u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889555Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895568u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895580u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895590u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895598u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895610u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895618u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895630u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895638u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895650u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895658u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895670u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895678u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895680u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895688u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895690u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895698u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895700u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895708u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895720u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895728u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895740u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895748u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895750u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895758u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895760u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895768u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895780u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895788u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895800u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895808u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895810u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895814u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895844u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889591Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895940u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895964u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895988u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895990u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895DA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895DCCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895DF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FE8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896024u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896080u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896090u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896100u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896118u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889614Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896154u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889615Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889617Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896180u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896188u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889618Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896194u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889619Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896224u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889622Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896234u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896244u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889624Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896254u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889625Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896260u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896270u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896304u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896314u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896318u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889631Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896324u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889632Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896334u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896394u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889639Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889640Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896414u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896440u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889646Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896478u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896500u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896508u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896514u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889651Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896524u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889652Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896534u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889653Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896544u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896548u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896554u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889655Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896568u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896584u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896588u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896590u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896604u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896614u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896618u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889663Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896648u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896654u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889665Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896678u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896680u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889668Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896690u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896710u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889671Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896728u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896734u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889673Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896758u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889676Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896774u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889677Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896830u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896840u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896848u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896850u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896888u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896894u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896910u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889691Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896954u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896964u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889696Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896974u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896978u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896980u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896988u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896AACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896AE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896BC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896BC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896BD0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896BE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896BE8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896BF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896EACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896EB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896EBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896ECCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896ED4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896EE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896EE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897034u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897060u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897068u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897070u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897080u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897088u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897094u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897104u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889710Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889711Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897130u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889713Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897148u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897180u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897218u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897244u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889724Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897254u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897264u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889726Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897300u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889730Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897344u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897350u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897388u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897394u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897408u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897414u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897418u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897450u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889747Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897484u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889748Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889749Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897518u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897520u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897528u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897538u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889754Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897604u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897630u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897638u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897640u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897650u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897658u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897664u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897700u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889770Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897718u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897750u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889777Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897784u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889778Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889779Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897814u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889781Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897824u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897834u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897838u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889786Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897910u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897920u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897928u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897930u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897954u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889796Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897980u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897994u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897998u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889799Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897AA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897AE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897AECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897AFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BD0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897ED4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FD4u, &recomp_unit_0036, "recomp_unit_0036");
}
} // namespace psprecomp
