#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0091[4095] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 19, 0, 20, 0,
    21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 0, 33, 0,
    34, 0, 35, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 45, 0,
    46, 47, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 0, 59,
    0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 65, 0, 66, 0, 0, 0, 0, 67, 0, 68, 69, 0, 70,
    0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0,
    0, 84, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 91, 92, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95,
    0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 100, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125,
    0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 131, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 142, 143, 0, 144, 0, 0, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0,
    0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 187, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0,
    194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0,
    0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0,
    206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 213, 0, 0, 214, 0, 215, 0,
    0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0,
    0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 244, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 256, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 260,
    0, 0, 261, 0, 262, 0, 0, 263, 0, 264, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0,
    0, 0, 276, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 291, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0,
    297, 0, 0, 0, 298, 0, 299, 0, 300, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 303, 0, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307,
    0, 0, 308, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 312, 0, 0, 0, 313, 0, 0, 314, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 325,
    0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 334, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0,
    0, 338, 0, 0, 0, 339, 0, 340, 0, 341, 0, 0, 342, 0, 343, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0,
    0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 352, 353, 0, 0, 0, 0,
    354, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 361, 0,
    0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0,
    0, 0, 0, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 0, 0, 0, 372, 373, 374, 0, 375, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 382, 0, 383, 0, 0, 0, 384, 0, 385, 0, 0, 386, 0, 0, 0, 0, 387, 0, 388,
    0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 391, 392, 0, 0, 0, 393, 0, 0, 0, 0, 394, 395, 0, 0, 396, 397, 0, 0, 0, 398, 0, 399,
    0, 400, 0, 401, 0, 402, 403, 0, 404, 0, 405, 0, 0, 0, 406, 0, 407, 0, 408, 0, 409, 0, 410, 411, 0, 412, 0, 413, 0, 0, 414, 0,
    415, 0, 416, 417, 0, 418, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    422, 0, 0, 423, 424, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 431, 0, 0, 432,
    0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0,
    0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 458, 0, 459, 0, 0, 460, 0, 461, 0, 0, 462, 0, 0, 0, 0, 463,
    0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 467, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 471, 0, 0, 0, 0, 0, 472, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0,
    0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483,
    0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 488, 0, 489, 0, 0, 490, 0, 491, 0, 0, 492, 0, 0, 0,
    0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 495, 496, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 502,
    503, 0, 0, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508, 509, 0, 510, 511, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0,
    520, 0, 521, 0, 522, 0, 523, 0, 0, 0, 524, 0, 0, 525, 0, 526, 0, 0, 527, 0, 528, 0, 0, 0, 529, 0, 0, 530, 0, 0, 531, 0,
    532, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 537, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0,
    0, 541, 0, 0, 542, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 546, 0, 547, 0, 548, 0, 0, 0, 0, 549, 550, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 554,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0,
    0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 560, 561, 562, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 567, 568, 569, 0, 0,
    570, 0, 0, 571, 0, 572, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 577, 0, 0, 578, 0, 0, 579, 0,
    580, 581, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 584, 585, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0,
    0, 0, 0, 589, 0, 0, 590, 0, 591, 0, 592, 0, 0, 0, 593, 0, 0, 0, 594, 0, 595, 0, 596, 0, 597, 0, 0, 598, 0, 599, 600, 0,
    601, 0, 602, 0, 0, 603, 0, 604, 605, 0, 606, 0, 607, 0, 0, 608, 0, 0, 0, 609, 0, 0, 610, 0, 0, 611, 612, 0, 0, 0, 613, 0,
    0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 617, 0, 618, 0, 619, 620, 0, 0, 0, 0, 0, 0,
    621, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 627, 628, 0, 0, 0, 629, 0, 630, 0, 631, 0, 632, 633, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0,
    0, 0, 0, 0, 0, 635, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0,
    0, 0, 641, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 647, 0, 0,
    0, 0, 648, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 652, 0, 653, 0, 0, 654, 0, 0, 0,
    655, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 661, 0,
    0, 662, 0, 663, 0, 0, 664, 0, 665, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 671,
    0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 676, 0, 0, 677, 0, 0, 0,
    0, 678, 0, 679, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 684, 0, 0, 685, 0, 0,
    0, 0, 686, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 690, 0, 691, 0, 0, 692, 0, 693, 0, 0, 0, 0, 694, 0, 0,
    0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 699, 0, 700, 701,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0, 705, 0, 706, 0, 0, 0, 0,
    0, 0, 707, 708, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 713, 714, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0,
    0, 716, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 721, 0, 722, 0, 723, 0, 0, 724, 0, 0,
    0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 728, 729, 0, 730, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 731, 0, 0, 732, 0, 733, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0,
    0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 740, 0, 0, 741, 0, 0, 0, 742, 0, 743, 0, 744, 0, 745, 0, 746,
    0, 747, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 750, 0, 751, 0, 752,
    0, 0, 753, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 0, 0, 762, 0, 0,
    0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 766, 0, 767, 0, 768, 0, 0, 0, 0,
    0, 0, 0, 769, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 772, 0, 773, 0, 774, 0, 0, 0, 0, 0, 0,
    0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 778, 0, 779, 0, 780, 0, 0, 0, 0, 0, 0, 0, 781,
    0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 784, 0, 785, 0, 786, 0, 0, 0, 0, 787, 0, 788, 0, 789, 0,
    790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 792, 0, 0, 793, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 795, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 798, 0, 799, 0, 800, 0, 0, 801, 0, 0, 0, 0, 0, 0, 802, 0, 803, 804, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 807, 0, 808, 0, 0, 809, 0, 0, 0, 0, 0, 0, 810, 0, 811, 812, 0, 0, 0, 0,
    0, 0, 0, 0, 813, 0, 0, 0, 814, 0, 0, 0, 815, 0, 816, 817, 0, 818, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 820,
    0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 823, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 826, 0, 0, 827,
    0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 833,
    0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 836, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 839,
};
void recomp_unit_0091_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08970000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0091[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08970000;
    case 2u: goto L_08970014;
    case 3u: goto L_08970038;
    case 4u: goto L_0897004C;
    case 5u: goto L_08970054;
    case 6u: goto L_0897005C;
    case 7u: goto L_08970074;
    case 8u: goto L_08970088;
    case 9u: goto L_08970094;
    case 10u: goto L_089700B8;
    case 11u: goto L_089700D4;
    case 12u: goto L_089700F4;
    case 13u: goto L_08970110;
    case 14u: goto L_08970118;
    case 15u: goto L_08970134;
    case 16u: goto L_08970150;
    case 17u: goto L_0897015C;
    case 18u: goto L_08970168;
    case 19u: goto L_08970170;
    case 20u: goto L_08970178;
    case 21u: goto L_08970180;
    case 22u: goto L_08970188;
    case 23u: goto L_08970190;
    case 24u: goto L_08970198;
    case 25u: goto L_089701A0;
    case 26u: goto L_089701A8;
    case 27u: goto L_089701B8;
    case 28u: goto L_089701C0;
    case 29u: goto L_089701C8;
    case 30u: goto L_089701D8;
    case 31u: goto L_089701E0;
    case 32u: goto L_089701E8;
    case 33u: goto L_089701F8;
    case 34u: goto L_08970200;
    case 35u: goto L_08970208;
    case 36u: goto L_08970218;
    case 37u: goto L_08970220;
    case 38u: goto L_08970228;
    case 39u: goto L_08970238;
    case 40u: goto L_08970240;
    case 41u: goto L_08970248;
    case 42u: goto L_08970258;
    case 43u: goto L_08970260;
    case 44u: goto L_08970268;
    case 45u: goto L_08970278;
    case 46u: goto L_08970280;
    case 47u: goto L_08970284;
    case 48u: goto L_0897028C;
    case 49u: goto L_08970298;
    case 50u: goto L_089702A4;
    case 51u: goto L_089702B4;
    case 52u: goto L_089702BC;
    case 53u: goto L_089702C4;
    case 54u: goto L_089702CC;
    case 55u: goto L_089702D4;
    case 56u: goto L_089702DC;
    case 57u: goto L_089702E4;
    case 58u: goto L_089702EC;
    case 59u: goto L_089702FC;
    case 60u: goto L_0897030C;
    case 61u: goto L_0897031C;
    case 62u: goto L_0897032C;
    case 63u: goto L_0897033C;
    case 64u: goto L_08970348;
    case 65u: goto L_0897034C;
    case 66u: goto L_08970354;
    case 67u: goto L_08970368;
    case 68u: goto L_08970370;
    case 69u: goto L_08970374;
    case 70u: goto L_0897037C;
    case 71u: goto L_08970388;
    case 72u: goto L_0897039C;
    case 73u: goto L_089703A4;
    case 74u: goto L_089703AC;
    case 75u: goto L_089703C8;
    case 76u: goto L_08970420;
    case 77u: goto L_0897042C;
    case 78u: goto L_08970438;
    case 79u: goto L_08970440;
    case 80u: goto L_08970444;
    case 81u: goto L_0897045C;
    case 82u: goto L_08970464;
    case 83u: goto L_08970470;
    case 84u: goto L_08970484;
    case 85u: goto L_0897048C;
    case 86u: goto L_08970494;
    case 87u: goto L_089704A0;
    case 88u: goto L_089704B0;
    case 89u: goto L_089704B8;
    case 90u: goto L_089704C8;
    case 91u: goto L_089704D0;
    case 92u: goto L_089704D4;
    case 93u: goto L_089704DC;
    case 94u: goto L_089704E8;
    case 95u: goto L_089704FC;
    case 96u: goto L_08970504;
    case 97u: goto L_0897050C;
    case 98u: goto L_08970518;
    case 99u: goto L_08970528;
    case 100u: goto L_08970530;
    case 101u: goto L_08970534;
    case 102u: goto L_0897053C;
    case 103u: goto L_08970578;
    case 104u: goto L_08970580;
    case 105u: goto L_0897058C;
    case 106u: goto L_08970598;
    case 107u: goto L_089705A4;
    case 108u: goto L_089705B0;
    case 109u: goto L_089705BC;
    case 110u: goto L_089705C8;
    case 111u: goto L_089705D4;
    case 112u: goto L_089705E8;
    case 113u: goto L_0897062C;
    case 114u: goto L_08970638;
    case 115u: goto L_0897065C;
    case 116u: goto L_08970680;
    case 117u: goto L_089706A4;
    case 118u: goto L_089706C8;
    case 119u: goto L_08970754;
    case 120u: goto L_08970798;
    case 121u: goto L_089707A0;
    case 122u: goto L_089707AC;
    case 123u: goto L_089707B4;
    case 124u: goto L_089707C8;
    case 125u: goto L_089707FC;
    case 126u: goto L_08970810;
    case 127u: goto L_08970818;
    case 128u: goto L_08970844;
    case 129u: goto L_0897084C;
    case 130u: goto L_08970870;
    case 131u: goto L_08970874;
    case 132u: goto L_0897088C;
    case 133u: goto L_089708A0;
    case 134u: goto L_089708B4;
    case 135u: goto L_089708F4;
    case 136u: goto L_08970904;
    case 137u: goto L_08970914;
    case 138u: goto L_08970944;
    case 139u: goto L_08970954;
    case 140u: goto L_0897095C;
    case 141u: goto L_08970980;
    case 142u: goto L_08970990;
    case 143u: goto L_08970994;
    case 144u: goto L_0897099C;
    case 145u: goto L_089709AC;
    case 146u: goto L_089709B4;
    case 147u: goto L_089709BC;
    case 148u: goto L_089709C4;
    case 149u: goto L_089709CC;
    case 150u: goto L_089709D4;
    case 151u: goto L_089709E0;
    case 152u: goto L_089709E8;
    case 153u: goto L_08970A08;
    case 154u: goto L_08970A28;
    case 155u: goto L_08970A48;
    case 156u: goto L_08970A68;
    case 157u: goto L_08970A78;
    case 158u: goto L_08970A9C;
    case 159u: goto L_08970AA8;
    case 160u: goto L_08970AAC;
    case 161u: goto L_08970ABC;
    case 162u: goto L_08970AD4;
    case 163u: goto L_08970AE0;
    case 164u: goto L_08970AF0;
    case 165u: goto L_08970B08;
    case 166u: goto L_08970B14;
    case 167u: goto L_08970B24;
    case 168u: goto L_08970B2C;
    case 169u: goto L_08970B40;
    case 170u: goto L_08970B48;
    case 171u: goto L_08970B58;
    case 172u: goto L_08970B64;
    case 173u: goto L_08970BB4;
    case 174u: goto L_08970BD0;
    case 175u: goto L_08970BD8;
    case 176u: goto L_08970C5C;
    case 177u: goto L_08970CBC;
    case 178u: goto L_08970CD0;
    case 179u: goto L_08970CE0;
    case 180u: goto L_08970CF4;
    case 181u: goto L_08970D18;
    case 182u: goto L_08970D24;
    case 183u: goto L_08970D30;
    case 184u: goto L_08970D58;
    case 185u: goto L_08970D60;
    case 186u: goto L_08970D80;
    case 187u: goto L_08970D8C;
    case 188u: goto L_08970D90;
    case 189u: goto L_08970DA4;
    case 190u: goto L_08970DAC;
    case 191u: goto L_08970DC0;
    case 192u: goto L_08970DE8;
    case 193u: goto L_08970DF8;
    case 194u: goto L_08970E00;
    case 195u: goto L_08970E08;
    case 196u: goto L_08970E2C;
    case 197u: goto L_08970E38;
    case 198u: goto L_08970E5C;
    case 199u: goto L_08970E68;
    case 200u: goto L_08970E8C;
    case 201u: goto L_08970E98;
    case 202u: goto L_08970EBC;
    case 203u: goto L_08970EC8;
    case 204u: goto L_08970ED4;
    case 205u: goto L_08970EE4;
    case 206u: goto L_08970F00;
    case 207u: goto L_08970F14;
    case 208u: goto L_08970F28;
    case 209u: goto L_08970F38;
    case 210u: goto L_08970F48;
    case 211u: goto L_08970F50;
    case 212u: goto L_08970F58;
    case 213u: goto L_08970F64;
    case 214u: goto L_08970F70;
    case 215u: goto L_08970F78;
    case 216u: goto L_08970F90;
    case 217u: goto L_08970F98;
    case 218u: goto L_08970FA0;
    case 219u: goto L_08970FAC;
    case 220u: goto L_08970FBC;
    case 221u: goto L_08970FC4;
    case 222u: goto L_08970FCC;
    case 223u: goto L_08970FD4;
    case 224u: goto L_08970FEC;
    case 225u: goto L_08971004;
    case 226u: goto L_0897100C;
    case 227u: goto L_0897102C;
    case 228u: goto L_08971034;
    case 229u: goto L_0897103C;
    case 230u: goto L_08971048;
    case 231u: goto L_08971058;
    case 232u: goto L_08971060;
    case 233u: goto L_08971068;
    case 234u: goto L_08971070;
    case 235u: goto L_08971094;
    case 236u: goto L_0897109C;
    case 237u: goto L_089710A4;
    case 238u: goto L_089710B0;
    case 239u: goto L_089710B8;
    case 240u: goto L_089710D4;
    case 241u: goto L_089710F4;
    case 242u: goto L_08971110;
    case 243u: goto L_08971138;
    case 244u: goto L_0897113C;
    case 245u: goto L_08971154;
    case 246u: goto L_08971160;
    case 247u: goto L_08971174;
    case 248u: goto L_089711A0;
    case 249u: goto L_089711AC;
    case 250u: goto L_089711B4;
    case 251u: goto L_089711BC;
    case 252u: goto L_08971200;
    case 253u: goto L_0897120C;
    case 254u: goto L_08971218;
    case 255u: goto L_08971238;
    case 256u: goto L_0897123C;
    case 257u: goto L_08971244;
    case 258u: goto L_0897125C;
    case 259u: goto L_08971268;
    case 260u: goto L_0897127C;
    case 261u: goto L_08971288;
    case 262u: goto L_08971290;
    case 263u: goto L_0897129C;
    case 264u: goto L_089712A4;
    case 265u: goto L_089712B4;
    case 266u: goto L_089712BC;
    case 267u: goto L_089712D0;
    case 268u: goto L_089713A0;
    case 269u: goto L_089713A8;
    case 270u: goto L_089713B4;
    case 271u: goto L_08971408;
    case 272u: goto L_08971508;
    case 273u: goto L_08971510;
    case 274u: goto L_08971540;
    case 275u: goto L_0897156C;
    case 276u: goto L_08971588;
    case 277u: goto L_08971594;
    case 278u: goto L_0897159C;
    case 279u: goto L_089715D0;
    case 280u: goto L_089715DC;
    case 281u: goto L_089715F0;
    case 282u: goto L_089715F8;
    case 283u: goto L_08971660;
    case 284u: goto L_08971668;
    case 285u: goto L_08971670;
    case 286u: goto L_089716A4;
    case 287u: goto L_089716C0;
    case 288u: goto L_08971818;
    case 289u: goto L_0897182C;
    case 290u: goto L_08971834;
    case 291u: goto L_0897183C;
    case 292u: goto L_08971844;
    case 293u: goto L_08971858;
    case 294u: goto L_089718A4;
    case 295u: goto L_089718F0;
    case 296u: goto L_089718F8;
    case 297u: goto L_08971900;
    case 298u: goto L_08971910;
    case 299u: goto L_08971918;
    case 300u: goto L_08971920;
    case 301u: goto L_08971930;
    case 302u: goto L_08971938;
    case 303u: goto L_0897198C;
    case 304u: goto L_0897199C;
    case 305u: goto L_089719A4;
    case 306u: goto L_089719B4;
    case 307u: goto L_089719FC;
    case 308u: goto L_08971A08;
    case 309u: goto L_08971A0C;
    case 310u: goto L_08971A1C;
    case 311u: goto L_08971A2C;
    case 312u: goto L_08971A34;
    case 313u: goto L_08971A44;
    case 314u: goto L_08971A50;
    case 315u: goto L_08971A54;
    case 316u: goto L_08971A80;
    case 317u: goto L_08971AAC;
    case 318u: goto L_08971AD8;
    case 319u: goto L_08971AFC;
    case 320u: goto L_08971B90;
    case 321u: goto L_08971BB4;
    case 322u: goto L_08971BD0;
    case 323u: goto L_08971BE8;
    case 324u: goto L_08971BF4;
    case 325u: goto L_08971BFC;
    case 326u: goto L_08971C10;
    case 327u: goto L_08971C18;
    case 328u: goto L_08971C38;
    case 329u: goto L_08971C40;
    case 330u: goto L_08971C48;
    case 331u: goto L_08971C80;
    case 332u: goto L_08971CA0;
    case 333u: goto L_08971CB8;
    case 334u: goto L_08971CC0;
    case 335u: goto L_08971CC4;
    case 336u: goto L_08971CE4;
    case 337u: goto L_08971CF0;
    case 338u: goto L_08971D04;
    case 339u: goto L_08971D14;
    case 340u: goto L_08971D1C;
    case 341u: goto L_08971D24;
    case 342u: goto L_08971D30;
    case 343u: goto L_08971D38;
    case 344u: goto L_08971D3C;
    case 345u: goto L_08971D68;
    case 346u: goto L_08971D78;
    case 347u: goto L_08971D8C;
    case 348u: goto L_08971D94;
    case 349u: goto L_08971DBC;
    case 350u: goto L_08971DCC;
    case 351u: goto L_08971DD4;
    case 352u: goto L_08971DE8;
    case 353u: goto L_08971DEC;
    case 354u: goto L_08971E00;
    case 355u: goto L_08971E08;
    case 356u: goto L_08971E1C;
    case 357u: goto L_08971E44;
    case 358u: goto L_08971E54;
    case 359u: goto L_08971E60;
    case 360u: goto L_08971E70;
    case 361u: goto L_08971E78;
    case 362u: goto L_08971E98;
    case 363u: goto L_08971EC8;
    case 364u: goto L_08971ED4;
    case 365u: goto L_08971EE4;
    case 366u: goto L_08971EF0;
    case 367u: goto L_08971F10;
    case 368u: goto L_08971F18;
    case 369u: goto L_08971F20;
    case 370u: goto L_08971F28;
    case 371u: goto L_08971F30;
    case 372u: goto L_08971F44;
    case 373u: goto L_08971F48;
    case 374u: goto L_08971F4C;
    case 375u: goto L_08971F54;
    case 376u: goto L_08971F58;
    case 377u: goto L_08971F74;
    case 378u: goto L_08971F88;
    case 379u: goto L_08971FC0;
    case 380u: goto L_08971FF8;
    case 381u: goto L_08972030;
    case 382u: goto L_08972034;
    case 383u: goto L_0897203C;
    case 384u: goto L_0897204C;
    case 385u: goto L_08972054;
    case 386u: goto L_08972060;
    case 387u: goto L_08972074;
    case 388u: goto L_0897207C;
    case 389u: goto L_0897208C;
    case 390u: goto L_0897209C;
    case 391u: goto L_089720A8;
    case 392u: goto L_089720AC;
    case 393u: goto L_089720BC;
    case 394u: goto L_089720D0;
    case 395u: goto L_089720D4;
    case 396u: goto L_089720E0;
    case 397u: goto L_089720E4;
    case 398u: goto L_089720F4;
    case 399u: goto L_089720FC;
    case 400u: goto L_08972104;
    case 401u: goto L_0897210C;
    case 402u: goto L_08972114;
    case 403u: goto L_08972118;
    case 404u: goto L_08972120;
    case 405u: goto L_08972128;
    case 406u: goto L_08972138;
    case 407u: goto L_08972140;
    case 408u: goto L_08972148;
    case 409u: goto L_08972150;
    case 410u: goto L_08972158;
    case 411u: goto L_0897215C;
    case 412u: goto L_08972164;
    case 413u: goto L_0897216C;
    case 414u: goto L_08972178;
    case 415u: goto L_08972180;
    case 416u: goto L_08972188;
    case 417u: goto L_0897218C;
    case 418u: goto L_08972194;
    case 419u: goto L_089721A0;
    case 420u: goto L_089721A8;
    case 421u: goto L_089721D8;
    case 422u: goto L_08972200;
    case 423u: goto L_0897220C;
    case 424u: goto L_08972210;
    case 425u: goto L_08972218;
    case 426u: goto L_08972224;
    case 427u: goto L_08972234;
    case 428u: goto L_08972250;
    case 429u: goto L_0897225C;
    case 430u: goto L_08972268;
    case 431u: goto L_08972270;
    case 432u: goto L_0897227C;
    case 433u: goto L_0897228C;
    case 434u: goto L_089722A0;
    case 435u: goto L_089722A8;
    case 436u: goto L_089722B0;
    case 437u: goto L_089722C0;
    case 438u: goto L_089722D4;
    case 439u: goto L_089722DC;
    case 440u: goto L_08972320;
    case 441u: goto L_08972328;
    case 442u: goto L_08972338;
    case 443u: goto L_08972340;
    case 444u: goto L_08972348;
    case 445u: goto L_08972360;
    case 446u: goto L_0897236C;
    case 447u: goto L_08972378;
    case 448u: goto L_08972384;
    case 449u: goto L_08972390;
    case 450u: goto L_089723A8;
    case 451u: goto L_089723B4;
    case 452u: goto L_089723C4;
    case 453u: goto L_089723D0;
    case 454u: goto L_089723D8;
    case 455u: goto L_089723E8;
    case 456u: goto L_08972420;
    case 457u: goto L_08972438;
    case 458u: goto L_08972440;
    case 459u: goto L_08972448;
    case 460u: goto L_08972454;
    case 461u: goto L_0897245C;
    case 462u: goto L_08972468;
    case 463u: goto L_0897247C;
    case 464u: goto L_08972484;
    case 465u: goto L_08972494;
    case 466u: goto L_089724A4;
    case 467u: goto L_089724B0;
    case 468u: goto L_089724B4;
    case 469u: goto L_089724C4;
    case 470u: goto L_089724DC;
    case 471u: goto L_089724E0;
    case 472u: goto L_089724F8;
    case 473u: goto L_08972548;
    case 474u: goto L_08972554;
    case 475u: goto L_08972560;
    case 476u: goto L_08972568;
    case 477u: goto L_08972588;
    case 478u: goto L_089725A0;
    case 479u: goto L_089725B4;
    case 480u: goto L_089725C4;
    case 481u: goto L_089725D4;
    case 482u: goto L_089725E0;
    case 483u: goto L_089725FC;
    case 484u: goto L_08972610;
    case 485u: goto L_08972618;
    case 486u: goto L_08972628;
    case 487u: goto L_08972634;
    case 488u: goto L_08972648;
    case 489u: goto L_08972650;
    case 490u: goto L_0897265C;
    case 491u: goto L_08972664;
    case 492u: goto L_08972670;
    case 493u: goto L_0897268C;
    case 494u: goto L_089726A0;
    case 495u: goto L_089726A8;
    case 496u: goto L_089726AC;
    case 497u: goto L_089726B4;
    case 498u: goto L_089726C4;
    case 499u: goto L_089726D0;
    case 500u: goto L_089726E8;
    case 501u: goto L_089726F4;
    case 502u: goto L_089726FC;
    case 503u: goto L_08972700;
    case 504u: goto L_08972710;
    case 505u: goto L_08972718;
    case 506u: goto L_08972720;
    case 507u: goto L_08972728;
    case 508u: goto L_08972730;
    case 509u: goto L_08972734;
    case 510u: goto L_0897273C;
    case 511u: goto L_08972740;
    case 512u: goto L_08972748;
    case 513u: goto L_08972750;
    case 514u: goto L_08972790;
    case 515u: goto L_089727C8;
    case 516u: goto L_089727D0;
    case 517u: goto L_089727E0;
    case 518u: goto L_089727EC;
    case 519u: goto L_089727F8;
    case 520u: goto L_08972800;
    case 521u: goto L_08972808;
    case 522u: goto L_08972810;
    case 523u: goto L_08972818;
    case 524u: goto L_08972828;
    case 525u: goto L_08972834;
    case 526u: goto L_0897283C;
    case 527u: goto L_08972848;
    case 528u: goto L_08972850;
    case 529u: goto L_08972860;
    case 530u: goto L_0897286C;
    case 531u: goto L_08972878;
    case 532u: goto L_08972880;
    case 533u: goto L_08972888;
    case 534u: goto L_0897289C;
    case 535u: goto L_089728B0;
    case 536u: goto L_089728C0;
    case 537u: goto L_089728CC;
    case 538u: goto L_089728D8;
    case 539u: goto L_089728E8;
    case 540u: goto L_089728F8;
    case 541u: goto L_08972904;
    case 542u: goto L_08972910;
    case 543u: goto L_08972918;
    case 544u: goto L_08972924;
    case 545u: goto L_08972940;
    case 546u: goto L_08972944;
    case 547u: goto L_0897294C;
    case 548u: goto L_08972954;
    case 549u: goto L_08972968;
    case 550u: goto L_0897296C;
    case 551u: goto L_0897299C;
    case 552u: goto L_089729E4;
    case 553u: goto L_089729EC;
    case 554u: goto L_089729FC;
    case 555u: goto L_08972A40;
    case 556u: goto L_08972A48;
    case 557u: goto L_08972A78;
    case 558u: goto L_08972A94;
    case 559u: goto L_08972AA8;
    case 560u: goto L_08972AB0;
    case 561u: goto L_08972AB4;
    case 562u: goto L_08972AB8;
    case 563u: goto L_08972AC0;
    case 564u: goto L_08972ACC;
    case 565u: goto L_08972AD8;
    case 566u: goto L_08972AE4;
    case 567u: goto L_08972AEC;
    case 568u: goto L_08972AF0;
    case 569u: goto L_08972AF4;
    case 570u: goto L_08972B00;
    case 571u: goto L_08972B0C;
    case 572u: goto L_08972B14;
    case 573u: goto L_08972B18;
    case 574u: goto L_08972B34;
    case 575u: goto L_08972B50;
    case 576u: goto L_08972B58;
    case 577u: goto L_08972B60;
    case 578u: goto L_08972B6C;
    case 579u: goto L_08972B78;
    case 580u: goto L_08972B80;
    case 581u: goto L_08972B84;
    case 582u: goto L_08972B8C;
    case 583u: goto L_08972B94;
    case 584u: goto L_08972BB0;
    case 585u: goto L_08972BB4;
    case 586u: goto L_08972BBC;
    case 587u: goto L_08972BC4;
    case 588u: goto L_08972BEC;
    case 589u: goto L_08972C0C;
    case 590u: goto L_08972C18;
    case 591u: goto L_08972C20;
    case 592u: goto L_08972C28;
    case 593u: goto L_08972C38;
    case 594u: goto L_08972C48;
    case 595u: goto L_08972C50;
    case 596u: goto L_08972C58;
    case 597u: goto L_08972C60;
    case 598u: goto L_08972C6C;
    case 599u: goto L_08972C74;
    case 600u: goto L_08972C78;
    case 601u: goto L_08972C80;
    case 602u: goto L_08972C88;
    case 603u: goto L_08972C94;
    case 604u: goto L_08972C9C;
    case 605u: goto L_08972CA0;
    case 606u: goto L_08972CA8;
    case 607u: goto L_08972CB0;
    case 608u: goto L_08972CBC;
    case 609u: goto L_08972CCC;
    case 610u: goto L_08972CD8;
    case 611u: goto L_08972CE4;
    case 612u: goto L_08972CE8;
    case 613u: goto L_08972CF8;
    case 614u: goto L_08972D0C;
    case 615u: goto L_08972D38;
    case 616u: goto L_08972D48;
    case 617u: goto L_08972D50;
    case 618u: goto L_08972D58;
    case 619u: goto L_08972D60;
    case 620u: goto L_08972D64;
    case 621u: goto L_08972D80;
    case 622u: goto L_08972DA4;
    case 623u: goto L_08972DBC;
    case 624u: goto L_08972DC8;
    case 625u: goto L_08972DE8;
    case 626u: goto L_08972E68;
    case 627u: goto L_08972EA0;
    case 628u: goto L_08972EA4;
    case 629u: goto L_08972EB4;
    case 630u: goto L_08972EBC;
    case 631u: goto L_08972EC4;
    case 632u: goto L_08972ECC;
    case 633u: goto L_08972ED0;
    case 634u: goto L_08972EF4;
    case 635u: goto L_08972F14;
    case 636u: goto L_08972F20;
    case 637u: goto L_08972F2C;
    case 638u: goto L_08972F40;
    case 639u: goto L_08972F60;
    case 640u: goto L_08972F68;
    case 641u: goto L_08972F88;
    case 642u: goto L_08972FA0;
    case 643u: goto L_08972FB8;
    case 644u: goto L_08972FC0;
    case 645u: goto L_08972FD4;
    case 646u: goto L_08972FEC;
    case 647u: goto L_08972FF4;
    case 648u: goto L_08973008;
    case 649u: goto L_08973020;
    case 650u: goto L_08973028;
    case 651u: goto L_0897303C;
    case 652u: goto L_0897305C;
    case 653u: goto L_08973064;
    case 654u: goto L_08973070;
    case 655u: goto L_08973080;
    case 656u: goto L_08973084;
    case 657u: goto L_08973098;
    case 658u: goto L_089730AC;
    case 659u: goto L_089730C4;
    case 660u: goto L_089730D8;
    case 661u: goto L_089730F8;
    case 662u: goto L_08973104;
    case 663u: goto L_0897310C;
    case 664u: goto L_08973118;
    case 665u: goto L_08973120;
    case 666u: goto L_0897312C;
    case 667u: goto L_0897313C;
    case 668u: goto L_0897314C;
    case 669u: goto L_08973160;
    case 670u: goto L_08973168;
    case 671u: goto L_0897317C;
    case 672u: goto L_08973198;
    case 673u: goto L_089731AC;
    case 674u: goto L_089731B4;
    case 675u: goto L_089731D8;
    case 676u: goto L_089731E4;
    case 677u: goto L_089731F0;
    case 678u: goto L_08973204;
    case 679u: goto L_0897320C;
    case 680u: goto L_08973220;
    case 681u: goto L_08973234;
    case 682u: goto L_08973254;
    case 683u: goto L_08973260;
    case 684u: goto L_08973268;
    case 685u: goto L_08973274;
    case 686u: goto L_08973288;
    case 687u: goto L_08973290;
    case 688u: goto L_089732A0;
    case 689u: goto L_089732B8;
    case 690u: goto L_089732C4;
    case 691u: goto L_089732CC;
    case 692u: goto L_089732D8;
    case 693u: goto L_089732E0;
    case 694u: goto L_089732F4;
    case 695u: goto L_08973304;
    case 696u: goto L_08973314;
    case 697u: goto L_08973344;
    case 698u: goto L_08973350;
    case 699u: goto L_08973370;
    case 700u: goto L_08973378;
    case 701u: goto L_0897337C;
    case 702u: goto L_08973544;
    case 703u: goto L_08973550;
    case 704u: goto L_0897355C;
    case 705u: goto L_08973564;
    case 706u: goto L_0897356C;
    case 707u: goto L_08973588;
    case 708u: goto L_0897358C;
    case 709u: goto L_089735AC;
    case 710u: goto L_089735C4;
    case 711u: goto L_089735DC;
    case 712u: goto L_08973644;
    case 713u: goto L_0897364C;
    case 714u: goto L_08973650;
    case 715u: goto L_08973670;
    case 716u: goto L_08973684;
    case 717u: goto L_08973690;
    case 718u: goto L_089736A8;
    case 719u: goto L_089736BC;
    case 720u: goto L_089736D0;
    case 721u: goto L_089736D8;
    case 722u: goto L_089736E0;
    case 723u: goto L_089736E8;
    case 724u: goto L_089736F4;
    case 725u: goto L_08973704;
    case 726u: goto L_0897371C;
    case 727u: goto L_08973750;
    case 728u: goto L_08973758;
    case 729u: goto L_0897375C;
    case 730u: goto L_08973764;
    case 731u: goto L_08973798;
    case 732u: goto L_089737A4;
    case 733u: goto L_089737AC;
    case 734u: goto L_089737CC;
    case 735u: goto L_089737E4;
    case 736u: goto L_089737F8;
    case 737u: goto L_08973810;
    case 738u: goto L_0897381C;
    case 739u: goto L_08973838;
    case 740u: goto L_08973840;
    case 741u: goto L_0897384C;
    case 742u: goto L_0897385C;
    case 743u: goto L_08973864;
    case 744u: goto L_0897386C;
    case 745u: goto L_08973874;
    case 746u: goto L_0897387C;
    case 747u: goto L_08973884;
    case 748u: goto L_0897388C;
    case 749u: goto L_089738E0;
    case 750u: goto L_089738EC;
    case 751u: goto L_089738F4;
    case 752u: goto L_089738FC;
    case 753u: goto L_08973908;
    case 754u: goto L_08973910;
    case 755u: goto L_08973924;
    case 756u: goto L_08973944;
    case 757u: goto L_08973960;
    case 758u: goto L_08973988;
    case 759u: goto L_089739B8;
    case 760u: goto L_089739CC;
    case 761u: goto L_089739D8;
    case 762u: goto L_089739F4;
    case 763u: goto L_08973A14;
    case 764u: goto L_08973A2C;
    case 765u: goto L_08973A44;
    case 766u: goto L_08973A5C;
    case 767u: goto L_08973A64;
    case 768u: goto L_08973A6C;
    case 769u: goto L_08973A8C;
    case 770u: goto L_08973AA4;
    case 771u: goto L_08973ABC;
    case 772u: goto L_08973AD4;
    case 773u: goto L_08973ADC;
    case 774u: goto L_08973AE4;
    case 775u: goto L_08973B04;
    case 776u: goto L_08973B1C;
    case 777u: goto L_08973B34;
    case 778u: goto L_08973B4C;
    case 779u: goto L_08973B54;
    case 780u: goto L_08973B5C;
    case 781u: goto L_08973B7C;
    case 782u: goto L_08973B94;
    case 783u: goto L_08973BAC;
    case 784u: goto L_08973BC4;
    case 785u: goto L_08973BCC;
    case 786u: goto L_08973BD4;
    case 787u: goto L_08973BE8;
    case 788u: goto L_08973BF0;
    case 789u: goto L_08973BF8;
    case 790u: goto L_08973C00;
    case 791u: goto L_08973C38;
    case 792u: goto L_08973C40;
    case 793u: goto L_08973C4C;
    case 794u: goto L_08973C54;
    case 795u: goto L_08973C88;
    case 796u: goto L_08973C8C;
    case 797u: goto L_08973CC8;
    case 798u: goto L_08973D04;
    case 799u: goto L_08973D0C;
    case 800u: goto L_08973D14;
    case 801u: goto L_08973D20;
    case 802u: goto L_08973D3C;
    case 803u: goto L_08973D44;
    case 804u: goto L_08973D48;
    case 805u: goto L_08973D6C;
    case 806u: goto L_08973DA8;
    case 807u: goto L_08973DB0;
    case 808u: goto L_08973DB8;
    case 809u: goto L_08973DC4;
    case 810u: goto L_08973DE0;
    case 811u: goto L_08973DE8;
    case 812u: goto L_08973DEC;
    case 813u: goto L_08973E10;
    case 814u: goto L_08973E20;
    case 815u: goto L_08973E30;
    case 816u: goto L_08973E38;
    case 817u: goto L_08973E3C;
    case 818u: goto L_08973E44;
    case 819u: goto L_08973E64;
    case 820u: goto L_08973E7C;
    case 821u: goto L_08973E84;
    case 822u: goto L_08973EAC;
    case 823u: goto L_08973EB4;
    case 824u: goto L_08973EBC;
    case 825u: goto L_08973EE8;
    case 826u: goto L_08973EF0;
    case 827u: goto L_08973EFC;
    case 828u: goto L_08973F04;
    case 829u: goto L_08973F34;
    case 830u: goto L_08973F3C;
    case 831u: goto L_08973F44;
    case 832u: goto L_08973F74;
    case 833u: goto L_08973F7C;
    case 834u: goto L_08973F84;
    case 835u: goto L_08973FB0;
    case 836u: goto L_08973FB8;
    case 837u: goto L_08973FC0;
    case 838u: goto L_08973FF0;
    case 839u: goto L_08973FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08970000:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970014:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970054;
      }
      goto L_08970038;
    }
L_08970038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_0897005C;
      }
      goto L_0897004C;
    }
L_0897004C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970134;
      }
      goto L_08970054;
    }
L_08970054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970134;
      }
      goto L_0897005C;
    }
L_0897005C:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[17] = (2247u << 16u);
    ctx.gpr[4] = (17302u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(17072));
    goto L_08970074;
L_08970074:
    ctx.gpr[5] = (ctx.gpr[18] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(122)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970110;
      }
      goto L_08970088;
    }
L_08970088:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(119)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970110;
      }
      goto L_08970094;
    }
L_08970094:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08970118;
      }
      goto L_089700B8;
    }
L_089700B8:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08970118;
      }
      goto L_089700D4;
    }
L_089700D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08970118;
      }
      goto L_089700F4;
    }
L_089700F4:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08970118;
      }
      goto L_08970110;
    }
L_08970110:
    ctx.gpr[31] = (0x08970118u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089708B4;
L_08970118:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264)));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970074;
      }
      goto L_08970134;
    }
L_08970134:
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
L_08970150:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970170;
      }
      goto L_0897015C;
    }
L_0897015C:
    ctx.gpr[5] = (0u | 246u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08970228;
      }
      goto L_08970168;
    }
L_08970168:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 234u);
      if (branch_taken) {
          goto L_08970178;
      }
      goto L_08970170;
    }
L_08970170:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08970284;
      }
      goto L_08970178;
    }
L_08970178:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 227u);
      if (branch_taken) {
          goto L_08970208;
      }
      goto L_08970180;
    }
L_08970180:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 218u);
      if (branch_taken) {
          goto L_089701E8;
      }
      goto L_08970188;
    }
L_08970188:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 207u);
      if (branch_taken) {
          goto L_08970248;
      }
      goto L_08970190;
    }
L_08970190:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 194u);
      if (branch_taken) {
          goto L_08970268;
      }
      goto L_08970198;
    }
L_08970198:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 193u);
      if (branch_taken) {
          goto L_089701C8;
      }
      goto L_089701A0;
    }
L_089701A0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089701B8;
      }
      goto L_089701A8;
    }
L_089701A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089701C0;
      }
      goto L_089701B8;
    }
L_089701B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08970284;
      }
      goto L_089701C0;
    }
L_089701C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08970284;
      }
      goto L_089701C8;
    }
L_089701C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089701E0;
      }
      goto L_089701D8;
    }
L_089701D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089701B8;
      }
      goto L_089701E0;
    }
L_089701E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08970284;
      }
      goto L_089701E8;
    }
L_089701E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970200;
      }
      goto L_089701F8;
    }
L_089701F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089701B8;
      }
      goto L_08970200;
    }
L_08970200:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08970284;
      }
      goto L_08970208;
    }
L_08970208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970220;
      }
      goto L_08970218;
    }
L_08970218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089701B8;
      }
      goto L_08970220;
    }
L_08970220:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08970284;
      }
      goto L_08970228;
    }
L_08970228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970240;
      }
      goto L_08970238;
    }
L_08970238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089701B8;
      }
      goto L_08970240;
    }
L_08970240:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08970284;
      }
      goto L_08970248;
    }
L_08970248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970260;
      }
      goto L_08970258;
    }
L_08970258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089701B8;
      }
      goto L_08970260;
    }
L_08970260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08970284;
      }
      goto L_08970268;
    }
L_08970268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970280;
      }
      goto L_08970278;
    }
L_08970278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089701B8;
      }
      goto L_08970280;
    }
L_08970280:
    ctx.gpr[2] = (0u | 1u);
    goto L_08970284;
L_08970284:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897028C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089702B4;
      }
      goto L_08970298;
    }
L_08970298:
    ctx.gpr[5] = (0u | 246u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 234u);
      if (branch_taken) {
          goto L_089702BC;
      }
      goto L_089702A4;
    }
L_089702A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08970348;
      }
      goto L_089702B4;
    }
L_089702B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897034C;
      }
      goto L_089702BC;
    }
L_089702BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 227u);
      if (branch_taken) {
          goto L_0897031C;
      }
      goto L_089702C4;
    }
L_089702C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 218u);
      if (branch_taken) {
          goto L_0897030C;
      }
      goto L_089702CC;
    }
L_089702CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 207u);
      if (branch_taken) {
          goto L_0897032C;
      }
      goto L_089702D4;
    }
L_089702D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 194u);
      if (branch_taken) {
          goto L_0897033C;
      }
      goto L_089702DC;
    }
L_089702DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 193u);
      if (branch_taken) {
          goto L_089702FC;
      }
      goto L_089702E4;
    }
L_089702E4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08970348;
      }
      goto L_089702EC;
    }
L_089702EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08970348;
      }
      goto L_089702FC;
    }
L_089702FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08970348;
      }
      goto L_0897030C;
    }
L_0897030C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08970348;
      }
      goto L_0897031C;
    }
L_0897031C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08970348;
      }
      goto L_0897032C;
    }
L_0897032C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08970348;
      }
      goto L_0897033C;
    }
L_0897033C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260)));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260), ctx.gpr[4]);
    goto L_08970348;
L_08970348:
    ctx.gpr[2] = (0u | 0u);
    goto L_0897034C;
L_0897034C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[4] = (ctx.gpr[4] & 127u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08970370;
      }
      goto L_08970368;
    }
L_08970368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08970374;
      }
      goto L_08970370;
    }
L_08970370:
    ctx.gpr[2] = (0u | 0u);
    goto L_08970374;
L_08970374:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897037C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089703A4;
      }
      goto L_08970388;
    }
L_08970388:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089703AC;
      }
      goto L_0897039C;
    }
L_0897039C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897045C;
      }
      goto L_089703A4;
    }
L_089703A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897045C;
      }
      goto L_089703AC;
    }
L_089703AC:
    ctx.gpr[8] = (2247u << 16u);
    ctx.gpr[7] = (17096u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(17072));
    ctx.gpr[7] = (ctx.gpr[10] << 7u);
    goto L_089703C8;
L_089703C8:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[11] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[11] + static_cast<std::uint32_t>(48));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[3] = (ctx.gpr[11] + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[16];
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(48));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[17];
    ctx.fpr[18] = ctx.fpr[13] - ctx.fpr[18];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.fpr[15] = std::sqrt(ctx.fpr[15]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08970444;
      }
      goto L_08970420;
    }
L_08970420:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08970444;
      }
      goto L_0897042C;
    }
L_0897042C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08970440;
      }
      goto L_08970438;
    }
L_08970438:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08970444;
      }
      goto L_08970440;
    }
L_08970440:
    ctx.gpr[2] = (0u | 1u);
    goto L_08970444;
L_08970444:
    ctx.gpr[7] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[7] << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[10] << 7u);
      if (branch_taken) {
          goto L_089703C8;
      }
      goto L_0897045C;
    }
L_0897045C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970464:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897048C;
      }
      goto L_08970470;
    }
L_08970470:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2247u << 16u);
      if (branch_taken) {
          goto L_089704C8;
      }
      goto L_08970484;
    }
L_08970484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17072));
      if (branch_taken) {
          goto L_08970494;
      }
      goto L_0897048C;
    }
L_0897048C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089704D4;
      }
      goto L_08970494;
    }
L_08970494:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089704B8;
      }
      goto L_089704A0;
    }
L_089704A0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(117)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089704B8;
      }
      goto L_089704B0;
    }
L_089704B0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089704D0;
      }
      goto L_089704B8;
    }
L_089704B8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08970494;
      }
      goto L_089704C8;
    }
L_089704C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089704D4;
      }
      goto L_089704D0;
    }
L_089704D0:
    ctx.gpr[2] = (0u | 1u);
    goto L_089704D4;
L_089704D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089704DC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970504;
      }
      goto L_089704E8;
    }
L_089704E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2247u << 16u);
      if (branch_taken) {
          goto L_08970528;
      }
      goto L_089704FC;
    }
L_089704FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17072));
      if (branch_taken) {
          goto L_0897050C;
      }
      goto L_08970504;
    }
L_08970504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08970534;
      }
      goto L_0897050C;
    }
L_0897050C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08970530;
      }
      goto L_08970518;
    }
L_08970518:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0897050C;
      }
      goto L_08970528;
    }
L_08970528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08970534;
      }
      goto L_08970530;
    }
L_08970530:
    ctx.gpr[2] = (0u | 1u);
    goto L_08970534;
L_08970534:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897053C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970580;
      }
      goto L_08970578;
    }
L_08970578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089707C8;
      }
      goto L_08970580;
    }
L_08970580:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0897058Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0897058Cu) goto L_0897058C;
    return;
L_0897058C:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08970598u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08970598u) goto L_08970598;
    return;
L_08970598:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089705A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089705A4u) goto L_089705A4;
    return;
L_089705A4:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089705B0u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089705B0u) goto L_089705B0;
    return;
L_089705B0:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089705BCu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089705BCu) goto L_089705BC;
    return;
L_089705BC:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x089705C8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089705C8u) goto L_089705C8;
    return;
L_089705C8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089705D4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089705D4u) goto L_089705D4;
    return;
L_089705D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_089707C8;
      }
      goto L_089705E8;
    }
L_089705E8:
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (16830u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 42992u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2247u << 16u);
    ctx.gpr[4] = (16646u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (2238u << 16u);
    ctx.gpr[4] = (17302u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(17072));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-272));
    goto L_0897062C;
L_0897062C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089707B4;
      }
      goto L_08970638;
    }
L_08970638:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089707B4;
      }
      goto L_0897065C;
    }
L_0897065C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089707B4;
      }
      goto L_08970680;
    }
L_08970680:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089707B4;
      }
      goto L_089706A4;
    }
L_089706A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089707B4;
      }
      goto L_089706C8;
    }
L_089706C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08970754u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08970754u) goto L_08970754;
    return;
L_08970754:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08970798u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem) && ctx.pc == 0x08970798u) goto L_08970798;
    return;
L_08970798:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089707B4;
      }
      goto L_089707A0;
    }
L_089707A0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089707ACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 527u, 0x08AEE7B0u>(ctx, &aot_mem) && ctx.pc == 0x089707ACu) goto L_089707AC;
    return;
L_089707AC:
    ctx.gpr[31] = (0x089707B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem) && ctx.pc == 0x089707B4u) goto L_089707B4;
    return;
L_089707B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0897062C;
      }
      goto L_089707C8;
    }
L_089707C8:
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
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089707FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2247u << 16u);
      if (branch_taken) {
          goto L_08970844;
      }
      goto L_08970810;
    }
L_08970810:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17072));
    goto L_08970818;
L_08970818:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(117)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08970818;
      }
      goto L_08970844;
    }
L_08970844:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897084C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2247u << 16u);
      if (branch_taken) {
          goto L_089708A0;
      }
      goto L_08970870;
    }
L_08970870:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17072));
    goto L_08970874;
L_08970874:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(123)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0897088Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 857u, 0x0896FD6Cu>(ctx, &aot_mem) && ctx.pc == 0x0897088Cu) goto L_0897088C;
    return;
L_0897088C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08970874;
      }
      goto L_089708A0;
    }
L_089708A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089708B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08970904;
      }
      goto L_089708F4;
    }
L_089708F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(117)));
        goto L_08970994;
    }
    goto L_08970904;
L_08970904:
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32304));
    ctx.gpr[31] = (0x08970914u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 54u, 0x08A1C648u>(ctx, &aot_mem) && ctx.pc == 0x08970914u) goto L_08970914;
    return;
L_08970914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08970944;
    }
    goto L_08970944;
L_08970944:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(117)));
        goto L_08970994;
    }
    goto L_08970954;
L_08970954:
    ctx.gpr[31] = (0x0897095Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 54u, 0x08A1C648u>(ctx, &aot_mem) && ctx.pc == 0x0897095Cu) goto L_0897095C;
    return;
L_0897095C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08970980;
    }
    goto L_08970980;
L_08970980:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897099C;
      }
      goto L_08970990;
    }
L_08970990:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(117)));
    goto L_08970994;
L_08970994:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08971510;
    }
    goto L_0897099C;
L_0897099C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(117)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089712BC;
      }
      goto L_089709AC;
    }
L_089709AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08970D60;
      }
      goto L_089709B4;
    }
L_089709B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08970FCC;
      }
      goto L_089709BC;
    }
L_089709BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08970F50;
      }
      goto L_089709C4;
    }
L_089709C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08971068;
      }
      goto L_089709CC;
    }
L_089709CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08971244;
      }
      goto L_089709D4;
    }
L_089709D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089709E8;
      }
      goto L_089709E0;
    }
L_089709E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08970D58;
      }
      goto L_089709E8;
    }
L_089709E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08970B58;
      }
      goto L_08970A08;
    }
L_08970A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08970B58;
      }
      goto L_08970A28;
    }
L_08970A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08970B58;
      }
      goto L_08970A48;
    }
L_08970A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08970B58;
      }
      goto L_08970A68;
    }
L_08970A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970B58;
      }
      goto L_08970A78;
    }
L_08970A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (15395u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08970AA8;
      }
      goto L_08970A9C;
    }
L_08970A9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08970AAC;
      }
      goto L_08970AA8;
    }
L_08970AA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    goto L_08970AAC;
L_08970AAC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08970B58;
      }
      goto L_08970ABC;
    }
L_08970ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
        goto L_08970AE0;
    }
    goto L_08970AD4;
L_08970AD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08970AE0;
      }
      goto L_08970AE0;
    }
L_08970AE0:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08970B58;
      }
      goto L_08970AF0;
    }
L_08970AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(328)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(328)));
        goto L_08970B14;
    }
    goto L_08970B08;
L_08970B08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08970B14;
      }
      goto L_08970B14;
    }
L_08970B14:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08970B58;
      }
      goto L_08970B24;
    }
L_08970B24:
    ctx.gpr[31] = (0x08970B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08970B2Cu) goto L_08970B2C;
    return;
L_08970B2C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 61u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
        goto L_08970B64;
    }
    goto L_08970B40;
L_08970B40:
    ctx.gpr[31] = (0x08970B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08970B48u) goto L_08970B48;
    return;
L_08970B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
        goto L_08970B64;
    }
    goto L_08970B58;
L_08970B58:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08970D58;
      }
      goto L_08970B64;
    }
L_08970B64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08970BB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 852u, 0x0896FBF8u>(ctx, &aot_mem) && ctx.pc == 0x08970BB4u) goto L_08970BB4;
    return;
L_08970BB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08970BD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 814u, 0x0896F93Cu>(ctx, &aot_mem) && ctx.pc == 0x08970BD0u) goto L_08970BD0;
    return;
L_08970BD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970D58;
      }
      goto L_08970BD8;
    }
L_08970BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[17];
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_08970D58;
      }
      goto L_08970C5C;
    }
L_08970C5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 3u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(119)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08970CD0;
      }
      goto L_08970CBC;
    }
L_08970CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    goto L_08970CD0;
L_08970CD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08970CE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 494u, 0x088CA7B0u>(ctx, &aot_mem) && ctx.pc == 0x08970CE0u) goto L_08970CE0;
    return;
L_08970CE0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970D58;
      }
      goto L_08970CF4;
    }
L_08970CF4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (17948u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08970D18u);
    ctx.gpr[5] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x08970D18u) goto L_08970D18;
    return;
L_08970D18:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08970D58;
      }
      goto L_08970D24;
    }
L_08970D24:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x08970D30u);
    ctx.gpr[5] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x08970D30u) goto L_08970D30;
    return;
L_08970D30:
    ctx.gpr[10] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[11] = (0u | 35u);
    ctx.gpr[31] = (0x08970D58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 35u, 0x089B8320u>(ctx, &aot_mem) && ctx.pc == 0x08970D58u) goto L_08970D58;
    return;
L_08970D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089712BC;
      }
      goto L_08970D60;
    }
L_08970D60:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(119)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
      if (branch_taken) {
          goto L_08970D8C;
      }
      goto L_08970D80;
    }
L_08970D80:
    ctx.gpr[4] = (16528u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08970D90;
      }
      goto L_08970D8C;
    }
L_08970D8C:
    ctx.fpr[15] = std::bit_cast<float>(0u);
    goto L_08970D90;
L_08970D90:
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08970DA4u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 814u, 0x0896F93Cu>(ctx, &aot_mem) && ctx.pc == 0x08970DA4u) goto L_08970DA4;
    return;
L_08970DA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970F48;
      }
      goto L_08970DAC;
    }
L_08970DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970F48;
      }
      goto L_08970DC0;
    }
L_08970DC0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (17056u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16840u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08970DF8;
      }
      goto L_08970DE8;
    }
L_08970DE8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08970E08;
      }
      goto L_08970DF8;
    }
L_08970DF8:
    ctx.gpr[31] = (0x08970E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem) && ctx.pc == 0x08970E00u) goto L_08970E00;
    return;
L_08970E00:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08970E08;
L_08970E08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (0u | 49u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (0u | 49u);
        goto L_08970E2C;
    }
    goto L_08970E2C;
L_08970E2C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 0 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (0u | 0u);
        goto L_08970E38;
    }
    goto L_08970E38;
L_08970E38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (0u | 49u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 49u);
        goto L_08970E5C;
    }
    goto L_08970E5C;
L_08970E5C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 0 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 0u);
        goto L_08970E68;
    }
    goto L_08970E68;
L_08970E68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (0u | 49u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (0u | 49u);
        goto L_08970E8C;
    }
    goto L_08970E8C;
L_08970E8C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 0 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (0u | 0u);
        goto L_08970E98;
    }
    goto L_08970E98;
L_08970E98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (0u | 49u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 49u);
        goto L_08970EBC;
    }
    goto L_08970EBC;
L_08970EBC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 0 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 0u);
        goto L_08970EC8;
    }
    goto L_08970EC8;
L_08970EC8:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970F48;
      }
      goto L_08970ED4;
    }
L_08970ED4:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
      if (branch_taken) {
          goto L_08970F38;
      }
      goto L_08970EE4;
    }
L_08970EE4:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[4]);
    goto L_08970F00;
L_08970F00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[31] = (0x08970F14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 749u, 0x0896F5A4u>(ctx, &aot_mem) && ctx.pc == 0x08970F14u) goto L_08970F14;
    return;
L_08970F14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[31] = (0x08970F28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 749u, 0x0896F5A4u>(ctx, &aot_mem) && ctx.pc == 0x08970F28u) goto L_08970F28;
    return;
L_08970F28:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(2800));
      if (branch_taken) {
          goto L_08970F00;
      }
      goto L_08970F38;
    }
L_08970F38:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970ED4;
      }
      goto L_08970F48;
    }
L_08970F48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089712BC;
      }
      goto L_08970F50;
    }
L_08970F50:
    ctx.gpr[31] = (0x08970F58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 728u, 0x0896F414u>(ctx, &aot_mem) && ctx.pc == 0x08970F58u) goto L_08970F58;
    return;
L_08970F58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(119)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08970F70;
      }
      goto L_08970F64;
    }
L_08970F64:
    ctx.gpr[4] = (16608u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08970F78;
      }
      goto L_08970F70;
    }
L_08970F70:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08970F78;
L_08970F78:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08970F90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 844u, 0x0896FB74u>(ctx, &aot_mem) && ctx.pc == 0x08970F90u) goto L_08970F90;
    return;
L_08970F90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970FA0;
      }
      goto L_08970F98;
    }
L_08970F98:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08970FA0;
L_08970FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970FBC;
      }
      goto L_08970FAC;
    }
L_08970FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970FC4;
      }
      goto L_08970FBC;
    }
L_08970FBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    goto L_08970FC4;
L_08970FC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089712BC;
      }
      goto L_08970FCC;
    }
L_08970FCC:
    ctx.gpr[31] = (0x08970FD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 728u, 0x0896F414u>(ctx, &aot_mem) && ctx.pc == 0x08970FD4u) goto L_08970FD4;
    return;
L_08970FD4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(119)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08971004;
      }
      goto L_08970FEC;
    }
L_08970FEC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
      if (branch_taken) {
          goto L_0897100C;
      }
      goto L_08971004;
    }
L_08971004:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    goto L_0897100C;
L_0897100C:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897102Cu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 814u, 0x0896F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0897102Cu) goto L_0897102C;
    return;
L_0897102C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897103C;
      }
      goto L_08971034;
    }
L_08971034:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897103C;
L_0897103C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971058;
      }
      goto L_08971048;
    }
L_08971048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971060;
      }
      goto L_08971058;
    }
L_08971058:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    goto L_08971060;
L_08971060:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089712BC;
      }
      goto L_08971068;
    }
L_08971068:
    ctx.gpr[31] = (0x08971070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 728u, 0x0896F414u>(ctx, &aot_mem) && ctx.pc == 0x08971070u) goto L_08971070;
    return;
L_08971070:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (16025u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08971094u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 814u, 0x0896F93Cu>(ctx, &aot_mem) && ctx.pc == 0x08971094u) goto L_08971094;
    return;
L_08971094:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897123C;
      }
      goto L_0897109C;
    }
L_0897109C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897123C;
      }
      goto L_089710A4;
    }
L_089710A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971138;
      }
      goto L_089710B0;
    }
L_089710B0:
    ctx.gpr[31] = (0x089710B8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x089710B8u) goto L_089710B8;
    return;
L_089710B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089710D4u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x089710D4u) goto L_089710D4;
    return;
L_089710D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[31] = (0x089710F4u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x089710F4u) goto L_089710F4;
    return;
L_089710F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08971110u);
    ctx.fpr[22] = ctx.fpr[13] - ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08971110u) goto L_08971110;
    return;
L_08971110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897113C;
      }
      goto L_08971138;
    }
L_08971138:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_0897113C;
L_0897113C:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08971160;
      }
      goto L_08971154;
    }
L_08971154:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(121)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897123C;
      }
      goto L_08971160;
    }
L_08971160:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971238;
      }
      goto L_08971174;
    }
L_08971174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] | 512u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(118)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(118), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08971238;
      }
      goto L_089711A0;
    }
L_089711A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x089711ACu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    goto L_0897028C;
L_089711AC:
    ctx.gpr[31] = (0x089711B4u);
    // nop
    goto L_08970354;
L_089711B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971200;
      }
      goto L_089711BC;
    }
L_089711BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17224));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1500));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(172), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1500u);
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[31] = (0x08971200u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem) && ctx.pc == 0x08971200u) goto L_08971200;
    return;
L_08971200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x0897120Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x0897120Cu) goto L_0897120C;
    return;
L_0897120C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971238;
      }
      goto L_08971218;
    }
L_08971218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08971238u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971238u) goto L_08971238;
    return;
L_08971238:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    goto L_0897123C;
L_0897123C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089712BC;
      }
      goto L_08971244;
    }
L_08971244:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(119)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971268;
      }
      goto L_0897125C;
    }
L_0897125C:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08971268;
L_08971268:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(119)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08971288;
      }
      goto L_0897127C;
    }
L_0897127C:
    ctx.gpr[4] = (16608u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08971290;
      }
      goto L_08971288;
    }
L_08971288:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08971290;
L_08971290:
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.gpr[31] = (0x0897129Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 814u, 0x0896F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0897129Cu) goto L_0897129C;
    return;
L_0897129C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089712B4;
      }
      goto L_089712A4;
    }
L_089712A4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    goto L_089712B4;
L_089712B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089712BC;
      }
      goto L_089712BC;
    }
L_089712BC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x089712D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 856u, 0x0896FCF4u>(ctx, &aot_mem) && ctx.pc == 0x089712D0u) goto L_089712D0;
    return;
L_089712D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[15];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (16250u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57672u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(117)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089715F8;
      }
      goto L_089713A0;
    }
L_089713A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089715F8;
      }
      goto L_089713A8;
    }
L_089713A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971508;
      }
      goto L_089713B4;
    }
L_089713B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08971408u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x08971408u) goto L_08971408;
    return;
L_08971408:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08971508;
L_08971508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089715F8;
      }
      goto L_08971510;
    }
L_08971510:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] >> 11u);
    ctx.gpr[4] = (ctx.gpr[4] >> 22u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971588;
      }
      goto L_08971540;
    }
L_08971540:
    ctx.gpr[4] = (15107u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089715DC;
      }
      goto L_0897156C;
    }
L_0897156C:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] | 3670u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089715DC;
      }
      goto L_08971588;
    }
L_08971588:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_089715DC;
      }
      goto L_08971594;
    }
L_08971594:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15107u << 16u);
      if (branch_taken) {
          goto L_089715DC;
      }
      goto L_0897159C;
    }
L_0897159C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3670u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089715DC;
      }
      goto L_089715D0;
    }
L_089715D0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089715DC;
L_089715DC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x089715F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 856u, 0x0896FCF4u>(ctx, &aot_mem) && ctx.pc == 0x089715F0u) goto L_089715F0;
    return;
L_089715F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089715F8;
L_089715F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08971660u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08971660u) goto L_08971660;
    return;
L_08971660:
    ctx.gpr[31] = (0x08971668u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem) && ctx.pc == 0x08971668u) goto L_08971668;
    return;
L_08971668:
    ctx.gpr[31] = (0x08971670u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089716A4;
L_08971670:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089716A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08971844;
      }
      goto L_089716C0;
    }
L_089716C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08971818u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08971818u) goto L_08971818;
    return;
L_08971818:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x0897182Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x0897182Cu) goto L_0897182C;
    return;
L_0897182C:
    ctx.gpr[31] = (0x08971834u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08971834u) goto L_08971834;
    return;
L_08971834:
    ctx.gpr[31] = (0x0897183Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem) && ctx.pc == 0x0897183Cu) goto L_0897183C;
    return;
L_0897183C:
    ctx.gpr[31] = (0x08971844u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 161u, 0x08A69104u>(ctx, &aot_mem) && ctx.pc == 0x08971844u) goto L_08971844;
    return;
L_08971844:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089718F8;
      }
      goto L_089718A4;
    }
L_089718A4:
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[26] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (2247u << 16u);
    ctx.gpr[6] = (50716u << 16u);
    ctx.fpr[28] = ctx.fpr[15] + ctx.fpr[14];
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (18371u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 20467u);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17072));
      if (branch_taken) {
          goto L_08971900;
      }
      goto L_089718F0;
    }
L_089718F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971918;
      }
      goto L_089718F8;
    }
L_089718F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971AAC;
      }
      goto L_08971900;
    }
L_08971900:
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08971918;
      }
      goto L_08971910;
    }
L_08971910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971920;
      }
      goto L_08971918;
    }
L_08971918:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08971920;
L_08971920:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (17096u << 16u);
      if (branch_taken) {
          goto L_089719B4;
      }
      goto L_08971930;
    }
L_08971930:
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[9]);
    goto L_08971938;
L_08971938:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.gpr[11] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.fpr[0] = ctx.fpr[16] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = ctx.fpr[16] - ctx.fpr[1];
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = ctx.fpr[17] - ctx.fpr[3];
    ctx.fpr[4] = ctx.fpr[17] - ctx.fpr[4];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[3];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089719A4;
      }
      goto L_0897198C;
    }
L_0897198C:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089719A4;
      }
      goto L_0897199C;
    }
L_0897199C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    goto L_089719A4;
L_089719A4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08971938;
      }
      goto L_089719B4;
    }
L_089719B4:
    ctx.gpr[17] = (ctx.gpr[17] << 7u);
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(118), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(119), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08971A08;
      }
      goto L_089719FC;
    }
L_089719FC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(121)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971A0C;
      }
      goto L_08971A08;
    }
L_08971A08:
    ctx.gpr[6] = (0u | 1u);
    goto L_08971A0C;
L_08971A0C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08971A2C;
      }
      goto L_08971A1C;
    }
L_08971A1C:
    ctx.gpr[4] = (49011u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 29884u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08971A54;
      }
      goto L_08971A2C;
    }
L_08971A2C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971A44;
      }
      goto L_08971A34;
    }
L_08971A34:
    ctx.gpr[4] = (16684u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 37958u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08971A54;
      }
      goto L_08971A44;
    }
L_08971A44:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08971A50u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08971A50u) goto L_08971A50;
    return;
L_08971A50:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08971A54;
L_08971A54:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[7]);
    ctx.gpr[31] = (0x08971A80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 852u, 0x0896FBF8u>(ctx, &aot_mem) && ctx.pc == 0x08971A80u) goto L_08971A80;
    return;
L_08971A80:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[7]);
    ctx.gpr[31] = (0x08971AACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 852u, 0x0896FBF8u>(ctx, &aot_mem) && ctx.pc == 0x08971AACu) goto L_08971AAC;
    return;
L_08971AAC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08971AD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08971AFCu);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 349u, 0x0882B4E8u>(ctx, &aot_mem) && ctx.pc == 0x08971AFCu) goto L_08971AFC;
    return;
L_08971AFC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (15363u << 16u);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24272));
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(496), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[5] = (16255u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 65368u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16192u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (65532u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (4u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08971B90u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971B90u) goto L_08971B90;
    return;
L_08971B90:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(ctx.gpr[4]));
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
L_08971BB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08971BFC;
      }
      goto L_08971BD0;
    }
L_08971BD0:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24272));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08971BE8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 368u, 0x0882B854u>(ctx, &aot_mem) && ctx.pc == 0x08971BE8u) goto L_08971BE8;
    return;
L_08971BE8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971BFC;
      }
      goto L_08971BF4;
    }
L_08971BF4:
    ctx.gpr[31] = (0x08971BFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 396u, 0x0882B9CCu>(ctx, &aot_mem) && ctx.pc == 0x08971BFCu) goto L_08971BFC;
    return;
L_08971BFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971C10:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971C18:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971C38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971C40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971C48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08971E98;
      }
      goto L_08971C80;
    }
L_08971C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08971CB8;
      }
      goto L_08971CA0;
    }
L_08971CA0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971CC4;
      }
      goto L_08971CB8;
    }
L_08971CB8:
    ctx.gpr[31] = (0x08971CC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 365u, 0x08B658A0u>(ctx, &aot_mem) && ctx.pc == 0x08971CC0u) goto L_08971CC0;
    return;
L_08971CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08971CC4;
L_08971CC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08971E1C;
    }
    goto L_08971CE4;
L_08971CE4:
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08971D04;
      }
      goto L_08971CF0;
    }
L_08971CF0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08971D14;
      }
      goto L_08971D04;
    }
L_08971D04:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08971D14;
L_08971D14:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08971D3C;
      }
      goto L_08971D1C;
    }
L_08971D1C:
    ctx.gpr[31] = (0x08971D24u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08971D24u) goto L_08971D24;
    return;
L_08971D24:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971D3C;
      }
      goto L_08971D30;
    }
L_08971D30:
    ctx.gpr[31] = (0x08971D38u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08971D38u) goto L_08971D38;
    return;
L_08971D38:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08971D3C;
L_08971D3C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08971D68u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08972CF8;
L_08971D68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08971D94;
      }
      goto L_08971D78;
    }
L_08971D78:
    ctx.gpr[20] = (ctx.gpr[23] - ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08971D8Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08971D8Cu) goto L_08971D8C;
    return;
L_08971D8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08971D94;
      }
      goto L_08971D94;
    }
L_08971D94:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[23] = (ctx.gpr[20] | 0u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08971DBCu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08972CF8;
L_08971DBC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[22];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08971DD4;
      }
      goto L_08971DCC;
    }
L_08971DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08971DEC;
      }
      goto L_08971DD4;
    }
L_08971DD4:
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08971DE8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08971DE8u) goto L_08971DE8;
    return;
L_08971DE8:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    goto L_08971DEC;
L_08971DEC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971E08;
      }
      goto L_08971E00;
    }
L_08971E00:
    ctx.gpr[31] = (0x08971E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08971E08u) goto L_08971E08;
    return;
L_08971E08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08971E98;
      }
      goto L_08971E1C;
    }
L_08971E1C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08971E44u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08972CF8;
L_08971E44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[21];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08971E60;
      }
      goto L_08971E54;
    }
L_08971E54:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08971E78;
      }
      goto L_08971E60;
    }
L_08971E60:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08971E70u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08971E70u) goto L_08971E70;
    return;
L_08971E70:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    goto L_08971E78;
L_08971E78:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08971E98;
L_08971E98:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971EC8:
    ctx.gpr[2] = (2199u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(7880));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971ED4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08971EE4u);
    // nop
    goto L_08971EC8;
L_08971EE4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971EF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08971F10u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08971EC8;
L_08971F10:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08971F58;
    }
    goto L_08971F18;
L_08971F18:
    ctx.gpr[31] = (0x08971F20u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x08971F20u) goto L_08971F20;
    return;
L_08971F20:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08971F48;
    }
    goto L_08971F28;
L_08971F28:
    ctx.gpr[31] = (0x08971F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x08980688u>(ctx, &aot_mem) && ctx.pc == 0x08971F30u) goto L_08971F30;
    return;
L_08971F30:
    ctx.gpr[4] = (ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08971F4C;
      }
      goto L_08971F44;
    }
L_08971F44:
    ctx.gpr[17] = (0u | 1u);
    goto L_08971F48;
L_08971F48:
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    goto L_08971F4C;
L_08971F4C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971F58;
      }
      goto L_08971F54;
    }
L_08971F54:
    ctx.gpr[18] = (0u | 1u);
    goto L_08971F58;
L_08971F58:
    ctx.gpr[2] = (ctx.gpr[18] & 255u);
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
L_08971F74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08971F88u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC59D4u>(ctx, &aot_mem) && ctx.pc == 0x08971F88u) goto L_08971F88;
    return;
L_08971F88:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24488));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(197), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(198), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089721A8;
      }
      goto L_08971FF8;
    }
L_08971FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[18]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24488));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(184));
      if (branch_taken) {
          goto L_089720E4;
      }
      goto L_08972030;
    }
L_08972030:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(6));
    goto L_08972034;
L_08972034:
    if (ctx.gpr[18] == ctx.gpr[19]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
        goto L_089720D4;
    }
    goto L_0897203C;
L_0897203C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_0897204C;
L_0897204C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08972074;
      }
      goto L_08972054;
    }
L_08972054:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08972074;
      }
      goto L_08972060;
    }
L_08972060:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0897204C;
      }
      goto L_08972074;
    }
L_08972074:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089720BC;
      }
      goto L_0897207C;
    }
L_0897207C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    if (ctx.gpr[21] == ctx.gpr[22]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
        goto L_089720D4;
    }
    goto L_0897208C;
L_0897208C:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089720AC;
      }
      goto L_0897209C;
    }
L_0897209C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089720A8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x089720A8u) goto L_089720A8;
    return;
L_089720A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_089720AC;
L_089720AC:
    ctx.gpr[5] = (ctx.gpr[22] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089720D0;
      }
      goto L_089720BC;
    }
L_089720BC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089720D0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    goto L_08971C48;
L_089720D0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_089720D4;
L_089720D4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) > 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08972034;
      }
      goto L_089720E0;
    }
L_089720E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    goto L_089720E4;
L_089720E4:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08972120;
      }
      goto L_089720F4;
    }
L_089720F4:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
        goto L_08972118;
    }
    goto L_089720FC;
L_089720FC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08972114;
      }
      goto L_08972104;
    }
L_08972104:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
        goto L_08972118;
    }
    goto L_0897210C;
L_0897210C:
    ctx.gpr[31] = (0x08972114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08972114u) goto L_08972114;
    return;
L_08972114:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_08972118;
L_08972118:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089720F4;
      }
      goto L_08972120;
    }
L_08972120:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08972188;
      }
      goto L_08972128;
    }
L_08972128:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08972164;
      }
      goto L_08972138;
    }
L_08972138:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
        goto L_0897215C;
    }
    goto L_08972140;
L_08972140:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08972158;
      }
      goto L_08972148;
    }
L_08972148:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
        goto L_0897215C;
    }
    goto L_08972150;
L_08972150:
    ctx.gpr[31] = (0x08972158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08972158u) goto L_08972158;
    return;
L_08972158:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    goto L_0897215C;
L_0897215C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08972138;
      }
      goto L_08972164;
    }
L_08972164:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0897218C;
      }
      goto L_0897216C;
    }
L_0897216C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_0897218C;
    }
    goto L_08972178;
L_08972178:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_0897218C;
    }
    goto L_08972180;
L_08972180:
    ctx.gpr[31] = (0x08972188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08972188u) goto L_08972188;
    return;
L_08972188:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897218C;
L_0897218C:
    ctx.gpr[31] = (0x08972194u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 486u, 0x08AC5AE8u>(ctx, &aot_mem) && ctx.pc == 0x08972194u) goto L_08972194;
    return;
L_08972194:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089721A8;
      }
      goto L_089721A0;
    }
L_089721A0:
    ctx.gpr[31] = (0x089721A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x089721A8u) goto L_089721A8;
    return;
L_089721A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089721D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(197)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(198), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897220C;
      }
      goto L_08972200;
    }
L_08972200:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(197), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08972210;
      }
      goto L_0897220C;
    }
L_0897220C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(197), static_cast<std::uint8_t>(0u));
    goto L_08972210;
L_08972210:
    ctx.gpr[31] = (0x08972218u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08972BEC;
L_08972218:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(197)));
    ctx.gpr[31] = (0x08972224u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 571u, 0x08AC61E0u>(ctx, &aot_mem) && ctx.pc == 0x08972224u) goto L_08972224;
    return;
L_08972224:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972234:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(197)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(198), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897225C;
      }
      goto L_08972250;
    }
L_08972250:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(197), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08972268;
      }
      goto L_0897225C;
    }
L_0897225C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(197), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08972268;
L_08972268:
    ctx.gpr[31] = (0x08972270u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08972BEC;
L_08972270:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(197)));
    ctx.gpr[31] = (0x0897227Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 571u, 0x08AC61E0u>(ctx, &aot_mem) && ctx.pc == 0x0897227Cu) goto L_0897227C;
    return;
L_0897227C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897228C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089722A0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 507u, 0x08AC5C90u>(ctx, &aot_mem) && ctx.pc == 0x089722A0u) goto L_089722A0;
    return;
L_089722A0:
    ctx.gpr[31] = (0x089722A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 585u, 0x08AC62A0u>(ctx, &aot_mem) && ctx.pc == 0x089722A8u) goto L_089722A8;
    return;
L_089722A8:
    ctx.gpr[31] = (0x089722B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897299C;
L_089722B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089722C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089722D4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 511u, 0x08AC5CC8u>(ctx, &aot_mem) && ctx.pc == 0x089722D4u) goto L_089722D4;
    return;
L_089722D4:
    ctx.gpr[31] = (0x089722DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 585u, 0x08AC62A0u>(ctx, &aot_mem) && ctx.pc == 0x089722DCu) goto L_089722DC;
    return;
L_089722DC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(5)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(6)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x08972320u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x08972320u) goto L_08972320;
    return;
L_08972320:
    ctx.gpr[31] = (0x08972328u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897299C;
L_08972328:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972338:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972340:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972348:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089723D8;
      }
      goto L_08972360;
    }
L_08972360:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972384;
      }
      goto L_0897236C;
    }
L_0897236C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08972378u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 577u, 0x08AC6238u>(ctx, &aot_mem) && ctx.pc == 0x08972378u) goto L_08972378;
    return;
L_08972378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(197), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_089723D8;
      }
      goto L_08972384;
    }
L_08972384:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089723D8;
      }
      goto L_08972390;
    }
L_08972390:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17196));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089723A8u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x089723A8u) goto L_089723A8;
    return;
L_089723A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089723B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 577u, 0x08AC6238u>(ctx, &aot_mem) && ctx.pc == 0x089723B4u) goto L_089723B4;
    return;
L_089723B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089723C4u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(197)));
    goto L_089723E8;
L_089723C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089723D8;
      }
      goto L_089723D0;
    }
L_089723D0:
    ctx.gpr[31] = (0x089723D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x089723D8u) goto L_089723D8;
    return;
L_089723D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089723E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972440;
      }
      goto L_08972420;
    }
L_08972420:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    if (ctx.gpr[6] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08972448;
    }
    goto L_08972438;
L_08972438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089724DC;
      }
      goto L_08972440;
    }
L_08972440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089724E0;
      }
      goto L_08972448;
    }
L_08972448:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08972454;
L_08972454:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897247C;
      }
      goto L_0897245C;
    }
L_0897245C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0897247C;
      }
      goto L_08972468;
    }
L_08972468:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08972454;
      }
      goto L_0897247C;
    }
L_0897247C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089724C4;
      }
      goto L_08972484;
    }
L_08972484:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089724DC;
      }
      goto L_08972494;
    }
L_08972494:
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089724B4;
      }
      goto L_089724A4;
    }
L_089724A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089724B0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x089724B0u) goto L_089724B0;
    return;
L_089724B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089724B4;
L_089724B4:
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089724DC;
      }
      goto L_089724C4;
    }
L_089724C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    ctx.gpr[31] = (0x089724DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08971C48;
L_089724DC:
    ctx.gpr[2] = (0u | 1u);
    goto L_089724E0;
L_089724E0:
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
L_089724F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 12u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08972554;
      }
      goto L_08972548;
    }
L_08972548:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08972560;
      }
      goto L_08972554;
    }
L_08972554:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_08972560;
L_08972560:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089725C4;
      }
      goto L_08972568;
    }
L_08972568:
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x08972588u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08972588u) goto L_08972588;
    return;
L_08972588:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089725C4;
      }
      goto L_089725A0;
    }
L_089725A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x089725B4u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x089725B4u) goto L_089725B4;
    return;
L_089725B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089725C4;
L_089725C4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08972618;
      }
      goto L_089725D4;
    }
L_089725D4:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_08972610;
    }
    goto L_089725E0;
L_089725E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x089725FCu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem) && ctx.pc == 0x089725FCu) goto L_089725FC;
    return;
L_089725FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    goto L_08972610;
L_08972610:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089725D4;
      }
      goto L_08972618;
    }
L_08972618:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0897265C;
      }
      goto L_08972628;
    }
L_08972628:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972650;
      }
      goto L_08972634;
    }
L_08972634:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08972648u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem) && ctx.pc == 0x08972648u) goto L_08972648;
    return;
L_08972648:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08972650;
L_08972650:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089726AC;
      }
      goto L_0897265C;
    }
L_0897265C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089726A8;
      }
      goto L_08972664;
    }
L_08972664:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_089726A0;
    }
    goto L_08972670;
L_08972670:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x0897268Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem) && ctx.pc == 0x0897268Cu) goto L_0897268C;
    return;
L_0897268C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_089726A0;
L_089726A0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08972664;
      }
      goto L_089726A8;
    }
L_089726A8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089726AC;
L_089726AC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972700;
      }
      goto L_089726B4;
    }
L_089726B4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08972700;
      }
      goto L_089726C4;
    }
L_089726C4:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
        goto L_089726F4;
    }
    goto L_089726D0;
L_089726D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089726E8u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem) && ctx.pc == 0x089726E8u) goto L_089726E8;
    return;
L_089726E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_089726F4;
L_089726F4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089726C4;
      }
      goto L_089726FC;
    }
L_089726FC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08972700;
L_08972700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08972740;
      }
      goto L_08972710;
    }
L_08972710:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
        goto L_08972734;
    }
    goto L_08972718;
L_08972718:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08972730;
      }
      goto L_08972720;
    }
L_08972720:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
        goto L_08972734;
    }
    goto L_08972728;
L_08972728:
    ctx.gpr[31] = (0x08972730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08972730u) goto L_08972730;
    return;
L_08972730:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
    goto L_08972734;
L_08972734:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08972710;
      }
      goto L_0897273C;
    }
L_0897273C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08972740;
L_08972740:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972750;
      }
      goto L_08972748;
    }
L_08972748:
    ctx.gpr[31] = (0x08972750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08972750u) goto L_08972750;
    return;
L_08972750:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x089727C8u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 605u, 0x08AC646Cu>(ctx, &aot_mem) && ctx.pc == 0x089727C8u) goto L_089727C8;
    return;
L_089727C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972800;
      }
      goto L_089727D0;
    }
L_089727D0:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 156u);
    ctx.gpr[31] = (0x089727E0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089727E0u) goto L_089727E0;
    return;
L_089727E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089727ECu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x089727ECu) goto L_089727EC;
    return;
L_089727EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08972808;
      }
      goto L_089727F8;
    }
L_089727F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972810;
      }
      goto L_08972800;
    }
L_08972800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897296C;
      }
      goto L_08972808;
    }
L_08972808:
    ctx.gpr[31] = (0x08972810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08972810u) goto L_08972810;
    return;
L_08972810:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972850;
      }
      goto L_08972818;
    }
L_08972818:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 171u);
    ctx.gpr[31] = (0x08972828u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08972828u) goto L_08972828;
    return;
L_08972828:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08972834u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08972834u) goto L_08972834;
    return;
L_08972834:
    ctx.gpr[31] = (0x0897283Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x0897283Cu) goto L_0897283C;
    return;
L_0897283C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08972850;
      }
      goto L_08972848;
    }
L_08972848:
    ctx.gpr[31] = (0x08972850u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08972850u) goto L_08972850;
    return;
L_08972850:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 157u);
    ctx.gpr[31] = (0x08972860u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08972860u) goto L_08972860;
    return;
L_08972860:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0897286Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x0897286Cu) goto L_0897286C;
    return;
L_0897286C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08972880;
      }
      goto L_08972878;
    }
L_08972878:
    ctx.gpr[31] = (0x08972880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08972880u) goto L_08972880;
    return;
L_08972880:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972968;
      }
      goto L_08972888;
    }
L_08972888:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08972968;
      }
      goto L_0897289C;
    }
L_0897289C:
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17192));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(184));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(45));
    goto L_089728B0;
L_089728B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089728C0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089728C0u) goto L_089728C0;
    return;
L_089728C0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089728CCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x089728CCu) goto L_089728CC;
    return;
L_089728CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972954;
      }
      goto L_089728D8;
    }
L_089728D8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089728E8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x089728E8u) goto L_089728E8;
    return;
L_089728E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08972924;
      }
      goto L_089728F8;
    }
L_089728F8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
        goto L_08972918;
    }
    goto L_08972904;
L_08972904:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08972910u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem) && ctx.pc == 0x08972910u) goto L_08972910;
    return;
L_08972910:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    goto L_08972918;
L_08972918:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08972944;
      }
      goto L_08972924;
    }
L_08972924:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08972940u);
    ctx.gpr[9] = (0u | 1u);
    goto L_089724F8;
L_08972940:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08972944;
L_08972944:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972954;
      }
      goto L_0897294C;
    }
L_0897294C:
    ctx.gpr[31] = (0x08972954u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08972954u) goto L_08972954;
    return;
L_08972954:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089728B0;
      }
      goto L_08972968;
    }
L_08972968:
    ctx.gpr[2] = (0u | 1u);
    goto L_0897296C;
L_0897296C:
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
L_0897299C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(197)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x089729E4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem) && ctx.pc == 0x089729E4u) goto L_089729E4;
    return;
L_089729E4:
    ctx.gpr[31] = (0x089729ECu);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x089729ECu) goto L_089729EC;
    return;
L_089729EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x089729FCu);
    ctx.gpr[4] = (ctx.gpr[17] << (ctx.gpr[4] & 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x089729FCu) goto L_089729FC;
    return;
L_089729FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[31] = (0x08972A40u);
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x08972A40u) goto L_08972A40;
    return;
L_08972A40:
    ctx.gpr[31] = (0x08972A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 63u, 0x08B0C4CCu>(ctx, &aot_mem) && ctx.pc == 0x08972A48u) goto L_08972A48;
    return;
L_08972A48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17188));
    ctx.gpr[31] = (0x08972A78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08972A78u) goto L_08972A78;
    return;
L_08972A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[20] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08972AB4;
      }
      goto L_08972A94;
    }
L_08972A94:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08972AA8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem) && ctx.pc == 0x08972AA8u) goto L_08972AA8;
    return;
L_08972AA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_08972AB8;
      }
      goto L_08972AB0;
    }
L_08972AB0:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    goto L_08972AB4;
L_08972AB4:
    ctx.gpr[4] = (ctx.gpr[20] & 255u);
    goto L_08972AB8;
L_08972AB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_08972B58;
      }
      goto L_08972AC0;
    }
L_08972AC0:
    ctx.gpr[21] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08972AF4;
      }
      goto L_08972ACC;
    }
L_08972ACC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08972AD8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08972AD8u) goto L_08972AD8;
    return;
L_08972AD8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972AF0;
      }
      goto L_08972AE4;
    }
L_08972AE4:
    ctx.gpr[31] = (0x08972AECu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08972AECu) goto L_08972AEC;
    return;
L_08972AEC:
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    goto L_08972AF0;
L_08972AF0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    goto L_08972AF4;
L_08972AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
        goto L_08972B18;
    }
    goto L_08972B00;
L_08972B00:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[17]);
    ctx.gpr[31] = (0x08972B0Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08972B0Cu) goto L_08972B0C;
    return;
L_08972B0C:
    ctx.gpr[31] = (0x08972B14u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17216));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08972B14u) goto L_08972B14;
    return;
L_08972B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    goto L_08972B18;
L_08972B18:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22480));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08972B34u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08972B34u) goto L_08972B34;
    return;
L_08972B34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08972B50u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem) && ctx.pc == 0x08972B50u) goto L_08972B50;
    return;
L_08972B50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08972BB4;
      }
      goto L_08972B58;
    }
L_08972B58:
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_08972B8C;
    }
    goto L_08972B60;
L_08972B60:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08972B6Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08972B6Cu) goto L_08972B6C;
    return;
L_08972B6C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972B84;
      }
      goto L_08972B78;
    }
L_08972B78:
    ctx.gpr[31] = (0x08972B80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08972B80u) goto L_08972B80;
    return;
L_08972B80:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    goto L_08972B84;
L_08972B84:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08972B8C;
L_08972B8C:
    ctx.gpr[31] = (0x08972B94u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08972B94u) goto L_08972B94;
    return;
L_08972B94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08972BB0u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem) && ctx.pc == 0x08972BB0u) goto L_08972BB0;
    return;
L_08972BB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08972BB4;
L_08972BB4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972BC4;
      }
      goto L_08972BBC;
    }
L_08972BBC:
    ctx.gpr[31] = (0x08972BC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08972BC4u) goto L_08972BC4;
    return;
L_08972BC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972BEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
        goto L_08972C20;
    }
    goto L_08972C0C;
L_08972C0C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972CE8;
      }
      goto L_08972C18;
    }
L_08972C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972C60;
      }
      goto L_08972C20;
    }
L_08972C20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972CE8;
      }
      goto L_08972C28;
    }
L_08972C28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(197)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08972C58;
      }
      goto L_08972C38;
    }
L_08972C38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(198)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08972C50;
      }
      goto L_08972C48;
    }
L_08972C48:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(197), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08972C58;
      }
      goto L_08972C50;
    }
L_08972C50:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(197), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08972C58;
L_08972C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972CE8;
      }
      goto L_08972C60;
    }
L_08972C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972C78;
      }
      goto L_08972C6C;
    }
L_08972C6C:
    ctx.gpr[31] = (0x08972C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08972C74u) goto L_08972C74;
    return;
L_08972C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08972C78;
L_08972C78:
    ctx.gpr[31] = (0x08972C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 472u, 0x088B6860u>(ctx, &aot_mem) && ctx.pc == 0x08972C80u) goto L_08972C80;
    return;
L_08972C80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972CB0;
      }
      goto L_08972C88;
    }
L_08972C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972CA0;
      }
      goto L_08972C94;
    }
L_08972C94:
    ctx.gpr[31] = (0x08972C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08972C9Cu) goto L_08972C9C;
    return;
L_08972C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08972CA0;
L_08972CA0:
    ctx.gpr[31] = (0x08972CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 562u, 0x088B6F30u>(ctx, &aot_mem) && ctx.pc == 0x08972CA8u) goto L_08972CA8;
    return;
L_08972CA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972CBC;
      }
      goto L_08972CB0;
    }
L_08972CB0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(197), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08972CE8;
      }
      goto L_08972CBC;
    }
L_08972CBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(197)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08972CE8;
      }
      goto L_08972CCC;
    }
L_08972CCC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(198)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972CE4;
      }
      goto L_08972CD8;
    }
L_08972CD8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(197), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08972CE8;
      }
      goto L_08972CE4;
    }
L_08972CE4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(197), static_cast<std::uint8_t>(0u));
    goto L_08972CE8;
L_08972CE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972CF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972D0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08972D60;
      }
      goto L_08972D38;
    }
L_08972D38:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08972D48u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972D48u) goto L_08972D48;
    return;
L_08972D48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972D58;
      }
      goto L_08972D50;
    }
L_08972D50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08972D64;
      }
      goto L_08972D58;
    }
L_08972D58:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972D38;
      }
      goto L_08972D60;
    }
L_08972D60:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08972D64;
L_08972D64:
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
L_08972D80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972DA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08972DBCu);
    ctx.gpr[4] = (0u | 176u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08972DBCu) goto L_08972DBC;
    return;
L_08972DBC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972DE8;
      }
      goto L_08972DC8;
    }
L_08972DC8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08972DE8;
L_08972DE8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972E68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08972ECC;
      }
      goto L_08972EA0;
    }
L_08972EA0:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(8));
    goto L_08972EA4;
L_08972EA4:
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08972EB4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972EB4u) goto L_08972EB4;
    return;
L_08972EB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972EC4;
      }
      goto L_08972EBC;
    }
L_08972EBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08972ED0;
      }
      goto L_08972EC4;
    }
L_08972EC4:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08972EA4;
      }
      goto L_08972ECC;
    }
L_08972ECC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08972ED0;
L_08972ED0:
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
L_08972EF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08972F2C;
      }
      goto L_08972F14;
    }
L_08972F14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08972F20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08972EF4;
L_08972F20:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972F14;
      }
      goto L_08972F2C;
    }
L_08972F2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972F40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08972F68;
      }
      goto L_08972F60;
    }
L_08972F60:
    ctx.gpr[31] = (0x08972F68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897303C;
L_08972F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08972F88u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    goto L_08972D80;
L_08972F88:
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
L_08972FA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08972FB8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 139u, 0x089D8B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08972FB8u) goto L_08972FB8;
    return;
L_08972FB8:
    ctx.gpr[31] = (0x08972FC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08972D80;
L_08972FC0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972FD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08972FECu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 131u, 0x089D8A00u>(ctx, &aot_mem) && ctx.pc == 0x08972FECu) goto L_08972FEC;
    return;
L_08972FEC:
    ctx.gpr[31] = (0x08972FF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08972D80;
L_08972FF4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973008:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08973020u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08973020u) goto L_08973020;
    return;
L_08973020:
    ctx.gpr[31] = (0x08973028u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08972D80;
L_08973028:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897303C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_08973064;
      }
      goto L_0897305C;
    }
L_0897305C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08973084;
      }
      goto L_08973064;
    }
L_08973064:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08973080;
      }
      goto L_08973070;
    }
L_08973070:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08973070;
      }
      goto L_08973080;
    }
L_08973080:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    goto L_08973084;
L_08973084:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    ctx.gpr[31] = (0x08973098u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08972D80;
L_08973098:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089730AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897310C;
      }
      goto L_089730C4;
    }
L_089730C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089730F8;
      }
      goto L_089730D8;
    }
L_089730D8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089730D8;
      }
      goto L_089730F8;
    }
L_089730F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0897310C;
      }
      goto L_08973104;
    }
L_08973104:
    ctx.gpr[31] = (0x0897310Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 246u, 0x08969150u>(ctx, &aot_mem) && ctx.pc == 0x0897310Cu) goto L_0897310C;
    return;
L_0897310C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973120;
      }
      goto L_08973118;
    }
L_08973118:
    ctx.gpr[31] = (0x08973120u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897303C;
L_08973120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897313C;
      }
      goto L_0897312C;
    }
L_0897312C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897312C;
      }
      goto L_0897313C;
    }
L_0897313C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08973160;
      }
      goto L_0897314C;
    }
L_0897314C:
    ctx.gpr[7] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897314C;
      }
      goto L_08973160;
    }
L_08973160:
    ctx.gpr[31] = (0x08973168u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08973168u) goto L_08973168;
    return;
L_08973168:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897317C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089731AC;
      }
      goto L_08973198;
    }
L_08973198:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_089731AC;
L_089731AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089731D8;
      }
      goto L_089731B4;
    }
L_089731B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x089731D8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08972D80;
L_089731D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089731E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973204;
      }
      goto L_089731F0;
    }
L_089731F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08973204;
L_08973204:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897320C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973268;
      }
      goto L_08973220;
    }
L_08973220:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08973254;
      }
      goto L_08973234;
    }
L_08973234:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08973234;
      }
      goto L_08973254;
    }
L_08973254:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08973268;
      }
      goto L_08973260;
    }
L_08973260:
    ctx.gpr[31] = (0x08973268u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 246u, 0x08969150u>(ctx, &aot_mem) && ctx.pc == 0x08973268u) goto L_08973268;
    return;
L_08973268:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973274:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08973288u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0897320C;
L_08973288:
    ctx.gpr[31] = (0x08973290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08973290u) goto L_08973290;
    return;
L_08973290:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089732A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089732E0;
      }
      goto L_089732B8;
    }
L_089732B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089732D8;
      }
      goto L_089732C4;
    }
L_089732C4:
    ctx.gpr[31] = (0x089732CCu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    goto L_089732A0;
L_089732CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089732C4;
      }
      goto L_089732D8;
    }
L_089732D8:
    ctx.gpr[31] = (0x089732E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08973274;
L_089732E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089732F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08973304u);
    // nop
    goto L_089732A0;
L_08973304:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973314:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08973344u);
    ctx.gpr[4] = (0u | 176u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08973344u) goto L_08973344;
    return;
L_08973344:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973370;
      }
      goto L_08973350;
    }
L_08973350:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08973370;
L_08973370:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0897337C;
      }
      goto L_08973378;
    }
L_08973378:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0897337C;
L_0897337C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(48)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(52)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(48), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(52), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(56), ctx.gpr[11]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(60), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(144), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(148), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(152), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(156), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(160), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(164), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(168), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(172), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(152), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
        goto L_0897358C;
    }
    goto L_08973544;
L_08973544:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08973550u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08973314;
L_08973550:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897356C;
      }
      goto L_0897355C;
    }
L_0897355C:
    ctx.gpr[31] = (0x08973564u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089732F4;
L_08973564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08973650;
      }
      goto L_0897356C;
    }
L_0897356C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973544;
      }
      goto L_08973588;
    }
L_08973588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    goto L_0897358C;
L_0897358C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897364C;
      }
      goto L_089735AC;
    }
L_089735AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089735C4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 229u, 0x08968FA4u>(ctx, &aot_mem) && ctx.pc == 0x089735C4u) goto L_089735C4;
    return;
L_089735C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08973644;
      }
      goto L_089735DC;
    }
L_089735DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089735DC;
      }
      goto L_08973644;
    }
L_08973644:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    goto L_0897364C;
L_0897364C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08973650;
L_08973650:
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
L_08973670:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08973684u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08973314;
L_08973684:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089736A8;
      }
      goto L_08973690;
    }
L_08973690:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089736A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08972D80;
L_089736A8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089736BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089736E0;
      }
      goto L_089736D0;
    }
L_089736D0:
    ctx.gpr[31] = (0x089736D8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    goto L_08972EF4;
L_089736D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089736E8;
      }
      goto L_089736E0;
    }
L_089736E0:
    ctx.gpr[31] = (0x089736E8u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08972EF4;
L_089736E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089736F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[9] = (ctx.gpr[8] & 15u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    if (!ctx.execute_signed_sub(8u, 8u, 9u)) { rt.arithmetic_overflow(0x08973718u, 0x01094022u); return; }
      if (branch_taken) {
          goto L_0897375C;
      }
      goto L_0897371C;
    }
L_0897371C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(80);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(96);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(112);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(128);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[31] | 0u);
      if (branch_taken) {
          goto L_0897375C;
      }
      goto L_08973750;
    }
L_08973750:
    ctx.gpr[31] = (0x08973758u);
    // nop
    goto L_08973764;
L_08973758:
    ctx.gpr[31] = (ctx.gpr[7] | 0u);
    goto L_0897375C;
L_0897375C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973764:
    // PSP CACHE is a no-op in coherent host memory.
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 4u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 32u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 40u, 4u);
      ctx.eat_vfpu_prefixes(); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(80);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(96);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(112);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<11u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(128);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
      if (branch_taken) {
          goto L_089737AC;
      }
      goto L_08973798;
    }
L_08973798:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973764;
      }
      goto L_089737A4;
    }
L_089737A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089737AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.execute_vfpu_vmmov(32u, 40u, 4u);
    ctx.gpr[4] = (ctx.gpr[5] + 0u);
    ctx.gpr[31] = (0x089737CCu);
    ctx.gpr[5] = (ctx.gpr[6] + 0u);
    goto L_08973764;
L_089737CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089737A4;
      }
      goto L_089737E4;
    }
L_089737E4:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
      if (branch_taken) {
          goto L_08973764;
      }
      goto L_089737F8;
    }
L_089737F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9220), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9224), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08973810u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7856), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 192u, 0x088091ECu>(ctx, &aot_mem) && ctx.pc == 0x08973810u) goto L_08973810;
    return;
L_08973810:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897381C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08973838u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 257u, 0x08809600u>(ctx, &aot_mem) && ctx.pc == 0x08973838u) goto L_08973838;
    return;
L_08973838:
    ctx.gpr[31] = (0x08973840u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08973840u) goto L_08973840;
    return;
L_08973840:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897384C:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3440));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(808), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897385C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973864:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897386C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973874:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897387C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973884:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897388C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08973C88;
      }
      goto L_089738E0;
    }
L_089738E0:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x089738ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 18u, 0x0897414Cu>(ctx, &aot_mem) && ctx.pc == 0x089738ECu) goto L_089738EC;
    return;
L_089738EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973944;
      }
      goto L_089738F4;
    }
L_089738F4:
    ctx.gpr[31] = (0x089738FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 16u, 0x0897413Cu>(ctx, &aot_mem) && ctx.pc == 0x089738FCu) goto L_089738FC;
    return;
L_089738FC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08973908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897385C;
L_08973908:
    ctx.gpr[31] = (0x08973910u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 262u, 0x08AFD778u>(ctx, &aot_mem) && ctx.pc == 0x08973910u) goto L_08973910;
    return;
L_08973910:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08973924u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 16u, 0x0897413Cu>(ctx, &aot_mem) && ctx.pc == 0x08973924u) goto L_08973924;
    return;
L_08973924:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08973944;
L_08973944:
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08973960u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 16u, 0x0897413Cu>(ctx, &aot_mem) && ctx.pc == 0x08973960u) goto L_08973960;
    return;
L_08973960:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[28] - ctx.fpr[12];
    ctx.gpr[31] = (0x08973988u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 16u, 0x0897413Cu>(ctx, &aot_mem) && ctx.pc == 0x08973988u) goto L_08973988;
    return;
L_08973988:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[31] = (0x089739B8u);
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 16u, 0x0897413Cu>(ctx, &aot_mem) && ctx.pc == 0x089739B8u) goto L_089739B8;
    return;
L_089739B8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089739D8;
      }
      goto L_089739CC;
    }
L_089739CC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089739D8;
L_089739D8:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089739F4u);
    ctx.fpr[15] = ctx.fpr[26] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x089739F4u) goto L_089739F4;
    return;
L_089739F4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08973A5C;
      }
      goto L_08973A14;
    }
L_08973A14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08973A5C;
      }
      goto L_08973A2C;
    }
L_08973A2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08973A5C;
      }
      goto L_08973A44;
    }
L_08973A44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08973A64;
      }
      goto L_08973A5C;
    }
L_08973A5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08973A64;
      }
      goto L_08973A64;
    }
L_08973A64:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973BD4;
      }
      goto L_08973A6C;
    }
L_08973A6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08973AD4;
      }
      goto L_08973A8C;
    }
L_08973A8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08973AD4;
      }
      goto L_08973AA4;
    }
L_08973AA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08973AD4;
      }
      goto L_08973ABC;
    }
L_08973ABC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08973ADC;
      }
      goto L_08973AD4;
    }
L_08973AD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08973ADC;
      }
      goto L_08973ADC;
    }
L_08973ADC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973BD4;
      }
      goto L_08973AE4;
    }
L_08973AE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08973B4C;
      }
      goto L_08973B04;
    }
L_08973B04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08973B4C;
      }
      goto L_08973B1C;
    }
L_08973B1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08973B4C;
      }
      goto L_08973B34;
    }
L_08973B34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08973B54;
      }
      goto L_08973B4C;
    }
L_08973B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08973B54;
      }
      goto L_08973B54;
    }
L_08973B54:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973BD4;
      }
      goto L_08973B5C;
    }
L_08973B5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08973BC4;
      }
      goto L_08973B7C;
    }
L_08973B7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08973BC4;
      }
      goto L_08973B94;
    }
L_08973B94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08973BC4;
      }
      goto L_08973BAC;
    }
L_08973BAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08973BCC;
      }
      goto L_08973BC4;
    }
L_08973BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08973BCC;
      }
      goto L_08973BCC;
    }
L_08973BCC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973BE8;
      }
      goto L_08973BD4;
    }
L_08973BD4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08973BE8u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 591u, 0x08AC26C4u>(ctx, &aot_mem) && ctx.pc == 0x08973BE8u) goto L_08973BE8;
    return;
L_08973BE8:
    ctx.gpr[31] = (0x08973BF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 18u, 0x0897414Cu>(ctx, &aot_mem) && ctx.pc == 0x08973BF0u) goto L_08973BF0;
    return;
L_08973BF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973C38;
      }
      goto L_08973BF8;
    }
L_08973BF8:
    ctx.gpr[31] = (0x08973C00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 16u, 0x0897413Cu>(ctx, &aot_mem) && ctx.pc == 0x08973C00u) goto L_08973C00;
    return;
L_08973C00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08973C8C;
      }
      goto L_08973C38;
    }
L_08973C38:
    ctx.gpr[31] = (0x08973C40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 16u, 0x0897413Cu>(ctx, &aot_mem) && ctx.pc == 0x08973C40u) goto L_08973C40;
    return;
L_08973C40:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08973C4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897385C;
L_08973C4C:
    ctx.gpr[31] = (0x08973C54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 262u, 0x08AFD778u>(ctx, &aot_mem) && ctx.pc == 0x08973C54u) goto L_08973C54;
    return;
L_08973C54:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08973C8C;
      }
      goto L_08973C88;
    }
L_08973C88:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08973C8C;
L_08973C8C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973CC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08973D04u);
    ctx.gpr[21] = (ctx.gpr[5] & 65535u);
    goto L_0897385C;
L_08973D04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973D44;
      }
      goto L_08973D0C;
    }
L_08973D0C:
    ctx.gpr[31] = (0x08973D14u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0897385C;
L_08973D14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08973D20u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 264u, 0x08AFD788u>(ctx, &aot_mem) && ctx.pc == 0x08973D20u) goto L_08973D20;
    return;
L_08973D20:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08973D3Cu);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    goto L_0897388C;
L_08973D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973D48;
      }
      goto L_08973D44;
    }
L_08973D44:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08973D48;
L_08973D48:
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
L_08973D6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08973DA8u);
    ctx.gpr[21] = (ctx.gpr[5] & 65535u);
    goto L_0897385C;
L_08973DA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973DE8;
      }
      goto L_08973DB0;
    }
L_08973DB0:
    ctx.gpr[31] = (0x08973DB8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0897385C;
L_08973DB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08973DC4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 275u, 0x08AFD854u>(ctx, &aot_mem) && ctx.pc == 0x08973DC4u) goto L_08973DC4;
    return;
L_08973DC4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08973DE0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    goto L_0897388C;
L_08973DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973DEC;
      }
      goto L_08973DE8;
    }
L_08973DE8:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08973DEC;
L_08973DEC:
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
L_08973E10:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 126u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08973E38;
      }
      goto L_08973E20;
    }
L_08973E20:
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08973E38;
      }
      goto L_08973E30;
    }
L_08973E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973E3C;
      }
      goto L_08973E38;
    }
L_08973E38:
    ctx.gpr[2] = (0u | 0u);
    goto L_08973E3C;
L_08973E3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973E44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-89));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 12u, 0x089740F4u>(ctx, &aot_mem); return;
      }
      goto L_08973E64;
    }
L_08973E64:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7936)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973E7C:
    ctx.gpr[31] = (0x08973E84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 14u, 0x0897412Cu>(ctx, &aot_mem) && ctx.pc == 0x08973E84u) goto L_08973E84;
    return;
L_08973E84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08973EACu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 13u, 0x08974104u>(ctx, &aot_mem) && ctx.pc == 0x08973EACu) goto L_08973EAC;
    return;
L_08973EAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 12u, 0x089740F4u>(ctx, &aot_mem); return;
      }
      goto L_08973EB4;
    }
L_08973EB4:
    ctx.gpr[31] = (0x08973EBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 14u, 0x0897412Cu>(ctx, &aot_mem) && ctx.pc == 0x08973EBCu) goto L_08973EBC;
    return;
L_08973EBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08973EE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 13u, 0x08974104u>(ctx, &aot_mem) && ctx.pc == 0x08973EE8u) goto L_08973EE8;
    return;
L_08973EE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 12u, 0x089740F4u>(ctx, &aot_mem); return;
      }
      goto L_08973EF0;
    }
L_08973EF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973F3C;
      }
      goto L_08973EFC;
    }
L_08973EFC:
    ctx.gpr[31] = (0x08973F04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 14u, 0x0897412Cu>(ctx, &aot_mem) && ctx.pc == 0x08973F04u) goto L_08973F04;
    return;
L_08973F04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 237u);
    ctx.gpr[6] = (0u | 130u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 180u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08973F34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 13u, 0x08974104u>(ctx, &aot_mem) && ctx.pc == 0x08973F34u) goto L_08973F34;
    return;
L_08973F34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973F74;
      }
      goto L_08973F3C;
    }
L_08973F3C:
    ctx.gpr[31] = (0x08973F44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 14u, 0x0897412Cu>(ctx, &aot_mem) && ctx.pc == 0x08973F44u) goto L_08973F44;
    return;
L_08973F44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08973F74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 13u, 0x08974104u>(ctx, &aot_mem) && ctx.pc == 0x08973F74u) goto L_08973F74;
    return;
L_08973F74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 12u, 0x089740F4u>(ctx, &aot_mem); return;
      }
      goto L_08973F7C;
    }
L_08973F7C:
    ctx.gpr[31] = (0x08973F84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 14u, 0x0897412Cu>(ctx, &aot_mem) && ctx.pc == 0x08973F84u) goto L_08973F84;
    return;
L_08973F84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 75u);
    ctx.gpr[6] = (0u | 151u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08973FB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 13u, 0x08974104u>(ctx, &aot_mem) && ctx.pc == 0x08973FB0u) goto L_08973FB0;
    return;
L_08973FB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 12u, 0x089740F4u>(ctx, &aot_mem); return;
      }
      goto L_08973FB8;
    }
L_08973FB8:
    ctx.gpr[31] = (0x08973FC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 14u, 0x0897412Cu>(ctx, &aot_mem) && ctx.pc == 0x08973FC0u) goto L_08973FC0;
    return;
L_08973FC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[6] = (0u | 155u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 210u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08973FF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 13u, 0x08974104u>(ctx, &aot_mem) && ctx.pc == 0x08973FF0u) goto L_08973FF0;
    return;
L_08973FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 12u, 0x089740F4u>(ctx, &aot_mem); return;
      }
      goto L_08973FF8;
    }
L_08973FF8:
    ctx.gpr[31] = (0x08974000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 14u, 0x0897412Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0091(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0091_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_91(Runtime &runtime) {
    runtime.register_generated_unit(91u, 0x08970000u, 16384u, &recomp_unit_0091, &recomp_unit_0091_entry);
    runtime.register_function(0x08970000u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970014u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970038u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897004Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970054u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897005Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970074u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970088u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970094u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089700B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089700D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089700F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970110u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970118u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970134u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970150u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897015Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970168u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970170u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970178u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970180u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970188u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970190u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970198u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089701A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089701A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089701B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089701C0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089701C8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089701D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089701E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089701E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089701F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970200u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970208u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970218u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970220u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970228u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970238u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970240u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970248u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970258u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970260u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970268u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970278u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970280u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970284u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897028Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970298u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089702A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089702B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089702BCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089702C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089702CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089702D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089702DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089702E4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089702ECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089702FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897030Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897031Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897032Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897033Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970348u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897034Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970354u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970368u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970370u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970374u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897037Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970388u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897039Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089703A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089703ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089703C8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970420u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897042Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970438u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970440u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970444u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897045Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970464u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970470u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970484u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897048Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970494u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089704A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089704B0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089704B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089704C8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089704D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089704D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089704DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089704E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089704FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970504u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897050Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970518u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970528u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970530u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970534u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897053Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970578u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970580u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897058Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970598u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089705A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089705B0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089705BCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089705C8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089705D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089705E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897062Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970638u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897065Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970680u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089706A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089706C8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970754u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970798u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089707A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089707ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089707B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089707C8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089707FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970810u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970818u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970844u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897084Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970870u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970874u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897088Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089708A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089708B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089708F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970904u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970914u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970944u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970954u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897095Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970980u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970990u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970994u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897099Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089709ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089709B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089709BCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089709C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089709CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089709D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089709E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089709E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970A08u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970A28u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970A48u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970A68u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970A78u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970A9Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970AA8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970AACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970ABCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970AD4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970AE0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970AF0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970B08u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970B14u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970B24u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970B2Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970B40u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970B48u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970B58u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970B64u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970BB4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970BD0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970BD8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970C5Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970CBCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970CD0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970CE0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970CF4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D18u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D24u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D30u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D58u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D60u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D80u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D8Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D90u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970DA4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970DACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970DC0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970DE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970DF8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970E00u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970E08u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970E2Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970E38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970E5Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970E68u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970E8Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970E98u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970EBCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970EC8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970ED4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970EE4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970F00u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970F14u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970F28u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970F38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970F48u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970F50u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970F58u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970F64u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970F70u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970F78u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970F90u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970F98u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970FA0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970FACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970FBCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970FC4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970FCCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970FD4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970FECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971004u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897100Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897102Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971034u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897103Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971048u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971058u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971060u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971068u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971070u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971094u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897109Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089710A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089710B0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089710B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089710D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089710F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971110u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971138u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897113Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971154u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971160u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971174u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089711A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089711ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089711B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089711BCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971200u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897120Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971218u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971238u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897123Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971244u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897125Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971268u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897127Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971288u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971290u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897129Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089712A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089712B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089712BCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089712D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089713A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089713A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089713B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971408u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971508u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971510u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971540u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897156Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971588u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971594u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897159Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089715D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089715DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089715F0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089715F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971660u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971668u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971670u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089716A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089716C0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971818u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897182Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971834u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897183Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971844u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971858u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089718A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089718F0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089718F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971900u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971910u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971918u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971920u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971930u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971938u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897198Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897199Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089719A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089719B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089719FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A08u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A0Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A1Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A2Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A34u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A44u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A50u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A54u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A80u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971AACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971AD8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971AFCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971B90u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971BB4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971BD0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971BE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971BF4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971BFCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971C10u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971C18u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971C38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971C40u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971C48u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971C80u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971CA0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971CB8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971CC0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971CC4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971CE4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971CF0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D04u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D14u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D1Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D24u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D30u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D3Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D68u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D78u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D8Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D94u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971DBCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971DCCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971DD4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971DE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971DECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E00u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E08u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E1Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E44u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E54u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E60u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E70u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E78u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E98u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971EC8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971ED4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971EE4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971EF0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F10u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F18u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F20u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F28u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F30u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F44u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F48u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F4Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F54u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F58u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F74u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F88u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971FC0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971FF8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972030u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972034u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897203Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897204Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972054u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972060u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972074u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897207Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897208Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897209Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089720A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089720ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089720BCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089720D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089720D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089720E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089720E4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089720F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089720FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972104u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897210Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972114u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972118u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972120u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972128u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972138u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972140u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972148u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972150u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972158u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897215Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972164u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897216Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972178u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972180u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972188u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897218Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972194u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089721A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089721A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089721D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972200u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897220Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972210u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972218u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972224u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972234u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972250u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897225Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972268u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972270u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897227Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897228Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089722A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089722A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089722B0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089722C0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089722D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089722DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972320u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972328u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972338u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972340u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972348u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972360u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897236Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972378u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972384u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972390u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089723A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089723B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089723C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089723D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089723D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089723E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972420u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972438u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972440u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972448u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972454u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897245Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972468u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897247Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972484u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972494u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089724A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089724B0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089724B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089724C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089724DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089724E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089724F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972548u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972554u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972560u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972568u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972588u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089725A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089725B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089725C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089725D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089725E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089725FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972610u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972618u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972628u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972634u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972648u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972650u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897265Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972664u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972670u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897268Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089726A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089726A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089726ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089726B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089726C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089726D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089726E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089726F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089726FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972700u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972710u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972718u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972720u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972728u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972730u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972734u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897273Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972740u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972748u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972750u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972790u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089727C8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089727D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089727E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089727ECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089727F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972800u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972808u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972810u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972818u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972828u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972834u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897283Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972848u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972850u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972860u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897286Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972878u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972880u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972888u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897289Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089728B0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089728C0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089728CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089728D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089728E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089728F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972904u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972910u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972918u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972924u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972940u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972944u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897294Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972954u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972968u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897296Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897299Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089729E4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089729ECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089729FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972A40u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972A48u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972A78u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972A94u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972AA8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972AB0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972AB4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972AB8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972AC0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972ACCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972AD8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972AE4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972AECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972AF0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972AF4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B00u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B0Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B14u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B18u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B34u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B50u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B58u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B60u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B6Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B78u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B80u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B84u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B8Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B94u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972BB0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972BB4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972BBCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972BC4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972BECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C0Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C18u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C20u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C28u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C48u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C50u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C58u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C60u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C6Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C74u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C78u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C80u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C88u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C94u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C9Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972CA0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972CA8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972CB0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972CBCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972CCCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972CD8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972CE4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972CE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972CF8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972D0Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972D38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972D48u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972D50u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972D58u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972D60u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972D64u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972D80u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972DA4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972DBCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972DC8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972DE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972E68u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972EA0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972EA4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972EB4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972EBCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972EC4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972ECCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972ED0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972EF4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972F14u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972F20u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972F2Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972F40u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972F60u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972F68u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972F88u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972FA0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972FB8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972FC0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972FD4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972FECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972FF4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973008u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973020u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973028u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897303Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897305Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973064u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973070u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973080u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973084u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973098u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089730ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089730C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089730D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089730F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973104u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897310Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973118u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973120u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897312Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897313Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897314Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973160u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973168u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897317Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973198u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089731ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089731B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089731D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089731E4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089731F0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973204u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897320Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973220u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973234u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973254u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973260u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973268u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973274u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973288u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973290u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089732A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089732B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089732C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089732CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089732D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089732E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089732F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973304u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973314u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973344u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973350u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973370u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973378u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897337Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973544u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973550u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897355Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973564u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897356Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973588u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897358Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089735ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089735C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089735DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973644u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897364Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973650u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973670u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973684u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973690u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089736A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089736BCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089736D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089736D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089736E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089736E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089736F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973704u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897371Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973750u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973758u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897375Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973764u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973798u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089737A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089737ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089737CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089737E4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089737F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973810u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897381Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973838u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973840u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897384Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897385Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973864u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897386Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973874u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897387Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973884u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897388Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089738E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089738ECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089738F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089738FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973908u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973910u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973924u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973944u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973960u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973988u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089739B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089739CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089739D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089739F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A14u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A2Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A44u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A5Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A64u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A6Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A8Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973AA4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973ABCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973AD4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973ADCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973AE4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973B04u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973B1Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973B34u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973B4Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973B54u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973B5Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973B7Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973B94u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973BACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973BC4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973BCCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973BD4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973BE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973BF0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973BF8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973C00u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973C38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973C40u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973C4Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973C54u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973C88u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973C8Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973CC8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973D04u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973D0Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973D14u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973D20u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973D3Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973D44u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973D48u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973D6Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973DA8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973DB0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973DB8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973DC4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973DE0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973DE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973DECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E10u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E20u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E30u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E3Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E44u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E64u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E7Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E84u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973EACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973EB4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973EBCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973EE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973EF0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973EFCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973F04u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973F34u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973F3Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973F44u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973F74u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973F7Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973F84u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973FB0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973FB8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973FC0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973FF0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973FF8u, &recomp_unit_0091, "recomp_unit_0091");
}
} // namespace psprecomp
