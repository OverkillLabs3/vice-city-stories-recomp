#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0112[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 6, 7, 8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11,
    0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 15, 0, 0, 16, 0, 0, 0, 17, 0, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 24, 25, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 38, 39, 0,
    40, 0, 41, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 47, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 53, 54, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 67, 68,
    0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 76,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 81, 82, 0, 83, 0, 84, 0, 0, 0, 85, 0, 86, 0,
    87, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 91, 0, 0, 92, 0, 0, 0, 93, 0, 94, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 100, 101, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113,
    0, 114, 115, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 128, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0,
    132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 139, 140, 0, 141, 0, 142, 0,
    0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 151, 152,
    0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 159, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166,
    0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 181, 182, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 189, 0, 190, 0, 0, 0, 191, 192, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 0, 210, 211, 0, 212, 0, 0, 213, 0, 214, 0, 215, 0, 216, 217, 0, 218, 0, 0,
    219, 0, 220, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0,
    0, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 248, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0,
    259, 0, 0, 0, 0, 260, 0, 0, 0, 261, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 266, 0, 267, 268, 0, 269, 0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 276, 277,
    0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0,
    0, 0, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 294, 0, 0, 295, 0, 296, 297, 0,
    298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 310, 0, 311, 312, 0, 313, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 319, 0,
    0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 323, 324, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0,
    0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 342, 0, 0, 343, 0,
    0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 351, 0,
    352, 0, 0, 353, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 360, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 364, 0, 365, 0, 0,
    0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 369, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 375, 0, 0,
    376, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 382, 0, 383, 0, 0, 384, 0, 385,
    0, 386, 0, 387, 388, 0, 389, 0, 0, 390, 0, 391, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0,
    0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 404,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0,
    0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0,
    0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0,
    0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 421, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 430, 431, 0, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0,
    0, 0, 0, 0, 451, 0, 452, 0, 453, 0, 454, 0, 0, 0, 455, 0, 456, 0, 457, 0, 0, 0, 0, 0, 458, 0, 459, 0, 460, 0, 461, 0,
    0, 0, 462, 0, 463, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0,
    0, 469, 0, 0, 470, 0, 0, 471, 0, 472, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 478,
    0, 479, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0,
    483, 0, 484, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 490, 0, 491, 0, 0, 492, 0,
    493, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 498, 0, 0, 499, 0, 500, 0, 0, 0,
    0, 0, 501, 502, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0,
    0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0,
    0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 515, 516, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 519,
    0, 0, 0, 520, 0, 521, 0, 522, 0, 0, 523, 0, 524, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0,
    0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 532, 0, 0, 0, 0, 533, 534, 0, 0, 0, 0, 535, 0,
    536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 541, 0, 542, 0, 0, 0,
    0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0,
    0, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0, 554, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559, 0, 0, 0,
    560, 0, 561, 0, 0, 562, 0, 0, 0, 0, 563, 0, 564, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 0,
    0, 569, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0,
    585, 586, 0, 587, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0,
    0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 600, 0, 0, 0,
    0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 605, 0, 0, 606, 0, 607, 0, 0, 0, 0,
    608, 0, 609, 0, 0, 0, 610, 0, 611, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 614, 0, 615, 0, 616, 0, 0, 0, 617, 0, 618, 0, 0,
    0, 0, 619, 0, 620, 0, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 627, 0, 0,
    628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 631, 0,
    632, 0, 633, 0, 0, 634, 0, 0, 0, 635, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646,
    0, 647, 0, 648, 0, 0, 0, 649, 0, 0, 650, 0, 651, 0, 0, 0, 652, 0, 653, 654, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0, 657, 0,
    658, 0, 659, 0, 660, 0, 0, 661, 0, 662, 0, 0, 663, 0, 664, 0, 665, 0, 0, 666, 0, 667, 0, 0, 668, 669, 0, 0, 0, 670, 0, 671,
    0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 676, 0, 0, 0, 677, 0, 678, 0, 679, 0, 680, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 683, 0, 684, 0, 685, 0, 0, 686, 0, 0, 0, 687, 0, 688, 689, 690, 0, 0, 0, 691,
    0, 0, 692, 0, 693, 0, 0, 0, 694, 0, 0, 695, 0, 696, 697, 0, 698, 0, 699, 0, 0, 700, 0, 701, 702, 0, 703, 0, 704, 0, 0, 705,
    0, 706, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 709, 0, 710, 0, 711, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0,
    715, 0, 716, 0, 717, 0, 718, 0, 719, 0, 0, 720, 0, 0, 721, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 724, 0, 725, 0, 726, 0, 727,
    0, 728, 0, 729, 0, 730, 0, 0, 731, 0, 732, 0, 733, 0, 0, 0, 0, 734, 0, 735, 0, 0, 736, 737, 0, 738, 0, 0, 0, 0, 739, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 744, 0, 745, 0, 0, 746, 0,
    0, 0, 0, 747, 0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 751, 752, 0, 0, 753, 0, 754, 0, 755, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0,
    0, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 760, 0, 761, 0, 762, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 764, 0, 0, 0, 765, 0, 766, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 771,
    0, 0, 0, 0, 772, 0, 773, 0, 774, 0, 0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0,
    0, 0, 778, 0, 0, 0, 779, 0, 780, 0, 781, 0, 0, 0, 782, 0, 783, 0, 0, 0, 784, 0, 0, 785, 0, 0, 0, 0, 0, 786, 0, 787,
    788, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 792, 0, 793,
    0, 0, 0, 0, 0, 0, 0, 794, 0, 795, 0, 796, 0, 0, 797, 0, 798, 0, 799, 0, 800, 0, 801, 0, 0, 0, 802, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 804, 0, 805, 0, 806, 0, 0, 807, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 811, 0, 0, 812, 0, 813, 0, 0, 0, 0, 814, 0, 815,
    0, 0, 0, 0, 816, 0, 817, 818, 0, 0, 819, 0, 0, 820, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 823, 0, 0, 824, 0, 0, 0, 0,
    0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0, 829, 0, 0, 830, 0, 0,
    0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 835, 0, 0, 836, 0, 837, 0,
    0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0, 842, 0,
    0, 0, 0, 843, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    846, 0, 0, 847, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 850, 0, 851, 0, 0, 0, 852, 0, 853, 0, 0, 0,
    0, 854, 0, 855, 856, 0, 0, 857, 0, 858, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 860, 0, 861, 0, 0, 0, 0,
    862, 0, 863, 0, 0, 864, 0, 865, 0, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 868, 0, 0, 0, 869, 0, 870, 0, 0, 0, 0, 871, 0, 872, 0, 0, 0, 0, 873, 0, 874, 875, 0, 876, 0, 877, 0,
    878, 0, 879, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 882, 0, 883, 0, 0, 884, 0, 0, 885, 0,
    886, 0, 887, 0, 888, 889, 0, 890, 0, 0, 891, 0, 892, 0, 0, 0, 0, 0, 0, 893, 0, 894, 0, 0, 0, 0, 895, 0, 0, 0, 896, 0,
    0, 0, 897, 0, 898, 0, 899, 900, 0, 0, 0, 901, 0, 0, 902, 0, 903, 0, 904, 0, 905, 0, 0, 0, 906, 0, 0, 0, 0, 0, 907, 0,
    0, 0, 0, 0, 908, 0, 0, 0, 909, 0, 0, 910, 0, 0, 911, 0, 0, 912, 0, 0, 913, 0, 0, 914, 0, 915, 0, 916, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 0, 0, 0, 920, 0, 0, 921,
};
void recomp_unit_0112_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089C4000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0112[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C4000;
    case 2u: goto L_089C4020;
    case 3u: goto L_089C402C;
    case 4u: goto L_089C4038;
    case 5u: goto L_089C4044;
    case 6u: goto L_089C404C;
    case 7u: goto L_089C4050;
    case 8u: goto L_089C4054;
    case 9u: goto L_089C4060;
    case 10u: goto L_089C4070;
    case 11u: goto L_089C407C;
    case 12u: goto L_089C4088;
    case 13u: goto L_089C4098;
    case 14u: goto L_089C40A4;
    case 15u: goto L_089C40A8;
    case 16u: goto L_089C40B4;
    case 17u: goto L_089C40C4;
    case 18u: goto L_089C40CC;
    case 19u: goto L_089C40D0;
    case 20u: goto L_089C40FC;
    case 21u: goto L_089C4108;
    case 22u: goto L_089C4114;
    case 23u: goto L_089C4120;
    case 24u: goto L_089C4128;
    case 25u: goto L_089C412C;
    case 26u: goto L_089C4134;
    case 27u: goto L_089C413C;
    case 28u: goto L_089C414C;
    case 29u: goto L_089C415C;
    case 30u: goto L_089C4168;
    case 31u: goto L_089C419C;
    case 32u: goto L_089C41A4;
    case 33u: goto L_089C41A8;
    case 34u: goto L_089C41C8;
    case 35u: goto L_089C41D4;
    case 36u: goto L_089C41E0;
    case 37u: goto L_089C41EC;
    case 38u: goto L_089C41F4;
    case 39u: goto L_089C41F8;
    case 40u: goto L_089C4200;
    case 41u: goto L_089C4208;
    case 42u: goto L_089C4218;
    case 43u: goto L_089C4220;
    case 44u: goto L_089C422C;
    case 45u: goto L_089C423C;
    case 46u: goto L_089C424C;
    case 47u: goto L_089C4254;
    case 48u: goto L_089C4258;
    case 49u: goto L_089C427C;
    case 50u: goto L_089C4288;
    case 51u: goto L_089C4294;
    case 52u: goto L_089C42A0;
    case 53u: goto L_089C42A8;
    case 54u: goto L_089C42AC;
    case 55u: goto L_089C42B4;
    case 56u: goto L_089C42BC;
    case 57u: goto L_089C42CC;
    case 58u: goto L_089C42E0;
    case 59u: goto L_089C42EC;
    case 60u: goto L_089C4320;
    case 61u: goto L_089C4328;
    case 62u: goto L_089C432C;
    case 63u: goto L_089C434C;
    case 64u: goto L_089C4358;
    case 65u: goto L_089C4364;
    case 66u: goto L_089C4370;
    case 67u: goto L_089C4378;
    case 68u: goto L_089C437C;
    case 69u: goto L_089C4384;
    case 70u: goto L_089C438C;
    case 71u: goto L_089C439C;
    case 72u: goto L_089C43AC;
    case 73u: goto L_089C43B8;
    case 74u: goto L_089C43F0;
    case 75u: goto L_089C43F8;
    case 76u: goto L_089C43FC;
    case 77u: goto L_089C4420;
    case 78u: goto L_089C442C;
    case 79u: goto L_089C4438;
    case 80u: goto L_089C4444;
    case 81u: goto L_089C444C;
    case 82u: goto L_089C4450;
    case 83u: goto L_089C4458;
    case 84u: goto L_089C4460;
    case 85u: goto L_089C4470;
    case 86u: goto L_089C4478;
    case 87u: goto L_089C4480;
    case 88u: goto L_089C448C;
    case 89u: goto L_089C44A0;
    case 90u: goto L_089C44B4;
    case 91u: goto L_089C44B8;
    case 92u: goto L_089C44C4;
    case 93u: goto L_089C44D4;
    case 94u: goto L_089C44DC;
    case 95u: goto L_089C44E0;
    case 96u: goto L_089C450C;
    case 97u: goto L_089C4518;
    case 98u: goto L_089C4524;
    case 99u: goto L_089C4530;
    case 100u: goto L_089C4538;
    case 101u: goto L_089C453C;
    case 102u: goto L_089C4544;
    case 103u: goto L_089C454C;
    case 104u: goto L_089C455C;
    case 105u: goto L_089C456C;
    case 106u: goto L_089C4578;
    case 107u: goto L_089C45AC;
    case 108u: goto L_089C45B4;
    case 109u: goto L_089C45B8;
    case 110u: goto L_089C45D8;
    case 111u: goto L_089C45E4;
    case 112u: goto L_089C45F0;
    case 113u: goto L_089C45FC;
    case 114u: goto L_089C4604;
    case 115u: goto L_089C4608;
    case 116u: goto L_089C4610;
    case 117u: goto L_089C4618;
    case 118u: goto L_089C4628;
    case 119u: goto L_089C4640;
    case 120u: goto L_089C4674;
    case 121u: goto L_089C467C;
    case 122u: goto L_089C4680;
    case 123u: goto L_089C46A4;
    case 124u: goto L_089C46B0;
    case 125u: goto L_089C46BC;
    case 126u: goto L_089C46C8;
    case 127u: goto L_089C46D0;
    case 128u: goto L_089C46D4;
    case 129u: goto L_089C46DC;
    case 130u: goto L_089C46E4;
    case 131u: goto L_089C46F4;
    case 132u: goto L_089C4700;
    case 133u: goto L_089C4708;
    case 134u: goto L_089C4710;
    case 135u: goto L_089C4738;
    case 136u: goto L_089C4744;
    case 137u: goto L_089C4750;
    case 138u: goto L_089C475C;
    case 139u: goto L_089C4764;
    case 140u: goto L_089C4768;
    case 141u: goto L_089C4770;
    case 142u: goto L_089C4778;
    case 143u: goto L_089C4788;
    case 144u: goto L_089C479C;
    case 145u: goto L_089C47A4;
    case 146u: goto L_089C47A8;
    case 147u: goto L_089C47CC;
    case 148u: goto L_089C47D8;
    case 149u: goto L_089C47E4;
    case 150u: goto L_089C47F0;
    case 151u: goto L_089C47F8;
    case 152u: goto L_089C47FC;
    case 153u: goto L_089C4804;
    case 154u: goto L_089C480C;
    case 155u: goto L_089C481C;
    case 156u: goto L_089C4858;
    case 157u: goto L_089C489C;
    case 158u: goto L_089C48A8;
    case 159u: goto L_089C48AC;
    case 160u: goto L_089C48B4;
    case 161u: goto L_089C48C0;
    case 162u: goto L_089C48C8;
    case 163u: goto L_089C48D8;
    case 164u: goto L_089C48E4;
    case 165u: goto L_089C48F0;
    case 166u: goto L_089C48FC;
    case 167u: goto L_089C4904;
    case 168u: goto L_089C4914;
    case 169u: goto L_089C4920;
    case 170u: goto L_089C4958;
    case 171u: goto L_089C4998;
    case 172u: goto L_089C49B0;
    case 173u: goto L_089C49B8;
    case 174u: goto L_089C49D8;
    case 175u: goto L_089C49F0;
    case 176u: goto L_089C4A08;
    case 177u: goto L_089C4A14;
    case 178u: goto L_089C4A24;
    case 179u: goto L_089C4A30;
    case 180u: goto L_089C4A3C;
    case 181u: goto L_089C4A44;
    case 182u: goto L_089C4A48;
    case 183u: goto L_089C4A4C;
    case 184u: goto L_089C4A58;
    case 185u: goto L_089C4A64;
    case 186u: goto L_089C4A9C;
    case 187u: goto L_089C4ADC;
    case 188u: goto L_089C4AF0;
    case 189u: goto L_089C4B08;
    case 190u: goto L_089C4B10;
    case 191u: goto L_089C4B20;
    case 192u: goto L_089C4B24;
    case 193u: goto L_089C4B2C;
    case 194u: goto L_089C4B38;
    case 195u: goto L_089C4B68;
    case 196u: goto L_089C4B8C;
    case 197u: goto L_089C4B98;
    case 198u: goto L_089C4BAC;
    case 199u: goto L_089C4BB4;
    case 200u: goto L_089C4BC0;
    case 201u: goto L_089C4BCC;
    case 202u: goto L_089C4BD8;
    case 203u: goto L_089C4BE0;
    case 204u: goto L_089C4BE8;
    case 205u: goto L_089C4BF0;
    case 206u: goto L_089C4C14;
    case 207u: goto L_089C4C1C;
    case 208u: goto L_089C4C24;
    case 209u: goto L_089C4C2C;
    case 210u: goto L_089C4C38;
    case 211u: goto L_089C4C3C;
    case 212u: goto L_089C4C44;
    case 213u: goto L_089C4C50;
    case 214u: goto L_089C4C58;
    case 215u: goto L_089C4C60;
    case 216u: goto L_089C4C68;
    case 217u: goto L_089C4C6C;
    case 218u: goto L_089C4C74;
    case 219u: goto L_089C4C80;
    case 220u: goto L_089C4C88;
    case 221u: goto L_089C4C8C;
    case 222u: goto L_089C4CBC;
    case 223u: goto L_089C4CD4;
    case 224u: goto L_089C4CF4;
    case 225u: goto L_089C4D0C;
    case 226u: goto L_089C4D1C;
    case 227u: goto L_089C4D24;
    case 228u: goto L_089C4D54;
    case 229u: goto L_089C4D6C;
    case 230u: goto L_089C4D8C;
    case 231u: goto L_089C4D94;
    case 232u: goto L_089C4D9C;
    case 233u: goto L_089C4DA4;
    case 234u: goto L_089C4DD4;
    case 235u: goto L_089C4DEC;
    case 236u: goto L_089C4E0C;
    case 237u: goto L_089C4E14;
    case 238u: goto L_089C4E2C;
    case 239u: goto L_089C4E34;
    case 240u: goto L_089C4E58;
    case 241u: goto L_089C4E68;
    case 242u: goto L_089C4E74;
    case 243u: goto L_089C4EA4;
    case 244u: goto L_089C4EBC;
    case 245u: goto L_089C4EDC;
    case 246u: goto L_089C4EE8;
    case 247u: goto L_089C4EF0;
    case 248u: goto L_089C4EF8;
    case 249u: goto L_089C4F08;
    case 250u: goto L_089C4F3C;
    case 251u: goto L_089C4F54;
    case 252u: goto L_089C4F70;
    case 253u: goto L_089C4F8C;
    case 254u: goto L_089C4FD0;
    case 255u: goto L_089C5020;
    case 256u: goto L_089C5030;
    case 257u: goto L_089C5068;
    case 258u: goto L_089C5070;
    case 259u: goto L_089C5080;
    case 260u: goto L_089C5094;
    case 261u: goto L_089C50A4;
    case 262u: goto L_089C50A8;
    case 263u: goto L_089C50B0;
    case 264u: goto L_089C50D4;
    case 265u: goto L_089C50FC;
    case 266u: goto L_089C5108;
    case 267u: goto L_089C5110;
    case 268u: goto L_089C5114;
    case 269u: goto L_089C511C;
    case 270u: goto L_089C5124;
    case 271u: goto L_089C5130;
    case 272u: goto L_089C5138;
    case 273u: goto L_089C5148;
    case 274u: goto L_089C5158;
    case 275u: goto L_089C5164;
    case 276u: goto L_089C5178;
    case 277u: goto L_089C517C;
    case 278u: goto L_089C5184;
    case 279u: goto L_089C5198;
    case 280u: goto L_089C51A4;
    case 281u: goto L_089C51B8;
    case 282u: goto L_089C51C0;
    case 283u: goto L_089C51D0;
    case 284u: goto L_089C51E0;
    case 285u: goto L_089C51EC;
    case 286u: goto L_089C51F8;
    case 287u: goto L_089C520C;
    case 288u: goto L_089C521C;
    case 289u: goto L_089C5224;
    case 290u: goto L_089C5268;
    case 291u: goto L_089C5274;
    case 292u: goto L_089C52CC;
    case 293u: goto L_089C52D8;
    case 294u: goto L_089C52E0;
    case 295u: goto L_089C52EC;
    case 296u: goto L_089C52F4;
    case 297u: goto L_089C52F8;
    case 298u: goto L_089C5300;
    case 299u: goto L_089C5308;
    case 300u: goto L_089C5330;
    case 301u: goto L_089C533C;
    case 302u: goto L_089C5368;
    case 303u: goto L_089C539C;
    case 304u: goto L_089C53A8;
    case 305u: goto L_089C53B0;
    case 306u: goto L_089C53B8;
    case 307u: goto L_089C53C8;
    case 308u: goto L_089C53D0;
    case 309u: goto L_089C5400;
    case 310u: goto L_089C5408;
    case 311u: goto L_089C5410;
    case 312u: goto L_089C5414;
    case 313u: goto L_089C541C;
    case 314u: goto L_089C5424;
    case 315u: goto L_089C542C;
    case 316u: goto L_089C5450;
    case 317u: goto L_089C5460;
    case 318u: goto L_089C5470;
    case 319u: goto L_089C5478;
    case 320u: goto L_089C5488;
    case 321u: goto L_089C54B4;
    case 322u: goto L_089C54C0;
    case 323u: goto L_089C54C8;
    case 324u: goto L_089C54CC;
    case 325u: goto L_089C54D4;
    case 326u: goto L_089C54DC;
    case 327u: goto L_089C5508;
    case 328u: goto L_089C5514;
    case 329u: goto L_089C5524;
    case 330u: goto L_089C5550;
    case 331u: goto L_089C5574;
    case 332u: goto L_089C5584;
    case 333u: goto L_089C55BC;
    case 334u: goto L_089C55CC;
    case 335u: goto L_089C55D4;
    case 336u: goto L_089C55EC;
    case 337u: goto L_089C55FC;
    case 338u: goto L_089C5624;
    case 339u: goto L_089C562C;
    case 340u: goto L_089C565C;
    case 341u: goto L_089C5664;
    case 342u: goto L_089C566C;
    case 343u: goto L_089C5678;
    case 344u: goto L_089C5688;
    case 345u: goto L_089C56AC;
    case 346u: goto L_089C56B4;
    case 347u: goto L_089C56BC;
    case 348u: goto L_089C56C8;
    case 349u: goto L_089C56D8;
    case 350u: goto L_089C56F0;
    case 351u: goto L_089C56F8;
    case 352u: goto L_089C5700;
    case 353u: goto L_089C570C;
    case 354u: goto L_089C571C;
    case 355u: goto L_089C5724;
    case 356u: goto L_089C5738;
    case 357u: goto L_089C5744;
    case 358u: goto L_089C5760;
    case 359u: goto L_089C5768;
    case 360u: goto L_089C5778;
    case 361u: goto L_089C57B4;
    case 362u: goto L_089C57D8;
    case 363u: goto L_089C57E4;
    case 364u: goto L_089C57EC;
    case 365u: goto L_089C57F4;
    case 366u: goto L_089C5808;
    case 367u: goto L_089C5814;
    case 368u: goto L_089C5820;
    case 369u: goto L_089C5828;
    case 370u: goto L_089C5830;
    case 371u: goto L_089C5838;
    case 372u: goto L_089C585C;
    case 373u: goto L_089C5864;
    case 374u: goto L_089C586C;
    case 375u: goto L_089C5874;
    case 376u: goto L_089C5880;
    case 377u: goto L_089C5888;
    case 378u: goto L_089C5898;
    case 379u: goto L_089C58B0;
    case 380u: goto L_089C58C8;
    case 381u: goto L_089C58DC;
    case 382u: goto L_089C58E0;
    case 383u: goto L_089C58E8;
    case 384u: goto L_089C58F4;
    case 385u: goto L_089C58FC;
    case 386u: goto L_089C5904;
    case 387u: goto L_089C590C;
    case 388u: goto L_089C5910;
    case 389u: goto L_089C5918;
    case 390u: goto L_089C5924;
    case 391u: goto L_089C592C;
    case 392u: goto L_089C5930;
    case 393u: goto L_089C5960;
    case 394u: goto L_089C5978;
    case 395u: goto L_089C5998;
    case 396u: goto L_089C59B0;
    case 397u: goto L_089C59CC;
    case 398u: goto L_089C59D8;
    case 399u: goto L_089C5A0C;
    case 400u: goto L_089C5A24;
    case 401u: goto L_089C5A44;
    case 402u: goto L_089C5A60;
    case 403u: goto L_089C5A70;
    case 404u: goto L_089C5A7C;
    case 405u: goto L_089C5AB0;
    case 406u: goto L_089C5AC8;
    case 407u: goto L_089C5AE8;
    case 408u: goto L_089C5B04;
    case 409u: goto L_089C5B20;
    case 410u: goto L_089C5B2C;
    case 411u: goto L_089C5B54;
    case 412u: goto L_089C5B5C;
    case 413u: goto L_089C5B68;
    case 414u: goto L_089C5B84;
    case 415u: goto L_089C5B98;
    case 416u: goto L_089C5BAC;
    case 417u: goto L_089C5BDC;
    case 418u: goto L_089C5BF4;
    case 419u: goto L_089C5C14;
    case 420u: goto L_089C5C20;
    case 421u: goto L_089C5C28;
    case 422u: goto L_089C5C30;
    case 423u: goto L_089C5C40;
    case 424u: goto L_089C5C4C;
    case 425u: goto L_089C5C58;
    case 426u: goto L_089C5C94;
    case 427u: goto L_089C5CAC;
    case 428u: goto L_089C5CC8;
    case 429u: goto L_089C5CD0;
    case 430u: goto L_089C5CDC;
    case 431u: goto L_089C5CE0;
    case 432u: goto L_089C5CFC;
    case 433u: goto L_089C5D4C;
    case 434u: goto L_089C5DE4;
    case 435u: goto L_089C5E34;
    case 436u: goto L_089C5E94;
    case 437u: goto L_089C5EC4;
    case 438u: goto L_089C5F20;
    case 439u: goto L_089C5F54;
    case 440u: goto L_089C5FC0;
    case 441u: goto L_089C5FF0;
    case 442u: goto L_089C6060;
    case 443u: goto L_089C6090;
    case 444u: goto L_089C60F0;
    case 445u: goto L_089C6120;
    case 446u: goto L_089C617C;
    case 447u: goto L_089C61AC;
    case 448u: goto L_089C6214;
    case 449u: goto L_089C6244;
    case 450u: goto L_089C6278;
    case 451u: goto L_089C6290;
    case 452u: goto L_089C6298;
    case 453u: goto L_089C62A0;
    case 454u: goto L_089C62A8;
    case 455u: goto L_089C62B8;
    case 456u: goto L_089C62C0;
    case 457u: goto L_089C62C8;
    case 458u: goto L_089C62E0;
    case 459u: goto L_089C62E8;
    case 460u: goto L_089C62F0;
    case 461u: goto L_089C62F8;
    case 462u: goto L_089C6308;
    case 463u: goto L_089C6310;
    case 464u: goto L_089C6318;
    case 465u: goto L_089C6328;
    case 466u: goto L_089C634C;
    case 467u: goto L_089C6360;
    case 468u: goto L_089C6370;
    case 469u: goto L_089C6384;
    case 470u: goto L_089C6390;
    case 471u: goto L_089C639C;
    case 472u: goto L_089C63A4;
    case 473u: goto L_089C63B0;
    case 474u: goto L_089C63C0;
    case 475u: goto L_089C63D0;
    case 476u: goto L_089C63E4;
    case 477u: goto L_089C63F0;
    case 478u: goto L_089C63FC;
    case 479u: goto L_089C6404;
    case 480u: goto L_089C6410;
    case 481u: goto L_089C6448;
    case 482u: goto L_089C6468;
    case 483u: goto L_089C6480;
    case 484u: goto L_089C6488;
    case 485u: goto L_089C648C;
    case 486u: goto L_089C64AC;
    case 487u: goto L_089C64B8;
    case 488u: goto L_089C64CC;
    case 489u: goto L_089C64DC;
    case 490u: goto L_089C64E4;
    case 491u: goto L_089C64EC;
    case 492u: goto L_089C64F8;
    case 493u: goto L_089C6500;
    case 494u: goto L_089C6504;
    case 495u: goto L_089C6530;
    case 496u: goto L_089C6540;
    case 497u: goto L_089C6554;
    case 498u: goto L_089C655C;
    case 499u: goto L_089C6568;
    case 500u: goto L_089C6570;
    case 501u: goto L_089C6588;
    case 502u: goto L_089C658C;
    case 503u: goto L_089C65A0;
    case 504u: goto L_089C65A8;
    case 505u: goto L_089C65BC;
    case 506u: goto L_089C65CC;
    case 507u: goto L_089C65D4;
    case 508u: goto L_089C65E8;
    case 509u: goto L_089C65F0;
    case 510u: goto L_089C6610;
    case 511u: goto L_089C6640;
    case 512u: goto L_089C6678;
    case 513u: goto L_089C6698;
    case 514u: goto L_089C66B0;
    case 515u: goto L_089C66B8;
    case 516u: goto L_089C66BC;
    case 517u: goto L_089C66DC;
    case 518u: goto L_089C66E8;
    case 519u: goto L_089C66FC;
    case 520u: goto L_089C670C;
    case 521u: goto L_089C6714;
    case 522u: goto L_089C671C;
    case 523u: goto L_089C6728;
    case 524u: goto L_089C6730;
    case 525u: goto L_089C6734;
    case 526u: goto L_089C6760;
    case 527u: goto L_089C6770;
    case 528u: goto L_089C6784;
    case 529u: goto L_089C678C;
    case 530u: goto L_089C67B4;
    case 531u: goto L_089C67C4;
    case 532u: goto L_089C67CC;
    case 533u: goto L_089C67E0;
    case 534u: goto L_089C67E4;
    case 535u: goto L_089C67F8;
    case 536u: goto L_089C6800;
    case 537u: goto L_089C6814;
    case 538u: goto L_089C683C;
    case 539u: goto L_089C684C;
    case 540u: goto L_089C6858;
    case 541u: goto L_089C6868;
    case 542u: goto L_089C6870;
    case 543u: goto L_089C6890;
    case 544u: goto L_089C68C0;
    case 545u: goto L_089C68EC;
    case 546u: goto L_089C6908;
    case 547u: goto L_089C6910;
    case 548u: goto L_089C6918;
    case 549u: goto L_089C6920;
    case 550u: goto L_089C6928;
    case 551u: goto L_089C6930;
    case 552u: goto L_089C6938;
    case 553u: goto L_089C6940;
    case 554u: goto L_089C6948;
    case 555u: goto L_089C6950;
    case 556u: goto L_089C6958;
    case 557u: goto L_089C6960;
    case 558u: goto L_089C6968;
    case 559u: goto L_089C6970;
    case 560u: goto L_089C6980;
    case 561u: goto L_089C6988;
    case 562u: goto L_089C6994;
    case 563u: goto L_089C69A8;
    case 564u: goto L_089C69B0;
    case 565u: goto L_089C69BC;
    case 566u: goto L_089C69D0;
    case 567u: goto L_089C69DC;
    case 568u: goto L_089C69F0;
    case 569u: goto L_089C6A04;
    case 570u: goto L_089C6A08;
    case 571u: goto L_089C6A10;
    case 572u: goto L_089C6A18;
    case 573u: goto L_089C6A20;
    case 574u: goto L_089C6A28;
    case 575u: goto L_089C6A30;
    case 576u: goto L_089C6A38;
    case 577u: goto L_089C6A40;
    case 578u: goto L_089C6A48;
    case 579u: goto L_089C6A50;
    case 580u: goto L_089C6A58;
    case 581u: goto L_089C6A60;
    case 582u: goto L_089C6A68;
    case 583u: goto L_089C6A70;
    case 584u: goto L_089C6A78;
    case 585u: goto L_089C6A80;
    case 586u: goto L_089C6A84;
    case 587u: goto L_089C6A8C;
    case 588u: goto L_089C6AA0;
    case 589u: goto L_089C6AA8;
    case 590u: goto L_089C6ACC;
    case 591u: goto L_089C6AD4;
    case 592u: goto L_089C6AE0;
    case 593u: goto L_089C6AF4;
    case 594u: goto L_089C6B08;
    case 595u: goto L_089C6B14;
    case 596u: goto L_089C6B28;
    case 597u: goto L_089C6B38;
    case 598u: goto L_089C6B40;
    case 599u: goto L_089C6B6C;
    case 600u: goto L_089C6B70;
    case 601u: goto L_089C6B8C;
    case 602u: goto L_089C6BAC;
    case 603u: goto L_089C6BC4;
    case 604u: goto L_089C6BD0;
    case 605u: goto L_089C6BD8;
    case 606u: goto L_089C6BE4;
    case 607u: goto L_089C6BEC;
    case 608u: goto L_089C6C00;
    case 609u: goto L_089C6C08;
    case 610u: goto L_089C6C18;
    case 611u: goto L_089C6C20;
    case 612u: goto L_089C6C30;
    case 613u: goto L_089C6C38;
    case 614u: goto L_089C6C4C;
    case 615u: goto L_089C6C54;
    case 616u: goto L_089C6C5C;
    case 617u: goto L_089C6C6C;
    case 618u: goto L_089C6C74;
    case 619u: goto L_089C6C88;
    case 620u: goto L_089C6C90;
    case 621u: goto L_089C6CA4;
    case 622u: goto L_089C6CAC;
    case 623u: goto L_089C6CC0;
    case 624u: goto L_089C6CC8;
    case 625u: goto L_089C6CD8;
    case 626u: goto L_089C6CE0;
    case 627u: goto L_089C6CF4;
    case 628u: goto L_089C6D00;
    case 629u: goto L_089C6D68;
    case 630u: goto L_089C6D70;
    case 631u: goto L_089C6D78;
    case 632u: goto L_089C6D80;
    case 633u: goto L_089C6D88;
    case 634u: goto L_089C6D94;
    case 635u: goto L_089C6DA4;
    case 636u: goto L_089C6DAC;
    case 637u: goto L_089C6DB4;
    case 638u: goto L_089C6DBC;
    case 639u: goto L_089C6DC4;
    case 640u: goto L_089C6DCC;
    case 641u: goto L_089C6DD4;
    case 642u: goto L_089C6DDC;
    case 643u: goto L_089C6DE4;
    case 644u: goto L_089C6DEC;
    case 645u: goto L_089C6DF4;
    case 646u: goto L_089C6DFC;
    case 647u: goto L_089C6E04;
    case 648u: goto L_089C6E0C;
    case 649u: goto L_089C6E1C;
    case 650u: goto L_089C6E28;
    case 651u: goto L_089C6E30;
    case 652u: goto L_089C6E40;
    case 653u: goto L_089C6E48;
    case 654u: goto L_089C6E4C;
    case 655u: goto L_089C6E58;
    case 656u: goto L_089C6E70;
    case 657u: goto L_089C6E78;
    case 658u: goto L_089C6E80;
    case 659u: goto L_089C6E88;
    case 660u: goto L_089C6E90;
    case 661u: goto L_089C6E9C;
    case 662u: goto L_089C6EA4;
    case 663u: goto L_089C6EB0;
    case 664u: goto L_089C6EB8;
    case 665u: goto L_089C6EC0;
    case 666u: goto L_089C6ECC;
    case 667u: goto L_089C6ED4;
    case 668u: goto L_089C6EE0;
    case 669u: goto L_089C6EE4;
    case 670u: goto L_089C6EF4;
    case 671u: goto L_089C6EFC;
    case 672u: goto L_089C6F04;
    case 673u: goto L_089C6F0C;
    case 674u: goto L_089C6F2C;
    case 675u: goto L_089C6F38;
    case 676u: goto L_089C6F40;
    case 677u: goto L_089C6F50;
    case 678u: goto L_089C6F58;
    case 679u: goto L_089C6F60;
    case 680u: goto L_089C6F68;
    case 681u: goto L_089C6F98;
    case 682u: goto L_089C6FA8;
    case 683u: goto L_089C6FB0;
    case 684u: goto L_089C6FB8;
    case 685u: goto L_089C6FC0;
    case 686u: goto L_089C6FCC;
    case 687u: goto L_089C6FDC;
    case 688u: goto L_089C6FE4;
    case 689u: goto L_089C6FE8;
    case 690u: goto L_089C6FEC;
    case 691u: goto L_089C6FFC;
    case 692u: goto L_089C7008;
    case 693u: goto L_089C7010;
    case 694u: goto L_089C7020;
    case 695u: goto L_089C702C;
    case 696u: goto L_089C7034;
    case 697u: goto L_089C7038;
    case 698u: goto L_089C7040;
    case 699u: goto L_089C7048;
    case 700u: goto L_089C7054;
    case 701u: goto L_089C705C;
    case 702u: goto L_089C7060;
    case 703u: goto L_089C7068;
    case 704u: goto L_089C7070;
    case 705u: goto L_089C707C;
    case 706u: goto L_089C7084;
    case 707u: goto L_089C7090;
    case 708u: goto L_089C70A8;
    case 709u: goto L_089C70B0;
    case 710u: goto L_089C70B8;
    case 711u: goto L_089C70C0;
    case 712u: goto L_089C70C8;
    case 713u: goto L_089C70D0;
    case 714u: goto L_089C70F4;
    case 715u: goto L_089C7100;
    case 716u: goto L_089C7108;
    case 717u: goto L_089C7110;
    case 718u: goto L_089C7118;
    case 719u: goto L_089C7120;
    case 720u: goto L_089C712C;
    case 721u: goto L_089C7138;
    case 722u: goto L_089C7148;
    case 723u: goto L_089C7150;
    case 724u: goto L_089C7164;
    case 725u: goto L_089C716C;
    case 726u: goto L_089C7174;
    case 727u: goto L_089C717C;
    case 728u: goto L_089C7184;
    case 729u: goto L_089C718C;
    case 730u: goto L_089C7194;
    case 731u: goto L_089C71A0;
    case 732u: goto L_089C71A8;
    case 733u: goto L_089C71B0;
    case 734u: goto L_089C71C4;
    case 735u: goto L_089C71CC;
    case 736u: goto L_089C71D8;
    case 737u: goto L_089C71DC;
    case 738u: goto L_089C71E4;
    case 739u: goto L_089C71F8;
    case 740u: goto L_089C7220;
    case 741u: goto L_089C7248;
    case 742u: goto L_089C72B8;
    case 743u: goto L_089C72DC;
    case 744u: goto L_089C72E4;
    case 745u: goto L_089C72EC;
    case 746u: goto L_089C72F8;
    case 747u: goto L_089C730C;
    case 748u: goto L_089C7314;
    case 749u: goto L_089C731C;
    case 750u: goto L_089C73A8;
    case 751u: goto L_089C73B0;
    case 752u: goto L_089C73B4;
    case 753u: goto L_089C73C0;
    case 754u: goto L_089C73C8;
    case 755u: goto L_089C73D0;
    case 756u: goto L_089C73F0;
    case 757u: goto L_089C7408;
    case 758u: goto L_089C7424;
    case 759u: goto L_089C7438;
    case 760u: goto L_089C7458;
    case 761u: goto L_089C7460;
    case 762u: goto L_089C7468;
    case 763u: goto L_089C74D4;
    case 764u: goto L_089C74DC;
    case 765u: goto L_089C74EC;
    case 766u: goto L_089C74F4;
    case 767u: goto L_089C7528;
    case 768u: goto L_089C7544;
    case 769u: goto L_089C754C;
    case 770u: goto L_089C756C;
    case 771u: goto L_089C757C;
    case 772u: goto L_089C7590;
    case 773u: goto L_089C7598;
    case 774u: goto L_089C75A0;
    case 775u: goto L_089C75AC;
    case 776u: goto L_089C75C0;
    case 777u: goto L_089C75F8;
    case 778u: goto L_089C7608;
    case 779u: goto L_089C7618;
    case 780u: goto L_089C7620;
    case 781u: goto L_089C7628;
    case 782u: goto L_089C7638;
    case 783u: goto L_089C7640;
    case 784u: goto L_089C7650;
    case 785u: goto L_089C765C;
    case 786u: goto L_089C7674;
    case 787u: goto L_089C767C;
    case 788u: goto L_089C7680;
    case 789u: goto L_089C7688;
    case 790u: goto L_089C76B4;
    case 791u: goto L_089C76D4;
    case 792u: goto L_089C76F4;
    case 793u: goto L_089C76FC;
    case 794u: goto L_089C771C;
    case 795u: goto L_089C7724;
    case 796u: goto L_089C772C;
    case 797u: goto L_089C7738;
    case 798u: goto L_089C7740;
    case 799u: goto L_089C7748;
    case 800u: goto L_089C7750;
    case 801u: goto L_089C7758;
    case 802u: goto L_089C7768;
    case 803u: goto L_089C77B0;
    case 804u: goto L_089C77B8;
    case 805u: goto L_089C77C0;
    case 806u: goto L_089C77C8;
    case 807u: goto L_089C77D4;
    case 808u: goto L_089C77D8;
    case 809u: goto L_089C7804;
    case 810u: goto L_089C7838;
    case 811u: goto L_089C784C;
    case 812u: goto L_089C7858;
    case 813u: goto L_089C7860;
    case 814u: goto L_089C7874;
    case 815u: goto L_089C787C;
    case 816u: goto L_089C7890;
    case 817u: goto L_089C7898;
    case 818u: goto L_089C789C;
    case 819u: goto L_089C78A8;
    case 820u: goto L_089C78B4;
    case 821u: goto L_089C78BC;
    case 822u: goto L_089C78D4;
    case 823u: goto L_089C78E0;
    case 824u: goto L_089C78EC;
    case 825u: goto L_089C7904;
    case 826u: goto L_089C7928;
    case 827u: goto L_089C7940;
    case 828u: goto L_089C7954;
    case 829u: goto L_089C7968;
    case 830u: goto L_089C7974;
    case 831u: goto L_089C798C;
    case 832u: goto L_089C79B0;
    case 833u: goto L_089C79C8;
    case 834u: goto L_089C79DC;
    case 835u: goto L_089C79E4;
    case 836u: goto L_089C79F0;
    case 837u: goto L_089C79F8;
    case 838u: goto L_089C7A14;
    case 839u: goto L_089C7A3C;
    case 840u: goto L_089C7A68;
    case 841u: goto L_089C7AF0;
    case 842u: goto L_089C7AF8;
    case 843u: goto L_089C7B0C;
    case 844u: goto L_089C7B24;
    case 845u: goto L_089C7B40;
    case 846u: goto L_089C7B80;
    case 847u: goto L_089C7B8C;
    case 848u: goto L_089C7B98;
    case 849u: goto L_089C7BB8;
    case 850u: goto L_089C7BD0;
    case 851u: goto L_089C7BD8;
    case 852u: goto L_089C7BE8;
    case 853u: goto L_089C7BF0;
    case 854u: goto L_089C7C04;
    case 855u: goto L_089C7C0C;
    case 856u: goto L_089C7C10;
    case 857u: goto L_089C7C1C;
    case 858u: goto L_089C7C24;
    case 859u: goto L_089C7C2C;
    case 860u: goto L_089C7C64;
    case 861u: goto L_089C7C6C;
    case 862u: goto L_089C7C80;
    case 863u: goto L_089C7C88;
    case 864u: goto L_089C7C94;
    case 865u: goto L_089C7C9C;
    case 866u: goto L_089C7CB8;
    case 867u: goto L_089C7CE8;
    case 868u: goto L_089C7D14;
    case 869u: goto L_089C7D24;
    case 870u: goto L_089C7D2C;
    case 871u: goto L_089C7D40;
    case 872u: goto L_089C7D48;
    case 873u: goto L_089C7D5C;
    case 874u: goto L_089C7D64;
    case 875u: goto L_089C7D68;
    case 876u: goto L_089C7D70;
    case 877u: goto L_089C7D78;
    case 878u: goto L_089C7D80;
    case 879u: goto L_089C7D88;
    case 880u: goto L_089C7D9C;
    case 881u: goto L_089C7DB8;
    case 882u: goto L_089C7DD8;
    case 883u: goto L_089C7DE0;
    case 884u: goto L_089C7DEC;
    case 885u: goto L_089C7DF8;
    case 886u: goto L_089C7E00;
    case 887u: goto L_089C7E08;
    case 888u: goto L_089C7E10;
    case 889u: goto L_089C7E14;
    case 890u: goto L_089C7E1C;
    case 891u: goto L_089C7E28;
    case 892u: goto L_089C7E30;
    case 893u: goto L_089C7E4C;
    case 894u: goto L_089C7E54;
    case 895u: goto L_089C7E68;
    case 896u: goto L_089C7E78;
    case 897u: goto L_089C7E88;
    case 898u: goto L_089C7E90;
    case 899u: goto L_089C7E98;
    case 900u: goto L_089C7E9C;
    case 901u: goto L_089C7EAC;
    case 902u: goto L_089C7EB8;
    case 903u: goto L_089C7EC0;
    case 904u: goto L_089C7EC8;
    case 905u: goto L_089C7ED0;
    case 906u: goto L_089C7EE0;
    case 907u: goto L_089C7EF8;
    case 908u: goto L_089C7F10;
    case 909u: goto L_089C7F20;
    case 910u: goto L_089C7F2C;
    case 911u: goto L_089C7F38;
    case 912u: goto L_089C7F44;
    case 913u: goto L_089C7F50;
    case 914u: goto L_089C7F5C;
    case 915u: goto L_089C7F64;
    case 916u: goto L_089C7F6C;
    case 917u: goto L_089C7F98;
    case 918u: goto L_089C7FB0;
    case 919u: goto L_089C7FC8;
    case 920u: goto L_089C7FEC;
    case 921u: goto L_089C7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C4000:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 203u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C4020u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C4020u) goto L_089C4020;
    return;
L_089C4020:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[18] = (0u | 196u);
      if (branch_taken) {
          goto L_089C4054;
      }
      goto L_089C402C;
    }
L_089C402C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C4038u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C4038u) goto L_089C4038;
    return;
L_089C4038:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4050;
      }
      goto L_089C4044;
    }
L_089C4044:
    ctx.gpr[31] = (0x089C404Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C404Cu) goto L_089C404C;
    return;
L_089C404C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C4050;
L_089C4050:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C4054;
L_089C4054:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C4060u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C4060u) goto L_089C4060;
    return;
L_089C4060:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C4070u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C4070u) goto L_089C4070;
    return;
L_089C4070:
    ctx.gpr[30] = (0u | 147u);
    ctx.gpr[31] = (0x089C407Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem) && ctx.pc == 0x089C407Cu) goto L_089C407C;
    return;
L_089C407C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_089C4220;
      }
      goto L_089C4088;
    }
L_089C4088:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C4098u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x089C4098u) goto L_089C4098;
    return;
L_089C4098:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12040));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12032));
      if (branch_taken) {
          goto L_089C40A8;
      }
      goto L_089C40A4;
    }
L_089C40A4:
    ctx.gpr[16] = (0u | 1u);
    goto L_089C40A8;
L_089C40A8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C40B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem) && ctx.pc == 0x089C40B4u) goto L_089C40B4;
    return;
L_089C40B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C40D0;
      }
      goto L_089C40C4;
    }
L_089C40C4:
    ctx.gpr[31] = (0x089C40CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C40CCu) goto L_089C40CC;
    return;
L_089C40CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C40D0;
L_089C40D0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    ctx.gpr[10] = (17171u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C40FCu);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C40FCu) goto L_089C40FC;
    return;
L_089C40FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C4134;
      }
      goto L_089C4108;
    }
L_089C4108:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C4114u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C4114u) goto L_089C4114;
    return;
L_089C4114:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C412C;
      }
      goto L_089C4120;
    }
L_089C4120:
    ctx.gpr[31] = (0x089C4128u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4128u) goto L_089C4128;
    return;
L_089C4128:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C412C;
L_089C412C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C4134;
L_089C4134:
    ctx.gpr[31] = (0x089C413Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C413Cu) goto L_089C413C;
    return;
L_089C413C:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (0u | 140u);
    ctx.gpr[31] = (0x089C414Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C414Cu) goto L_089C414C;
    return;
L_089C414C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C415Cu);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x089C415Cu) goto L_089C415C;
    return;
L_089C415C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C4168u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem) && ctx.pc == 0x089C4168u) goto L_089C4168;
    return;
L_089C4168:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (17185u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[18] = (0u | 154u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089C41A8;
      }
      goto L_089C419C;
    }
L_089C419C:
    ctx.gpr[31] = (0x089C41A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C41A4u) goto L_089C41A4;
    return;
L_089C41A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C41A8;
L_089C41A8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    ctx.gpr[31] = (0x089C41C8u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C41C8u) goto L_089C41C8;
    return;
L_089C41C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C4200;
      }
      goto L_089C41D4;
    }
L_089C41D4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C41E0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C41E0u) goto L_089C41E0;
    return;
L_089C41E0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C41F8;
      }
      goto L_089C41EC;
    }
L_089C41EC:
    ctx.gpr[31] = (0x089C41F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C41F4u) goto L_089C41F4;
    return;
L_089C41F4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C41F8;
L_089C41F8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C4200;
L_089C4200:
    ctx.gpr[31] = (0x089C4208u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C4208u) goto L_089C4208;
    return;
L_089C4208:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C4218u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C4218u) goto L_089C4218;
    return;
L_089C4218:
    ctx.gpr[30] = (0u | 175u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    goto L_089C4220;
L_089C4220:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x089C422Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x089C422Cu) goto L_089C422C;
    return;
L_089C422C:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[31] = (0x089C423Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 155u, 0x08ADC7D8u>(ctx, &aot_mem) && ctx.pc == 0x089C423Cu) goto L_089C423C;
    return;
L_089C423C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C4258;
      }
      goto L_089C424C;
    }
L_089C424C:
    ctx.gpr[31] = (0x089C4254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C4254u) goto L_089C4254;
    return;
L_089C4254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C4258;
L_089C4258:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(79)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(77)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(78)));
    ctx.gpr[31] = (0x089C427Cu);
    ctx.gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C427Cu) goto L_089C427C;
    return;
L_089C427C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_089C42B4;
    }
    goto L_089C4288;
L_089C4288:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C4294u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C4294u) goto L_089C4294;
    return;
L_089C4294:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C42AC;
      }
      goto L_089C42A0;
    }
L_089C42A0:
    ctx.gpr[31] = (0x089C42A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C42A8u) goto L_089C42A8;
    return;
L_089C42A8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C42AC;
L_089C42AC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_089C42B4;
L_089C42B4:
    ctx.gpr[31] = (0x089C42BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C42BCu) goto L_089C42BC;
    return;
L_089C42BC:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(-7));
    ctx.gpr[31] = (0x089C42CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C42CCu) goto L_089C42CC;
    return;
L_089C42CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(14));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x089C42E0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x089C42E0u) goto L_089C42E0;
    return;
L_089C42E0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C42ECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 155u, 0x08ADC7D8u>(ctx, &aot_mem) && ctx.pc == 0x089C42ECu) goto L_089C42EC;
    return;
L_089C42EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(-7));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089C432C;
      }
      goto L_089C4320;
    }
L_089C4320:
    ctx.gpr[31] = (0x089C4328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C4328u) goto L_089C4328;
    return;
L_089C4328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C432C;
L_089C432C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(79)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(77)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(78)));
    ctx.gpr[31] = (0x089C434Cu);
    ctx.gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C434Cu) goto L_089C434C;
    return;
L_089C434C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_089C4384;
    }
    goto L_089C4358;
L_089C4358:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C4364u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C4364u) goto L_089C4364;
    return;
L_089C4364:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C437C;
      }
      goto L_089C4370;
    }
L_089C4370:
    ctx.gpr[31] = (0x089C4378u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4378u) goto L_089C4378;
    return;
L_089C4378:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C437C;
L_089C437C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_089C4384;
L_089C4384:
    ctx.gpr[31] = (0x089C438Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C438Cu) goto L_089C438C;
    return;
L_089C438C:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C439Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C439Cu) goto L_089C439C;
    return;
L_089C439C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C43ACu);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x089C43ACu) goto L_089C43AC;
    return;
L_089C43AC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C43B8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 155u, 0x08ADC7D8u>(ctx, &aot_mem) && ctx.pc == 0x089C43B8u) goto L_089C43B8;
    return;
L_089C43B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(14));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C43FC;
      }
      goto L_089C43F0;
    }
L_089C43F0:
    ctx.gpr[31] = (0x089C43F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C43F8u) goto L_089C43F8;
    return;
L_089C43F8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C43FC;
L_089C43FC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 52u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x089C4420u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C4420u) goto L_089C4420;
    return;
L_089C4420:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11928));
      if (branch_taken) {
          goto L_089C4458;
      }
      goto L_089C442C;
    }
L_089C442C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C4438u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C4438u) goto L_089C4438;
    return;
L_089C4438:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4450;
      }
      goto L_089C4444;
    }
L_089C4444:
    ctx.gpr[31] = (0x089C444Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C444Cu) goto L_089C444C;
    return;
L_089C444C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C4450;
L_089C4450:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11928));
    goto L_089C4458;
L_089C4458:
    ctx.gpr[31] = (0x089C4460u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C4460u) goto L_089C4460;
    return;
L_089C4460:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C4470u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C4470u) goto L_089C4470;
    return;
L_089C4470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C481C;
      }
      goto L_089C4478;
    }
L_089C4478:
    ctx.gpr[31] = (0x089C4480u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem) && ctx.pc == 0x089C4480u) goto L_089C4480;
    return;
L_089C4480:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C481C;
      }
      goto L_089C448C;
    }
L_089C448C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x089C44A0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x089C44A0u) goto L_089C44A0;
    return;
L_089C44A0:
    ctx.gpr[4] = (17185u << 16u);
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12040));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12032));
      if (branch_taken) {
          goto L_089C44B8;
      }
      goto L_089C44B4;
    }
L_089C44B4:
    ctx.gpr[18] = (0u | 1u);
    goto L_089C44B8;
L_089C44B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C44C4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem) && ctx.pc == 0x089C44C4u) goto L_089C44C4;
    return;
L_089C44C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C44E0;
      }
      goto L_089C44D4;
    }
L_089C44D4:
    ctx.gpr[31] = (0x089C44DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C44DCu) goto L_089C44DC;
    return;
L_089C44DC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C44E0;
L_089C44E0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(87)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[10] = (17136u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(85)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(86)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C450Cu);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C450Cu) goto L_089C450C;
    return;
L_089C450C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089C4544;
      }
      goto L_089C4518;
    }
L_089C4518:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089C4524u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C4524u) goto L_089C4524;
    return;
L_089C4524:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C453C;
      }
      goto L_089C4530;
    }
L_089C4530:
    ctx.gpr[31] = (0x089C4538u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4538u) goto L_089C4538;
    return;
L_089C4538:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    goto L_089C453C;
L_089C453C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C4544;
L_089C4544:
    ctx.gpr[31] = (0x089C454Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C454Cu) goto L_089C454C;
    return;
L_089C454C:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C455Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C455Cu) goto L_089C455C;
    return;
L_089C455C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C456Cu);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x089C456Cu) goto L_089C456C;
    return;
L_089C456C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C4578u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem) && ctx.pc == 0x089C4578u) goto L_089C4578;
    return;
L_089C4578:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (17199u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[16] = (0u | 168u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089C45B8;
      }
      goto L_089C45AC;
    }
L_089C45AC:
    ctx.gpr[31] = (0x089C45B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C45B4u) goto L_089C45B4;
    return;
L_089C45B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C45B8;
L_089C45B8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(87)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(85)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x089C45D8u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C45D8u) goto L_089C45D8;
    return;
L_089C45D8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089C4610;
      }
      goto L_089C45E4;
    }
L_089C45E4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089C45F0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C45F0u) goto L_089C45F0;
    return;
L_089C45F0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4608;
      }
      goto L_089C45FC;
    }
L_089C45FC:
    ctx.gpr[31] = (0x089C4604u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4604u) goto L_089C4604;
    return;
L_089C4604:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    goto L_089C4608;
L_089C4608:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C4610;
L_089C4610:
    ctx.gpr[31] = (0x089C4618u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C4618u) goto L_089C4618;
    return;
L_089C4618:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C4628u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C4628u) goto L_089C4628;
    return;
L_089C4628:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[31] = (0x089C4640u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem) && ctx.pc == 0x089C4640u) goto L_089C4640;
    return;
L_089C4640:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (17213u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[16] = (0u | 182u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C4680;
      }
      goto L_089C4674;
    }
L_089C4674:
    ctx.gpr[31] = (0x089C467Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C467Cu) goto L_089C467C;
    return;
L_089C467C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C4680;
L_089C4680:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(85)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[31] = (0x089C46A4u);
    ctx.gpr[6] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C46A4u) goto L_089C46A4;
    return;
L_089C46A4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11920));
      if (branch_taken) {
          goto L_089C46DC;
      }
      goto L_089C46B0;
    }
L_089C46B0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C46BCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C46BCu) goto L_089C46BC;
    return;
L_089C46BC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C46D4;
      }
      goto L_089C46C8;
    }
L_089C46C8:
    ctx.gpr[31] = (0x089C46D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C46D0u) goto L_089C46D0;
    return;
L_089C46D0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C46D4;
L_089C46D4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11920));
    goto L_089C46DC;
L_089C46DC:
    ctx.gpr[31] = (0x089C46E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C46E4u) goto L_089C46E4;
    return;
L_089C46E4:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C46F4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C46F4u) goto L_089C46F4;
    return;
L_089C46F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[16] != 0u) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_089C4710;
    }
    goto L_089C4700;
L_089C4700:
    ctx.gpr[31] = (0x089C4708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C4708u) goto L_089C4708;
    return;
L_089C4708:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089C4710;
L_089C4710:
    ctx.gpr[9] = (17259u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 51u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x089C4738u);
    ctx.gpr[9] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C4738u) goto L_089C4738;
    return;
L_089C4738:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11912));
      if (branch_taken) {
          goto L_089C4770;
      }
      goto L_089C4744;
    }
L_089C4744:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C4750u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C4750u) goto L_089C4750;
    return;
L_089C4750:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4768;
      }
      goto L_089C475C;
    }
L_089C475C:
    ctx.gpr[31] = (0x089C4764u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4764u) goto L_089C4764;
    return;
L_089C4764:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C4768;
L_089C4768:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11912));
    goto L_089C4770;
L_089C4770:
    ctx.gpr[31] = (0x089C4778u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C4778u) goto L_089C4778;
    return;
L_089C4778:
    ctx.gpr[5] = (0u | 245u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C4788u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C4788u) goto L_089C4788;
    return;
L_089C4788:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[4] = (17199u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (0u | 168u);
      if (branch_taken) {
          goto L_089C47A8;
      }
      goto L_089C479C;
    }
L_089C479C:
    ctx.gpr[31] = (0x089C47A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C47A4u) goto L_089C47A4;
    return;
L_089C47A4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C47A8;
L_089C47A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 13u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 237u);
    ctx.gpr[8] = (0u | 130u);
    ctx.gpr[31] = (0x089C47CCu);
    ctx.gpr[9] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C47CCu) goto L_089C47CC;
    return;
L_089C47CC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11904));
      if (branch_taken) {
          goto L_089C4804;
      }
      goto L_089C47D8;
    }
L_089C47D8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C47E4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C47E4u) goto L_089C47E4;
    return;
L_089C47E4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C47FC;
      }
      goto L_089C47F0;
    }
L_089C47F0:
    ctx.gpr[31] = (0x089C47F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C47F8u) goto L_089C47F8;
    return;
L_089C47F8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C47FC;
L_089C47FC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11904));
    goto L_089C4804;
L_089C4804:
    ctx.gpr[31] = (0x089C480Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C480Cu) goto L_089C480C;
    return;
L_089C480C:
    ctx.gpr[5] = (0u | 245u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C481Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C481Cu) goto L_089C481C;
    return;
L_089C481C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
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
L_089C4858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-496));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[18]);
    ctx.gpr[18] = (2240u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-25888));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C48A8;
      }
      goto L_089C489C;
    }
L_089C489C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C48AC;
      }
      goto L_089C48A8;
    }
L_089C48A8:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9546), static_cast<std::uint8_t>(0u));
    goto L_089C48AC;
L_089C48AC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089C48B4;
L_089C48B4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(142)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C48C8;
      }
      goto L_089C48C0;
    }
L_089C48C0:
    ctx.gpr[6] = (ctx.gpr[28] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(9536), static_cast<std::uint8_t>(0u));
    goto L_089C48C8;
L_089C48C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_089C48B4;
      }
      goto L_089C48D8;
    }
L_089C48D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(332)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089C4B38;
      }
      goto L_089C48E4;
    }
L_089C48E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089C4B24;
      }
      goto L_089C48F0;
    }
L_089C48F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4B24;
      }
      goto L_089C48FC;
    }
L_089C48FC:
    ctx.gpr[31] = (0x089C4904u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 689u, 0x089BB298u>(ctx, &aot_mem) && ctx.pc == 0x089C4904u) goto L_089C4904;
    return;
L_089C4904:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(14));
    ctx.gpr[31] = (0x089C4914u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem) && ctx.pc == 0x089C4914u) goto L_089C4914;
    return;
L_089C4914:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x089C4920u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 78u, 0x08B0C5C8u>(ctx, &aot_mem) && ctx.pc == 0x089C4920u) goto L_089C4920;
    return;
L_089C4920:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(61)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(62)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x089C4958u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x089C4958u) goto L_089C4958;
    return;
L_089C4958:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11236)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11237)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17389u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[31] = (0x089C4998u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem) && ctx.pc == 0x089C4998u) goto L_089C4998;
    return;
L_089C4998:
    ctx.fpr[15] = ctx.fpr[24] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089C49B0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x089C49B0u) goto L_089C49B0;
    return;
L_089C49B0:
    ctx.gpr[31] = (0x089C49B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem) && ctx.pc == 0x089C49B8u) goto L_089C49B8;
    return;
L_089C49B8:
    ctx.gpr[5] = (17391u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (17287u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089C49D8u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x089C49D8u) goto L_089C49D8;
    return;
L_089C49D8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C49F0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 90u, 0x08B0C660u>(ctx, &aot_mem) && ctx.pc == 0x089C49F0u) goto L_089C49F0;
    return;
L_089C49F0:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C4A08u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C4A08u) goto L_089C4A08;
    return;
L_089C4A08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4B20;
      }
      goto L_089C4A14;
    }
L_089C4A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[5] = (17362u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C4A4C;
      }
      goto L_089C4A24;
    }
L_089C4A24:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x089C4A30u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C4A30u) goto L_089C4A30;
    return;
L_089C4A30:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4A48;
      }
      goto L_089C4A3C;
    }
L_089C4A3C:
    ctx.gpr[31] = (0x089C4A44u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4A44u) goto L_089C4A44;
    return;
L_089C4A44:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089C4A48;
L_089C4A48:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_089C4A4C;
L_089C4A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x089C4A58u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C4A58u) goto L_089C4A58;
    return;
L_089C4A58:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C4A64u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 78u, 0x08B0C5C8u>(ctx, &aot_mem) && ctx.pc == 0x089C4A64u) goto L_089C4A64;
    return;
L_089C4A64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(61)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(62)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(422), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(423), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x089C4A9Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(420));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x089C4A9Cu) goto L_089C4A9C;
    return;
L_089C4A9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11236)));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11237)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(424));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_089C4ADC;
    }
    goto L_089C4ADC;
L_089C4ADC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089C4AF0u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem) && ctx.pc == 0x089C4AF0u) goto L_089C4AF0;
    return;
L_089C4AF0:
    ctx.fpr[15] = ctx.fpr[22] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C4B08u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x089C4B08u) goto L_089C4B08;
    return;
L_089C4B08:
    ctx.gpr[31] = (0x089C4B10u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem) && ctx.pc == 0x089C4B10u) goto L_089C4B10;
    return;
L_089C4B10:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C4B20u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C4B20u) goto L_089C4B20;
    return;
L_089C4B20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    goto L_089C4B24;
L_089C4B24:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089C4B38;
      }
      goto L_089C4B2C;
    }
L_089C4B2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11236)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11236), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089C4B38;
L_089C4B38:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4B68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9269)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C4BAC;
      }
      goto L_089C4B8C;
    }
L_089C4B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10832)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4BB4;
      }
      goto L_089C4B98;
    }
L_089C4B98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10848), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10840), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10844), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10836), 0u);
      if (branch_taken) {
          goto L_089C4F70;
      }
      goto L_089C4BAC;
    }
L_089C4BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4F70;
      }
      goto L_089C4BB4;
    }
L_089C4BB4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10836)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10848)));
      if (branch_taken) {
          goto L_089C4C3C;
      }
      goto L_089C4BC0;
    }
L_089C4BC0:
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4C38;
      }
      goto L_089C4BCC;
    }
L_089C4BCC:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C4C2C;
      }
      goto L_089C4BD8;
    }
L_089C4BD8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089C4C2C;
      }
      goto L_089C4BE0;
    }
L_089C4BE0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C4C2C;
      }
      goto L_089C4BE8;
    }
L_089C4BE8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089C4C2C;
      }
      goto L_089C4BF0;
    }
L_089C4BF0:
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10848), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10840), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10844), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10852), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9252)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089C4C1C;
      }
      goto L_089C4C14;
    }
L_089C4C14:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C4C24;
      }
      goto L_089C4C1C;
    }
L_089C4C1C:
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), ctx.gpr[6]);
    goto L_089C4C24;
L_089C4C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4C38;
      }
      goto L_089C4C2C;
    }
L_089C4C2C:
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10848), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10840), 0u);
    goto L_089C4C38;
L_089C4C38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10836), ctx.gpr[4]);
    goto L_089C4C3C;
L_089C4C3C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4F70;
      }
      goto L_089C4C44;
    }
L_089C4C44:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C4C6C;
      }
      goto L_089C4C50;
    }
L_089C4C50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C4E68;
      }
      goto L_089C4C58;
    }
L_089C4C58:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10840)));
        goto L_089C4E34;
    }
    goto L_089C4C60;
L_089C4C60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_089C4C8C;
      }
      goto L_089C4C68;
    }
L_089C4C68:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    goto L_089C4C6C;
L_089C4C6C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_089C4D24;
      }
      goto L_089C4C74;
    }
L_089C4C74:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_089C4DA4;
      }
      goto L_089C4C80;
    }
L_089C4C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4E68;
      }
      goto L_089C4C88;
    }
L_089C4C88:
    ctx.gpr[4] = (16968u << 16u);
    goto L_089C4C8C;
L_089C4C8C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10844)));
      if (branch_taken) {
          goto L_089C4CD4;
      }
      goto L_089C4CBC;
    }
L_089C4CBC:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C4CF4;
      }
      goto L_089C4CD4;
    }
L_089C4CD4:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_089C4CF4;
L_089C4CF4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10844), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C4D1C;
      }
      goto L_089C4D0C;
    }
L_089C4D0C:
    ctx.gpr[4] = (0u | 1000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10844), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10848), ctx.gpr[4]);
    goto L_089C4D1C;
L_089C4D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4E68;
      }
      goto L_089C4D24;
    }
L_089C4D24:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10844)));
      if (branch_taken) {
          goto L_089C4D6C;
      }
      goto L_089C4D54;
    }
L_089C4D54:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C4D8C;
      }
      goto L_089C4D6C;
    }
L_089C4D6C:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    goto L_089C4D8C;
L_089C4D8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10844), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C4D9C;
      }
      goto L_089C4D94;
    }
L_089C4D94:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10844), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10848), 0u);
    goto L_089C4D9C;
L_089C4D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4E68;
      }
      goto L_089C4DA4;
    }
L_089C4DA4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10844)));
      if (branch_taken) {
          goto L_089C4DEC;
      }
      goto L_089C4DD4;
    }
L_089C4DD4:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C4E0C;
      }
      goto L_089C4DEC;
    }
L_089C4DEC:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    goto L_089C4E0C;
L_089C4E0C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10844), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C4E2C;
      }
      goto L_089C4E14;
    }
L_089C4E14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10844), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10840), 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10836)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10848), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10852), ctx.gpr[5]);
    goto L_089C4E2C;
L_089C4E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4E68;
      }
      goto L_089C4E34;
    }
L_089C4E34:
    ctx.gpr[5] = (17948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C4E68;
      }
      goto L_089C4E58;
    }
L_089C4E58:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10848), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10844), ctx.gpr[4]);
    goto L_089C4E68;
L_089C4E68:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_089C4F70;
      }
      goto L_089C4E74;
    }
L_089C4E74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10840)));
      if (branch_taken) {
          goto L_089C4EBC;
      }
      goto L_089C4EA4;
    }
L_089C4EA4:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C4EDC;
      }
      goto L_089C4EBC;
    }
L_089C4EBC:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_089C4EDC;
L_089C4EDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10840), ctx.gpr[4]);
    ctx.gpr[31] = (0x089C4EE8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x089C4EE8u) goto L_089C4EE8;
    return;
L_089C4EE8:
    ctx.gpr[31] = (0x089C4EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4EF0u) goto L_089C4EF0;
    return;
L_089C4EF0:
    ctx.gpr[31] = (0x089C4EF8u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x089C4EF8u) goto L_089C4EF8;
    return;
L_089C4EF8:
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x089C4F08u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem) && ctx.pc == 0x089C4F08u) goto L_089C4F08;
    return;
L_089C4F08:
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10852)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17389u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17234u << 16u);
    ctx.gpr[31] = (0x089C4F3Cu);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem) && ctx.pc == 0x089C4F3Cu) goto L_089C4F3C;
    return;
L_089C4F3C:
    ctx.fpr[15] = ctx.fpr[0] + ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089C4F54u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x089C4F54u) goto L_089C4F54;
    return;
L_089C4F54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C4F70u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem) && ctx.pc == 0x089C4F70u) goto L_089C4F70;
    return;
L_089C4F70:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4F8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-768));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9262)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C5068;
      }
      goto L_089C4FD0;
    }
L_089C4FD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10904)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C5070;
      }
      goto L_089C5020;
    }
L_089C5020:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x089C5030u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 612u, 0x089BF18Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5030u) goto L_089C5030;
    return;
L_089C5030:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11221)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(10904), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10916)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089C5094;
      }
      goto L_089C5068;
    }
L_089C5068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C5070;
    }
L_089C5070:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x089C5080u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 612u, 0x089BF18Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5080u) goto L_089C5080;
    return;
L_089C5080:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11221)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10916)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_089C5094;
L_089C5094:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C50A8;
      }
      goto L_089C50A4;
    }
L_089C50A4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089C50A8;
L_089C50A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C50B0;
    }
L_089C50B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089C50D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089C50D4u) goto L_089C50D4;
    return;
L_089C50D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089C50FCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089C50FCu) goto L_089C50FC;
    return;
L_089C50FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C5114;
      }
      goto L_089C5108;
    }
L_089C5108:
    ctx.gpr[31] = (0x089C5110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x089C5110u) goto L_089C5110;
    return;
L_089C5110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_089C5114;
L_089C5114:
    ctx.gpr[31] = (0x089C511Cu);
    // nop
    goto L_089C6DBC;
L_089C511C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C5124;
    }
L_089C5124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_089C52E0;
      }
      goto L_089C5130;
    }
L_089C5130:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C52E0;
      }
      goto L_089C5138;
    }
L_089C5138:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089C5158;
      }
      goto L_089C5148;
    }
L_089C5148:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_089C5158;
L_089C5158:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(30))))));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.gpr[6] = (0u | 0u);
        goto L_089C517C;
    }
    goto L_089C5164;
L_089C5164:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_089C5184;
    }
    goto L_089C5178;
L_089C5178:
    ctx.gpr[6] = (0u | 0u);
    goto L_089C517C;
L_089C517C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C51B8;
      }
      goto L_089C5184;
    }
L_089C5184:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] & 128u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_089C51A4;
      }
      goto L_089C5198;
    }
L_089C5198:
    ctx.gpr[6] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C51B8;
      }
      goto L_089C51A4;
    }
L_089C51A4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_089C51B8;
L_089C51B8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C52D8;
      }
      goto L_089C51C0;
    }
L_089C51C0:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C51E0;
      }
      goto L_089C51D0;
    }
L_089C51D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C51E0;
L_089C51E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089C51ECu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 368u, 0x08A65AACu>(ctx, &aot_mem) && ctx.pc == 0x089C51ECu) goto L_089C51EC;
    return;
L_089C51EC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C52D8;
      }
      goto L_089C51F8;
    }
L_089C51F8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C521C;
      }
      goto L_089C520C;
    }
L_089C520C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C521C;
L_089C521C:
    ctx.gpr[31] = (0x089C5224u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 785u, 0x08A074BCu>(ctx, &aot_mem) && ctx.pc == 0x089C5224u) goto L_089C5224;
    return;
L_089C5224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15112u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (15216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 61681u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x089C5268u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C5268u) goto L_089C5268;
    return;
L_089C5268:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089C5274u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C5274u) goto L_089C5274;
    return;
L_089C5274:
    ctx.gpr[4] = (17379u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16900u << 16u);
    ctx.gpr[4] = (16924u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (16896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11221)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 255u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (0u | 255u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[6] = (0u | 255u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C52CCu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 68u, 0x08AA8C8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C52CCu) goto L_089C52CC;
    return;
L_089C52CC:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089C52D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C52D8u) goto L_089C52D8;
    return;
L_089C52D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C539C;
      }
      goto L_089C52E0;
    }
L_089C52E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C52F8;
      }
      goto L_089C52EC;
    }
L_089C52EC:
    ctx.gpr[31] = (0x089C52F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x089C52F4u) goto L_089C52F4;
    return;
L_089C52F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_089C52F8;
L_089C52F8:
    ctx.gpr[31] = (0x089C5300u);
    // nop
    goto L_089C6DBC;
L_089C5300:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (17363u << 16u);
      if (branch_taken) {
          goto L_089C539C;
      }
      goto L_089C5308;
    }
L_089C5308:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.gpr[5] = (16608u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (17396u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17038u << 16u);
    ctx.gpr[31] = (0x089C5330u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5330u) goto L_089C5330;
    return;
L_089C5330:
    ctx.gpr[4] = (0u | 69u);
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
        goto L_089C533C;
    }
    goto L_089C533C;
L_089C533C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(10924));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x089C5368u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5368u) goto L_089C5368;
    return;
L_089C5368:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089C539Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C539Cu) goto L_089C539C;
    return;
L_089C539C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9274)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5408;
      }
      goto L_089C53A8;
    }
L_089C53A8:
    ctx.gpr[31] = (0x089C53B0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x089C53B0u) goto L_089C53B0;
    return;
L_089C53B0:
    ctx.gpr[31] = (0x089C53B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x089C53B8u) goto L_089C53B8;
    return;
L_089C53B8:
    ctx.gpr[4] = (16084u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31457u);
    ctx.gpr[31] = (0x089C53C8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem) && ctx.pc == 0x089C53C8u) goto L_089C53C8;
    return;
L_089C53C8:
    ctx.gpr[31] = (0x089C53D0u);
    ctx.gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x089C53D0u) goto L_089C53D0;
    return;
L_089C53D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 10000u);
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 10000u);
        goto L_089C5410;
    }
    goto L_089C5400;
L_089C5400:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 10000u);
      if (branch_taken) {
          goto L_089C5414;
      }
      goto L_089C5408;
    }
L_089C5408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C5410;
    }
L_089C5410:
    ctx.gpr[5] = (0u | 10000u);
    goto L_089C5414;
L_089C5414:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C541C;
    }
L_089C541C:
    ctx.gpr[31] = (0x089C5424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem) && ctx.pc == 0x089C5424u) goto L_089C5424;
    return;
L_089C5424:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C542C;
    }
L_089C542C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C5450;
    }
L_089C5450:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C5460;
    }
L_089C5460:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C5470;
    }
L_089C5470:
    ctx.gpr[31] = (0x089C5478u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089C5478u) goto L_089C5478;
    return;
L_089C5478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C5488;
    }
L_089C5488:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(429), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(430), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(431), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089C54B4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(428));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x089C54B4u) goto L_089C54B4;
    return;
L_089C54B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C54CC;
      }
      goto L_089C54C0;
    }
L_089C54C0:
    ctx.gpr[31] = (0x089C54C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x089C54C8u) goto L_089C54C8;
    return;
L_089C54C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_089C54CC;
L_089C54CC:
    ctx.gpr[31] = (0x089C54D4u);
    // nop
    goto L_089C6DBC;
L_089C54D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C54DC;
    }
L_089C54DC:
    ctx.gpr[5] = (17388u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (16948u << 16u);
    ctx.gpr[5] = (17004u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11892));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089C5724;
      }
      goto L_089C5508;
    }
L_089C5508:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 1000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5724;
      }
      goto L_089C5514;
    }
L_089C5514:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(472));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11896));
    ctx.gpr[31] = (0x089C5524u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089C5524u) goto L_089C5524;
    return;
L_089C5524:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (0u | 33u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(460));
      if (branch_taken) {
          goto L_089C55D4;
      }
      goto L_089C5550;
    }
L_089C5550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[17] = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (0u | 9999u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 9999u);
        goto L_089C5574;
    }
    goto L_089C5574;
L_089C5574:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C5584u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089C5584u) goto L_089C5584;
    return;
L_089C5584:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 9999u);
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11892));
    ctx.gpr[16] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 9999u);
        goto L_089C55BC;
    }
    goto L_089C55BC;
L_089C55BC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C55CCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089C55CCu) goto L_089C55CC;
    return;
L_089C55CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5624;
      }
      goto L_089C55D4;
    }
L_089C55D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 9999u);
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 9999u);
        goto L_089C55EC;
    }
    goto L_089C55EC;
L_089C55EC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C55FCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089C55FCu) goto L_089C55FC;
    return;
L_089C55FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11892));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x089C5624u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089C5624u) goto L_089C5624;
    return;
L_089C5624:
    ctx.gpr[31] = (0x089C562Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 109u, 0x08B0C848u>(ctx, &aot_mem) && ctx.pc == 0x089C562Cu) goto L_089C562C;
    return;
L_089C562C:
    ctx.gpr[5] = (17376u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[5] = (17364u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C565Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x089C565Cu) goto L_089C565C;
    return;
L_089C565C:
    ctx.gpr[31] = (0x089C5664u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem) && ctx.pc == 0x089C5664u) goto L_089C5664;
    return;
L_089C5664:
    ctx.gpr[31] = (0x089C566Cu);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x089C566Cu) goto L_089C566C;
    return;
L_089C566C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C5678u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem) && ctx.pc == 0x089C5678u) goto L_089C5678;
    return;
L_089C5678:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C5688u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C5688u) goto L_089C5688;
    return;
L_089C5688:
    ctx.gpr[5] = (17379u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C56ACu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x089C56ACu) goto L_089C56AC;
    return;
L_089C56AC:
    ctx.gpr[31] = (0x089C56B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem) && ctx.pc == 0x089C56B4u) goto L_089C56B4;
    return;
L_089C56B4:
    ctx.gpr[31] = (0x089C56BCu);
    ctx.gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x089C56BCu) goto L_089C56BC;
    return;
L_089C56BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C56C8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem) && ctx.pc == 0x089C56C8u) goto L_089C56C8;
    return;
L_089C56C8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C56D8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C56D8u) goto L_089C56D8;
    return;
L_089C56D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089C56F0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x089C56F0u) goto L_089C56F0;
    return;
L_089C56F0:
    ctx.gpr[31] = (0x089C56F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem) && ctx.pc == 0x089C56F8u) goto L_089C56F8;
    return;
L_089C56F8:
    ctx.gpr[31] = (0x089C5700u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x089C5700u) goto L_089C5700;
    return;
L_089C5700:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C570Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem) && ctx.pc == 0x089C570Cu) goto L_089C570C;
    return;
L_089C570C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C571Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C571Cu) goto L_089C571C;
    return;
L_089C571C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C5724;
    }
L_089C5724:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(508));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C5738u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089C5738u) goto L_089C5738;
    return;
L_089C5738:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5744u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem) && ctx.pc == 0x089C5744u) goto L_089C5744;
    return;
L_089C5744:
    ctx.gpr[5] = (17363u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(492));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089C5760u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x089C5760u) goto L_089C5760;
    return;
L_089C5760:
    ctx.gpr[31] = (0x089C5768u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem) && ctx.pc == 0x089C5768u) goto L_089C5768;
    return;
L_089C5768:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C5778u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C5778u) goto L_089C5778;
    return;
L_089C5778:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(716)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C57B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C57EC;
      }
      goto L_089C57D8;
    }
L_089C57D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C57F4;
      }
      goto L_089C57E4;
    }
L_089C57E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5CE0;
      }
      goto L_089C57EC;
    }
L_089C57EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5CE0;
      }
      goto L_089C57F4;
    }
L_089C57F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (17279u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9252)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_089C58E0;
      }
      goto L_089C5808;
    }
L_089C5808:
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C58DC;
      }
      goto L_089C5814;
    }
L_089C5814:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C5874;
      }
      goto L_089C5820;
    }
L_089C5820:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089C5898;
      }
      goto L_089C5828;
    }
L_089C5828:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C58B0;
      }
      goto L_089C5830;
    }
L_089C5830:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089C58C8;
      }
      goto L_089C5838;
    }
L_089C5838:
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9244), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9248), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10848)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089C5864;
      }
      goto L_089C585C;
    }
L_089C585C:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C586C;
      }
      goto L_089C5864;
    }
L_089C5864:
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10848), ctx.gpr[6]);
    goto L_089C586C;
L_089C586C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C58DC;
      }
      goto L_089C5874;
    }
L_089C5874:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5888;
      }
      goto L_089C5880;
    }
L_089C5880:
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), ctx.gpr[5]);
    goto L_089C5888;
L_089C5888:
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9244), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C58DC;
      }
      goto L_089C5898;
    }
L_089C5898:
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9244), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C58DC;
      }
      goto L_089C58B0;
    }
L_089C58B0:
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9244), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C58DC;
      }
      goto L_089C58C8;
    }
L_089C58C8:
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9244), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_089C58DC;
L_089C58DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_089C58E0;
L_089C58E0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C5CDC;
      }
      goto L_089C58E8;
    }
L_089C58E8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C5910;
      }
      goto L_089C58F4;
    }
L_089C58F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C5B5C;
      }
      goto L_089C58FC;
    }
L_089C58FC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9244)));
        goto L_089C5B2C;
    }
    goto L_089C5904;
L_089C5904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_089C5930;
      }
      goto L_089C590C;
    }
L_089C590C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    goto L_089C5910;
L_089C5910:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_089C59D8;
      }
      goto L_089C5918;
    }
L_089C5918:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_089C5A7C;
      }
      goto L_089C5924;
    }
L_089C5924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5B5C;
      }
      goto L_089C592C;
    }
L_089C592C:
    ctx.gpr[4] = (16968u << 16u);
    goto L_089C5930;
L_089C5930:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9248)));
      if (branch_taken) {
          goto L_089C5978;
      }
      goto L_089C5960;
    }
L_089C5960:
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C5998;
      }
      goto L_089C5978;
    }
L_089C5978:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_089C5998;
L_089C5998:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9248), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C59CC;
      }
      goto L_089C59B0;
    }
L_089C59B0:
    ctx.gpr[4] = (0u | 1000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9248), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), ctx.gpr[4]);
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089C59CC;
L_089C59CC:
    ctx.fpr[20] = ctx.fpr[13] / ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_089C5B5C;
      }
      goto L_089C59D8;
    }
L_089C59D8:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9248)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089C5A24;
      }
      goto L_089C5A0C;
    }
L_089C5A0C:
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C5A44;
      }
      goto L_089C5A24;
    }
L_089C5A24:
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    goto L_089C5A44;
L_089C5A44:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9248), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C5A70;
      }
      goto L_089C5A60;
    }
L_089C5A60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9248), 0u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    goto L_089C5A70;
L_089C5A70:
    ctx.fpr[20] = ctx.fpr[13] / ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_089C5B5C;
      }
      goto L_089C5A7C;
    }
L_089C5A7C:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9248)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089C5AC8;
      }
      goto L_089C5AB0;
    }
L_089C5AB0:
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C5AE8;
      }
      goto L_089C5AC8;
    }
L_089C5AC8:
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    goto L_089C5AE8;
L_089C5AE8:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9248), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C5B20;
      }
      goto L_089C5B04;
    }
L_089C5B04:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9248), 0u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    goto L_089C5B20;
L_089C5B20:
    ctx.fpr[20] = ctx.fpr[13] / ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_089C5B5C;
      }
      goto L_089C5B2C;
    }
L_089C5B2C:
    ctx.gpr[5] = (0u | 1000u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9248), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C5B5C;
      }
      goto L_089C5B54;
    }
L_089C5B54:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), ctx.gpr[4]);
    goto L_089C5B5C;
L_089C5B5C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2279u << 16u);
      if (branch_taken) {
          goto L_089C5CD0;
      }
      goto L_089C5B68;
    }
L_089C5B68:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17968));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C5CD0;
      }
      goto L_089C5B84;
    }
L_089C5B84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C5CD0;
      }
      goto L_089C5B98;
    }
L_089C5B98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_089C5CD0;
      }
      goto L_089C5BAC;
    }
L_089C5BAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9244)));
      if (branch_taken) {
          goto L_089C5BF4;
      }
      goto L_089C5BDC;
    }
L_089C5BDC:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C5C14;
      }
      goto L_089C5BF4;
    }
L_089C5BF4:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_089C5C14;
L_089C5C14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9244), ctx.gpr[4]);
    ctx.gpr[31] = (0x089C5C20u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x089C5C20u) goto L_089C5C20;
    return;
L_089C5C20:
    ctx.gpr[31] = (0x089C5C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5C28u) goto L_089C5C28;
    return;
L_089C5C28:
    ctx.gpr[31] = (0x089C5C30u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x089C5C30u) goto L_089C5C30;
    return;
L_089C5C30:
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x089C5C40u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem) && ctx.pc == 0x089C5C40u) goto L_089C5C40;
    return;
L_089C5C40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5CE0;
      }
      goto L_089C5C4C;
    }
L_089C5C4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5CE0;
      }
      goto L_089C5C58;
    }
L_089C5C58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17389u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17258u << 16u);
    ctx.gpr[31] = (0x089C5C94u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem) && ctx.pc == 0x089C5C94u) goto L_089C5C94;
    return;
L_089C5C94:
    ctx.fpr[15] = ctx.fpr[0] + ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089C5CACu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x089C5CACu) goto L_089C5CAC;
    return;
L_089C5CAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C5CC8u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem) && ctx.pc == 0x089C5CC8u) goto L_089C5CC8;
    return;
L_089C5CC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5CE0;
      }
      goto L_089C5CD0;
    }
L_089C5CD0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C5CE0;
      }
      goto L_089C5CDC;
    }
L_089C5CDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_089C5CE0;
L_089C5CE0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5CFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5D4Cu);
    ctx.gpr[8] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5D4Cu) goto L_089C5D4C;
    return;
L_089C5D4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24928)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24924)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(280));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[19] = (ctx.gpr[6] + static_cast<std::uint32_t>(10924));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-20));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-20));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089C5DE4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5DE4u) goto L_089C5DE4;
    return;
L_089C5DE4:
    ctx.gpr[7] = (15395u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16253u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 28836u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089C5E34u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C5E34u) goto L_089C5E34;
    return;
L_089C5E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x089C5E94u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5E94u) goto L_089C5E94;
    return;
L_089C5E94:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089C5EC4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C5EC4u) goto L_089C5EC4;
    return;
L_089C5EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x089C5F20u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5F20u) goto L_089C5F20;
    return;
L_089C5F20:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089C5F54u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C5F54u) goto L_089C5F54;
    return;
L_089C5F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[6] >> 31u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x089C5FC0u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5FC0u) goto L_089C5FC0;
    return;
L_089C5FC0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089C5FF0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C5FF0u) goto L_089C5FF0;
    return;
L_089C5FF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[16] = (0u - ctx.gpr[16]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-20));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[18] = (0u - ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-20));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089C6060u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6060u) goto L_089C6060;
    return;
L_089C6060:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089C6090u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C6090u) goto L_089C6090;
    return;
L_089C6090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x089C60F0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C60F0u) goto L_089C60F0;
    return;
L_089C60F0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089C6120u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C6120u) goto L_089C6120;
    return;
L_089C6120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x089C617Cu);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C617Cu) goto L_089C617C;
    return;
L_089C617C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089C61ACu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C61ACu) goto L_089C61AC;
    return;
L_089C61AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[7] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x089C6214u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6214u) goto L_089C6214;
    return;
L_089C6214:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089C6244u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C6244u) goto L_089C6244;
    return;
L_089C6244:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
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
L_089C6278:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C6298;
      }
      goto L_089C6290;
    }
L_089C6290:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    goto L_089C6298;
L_089C6298:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C62A8;
      }
      goto L_089C62A0;
    }
L_089C62A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_089C62A8;
L_089C62A8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C62C0;
      }
      goto L_089C62B8;
    }
L_089C62B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_089C62C0;
L_089C62C0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C62C8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C62E8;
      }
      goto L_089C62E0;
    }
L_089C62E0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    goto L_089C62E8;
L_089C62E8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C62F8;
      }
      goto L_089C62F0;
    }
L_089C62F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_089C62F8;
L_089C62F8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C6310;
      }
      goto L_089C6308;
    }
L_089C6308:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_089C6310;
L_089C6310:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6318:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6328:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25168));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C634Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C6D00;
L_089C634C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6360:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C63A4;
      }
      goto L_089C6370;
    }
L_089C6370:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26996));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5876), 0u);
      if (branch_taken) {
          goto L_089C6390;
      }
      goto L_089C6384;
    }
L_089C6384:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_089C6390;
L_089C6390:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C63A4;
      }
      goto L_089C639C;
    }
L_089C639C:
    ctx.gpr[31] = (0x089C63A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x089C63A4u) goto L_089C63A4;
    return;
L_089C63A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C63B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6404;
      }
      goto L_089C63C0;
    }
L_089C63C0:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25168));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089C63F0;
      }
      goto L_089C63D0;
    }
L_089C63D0:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26996));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5876), 0u);
      if (branch_taken) {
          goto L_089C63F0;
      }
      goto L_089C63E4;
    }
L_089C63E4:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_089C63F0;
L_089C63F0:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6404;
      }
      goto L_089C63FC;
    }
L_089C63FC:
    ctx.gpr[31] = (0x089C6404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x089C6404u) goto L_089C6404;
    return;
L_089C6404:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6410:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C6610;
      }
      goto L_089C6448;
    }
L_089C6448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089C6480;
      }
      goto L_089C6468;
    }
L_089C6468:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C648C;
      }
      goto L_089C6480;
    }
L_089C6480:
    ctx.gpr[31] = (0x089C6488u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 365u, 0x08B658A0u>(ctx, &aot_mem) && ctx.pc == 0x089C6488u) goto L_089C6488;
    return;
L_089C6488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089C648C;
L_089C648C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C65BC;
      }
      goto L_089C64AC;
    }
L_089C64AC:
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089C64CC;
      }
      goto L_089C64B8;
    }
L_089C64B8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C64DC;
      }
      goto L_089C64CC;
    }
L_089C64CC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089C64DC;
L_089C64DC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6504;
      }
      goto L_089C64E4;
    }
L_089C64E4:
    ctx.gpr[31] = (0x089C64ECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x089C64ECu) goto L_089C64EC;
    return;
L_089C64EC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6504;
      }
      goto L_089C64F8;
    }
L_089C64F8:
    ctx.gpr[31] = (0x089C6500u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x089C6500u) goto L_089C6500;
    return;
L_089C6500:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_089C6504;
L_089C6504:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C6530u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089C71E4;
L_089C6530:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C655C;
      }
      goto L_089C6540;
    }
L_089C6540:
    ctx.gpr[20] = (ctx.gpr[23] - ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C6554u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x089C6554u) goto L_089C6554;
    return;
L_089C6554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089C655C;
      }
      goto L_089C655C;
    }
L_089C655C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089C6570;
      }
      goto L_089C6568;
    }
L_089C6568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089C658C;
      }
      goto L_089C6570;
    }
L_089C6570:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089C6588u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x089C6588u) goto L_089C6588;
    return;
L_089C6588:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    goto L_089C658C;
L_089C658C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C65A8;
      }
      goto L_089C65A0;
    }
L_089C65A0:
    ctx.gpr[31] = (0x089C65A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x089C65A8u) goto L_089C65A8;
    return;
L_089C65A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C6610;
      }
      goto L_089C65BC;
    }
L_089C65BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C65D4;
      }
      goto L_089C65CC;
    }
L_089C65CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_089C65F0;
      }
      goto L_089C65D4;
    }
L_089C65D4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089C65E8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x089C65E8u) goto L_089C65E8;
    return;
L_089C65E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_089C65F0;
L_089C65F0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_089C6610;
L_089C6610:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089C6640:
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
          goto L_089C6890;
      }
      goto L_089C6678;
    }
L_089C6678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089C66B0;
      }
      goto L_089C6698;
    }
L_089C6698:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C66BC;
      }
      goto L_089C66B0;
    }
L_089C66B0:
    ctx.gpr[31] = (0x089C66B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 365u, 0x08B658A0u>(ctx, &aot_mem) && ctx.pc == 0x089C66B8u) goto L_089C66B8;
    return;
L_089C66B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089C66BC;
L_089C66BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089C6814;
    }
    goto L_089C66DC;
L_089C66DC:
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089C66FC;
      }
      goto L_089C66E8;
    }
L_089C66E8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C670C;
      }
      goto L_089C66FC;
    }
L_089C66FC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089C670C;
L_089C670C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6734;
      }
      goto L_089C6714;
    }
L_089C6714:
    ctx.gpr[31] = (0x089C671Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x089C671Cu) goto L_089C671C;
    return;
L_089C671C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6734;
      }
      goto L_089C6728;
    }
L_089C6728:
    ctx.gpr[31] = (0x089C6730u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x089C6730u) goto L_089C6730;
    return;
L_089C6730:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_089C6734;
L_089C6734:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C6760u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089C71E4;
L_089C6760:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C678C;
      }
      goto L_089C6770;
    }
L_089C6770:
    ctx.gpr[20] = (ctx.gpr[23] - ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C6784u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x089C6784u) goto L_089C6784;
    return;
L_089C6784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089C678C;
      }
      goto L_089C678C;
    }
L_089C678C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[23] = (ctx.gpr[20] | 0u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C67B4u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089C71E4;
L_089C67B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[22];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C67CC;
      }
      goto L_089C67C4;
    }
L_089C67C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089C67E4;
      }
      goto L_089C67CC;
    }
L_089C67CC:
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C67E0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x089C67E0u) goto L_089C67E0;
    return;
L_089C67E0:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    goto L_089C67E4;
L_089C67E4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6800;
      }
      goto L_089C67F8;
    }
L_089C67F8:
    ctx.gpr[31] = (0x089C6800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x089C6800u) goto L_089C6800;
    return;
L_089C6800:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C6890;
      }
      goto L_089C6814;
    }
L_089C6814:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089C683Cu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089C71E4;
L_089C683C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[21];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C6858;
      }
      goto L_089C684C;
    }
L_089C684C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_089C6870;
      }
      goto L_089C6858;
    }
L_089C6858:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C6868u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x089C6868u) goto L_089C6868;
    return;
L_089C6868:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    goto L_089C6870;
L_089C6870:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_089C6890;
L_089C6890:
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
L_089C68C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[17]);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089C6A84;
      }
      goto L_089C68EC;
    }
L_089C68EC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4040)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7701)));
      if (branch_taken) {
          goto L_089C6A84;
      }
      goto L_089C6910;
    }
L_089C6910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7700)));
      if (branch_taken) {
          goto L_089C6A84;
      }
      goto L_089C6918;
    }
L_089C6918:
    ctx.gpr[31] = (0x089C6920u);
    // nop
    goto L_089C6D68;
L_089C6920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C6A84;
      }
      goto L_089C6928;
    }
L_089C6928:
    ctx.gpr[31] = (0x089C6930u);
    // nop
    goto L_089C6D78;
L_089C6930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C6A84;
      }
      goto L_089C6938;
    }
L_089C6938:
    ctx.gpr[31] = (0x089C6940u);
    // nop
    goto L_089C6D88;
L_089C6940:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C6A84;
      }
      goto L_089C6948;
    }
L_089C6948:
    ctx.gpr[31] = (0x089C6950u);
    // nop
    goto L_089C6DBC;
L_089C6950:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C6A84;
      }
      goto L_089C6958;
    }
L_089C6958:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6A20;
      }
      goto L_089C6960;
    }
L_089C6960:
    ctx.gpr[31] = (0x089C6968u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 392u, 0x08991B5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6968u) goto L_089C6968;
    return;
L_089C6968:
    if (ctx.gpr[29] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089C6A08;
    }
    goto L_089C6970;
L_089C6970:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(268), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089C6980;
L_089C6980:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C69A8;
      }
      goto L_089C6988;
    }
L_089C6988:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C69A8;
      }
      goto L_089C6994;
    }
L_089C6994:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C6980;
      }
      goto L_089C69A8;
    }
L_089C69A8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C69F0;
      }
      goto L_089C69B0;
    }
L_089C69B0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[17] == ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089C6A08;
    }
    goto L_089C69BC;
L_089C69BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C69DC;
      }
      goto L_089C69D0;
    }
L_089C69D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C69DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x089C69DCu) goto L_089C69DC;
    return;
L_089C69DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C6A04;
      }
      goto L_089C69F0;
    }
L_089C69F0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(269), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(270), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(270));
    ctx.gpr[31] = (0x089C6A04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C6640;
L_089C6A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089C6A08;
L_089C6A08:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6A18;
      }
      goto L_089C6A10;
    }
L_089C6A10:
    ctx.gpr[31] = (0x089C6A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x089C6A18u) goto L_089C6A18;
    return;
L_089C6A18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6B70;
      }
      goto L_089C6A20;
    }
L_089C6A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6A84;
      }
      goto L_089C6A28;
    }
L_089C6A28:
    ctx.gpr[31] = (0x089C6A30u);
    // nop
    goto L_089C6E0C;
L_089C6A30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C6A84;
      }
      goto L_089C6A38;
    }
L_089C6A38:
    ctx.gpr[31] = (0x089C6A40u);
    // nop
    goto L_089C6EF4;
L_089C6A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C6A84;
      }
      goto L_089C6A48;
    }
L_089C6A48:
    ctx.gpr[31] = (0x089C6A50u);
    // nop
    goto L_089C6F04;
L_089C6A50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C6A84;
      }
      goto L_089C6A58;
    }
L_089C6A58:
    ctx.gpr[31] = (0x089C6A60u);
    // nop
    goto L_089C6DFC;
L_089C6A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C6A84;
      }
      goto L_089C6A68;
    }
L_089C6A68:
    ctx.gpr[31] = (0x089C6A70u);
    // nop
    goto L_089C70C8;
L_089C6A70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C6A84;
      }
      goto L_089C6A78;
    }
L_089C6A78:
    ctx.gpr[31] = (0x089C6A80u);
    // nop
    goto L_089C6F60;
L_089C6A80:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_089C6A84;
L_089C6A84:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6B6C;
      }
      goto L_089C6A8C;
    }
L_089C6A8C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11860));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C6AA0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089C6AA0u) goto L_089C6AA0;
    return;
L_089C6AA0:
    ctx.gpr[31] = (0x089C6AA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x089C6AA8u) goto L_089C6AA8;
    return;
L_089C6AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[29] + ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089C6B28;
    }
    goto L_089C6ACC;
L_089C6ACC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C6AE0;
      }
      goto L_089C6AD4;
    }
L_089C6AD4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x089C6AE0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089C6AE0u) goto L_089C6AE0;
    return;
L_089C6AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089C6B6C;
      }
      goto L_089C6AF4;
    }
L_089C6AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C6B14;
      }
      goto L_089C6B08;
    }
L_089C6B08:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C6B14u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x089C6B14u) goto L_089C6B14;
    return;
L_089C6B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C6B6C;
      }
      goto L_089C6B28;
    }
L_089C6B28:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089C6B40;
      }
      goto L_089C6B38;
    }
L_089C6B38:
    ctx.gpr[31] = (0x089C6B40u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089C6B40u) goto L_089C6B40;
    return;
L_089C6B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(271), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(272), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C6B6Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_089C6410;
L_089C6B6C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_089C6B70;
L_089C6B70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6B8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089C6CF4;
      }
      goto L_089C6BAC;
    }
L_089C6BAC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-3984)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6BC4:
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x089C6BD0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A060BCu>(ctx, &aot_mem) && ctx.pc == 0x089C6BD0u) goto L_089C6BD0;
    return;
L_089C6BD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6CF4;
      }
      goto L_089C6BD8;
    }
L_089C6BD8:
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x089C6BE4u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A0605Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6BE4u) goto L_089C6BE4;
    return;
L_089C6BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6CF4;
      }
      goto L_089C6BEC;
    }
L_089C6BEC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089C6C00u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089C6D70;
L_089C6C00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6CF4;
      }
      goto L_089C6C08;
    }
L_089C6C08:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089C6C18u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089C6D80;
L_089C6C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6CF4;
      }
      goto L_089C6C20;
    }
L_089C6C20:
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089C6C30u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089C6DB4;
L_089C6C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6CF4;
      }
      goto L_089C6C38;
    }
L_089C6C38:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089C6C4Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089C6DC4;
L_089C6C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6CF4;
      }
      goto L_089C6C54;
    }
L_089C6C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6CF4;
      }
      goto L_089C6C5C;
    }
L_089C6C5C:
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089C6C6Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089C6E58;
L_089C6C6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6CF4;
      }
      goto L_089C6C74;
    }
L_089C6C74:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089C6C88u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089C6EFC;
L_089C6C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6CF4;
      }
      goto L_089C6C90;
    }
L_089C6C90:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089C6CA4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089C6F0C;
L_089C6CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6CF4;
      }
      goto L_089C6CAC;
    }
L_089C6CAC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089C6CC0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089C6E04;
L_089C6CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6CF4;
      }
      goto L_089C6CC8;
    }
L_089C6CC8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089C6CD8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089C70D0;
L_089C6CD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6CF4;
      }
      goto L_089C6CE0;
    }
L_089C6CE0:
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089C6CF4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089C6F68;
L_089C6CF4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6D00:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 288u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (0u | 96u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 112u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6D68:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6D70:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6D78:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6D80:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6D88:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19)));
      if (branch_taken) {
          goto L_089C6DAC;
      }
      goto L_089C6D94;
    }
L_089C6D94:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[2] != ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
        goto L_089C6DA4;
    }
    goto L_089C6DA4;
L_089C6DA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C6DAC;
      }
      goto L_089C6DAC;
    }
L_089C6DAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6DB4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6DBC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6DC4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6DCC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6DD4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6DDC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6DE4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6DEC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6DF4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6DFC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6E04:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6E0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C6E1Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x089C6E1Cu) goto L_089C6E1C;
    return;
L_089C6E1C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6E40;
      }
      goto L_089C6E28;
    }
L_089C6E28:
    ctx.gpr[31] = (0x089C6E30u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x089C6E30u) goto L_089C6E30;
    return;
L_089C6E30:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(150)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C6E48;
      }
      goto L_089C6E40;
    }
L_089C6E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6E4C;
      }
      goto L_089C6E48;
    }
L_089C6E48:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C6E4C;
L_089C6E4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6E58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6EA4;
      }
      goto L_089C6E70;
    }
L_089C6E70:
    ctx.gpr[31] = (0x089C6E78u);
    // nop
    goto L_089C6F04;
L_089C6E78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6E90;
      }
      goto L_089C6E80;
    }
L_089C6E80:
    ctx.gpr[31] = (0x089C6E88u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x089C6E88u) goto L_089C6E88;
    return;
L_089C6E88:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089C6EE4;
      }
      goto L_089C6E90;
    }
L_089C6E90:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x089C6E9Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x089C6E9Cu) goto L_089C6E9C;
    return;
L_089C6E9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_089C6EE4;
      }
      goto L_089C6EA4;
    }
L_089C6EA4:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C6EE4;
      }
      goto L_089C6EB0;
    }
L_089C6EB0:
    ctx.gpr[31] = (0x089C6EB8u);
    // nop
    goto L_089C6F04;
L_089C6EB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6ED4;
      }
      goto L_089C6EC0;
    }
L_089C6EC0:
    ctx.gpr[16] = (0u | 2u);
    ctx.gpr[31] = (0x089C6ECCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x089C6ECCu) goto L_089C6ECC;
    return;
L_089C6ECC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_089C6EE4;
      }
      goto L_089C6ED4;
    }
L_089C6ED4:
    ctx.gpr[16] = (0u | 3u);
    ctx.gpr[31] = (0x089C6EE0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x089C6EE0u) goto L_089C6EE0;
    return;
L_089C6EE0:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(ctx.gpr[16]));
    goto L_089C6EE4;
L_089C6EE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6EF4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16129)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6EFC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16129), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6F04:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6F0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C6F2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C6E0C;
L_089C6F2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C6F38u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089C6E58;
L_089C6F38:
    ctx.gpr[31] = (0x089C6F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 829u, 0x0898B448u>(ctx, &aot_mem) && ctx.pc == 0x089C6F40u) goto L_089C6F40;
    return;
L_089C6F40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6F50:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6F58:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6F60:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6F68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] << 24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C6FB0;
      }
      goto L_089C6F98;
    }
L_089C6F98:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x089C6FA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x089C6FA8u) goto L_089C6FA8;
    return;
L_089C6FA8:
    ctx.gpr[31] = (0x089C6FB0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11872));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x089C6FB0u) goto L_089C6FB0;
    return;
L_089C6FB0:
    ctx.gpr[31] = (0x089C6FB8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem) && ctx.pc == 0x089C6FB8u) goto L_089C6FB8;
    return;
L_089C6FB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6FEC;
      }
      goto L_089C6FC0;
    }
L_089C6FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089C6FE8;
      }
      goto L_089C6FCC;
    }
L_089C6FCC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x089C6FDCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x089C6FDCu) goto L_089C6FDC;
    return;
L_089C6FDC:
    ctx.gpr[31] = (0x089C6FE4u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11872));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x089C6FE4u) goto L_089C6FE4;
    return;
L_089C6FE4:
    ctx.gpr[4] = (0u | 1u);
    goto L_089C6FE8;
L_089C6FE8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089C6FEC;
L_089C6FEC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x089C6FFCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 627u, 0x08A06798u>(ctx, &aot_mem) && ctx.pc == 0x089C6FFCu) goto L_089C6FFC;
    return;
L_089C6FFC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5576)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7010;
      }
      goto L_089C7008;
    }
L_089C7008:
    ctx.gpr[31] = (0x089C7010u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 185u, 0x08B50B6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7010u) goto L_089C7010;
    return;
L_089C7010:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(27))))));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C7090;
      }
      goto L_089C7020;
    }
L_089C7020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7038;
      }
      goto L_089C702C;
    }
L_089C702C:
    ctx.gpr[31] = (0x089C7034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x089C7034u) goto L_089C7034;
    return;
L_089C7034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_089C7038;
L_089C7038:
    ctx.gpr[31] = (0x089C7040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 472u, 0x088B6860u>(ctx, &aot_mem) && ctx.pc == 0x089C7040u) goto L_089C7040;
    return;
L_089C7040:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7070;
      }
      goto L_089C7048;
    }
L_089C7048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7060;
      }
      goto L_089C7054;
    }
L_089C7054:
    ctx.gpr[31] = (0x089C705Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x089C705Cu) goto L_089C705C;
    return;
L_089C705C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_089C7060;
L_089C7060:
    ctx.gpr[31] = (0x089C7068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 562u, 0x088B6F30u>(ctx, &aot_mem) && ctx.pc == 0x089C7068u) goto L_089C7068;
    return;
L_089C7068:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7084;
      }
      goto L_089C7070;
    }
L_089C7070:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C707Cu);
    ctx.gpr[5] = (0u | 2u);
    goto L_089C70D0;
L_089C707C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7090;
      }
      goto L_089C7084;
    }
L_089C7084:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C7090u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089C70D0;
L_089C7090:
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
L_089C70A8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C70B0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C70B8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C70C0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C70C8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C70D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C7108;
      }
      goto L_089C70F4;
    }
L_089C70F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C7100u);
    ctx.gpr[5] = (0u | 9u);
    goto L_089C6F68;
L_089C7100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7138;
      }
      goto L_089C7108;
    }
L_089C7108:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089C7118;
      }
      goto L_089C7110;
    }
L_089C7110:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C7138;
      }
      goto L_089C7118;
    }
L_089C7118:
    ctx.gpr[31] = (0x089C7120u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C6F60;
L_089C7120:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C7138;
      }
      goto L_089C712C;
    }
L_089C712C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C7138u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089C6F68;
L_089C7138:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7148:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7150:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7164:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C716C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7174:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C717C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7184:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C718C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7194:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(77)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C71A0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C71A8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(76))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C71B0:
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C71CC;
      }
      goto L_089C71C4;
    }
L_089C71C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089C71DC;
      }
      goto L_089C71CC;
    }
L_089C71CC:
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C71DC;
      }
      goto L_089C71D8;
    }
L_089C71D8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089C71DC;
L_089C71DC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C71E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C71F8:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7220:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7248:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9548), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9552), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9556), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9560), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9564), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9568), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9572), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9576), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9580), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9584), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9588), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9592), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9596), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9600), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8872), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9604), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9608), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9612), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8880), 0u);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9191), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9616), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11836), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11832), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C72B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C72DCu);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    goto L_089C7458;
L_089C72DC:
    ctx.gpr[31] = (0x089C72E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 842u, 0x089CB2D4u>(ctx, &aot_mem) && ctx.pc == 0x089C72E4u) goto L_089C72E4;
    return;
L_089C72E4:
    ctx.gpr[31] = (0x089C72ECu);
    // nop
    goto L_089C7B40;
L_089C72EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9191)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9564)));
        goto L_089C731C;
    }
    goto L_089C72F8;
L_089C72F8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9191), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9191)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7438;
      }
      goto L_089C730C;
    }
L_089C730C:
    ctx.gpr[31] = (0x089C7314u);
    // nop
    goto L_089C7A3C;
L_089C7314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7438;
      }
      goto L_089C731C;
    }
L_089C731C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9568)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9572)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9548)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9552)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9576)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9580)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9584)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9588)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9604), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9592)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9596)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9556)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9560)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9608), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9600)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8872)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9612), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9612), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
        goto L_089C73B4;
    }
    goto L_089C73A8;
L_089C73A8:
    ctx.gpr[31] = (0x089C73B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem) && ctx.pc == 0x089C73B0u) goto L_089C73B0;
    return;
L_089C73B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_089C73B4;
L_089C73B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7438;
      }
      goto L_089C73C0;
    }
L_089C73C0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7438;
      }
      goto L_089C73C8;
    }
L_089C73C8:
    ctx.gpr[31] = (0x089C73D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 281u, 0x089C9078u>(ctx, &aot_mem) && ctx.pc == 0x089C73D0u) goto L_089C73D0;
    return;
L_089C73D0:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1952)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x089C73F0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 281u, 0x089C9078u>(ctx, &aot_mem) && ctx.pc == 0x089C73F0u) goto L_089C73F0;
    return;
L_089C73F0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1952)));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x089C7408u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 281u, 0x089C9078u>(ctx, &aot_mem) && ctx.pc == 0x089C7408u) goto L_089C7408;
    return;
L_089C7408:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089C7424u);
    ctx.fpr[26] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 281u, 0x089C9078u>(ctx, &aot_mem) && ctx.pc == 0x089C7424u) goto L_089C7424;
    return;
L_089C7424:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C7438u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 301u, 0x089C9248u>(ctx, &aot_mem) && ctx.pc == 0x089C7438u) goto L_089C7438;
    return;
L_089C7438:
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
L_089C7458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C7460;
      }
      goto L_089C7460;
    }
L_089C7460:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1152));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1108), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1136), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1140), ctx.gpr[31]);
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[6] = (2246u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1840));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
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
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_089C74DC;
      }
      goto L_089C74D4;
    }
L_089C74D4:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_089C74DC;
L_089C74DC:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C754C;
      }
      goto L_089C74EC;
    }
L_089C74EC:
    ctx.gpr[31] = (0x089C74F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089C74F4u) goto L_089C74F4;
    return;
L_089C74F4:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089C7528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 281u, 0x089C9078u>(ctx, &aot_mem) && ctx.pc == 0x089C7528u) goto L_089C7528;
    return;
L_089C7528:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C754C;
      }
      goto L_089C7544;
    }
L_089C7544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C77D8;
      }
      goto L_089C754C;
    }
L_089C754C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    ctx.gpr[31] = (0x089C756Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem) && ctx.pc == 0x089C756Cu) goto L_089C756C;
    return;
L_089C756C:
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7598;
      }
      goto L_089C757C;
    }
L_089C757C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_089C75A0;
    }
    goto L_089C7590;
L_089C7590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C75A0;
      }
      goto L_089C7598;
    }
L_089C7598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C77D8;
      }
      goto L_089C75A0;
    }
L_089C75A0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089C75ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089C75ACu) goto L_089C75AC;
    return;
L_089C75AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11804)));
    ctx.gpr[31] = (0x089C75C0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11808)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C75C0u) goto L_089C75C0;
    return;
L_089C75C0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11796)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11800)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 72u);
    ctx.gpr[21] = (ctx.gpr[19] << 2u);
    goto L_089C75F8;
L_089C75F8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089C7620;
      }
      goto L_089C7608;
    }
L_089C7608:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7628;
      }
      goto L_089C7618;
    }
L_089C7618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7638;
      }
      goto L_089C7620;
    }
L_089C7620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C77D8;
      }
      goto L_089C7628;
    }
L_089C7628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_089C7638;
L_089C7638:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7680;
      }
      goto L_089C7640;
    }
L_089C7640:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C765C;
      }
      goto L_089C7650;
    }
L_089C7650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C765C;
L_089C765C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C7674u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7674u) goto L_089C7674;
    return;
L_089C7674:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7680;
      }
      goto L_089C767C;
    }
L_089C767C:
    ctx.gpr[18] = (0u | 1u);
    goto L_089C7680;
L_089C7680:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C75F8;
      }
      goto L_089C7688;
    }
L_089C7688:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C76B4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 729u, 0x089CAC6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C76B4u) goto L_089C76B4;
    return;
L_089C76B4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x089C76D4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem) && ctx.pc == 0x089C76D4u) goto L_089C76D4;
    return;
L_089C76D4:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(1918), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1336), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1336));
      if (branch_taken) {
          goto L_089C76FC;
      }
      goto L_089C76F4;
    }
L_089C76F4:
    ctx.gpr[31] = (0x089C76FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x089C76FCu) goto L_089C76FC;
    return;
L_089C76FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089C771Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 708u, 0x08B1FAACu>(ctx, &aot_mem) && ctx.pc == 0x089C771Cu) goto L_089C771C;
    return;
L_089C771C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7768;
      }
      goto L_089C7724;
    }
L_089C7724:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_089C772C;
L_089C772C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7758;
      }
      goto L_089C7738;
    }
L_089C7738:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089C7758;
      }
      goto L_089C7740;
    }
L_089C7740:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089C7758;
      }
      goto L_089C7748;
    }
L_089C7748:
    ctx.gpr[31] = (0x089C7750u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089C7804;
L_089C7750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C77D8;
      }
      goto L_089C7758;
    }
L_089C7758:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C772C;
      }
      goto L_089C7768;
    }
L_089C7768:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089C77B0u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 66u, 0x088B4738u>(ctx, &aot_mem) && ctx.pc == 0x089C77B0u) goto L_089C77B0;
    return;
L_089C77B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C77C8;
      }
      goto L_089C77B8;
    }
L_089C77B8:
    ctx.gpr[31] = (0x089C77C0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089C7804;
L_089C77C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C77D8;
      }
      goto L_089C77C8;
    }
L_089C77C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089C77D4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem) && ctx.pc == 0x089C77D4u) goto L_089C77D4;
    return;
L_089C77D4:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_089C77D8;
L_089C77D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1108)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1132)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7804:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[21] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C79DC;
      }
      goto L_089C7838;
    }
L_089C7838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089C7968;
      }
      goto L_089C784C;
    }
L_089C784C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[17] = (ctx.lo);
    goto L_089C7858;
L_089C7858:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C7874;
      }
      goto L_089C7860;
    }
L_089C7860:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089C787C;
    }
    goto L_089C7874;
L_089C7874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089C789C;
      }
      goto L_089C787C;
    }
L_089C787C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_089C7898;
    }
    goto L_089C7890;
L_089C7890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089C789C;
      }
      goto L_089C7898;
    }
L_089C7898:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[17]);
    goto L_089C789C;
L_089C789C:
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7954;
      }
      goto L_089C78A8;
    }
L_089C78A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089C7954;
      }
      goto L_089C78B4;
    }
L_089C78B4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C7954;
      }
      goto L_089C78BC;
    }
L_089C78BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C78D4u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C78D4u) goto L_089C78D4;
    return;
L_089C78D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C7954;
      }
      goto L_089C78E0;
    }
L_089C78E0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C78ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089C78ECu) goto L_089C78EC;
    return;
L_089C78EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C7904u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7904u) goto L_089C7904;
    return;
L_089C7904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x089C7928u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7928u) goto L_089C7928;
    return;
L_089C7928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C7940u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7940u) goto L_089C7940;
    return;
L_089C7940:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C7954u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 613u, 0x0881F6CCu>(ctx, &aot_mem) && ctx.pc == 0x089C7954u) goto L_089C7954;
    return;
L_089C7954:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_089C7858;
      }
      goto L_089C7968;
    }
L_089C7968:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C7974u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089C7974u) goto L_089C7974;
    return;
L_089C7974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C798Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C798Cu) goto L_089C798C;
    return;
L_089C798C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x089C79B0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C79B0u) goto L_089C79B0;
    return;
L_089C79B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C79C8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C79C8u) goto L_089C79C8;
    return;
L_089C79C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C79DCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 613u, 0x0881F6CCu>(ctx, &aot_mem) && ctx.pc == 0x089C79DCu) goto L_089C79DC;
    return;
L_089C79DC:
    ctx.gpr[31] = (0x089C79E4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 563u, 0x08A9F908u>(ctx, &aot_mem) && ctx.pc == 0x089C79E4u) goto L_089C79E4;
    return;
L_089C79E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C79F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C79F0u) goto L_089C79F0;
    return;
L_089C79F0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7A14;
      }
      goto L_089C79F8;
    }
L_089C79F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089C7A14u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7A14u) goto L_089C7A14;
    return;
L_089C7A14:
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
L_089C7A3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089C7A68;
L_089C7A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9548)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9552)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9604), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9564)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9568)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9572)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9576)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9580)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9584)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9588)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9592)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9596)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9608), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9556)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9560)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9600)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8872)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9612), ctx.gpr[4]);
    ctx.gpr[31] = (0x089C7AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 281u, 0x089C9078u>(ctx, &aot_mem) && ctx.pc == 0x089C7AF0u) goto L_089C7AF0;
    return;
L_089C7AF0:
    ctx.gpr[31] = (0x089C7AF8u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 281u, 0x089C9078u>(ctx, &aot_mem) && ctx.pc == 0x089C7AF8u) goto L_089C7AF8;
    return;
L_089C7AF8:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089C7B0Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 301u, 0x089C9248u>(ctx, &aot_mem) && ctx.pc == 0x089C7B0Cu) goto L_089C7B0C;
    return;
L_089C7B0C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7A68;
      }
      goto L_089C7B24;
    }
L_089C7B24:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7B40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C7CB8;
      }
      goto L_089C7B80;
    }
L_089C7B80:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x089C7B8Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 221u, 0x08B6D34Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7B8Cu) goto L_089C7B8C;
    return;
L_089C7B8C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7CB8;
      }
      goto L_089C7B98;
    }
L_089C7B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (19224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 38528u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089C7C80;
      }
      goto L_089C7BB8;
    }
L_089C7BB8:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[18] = (ctx.lo);
    goto L_089C7BD0;
L_089C7BD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C7BE8;
      }
      goto L_089C7BD8;
    }
L_089C7BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
        goto L_089C7BF0;
    }
    goto L_089C7BE8;
L_089C7BE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7C10;
      }
      goto L_089C7BF0;
    }
L_089C7BF0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_089C7C0C;
    }
    goto L_089C7C04;
L_089C7C04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7C10;
      }
      goto L_089C7C0C;
    }
L_089C7C0C:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[18]);
    goto L_089C7C10;
L_089C7C10:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7C6C;
      }
      goto L_089C7C1C;
    }
L_089C7C1C:
    ctx.gpr[31] = (0x089C7C24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 128u, 0x0890C798u>(ctx, &aot_mem) && ctx.pc == 0x089C7C24u) goto L_089C7C24;
    return;
L_089C7C24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7C6C;
      }
      goto L_089C7C2C;
    }
L_089C7C2C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C7C6C;
      }
      goto L_089C7C64;
    }
L_089C7C64:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    goto L_089C7C6C;
L_089C7C6C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_089C7BD0;
      }
      goto L_089C7C80;
    }
L_089C7C80:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7CB8;
      }
      goto L_089C7C88;
    }
L_089C7C88:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C7C94u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7C94u) goto L_089C7C94;
    return;
L_089C7C94:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7CB8;
      }
      goto L_089C7C9C;
    }
L_089C7C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089C7CB8u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7CB8u) goto L_089C7CB8;
    return;
L_089C7CB8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
L_089C7CE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089C7D9C;
      }
      goto L_089C7D14;
    }
L_089C7D14:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[16] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_089C7D24;
L_089C7D24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C7D40;
      }
      goto L_089C7D2C;
    }
L_089C7D2C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_089C7D48;
    }
    goto L_089C7D40;
L_089C7D40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7D68;
      }
      goto L_089C7D48;
    }
L_089C7D48:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_089C7D64;
    }
    goto L_089C7D5C;
L_089C7D5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7D68;
      }
      goto L_089C7D64;
    }
L_089C7D64:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[16]);
    goto L_089C7D68;
L_089C7D68:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7D88;
      }
      goto L_089C7D70;
    }
L_089C7D70:
    ctx.gpr[31] = (0x089C7D78u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 398u, 0x0882B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089C7D78u) goto L_089C7D78;
    return;
L_089C7D78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7D88;
      }
      goto L_089C7D80;
    }
L_089C7D80:
    ctx.gpr[31] = (0x089C7D88u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089C7FC8;
L_089C7D88:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-544));
      if (branch_taken) {
          goto L_089C7D24;
      }
      goto L_089C7D9C;
    }
L_089C7D9C:
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
L_089C7DB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089C7DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 997u, 0x089CBF88u>(ctx, &aot_mem) && ctx.pc == 0x089C7DD8u) goto L_089C7DD8;
    return;
L_089C7DD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7E00;
      }
      goto L_089C7DE0;
    }
L_089C7DE0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C7DECu);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem) && ctx.pc == 0x089C7DECu) goto L_089C7DEC;
    return;
L_089C7DEC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089C7E08;
      }
      goto L_089C7DF8;
    }
L_089C7DF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7E14;
      }
      goto L_089C7E00;
    }
L_089C7E00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7FB0;
      }
      goto L_089C7E08;
    }
L_089C7E08:
    ctx.gpr[31] = (0x089C7E10u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 358u, 0x0882B73Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7E10u) goto L_089C7E10;
    return;
L_089C7E10:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C7E14;
L_089C7E14:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7FB0;
      }
      goto L_089C7E1C;
    }
L_089C7E1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C7E28u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7E28u) goto L_089C7E28;
    return;
L_089C7E28:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7E4C;
      }
      goto L_089C7E30;
    }
L_089C7E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089C7E4Cu);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7E4Cu) goto L_089C7E4C;
    return;
L_089C7E4C:
    ctx.gpr[31] = (0x089C7E54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7E54u) goto L_089C7E54;
    return;
L_089C7E54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7E78;
      }
      goto L_089C7E68;
    }
L_089C7E68:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089C7E78;
L_089C7E78:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[8] = (0u | 3u);
      if (branch_taken) {
          goto L_089C7E98;
      }
      goto L_089C7E88;
    }
L_089C7E88:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089C7E9C;
      }
      goto L_089C7E90;
    }
L_089C7E90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7EC0;
      }
      goto L_089C7E98;
    }
L_089C7E98:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    goto L_089C7E9C;
L_089C7E9C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(58)));
    ctx.gpr[8] = (ctx.gpr[7] & 8192u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7EB8;
      }
      goto L_089C7EAC;
    }
L_089C7EAC:
    ctx.gpr[7] = (ctx.gpr[7] & 16384u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089C7EC0;
      }
      goto L_089C7EB8;
    }
L_089C7EB8:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_089C7EC0;
L_089C7EC0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C7F10;
      }
      goto L_089C7EC8;
    }
L_089C7EC8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7EE0;
      }
      goto L_089C7ED0;
    }
L_089C7ED0:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089C7EE0;
L_089C7EE0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(58)));
    ctx.gpr[5] = (ctx.gpr[5] & 16384u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7F10;
      }
      goto L_089C7EF8;
    }
L_089C7EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C7FB0;
      }
      goto L_089C7F10;
    }
L_089C7F10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C7F5C;
      }
      goto L_089C7F20;
    }
L_089C7F20:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C7F5C;
      }
      goto L_089C7F2C;
    }
L_089C7F2C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(198)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C7F5C;
      }
      goto L_089C7F38;
    }
L_089C7F38:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C7F5C;
      }
      goto L_089C7F44;
    }
L_089C7F44:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(202)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C7F5C;
      }
      goto L_089C7F50;
    }
L_089C7F50:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7F64;
      }
      goto L_089C7F5C;
    }
L_089C7F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089C7F64;
      }
      goto L_089C7F64;
    }
L_089C7F64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7FB0;
      }
      goto L_089C7F6C;
    }
L_089C7F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (47747u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C7F98u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7F98u) goto L_089C7F98;
    return;
L_089C7F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[31] = (0x089C7FB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem) && ctx.pc == 0x089C7FB0u) goto L_089C7FB0;
    return;
L_089C7FB0:
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
L_089C7FC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C7FECu);
    ctx.gpr[4] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 7u, 0x08AB0078u>(ctx, &aot_mem) && ctx.pc == 0x089C7FECu) goto L_089C7FEC;
    return;
L_089C7FEC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 2u, 0x089C8004u>(ctx, &aot_mem); return;
      }
      goto L_089C7FF8;
    }
L_089C7FF8:
    ctx.gpr[31] = (0x089C8000u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 99u, 0x08804C20u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0112(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0112_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_112(Runtime &runtime) {
    runtime.register_generated_unit(112u, 0x089C4000u, 16384u, &recomp_unit_0112, &recomp_unit_0112_entry);
    runtime.register_function(0x089C4000u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4020u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C402Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4038u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4044u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C404Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4050u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4054u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4060u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4070u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C407Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4088u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4098u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C40A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C40A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C40B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C40C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C40CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C40D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C40FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4108u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4114u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4120u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4128u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C412Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4134u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C413Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C414Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C415Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4168u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C419Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4200u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4208u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4218u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4220u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C422Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C423Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C424Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4254u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4258u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C427Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4288u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4294u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4320u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4328u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C432Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C434Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4358u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4364u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4370u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4378u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C437Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4384u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C438Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C439Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4420u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C442Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4438u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4444u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C444Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4450u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4458u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4460u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4470u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4478u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4480u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C448Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C450Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4518u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4524u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4530u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4538u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C453Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4544u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C454Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C455Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C456Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4578u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4604u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4608u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4610u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4618u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4628u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4640u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4674u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C467Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4680u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4700u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4708u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4710u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4738u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4744u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4750u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C475Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4764u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4768u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4770u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4778u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4788u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C479Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4804u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C480Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C481Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4858u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C489Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4904u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4914u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4920u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4958u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4998u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4ADCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BCCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4FD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5020u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5030u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5068u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5070u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5080u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5094u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C50A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C50A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C50B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C50D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C50FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5108u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5110u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5114u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C511Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5124u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5130u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5138u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5148u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5158u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5164u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5178u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C517Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5184u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5198u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C520Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C521Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5224u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5268u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5274u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5300u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5308u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5330u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C533Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5368u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C539Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5400u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5408u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5410u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5414u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C541Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5424u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C542Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5450u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5460u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5470u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5478u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5488u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5508u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5514u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5524u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5550u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5574u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5584u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5624u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C562Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C565Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5664u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C566Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5678u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5688u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5700u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C570Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C571Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5724u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5738u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5744u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5760u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5768u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5778u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5808u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5814u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5820u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5828u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5830u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5838u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C585Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5864u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C586Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5874u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5880u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5888u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5898u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5904u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C590Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5910u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5918u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5924u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C592Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5930u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5960u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5978u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5998u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5BACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5BDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5BF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5DE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5EC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6060u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6090u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6120u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C617Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6214u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6244u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6278u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6290u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6298u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6308u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6310u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6318u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6328u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C634Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6360u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6370u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6384u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6390u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C639Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C63A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C63B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C63C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C63D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C63E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C63F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C63FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6404u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6410u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6448u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6468u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6480u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6488u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C648Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6500u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6504u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6530u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6540u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6554u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C655Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6568u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6570u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6588u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C658Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6610u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6640u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6678u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6698u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C670Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6714u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C671Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6728u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6730u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6734u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6760u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6770u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6784u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C678Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6800u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6814u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C683Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C684Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6858u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6868u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6870u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6890u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6908u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6910u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6918u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6920u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6928u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6930u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6938u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6940u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6948u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6950u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6958u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6960u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6968u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6970u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6980u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6988u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6994u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6ACCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DCCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6ECCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6ED4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FCCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7008u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7010u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7020u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C702Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7034u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7038u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7040u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7048u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7054u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C705Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7060u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7068u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7070u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C707Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7084u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7090u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7100u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7108u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7110u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7118u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7120u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C712Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7138u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7148u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7150u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7164u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C716Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7174u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C717Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7184u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C718Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7194u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7220u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7248u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C730Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7314u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C731Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7408u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7424u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7438u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7458u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7460u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7468u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7528u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7544u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C754Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C756Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C757Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7590u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7598u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7608u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7618u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7620u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7628u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7638u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7640u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7650u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C765Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7674u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C767Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7680u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7688u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C771Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7724u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C772Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7738u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7740u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7748u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7750u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7758u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7768u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7804u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7838u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C784Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7858u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7860u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7874u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C787Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7890u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7898u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C789Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7904u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7928u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7940u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7954u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7968u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7974u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C798Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7ED0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FF8u, &recomp_unit_0112, "recomp_unit_0112");
}
} // namespace psprecomp
