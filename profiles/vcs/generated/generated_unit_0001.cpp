#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0001[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 6, 7, 0, 0, 0, 0, 0, 0, 8,
    0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 12, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 26, 0, 0, 27, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0,
    0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159,
    0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 163, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0,
    179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 186,
    0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194,
    0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 0, 203,
    204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0,
    222, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0,
    0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 238, 0, 239, 0, 0, 240, 0, 0,
    0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0,
    0, 248, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 264, 0,
    265, 0, 0, 0, 0, 266, 0, 267, 0, 0, 268, 0, 269, 0, 0, 270, 0, 271, 0, 272, 0, 273, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276,
    0, 0, 277, 0, 278, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 284, 0, 0, 285, 0, 286, 0, 287, 0, 288,
    0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 296, 297, 0,
    0, 298, 299, 0, 0, 0, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 314, 0,
    0, 315, 0, 316, 0, 317, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0,
    0, 323, 0, 0, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 330, 0, 331, 0,
    0, 0, 0, 332, 0, 333, 0, 0, 334, 0, 335, 0, 336, 0, 0, 337, 0, 338, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0,
    0, 342, 0, 0, 0, 0, 343, 0, 344, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 350, 0, 0, 0, 351, 352, 0, 353, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357,
    0, 358, 0, 0, 0, 0, 359, 0, 360, 361, 0, 0, 362, 0, 363, 0, 364, 0, 365, 366, 0, 0, 367, 0, 368, 369, 0, 370, 0, 371, 0, 0,
    0, 372, 0, 373, 0, 0, 0, 374, 375, 0, 376, 0, 0, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0,
    382, 383, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 395, 0,
    396, 0, 397, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402,
    0, 403, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 412, 413, 0, 0,
    414, 0, 0, 415, 0, 416, 417, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 422, 0, 423, 0, 424, 0,
    0, 425, 0, 0, 426, 0, 427, 0, 0, 0, 0, 428, 0, 429, 0, 430, 0, 0, 0, 431, 0, 432, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0,
    0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 445, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 448, 0, 449, 0, 450, 0, 451, 0,
    452, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0,
    0, 458, 0, 459, 0, 0, 460, 0, 461, 462, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 467, 0, 468, 0, 0,
    0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0,
    0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 477, 0, 478, 0, 479, 0, 0,
    480, 0, 481, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 487, 0, 0, 0, 488, 0, 489,
    0, 0, 490, 0, 491, 0, 492, 0, 493, 494, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0,
    500, 501, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 504, 0, 505, 506, 0, 0, 507, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 513, 0,
    514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 518, 0, 0, 519, 520, 0, 0, 0, 0, 521,
    0, 522, 0, 523, 0, 524, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0,
    0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535,
    0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 540, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 544,
    0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0,
    550, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 555, 0, 556, 0, 557, 0, 558,
    0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 562, 0, 563, 0, 564, 0, 0, 0, 565, 0, 566, 0, 567, 568, 0, 0,
    0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 575,
    0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 582, 0, 0, 583,
    0, 0, 584, 0, 0, 585, 0, 0, 0, 0, 586, 587, 0, 0, 588, 0, 0, 0, 0, 589, 590, 0, 0, 591, 0, 0, 0, 0, 592, 593, 0, 0,
    594, 0, 0, 0, 0, 595, 596, 0, 0, 597, 0, 0, 0, 0, 598, 599, 0, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 0, 0,
    606, 0, 0, 607, 608, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 611, 0, 612, 0, 0, 0, 613, 0, 0, 614, 0, 615, 0, 0, 0, 0, 0,
    0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0,
    0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 628, 0, 629, 0,
    630, 0, 631, 632, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 636, 0, 0, 637, 0, 0, 638, 0,
    0, 639, 0, 0, 640, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 648, 0, 649, 0, 650, 0, 0, 651, 0, 0, 0, 652, 0, 653, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0,
    0, 0, 657, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661,
    0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0,
    0, 668, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0,
    672, 0, 0, 673, 0, 0, 0, 674, 675, 0, 0, 676, 0, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 0, 0, 681, 0, 682, 0,
    0, 0, 683, 0, 684, 0, 0, 685, 0, 686, 0, 0, 687, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 690, 691, 0, 0, 0, 0, 0, 0, 0,
    0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 0, 695, 0, 0, 696, 0, 697, 0, 0, 698, 0, 0, 699,
    0, 700, 0, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 704, 705, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 708, 709, 0, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 712, 0, 0, 713, 0, 714, 0, 715, 0, 716, 717, 0, 0, 0, 0,
    0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 721, 0, 722, 0, 723, 0, 0, 724, 0, 725, 0, 0, 726,
    0, 0, 727, 0, 0, 728, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 732, 0, 733, 0, 734, 0, 735, 0, 0,
    0, 736, 737, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 741, 0, 742, 0, 0, 0, 743,
    0, 0, 0, 744, 0, 745, 0, 0, 0, 746, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 750, 0,
    0, 751, 0, 0, 752, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 0, 757, 0, 758, 0, 0, 0, 759, 0, 0,
    0, 760, 0, 0, 761, 0, 762, 0, 0, 0, 0, 763, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 767, 0, 0,
    768, 0, 0, 0, 0, 769, 0, 0, 0, 0, 770, 0, 771, 0, 772, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 775, 0, 776,
    0, 777, 0, 778, 0, 0, 0, 779, 0, 780, 0, 0, 781, 0, 0, 782, 0, 0, 783, 0, 784, 0, 785, 0, 0, 0, 0, 786, 0, 0, 787, 0,
    788, 0, 0, 789, 0, 790, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 0, 795, 0, 0,
    796, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 799, 0, 0, 800, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0,
    0, 0, 0, 0, 802, 0, 0, 803, 0, 0, 804, 0, 0, 805, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 807, 0, 0, 0, 808, 0, 809, 0,
    0, 0, 810, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 813, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 815,
    0, 0, 816, 0, 0, 817, 0, 0, 818, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 822,
    0, 823, 0, 824, 0, 825, 826, 0, 0, 0, 0, 0, 827, 0, 828, 0, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 831, 0, 0, 832, 0, 833,
    0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 0, 837, 0, 0, 838, 0, 839, 0, 0, 0,
    0, 0, 0, 840, 0, 0, 0, 0, 841, 0, 0, 0, 842, 0, 843, 0, 844, 0, 0, 0, 845, 0, 0, 846, 0, 0, 847, 0, 0, 848, 0, 849,
    850, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 0, 852, 0, 853, 0, 854, 0, 0, 855, 856, 0, 0, 0, 857, 0, 0, 0, 0, 0, 0, 0,
    858, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 860, 0, 0, 861, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 864, 0,
    0, 865, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 868, 0, 0, 0, 869, 0, 870, 0, 871, 0, 0, 0, 872, 0,
    873, 0, 0, 0, 0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 875, 0, 0, 876, 0, 877, 0, 0, 0, 0, 0, 0, 878, 0, 0, 0, 879,
    0, 880, 0, 0, 881, 882, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 885, 0, 0, 0, 0, 0, 886, 0, 0, 887,
    0, 0, 0, 888, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 891, 0, 892, 0, 0, 0, 0, 893, 0, 0, 894, 0,
    0, 895, 0, 896, 0, 0, 0, 897, 0, 0, 0, 0, 0, 898, 0, 0, 899, 0, 0, 900, 0, 0, 0, 0, 901, 0, 0, 902, 0, 0, 903, 0,
    904, 0, 0, 0, 905, 0, 0, 0, 0, 0, 0, 0, 0, 906, 0, 0, 0, 907, 0, 908, 0, 0, 909, 0, 0, 0, 910, 0, 0, 0, 0, 0,
    911, 0, 912, 0, 0, 913, 0, 0, 914, 0, 915, 0, 0, 916, 0, 917, 0, 0, 918, 0, 919, 0, 920, 0, 0, 921, 0, 922, 0, 0, 0, 923,
    0, 0, 0, 924, 0, 0, 925, 0, 926, 0, 0, 0, 927, 0, 0, 0, 928, 0, 929, 0, 0, 0, 930, 0, 0, 0, 931, 0, 932, 0, 0, 0,
    933, 0, 0, 0, 934, 0, 935, 0, 0, 0, 936, 937, 0, 0, 0, 0, 0, 938, 0, 0, 0, 0, 0, 0, 0, 0, 939, 0, 0, 940, 0, 0,
    941, 0, 942, 0, 0, 943, 0, 944, 0, 945, 0, 0, 946, 0, 0, 947, 0, 0, 948, 0, 949, 0, 950, 0, 0, 0, 951, 0, 952, 0, 0, 953,
};
void recomp_unit_0001_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08808000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0001[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08808000;
    case 2u: goto L_08808010;
    case 3u: goto L_08808038;
    case 4u: goto L_08808044;
    case 5u: goto L_08808054;
    case 6u: goto L_0880805C;
    case 7u: goto L_08808060;
    case 8u: goto L_0880807C;
    case 9u: goto L_08808084;
    case 10u: goto L_088080A4;
    case 11u: goto L_088080B0;
    case 12u: goto L_088080C8;
    case 13u: goto L_088080CC;
    case 14u: goto L_088080E4;
    case 15u: goto L_08808104;
    case 16u: goto L_08808110;
    case 17u: goto L_0880812C;
    case 18u: goto L_08808140;
    case 19u: goto L_08808160;
    case 20u: goto L_0880816C;
    case 21u: goto L_08808188;
    case 22u: goto L_0880819C;
    case 23u: goto L_088081CC;
    case 24u: goto L_088081D8;
    case 25u: goto L_088081FC;
    case 26u: goto L_08808214;
    case 27u: goto L_08808220;
    case 28u: goto L_08808224;
    case 29u: goto L_08808250;
    case 30u: goto L_08808270;
    case 31u: goto L_088082A8;
    case 32u: goto L_088082B4;
    case 33u: goto L_088082DC;
    case 34u: goto L_088082E4;
    case 35u: goto L_088082F4;
    case 36u: goto L_08808300;
    case 37u: goto L_08808328;
    case 38u: goto L_08808340;
    case 39u: goto L_08808348;
    case 40u: goto L_0880837C;
    case 41u: goto L_088083A4;
    case 42u: goto L_088083C4;
    case 43u: goto L_088083D0;
    case 44u: goto L_088083EC;
    case 45u: goto L_08808400;
    case 46u: goto L_08808428;
    case 47u: goto L_08808434;
    case 48u: goto L_08808444;
    case 49u: goto L_08808464;
    case 50u: goto L_0880847C;
    case 51u: goto L_088084A4;
    case 52u: goto L_088084B0;
    case 53u: goto L_088084C0;
    case 54u: goto L_088084E0;
    case 55u: goto L_088084F8;
    case 56u: goto L_08808520;
    case 57u: goto L_0880852C;
    case 58u: goto L_0880853C;
    case 59u: goto L_0880855C;
    case 60u: goto L_08808574;
    case 61u: goto L_0880859C;
    case 62u: goto L_088085A8;
    case 63u: goto L_088085B8;
    case 64u: goto L_088085D8;
    case 65u: goto L_088085F0;
    case 66u: goto L_08808618;
    case 67u: goto L_08808624;
    case 68u: goto L_08808634;
    case 69u: goto L_08808654;
    case 70u: goto L_0880866C;
    case 71u: goto L_08808694;
    case 72u: goto L_088086A0;
    case 73u: goto L_088086B0;
    case 74u: goto L_088086D0;
    case 75u: goto L_088086E8;
    case 76u: goto L_08808710;
    case 77u: goto L_0880871C;
    case 78u: goto L_0880872C;
    case 79u: goto L_0880874C;
    case 80u: goto L_08808764;
    case 81u: goto L_0880878C;
    case 82u: goto L_08808798;
    case 83u: goto L_088087A8;
    case 84u: goto L_088087C8;
    case 85u: goto L_088087E0;
    case 86u: goto L_08808808;
    case 87u: goto L_08808814;
    case 88u: goto L_08808824;
    case 89u: goto L_08808844;
    case 90u: goto L_0880885C;
    case 91u: goto L_08808894;
    case 92u: goto L_088088A0;
    case 93u: goto L_088088C8;
    case 94u: goto L_088088D0;
    case 95u: goto L_088088E0;
    case 96u: goto L_088088EC;
    case 97u: goto L_08808914;
    case 98u: goto L_0880892C;
    case 99u: goto L_08808934;
    case 100u: goto L_08808968;
    case 101u: goto L_08808990;
    case 102u: goto L_088089C0;
    case 103u: goto L_088089CC;
    case 104u: goto L_088089E4;
    case 105u: goto L_08808A10;
    case 106u: goto L_08808A30;
    case 107u: goto L_08808A58;
    case 108u: goto L_08808A64;
    case 109u: goto L_08808A74;
    case 110u: goto L_08808A94;
    case 111u: goto L_08808AA0;
    case 112u: goto L_08808AB8;
    case 113u: goto L_08808AD8;
    case 114u: goto L_08808AE4;
    case 115u: goto L_08808B00;
    case 116u: goto L_08808B14;
    case 117u: goto L_08808B34;
    case 118u: goto L_08808B40;
    case 119u: goto L_08808B60;
    case 120u: goto L_08808B74;
    case 121u: goto L_08808B9C;
    case 122u: goto L_08808BA8;
    case 123u: goto L_08808BB8;
    case 124u: goto L_08808BD8;
    case 125u: goto L_08808BF0;
    case 126u: goto L_08808C18;
    case 127u: goto L_08808C24;
    case 128u: goto L_08808C34;
    case 129u: goto L_08808C54;
    case 130u: goto L_08808C6C;
    case 131u: goto L_08808C94;
    case 132u: goto L_08808CA0;
    case 133u: goto L_08808CB0;
    case 134u: goto L_08808CD0;
    case 135u: goto L_08808CE8;
    case 136u: goto L_08808D18;
    case 137u: goto L_08808D24;
    case 138u: goto L_08808D3C;
    case 139u: goto L_08808D68;
    case 140u: goto L_08808D88;
    case 141u: goto L_08808DB0;
    case 142u: goto L_08808DBC;
    case 143u: goto L_08808DF0;
    case 144u: goto L_08808E08;
    case 145u: goto L_08808E38;
    case 146u: goto L_08808E44;
    case 147u: goto L_08808E5C;
    case 148u: goto L_08808E88;
    case 149u: goto L_08808EA8;
    case 150u: goto L_08808EC8;
    case 151u: goto L_08808ED4;
    case 152u: goto L_08808EF0;
    case 153u: goto L_08808F04;
    case 154u: goto L_08808F2C;
    case 155u: goto L_08808F38;
    case 156u: goto L_08808F48;
    case 157u: goto L_08808F54;
    case 158u: goto L_08808F58;
    case 159u: goto L_08808F7C;
    case 160u: goto L_08808F84;
    case 161u: goto L_08808FA4;
    case 162u: goto L_08808FB0;
    case 163u: goto L_08808FC8;
    case 164u: goto L_08808FCC;
    case 165u: goto L_08808FE4;
    case 166u: goto L_08809004;
    case 167u: goto L_08809010;
    case 168u: goto L_08809024;
    case 169u: goto L_0880902C;
    case 170u: goto L_08809034;
    case 171u: goto L_08809048;
    case 172u: goto L_08809094;
    case 173u: goto L_088090A0;
    case 174u: goto L_088090B0;
    case 175u: goto L_088090C0;
    case 176u: goto L_088090D4;
    case 177u: goto L_088090E0;
    case 178u: goto L_088090F4;
    case 179u: goto L_08809100;
    case 180u: goto L_08809114;
    case 181u: goto L_08809144;
    case 182u: goto L_0880914C;
    case 183u: goto L_08809158;
    case 184u: goto L_08809160;
    case 185u: goto L_08809174;
    case 186u: goto L_0880917C;
    case 187u: goto L_08809184;
    case 188u: goto L_08809198;
    case 189u: goto L_088091A0;
    case 190u: goto L_088091A8;
    case 191u: goto L_088091B8;
    case 192u: goto L_088091EC;
    case 193u: goto L_088091F4;
    case 194u: goto L_088091FC;
    case 195u: goto L_08809210;
    case 196u: goto L_08809218;
    case 197u: goto L_0880922C;
    case 198u: goto L_08809234;
    case 199u: goto L_0880924C;
    case 200u: goto L_08809254;
    case 201u: goto L_08809260;
    case 202u: goto L_08809268;
    case 203u: goto L_0880927C;
    case 204u: goto L_08809280;
    case 205u: goto L_08809288;
    case 206u: goto L_088092B8;
    case 207u: goto L_088092CC;
    case 208u: goto L_088092D4;
    case 209u: goto L_088092E8;
    case 210u: goto L_088092F0;
    case 211u: goto L_08809300;
    case 212u: goto L_0880931C;
    case 213u: goto L_0880932C;
    case 214u: goto L_0880933C;
    case 215u: goto L_0880934C;
    case 216u: goto L_08809374;
    case 217u: goto L_08809384;
    case 218u: goto L_088093AC;
    case 219u: goto L_088093D0;
    case 220u: goto L_088093E4;
    case 221u: goto L_088093EC;
    case 222u: goto L_08809400;
    case 223u: goto L_08809408;
    case 224u: goto L_08809418;
    case 225u: goto L_08809424;
    case 226u: goto L_08809434;
    case 227u: goto L_08809444;
    case 228u: goto L_0880944C;
    case 229u: goto L_08809454;
    case 230u: goto L_08809460;
    case 231u: goto L_08809474;
    case 232u: goto L_08809490;
    case 233u: goto L_08809498;
    case 234u: goto L_088094A8;
    case 235u: goto L_088094B8;
    case 236u: goto L_088094C8;
    case 237u: goto L_088094D8;
    case 238u: goto L_088094E0;
    case 239u: goto L_088094E8;
    case 240u: goto L_088094F4;
    case 241u: goto L_08809508;
    case 242u: goto L_08809524;
    case 243u: goto L_08809534;
    case 244u: goto L_0880954C;
    case 245u: goto L_0880955C;
    case 246u: goto L_08809568;
    case 247u: goto L_08809574;
    case 248u: goto L_08809584;
    case 249u: goto L_08809588;
    case 250u: goto L_088095A8;
    case 251u: goto L_088095B0;
    case 252u: goto L_088095C4;
    case 253u: goto L_088095CC;
    case 254u: goto L_088095E0;
    case 255u: goto L_088095E8;
    case 256u: goto L_088095F8;
    case 257u: goto L_08809600;
    case 258u: goto L_0880962C;
    case 259u: goto L_08809634;
    case 260u: goto L_08809640;
    case 261u: goto L_08809648;
    case 262u: goto L_08809660;
    case 263u: goto L_08809668;
    case 264u: goto L_08809678;
    case 265u: goto L_08809680;
    case 266u: goto L_08809694;
    case 267u: goto L_0880969C;
    case 268u: goto L_088096A8;
    case 269u: goto L_088096B0;
    case 270u: goto L_088096BC;
    case 271u: goto L_088096C4;
    case 272u: goto L_088096CC;
    case 273u: goto L_088096D4;
    case 274u: goto L_088096D8;
    case 275u: goto L_088096EC;
    case 276u: goto L_088096FC;
    case 277u: goto L_08809708;
    case 278u: goto L_08809710;
    case 279u: goto L_08809720;
    case 280u: goto L_08809728;
    case 281u: goto L_0880973C;
    case 282u: goto L_08809744;
    case 283u: goto L_08809750;
    case 284u: goto L_08809758;
    case 285u: goto L_08809764;
    case 286u: goto L_0880976C;
    case 287u: goto L_08809774;
    case 288u: goto L_0880977C;
    case 289u: goto L_08809784;
    case 290u: goto L_0880978C;
    case 291u: goto L_088097A8;
    case 292u: goto L_088097BC;
    case 293u: goto L_088097D0;
    case 294u: goto L_088097E4;
    case 295u: goto L_088097EC;
    case 296u: goto L_088097F4;
    case 297u: goto L_088097F8;
    case 298u: goto L_08809804;
    case 299u: goto L_08809808;
    case 300u: goto L_0880981C;
    case 301u: goto L_08809824;
    case 302u: goto L_0880982C;
    case 303u: goto L_08809834;
    case 304u: goto L_0880983C;
    case 305u: goto L_08809844;
    case 306u: goto L_0880984C;
    case 307u: goto L_08809870;
    case 308u: goto L_0880988C;
    case 309u: goto L_088098BC;
    case 310u: goto L_088098C4;
    case 311u: goto L_088098D4;
    case 312u: goto L_088098DC;
    case 313u: goto L_088098F0;
    case 314u: goto L_088098F8;
    case 315u: goto L_08809904;
    case 316u: goto L_0880990C;
    case 317u: goto L_08809914;
    case 318u: goto L_0880991C;
    case 319u: goto L_08809928;
    case 320u: goto L_08809940;
    case 321u: goto L_08809958;
    case 322u: goto L_0880996C;
    case 323u: goto L_08809984;
    case 324u: goto L_08809994;
    case 325u: goto L_088099A0;
    case 326u: goto L_088099A8;
    case 327u: goto L_088099B0;
    case 328u: goto L_088099D8;
    case 329u: goto L_088099E0;
    case 330u: goto L_088099F0;
    case 331u: goto L_088099F8;
    case 332u: goto L_08809A0C;
    case 333u: goto L_08809A14;
    case 334u: goto L_08809A20;
    case 335u: goto L_08809A28;
    case 336u: goto L_08809A30;
    case 337u: goto L_08809A3C;
    case 338u: goto L_08809A44;
    case 339u: goto L_08809A4C;
    case 340u: goto L_08809A64;
    case 341u: goto L_08809A78;
    case 342u: goto L_08809A84;
    case 343u: goto L_08809A98;
    case 344u: goto L_08809AA0;
    case 345u: goto L_08809AAC;
    case 346u: goto L_08809ABC;
    case 347u: goto L_08809AD0;
    case 348u: goto L_08809AD8;
    case 349u: goto L_08809AF0;
    case 350u: goto L_08809B04;
    case 351u: goto L_08809B14;
    case 352u: goto L_08809B18;
    case 353u: goto L_08809B20;
    case 354u: goto L_08809B24;
    case 355u: goto L_08809B34;
    case 356u: goto L_08809B44;
    case 357u: goto L_08809B7C;
    case 358u: goto L_08809B84;
    case 359u: goto L_08809B98;
    case 360u: goto L_08809BA0;
    case 361u: goto L_08809BA4;
    case 362u: goto L_08809BB0;
    case 363u: goto L_08809BB8;
    case 364u: goto L_08809BC0;
    case 365u: goto L_08809BC8;
    case 366u: goto L_08809BCC;
    case 367u: goto L_08809BD8;
    case 368u: goto L_08809BE0;
    case 369u: goto L_08809BE4;
    case 370u: goto L_08809BEC;
    case 371u: goto L_08809BF4;
    case 372u: goto L_08809C04;
    case 373u: goto L_08809C0C;
    case 374u: goto L_08809C1C;
    case 375u: goto L_08809C20;
    case 376u: goto L_08809C28;
    case 377u: goto L_08809C38;
    case 378u: goto L_08809C40;
    case 379u: goto L_08809C48;
    case 380u: goto L_08809C68;
    case 381u: goto L_08809C74;
    case 382u: goto L_08809C80;
    case 383u: goto L_08809C84;
    case 384u: goto L_08809C94;
    case 385u: goto L_08809C9C;
    case 386u: goto L_08809CC4;
    case 387u: goto L_08809CCC;
    case 388u: goto L_08809CD4;
    case 389u: goto L_08809CF0;
    case 390u: goto L_08809D24;
    case 391u: goto L_08809D28;
    case 392u: goto L_08809D4C;
    case 393u: goto L_08809D58;
    case 394u: goto L_08809D64;
    case 395u: goto L_08809D78;
    case 396u: goto L_08809D80;
    case 397u: goto L_08809D88;
    case 398u: goto L_08809D8C;
    case 399u: goto L_08809D94;
    case 400u: goto L_08809DBC;
    case 401u: goto L_08809DEC;
    case 402u: goto L_08809DFC;
    case 403u: goto L_08809E04;
    case 404u: goto L_08809E0C;
    case 405u: goto L_08809E18;
    case 406u: goto L_08809E2C;
    case 407u: goto L_08809E34;
    case 408u: goto L_08809E44;
    case 409u: goto L_08809E54;
    case 410u: goto L_08809E5C;
    case 411u: goto L_08809E64;
    case 412u: goto L_08809E70;
    case 413u: goto L_08809E74;
    case 414u: goto L_08809E80;
    case 415u: goto L_08809E8C;
    case 416u: goto L_08809E94;
    case 417u: goto L_08809E98;
    case 418u: goto L_08809EA0;
    case 419u: goto L_08809EBC;
    case 420u: goto L_08809ED0;
    case 421u: goto L_08809EE0;
    case 422u: goto L_08809EE8;
    case 423u: goto L_08809EF0;
    case 424u: goto L_08809EF8;
    case 425u: goto L_08809F04;
    case 426u: goto L_08809F10;
    case 427u: goto L_08809F18;
    case 428u: goto L_08809F2C;
    case 429u: goto L_08809F34;
    case 430u: goto L_08809F3C;
    case 431u: goto L_08809F4C;
    case 432u: goto L_08809F54;
    case 433u: goto L_08809F5C;
    case 434u: goto L_08809F6C;
    case 435u: goto L_08809F84;
    case 436u: goto L_08809F8C;
    case 437u: goto L_08809FB4;
    case 438u: goto L_08809FBC;
    case 439u: goto L_08809FD0;
    case 440u: goto L_08809FD8;
    case 441u: goto L_0880A008;
    case 442u: goto L_0880A010;
    case 443u: goto L_0880A020;
    case 444u: goto L_0880A030;
    case 445u: goto L_0880A034;
    case 446u: goto L_0880A040;
    case 447u: goto L_0880A050;
    case 448u: goto L_0880A060;
    case 449u: goto L_0880A068;
    case 450u: goto L_0880A070;
    case 451u: goto L_0880A078;
    case 452u: goto L_0880A080;
    case 453u: goto L_0880A090;
    case 454u: goto L_0880A098;
    case 455u: goto L_0880A0C4;
    case 456u: goto L_0880A0CC;
    case 457u: goto L_0880A0E4;
    case 458u: goto L_0880A104;
    case 459u: goto L_0880A10C;
    case 460u: goto L_0880A118;
    case 461u: goto L_0880A120;
    case 462u: goto L_0880A124;
    case 463u: goto L_0880A12C;
    case 464u: goto L_0880A138;
    case 465u: goto L_0880A154;
    case 466u: goto L_0880A164;
    case 467u: goto L_0880A16C;
    case 468u: goto L_0880A174;
    case 469u: goto L_0880A198;
    case 470u: goto L_0880A1A8;
    case 471u: goto L_0880A1C0;
    case 472u: goto L_0880A1C8;
    case 473u: goto L_0880A1F0;
    case 474u: goto L_0880A214;
    case 475u: goto L_0880A244;
    case 476u: goto L_0880A25C;
    case 477u: goto L_0880A264;
    case 478u: goto L_0880A26C;
    case 479u: goto L_0880A274;
    case 480u: goto L_0880A280;
    case 481u: goto L_0880A288;
    case 482u: goto L_0880A29C;
    case 483u: goto L_0880A2A8;
    case 484u: goto L_0880A2BC;
    case 485u: goto L_0880A2CC;
    case 486u: goto L_0880A2DC;
    case 487u: goto L_0880A2E4;
    case 488u: goto L_0880A2F4;
    case 489u: goto L_0880A2FC;
    case 490u: goto L_0880A308;
    case 491u: goto L_0880A310;
    case 492u: goto L_0880A318;
    case 493u: goto L_0880A320;
    case 494u: goto L_0880A324;
    case 495u: goto L_0880A330;
    case 496u: goto L_0880A344;
    case 497u: goto L_0880A350;
    case 498u: goto L_0880A368;
    case 499u: goto L_0880A374;
    case 500u: goto L_0880A380;
    case 501u: goto L_0880A384;
    case 502u: goto L_0880A390;
    case 503u: goto L_0880A3A8;
    case 504u: goto L_0880A3B0;
    case 505u: goto L_0880A3B8;
    case 506u: goto L_0880A3BC;
    case 507u: goto L_0880A3C8;
    case 508u: goto L_0880A3D4;
    case 509u: goto L_0880A3DC;
    case 510u: goto L_0880A3E4;
    case 511u: goto L_0880A3EC;
    case 512u: goto L_0880A3F4;
    case 513u: goto L_0880A3F8;
    case 514u: goto L_0880A400;
    case 515u: goto L_0880A41C;
    case 516u: goto L_0880A438;
    case 517u: goto L_0880A454;
    case 518u: goto L_0880A458;
    case 519u: goto L_0880A464;
    case 520u: goto L_0880A468;
    case 521u: goto L_0880A47C;
    case 522u: goto L_0880A484;
    case 523u: goto L_0880A48C;
    case 524u: goto L_0880A494;
    case 525u: goto L_0880A49C;
    case 526u: goto L_0880A4B8;
    case 527u: goto L_0880A4E8;
    case 528u: goto L_0880A4F8;
    case 529u: goto L_0880A508;
    case 530u: goto L_0880A51C;
    case 531u: goto L_0880A530;
    case 532u: goto L_0880A53C;
    case 533u: goto L_0880A548;
    case 534u: goto L_0880A570;
    case 535u: goto L_0880A57C;
    case 536u: goto L_0880A584;
    case 537u: goto L_0880A594;
    case 538u: goto L_0880A5AC;
    case 539u: goto L_0880A5B4;
    case 540u: goto L_0880A5C4;
    case 541u: goto L_0880A5C8;
    case 542u: goto L_0880A5E0;
    case 543u: goto L_0880A5F4;
    case 544u: goto L_0880A5FC;
    case 545u: goto L_0880A610;
    case 546u: goto L_0880A624;
    case 547u: goto L_0880A640;
    case 548u: goto L_0880A648;
    case 549u: goto L_0880A674;
    case 550u: goto L_0880A680;
    case 551u: goto L_0880A69C;
    case 552u: goto L_0880A6A4;
    case 553u: goto L_0880A6D0;
    case 554u: goto L_0880A6DC;
    case 555u: goto L_0880A6E4;
    case 556u: goto L_0880A6EC;
    case 557u: goto L_0880A6F4;
    case 558u: goto L_0880A6FC;
    case 559u: goto L_0880A704;
    case 560u: goto L_0880A728;
    case 561u: goto L_0880A738;
    case 562u: goto L_0880A740;
    case 563u: goto L_0880A748;
    case 564u: goto L_0880A750;
    case 565u: goto L_0880A760;
    case 566u: goto L_0880A768;
    case 567u: goto L_0880A770;
    case 568u: goto L_0880A774;
    case 569u: goto L_0880A788;
    case 570u: goto L_0880A7C4;
    case 571u: goto L_0880A8AC;
    case 572u: goto L_0880A8C8;
    case 573u: goto L_0880A8D0;
    case 574u: goto L_0880A8F4;
    case 575u: goto L_0880A8FC;
    case 576u: goto L_0880A910;
    case 577u: goto L_0880A920;
    case 578u: goto L_0880A930;
    case 579u: goto L_0880A93C;
    case 580u: goto L_0880A954;
    case 581u: goto L_0880A968;
    case 582u: goto L_0880A970;
    case 583u: goto L_0880A97C;
    case 584u: goto L_0880A988;
    case 585u: goto L_0880A994;
    case 586u: goto L_0880A9A8;
    case 587u: goto L_0880A9AC;
    case 588u: goto L_0880A9B8;
    case 589u: goto L_0880A9CC;
    case 590u: goto L_0880A9D0;
    case 591u: goto L_0880A9DC;
    case 592u: goto L_0880A9F0;
    case 593u: goto L_0880A9F4;
    case 594u: goto L_0880AA00;
    case 595u: goto L_0880AA14;
    case 596u: goto L_0880AA18;
    case 597u: goto L_0880AA24;
    case 598u: goto L_0880AA38;
    case 599u: goto L_0880AA3C;
    case 600u: goto L_0880AA48;
    case 601u: goto L_0880AA50;
    case 602u: goto L_0880AA58;
    case 603u: goto L_0880AA60;
    case 604u: goto L_0880AA68;
    case 605u: goto L_0880AA70;
    case 606u: goto L_0880AA80;
    case 607u: goto L_0880AA8C;
    case 608u: goto L_0880AA90;
    case 609u: goto L_0880AAA4;
    case 610u: goto L_0880AAB4;
    case 611u: goto L_0880AABC;
    case 612u: goto L_0880AAC4;
    case 613u: goto L_0880AAD4;
    case 614u: goto L_0880AAE0;
    case 615u: goto L_0880AAE8;
    case 616u: goto L_0880AB0C;
    case 617u: goto L_0880AB34;
    case 618u: goto L_0880AB40;
    case 619u: goto L_0880AB48;
    case 620u: goto L_0880AB50;
    case 621u: goto L_0880AB70;
    case 622u: goto L_0880AB78;
    case 623u: goto L_0880AB84;
    case 624u: goto L_0880ABAC;
    case 625u: goto L_0880ABCC;
    case 626u: goto L_0880ABDC;
    case 627u: goto L_0880ABE8;
    case 628u: goto L_0880ABF0;
    case 629u: goto L_0880ABF8;
    case 630u: goto L_0880AC00;
    case 631u: goto L_0880AC08;
    case 632u: goto L_0880AC0C;
    case 633u: goto L_0880AC1C;
    case 634u: goto L_0880AC30;
    case 635u: goto L_0880AC54;
    case 636u: goto L_0880AC60;
    case 637u: goto L_0880AC6C;
    case 638u: goto L_0880AC78;
    case 639u: goto L_0880AC84;
    case 640u: goto L_0880AC90;
    case 641u: goto L_0880AC9C;
    case 642u: goto L_0880ACA8;
    case 643u: goto L_0880ACC4;
    case 644u: goto L_0880AD04;
    case 645u: goto L_0880AD20;
    case 646u: goto L_0880AD34;
    case 647u: goto L_0880AD60;
    case 648u: goto L_0880AD8C;
    case 649u: goto L_0880AD94;
    case 650u: goto L_0880AD9C;
    case 651u: goto L_0880ADA8;
    case 652u: goto L_0880ADB8;
    case 653u: goto L_0880ADC0;
    case 654u: goto L_0880ADC8;
    case 655u: goto L_0880ADD0;
    case 656u: goto L_0880ADF8;
    case 657u: goto L_0880AE08;
    case 658u: goto L_0880AE20;
    case 659u: goto L_0880AE3C;
    case 660u: goto L_0880AE40;
    case 661u: goto L_0880AE7C;
    case 662u: goto L_0880AE88;
    case 663u: goto L_0880AE90;
    case 664u: goto L_0880AEAC;
    case 665u: goto L_0880AEB4;
    case 666u: goto L_0880AEC0;
    case 667u: goto L_0880AEF4;
    case 668u: goto L_0880AF04;
    case 669u: goto L_0880AF0C;
    case 670u: goto L_0880AF48;
    case 671u: goto L_0880AF70;
    case 672u: goto L_0880AF80;
    case 673u: goto L_0880AF8C;
    case 674u: goto L_0880AF9C;
    case 675u: goto L_0880AFA0;
    case 676u: goto L_0880AFAC;
    case 677u: goto L_0880AFB8;
    case 678u: goto L_0880AFC8;
    case 679u: goto L_0880AFD4;
    case 680u: goto L_0880AFE0;
    case 681u: goto L_0880AFF0;
    case 682u: goto L_0880AFF8;
    case 683u: goto L_0880B008;
    case 684u: goto L_0880B010;
    case 685u: goto L_0880B01C;
    case 686u: goto L_0880B024;
    case 687u: goto L_0880B030;
    case 688u: goto L_0880B03C;
    case 689u: goto L_0880B04C;
    case 690u: goto L_0880B05C;
    case 691u: goto L_0880B060;
    case 692u: goto L_0880B084;
    case 693u: goto L_0880B0B0;
    case 694u: goto L_0880B0C4;
    case 695u: goto L_0880B0D0;
    case 696u: goto L_0880B0DC;
    case 697u: goto L_0880B0E4;
    case 698u: goto L_0880B0F0;
    case 699u: goto L_0880B0FC;
    case 700u: goto L_0880B104;
    case 701u: goto L_0880B114;
    case 702u: goto L_0880B120;
    case 703u: goto L_0880B12C;
    case 704u: goto L_0880B144;
    case 705u: goto L_0880B148;
    case 706u: goto L_0880B158;
    case 707u: goto L_0880B164;
    case 708u: goto L_0880B18C;
    case 709u: goto L_0880B190;
    case 710u: goto L_0880B1B0;
    case 711u: goto L_0880B1B8;
    case 712u: goto L_0880B1C4;
    case 713u: goto L_0880B1D0;
    case 714u: goto L_0880B1D8;
    case 715u: goto L_0880B1E0;
    case 716u: goto L_0880B1E8;
    case 717u: goto L_0880B1EC;
    case 718u: goto L_0880B208;
    case 719u: goto L_0880B22C;
    case 720u: goto L_0880B240;
    case 721u: goto L_0880B24C;
    case 722u: goto L_0880B254;
    case 723u: goto L_0880B25C;
    case 724u: goto L_0880B268;
    case 725u: goto L_0880B270;
    case 726u: goto L_0880B27C;
    case 727u: goto L_0880B288;
    case 728u: goto L_0880B294;
    case 729u: goto L_0880B29C;
    case 730u: goto L_0880B2B0;
    case 731u: goto L_0880B2D0;
    case 732u: goto L_0880B2DC;
    case 733u: goto L_0880B2E4;
    case 734u: goto L_0880B2EC;
    case 735u: goto L_0880B2F4;
    case 736u: goto L_0880B304;
    case 737u: goto L_0880B308;
    case 738u: goto L_0880B31C;
    case 739u: goto L_0880B340;
    case 740u: goto L_0880B35C;
    case 741u: goto L_0880B364;
    case 742u: goto L_0880B36C;
    case 743u: goto L_0880B37C;
    case 744u: goto L_0880B38C;
    case 745u: goto L_0880B394;
    case 746u: goto L_0880B3A4;
    case 747u: goto L_0880B3B0;
    case 748u: goto L_0880B3BC;
    case 749u: goto L_0880B3DC;
    case 750u: goto L_0880B3F8;
    case 751u: goto L_0880B404;
    case 752u: goto L_0880B410;
    case 753u: goto L_0880B418;
    case 754u: goto L_0880B42C;
    case 755u: goto L_0880B43C;
    case 756u: goto L_0880B44C;
    case 757u: goto L_0880B45C;
    case 758u: goto L_0880B464;
    case 759u: goto L_0880B474;
    case 760u: goto L_0880B484;
    case 761u: goto L_0880B490;
    case 762u: goto L_0880B498;
    case 763u: goto L_0880B4AC;
    case 764u: goto L_0880B4C0;
    case 765u: goto L_0880B4D8;
    case 766u: goto L_0880B4E8;
    case 767u: goto L_0880B4F4;
    case 768u: goto L_0880B500;
    case 769u: goto L_0880B514;
    case 770u: goto L_0880B528;
    case 771u: goto L_0880B530;
    case 772u: goto L_0880B538;
    case 773u: goto L_0880B544;
    case 774u: goto L_0880B558;
    case 775u: goto L_0880B574;
    case 776u: goto L_0880B57C;
    case 777u: goto L_0880B584;
    case 778u: goto L_0880B58C;
    case 779u: goto L_0880B59C;
    case 780u: goto L_0880B5A4;
    case 781u: goto L_0880B5B0;
    case 782u: goto L_0880B5BC;
    case 783u: goto L_0880B5C8;
    case 784u: goto L_0880B5D0;
    case 785u: goto L_0880B5D8;
    case 786u: goto L_0880B5EC;
    case 787u: goto L_0880B5F8;
    case 788u: goto L_0880B600;
    case 789u: goto L_0880B60C;
    case 790u: goto L_0880B614;
    case 791u: goto L_0880B624;
    case 792u: goto L_0880B638;
    case 793u: goto L_0880B658;
    case 794u: goto L_0880B664;
    case 795u: goto L_0880B674;
    case 796u: goto L_0880B680;
    case 797u: goto L_0880B698;
    case 798u: goto L_0880B6BC;
    case 799u: goto L_0880B6C8;
    case 800u: goto L_0880B6D4;
    case 801u: goto L_0880B6EC;
    case 802u: goto L_0880B710;
    case 803u: goto L_0880B71C;
    case 804u: goto L_0880B728;
    case 805u: goto L_0880B734;
    case 806u: goto L_0880B74C;
    case 807u: goto L_0880B760;
    case 808u: goto L_0880B770;
    case 809u: goto L_0880B778;
    case 810u: goto L_0880B788;
    case 811u: goto L_0880B79C;
    case 812u: goto L_0880B7B8;
    case 813u: goto L_0880B7C8;
    case 814u: goto L_0880B7DC;
    case 815u: goto L_0880B7FC;
    case 816u: goto L_0880B808;
    case 817u: goto L_0880B814;
    case 818u: goto L_0880B820;
    case 819u: goto L_0880B838;
    case 820u: goto L_0880B860;
    case 821u: goto L_0880B870;
    case 822u: goto L_0880B87C;
    case 823u: goto L_0880B884;
    case 824u: goto L_0880B88C;
    case 825u: goto L_0880B894;
    case 826u: goto L_0880B898;
    case 827u: goto L_0880B8B0;
    case 828u: goto L_0880B8B8;
    case 829u: goto L_0880B8CC;
    case 830u: goto L_0880B8DC;
    case 831u: goto L_0880B8E8;
    case 832u: goto L_0880B8F4;
    case 833u: goto L_0880B8FC;
    case 834u: goto L_0880B910;
    case 835u: goto L_0880B934;
    case 836u: goto L_0880B948;
    case 837u: goto L_0880B95C;
    case 838u: goto L_0880B968;
    case 839u: goto L_0880B970;
    case 840u: goto L_0880B98C;
    case 841u: goto L_0880B9A0;
    case 842u: goto L_0880B9B0;
    case 843u: goto L_0880B9B8;
    case 844u: goto L_0880B9C0;
    case 845u: goto L_0880B9D0;
    case 846u: goto L_0880B9DC;
    case 847u: goto L_0880B9E8;
    case 848u: goto L_0880B9F4;
    case 849u: goto L_0880B9FC;
    case 850u: goto L_0880BA00;
    case 851u: goto L_0880BA1C;
    case 852u: goto L_0880BA30;
    case 853u: goto L_0880BA38;
    case 854u: goto L_0880BA40;
    case 855u: goto L_0880BA4C;
    case 856u: goto L_0880BA50;
    case 857u: goto L_0880BA60;
    case 858u: goto L_0880BA80;
    case 859u: goto L_0880BA98;
    case 860u: goto L_0880BAAC;
    case 861u: goto L_0880BAB8;
    case 862u: goto L_0880BACC;
    case 863u: goto L_0880BAEC;
    case 864u: goto L_0880BAF8;
    case 865u: goto L_0880BB04;
    case 866u: goto L_0880BB14;
    case 867u: goto L_0880BB3C;
    case 868u: goto L_0880BB48;
    case 869u: goto L_0880BB58;
    case 870u: goto L_0880BB60;
    case 871u: goto L_0880BB68;
    case 872u: goto L_0880BB78;
    case 873u: goto L_0880BB80;
    case 874u: goto L_0880BB9C;
    case 875u: goto L_0880BBBC;
    case 876u: goto L_0880BBC8;
    case 877u: goto L_0880BBD0;
    case 878u: goto L_0880BBEC;
    case 879u: goto L_0880BBFC;
    case 880u: goto L_0880BC04;
    case 881u: goto L_0880BC10;
    case 882u: goto L_0880BC14;
    case 883u: goto L_0880BC28;
    case 884u: goto L_0880BC4C;
    case 885u: goto L_0880BC58;
    case 886u: goto L_0880BC70;
    case 887u: goto L_0880BC7C;
    case 888u: goto L_0880BC8C;
    case 889u: goto L_0880BC9C;
    case 890u: goto L_0880BCB8;
    case 891u: goto L_0880BCD0;
    case 892u: goto L_0880BCD8;
    case 893u: goto L_0880BCEC;
    case 894u: goto L_0880BCF8;
    case 895u: goto L_0880BD04;
    case 896u: goto L_0880BD0C;
    case 897u: goto L_0880BD1C;
    case 898u: goto L_0880BD34;
    case 899u: goto L_0880BD40;
    case 900u: goto L_0880BD4C;
    case 901u: goto L_0880BD60;
    case 902u: goto L_0880BD6C;
    case 903u: goto L_0880BD78;
    case 904u: goto L_0880BD80;
    case 905u: goto L_0880BD90;
    case 906u: goto L_0880BDB4;
    case 907u: goto L_0880BDC4;
    case 908u: goto L_0880BDCC;
    case 909u: goto L_0880BDD8;
    case 910u: goto L_0880BDE8;
    case 911u: goto L_0880BE00;
    case 912u: goto L_0880BE08;
    case 913u: goto L_0880BE14;
    case 914u: goto L_0880BE20;
    case 915u: goto L_0880BE28;
    case 916u: goto L_0880BE34;
    case 917u: goto L_0880BE3C;
    case 918u: goto L_0880BE48;
    case 919u: goto L_0880BE50;
    case 920u: goto L_0880BE58;
    case 921u: goto L_0880BE64;
    case 922u: goto L_0880BE6C;
    case 923u: goto L_0880BE7C;
    case 924u: goto L_0880BE8C;
    case 925u: goto L_0880BE98;
    case 926u: goto L_0880BEA0;
    case 927u: goto L_0880BEB0;
    case 928u: goto L_0880BEC0;
    case 929u: goto L_0880BEC8;
    case 930u: goto L_0880BED8;
    case 931u: goto L_0880BEE8;
    case 932u: goto L_0880BEF0;
    case 933u: goto L_0880BF00;
    case 934u: goto L_0880BF10;
    case 935u: goto L_0880BF18;
    case 936u: goto L_0880BF28;
    case 937u: goto L_0880BF2C;
    case 938u: goto L_0880BF44;
    case 939u: goto L_0880BF68;
    case 940u: goto L_0880BF74;
    case 941u: goto L_0880BF80;
    case 942u: goto L_0880BF88;
    case 943u: goto L_0880BF94;
    case 944u: goto L_0880BF9C;
    case 945u: goto L_0880BFA4;
    case 946u: goto L_0880BFB0;
    case 947u: goto L_0880BFBC;
    case 948u: goto L_0880BFC8;
    case 949u: goto L_0880BFD0;
    case 950u: goto L_0880BFD8;
    case 951u: goto L_0880BFE8;
    case 952u: goto L_0880BFF0;
    case 953u: goto L_0880BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08808000:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808010:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808038u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808038u) goto L_08808038;
    return;
L_08808038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808044u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808044u) goto L_08808044;
    return;
L_08808044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880805C;
      }
      goto L_08808054;
    }
L_08808054:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08808060;
      }
      goto L_0880805C;
    }
L_0880805C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08808060;
L_08808060:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08808084;
      }
      goto L_0880807C;
    }
L_0880807C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088080CC;
      }
      goto L_08808084;
    }
L_08808084:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088080B0;
      }
      goto L_088080A4;
    }
L_088080A4:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088080CC;
      }
      goto L_088080B0;
    }
L_088080B0:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088080CC;
      }
      goto L_088080C8;
    }
L_088080C8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088080CC;
L_088080CC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088080E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808104u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808104u) goto L_08808104;
    return;
L_08808104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808110u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808110u) goto L_08808110;
    return;
L_08808110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0880812Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x0880812Cu) goto L_0880812C;
    return;
L_0880812C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808160u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808160u) goto L_08808160;
    return;
L_08808160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x0880816Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x0880816Cu) goto L_0880816C;
    return;
L_0880816C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08808188u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08808188u) goto L_08808188;
    return;
L_08808188:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880819C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088081CCu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088081CCu) goto L_088081CC;
    return;
L_088081CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x088081D8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x088081D8u) goto L_088081D8;
    return;
L_088081D8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08808214;
      }
      goto L_088081FC;
    }
L_088081FC:
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08808224;
      }
      goto L_08808214;
    }
L_08808214:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08808220u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08808220u) goto L_08808220;
    return;
L_08808220:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08808224;
L_08808224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08808250u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem) && ctx.pc == 0x08808250u) goto L_08808250;
    return;
L_08808250:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x088082A8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088082A8u) goto L_088082A8;
    return;
L_088082A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x088082B4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x088082B4u) goto L_088082B4;
    return;
L_088082B4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088082E4;
      }
      goto L_088082DC;
    }
L_088082DC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_088082E4;
L_088082E4:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08808300;
    }
    goto L_088082F4;
L_088082F4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08808300;
L_08808300:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[22] = ctx.fpr[13] + ctx.fpr[24];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08808328u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08808328u) goto L_08808328;
    return;
L_08808328:
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08808348;
      }
      goto L_08808340;
    }
L_08808340:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08808348;
      }
      goto L_08808348;
    }
L_08808348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0880837Cu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 736u, 0x08ACE418u>(ctx, &aot_mem) && ctx.pc == 0x0880837Cu) goto L_0880837C;
    return;
L_0880837C:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088083A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088083C4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088083C4u) goto L_088083C4;
    return;
L_088083C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x088083D0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x088083D0u) goto L_088083D0;
    return;
L_088083D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088083ECu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x088083ECu) goto L_088083EC;
    return;
L_088083EC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808400:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808428u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808428u) goto L_08808428;
    return;
L_08808428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808434u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808434u) goto L_08808434;
    return;
L_08808434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08808444u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808444u) goto L_08808444;
    return;
L_08808444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08808464u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08808464u) goto L_08808464;
    return;
L_08808464:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880847C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088084A4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088084A4u) goto L_088084A4;
    return;
L_088084A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x088084B0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x088084B0u) goto L_088084B0;
    return;
L_088084B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088084C0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x088084C0u) goto L_088084C0;
    return;
L_088084C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x088084E0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x088084E0u) goto L_088084E0;
    return;
L_088084E0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088084F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808520u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808520u) goto L_08808520;
    return;
L_08808520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x0880852Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x0880852Cu) goto L_0880852C;
    return;
L_0880852C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0880853Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x0880853Cu) goto L_0880853C;
    return;
L_0880853C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x0880855Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x0880855Cu) goto L_0880855C;
    return;
L_0880855C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808574:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880859Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0880859Cu) goto L_0880859C;
    return;
L_0880859C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x088085A8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x088085A8u) goto L_088085A8;
    return;
L_088085A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088085B8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x088085B8u) goto L_088085B8;
    return;
L_088085B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[31] = (0x088085D8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x088085D8u) goto L_088085D8;
    return;
L_088085D8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088085F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808618u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808618u) goto L_08808618;
    return;
L_08808618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808624u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808624u) goto L_08808624;
    return;
L_08808624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08808634u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08808634u) goto L_08808634;
    return;
L_08808634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08808654u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08808654u) goto L_08808654;
    return;
L_08808654:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880866C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808694u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808694u) goto L_08808694;
    return;
L_08808694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x088086A0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x088086A0u) goto L_088086A0;
    return;
L_088086A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088086B0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x088086B0u) goto L_088086B0;
    return;
L_088086B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x088086D0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x088086D0u) goto L_088086D0;
    return;
L_088086D0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088086E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808710u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808710u) goto L_08808710;
    return;
L_08808710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x0880871Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x0880871Cu) goto L_0880871C;
    return;
L_0880871C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0880872Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x0880872Cu) goto L_0880872C;
    return;
L_0880872C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x0880874Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x0880874Cu) goto L_0880874C;
    return;
L_0880874C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808764:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880878Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0880878Cu) goto L_0880878C;
    return;
L_0880878C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808798u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808798u) goto L_08808798;
    return;
L_08808798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088087A8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem) && ctx.pc == 0x088087A8u) goto L_088087A8;
    return;
L_088087A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[31] = (0x088087C8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x088087C8u) goto L_088087C8;
    return;
L_088087C8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088087E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808808u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808808u) goto L_08808808;
    return;
L_08808808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808814u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808814u) goto L_08808814;
    return;
L_08808814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08808824u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08808824u) goto L_08808824;
    return;
L_08808824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x08808844u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08808844u) goto L_08808844;
    return;
L_08808844:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880885C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808894u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808894u) goto L_08808894;
    return;
L_08808894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x088088A0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x088088A0u) goto L_088088A0;
    return;
L_088088A0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088088D0;
      }
      goto L_088088C8;
    }
L_088088C8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_088088D0;
L_088088D0:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088088EC;
    }
    goto L_088088E0;
L_088088E0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088088EC;
L_088088EC:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[22] = ctx.fpr[13] + ctx.fpr[24];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08808914u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08808914u) goto L_08808914;
    return;
L_08808914:
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08808934;
      }
      goto L_0880892C;
    }
L_0880892C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08808934;
      }
      goto L_08808934;
    }
L_08808934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[31] = (0x08808968u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 736u, 0x08ACE418u>(ctx, &aot_mem) && ctx.pc == 0x08808968u) goto L_08808968;
    return;
L_08808968:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808990:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088089C0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088089C0u) goto L_088089C0;
    return;
L_088089C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x088089CCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x088089CCu) goto L_088089CC;
    return;
L_088089CC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088089E4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x088089E4u) goto L_088089E4;
    return;
L_088089E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[31] = (0x08808A10u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem) && ctx.pc == 0x08808A10u) goto L_08808A10;
    return;
L_08808A10:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808A30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808A58u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808A58u) goto L_08808A58;
    return;
L_08808A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808A64u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808A64u) goto L_08808A64;
    return;
L_08808A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08808A74u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808A74u) goto L_08808A74;
    return;
L_08808A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[31] = (0x08808A94u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08808A94u) goto L_08808A94;
    return;
L_08808A94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08808AA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 391u, 0x08AC5410u>(ctx, &aot_mem) && ctx.pc == 0x08808AA0u) goto L_08808AA0;
    return;
L_08808AA0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808AB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808AD8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808AD8u) goto L_08808AD8;
    return;
L_08808AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808AE4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808AE4u) goto L_08808AE4;
    return;
L_08808AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08808B00u);
    ctx.gpr[5] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08808B00u) goto L_08808B00;
    return;
L_08808B00:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808B14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808B34u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808B34u) goto L_08808B34;
    return;
L_08808B34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808B40u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808B40u) goto L_08808B40;
    return;
L_08808B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08808B60u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08808B60u) goto L_08808B60;
    return;
L_08808B60:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808B74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808B9Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808B9Cu) goto L_08808B9C;
    return;
L_08808B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808BA8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808BA8u) goto L_08808BA8;
    return;
L_08808BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08808BB8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08808BB8u) goto L_08808BB8;
    return;
L_08808BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 41u);
    ctx.gpr[31] = (0x08808BD8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08808BD8u) goto L_08808BD8;
    return;
L_08808BD8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808BF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808C18u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808C18u) goto L_08808C18;
    return;
L_08808C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808C24u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808C24u) goto L_08808C24;
    return;
L_08808C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08808C34u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808C34u) goto L_08808C34;
    return;
L_08808C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x08808C54u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08808C54u) goto L_08808C54;
    return;
L_08808C54:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808C6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808C94u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808C94u) goto L_08808C94;
    return;
L_08808C94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808CA0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808CA0u) goto L_08808CA0;
    return;
L_08808CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08808CB0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808CB0u) goto L_08808CB0;
    return;
L_08808CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 46u);
    ctx.gpr[31] = (0x08808CD0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08808CD0u) goto L_08808CD0;
    return;
L_08808CD0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808CE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808D18u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808D18u) goto L_08808D18;
    return;
L_08808D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808D24u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808D24u) goto L_08808D24;
    return;
L_08808D24:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08808D3Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08808D3Cu) goto L_08808D3C;
    return;
L_08808D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 49u);
    ctx.gpr[31] = (0x08808D68u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem) && ctx.pc == 0x08808D68u) goto L_08808D68;
    return;
L_08808D68:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808D88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808DB0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808DB0u) goto L_08808DB0;
    return;
L_08808DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808DBCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808DBCu) goto L_08808DBC;
    return;
L_08808DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08808DF0u);
    ctx.gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 983u, 0x08AC7A58u>(ctx, &aot_mem) && ctx.pc == 0x08808DF0u) goto L_08808DF0;
    return;
L_08808DF0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808E08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808E38u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808E38u) goto L_08808E38;
    return;
L_08808E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808E44u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808E44u) goto L_08808E44;
    return;
L_08808E44:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08808E5Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08808E5Cu) goto L_08808E5C;
    return;
L_08808E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x08808E88u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem) && ctx.pc == 0x08808E88u) goto L_08808E88;
    return;
L_08808E88:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808EA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808EC8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808EC8u) goto L_08808EC8;
    return;
L_08808EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808ED4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808ED4u) goto L_08808ED4;
    return;
L_08808ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08808EF0u);
    ctx.gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08808EF0u) goto L_08808EF0;
    return;
L_08808EF0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808F04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808F2Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08808F2Cu) goto L_08808F2C;
    return;
L_08808F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08808F38u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08808F38u) goto L_08808F38;
    return;
L_08808F38:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08808F58;
      }
      goto L_08808F48;
    }
L_08808F48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08808F58;
      }
      goto L_08808F54;
    }
L_08808F54:
    ctx.gpr[4] = (0u | 1u);
    goto L_08808F58;
L_08808F58:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08808F84;
      }
      goto L_08808F7C;
    }
L_08808F7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08808FCC;
      }
      goto L_08808F84;
    }
L_08808F84:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08808FB0;
      }
      goto L_08808FA4;
    }
L_08808FA4:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08808FCC;
      }
      goto L_08808FB0;
    }
L_08808FB0:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808FCC;
      }
      goto L_08808FC8;
    }
L_08808FC8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08808FCC;
L_08808FCC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808FE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08809004u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08809004u) goto L_08809004;
    return;
L_08809004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08809010u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08809010u) goto L_08809010;
    return;
L_08809010:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08809034;
      }
      goto L_08809024;
    }
L_08809024:
    ctx.gpr[31] = (0x0880902Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0880902Cu) goto L_0880902C;
    return;
L_0880902C:
    ctx.gpr[31] = (0x08809034u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem) && ctx.pc == 0x08809034u) goto L_08809034;
    return;
L_08809034:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809048:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    ctx.gpr[21] = (2236u << 16u);
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[21] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08809094u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08809094u) goto L_08809094;
    return;
L_08809094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x088090A0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x088090A0u) goto L_088090A0;
    return;
L_088090A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088090B0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x088090B0u) goto L_088090B0;
    return;
L_088090B0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(29704), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088091A8;
      }
      goto L_088090C0;
    }
L_088090C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088091A8;
      }
      goto L_088090D4;
    }
L_088090D4:
    ctx.gpr[4] = (17352u << 16u);
    ctx.gpr[31] = (0x088090E0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x088090E0u) goto L_088090E0;
    return;
L_088090E0:
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088090F4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 974u, 0x08A03B88u>(ctx, &aot_mem) && ctx.pc == 0x088090F4u) goto L_088090F4;
    return;
L_088090F4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088091A8;
      }
      goto L_08809100;
    }
L_08809100:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08809114u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 914u, 0x08A036C4u>(ctx, &aot_mem) && ctx.pc == 0x08809114u) goto L_08809114;
    return;
L_08809114:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088091A8;
      }
      goto L_08809144;
    }
L_08809144:
    ctx.gpr[31] = (0x0880914Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x0880914Cu) goto L_0880914C;
    return;
L_0880914C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08809158u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 886u, 0x08A03590u>(ctx, &aot_mem) && ctx.pc == 0x08809158u) goto L_08809158;
    return;
L_08809158:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088091A8;
      }
      goto L_08809160;
    }
L_08809160:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08809174u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 918u, 0x08A03794u>(ctx, &aot_mem) && ctx.pc == 0x08809174u) goto L_08809174;
    return;
L_08809174:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088091A8;
      }
      goto L_0880917C;
    }
L_0880917C:
    ctx.gpr[31] = (0x08809184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08809184u) goto L_08809184;
    return;
L_08809184:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08809198u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 720u, 0x08A02D68u>(ctx, &aot_mem) && ctx.pc == 0x08809198u) goto L_08809198;
    return;
L_08809198:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088091A8;
      }
      goto L_088091A0;
    }
L_088091A0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    goto L_088091A8;
L_088091A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088091B8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x088091B8u) goto L_088091B8;
    return;
L_088091B8:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088091EC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(5920), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088091F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08809210;
      }
      goto L_088091FC;
    }
L_088091FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32528)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08809218;
    }
    goto L_08809210;
L_08809210:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0880924C;
      }
      goto L_08809218;
    }
L_08809218:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08809234;
    }
    goto L_0880922C;
L_0880922C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0880924C;
      }
      goto L_08809234;
    }
L_08809234:
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[7] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_0880924C;
L_0880924C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880927C;
      }
      goto L_08809254;
    }
L_08809254:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809268;
      }
      goto L_08809260;
    }
L_08809260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08809280;
      }
      goto L_08809268;
    }
L_08809268:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08809280;
      }
      goto L_0880927C;
    }
L_0880927C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08809280;
L_08809280:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088092CC;
      }
      goto L_088092B8;
    }
L_088092B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32528)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_088092D4;
    }
    goto L_088092CC;
L_088092CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08809300;
      }
      goto L_088092D4;
    }
L_088092D4:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088092F0;
    }
    goto L_088092E8;
L_088092E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08809300;
      }
      goto L_088092F0;
    }
L_088092F0:
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08809300;
L_08809300:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0880931Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x0880931Cu) goto L_0880931C;
    return;
L_0880931C:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_08809384;
      }
      goto L_0880932C;
    }
L_0880932C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0880934C;
      }
      goto L_0880933C;
    }
L_0880933C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0880934C;
L_0880934C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08809374u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08809374u) goto L_08809374;
    return;
L_08809374:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0880932C;
      }
      goto L_08809384;
    }
L_08809384:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
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
L_088093AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088093E4;
      }
      goto L_088093D0;
    }
L_088093D0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32528)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_088093EC;
    }
    goto L_088093E4;
L_088093E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08809418;
      }
      goto L_088093EC;
    }
L_088093EC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08809408;
    }
    goto L_08809400;
L_08809400:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08809418;
      }
      goto L_08809408;
    }
L_08809408:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_08809418;
L_08809418:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_08809424;
L_08809424:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08809444;
      }
      goto L_08809434;
    }
L_08809434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_08809444;
L_08809444:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809498;
      }
      goto L_0880944C;
    }
L_0880944C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08809460;
      }
      goto L_08809454;
    }
L_08809454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08809460;
L_08809460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809498;
      }
      goto L_08809474;
    }
L_08809474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(55)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08809498;
      }
      goto L_08809490;
    }
L_08809490:
    ctx.gpr[31] = (0x08809498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 75u, 0x089904B0u>(ctx, &aot_mem) && ctx.pc == 0x08809498u) goto L_08809498;
    return;
L_08809498:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08809424;
      }
      goto L_088094A8;
    }
L_088094A8:
    ctx.gpr[20] = (2237u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28816));
    goto L_088094B8;
L_088094B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088094D8;
      }
      goto L_088094C8;
    }
L_088094C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    goto L_088094D8;
L_088094D8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880954C;
      }
      goto L_088094E0;
    }
L_088094E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088094F4;
      }
      goto L_088094E8;
    }
L_088094E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088094F4;
L_088094F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880954C;
      }
      goto L_08809508;
    }
L_08809508:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(55)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0880954C;
      }
      goto L_08809524;
    }
L_08809524:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08809534;
    }
    goto L_08809534;
L_08809534:
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x0880954Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0880954Cu) goto L_0880954C;
    return;
L_0880954C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088094B8;
      }
      goto L_0880955C;
    }
L_0880955C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809588;
      }
      goto L_08809568;
    }
L_08809568:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.gpr[31] = (0x08809574u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08809574u) goto L_08809574;
    return;
L_08809574:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08809584u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08809584u) goto L_08809584;
    return;
L_08809584:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), 0u);
    goto L_08809588;
L_08809588:
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
L_088095A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088095C4;
      }
      goto L_088095B0;
    }
L_088095B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32528)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_088095CC;
    }
    goto L_088095C4;
L_088095C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088095F8;
      }
      goto L_088095CC;
    }
L_088095CC:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
      if (branch_taken) {
          goto L_088095E8;
      }
      goto L_088095E0;
    }
L_088095E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088095F8;
      }
      goto L_088095E8;
    }
L_088095E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088095F8;
L_088095F8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809600:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880962Cu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 542u, 0x08AD3220u>(ctx, &aot_mem) && ctx.pc == 0x0880962Cu) goto L_0880962C;
    return;
L_0880962C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809648;
      }
      goto L_08809634;
    }
L_08809634:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809648;
      }
      goto L_08809640;
    }
L_08809640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880984C;
      }
      goto L_08809648;
    }
L_08809648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32528)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (0u | 72u);
      if (branch_taken) {
          goto L_088096EC;
      }
      goto L_08809660;
    }
L_08809660:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08809678;
      }
      goto L_08809668;
    }
L_08809668:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08809680;
    }
    goto L_08809678;
L_08809678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088096A8;
      }
      goto L_08809680;
    }
L_08809680:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0880969C;
    }
    goto L_08809694;
L_08809694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088096A8;
      }
      goto L_0880969C;
    }
L_0880969C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_088096A8;
L_088096A8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088096D8;
      }
      goto L_088096B0;
    }
L_088096B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088096BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088091F4;
L_088096BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088096D4;
      }
      goto L_088096C4;
    }
L_088096C4:
    ctx.gpr[31] = (0x088096CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 577u, 0x08AD34D8u>(ctx, &aot_mem) && ctx.pc == 0x088096CCu) goto L_088096CC;
    return;
L_088096CC:
    ctx.gpr[31] = (0x088096D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x088096D4u) goto L_088096D4;
    return;
L_088096D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32528)));
    goto L_088096D8;
L_088096D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_08809660;
      }
      goto L_088096EC;
    }
L_088096EC:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809824;
      }
      goto L_088096FC;
    }
L_088096FC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u | 72u);
    goto L_08809708;
L_08809708:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08809720;
      }
      goto L_08809710;
    }
L_08809710:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08809728;
    }
    goto L_08809720;
L_08809720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08809750;
      }
      goto L_08809728;
    }
L_08809728:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08809744;
    }
    goto L_0880973C;
L_0880973C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08809750;
      }
      goto L_08809744;
    }
L_08809744:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08809750;
L_08809750:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809808;
      }
      goto L_08809758;
    }
L_08809758:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08809764u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088091F4;
L_08809764:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809804;
      }
      goto L_0880976C;
    }
L_0880976C:
    ctx.gpr[31] = (0x08809774u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 577u, 0x08AD34D8u>(ctx, &aot_mem) && ctx.pc == 0x08809774u) goto L_08809774;
    return;
L_08809774:
    ctx.gpr[31] = (0x0880977Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x0880977Cu) goto L_0880977C;
    return;
L_0880977C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088097F8;
      }
      goto L_08809784;
    }
L_08809784:
    ctx.gpr[31] = (0x0880978Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088095A8;
L_0880978C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088097E4;
      }
      goto L_088097A8;
    }
L_088097A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088097E4;
      }
      goto L_088097BC;
    }
L_088097BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088097E4;
      }
      goto L_088097D0;
    }
L_088097D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088097EC;
      }
      goto L_088097E4;
    }
L_088097E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088097EC;
      }
      goto L_088097EC;
    }
L_088097EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088097F8;
      }
      goto L_088097F4;
    }
L_088097F4:
    ctx.gpr[17] = (0u | 1u);
    goto L_088097F8;
L_088097F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08809804u);
    ctx.gpr[5] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 562u, 0x08AD33C0u>(ctx, &aot_mem) && ctx.pc == 0x08809804u) goto L_08809804;
    return;
L_08809804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32528)));
    goto L_08809808;
L_08809808:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_08809708;
      }
      goto L_0880981C;
    }
L_0880981C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08809824;
L_08809824:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(5920), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0880984C;
      }
      goto L_0880982C;
    }
L_0880982C:
    ctx.gpr[31] = (0x08809834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 163u, 0x08A114E4u>(ctx, &aot_mem) && ctx.pc == 0x08809834u) goto L_08809834;
    return;
L_08809834:
    ctx.gpr[31] = (0x0880983Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x0880983Cu) goto L_0880983C;
    return;
L_0880983C:
    ctx.gpr[31] = (0x08809844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 286u, 0x0896D084u>(ctx, &aot_mem) && ctx.pc == 0x08809844u) goto L_08809844;
    return;
L_08809844:
    ctx.gpr[31] = (0x0880984Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 165u, 0x08A11504u>(ctx, &aot_mem) && ctx.pc == 0x0880984Cu) goto L_0880984C;
    return;
L_0880984C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809870:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(5920), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(5936));
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
L_0880988C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32528)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 72u);
      if (branch_taken) {
          goto L_08809940;
      }
      goto L_088098BC;
    }
L_088098BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_088098D4;
      }
      goto L_088098C4;
    }
L_088098C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_088098DC;
    }
    goto L_088098D4;
L_088098D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08809904;
      }
      goto L_088098DC;
    }
L_088098DC:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088098F8;
    }
    goto L_088098F0;
L_088098F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08809904;
      }
      goto L_088098F8;
    }
L_088098F8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08809904;
L_08809904:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08809928;
      }
      goto L_0880990C;
    }
L_0880990C:
    ctx.gpr[31] = (0x08809914u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088091F4;
L_08809914:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809928;
      }
      goto L_0880991C;
    }
L_0880991C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08809928u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 562u, 0x08AD33C0u>(ctx, &aot_mem) && ctx.pc == 0x08809928u) goto L_08809928;
    return;
L_08809928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32528)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_088098BC;
      }
      goto L_08809940;
    }
L_08809940:
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
L_08809958:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880996Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 404u, 0x08A8E094u>(ctx, &aot_mem) && ctx.pc == 0x0880996Cu) goto L_0880996C;
    return;
L_0880996C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809984:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08809994u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_08809958;
L_08809994:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088099A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088099A8;
      }
      goto L_088099A8;
    }
L_088099A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088099B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32528)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 72u);
      if (branch_taken) {
          goto L_08809A64;
      }
      goto L_088099D8;
    }
L_088099D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_088099F0;
      }
      goto L_088099E0;
    }
L_088099E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_088099F8;
    }
    goto L_088099F0;
L_088099F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08809A20;
      }
      goto L_088099F8;
    }
L_088099F8:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08809A14;
    }
    goto L_08809A0C;
L_08809A0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08809A20;
      }
      goto L_08809A14;
    }
L_08809A14:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08809A20;
L_08809A20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809A4C;
      }
      goto L_08809A28;
    }
L_08809A28:
    ctx.gpr[31] = (0x08809A30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 618u, 0x08AD375Cu>(ctx, &aot_mem) && ctx.pc == 0x08809A30u) goto L_08809A30;
    return;
L_08809A30:
    ctx.gpr[4] = (ctx.gpr[2] & 130u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809A4C;
      }
      goto L_08809A3C;
    }
L_08809A3C:
    ctx.gpr[31] = (0x08809A44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 577u, 0x08AD34D8u>(ctx, &aot_mem) && ctx.pc == 0x08809A44u) goto L_08809A44;
    return;
L_08809A44:
    ctx.gpr[31] = (0x08809A4Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08809A4Cu) goto L_08809A4C;
    return;
L_08809A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32528)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_088099D8;
      }
      goto L_08809A64;
    }
L_08809A64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809A78:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-32528), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32524), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809A84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08809A98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28816));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 67u, 0x089903B0u>(ctx, &aot_mem) && ctx.pc == 0x08809A98u) goto L_08809A98;
    return;
L_08809A98:
    ctx.gpr[31] = (0x08809AA0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32504));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08809AA0u) goto L_08809AA0;
    return;
L_08809AA0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809AAC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809ABC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08809AD0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 542u, 0x08B59EE4u>(ctx, &aot_mem) && ctx.pc == 0x08809AD0u) goto L_08809AD0;
    return;
L_08809AD0:
    ctx.gpr[31] = (0x08809AD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08809AD8u) goto L_08809AD8;
    return;
L_08809AD8:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08809B04;
      }
      goto L_08809AF0;
    }
L_08809AF0:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08809AF0;
      }
      goto L_08809B04;
    }
L_08809B04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[6] = (0u | 92u);
      if (branch_taken) {
          goto L_08809B34;
      }
      goto L_08809B14;
    }
L_08809B14:
    ctx.gpr[5] = (0u | 47u);
    goto L_08809B18;
L_08809B18:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08809B24;
      }
      goto L_08809B20;
    }
L_08809B20:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08809B24;
L_08809B24:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809B18;
      }
      goto L_08809B34;
    }
L_08809B34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809B44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[31]);
    ctx.gpr[31] = (0x08809B7Cu);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08809B7Cu) goto L_08809B7C;
    return;
L_08809B7C:
    ctx.gpr[31] = (0x08809B84u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08809ABC;
L_08809B84:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08809B98u);
    ctx.gpr[5] = (0u | 115u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem) && ctx.pc == 0x08809B98u) goto L_08809B98;
    return;
L_08809B98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809BA4;
      }
      goto L_08809BA0;
    }
L_08809BA0:
    ctx.gpr[18] = (0u | 1u);
    goto L_08809BA4;
L_08809BA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08809BB0u);
    ctx.gpr[5] = (0u | 114u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem) && ctx.pc == 0x08809BB0u) goto L_08809BB0;
    return;
L_08809BB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08809BC8;
      }
      goto L_08809BB8;
    }
L_08809BB8:
    ctx.gpr[31] = (0x08809BC0u);
    ctx.gpr[5] = (0u | 43u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem) && ctx.pc == 0x08809BC0u) goto L_08809BC0;
    return;
L_08809BC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809BCC;
      }
      goto L_08809BC8;
    }
L_08809BC8:
    ctx.gpr[19] = (0u | 1u);
    goto L_08809BCC;
L_08809BCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08809BD8u);
    ctx.gpr[5] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem) && ctx.pc == 0x08809BD8u) goto L_08809BD8;
    return;
L_08809BD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809BE4;
      }
      goto L_08809BE0;
    }
L_08809BE0:
    ctx.gpr[19] = (ctx.gpr[19] | 1538u);
    goto L_08809BE4;
L_08809BE4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809C0C;
      }
      goto L_08809BEC;
    }
L_08809BEC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809C0C;
      }
      goto L_08809BF4;
    }
L_08809BF4:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08809C04u);
    ctx.gpr[6] = (0u | 511u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 220u, 0x088B5564u>(ctx, &aot_mem) && ctx.pc == 0x08809C04u) goto L_08809C04;
    return;
L_08809C04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08809C20;
      }
      goto L_08809C0C;
    }
L_08809C0C:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08809C1Cu);
    ctx.gpr[6] = (0u | 511u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 214u, 0x088B54E4u>(ctx, &aot_mem) && ctx.pc == 0x08809C1Cu) goto L_08809C1C;
    return;
L_08809C1C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08809C20;
L_08809C20:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08809C40;
      }
      goto L_08809C28;
    }
L_08809C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5952)));
    ctx.gpr[16] = (2235u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(18176));
      if (branch_taken) {
          goto L_08809C48;
      }
      goto L_08809C38;
    }
L_08809C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08809C68;
      }
      goto L_08809C40;
    }
L_08809C40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08809D28;
      }
      goto L_08809C48;
    }
L_08809C48:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5952), ctx.gpr[4]);
    ctx.gpr[7] = (2177u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08809C68u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25940));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08809C68u) goto L_08809C68;
    return;
L_08809C68:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08809C74;
L_08809C74:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08809C84;
      }
      goto L_08809C80;
    }
L_08809C80:
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08809C84;
L_08809C84:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08809C74;
      }
      goto L_08809C94;
    }
L_08809C94:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809CCC;
      }
      goto L_08809C9C;
    }
L_08809C9C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (32768u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[18] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08809CD4;
      }
      goto L_08809CC4;
    }
L_08809CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08809D24;
      }
      goto L_08809CCC;
    }
L_08809CCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08809D28;
      }
      goto L_08809CD4;
    }
L_08809CD4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32484)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32488)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08809CF0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 898u, 0x08B3B264u>(ctx, &aot_mem) && ctx.pc == 0x08809CF0u) goto L_08809CF0;
    return;
L_08809CF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08809D24u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 898u, 0x08B3B264u>(ctx, &aot_mem) && ctx.pc == 0x08809D24u) goto L_08809D24;
    return;
L_08809D24:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08809D28;
L_08809D28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809D4C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 28 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809D88;
      }
      goto L_08809D58;
    }
L_08809D58:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809D78;
      }
      goto L_08809D64;
    }
L_08809D64:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08809D80;
      }
      goto L_08809D78;
    }
L_08809D78:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    goto L_08809D80;
L_08809D80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08809D8C;
      }
      goto L_08809D88;
    }
L_08809D88:
    ctx.gpr[2] = (0u | 0u);
    goto L_08809D8C;
L_08809D8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809D94:
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
L_08809DBC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (0u | 96u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 112u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809DEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08809E0C;
      }
      goto L_08809DFC;
    }
L_08809DFC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809E0C;
      }
      goto L_08809E04;
    }
L_08809E04:
    ctx.gpr[31] = (0x08809E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08809E0Cu) goto L_08809E0C;
    return;
L_08809E0C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809E18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08809E2Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08809E44;
L_08809E2C:
    ctx.gpr[31] = (0x08809E34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08809E80;
L_08809E34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809E44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08809E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 651u, 0x08B62FE8u>(ctx, &aot_mem) && ctx.pc == 0x08809E54u) goto L_08809E54;
    return;
L_08809E54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809E64;
      }
      goto L_08809E5C;
    }
L_08809E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08809E74;
      }
      goto L_08809E64;
    }
L_08809E64:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08809E70u);
    ctx.gpr[5] = (0u | 768u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 674u, 0x08B63158u>(ctx, &aot_mem) && ctx.pc == 0x08809E70u) goto L_08809E70;
    return;
L_08809E70:
    ctx.gpr[2] = (0u | 1u);
    goto L_08809E74;
L_08809E74:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809E80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809E94;
      }
      goto L_08809E8C;
    }
L_08809E8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08809E98;
      }
      goto L_08809E94;
    }
L_08809E94:
    ctx.gpr[2] = (0u | 1u);
    goto L_08809E98;
L_08809E98:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809EA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08809F54;
      }
      goto L_08809EBC;
    }
L_08809EBC:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7712));
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08809ED0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16240));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 695u, 0x08986B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08809ED0u) goto L_08809ED0;
    return;
L_08809ED0:
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08809EE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16268));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 695u, 0x08986B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08809EE0u) goto L_08809EE0;
    return;
L_08809EE0:
    ctx.gpr[31] = (0x08809EE8u);
    ctx.gpr[4] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 26u, 0x08B64324u>(ctx, &aot_mem) && ctx.pc == 0x08809EE8u) goto L_08809EE8;
    return;
L_08809EE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809F3C;
      }
      goto L_08809EF0;
    }
L_08809EF0:
    ctx.gpr[31] = (0x08809EF8u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 77u, 0x08B646ECu>(ctx, &aot_mem) && ctx.pc == 0x08809EF8u) goto L_08809EF8;
    return;
L_08809EF8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08809F04u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 69u, 0x08B64654u>(ctx, &aot_mem) && ctx.pc == 0x08809F04u) goto L_08809F04;
    return;
L_08809F04:
    ctx.gpr[4] = (0u | 4096u);
    ctx.gpr[31] = (0x08809F10u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 73u, 0x08B646A0u>(ctx, &aot_mem) && ctx.pc == 0x08809F10u) goto L_08809F10;
    return;
L_08809F10:
    ctx.gpr[31] = (0x08809F18u);
    // nop
    ctx.pc = 0x08B733FCu;
    return;
L_08809F18:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08809F2Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 631u, 0x089867DCu>(ctx, &aot_mem) && ctx.pc == 0x08809F2Cu) goto L_08809F2C;
    return;
L_08809F2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809F5C;
      }
      goto L_08809F34;
    }
L_08809F34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08809FBC;
      }
      goto L_08809F3C;
    }
L_08809F3C:
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08809F4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16292));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 695u, 0x08986B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08809F4Cu) goto L_08809F4C;
    return;
L_08809F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08809FBC;
      }
      goto L_08809F54;
    }
L_08809F54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08809FBC;
      }
      goto L_08809F5C;
    }
L_08809F5C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18304));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08809F6C;
L_08809F6C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08809F6C;
      }
      goto L_08809F84;
    }
L_08809F84:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08809F8C;
L_08809F8C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(576), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(688), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 28 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08809F8C;
      }
      goto L_08809FB4;
    }
L_08809FB4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32479), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (0u | 1u);
    goto L_08809FBC;
L_08809FBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809FD0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809FD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32476)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A010;
      }
      goto L_0880A008;
    }
L_0880A008:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-32476), ctx.gpr[4]);
    goto L_0880A010;
L_0880A010:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 127 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A034;
      }
      goto L_0880A020;
    }
L_0880A020:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A034;
      }
      goto L_0880A030;
    }
L_0880A030:
    ctx.gpr[19] = (0u | 127u);
    goto L_0880A034;
L_0880A034:
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    ctx.gpr[31] = (0x0880A040u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880A6FC;
L_0880A040:
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28320));
    goto L_0880A050;
L_0880A050:
    ctx.gpr[20] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880A060u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 425u, 0x088CA2F4u>(ctx, &aot_mem) && ctx.pc == 0x0880A060u) goto L_0880A060;
    return;
L_0880A060:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880A080;
      }
      goto L_0880A068;
    }
L_0880A068:
    ctx.gpr[31] = (0x0880A070u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 452u, 0x088CA494u>(ctx, &aot_mem) && ctx.pc == 0x0880A070u) goto L_0880A070;
    return;
L_0880A070:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A080;
      }
      goto L_0880A078;
    }
L_0880A078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0880A090;
      }
      goto L_0880A080;
    }
L_0880A080:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A050;
      }
      goto L_0880A090;
    }
L_0880A090:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A0CC;
      }
      goto L_0880A098;
    }
L_0880A098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32460)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32468)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32472)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0880A0C4;
    }
    goto L_0880A0C4;
L_0880A0C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-32460), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0880A124;
      }
      goto L_0880A0CC;
    }
L_0880A0CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32464)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32460)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32428)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32432)));
    ctx.gpr[31] = (0x0880A0E4u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x0880A0E4u) goto L_0880A0E4;
    return;
L_0880A0E4:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0880A104u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A104u) goto L_0880A104;
    return;
L_0880A104:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
        goto L_0880A118;
    }
    goto L_0880A10C;
L_0880A10C:
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_0880A118;
L_0880A118:
    ctx.gpr[31] = (0x0880A120u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x0880A120u) goto L_0880A120;
    return;
L_0880A120:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-32460), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0880A124;
L_0880A124:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A16C;
      }
      goto L_0880A12C;
    }
L_0880A12C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32479)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A154;
      }
      goto L_0880A138;
    }
L_0880A138:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18304));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19104));
      if (branch_taken) {
          goto L_0880A174;
      }
      goto L_0880A154;
    }
L_0880A154:
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7712));
    ctx.gpr[31] = (0x0880A164u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16316));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 695u, 0x08986B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A164u) goto L_0880A164;
    return;
L_0880A164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A1F0;
      }
      goto L_0880A16C;
    }
L_0880A16C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A1F0;
      }
      goto L_0880A174;
    }
L_0880A174:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0880A174;
      }
      goto L_0880A198;
    }
L_0880A198:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32479), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_0880A1A8;
L_0880A1A8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880A1A8;
      }
      goto L_0880A1C0;
    }
L_0880A1C0:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0880A1C8;
L_0880A1C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(576), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(688), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 28 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880A1C8;
      }
      goto L_0880A1F0;
    }
L_0880A1F0:
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
L_0880A214:
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[9] & 255u);
    ctx.gpr[9] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(18304));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(240), ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(352), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A264;
      }
      goto L_0880A25C;
    }
L_0880A25C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880A274;
      }
      goto L_0880A264;
    }
L_0880A264:
    ctx.gpr[31] = (0x0880A26Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 661u, 0x08986968u>(ctx, &aot_mem) && ctx.pc == 0x0880A26Cu) goto L_0880A26C;
    return;
L_0880A26C:
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
    goto L_0880A274;
L_0880A274:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A280:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880A29Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 633u, 0x089867F8u>(ctx, &aot_mem) && ctx.pc == 0x0880A29Cu) goto L_0880A29C;
    return;
L_0880A29C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A2A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0880A308;
      }
      goto L_0880A2BC;
    }
L_0880A2BC:
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-1008)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A2F4;
      }
      goto L_0880A2CC;
    }
L_0880A2CC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1008));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1400)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.gpr[6] = (0u | 2u);
        goto L_0880A310;
    }
    goto L_0880A2DC;
L_0880A2DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880A2F4;
      }
      goto L_0880A2E4;
    }
L_0880A2E4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1398)));
    ctx.gpr[6] = (0u | 109u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0880A320;
      }
      goto L_0880A2F4;
    }
L_0880A2F4:
    ctx.gpr[31] = (0x0880A2FCu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 648u, 0x08986890u>(ctx, &aot_mem) && ctx.pc == 0x0880A2FCu) goto L_0880A2FC;
    return;
L_0880A2FC:
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
      if (branch_taken) {
          goto L_0880A324;
      }
      goto L_0880A308;
    }
L_0880A308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880A324;
      }
      goto L_0880A310;
    }
L_0880A310:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0880A2F4;
      }
      goto L_0880A318;
    }
L_0880A318:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880A324;
      }
      goto L_0880A320;
    }
L_0880A320:
    ctx.gpr[2] = (0u | 0u);
    goto L_0880A324;
L_0880A324:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A330:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880A344u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 872u, 0x08987958u>(ctx, &aot_mem) && ctx.pc == 0x0880A344u) goto L_0880A344;
    return;
L_0880A344:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A350:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0880A380;
      }
      goto L_0880A368;
    }
L_0880A368:
    ctx.gpr[6] = (0u | 300u);
    ctx.gpr[31] = (0x0880A374u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-32476), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 648u, 0x08986890u>(ctx, &aot_mem) && ctx.pc == 0x0880A374u) goto L_0880A374;
    return;
L_0880A374:
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
      if (branch_taken) {
          goto L_0880A384;
      }
      goto L_0880A380;
    }
L_0880A380:
    ctx.gpr[2] = (0u | 0u);
    goto L_0880A384;
L_0880A384:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A390:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0880A3B8;
      }
      goto L_0880A3A8;
    }
L_0880A3A8:
    ctx.gpr[31] = (0x0880A3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 872u, 0x08987958u>(ctx, &aot_mem) && ctx.pc == 0x0880A3B0u) goto L_0880A3B0;
    return;
L_0880A3B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A3BC;
      }
      goto L_0880A3B8;
    }
L_0880A3B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_0880A3BC;
L_0880A3BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A3C8:
    ctx.gpr[4] = (0u | 286u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 287u);
      if (branch_taken) {
          goto L_0880A3EC;
      }
      goto L_0880A3D4;
    }
L_0880A3D4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 288u);
      if (branch_taken) {
          goto L_0880A3EC;
      }
      goto L_0880A3DC;
    }
L_0880A3DC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 289u);
      if (branch_taken) {
          goto L_0880A3EC;
      }
      goto L_0880A3E4;
    }
L_0880A3E4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880A3F4;
      }
      goto L_0880A3EC;
    }
L_0880A3EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0880A3F8;
      }
      goto L_0880A3F4;
    }
L_0880A3F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_0880A3F8;
L_0880A3F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A400:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A41C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A438:
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[10] = (2235u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(18304));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_0880A458;
      }
      goto L_0880A454;
    }
L_0880A454:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    goto L_0880A458;
L_0880A458:
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A468;
      }
      goto L_0880A464;
    }
L_0880A464:
    ctx.gpr[6] = (0u | 127u);
    goto L_0880A468;
L_0880A468:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (0u | 22u);
    ctx.gpr[6] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.gpr[8] = (0u | 23u);
      if (branch_taken) {
          goto L_0880A49C;
      }
      goto L_0880A47C;
    }
L_0880A47C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.gpr[8] = (0u | 24u);
      if (branch_taken) {
          goto L_0880A49C;
      }
      goto L_0880A484;
    }
L_0880A484:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.gpr[8] = (0u | 25u);
      if (branch_taken) {
          goto L_0880A49C;
      }
      goto L_0880A48C;
    }
L_0880A48C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.gpr[8] = (0u | 26u);
      if (branch_taken) {
          goto L_0880A49C;
      }
      goto L_0880A494;
    }
L_0880A494:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0880A4F8;
      }
      goto L_0880A49C;
    }
L_0880A49C:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2651)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 127u);
        goto L_0880A4E8;
    }
    goto L_0880A4B8;
L_0880A4B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (0u | 21336u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 64u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(576), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(688), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880A57C;
      }
      goto L_0880A4E8;
    }
L_0880A4E8:
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(688), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880A57C;
      }
      goto L_0880A4F8;
    }
L_0880A4F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(128)));
    ctx.gpr[8] = (0u | 3u);
    if (ctx.gpr[5] != ctx.gpr[8]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
        goto L_0880A51C;
    }
    goto L_0880A508;
L_0880A508:
    ctx.gpr[4] = (0u | 168u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(688), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880A57C;
      }
      goto L_0880A51C;
    }
L_0880A51C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(240)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 21336u);
      if (branch_taken) {
          goto L_0880A570;
      }
      goto L_0880A530;
    }
L_0880A530:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0880A548;
      }
      goto L_0880A53C;
    }
L_0880A53C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0880A548;
L_0880A548:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32460)));
    ctx.gpr[4] = (18086u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 45056u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(688), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880A57C;
      }
      goto L_0880A570;
    }
L_0880A570:
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(688), ctx.gpr[4]);
    goto L_0880A57C;
L_0880A57C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A584:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (0u | 127u);
        goto L_0880A594;
    }
    goto L_0880A594;
L_0880A594:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(18304));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(576), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A5AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A5B4:
    ctx.gpr[4] = (0u | 44000u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A5C8;
      }
      goto L_0880A5C4;
    }
L_0880A5C4:
    ctx.gpr[6] = (0u | 44000u);
    goto L_0880A5C8;
L_0880A5C8:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18304));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A5E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880A5F4u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 416u, 0x08AABBE0u>(ctx, &aot_mem) && ctx.pc == 0x0880A5F4u) goto L_0880A5F4;
    return;
L_0880A5F4:
    ctx.gpr[31] = (0x0880A5FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 63u, 0x08B64618u>(ctx, &aot_mem) && ctx.pc == 0x0880A5FCu) goto L_0880A5FC;
    return;
L_0880A5FC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] << (ctx.gpr[16] & 31u));
    ctx.gpr[4] = (ctx.gpr[2] & ctx.gpr[4]);
    ctx.gpr[31] = (0x0880A610u);
    ctx.gpr[16] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 418u, 0x08AABC04u>(ctx, &aot_mem) && ctx.pc == 0x0880A610u) goto L_0880A610;
    return;
L_0880A610:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880A640u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08809D4C;
L_0880A640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A674;
      }
      goto L_0880A648;
    }
L_0880A648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18304));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[7] << (ctx.gpr[6] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0880A674;
L_0880A674:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A680:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880A69Cu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08809D4C;
L_0880A69C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A6D0;
      }
      goto L_0880A6A4;
    }
L_0880A6A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18304));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[7] << (ctx.gpr[6] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_0880A6D0;
L_0880A6D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A6DC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A6E4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A6EC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A6F4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A6FC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A704:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0880A740;
      }
      goto L_0880A728;
    }
L_0880A728:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x0880A738u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x0880A738u) goto L_0880A738;
    return;
L_0880A738:
    ctx.gpr[31] = (0x0880A740u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32448));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0880A740u) goto L_0880A740;
    return;
L_0880A740:
    ctx.gpr[31] = (0x0880A748u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem) && ctx.pc == 0x0880A748u) goto L_0880A748;
    return;
L_0880A748:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A768;
      }
      goto L_0880A750;
    }
L_0880A750:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 127 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A770;
      }
      goto L_0880A760;
    }
L_0880A760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A774;
      }
      goto L_0880A768;
    }
L_0880A768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 127u);
      if (branch_taken) {
          goto L_0880A774;
      }
      goto L_0880A770;
    }
L_0880A770:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    goto L_0880A774;
L_0880A774:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A788:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32479)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880AEB4;
      }
      goto L_0880A7C4;
    }
L_0880A7C4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-32452), 0u);
    ctx.gpr[4] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(19104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(26304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(560));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23168));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16396));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16452));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32404));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[6] = (2231u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16500));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28416));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32448));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16580));
    ctx.gpr[7] = (2231u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(688));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16616));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[23] = (2237u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(23216));
    goto L_0880A8AC;
L_0880A8AC:
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 24 ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_0880A8D0;
      }
      goto L_0880A8C8;
    }
L_0880A8C8:
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(-24));
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    goto L_0880A8D0;
L_0880A8D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[21] << (ctx.gpr[6] & 31u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A8FC;
      }
      goto L_0880A8F4;
    }
L_0880A8F4:
    ctx.gpr[31] = (0x0880A8FCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 44u, 0x08B64460u>(ctx, &aot_mem) && ctx.pc == 0x0880A8FCu) goto L_0880A8FC;
    return;
L_0880A8FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0880AC1C;
      }
      goto L_0880A910;
    }
L_0880A910:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0880AC1C;
      }
      goto L_0880A920;
    }
L_0880A920:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[31] = (0x0880A930u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 660u, 0x0898694Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A930u) goto L_0880A930;
    return;
L_0880A930:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
    ctx.gpr[9] = (0u | 4u);
      if (branch_taken) {
          goto L_0880A954;
      }
      goto L_0880A93C;
    }
L_0880A93C:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0880AE90;
      }
      goto L_0880A954;
    }
L_0880A954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1400)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0880A970;
      }
      goto L_0880A968;
    }
L_0880A968:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880AE90;
      }
      goto L_0880A970;
    }
L_0880A970:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[6];
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0880A988;
      }
      goto L_0880A97C;
    }
L_0880A97C:
    ctx.gpr[4] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880AB78;
      }
      goto L_0880A988;
    }
L_0880A988:
    ctx.gpr[4] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880A9AC;
      }
      goto L_0880A994;
    }
L_0880A994:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A9AC;
      }
      goto L_0880A9A8;
    }
L_0880A9A8:
    ctx.gpr[8] = (0u | 0u);
    goto L_0880A9AC;
L_0880A9AC:
    ctx.gpr[4] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880A9D0;
      }
      goto L_0880A9B8;
    }
L_0880A9B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A9D0;
      }
      goto L_0880A9CC;
    }
L_0880A9CC:
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    goto L_0880A9D0;
L_0880A9D0:
    ctx.gpr[4] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880A9F4;
      }
      goto L_0880A9DC;
    }
L_0880A9DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A9F4;
      }
      goto L_0880A9F0;
    }
L_0880A9F0:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    goto L_0880A9F4;
L_0880A9F4:
    ctx.gpr[4] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880AA18;
      }
      goto L_0880AA00;
    }
L_0880AA00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880AA18;
      }
      goto L_0880AA14;
    }
L_0880AA14:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    goto L_0880AA18;
L_0880AA18:
    ctx.gpr[4] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880AA3C;
      }
      goto L_0880AA24;
    }
L_0880AA24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880AA3C;
      }
      goto L_0880AA38;
    }
L_0880AA38:
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    goto L_0880AA3C;
L_0880AA3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880AA70;
      }
      goto L_0880AA48;
    }
L_0880AA48:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_0880AB0C;
    }
    goto L_0880AA50;
L_0880AA50:
    if (ctx.gpr[8] == ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_0880AB0C;
    }
    goto L_0880AA58;
L_0880AA58:
    if (ctx.gpr[8] == ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_0880AB0C;
    }
    goto L_0880AA60;
L_0880AA60:
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_0880AB0C;
    }
    goto L_0880AA68;
L_0880AA68:
    if (ctx.gpr[8] == ctx.gpr[9]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_0880AB0C;
    }
    goto L_0880AA70;
L_0880AA70:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16324)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16300)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_0880AA80;
L_0880AA80:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0880AA90;
      }
      goto L_0880AA8C;
    }
L_0880AA8C:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    goto L_0880AA90;
L_0880AA90:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_0880AAB4;
      }
      goto L_0880AAA4;
    }
L_0880AAA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0880AAD4;
      }
      goto L_0880AAB4;
    }
L_0880AAB4:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_0880AAC4;
      }
      goto L_0880AABC;
    }
L_0880AABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_0880AAD4;
      }
      goto L_0880AAC4;
    }
L_0880AAC4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880AA80;
      }
      goto L_0880AAD4;
    }
L_0880AAD4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880AAE8;
      }
      goto L_0880AAE0;
    }
L_0880AAE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880AE90;
      }
      goto L_0880AAE8;
    }
L_0880AAE8:
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-64));
      if (branch_taken) {
          goto L_0880AB70;
      }
      goto L_0880AB0C;
    }
L_0880AB0C:
    ctx.gpr[5] = (ctx.gpr[8] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6028));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0880AB48;
      }
      goto L_0880AB34;
    }
L_0880AB34:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0880AB48;
      }
      goto L_0880AB40;
    }
L_0880AB40:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880AB50;
      }
      goto L_0880AB48;
    }
L_0880AB48:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32479), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0880AEC0;
      }
      goto L_0880AB50;
    }
L_0880AB50:
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[9] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-64));
    goto L_0880AB70;
L_0880AB70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0880ABAC;
      }
      goto L_0880AB78;
    }
L_0880AB78:
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    ctx.gpr[31] = (0x0880AB84u);
    ctx.gpr[5] = (ctx.gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 691u, 0x08986AA4u>(ctx, &aot_mem) && ctx.pc == 0x0880AB84u) goto L_0880AB84;
    return;
L_0880AB84:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-64));
    goto L_0880ABAC;
L_0880ABAC:
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    ctx.gpr[7] = (ctx.gpr[11] | 0u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0880ABCCu);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    goto L_08809D94;
L_0880ABCC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 27u);
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_0880AC08;
      }
      goto L_0880ABDC;
    }
L_0880ABDC:
    ctx.gpr[4] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 265u);
      if (branch_taken) {
          goto L_0880AC08;
      }
      goto L_0880ABE8;
    }
L_0880ABE8:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 249u);
      if (branch_taken) {
          goto L_0880AC08;
      }
      goto L_0880ABF0;
    }
L_0880ABF0:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 250u);
      if (branch_taken) {
          goto L_0880AC08;
      }
      goto L_0880ABF8;
    }
L_0880ABF8:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 16u);
      if (branch_taken) {
          goto L_0880AC08;
      }
      goto L_0880AC00;
    }
L_0880AC00:
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880AC0C;
      }
      goto L_0880AC08;
    }
L_0880AC08:
    ctx.gpr[7] = (0u | 0u);
    goto L_0880AC0C;
L_0880AC0C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0880AC1Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 55u, 0x08B64550u>(ctx, &aot_mem) && ctx.pc == 0x0880AC1Cu) goto L_0880AC1C;
    return;
L_0880AC1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    ctx.gpr[18] = (0u | 127u);
      if (branch_taken) {
          goto L_0880AC78;
      }
      goto L_0880AC30;
    }
L_0880AC30:
    ctx.gpr[5] = (ctx.gpr[6] << 12u);
    ctx.gpr[4] = (0u | 44000u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (ctx.lo);
    ctx.gpr[31] = (0x0880AC54u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08809D94;
L_0880AC54:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0880AC60u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 51u, 0x08B64500u>(ctx, &aot_mem) && ctx.pc == 0x0880AC60u) goto L_0880AC60;
    return;
L_0880AC60:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4097 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880AC78;
      }
      goto L_0880AC6C;
    }
L_0880AC6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x0880AC78u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08809D94;
L_0880AC78:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(688)));
    if (ctx.gpr[8] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_0880AE40;
    }
    goto L_0880AC84;
L_0880AC84:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(576)));
    if (ctx.gpr[7] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_0880AE40;
    }
    goto L_0880AC90;
L_0880AC90:
    ctx.gpr[4] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16288)));
      if (branch_taken) {
          goto L_0880ACA8;
      }
      goto L_0880AC9C;
    }
L_0880AC9C:
    ctx.gpr[9] = (ctx.gpr[8] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[8] << 6u);
      if (branch_taken) {
          goto L_0880ACC4;
      }
      goto L_0880ACA8;
    }
L_0880ACA8:
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[7]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[16] = (ctx.lo);
    goto L_0880ACC4;
L_0880ACC4:
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[17] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (ctx.lo);
    ctx.gpr[31] = (0x0880AD04u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    goto L_08809D94;
L_0880AD04:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (ctx.gpr[17] << 1u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16288)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
        goto L_0880AD20;
    }
    goto L_0880AD20;
L_0880AD20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[16] << 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
        goto L_0880AD34;
    }
    goto L_0880AD34;
L_0880AD34:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 4096u);
    ctx.gpr[19] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 4096u);
        goto L_0880AD60;
    }
    goto L_0880AD60;
L_0880AD60:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 4096u);
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 4096u);
        goto L_0880AD8C;
    }
    goto L_0880AD8C;
L_0880AD8C:
    ctx.gpr[31] = (0x0880AD94u);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 600u, 0x0888A208u>(ctx, &aot_mem) && ctx.pc == 0x0880AD94u) goto L_0880AD94;
    return;
L_0880AD94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880ADF8;
      }
      goto L_0880AD9C;
    }
L_0880AD9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880ADC0;
      }
      goto L_0880ADA8;
    }
L_0880ADA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0880ADB8u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x0880ADB8u) goto L_0880ADB8;
    return;
L_0880ADB8:
    ctx.gpr[31] = (0x0880ADC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0880ADC0u) goto L_0880ADC0;
    return;
L_0880ADC0:
    ctx.gpr[31] = (0x0880ADC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem) && ctx.pc == 0x0880ADC8u) goto L_0880ADC8;
    return;
L_0880ADC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880ADF8;
      }
      goto L_0880ADD0;
    }
L_0880ADD0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0880ADF8;
L_0880ADF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0880AE08u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08809D94;
L_0880AE08:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0880AE20u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 47u, 0x08B6449Cu>(ctx, &aot_mem) && ctx.pc == 0x0880AE20u) goto L_0880AE20;
    return;
L_0880AE20:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[31] = (0x0880AE3Cu);
    ctx.gpr[9] = (4096u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 59u, 0x08B645ACu>(ctx, &aot_mem) && ctx.pc == 0x0880AE3Cu) goto L_0880AE3C;
    return;
L_0880AE3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0880AE40;
L_0880AE40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880AE90;
      }
      goto L_0880AE7C;
    }
L_0880AE7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x0880AE88u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08809D94;
L_0880AE88:
    ctx.gpr[31] = (0x0880AE90u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 41u, 0x08B64424u>(ctx, &aot_mem) && ctx.pc == 0x0880AE90u) goto L_0880AE90;
    return;
L_0880AE90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 28 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880A8AC;
      }
      goto L_0880AEAC;
    }
L_0880AEAC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32479), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0880AEC0;
      }
      goto L_0880AEB4;
    }
L_0880AEB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32452)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-32452), ctx.gpr[4]);
    goto L_0880AEC0;
L_0880AEC0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880AEF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880AF04u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    goto L_08809DBC;
L_0880AF04:
    ctx.gpr[31] = (0x0880AF0Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32388));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0880AF0Cu) goto L_0880AF0C;
    return;
L_0880AF0C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32472)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16704u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-32468), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-32464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880AF48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880AF70u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x0880AF70u) goto L_0880AF70;
    return;
L_0880AF70:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32276));
    ctx.gpr[31] = (0x0880AF80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x0880AF80u) goto L_0880AF80;
    return;
L_0880AF80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880AF8Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x0880AF8Cu) goto L_0880AF8C;
    return;
L_0880AF8C:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2234u << 16u);
      if (branch_taken) {
          goto L_0880B04C;
      }
      goto L_0880AF9C;
    }
L_0880AF9C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32092));
    goto L_0880AFA0;
L_0880AFA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880AFACu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0880AFACu) goto L_0880AFAC;
    return;
L_0880AFAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880AFB8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0880AFB8u) goto L_0880AFB8;
    return;
L_0880AFB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0880AFC8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem) && ctx.pc == 0x0880AFC8u) goto L_0880AFC8;
    return;
L_0880AFC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880AFD4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0880AFD4u) goto L_0880AFD4;
    return;
L_0880AFD4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880AFF8;
      }
      goto L_0880AFE0;
    }
L_0880AFE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15532)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0880B010;
      }
      goto L_0880AFF0;
    }
L_0880AFF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B024;
      }
      goto L_0880AFF8;
    }
L_0880AFF8:
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B008u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16896));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x0880B008u) goto L_0880B008;
    return;
L_0880B008:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B060;
      }
      goto L_0880B010;
    }
L_0880B010:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0880B01Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 427u, 0x08B55960u>(ctx, &aot_mem) && ctx.pc == 0x0880B01Cu) goto L_0880B01C;
    return;
L_0880B01C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15532)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_0880B024;
L_0880B024:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0880B030u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 427u, 0x08B55960u>(ctx, &aot_mem) && ctx.pc == 0x0880B030u) goto L_0880B030;
    return;
L_0880B030:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B03Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0880B03Cu) goto L_0880B03C;
    return;
L_0880B03C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880AFA0;
      }
      goto L_0880B04C;
    }
L_0880B04C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15532)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32088));
    ctx.gpr[31] = (0x0880B05Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 427u, 0x08B55960u>(ctx, &aot_mem) && ctx.pc == 0x0880B05Cu) goto L_0880B05C;
    return;
L_0880B05C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0880B060;
L_0880B060:
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
L_0880B084:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B0B0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem) && ctx.pc == 0x0880B0B0u) goto L_0880B0B0;
    return;
L_0880B0B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0880B104;
      }
      goto L_0880B0C4;
    }
L_0880B0C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B0D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem) && ctx.pc == 0x0880B0D0u) goto L_0880B0D0;
    return;
L_0880B0D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B0DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B0DCu) goto L_0880B0DC;
    return;
L_0880B0DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B1E0;
      }
      goto L_0880B0E4;
    }
L_0880B0E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B0F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x0880B0F0u) goto L_0880B0F0;
    return;
L_0880B0F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B0FCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x0880B0FCu) goto L_0880B0FC;
    return;
L_0880B0FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880B1EC;
      }
      goto L_0880B104;
    }
L_0880B104:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0880B114u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B114u) goto L_0880B114;
    return;
L_0880B114:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0880B12C;
      }
      goto L_0880B120;
    }
L_0880B120:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B148;
      }
      goto L_0880B12C;
    }
L_0880B12C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[6] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0880B144u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16940));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem) && ctx.pc == 0x0880B144u) goto L_0880B144;
    return;
L_0880B144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0880B148;
L_0880B148:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0880B158u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 16u, 0x08B58090u>(ctx, &aot_mem) && ctx.pc == 0x0880B158u) goto L_0880B158;
    return;
L_0880B158:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0880B1E0;
      }
      goto L_0880B164;
    }
L_0880B164:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(14520));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 8u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B1B0;
      }
      goto L_0880B18C;
    }
L_0880B18C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0880B190;
L_0880B190:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 8u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880B190;
      }
      goto L_0880B1B0;
    }
L_0880B1B0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B1E0;
      }
      goto L_0880B1B8;
    }
L_0880B1B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0880B1D0;
      }
      goto L_0880B1C4;
    }
L_0880B1C4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0880B1D0;
L_0880B1D0:
    ctx.gpr[31] = (0x0880B1D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x0880B1D8u) goto L_0880B1D8;
    return;
L_0880B1D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880B1EC;
      }
      goto L_0880B1E0;
    }
L_0880B1E0:
    ctx.gpr[31] = (0x0880B1E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem) && ctx.pc == 0x0880B1E8u) goto L_0880B1E8;
    return;
L_0880B1E8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_0880B1EC;
L_0880B1EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B208:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B22Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem) && ctx.pc == 0x0880B22Cu) goto L_0880B22C;
    return;
L_0880B22C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0880B240u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem) && ctx.pc == 0x0880B240u) goto L_0880B240;
    return;
L_0880B240:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B24Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 344u, 0x08806984u>(ctx, &aot_mem) && ctx.pc == 0x0880B24Cu) goto L_0880B24C;
    return;
L_0880B24C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B25C;
      }
      goto L_0880B254;
    }
L_0880B254:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B270;
      }
      goto L_0880B25C;
    }
L_0880B25C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B268u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B268u) goto L_0880B268;
    return;
L_0880B268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B294;
      }
      goto L_0880B270;
    }
L_0880B270:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B27Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 221u, 0x0889D184u>(ctx, &aot_mem) && ctx.pc == 0x0880B27Cu) goto L_0880B27C;
    return;
L_0880B27C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B288u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B288u) goto L_0880B288;
    return;
L_0880B288:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B294u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 546u, 0x08807904u>(ctx, &aot_mem) && ctx.pc == 0x0880B294u) goto L_0880B294;
    return;
L_0880B294:
    ctx.gpr[31] = (0x0880B29Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 538u, 0x08807890u>(ctx, &aot_mem) && ctx.pc == 0x0880B29Cu) goto L_0880B29C;
    return;
L_0880B29C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B2B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B2D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem) && ctx.pc == 0x0880B2D0u) goto L_0880B2D0;
    return;
L_0880B2D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B2DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 466u, 0x08807294u>(ctx, &aot_mem) && ctx.pc == 0x0880B2DCu) goto L_0880B2DC;
    return;
L_0880B2DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B2F4;
      }
      goto L_0880B2E4;
    }
L_0880B2E4:
    ctx.gpr[31] = (0x0880B2ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem) && ctx.pc == 0x0880B2ECu) goto L_0880B2EC;
    return;
L_0880B2EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880B308;
      }
      goto L_0880B2F4;
    }
L_0880B2F4:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32084));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B304u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 305u, 0x0889D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0880B304u) goto L_0880B304;
    return;
L_0880B304:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_0880B308;
L_0880B308:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B31C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B340u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0880B340u) goto L_0880B340;
    return;
L_0880B340:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0880B35Cu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B35Cu) goto L_0880B35C;
    return;
L_0880B35C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B37C;
      }
      goto L_0880B364;
    }
L_0880B364:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    ctx.gpr[6] = (2231u << 16u);
      if (branch_taken) {
          goto L_0880B37C;
      }
      goto L_0880B36C;
    }
L_0880B36C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0880B37Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16960));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem) && ctx.pc == 0x0880B37Cu) goto L_0880B37C;
    return;
L_0880B37C:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32084));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B38Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 305u, 0x0889D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0880B38Cu) goto L_0880B38C;
    return;
L_0880B38C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B3A4;
      }
      goto L_0880B394;
    }
L_0880B394:
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B3A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16984));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x0880B3A4u) goto L_0880B3A4;
    return;
L_0880B3A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B3B0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0880B3B0u) goto L_0880B3B0;
    return;
L_0880B3B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B3BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem) && ctx.pc == 0x0880B3BCu) goto L_0880B3BC;
    return;
L_0880B3BC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_0880B3DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B3F8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0880B3F8u) goto L_0880B3F8;
    return;
L_0880B3F8:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880B418;
      }
      goto L_0880B404;
    }
L_0880B404:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B410u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B410u) goto L_0880B410;
    return;
L_0880B410:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B4AC;
      }
      goto L_0880B418;
    }
L_0880B418:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0880B42Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem) && ctx.pc == 0x0880B42Cu) goto L_0880B42C;
    return;
L_0880B42C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[6] = (2231u << 16u);
      if (branch_taken) {
          goto L_0880B44C;
      }
      goto L_0880B43C;
    }
L_0880B43C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0880B44Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17020));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem) && ctx.pc == 0x0880B44Cu) goto L_0880B44C;
    return;
L_0880B44C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880B45Cu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem) && ctx.pc == 0x0880B45Cu) goto L_0880B45C;
    return;
L_0880B45C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B474;
      }
      goto L_0880B464;
    }
L_0880B464:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32072));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B474u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem) && ctx.pc == 0x0880B474u) goto L_0880B474;
    return;
L_0880B474:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32056));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B484u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 622u, 0x089E6F54u>(ctx, &aot_mem) && ctx.pc == 0x0880B484u) goto L_0880B484;
    return;
L_0880B484:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B490u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0880B490u) goto L_0880B490;
    return;
L_0880B490:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B4AC;
      }
      goto L_0880B498;
    }
L_0880B498:
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880B4ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17048));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x0880B4ACu) goto L_0880B4AC;
    return;
L_0880B4AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B4C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B4D8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 478u, 0x08807344u>(ctx, &aot_mem) && ctx.pc == 0x0880B4D8u) goto L_0880B4D8;
    return;
L_0880B4D8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32052));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B4E8u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x0880B4E8u) goto L_0880B4E8;
    return;
L_0880B4E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B4F4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem) && ctx.pc == 0x0880B4F4u) goto L_0880B4F4;
    return;
L_0880B4F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B500u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0880B500u) goto L_0880B500;
    return;
L_0880B500:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B514:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B528u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0880B3DC;
L_0880B528:
    ctx.gpr[31] = (0x0880B530u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B4C0;
L_0880B530:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B544;
      }
      goto L_0880B538;
    }
L_0880B538:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B544u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0880B544u) goto L_0880B544;
    return;
L_0880B544:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B558:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B574u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B574u) goto L_0880B574;
    return;
L_0880B574:
    ctx.gpr[31] = (0x0880B57Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B3DC;
L_0880B57C:
    ctx.gpr[31] = (0x0880B584u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B4C0;
L_0880B584:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B5A4;
      }
      goto L_0880B58C;
    }
L_0880B58C:
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B59Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17100));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x0880B59Cu) goto L_0880B59C;
    return;
L_0880B59C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B5B0;
      }
      goto L_0880B5A4;
    }
L_0880B5A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B5B0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0880B5B0u) goto L_0880B5B0;
    return;
L_0880B5B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B5BCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B5BCu) goto L_0880B5BC;
    return;
L_0880B5BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B5C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B5C8u) goto L_0880B5C8;
    return;
L_0880B5C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0880B600;
      }
      goto L_0880B5D0;
    }
L_0880B5D0:
    ctx.gpr[31] = (0x0880B5D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x0880B5D8u) goto L_0880B5D8;
    return;
L_0880B5D8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880B600;
      }
      goto L_0880B5EC;
    }
L_0880B5EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B5F8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 320u, 0x088067C4u>(ctx, &aot_mem) && ctx.pc == 0x0880B5F8u) goto L_0880B5F8;
    return;
L_0880B5F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B624;
      }
      goto L_0880B600;
    }
L_0880B600:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B60Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 503u, 0x088075C4u>(ctx, &aot_mem) && ctx.pc == 0x0880B60Cu) goto L_0880B60C;
    return;
L_0880B60C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B624;
      }
      goto L_0880B614;
    }
L_0880B614:
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B624u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17148));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x0880B624u) goto L_0880B624;
    return;
L_0880B624:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B638:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B658u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem) && ctx.pc == 0x0880B658u) goto L_0880B658;
    return;
L_0880B658:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B664u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem) && ctx.pc == 0x0880B664u) goto L_0880B664;
    return;
L_0880B664:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0880B674u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 346u, 0x088069B4u>(ctx, &aot_mem) && ctx.pc == 0x0880B674u) goto L_0880B674;
    return;
L_0880B674:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B680u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x0880B680u) goto L_0880B680;
    return;
L_0880B680:
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
L_0880B698:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B6BCu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B6BCu) goto L_0880B6BC;
    return;
L_0880B6BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B6C8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem) && ctx.pc == 0x0880B6C8u) goto L_0880B6C8;
    return;
L_0880B6C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B6D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem) && ctx.pc == 0x0880B6D4u) goto L_0880B6D4;
    return;
L_0880B6D4:
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
L_0880B6EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B710u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B710u) goto L_0880B710;
    return;
L_0880B710:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B71Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem) && ctx.pc == 0x0880B71Cu) goto L_0880B71C;
    return;
L_0880B71C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B728u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem) && ctx.pc == 0x0880B728u) goto L_0880B728;
    return;
L_0880B728:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B734u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem) && ctx.pc == 0x0880B734u) goto L_0880B734;
    return;
L_0880B734:
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
L_0880B74C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B760u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 531u, 0x08807814u>(ctx, &aot_mem) && ctx.pc == 0x0880B760u) goto L_0880B760;
    return;
L_0880B760:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B770u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x0880B770u) goto L_0880B770;
    return;
L_0880B770:
    ctx.gpr[31] = (0x0880B778u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 530u, 0x08807804u>(ctx, &aot_mem) && ctx.pc == 0x0880B778u) goto L_0880B778;
    return;
L_0880B778:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B788u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x0880B788u) goto L_0880B788;
    return;
L_0880B788:
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B79C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B7B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem) && ctx.pc == 0x0880B7B8u) goto L_0880B7B8;
    return;
L_0880B7B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B7C8u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 532u, 0x08807824u>(ctx, &aot_mem) && ctx.pc == 0x0880B7C8u) goto L_0880B7C8;
    return;
L_0880B7C8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B7DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B7FCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem) && ctx.pc == 0x0880B7FCu) goto L_0880B7FC;
    return;
L_0880B7FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B808u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0880B808u) goto L_0880B808;
    return;
L_0880B808:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B814u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 327u, 0x088068B4u>(ctx, &aot_mem) && ctx.pc == 0x0880B814u) goto L_0880B814;
    return;
L_0880B814:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B820u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x0880B820u) goto L_0880B820;
    return;
L_0880B820:
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
L_0880B838:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B860u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B860u) goto L_0880B860;
    return;
L_0880B860:
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B870u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0880B870u) goto L_0880B870;
    return;
L_0880B870:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B87Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 540u, 0x088078B0u>(ctx, &aot_mem) && ctx.pc == 0x0880B87Cu) goto L_0880B87C;
    return;
L_0880B87C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B88C;
      }
      goto L_0880B884;
    }
L_0880B884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880B898;
      }
      goto L_0880B88C;
    }
L_0880B88C:
    ctx.gpr[31] = (0x0880B894u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem) && ctx.pc == 0x0880B894u) goto L_0880B894;
    return;
L_0880B894:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_0880B898;
L_0880B898:
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
L_0880B8B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0880B8B8;
L_0880B8B8:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B8CCu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B8CCu) goto L_0880B8CC;
    return;
L_0880B8CC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32320));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B8DCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x0880B8DCu) goto L_0880B8DC;
    return;
L_0880B8DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B8E8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem) && ctx.pc == 0x0880B8E8u) goto L_0880B8E8;
    return;
L_0880B8E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B8F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B8F4u) goto L_0880B8F4;
    return;
L_0880B8F4:
    ctx.gpr[31] = (0x0880B8FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem) && ctx.pc == 0x0880B8FCu) goto L_0880B8FC;
    return;
L_0880B8FC:
    ctx.gpr[2] = (0u | 3u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B910:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B934u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x0880B934u) goto L_0880B934;
    return;
L_0880B934:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0880B948u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B948u) goto L_0880B948;
    return;
L_0880B948:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[20])) && ctx.fpr[22] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880B970;
      }
      goto L_0880B95C;
    }
L_0880B95C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B968u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0880B968u) goto L_0880B968;
    return;
L_0880B968:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0880B9C0;
      }
      goto L_0880B970;
    }
L_0880B970:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880B98Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x0880B98Cu) goto L_0880B98C;
    return;
L_0880B98C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0880B9A0u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x0880B9A0u) goto L_0880B9A0;
    return;
L_0880B9A0:
    ctx.gpr[16] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880B9B0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0880B9B0u) goto L_0880B9B0;
    return;
L_0880B9B0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (0u | 0u);
        goto L_0880B9FC;
    }
    goto L_0880B9B8;
L_0880B9B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B9FC;
      }
      goto L_0880B9C0;
    }
L_0880B9C0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32312));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B9D0u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x0880B9D0u) goto L_0880B9D0;
    return;
L_0880B9D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B9DCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem) && ctx.pc == 0x0880B9DCu) goto L_0880B9DC;
    return;
L_0880B9DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B9E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B9E8u) goto L_0880B9E8;
    return;
L_0880B9E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B9F4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x0880B9F4u) goto L_0880B9F4;
    return;
L_0880B9F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_0880BA00;
      }
      goto L_0880B9FC;
    }
L_0880B9FC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0880BA00;
L_0880BA00:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BA1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0880BA38;
      }
      goto L_0880BA30;
    }
L_0880BA30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0880BA50;
      }
      goto L_0880BA38;
    }
L_0880BA38:
    ctx.gpr[31] = (0x0880BA40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem) && ctx.pc == 0x0880BA40u) goto L_0880BA40;
    return;
L_0880BA40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BA4Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BA4Cu) goto L_0880BA4C;
    return;
L_0880BA4C:
    ctx.gpr[2] = (0u | 2u);
    goto L_0880BA50;
L_0880BA50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BA60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880BA80u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BA80u) goto L_0880BA80;
    return;
L_0880BA80:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880BA98u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 284u, 0x0889D588u>(ctx, &aot_mem) && ctx.pc == 0x0880BA98u) goto L_0880BA98;
    return;
L_0880BA98:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880BAACu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 513u, 0x0889E390u>(ctx, &aot_mem) && ctx.pc == 0x0880BAACu) goto L_0880BAAC;
    return;
L_0880BAAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BAB8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0880BA1C;
L_0880BAB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BACC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880BAECu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 284u, 0x0889D588u>(ctx, &aot_mem) && ctx.pc == 0x0880BAECu) goto L_0880BAEC;
    return;
L_0880BAEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BAF8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 470u, 0x0889E124u>(ctx, &aot_mem) && ctx.pc == 0x0880BAF8u) goto L_0880BAF8;
    return;
L_0880BAF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BB04u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0880BA1C;
L_0880BB04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BB14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880BB3Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 284u, 0x0889D588u>(ctx, &aot_mem) && ctx.pc == 0x0880BB3Cu) goto L_0880BB3C;
    return;
L_0880BB3C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0880BB48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x0880BB48u) goto L_0880BB48;
    return;
L_0880BB48:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BB58u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 470u, 0x0889E124u>(ctx, &aot_mem) && ctx.pc == 0x0880BB58u) goto L_0880BB58;
    return;
L_0880BB58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BB68;
      }
      goto L_0880BB60;
    }
L_0880BB60:
    ctx.gpr[31] = (0x0880BB68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 538u, 0x08807890u>(ctx, &aot_mem) && ctx.pc == 0x0880BB68u) goto L_0880BB68;
    return;
L_0880BB68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0880BB78u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem) && ctx.pc == 0x0880BB78u) goto L_0880BB78;
    return;
L_0880BB78:
    ctx.gpr[31] = (0x0880BB80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x0880BB80u) goto L_0880BB80;
    return;
L_0880BB80:
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[17]);
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
L_0880BB9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880BBBCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem) && ctx.pc == 0x0880BBBCu) goto L_0880BBBC;
    return;
L_0880BBBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BBC8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x0880BBC8u) goto L_0880BBC8;
    return;
L_0880BBC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880BC04;
      }
      goto L_0880BBD0;
    }
L_0880BBD0:
    ctx.gpr[6] = (2231u << 16u);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32044));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0880BBECu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17204));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 284u, 0x0889D588u>(ctx, &aot_mem) && ctx.pc == 0x0880BBECu) goto L_0880BBEC;
    return;
L_0880BBEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880BBFCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x0880BBFCu) goto L_0880BBFC;
    return;
L_0880BBFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BC14;
      }
      goto L_0880BC04;
    }
L_0880BC04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BC10u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0880BC10u) goto L_0880BC10;
    return;
L_0880BC10:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_0880BC14;
L_0880BC14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BC28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880BC4Cu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BC4Cu) goto L_0880BC4C;
    return;
L_0880BC4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BC58u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 388u, 0x0889DB90u>(ctx, &aot_mem) && ctx.pc == 0x0880BC58u) goto L_0880BC58;
    return;
L_0880BC58:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0880BC70u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17224));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 265u, 0x0889D420u>(ctx, &aot_mem) && ctx.pc == 0x0880BC70u) goto L_0880BC70;
    return;
L_0880BC70:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0880BC9C;
      }
      goto L_0880BC7C;
    }
L_0880BC7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0880BC8Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x0880BC8Cu) goto L_0880BC8C;
    return;
L_0880BC8C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BC7C;
      }
      goto L_0880BC9C;
    }
L_0880BC9C:
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
L_0880BCB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880BCD0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem) && ctx.pc == 0x0880BCD0u) goto L_0880BCD0;
    return;
L_0880BCD0:
    ctx.gpr[31] = (0x0880BCD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x0880BCD8u) goto L_0880BCD8;
    return;
L_0880BCD8:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0880BCECu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 512u, 0x0880768Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BCECu) goto L_0880BCEC;
    return;
L_0880BCEC:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x0880BCF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x0880BCF8u) goto L_0880BCF8;
    return;
L_0880BCF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BD04u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BD04u) goto L_0880BD04;
    return;
L_0880BD04:
    ctx.gpr[31] = (0x0880BD0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x0880BD0Cu) goto L_0880BD0C;
    return;
L_0880BD0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BD1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880BD34u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem) && ctx.pc == 0x0880BD34u) goto L_0880BD34;
    return;
L_0880BD34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BD40u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0880BD40u) goto L_0880BD40;
    return;
L_0880BD40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BD4Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BD4Cu) goto L_0880BD4C;
    return;
L_0880BD4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0880BD60u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 512u, 0x0880768Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BD60u) goto L_0880BD60;
    return;
L_0880BD60:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x0880BD6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x0880BD6Cu) goto L_0880BD6C;
    return;
L_0880BD6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BD78u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 320u, 0x088067C4u>(ctx, &aot_mem) && ctx.pc == 0x0880BD78u) goto L_0880BD78;
    return;
L_0880BD78:
    ctx.gpr[31] = (0x0880BD80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x0880BD80u) goto L_0880BD80;
    return;
L_0880BD80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BD90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880BDB4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem) && ctx.pc == 0x0880BDB4u) goto L_0880BDB4;
    return;
L_0880BDB4:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32040));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BDC4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 317u, 0x0889D76Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BDC4u) goto L_0880BDC4;
    return;
L_0880BDC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880BE00;
      }
      goto L_0880BDCC;
    }
L_0880BDCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BDD8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0880BDD8u) goto L_0880BDD8;
    return;
L_0880BDD8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BE8C;
      }
      goto L_0880BDE8;
    }
L_0880BDE8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(17520)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BE00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880BF2C;
      }
      goto L_0880BE08;
    }
L_0880BE08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BE14u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BE14u) goto L_0880BE14;
    return;
L_0880BE14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BE20u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x0880BE20u) goto L_0880BE20;
    return;
L_0880BE20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880BF2C;
      }
      goto L_0880BE28;
    }
L_0880BE28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BE34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BE34u) goto L_0880BE34;
    return;
L_0880BE34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880BF2C;
      }
      goto L_0880BE3C;
    }
L_0880BE3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BE48u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x0880BE48u) goto L_0880BE48;
    return;
L_0880BE48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32020));
      if (branch_taken) {
          goto L_0880BE58;
      }
      goto L_0880BE50;
    }
L_0880BE50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32028));
      if (branch_taken) {
          goto L_0880BE58;
      }
      goto L_0880BE58;
    }
L_0880BE58:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0880BE64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x0880BE64u) goto L_0880BE64;
    return;
L_0880BE64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880BF2C;
      }
      goto L_0880BE6C;
    }
L_0880BE6C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32012));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BE7Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 412u, 0x08806D08u>(ctx, &aot_mem) && ctx.pc == 0x0880BE7Cu) goto L_0880BE7C;
    return;
L_0880BE7C:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0880BE8Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x0880BE8Cu) goto L_0880BE8C;
    return;
L_0880BE8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BE98u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x0880BE98u) goto L_0880BE98;
    return;
L_0880BE98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880BF2C;
      }
      goto L_0880BEA0;
    }
L_0880BEA0:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32000));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BEB0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 412u, 0x08806D08u>(ctx, &aot_mem) && ctx.pc == 0x0880BEB0u) goto L_0880BEB0;
    return;
L_0880BEB0:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0880BEC0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x0880BEC0u) goto L_0880BEC0;
    return;
L_0880BEC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BE8C;
      }
      goto L_0880BEC8;
    }
L_0880BEC8:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-31984));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BED8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 397u, 0x08806C5Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BED8u) goto L_0880BED8;
    return;
L_0880BED8:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0880BEE8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x0880BEE8u) goto L_0880BEE8;
    return;
L_0880BEE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BE8C;
      }
      goto L_0880BEF0;
    }
L_0880BEF0:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-31968));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BF00u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 407u, 0x08806CC8u>(ctx, &aot_mem) && ctx.pc == 0x0880BF00u) goto L_0880BF00;
    return;
L_0880BF00:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0880BF10u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x0880BF10u) goto L_0880BF10;
    return;
L_0880BF10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BE8C;
      }
      goto L_0880BF18;
    }
L_0880BF18:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-31956));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BF28u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x0880BF28u) goto L_0880BF28;
    return;
L_0880BF28:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_0880BF2C;
L_0880BF2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BF44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880BF68u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0880BF68u) goto L_0880BF68;
    return;
L_0880BF68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BF74u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 555u, 0x088079D0u>(ctx, &aot_mem) && ctx.pc == 0x0880BF74u) goto L_0880BF74;
    return;
L_0880BF74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BF80u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x0880BF80u) goto L_0880BF80;
    return;
L_0880BF80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BFD0;
      }
      goto L_0880BF88;
    }
L_0880BF88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BF94u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0880BF94u) goto L_0880BF94;
    return;
L_0880BF94:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0880BFD8;
      }
      goto L_0880BF9C;
    }
L_0880BF9C:
    ctx.gpr[31] = (0x0880BFA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x0880BFA4u) goto L_0880BFA4;
    return;
L_0880BFA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BFB0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BFB0u) goto L_0880BFB0;
    return;
L_0880BFB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BFBCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x0880BFBCu) goto L_0880BFBC;
    return;
L_0880BFBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BFC8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem) && ctx.pc == 0x0880BFC8u) goto L_0880BFC8;
    return;
L_0880BFC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 6u, 0x0880C03Cu>(ctx, &aot_mem); return;
      }
      goto L_0880BFD0;
    }
L_0880BFD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 8u, 0x0880C04Cu>(ctx, &aot_mem); return;
      }
      goto L_0880BFD8;
    }
L_0880BFD8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BFE8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 466u, 0x08807294u>(ctx, &aot_mem) && ctx.pc == 0x0880BFE8u) goto L_0880BFE8;
    return;
L_0880BFE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 3u, 0x0880C018u>(ctx, &aot_mem); return;
      }
      goto L_0880BFF0;
    }
L_0880BFF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BFFCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem) && ctx.pc == 0x0880BFFCu) goto L_0880BFFC;
    return;
L_0880BFFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x0880C000u; return;
}

void recomp_unit_0001(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0001_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_1(Runtime &runtime) {
    runtime.register_generated_unit(1u, 0x08808000u, 16384u, &recomp_unit_0001, &recomp_unit_0001_entry);
    runtime.register_function(0x08808000u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808010u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808038u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808044u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808054u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880805Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808060u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880807Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808084u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808104u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808110u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880812Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808140u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808160u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880816Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808188u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880819Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808214u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808220u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808224u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808250u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808270u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808300u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808328u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808340u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808348u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880837Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088083A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088083C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088083D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088083ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808400u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808428u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808434u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808444u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808464u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880847Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808520u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880852Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880853Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880855Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808574u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880859Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808618u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808624u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808634u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808654u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880866Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808694u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808710u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880871Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880872Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880874Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808764u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880878Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808798u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088087A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088087C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088087E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808808u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808814u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808824u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808844u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880885Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808894u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808914u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880892Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808934u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808968u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808990u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088089C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088089CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088089E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A10u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A30u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A58u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A64u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A74u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A94u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808AA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808AB8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808AD8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808AE4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B00u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B40u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B60u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B74u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B9Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808BA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808BB8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808BD8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808BF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C18u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C24u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C54u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C6Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C94u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808CA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808CB0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808CD0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808CE8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D18u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D24u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D3Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D68u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D88u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808DB0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808DBCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808DF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E08u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E38u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E44u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E5Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E88u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808EA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808EC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808ED4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808EF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F2Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F38u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F54u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F58u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F84u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808FA4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808FB0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808FC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808FCCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808FE4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809004u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809010u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809024u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880902Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809034u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809048u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809094u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809100u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809114u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809144u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880914Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809158u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809160u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809174u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880917Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809184u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809198u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088091A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088091A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088091B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088091ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088091F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088091FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809210u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809218u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880922Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809234u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880924Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809254u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809260u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809268u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880927Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809280u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809288u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088092B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088092CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088092D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088092E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088092F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809300u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880931Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880932Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880933Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880934Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809374u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809384u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088093ACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088093D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088093E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088093ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809400u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809408u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809418u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809424u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809434u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809444u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880944Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809454u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809460u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809474u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809490u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809498u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088094A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088094B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088094C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088094D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088094E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088094E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088094F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809508u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809524u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809534u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880954Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880955Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809568u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809574u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809584u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809588u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809600u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880962Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809634u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809640u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809648u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809660u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809668u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809678u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809680u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809694u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880969Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809708u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809710u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809720u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809728u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880973Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809744u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809750u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809758u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809764u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880976Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809774u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880977Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809784u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880978Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088097A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088097BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088097D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088097E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088097ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088097F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088097F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809804u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809808u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880981Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809824u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880982Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809834u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880983Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809844u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880984Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809870u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880988Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088098BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088098C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088098D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088098DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088098F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088098F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809904u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880990Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809914u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880991Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809928u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809940u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809958u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880996Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809984u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809994u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088099A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088099A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088099B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088099D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088099E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088099F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088099F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A0Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A20u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A28u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A30u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A3Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A44u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A64u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A78u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A84u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A98u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809AA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809AACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809ABCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809AD0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809AD8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809AF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B18u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B20u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B24u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B44u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B84u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B98u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BA4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BB0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BB8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BCCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BD8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BE0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BE4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BF4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C0Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C20u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C28u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C38u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C40u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C68u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C74u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C84u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C94u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C9Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809CC4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809CCCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809CD4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809CF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D24u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D28u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D58u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D64u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D78u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D88u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D94u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809DBCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809DECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809DFCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E0Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E18u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E2Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E44u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E54u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E5Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E64u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E74u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E94u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E98u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EBCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809ED0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EE0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EE8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EF8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F10u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F18u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F2Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F3Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F54u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F5Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F6Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F84u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FBCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FD0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FD8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A008u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A010u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A020u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A030u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A034u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A040u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A050u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A060u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A068u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A070u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A078u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A080u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A090u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A098u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A0C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A0CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A0E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A104u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A10Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A118u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A120u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A124u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A12Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A138u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A154u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A164u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A16Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A174u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A198u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A1A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A1C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A1C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A1F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A214u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A244u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A25Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A264u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A26Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A274u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A280u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A288u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A29Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A2A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A2BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A2CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A2DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A2E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A2F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A2FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A308u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A310u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A318u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A320u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A324u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A330u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A344u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A350u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A368u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A374u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A380u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A384u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A390u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A3A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A3B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A3B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A3BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A3C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A3D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A3DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A3E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A3ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A3F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A3F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A400u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A41Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A438u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A454u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A458u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A464u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A468u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A47Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A484u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A48Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A494u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A49Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A4B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A4E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A4F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A508u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A51Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A530u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A53Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A548u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A570u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A57Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A584u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A594u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A5ACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A5B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A5C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A5C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A5E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A5F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A5FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A610u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A624u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A640u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A648u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A674u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A680u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A69Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A704u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A728u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A738u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A740u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A748u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A750u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A760u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A768u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A770u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A774u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A788u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A7C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8ACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A910u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A920u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A930u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A93Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A954u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A968u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A970u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A97Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A988u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A994u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A9A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A9ACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A9B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A9CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A9D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A9DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A9F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A9F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA00u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA18u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA24u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA38u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA3Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA50u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA58u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA60u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA68u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA90u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AAA4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AAB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AABCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AAC4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AAD4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AAE0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AAE8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB0Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB40u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB50u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB78u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB84u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABCCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABDCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABE8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABF8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC00u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC08u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC0Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC30u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC54u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC60u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC6Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC78u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC84u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC90u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC9Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACC4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD20u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD60u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD94u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD9Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADB8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADD0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADF8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AE08u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AE20u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AE3Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AE40u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AE7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AE88u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AE90u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AEACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AEB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AEC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AEF4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF0Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF9Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AFA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AFACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AFB8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AFC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AFD4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AFE0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AFF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AFF8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B008u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B010u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B01Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B024u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B030u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B03Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B04Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B05Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B060u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B084u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B104u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B114u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B120u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B12Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B144u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B148u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B158u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B164u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B18Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B190u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B208u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B22Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B240u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B24Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B254u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B25Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B268u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B270u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B27Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B288u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B294u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B29Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B304u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B308u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B31Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B340u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B35Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B364u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B36Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B37Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B38Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B394u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B404u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B410u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B418u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B42Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B43Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B44Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B45Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B464u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B474u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B484u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B490u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B498u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4ACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B500u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B514u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B528u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B530u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B538u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B544u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B558u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B574u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B57Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B584u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B58Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B59Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B600u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B60Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B614u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B624u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B638u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B658u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B664u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B674u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B680u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B698u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B710u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B71Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B728u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B734u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B74Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B760u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B770u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B778u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B788u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B79Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B808u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B814u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B820u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B838u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B860u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B870u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B87Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B884u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B88Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B894u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B898u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B8B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B8B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B8CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B8DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B8E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B8F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B8FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B910u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B934u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B948u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B95Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B968u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B970u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B98Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA00u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA30u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA38u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA40u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA50u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA60u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA98u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BAACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BAB8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BACCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BAECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BAF8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BB04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BB14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BB3Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BB48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BB58u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BB60u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BB68u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BB78u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BB80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BB9Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BBBCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BBC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BBD0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BBECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BBFCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC10u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC28u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC58u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC9Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCB8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCD0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCD8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCF8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD0Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD40u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD60u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD6Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD78u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD90u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BDB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BDC4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BDCCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BDD8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BDE8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE00u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE08u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE20u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE28u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE3Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE50u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE58u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE64u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE6Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE98u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BEA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BEB0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BEC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BEC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BED8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BEE8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BEF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF00u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF10u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF18u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF28u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF2Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF44u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF68u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF74u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF88u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF94u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF9Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFA4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFB0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFBCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFD0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFD8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFE8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFFCu, &recomp_unit_0001, "recomp_unit_0001");
}
} // namespace psprecomp
