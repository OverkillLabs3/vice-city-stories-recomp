#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0070[4095] = {
    1, 0, 0, 0, 0, 0, 2, 3, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8,
    0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0, 0, 21, 0, 22, 0, 23, 0, 24, 0,
    25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 32, 33, 0, 34, 0, 0, 0, 35, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 38, 0, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0,
    45, 0, 0, 0, 46, 47, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66,
    0, 0, 0, 0, 67, 0, 0, 0, 68, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0,
    0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0,
    0, 98, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 109, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 120, 0, 121,
    0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0,
    0, 0, 129, 130, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0,
    138, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 150, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0,
    0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0, 168,
    0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 173, 0, 174, 0, 0, 175, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 178, 0, 179, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0,
    183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 0, 0, 192, 0, 193, 0, 0,
    194, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 0, 202, 0, 0, 203, 204, 0, 0,
    205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0,
    216, 0, 217, 0, 218, 0, 219, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227,
    0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0,
    0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 249,
    0, 0, 0, 250, 0, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268,
    0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 0, 283,
    0, 0, 284, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294,
    0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 306, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0,
    310, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0,
    0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 326, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 335, 0, 0, 336, 0, 0, 0,
    337, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 0,
    350, 0, 351, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 355, 0, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 0, 360, 0,
    0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 382, 0, 383, 0, 0, 0, 0, 384, 0, 0, 385,
    0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 396, 0, 0, 0, 397, 398, 0, 0,
    0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 407, 0, 408, 0, 0, 0, 0, 409, 0, 0, 410, 0,
    0, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 421, 0, 0, 0, 422, 423, 0, 0, 0,
    0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0,
    0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 0,
    0, 433, 0, 434, 0, 0, 435, 0, 436, 0, 0, 437, 0, 438, 0, 0, 439, 0, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 443, 0, 444,
    0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0,
    449, 0, 450, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0,
    459, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 468, 0, 0,
    0, 0, 469, 0, 0, 470, 0, 471, 0, 472, 0, 0, 0, 0, 473, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 478, 479, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0,
    0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 0, 0, 0, 493, 0, 494,
    0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0,
    499, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 505, 506, 0, 0, 0, 507, 0, 0, 0, 508, 0, 509,
    0, 510, 0, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 513, 0, 514, 0, 515, 0, 0, 516, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 519,
    0, 0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 523, 524, 0, 525, 0, 0, 526, 0, 527, 0, 0, 528, 529, 0, 0, 0, 530, 0, 531, 0, 532,
    0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 536, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0,
    539, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 542, 0, 543, 0, 0, 544, 0, 0, 0, 545, 0, 546, 0, 0, 547, 0, 0, 548,
    0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 551, 0, 0, 0, 552, 0, 0, 553, 0, 554, 0, 555, 0, 556, 0, 557, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0,
    561, 0, 0, 562, 0, 563, 0, 564, 565, 0, 566, 0, 567, 0, 568, 0, 0, 0, 569, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0,
    572, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0,
    578, 0, 579, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 583, 0, 584, 0, 585, 0, 0, 0, 586, 0, 587, 588, 0,
    0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 602, 603, 604, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 605, 0, 0, 0, 606, 0, 607, 0, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 0, 0, 611, 0, 0, 612, 0, 0, 613,
    0, 0, 0, 614, 0, 0, 615, 0, 0, 616, 0, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 620, 0, 621, 0, 622, 0, 0, 0, 0, 623, 0,
    0, 624, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 630,
    0, 0, 0, 631, 0, 632, 0, 0, 633, 0, 634, 0, 635, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 640, 0, 641,
    0, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 646, 0, 0, 0, 647, 0, 0, 648, 0, 649, 0,
    650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0,
    0, 0, 655, 656, 0, 0, 657, 0, 658, 0, 0, 0, 0, 659, 0, 660, 0, 661, 0, 662, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 665,
    0, 666, 0, 667, 0, 668, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 673, 0, 0, 0, 674, 0, 0,
    0, 675, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 678, 0, 679, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 682, 0, 683, 0,
    0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 0, 0, 0, 693, 0, 0, 0,
    694, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 0, 697, 0, 698, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0,
    0, 702, 0, 0, 0, 703, 0, 704, 0, 705, 0, 0, 0, 0, 0, 706, 707, 0, 708, 0, 0, 0, 0, 0, 709, 710, 0, 0, 0, 0, 711, 712,
    0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 717, 0, 718, 0, 719, 0, 0, 720,
    0, 0, 0, 721, 0, 0, 0, 722, 0, 723, 0, 724, 0, 725, 0, 726, 0, 0, 0, 0, 727, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 0,
    730, 0, 0, 731, 0, 732, 733, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0,
    737, 0, 0, 738, 0, 0, 0, 739, 0, 0, 740, 0, 741, 0, 742, 0, 0, 743, 0, 744, 0, 745, 0, 0, 746, 0, 747, 0, 0, 0, 0, 748,
    0, 0, 749, 0, 750, 0, 0, 751, 0, 752, 0, 753, 0, 0, 754, 0, 755, 0, 0, 0, 756, 0, 0, 757, 0, 0, 0, 0, 0, 758, 759, 0,
    760, 0, 0, 0, 761, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0, 0, 0, 764, 0, 765, 0, 766, 0, 767, 0, 768, 0, 0, 0, 0, 0, 769,
    770, 0, 771, 0, 0, 772, 0, 0, 0, 773, 0, 774, 0, 775, 0, 776, 0, 0, 777, 0, 0, 778, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0,
    0, 781, 0, 0, 0, 782, 0, 783, 0, 0, 784, 0, 785, 0, 786, 787, 0, 0, 0, 788, 0, 0, 789, 0, 790, 0, 791, 0, 792, 0, 793, 0,
    0, 0, 0, 0, 0, 794, 0, 795, 0, 0, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0, 0, 798, 0, 799, 0, 0, 0, 800, 0, 0,
    0, 0, 0, 0, 801, 0, 802, 0, 0, 0, 0, 0, 0, 803, 804, 0, 805, 0, 0, 0, 0, 0, 0, 806, 0, 807, 0, 808, 0, 0, 809, 0,
    0, 0, 810, 0, 0, 811, 0, 0, 0, 0, 812, 813, 0, 814, 0, 0, 0, 0, 815, 816, 0, 817, 0, 0, 0, 0, 818, 819, 0, 820, 0, 0,
    821, 0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 824, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0,
    0, 827, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 829, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0,
    0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 834,
    0, 835, 0, 0, 0, 836, 837, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 839, 0, 0, 0, 840, 0, 0, 0, 841, 0, 0, 842,
    0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 845, 0, 846, 0, 0, 0, 0, 847, 0, 848, 0, 0, 849, 0, 0, 0, 0, 0,
    0, 850, 0, 851, 0, 0, 852, 0, 0, 0, 853, 854, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 857, 0, 0, 0, 858,
    0, 859, 0, 0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 861, 0, 862, 0, 863, 0, 864, 0, 865, 0, 0, 0, 0, 0, 866, 0, 0, 0, 867,
    0, 868, 0, 869, 0, 0, 0, 870, 0, 0, 0, 871, 0, 872, 0, 0, 873, 0, 0, 0, 0, 0, 874, 0, 0, 0, 0, 0, 875, 0, 876,
};
void recomp_unit_0070_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0891C000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0070[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0891C000;
    case 2u: goto L_0891C018;
    case 3u: goto L_0891C01C;
    case 4u: goto L_0891C024;
    case 5u: goto L_0891C038;
    case 6u: goto L_0891C04C;
    case 7u: goto L_0891C06C;
    case 8u: goto L_0891C07C;
    case 9u: goto L_0891C084;
    case 10u: goto L_0891C094;
    case 11u: goto L_0891C0AC;
    case 12u: goto L_0891C0B4;
    case 13u: goto L_0891C0CC;
    case 14u: goto L_0891C0E8;
    case 15u: goto L_0891C128;
    case 16u: goto L_0891C130;
    case 17u: goto L_0891C138;
    case 18u: goto L_0891C140;
    case 19u: goto L_0891C148;
    case 20u: goto L_0891C150;
    case 21u: goto L_0891C160;
    case 22u: goto L_0891C168;
    case 23u: goto L_0891C170;
    case 24u: goto L_0891C178;
    case 25u: goto L_0891C180;
    case 26u: goto L_0891C18C;
    case 27u: goto L_0891C198;
    case 28u: goto L_0891C1A8;
    case 29u: goto L_0891C1B8;
    case 30u: goto L_0891C1C4;
    case 31u: goto L_0891C1D4;
    case 32u: goto L_0891C1DC;
    case 33u: goto L_0891C1E0;
    case 34u: goto L_0891C1E8;
    case 35u: goto L_0891C1F8;
    case 36u: goto L_0891C210;
    case 37u: goto L_0891C228;
    case 38u: goto L_0891C22C;
    case 39u: goto L_0891C238;
    case 40u: goto L_0891C24C;
    case 41u: goto L_0891C254;
    case 42u: goto L_0891C25C;
    case 43u: goto L_0891C264;
    case 44u: goto L_0891C274;
    case 45u: goto L_0891C280;
    case 46u: goto L_0891C290;
    case 47u: goto L_0891C294;
    case 48u: goto L_0891C29C;
    case 49u: goto L_0891C2AC;
    case 50u: goto L_0891C2B4;
    case 51u: goto L_0891C2C4;
    case 52u: goto L_0891C2CC;
    case 53u: goto L_0891C2E4;
    case 54u: goto L_0891C2F0;
    case 55u: goto L_0891C2FC;
    case 56u: goto L_0891C308;
    case 57u: goto L_0891C33C;
    case 58u: goto L_0891C348;
    case 59u: goto L_0891C354;
    case 60u: goto L_0891C37C;
    case 61u: goto L_0891C380;
    case 62u: goto L_0891C3A8;
    case 63u: goto L_0891C3B8;
    case 64u: goto L_0891C3C4;
    case 65u: goto L_0891C3F0;
    case 66u: goto L_0891C3FC;
    case 67u: goto L_0891C410;
    case 68u: goto L_0891C420;
    case 69u: goto L_0891C424;
    case 70u: goto L_0891C44C;
    case 71u: goto L_0891C484;
    case 72u: goto L_0891C494;
    case 73u: goto L_0891C49C;
    case 74u: goto L_0891C4A4;
    case 75u: goto L_0891C4C0;
    case 76u: goto L_0891C4D4;
    case 77u: goto L_0891C4DC;
    case 78u: goto L_0891C4EC;
    case 79u: goto L_0891C500;
    case 80u: goto L_0891C51C;
    case 81u: goto L_0891C528;
    case 82u: goto L_0891C530;
    case 83u: goto L_0891C538;
    case 84u: goto L_0891C548;
    case 85u: goto L_0891C550;
    case 86u: goto L_0891C564;
    case 87u: goto L_0891C56C;
    case 88u: goto L_0891C574;
    case 89u: goto L_0891C588;
    case 90u: goto L_0891C594;
    case 91u: goto L_0891C5AC;
    case 92u: goto L_0891C5B8;
    case 93u: goto L_0891C5C0;
    case 94u: goto L_0891C5CC;
    case 95u: goto L_0891C5DC;
    case 96u: goto L_0891C5E8;
    case 97u: goto L_0891C5F8;
    case 98u: goto L_0891C604;
    case 99u: goto L_0891C608;
    case 100u: goto L_0891C610;
    case 101u: goto L_0891C630;
    case 102u: goto L_0891C644;
    case 103u: goto L_0891C66C;
    case 104u: goto L_0891C6B8;
    case 105u: goto L_0891C6C0;
    case 106u: goto L_0891C6D8;
    case 107u: goto L_0891C6E0;
    case 108u: goto L_0891C700;
    case 109u: goto L_0891C708;
    case 110u: goto L_0891C710;
    case 111u: goto L_0891C71C;
    case 112u: goto L_0891C740;
    case 113u: goto L_0891C748;
    case 114u: goto L_0891C79C;
    case 115u: goto L_0891C7A8;
    case 116u: goto L_0891C7B8;
    case 117u: goto L_0891C7C4;
    case 118u: goto L_0891C7D4;
    case 119u: goto L_0891C7E0;
    case 120u: goto L_0891C7F4;
    case 121u: goto L_0891C7FC;
    case 122u: goto L_0891C810;
    case 123u: goto L_0891C81C;
    case 124u: goto L_0891C82C;
    case 125u: goto L_0891C844;
    case 126u: goto L_0891C850;
    case 127u: goto L_0891C868;
    case 128u: goto L_0891C870;
    case 129u: goto L_0891C888;
    case 130u: goto L_0891C88C;
    case 131u: goto L_0891C898;
    case 132u: goto L_0891C8A0;
    case 133u: goto L_0891C8B0;
    case 134u: goto L_0891C8B8;
    case 135u: goto L_0891C8E0;
    case 136u: goto L_0891C8F0;
    case 137u: goto L_0891C8F8;
    case 138u: goto L_0891C900;
    case 139u: goto L_0891C904;
    case 140u: goto L_0891C930;
    case 141u: goto L_0891C944;
    case 142u: goto L_0891C95C;
    case 143u: goto L_0891C974;
    case 144u: goto L_0891C998;
    case 145u: goto L_0891C9A4;
    case 146u: goto L_0891C9AC;
    case 147u: goto L_0891C9C4;
    case 148u: goto L_0891C9CC;
    case 149u: goto L_0891C9E4;
    case 150u: goto L_0891C9E8;
    case 151u: goto L_0891C9F4;
    case 152u: goto L_0891CA20;
    case 153u: goto L_0891CA74;
    case 154u: goto L_0891CA84;
    case 155u: goto L_0891CA8C;
    case 156u: goto L_0891CA94;
    case 157u: goto L_0891CA9C;
    case 158u: goto L_0891CAA4;
    case 159u: goto L_0891CAAC;
    case 160u: goto L_0891CAB4;
    case 161u: goto L_0891CABC;
    case 162u: goto L_0891CAC4;
    case 163u: goto L_0891CACC;
    case 164u: goto L_0891CAD8;
    case 165u: goto L_0891CAE0;
    case 166u: goto L_0891CAE8;
    case 167u: goto L_0891CAF4;
    case 168u: goto L_0891CAFC;
    case 169u: goto L_0891CB04;
    case 170u: goto L_0891CB14;
    case 171u: goto L_0891CB24;
    case 172u: goto L_0891CB60;
    case 173u: goto L_0891CB64;
    case 174u: goto L_0891CB6C;
    case 175u: goto L_0891CB78;
    case 176u: goto L_0891CB88;
    case 177u: goto L_0891CBC4;
    case 178u: goto L_0891CBC8;
    case 179u: goto L_0891CBD0;
    case 180u: goto L_0891CBD8;
    case 181u: goto L_0891CBE8;
    case 182u: goto L_0891CBF0;
    case 183u: goto L_0891CC00;
    case 184u: goto L_0891CC0C;
    case 185u: goto L_0891CC18;
    case 186u: goto L_0891CC24;
    case 187u: goto L_0891CC30;
    case 188u: goto L_0891CC38;
    case 189u: goto L_0891CC44;
    case 190u: goto L_0891CC50;
    case 191u: goto L_0891CC58;
    case 192u: goto L_0891CC6C;
    case 193u: goto L_0891CC74;
    case 194u: goto L_0891CC80;
    case 195u: goto L_0891CC88;
    case 196u: goto L_0891CC98;
    case 197u: goto L_0891CCA8;
    case 198u: goto L_0891CCB4;
    case 199u: goto L_0891CCC8;
    case 200u: goto L_0891CCD0;
    case 201u: goto L_0891CCD8;
    case 202u: goto L_0891CCE4;
    case 203u: goto L_0891CCF0;
    case 204u: goto L_0891CCF4;
    case 205u: goto L_0891CD00;
    case 206u: goto L_0891CD08;
    case 207u: goto L_0891CD10;
    case 208u: goto L_0891CD18;
    case 209u: goto L_0891CD20;
    case 210u: goto L_0891CD28;
    case 211u: goto L_0891CD30;
    case 212u: goto L_0891CD38;
    case 213u: goto L_0891CD54;
    case 214u: goto L_0891CD5C;
    case 215u: goto L_0891CD78;
    case 216u: goto L_0891CD80;
    case 217u: goto L_0891CD88;
    case 218u: goto L_0891CD90;
    case 219u: goto L_0891CD98;
    case 220u: goto L_0891CD9C;
    case 221u: goto L_0891CDCC;
    case 222u: goto L_0891CE08;
    case 223u: goto L_0891CE1C;
    case 224u: goto L_0891CE30;
    case 225u: goto L_0891CE40;
    case 226u: goto L_0891CE50;
    case 227u: goto L_0891CE7C;
    case 228u: goto L_0891CE88;
    case 229u: goto L_0891CE9C;
    case 230u: goto L_0891CEAC;
    case 231u: goto L_0891CEBC;
    case 232u: goto L_0891CEC4;
    case 233u: goto L_0891CECC;
    case 234u: goto L_0891CED8;
    case 235u: goto L_0891CEE8;
    case 236u: goto L_0891CEF8;
    case 237u: goto L_0891CF08;
    case 238u: goto L_0891CF10;
    case 239u: goto L_0891CF20;
    case 240u: goto L_0891CF30;
    case 241u: goto L_0891CF3C;
    case 242u: goto L_0891CF44;
    case 243u: goto L_0891CF50;
    case 244u: goto L_0891CF74;
    case 245u: goto L_0891CFCC;
    case 246u: goto L_0891CFD8;
    case 247u: goto L_0891CFE0;
    case 248u: goto L_0891CFEC;
    case 249u: goto L_0891CFFC;
    case 250u: goto L_0891D00C;
    case 251u: goto L_0891D01C;
    case 252u: goto L_0891D024;
    case 253u: goto L_0891D034;
    case 254u: goto L_0891D044;
    case 255u: goto L_0891D050;
    case 256u: goto L_0891D058;
    case 257u: goto L_0891D068;
    case 258u: goto L_0891D078;
    case 259u: goto L_0891D08C;
    case 260u: goto L_0891D0A4;
    case 261u: goto L_0891D0B4;
    case 262u: goto L_0891D0C0;
    case 263u: goto L_0891D0C8;
    case 264u: goto L_0891D0E4;
    case 265u: goto L_0891D0F4;
    case 266u: goto L_0891D144;
    case 267u: goto L_0891D170;
    case 268u: goto L_0891D17C;
    case 269u: goto L_0891D190;
    case 270u: goto L_0891D1A0;
    case 271u: goto L_0891D1A8;
    case 272u: goto L_0891D1B8;
    case 273u: goto L_0891D1D0;
    case 274u: goto L_0891D1E0;
    case 275u: goto L_0891D1F8;
    case 276u: goto L_0891D208;
    case 277u: goto L_0891D210;
    case 278u: goto L_0891D228;
    case 279u: goto L_0891D24C;
    case 280u: goto L_0891D254;
    case 281u: goto L_0891D260;
    case 282u: goto L_0891D26C;
    case 283u: goto L_0891D27C;
    case 284u: goto L_0891D288;
    case 285u: goto L_0891D28C;
    case 286u: goto L_0891D2C4;
    case 287u: goto L_0891D328;
    case 288u: goto L_0891D37C;
    case 289u: goto L_0891D410;
    case 290u: goto L_0891D430;
    case 291u: goto L_0891D438;
    case 292u: goto L_0891D440;
    case 293u: goto L_0891D448;
    case 294u: goto L_0891D47C;
    case 295u: goto L_0891D484;
    case 296u: goto L_0891D4A0;
    case 297u: goto L_0891D4E8;
    case 298u: goto L_0891D514;
    case 299u: goto L_0891D59C;
    case 300u: goto L_0891D5C0;
    case 301u: goto L_0891D630;
    case 302u: goto L_0891D65C;
    case 303u: goto L_0891D670;
    case 304u: goto L_0891D69C;
    case 305u: goto L_0891D6B0;
    case 306u: goto L_0891D6B8;
    case 307u: goto L_0891D6C0;
    case 308u: goto L_0891D6C8;
    case 309u: goto L_0891D6EC;
    case 310u: goto L_0891D700;
    case 311u: goto L_0891D708;
    case 312u: goto L_0891D72C;
    case 313u: goto L_0891D748;
    case 314u: goto L_0891D750;
    case 315u: goto L_0891D758;
    case 316u: goto L_0891D7CC;
    case 317u: goto L_0891D7D4;
    case 318u: goto L_0891D7DC;
    case 319u: goto L_0891D848;
    case 320u: goto L_0891D860;
    case 321u: goto L_0891D86C;
    case 322u: goto L_0891D88C;
    case 323u: goto L_0891D898;
    case 324u: goto L_0891D8A8;
    case 325u: goto L_0891D8D4;
    case 326u: goto L_0891D904;
    case 327u: goto L_0891D908;
    case 328u: goto L_0891D918;
    case 329u: goto L_0891D940;
    case 330u: goto L_0891D950;
    case 331u: goto L_0891D98C;
    case 332u: goto L_0891D9CC;
    case 333u: goto L_0891D9D4;
    case 334u: goto L_0891D9DC;
    case 335u: goto L_0891D9E4;
    case 336u: goto L_0891D9F0;
    case 337u: goto L_0891DA00;
    case 338u: goto L_0891DA08;
    case 339u: goto L_0891DA10;
    case 340u: goto L_0891DA78;
    case 341u: goto L_0891DABC;
    case 342u: goto L_0891DACC;
    case 343u: goto L_0891DB3C;
    case 344u: goto L_0891DB4C;
    case 345u: goto L_0891DB5C;
    case 346u: goto L_0891DBC4;
    case 347u: goto L_0891DBD8;
    case 348u: goto L_0891DBE4;
    case 349u: goto L_0891DBF4;
    case 350u: goto L_0891DC00;
    case 351u: goto L_0891DC08;
    case 352u: goto L_0891DC10;
    case 353u: goto L_0891DC20;
    case 354u: goto L_0891DC30;
    case 355u: goto L_0891DC34;
    case 356u: goto L_0891DC40;
    case 357u: goto L_0891DC50;
    case 358u: goto L_0891DC5C;
    case 359u: goto L_0891DC6C;
    case 360u: goto L_0891DC78;
    case 361u: goto L_0891DC88;
    case 362u: goto L_0891DCC0;
    case 363u: goto L_0891DCCC;
    case 364u: goto L_0891DCDC;
    case 365u: goto L_0891DD00;
    case 366u: goto L_0891DD14;
    case 367u: goto L_0891DD64;
    case 368u: goto L_0891DD70;
    case 369u: goto L_0891DD80;
    case 370u: goto L_0891DDA4;
    case 371u: goto L_0891DDB4;
    case 372u: goto L_0891DDE4;
    case 373u: goto L_0891DDF0;
    case 374u: goto L_0891DE00;
    case 375u: goto L_0891DE48;
    case 376u: goto L_0891DE74;
    case 377u: goto L_0891DF1C;
    case 378u: goto L_0891DF30;
    case 379u: goto L_0891DF8C;
    case 380u: goto L_0891DF98;
    case 381u: goto L_0891DFD0;
    case 382u: goto L_0891DFD4;
    case 383u: goto L_0891DFDC;
    case 384u: goto L_0891DFF0;
    case 385u: goto L_0891DFFC;
    case 386u: goto L_0891E00C;
    case 387u: goto L_0891E01C;
    case 388u: goto L_0891E028;
    case 389u: goto L_0891E040;
    case 390u: goto L_0891E054;
    case 391u: goto L_0891E064;
    case 392u: goto L_0891E0A4;
    case 393u: goto L_0891E0B4;
    case 394u: goto L_0891E0C8;
    case 395u: goto L_0891E0D8;
    case 396u: goto L_0891E0E0;
    case 397u: goto L_0891E0F0;
    case 398u: goto L_0891E0F4;
    case 399u: goto L_0891E114;
    case 400u: goto L_0891E144;
    case 401u: goto L_0891E170;
    case 402u: goto L_0891E218;
    case 403u: goto L_0891E22C;
    case 404u: goto L_0891E288;
    case 405u: goto L_0891E294;
    case 406u: goto L_0891E2CC;
    case 407u: goto L_0891E2D0;
    case 408u: goto L_0891E2D8;
    case 409u: goto L_0891E2EC;
    case 410u: goto L_0891E2F8;
    case 411u: goto L_0891E308;
    case 412u: goto L_0891E318;
    case 413u: goto L_0891E324;
    case 414u: goto L_0891E33C;
    case 415u: goto L_0891E350;
    case 416u: goto L_0891E360;
    case 417u: goto L_0891E3A0;
    case 418u: goto L_0891E3B0;
    case 419u: goto L_0891E3C4;
    case 420u: goto L_0891E3D4;
    case 421u: goto L_0891E3DC;
    case 422u: goto L_0891E3EC;
    case 423u: goto L_0891E3F0;
    case 424u: goto L_0891E410;
    case 425u: goto L_0891E42C;
    case 426u: goto L_0891E43C;
    case 427u: goto L_0891E478;
    case 428u: goto L_0891E48C;
    case 429u: goto L_0891E49C;
    case 430u: goto L_0891E4D8;
    case 431u: goto L_0891E4E4;
    case 432u: goto L_0891E4F0;
    case 433u: goto L_0891E504;
    case 434u: goto L_0891E50C;
    case 435u: goto L_0891E518;
    case 436u: goto L_0891E520;
    case 437u: goto L_0891E52C;
    case 438u: goto L_0891E534;
    case 439u: goto L_0891E540;
    case 440u: goto L_0891E550;
    case 441u: goto L_0891E558;
    case 442u: goto L_0891E568;
    case 443u: goto L_0891E574;
    case 444u: goto L_0891E57C;
    case 445u: goto L_0891E58C;
    case 446u: goto L_0891E5A0;
    case 447u: goto L_0891E5A8;
    case 448u: goto L_0891E5F4;
    case 449u: goto L_0891E600;
    case 450u: goto L_0891E608;
    case 451u: goto L_0891E610;
    case 452u: goto L_0891E624;
    case 453u: goto L_0891E640;
    case 454u: goto L_0891E698;
    case 455u: goto L_0891E6B0;
    case 456u: goto L_0891E6C0;
    case 457u: goto L_0891E6EC;
    case 458u: goto L_0891E6F4;
    case 459u: goto L_0891E700;
    case 460u: goto L_0891E708;
    case 461u: goto L_0891E71C;
    case 462u: goto L_0891E738;
    case 463u: goto L_0891E790;
    case 464u: goto L_0891E7A8;
    case 465u: goto L_0891E7B8;
    case 466u: goto L_0891E7E4;
    case 467u: goto L_0891E7EC;
    case 468u: goto L_0891E7F4;
    case 469u: goto L_0891E808;
    case 470u: goto L_0891E814;
    case 471u: goto L_0891E81C;
    case 472u: goto L_0891E824;
    case 473u: goto L_0891E838;
    case 474u: goto L_0891E840;
    case 475u: goto L_0891E84C;
    case 476u: goto L_0891E858;
    case 477u: goto L_0891E864;
    case 478u: goto L_0891E870;
    case 479u: goto L_0891E874;
    case 480u: goto L_0891E8B4;
    case 481u: goto L_0891E8F8;
    case 482u: goto L_0891E908;
    case 483u: goto L_0891E914;
    case 484u: goto L_0891E920;
    case 485u: goto L_0891E928;
    case 486u: goto L_0891E930;
    case 487u: goto L_0891E938;
    case 488u: goto L_0891E940;
    case 489u: goto L_0891E948;
    case 490u: goto L_0891E950;
    case 491u: goto L_0891E958;
    case 492u: goto L_0891E960;
    case 493u: goto L_0891E974;
    case 494u: goto L_0891E97C;
    case 495u: goto L_0891E9A0;
    case 496u: goto L_0891E9A8;
    case 497u: goto L_0891E9B4;
    case 498u: goto L_0891E9EC;
    case 499u: goto L_0891EA00;
    case 500u: goto L_0891EA10;
    case 501u: goto L_0891EA24;
    case 502u: goto L_0891EA30;
    case 503u: goto L_0891EA3C;
    case 504u: goto L_0891EA48;
    case 505u: goto L_0891EA50;
    case 506u: goto L_0891EA54;
    case 507u: goto L_0891EA64;
    case 508u: goto L_0891EA74;
    case 509u: goto L_0891EA7C;
    case 510u: goto L_0891EA84;
    case 511u: goto L_0891EA9C;
    case 512u: goto L_0891EAA4;
    case 513u: goto L_0891EAB4;
    case 514u: goto L_0891EABC;
    case 515u: goto L_0891EAC4;
    case 516u: goto L_0891EAD0;
    case 517u: goto L_0891EAD8;
    case 518u: goto L_0891EAE8;
    case 519u: goto L_0891EAFC;
    case 520u: goto L_0891EB0C;
    case 521u: goto L_0891EB14;
    case 522u: goto L_0891EB24;
    case 523u: goto L_0891EB2C;
    case 524u: goto L_0891EB30;
    case 525u: goto L_0891EB38;
    case 526u: goto L_0891EB44;
    case 527u: goto L_0891EB4C;
    case 528u: goto L_0891EB58;
    case 529u: goto L_0891EB5C;
    case 530u: goto L_0891EB6C;
    case 531u: goto L_0891EB74;
    case 532u: goto L_0891EB7C;
    case 533u: goto L_0891EB98;
    case 534u: goto L_0891EBBC;
    case 535u: goto L_0891EBC4;
    case 536u: goto L_0891EBD4;
    case 537u: goto L_0891EBDC;
    case 538u: goto L_0891EBE4;
    case 539u: goto L_0891EC00;
    case 540u: goto L_0891EC24;
    case 541u: goto L_0891EC2C;
    case 542u: goto L_0891EC38;
    case 543u: goto L_0891EC40;
    case 544u: goto L_0891EC4C;
    case 545u: goto L_0891EC5C;
    case 546u: goto L_0891EC64;
    case 547u: goto L_0891EC70;
    case 548u: goto L_0891EC7C;
    case 549u: goto L_0891EC88;
    case 550u: goto L_0891ECB8;
    case 551u: goto L_0891ED08;
    case 552u: goto L_0891ED18;
    case 553u: goto L_0891ED24;
    case 554u: goto L_0891ED2C;
    case 555u: goto L_0891ED34;
    case 556u: goto L_0891ED3C;
    case 557u: goto L_0891ED44;
    case 558u: goto L_0891ED4C;
    case 559u: goto L_0891ED5C;
    case 560u: goto L_0891ED74;
    case 561u: goto L_0891ED80;
    case 562u: goto L_0891ED8C;
    case 563u: goto L_0891ED94;
    case 564u: goto L_0891ED9C;
    case 565u: goto L_0891EDA0;
    case 566u: goto L_0891EDA8;
    case 567u: goto L_0891EDB0;
    case 568u: goto L_0891EDB8;
    case 569u: goto L_0891EDC8;
    case 570u: goto L_0891EDD4;
    case 571u: goto L_0891EDDC;
    case 572u: goto L_0891EE00;
    case 573u: goto L_0891EE08;
    case 574u: goto L_0891EE14;
    case 575u: goto L_0891EE4C;
    case 576u: goto L_0891EE60;
    case 577u: goto L_0891EE70;
    case 578u: goto L_0891EE80;
    case 579u: goto L_0891EE88;
    case 580u: goto L_0891EE98;
    case 581u: goto L_0891EEA0;
    case 582u: goto L_0891EEC4;
    case 583u: goto L_0891EECC;
    case 584u: goto L_0891EED4;
    case 585u: goto L_0891EEDC;
    case 586u: goto L_0891EEEC;
    case 587u: goto L_0891EEF4;
    case 588u: goto L_0891EEF8;
    case 589u: goto L_0891EF04;
    case 590u: goto L_0891EF0C;
    case 591u: goto L_0891EF28;
    case 592u: goto L_0891EF38;
    case 593u: goto L_0891EF4C;
    case 594u: goto L_0891EF54;
    case 595u: goto L_0891EF5C;
    case 596u: goto L_0891EF94;
    case 597u: goto L_0891EFA0;
    case 598u: goto L_0891EFA8;
    case 599u: goto L_0891EFB0;
    case 600u: goto L_0891EFC4;
    case 601u: goto L_0891EFD4;
    case 602u: goto L_0891EFDC;
    case 603u: goto L_0891EFE0;
    case 604u: goto L_0891EFE4;
    case 605u: goto L_0891F014;
    case 606u: goto L_0891F024;
    case 607u: goto L_0891F02C;
    case 608u: goto L_0891F03C;
    case 609u: goto L_0891F048;
    case 610u: goto L_0891F054;
    case 611u: goto L_0891F064;
    case 612u: goto L_0891F070;
    case 613u: goto L_0891F07C;
    case 614u: goto L_0891F08C;
    case 615u: goto L_0891F098;
    case 616u: goto L_0891F0A4;
    case 617u: goto L_0891F0B4;
    case 618u: goto L_0891F0C0;
    case 619u: goto L_0891F0CC;
    case 620u: goto L_0891F0D4;
    case 621u: goto L_0891F0DC;
    case 622u: goto L_0891F0E4;
    case 623u: goto L_0891F0F8;
    case 624u: goto L_0891F104;
    case 625u: goto L_0891F10C;
    case 626u: goto L_0891F124;
    case 627u: goto L_0891F134;
    case 628u: goto L_0891F13C;
    case 629u: goto L_0891F158;
    case 630u: goto L_0891F17C;
    case 631u: goto L_0891F18C;
    case 632u: goto L_0891F194;
    case 633u: goto L_0891F1A0;
    case 634u: goto L_0891F1A8;
    case 635u: goto L_0891F1B0;
    case 636u: goto L_0891F1BC;
    case 637u: goto L_0891F1C8;
    case 638u: goto L_0891F1E0;
    case 639u: goto L_0891F1EC;
    case 640u: goto L_0891F1F4;
    case 641u: goto L_0891F1FC;
    case 642u: goto L_0891F208;
    case 643u: goto L_0891F224;
    case 644u: goto L_0891F238;
    case 645u: goto L_0891F24C;
    case 646u: goto L_0891F254;
    case 647u: goto L_0891F264;
    case 648u: goto L_0891F270;
    case 649u: goto L_0891F278;
    case 650u: goto L_0891F280;
    case 651u: goto L_0891F2C4;
    case 652u: goto L_0891F2FC;
    case 653u: goto L_0891F338;
    case 654u: goto L_0891F374;
    case 655u: goto L_0891F388;
    case 656u: goto L_0891F38C;
    case 657u: goto L_0891F398;
    case 658u: goto L_0891F3A0;
    case 659u: goto L_0891F3B4;
    case 660u: goto L_0891F3BC;
    case 661u: goto L_0891F3C4;
    case 662u: goto L_0891F3CC;
    case 663u: goto L_0891F3DC;
    case 664u: goto L_0891F3E4;
    case 665u: goto L_0891F3FC;
    case 666u: goto L_0891F404;
    case 667u: goto L_0891F40C;
    case 668u: goto L_0891F414;
    case 669u: goto L_0891F420;
    case 670u: goto L_0891F430;
    case 671u: goto L_0891F44C;
    case 672u: goto L_0891F458;
    case 673u: goto L_0891F464;
    case 674u: goto L_0891F474;
    case 675u: goto L_0891F484;
    case 676u: goto L_0891F494;
    case 677u: goto L_0891F4A4;
    case 678u: goto L_0891F4B0;
    case 679u: goto L_0891F4B8;
    case 680u: goto L_0891F4C0;
    case 681u: goto L_0891F4E8;
    case 682u: goto L_0891F4F0;
    case 683u: goto L_0891F4F8;
    case 684u: goto L_0891F504;
    case 685u: goto L_0891F518;
    case 686u: goto L_0891F530;
    case 687u: goto L_0891F538;
    case 688u: goto L_0891F540;
    case 689u: goto L_0891F548;
    case 690u: goto L_0891F550;
    case 691u: goto L_0891F558;
    case 692u: goto L_0891F560;
    case 693u: goto L_0891F570;
    case 694u: goto L_0891F580;
    case 695u: goto L_0891F590;
    case 696u: goto L_0891F598;
    case 697u: goto L_0891F5B0;
    case 698u: goto L_0891F5B8;
    case 699u: goto L_0891F5C4;
    case 700u: goto L_0891F5D4;
    case 701u: goto L_0891F5EC;
    case 702u: goto L_0891F604;
    case 703u: goto L_0891F614;
    case 704u: goto L_0891F61C;
    case 705u: goto L_0891F624;
    case 706u: goto L_0891F63C;
    case 707u: goto L_0891F640;
    case 708u: goto L_0891F648;
    case 709u: goto L_0891F660;
    case 710u: goto L_0891F664;
    case 711u: goto L_0891F678;
    case 712u: goto L_0891F67C;
    case 713u: goto L_0891F698;
    case 714u: goto L_0891F6AC;
    case 715u: goto L_0891F6C0;
    case 716u: goto L_0891F6D4;
    case 717u: goto L_0891F6E0;
    case 718u: goto L_0891F6E8;
    case 719u: goto L_0891F6F0;
    case 720u: goto L_0891F6FC;
    case 721u: goto L_0891F70C;
    case 722u: goto L_0891F71C;
    case 723u: goto L_0891F724;
    case 724u: goto L_0891F72C;
    case 725u: goto L_0891F734;
    case 726u: goto L_0891F73C;
    case 727u: goto L_0891F750;
    case 728u: goto L_0891F758;
    case 729u: goto L_0891F760;
    case 730u: goto L_0891F780;
    case 731u: goto L_0891F78C;
    case 732u: goto L_0891F794;
    case 733u: goto L_0891F798;
    case 734u: goto L_0891F7BC;
    case 735u: goto L_0891F7F0;
    case 736u: goto L_0891F7F8;
    case 737u: goto L_0891F800;
    case 738u: goto L_0891F80C;
    case 739u: goto L_0891F81C;
    case 740u: goto L_0891F828;
    case 741u: goto L_0891F830;
    case 742u: goto L_0891F838;
    case 743u: goto L_0891F844;
    case 744u: goto L_0891F84C;
    case 745u: goto L_0891F854;
    case 746u: goto L_0891F860;
    case 747u: goto L_0891F868;
    case 748u: goto L_0891F87C;
    case 749u: goto L_0891F888;
    case 750u: goto L_0891F890;
    case 751u: goto L_0891F89C;
    case 752u: goto L_0891F8A4;
    case 753u: goto L_0891F8AC;
    case 754u: goto L_0891F8B8;
    case 755u: goto L_0891F8C0;
    case 756u: goto L_0891F8D0;
    case 757u: goto L_0891F8DC;
    case 758u: goto L_0891F8F4;
    case 759u: goto L_0891F8F8;
    case 760u: goto L_0891F900;
    case 761u: goto L_0891F910;
    case 762u: goto L_0891F91C;
    case 763u: goto L_0891F934;
    case 764u: goto L_0891F944;
    case 765u: goto L_0891F94C;
    case 766u: goto L_0891F954;
    case 767u: goto L_0891F95C;
    case 768u: goto L_0891F964;
    case 769u: goto L_0891F97C;
    case 770u: goto L_0891F980;
    case 771u: goto L_0891F988;
    case 772u: goto L_0891F994;
    case 773u: goto L_0891F9A4;
    case 774u: goto L_0891F9AC;
    case 775u: goto L_0891F9B4;
    case 776u: goto L_0891F9BC;
    case 777u: goto L_0891F9C8;
    case 778u: goto L_0891F9D4;
    case 779u: goto L_0891F9DC;
    case 780u: goto L_0891F9F4;
    case 781u: goto L_0891FA04;
    case 782u: goto L_0891FA14;
    case 783u: goto L_0891FA1C;
    case 784u: goto L_0891FA28;
    case 785u: goto L_0891FA30;
    case 786u: goto L_0891FA38;
    case 787u: goto L_0891FA3C;
    case 788u: goto L_0891FA4C;
    case 789u: goto L_0891FA58;
    case 790u: goto L_0891FA60;
    case 791u: goto L_0891FA68;
    case 792u: goto L_0891FA70;
    case 793u: goto L_0891FA78;
    case 794u: goto L_0891FA94;
    case 795u: goto L_0891FA9C;
    case 796u: goto L_0891FAB8;
    case 797u: goto L_0891FAC0;
    case 798u: goto L_0891FADC;
    case 799u: goto L_0891FAE4;
    case 800u: goto L_0891FAF4;
    case 801u: goto L_0891FB10;
    case 802u: goto L_0891FB18;
    case 803u: goto L_0891FB34;
    case 804u: goto L_0891FB38;
    case 805u: goto L_0891FB40;
    case 806u: goto L_0891FB5C;
    case 807u: goto L_0891FB64;
    case 808u: goto L_0891FB6C;
    case 809u: goto L_0891FB78;
    case 810u: goto L_0891FB88;
    case 811u: goto L_0891FB94;
    case 812u: goto L_0891FBA8;
    case 813u: goto L_0891FBAC;
    case 814u: goto L_0891FBB4;
    case 815u: goto L_0891FBC8;
    case 816u: goto L_0891FBCC;
    case 817u: goto L_0891FBD4;
    case 818u: goto L_0891FBE8;
    case 819u: goto L_0891FBEC;
    case 820u: goto L_0891FBF4;
    case 821u: goto L_0891FC00;
    case 822u: goto L_0891FC0C;
    case 823u: goto L_0891FC1C;
    case 824u: goto L_0891FC38;
    case 825u: goto L_0891FC44;
    case 826u: goto L_0891FC78;
    case 827u: goto L_0891FC84;
    case 828u: goto L_0891FC94;
    case 829u: goto L_0891FCB0;
    case 830u: goto L_0891FCBC;
    case 831u: goto L_0891FCEC;
    case 832u: goto L_0891FD10;
    case 833u: goto L_0891FD5C;
    case 834u: goto L_0891FD7C;
    case 835u: goto L_0891FD84;
    case 836u: goto L_0891FD94;
    case 837u: goto L_0891FD98;
    case 838u: goto L_0891FDBC;
    case 839u: goto L_0891FDD0;
    case 840u: goto L_0891FDE0;
    case 841u: goto L_0891FDF0;
    case 842u: goto L_0891FDFC;
    case 843u: goto L_0891FE0C;
    case 844u: goto L_0891FE30;
    case 845u: goto L_0891FE38;
    case 846u: goto L_0891FE40;
    case 847u: goto L_0891FE54;
    case 848u: goto L_0891FE5C;
    case 849u: goto L_0891FE68;
    case 850u: goto L_0891FE84;
    case 851u: goto L_0891FE8C;
    case 852u: goto L_0891FE98;
    case 853u: goto L_0891FEA8;
    case 854u: goto L_0891FEAC;
    case 855u: goto L_0891FEB8;
    case 856u: goto L_0891FEE4;
    case 857u: goto L_0891FEEC;
    case 858u: goto L_0891FEFC;
    case 859u: goto L_0891FF04;
    case 860u: goto L_0891FF1C;
    case 861u: goto L_0891FF34;
    case 862u: goto L_0891FF3C;
    case 863u: goto L_0891FF44;
    case 864u: goto L_0891FF4C;
    case 865u: goto L_0891FF54;
    case 866u: goto L_0891FF6C;
    case 867u: goto L_0891FF7C;
    case 868u: goto L_0891FF84;
    case 869u: goto L_0891FF8C;
    case 870u: goto L_0891FF9C;
    case 871u: goto L_0891FFAC;
    case 872u: goto L_0891FFB4;
    case 873u: goto L_0891FFC0;
    case 874u: goto L_0891FFD8;
    case 875u: goto L_0891FFF0;
    case 876u: goto L_0891FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0891C000:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0891C018u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891C018u) goto L_0891C018;
    return;
L_0891C018:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0891C01C;
L_0891C01C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C038;
      }
      goto L_0891C024;
    }
L_0891C024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_0891C038;
L_0891C038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891C0CC;
      }
      goto L_0891C04C;
    }
L_0891C04C:
    ctx.gpr[4] = (18804u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1720)));
    ctx.gpr[4] = (ctx.gpr[4] | 9200u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891C0B4;
      }
      goto L_0891C06C;
    }
L_0891C06C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1720)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0891C07Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(816));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 15u, 0x089F4168u>(ctx, &aot_mem) && ctx.pc == 0x0891C07Cu) goto L_0891C07C;
    return;
L_0891C07C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C0CC;
      }
      goto L_0891C084;
    }
L_0891C084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C0CC;
      }
      goto L_0891C094;
    }
L_0891C094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891C0ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0891C0ACu) goto L_0891C0AC;
    return;
L_0891C0AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C0CC;
      }
      goto L_0891C0B4;
    }
L_0891C0B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891C0CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0891C0CCu) goto L_0891C0CC;
    return;
L_0891C0CC:
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
L_0891C0E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0891C140;
      }
      goto L_0891C128;
    }
L_0891C128:
    ctx.gpr[31] = (0x0891C130u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0891C130u) goto L_0891C130;
    return;
L_0891C130:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C168;
      }
      goto L_0891C138;
    }
L_0891C138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C148;
      }
      goto L_0891C140;
    }
L_0891C140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C424;
      }
      goto L_0891C148;
    }
L_0891C148:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C424;
      }
      goto L_0891C150;
    }
L_0891C150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_0891C424;
      }
      goto L_0891C160;
    }
L_0891C160:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891C424;
      }
      goto L_0891C168;
    }
L_0891C168:
    ctx.gpr[31] = (0x0891C170u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0891C170u) goto L_0891C170;
    return;
L_0891C170:
    ctx.gpr[31] = (0x0891C178u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem) && ctx.pc == 0x0891C178u) goto L_0891C178;
    return;
L_0891C178:
    ctx.gpr[31] = (0x0891C180u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x0891C180u) goto L_0891C180;
    return;
L_0891C180:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891C18Cu);
    ctx.gpr[5] = (0u | 45u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0891C18Cu) goto L_0891C18C;
    return;
L_0891C18C:
    ctx.gpr[4] = (0u | 173u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0891C254;
      }
      goto L_0891C198;
    }
L_0891C198:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891C1A8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891C1A8u) goto L_0891C1A8;
    return;
L_0891C1A8:
    ctx.gpr[4] = (16640u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891C1E0;
      }
      goto L_0891C1B8;
    }
L_0891C1B8:
    ctx.gpr[4] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891C1E0;
      }
      goto L_0891C1C4;
    }
L_0891C1C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891C1D4u);
    ctx.gpr[6] = (0u | 275u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891C1D4u) goto L_0891C1D4;
    return;
L_0891C1D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C1E0;
      }
      goto L_0891C1DC;
    }
L_0891C1DC:
    ctx.gpr[18] = (0u | 28u);
    goto L_0891C1E0;
L_0891C1E0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C210;
      }
      goto L_0891C1E8;
    }
L_0891C1E8:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0891C1F8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x0891C1F8u) goto L_0891C1F8;
    return;
L_0891C1F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891C22C;
      }
      goto L_0891C210;
    }
L_0891C210:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0891C228u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891C228u) goto L_0891C228;
    return;
L_0891C228:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_0891C22C;
L_0891C22C:
    ctx.gpr[4] = (0u | 121u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891C294;
      }
      goto L_0891C238;
    }
L_0891C238:
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0891C24Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x0891C24Cu) goto L_0891C24C;
    return;
L_0891C24C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C294;
      }
      goto L_0891C254;
    }
L_0891C254:
    ctx.gpr[31] = (0x0891C25Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C25Cu) goto L_0891C25C;
    return;
L_0891C25C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C294;
      }
      goto L_0891C264;
    }
L_0891C264:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891C274u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891C274u) goto L_0891C274;
    return;
L_0891C274:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C294;
      }
      goto L_0891C280;
    }
L_0891C280:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891C290u);
    ctx.gpr[6] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891C290u) goto L_0891C290;
    return;
L_0891C290:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_0891C294;
L_0891C294:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0891C2AC;
      }
      goto L_0891C29C;
    }
L_0891C29C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1732), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 4096u);
      if (branch_taken) {
          goto L_0891C420;
      }
      goto L_0891C2AC;
    }
L_0891C2AC:
    ctx.gpr[31] = (0x0891C2B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C2B4u) goto L_0891C2B4;
    return;
L_0891C2B4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 4096u);
      if (branch_taken) {
          goto L_0891C37C;
      }
      goto L_0891C2C4;
    }
L_0891C2C4:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
        goto L_0891C380;
    }
    goto L_0891C2CC;
L_0891C2CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[8] = (17530u << 16u);
    ctx.gpr[7] = (0u | 130u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0891C2F0;
      }
      goto L_0891C2E4;
    }
L_0891C2E4:
    ctx.gpr[7] = (0u | 131u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0891C33C;
      }
      goto L_0891C2F0;
    }
L_0891C2F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0891C308;
      }
      goto L_0891C2FC;
    }
L_0891C2FC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_0891C308;
L_0891C308:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1732), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891C420;
      }
      goto L_0891C33C;
    }
L_0891C33C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0891C354;
      }
      goto L_0891C348;
    }
L_0891C348:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_0891C354;
L_0891C354:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (17402u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1732), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891C420;
      }
      goto L_0891C37C;
    }
L_0891C37C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_0891C380;
L_0891C380:
    ctx.gpr[6] = (16320u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[5] = (ctx.gpr[5] >> 22u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 1000u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C410;
      }
      goto L_0891C3A8;
    }
L_0891C3A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0891C3C4;
      }
      goto L_0891C3B8;
    }
L_0891C3B8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0891C3C4;
L_0891C3C4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_0891C3FC;
      }
      goto L_0891C3F0;
    }
L_0891C3F0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0891C3FC;
L_0891C3FC:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1732), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891C420;
      }
      goto L_0891C410;
    }
L_0891C410:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1732), ctx.gpr[4]);
    goto L_0891C420;
L_0891C420:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[19]);
    goto L_0891C424;
L_0891C424:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C44C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 46u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891C494;
      }
      goto L_0891C484;
    }
L_0891C484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C9F4;
      }
      goto L_0891C494;
    }
L_0891C494:
    ctx.gpr[31] = (0x0891C49Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 655u, 0x08906F34u>(ctx, &aot_mem) && ctx.pc == 0x0891C49Cu) goto L_0891C49C;
    return;
L_0891C49C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C9F4;
      }
      goto L_0891C4A4;
    }
L_0891C4A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (64u << 16u);
      if (branch_taken) {
          goto L_0891C4DC;
      }
      goto L_0891C4C0;
    }
L_0891C4C0:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0891C4D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 563u, 0x088E3DD8u>(ctx, &aot_mem) && ctx.pc == 0x0891C4D4u) goto L_0891C4D4;
    return;
L_0891C4D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C4EC;
      }
      goto L_0891C4DC;
    }
L_0891C4DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C550;
      }
      goto L_0891C4EC;
    }
L_0891C4EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891C51C;
      }
      goto L_0891C500;
    }
L_0891C500:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 173u);
    ctx.gpr[31] = (0x0891C51Cu);
    ctx.gpr[6] = (0u | 0u);
    goto L_0891F338;
L_0891C51C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C548;
      }
      goto L_0891C528;
    }
L_0891C528:
    ctx.gpr[31] = (0x0891C530u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C530u) goto L_0891C530;
    return;
L_0891C530:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C548;
      }
      goto L_0891C538;
    }
L_0891C538:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0891C548u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 173u, 0x08ADC8D4u>(ctx, &aot_mem) && ctx.pc == 0x0891C548u) goto L_0891C548;
    return;
L_0891C548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C9F4;
      }
      goto L_0891C550;
    }
L_0891C550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0891C5AC;
      }
      goto L_0891C564;
    }
L_0891C564:
    ctx.gpr[31] = (0x0891C56Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0891C56Cu) goto L_0891C56C;
    return;
L_0891C56C:
    ctx.gpr[31] = (0x0891C574u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x0891C574u) goto L_0891C574;
    return;
L_0891C574:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20012)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20016)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0891C588u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C588u) goto L_0891C588;
    return;
L_0891C588:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0891C594u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x0891C594u) goto L_0891C594;
    return;
L_0891C594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_0891C5AC;
L_0891C5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0891C5CC;
      }
      goto L_0891C5B8;
    }
L_0891C5B8:
    ctx.gpr[31] = (0x0891C5C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x0891C5C0u) goto L_0891C5C0;
    return;
L_0891C5C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891C5CCu);
    ctx.gpr[5] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0891C5CCu) goto L_0891C5CC;
    return;
L_0891C5CC:
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
    ctx.gpr[31] = (0x0891C5DCu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 717u, 0x08B1FB48u>(ctx, &aot_mem) && ctx.pc == 0x0891C5DCu) goto L_0891C5DC;
    return;
L_0891C5DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2116)));
        goto L_0891C608;
    }
    goto L_0891C5E8;
L_0891C5E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 6u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2116)));
        goto L_0891C608;
    }
    goto L_0891C5F8;
L_0891C5F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891C6C0;
      }
      goto L_0891C604;
    }
L_0891C604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2116)));
    goto L_0891C608;
L_0891C608:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_0891C748;
    }
    goto L_0891C610;
L_0891C610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2116)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_0891C748;
    }
    goto L_0891C630;
L_0891C630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2116)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_0891C748;
    }
    goto L_0891C644;
L_0891C644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] >> 22u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C6C0;
      }
      goto L_0891C66C;
    }
L_0891C66C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2116)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (2236u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-20320));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0891C6B8u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 66u, 0x088B4738u>(ctx, &aot_mem) && ctx.pc == 0x0891C6B8u) goto L_0891C6B8;
    return;
L_0891C6B8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_0891C748;
    }
    goto L_0891C6C0;
L_0891C6C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891C6D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C6D8u) goto L_0891C6D8;
    return;
L_0891C6D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C708;
      }
      goto L_0891C6E0;
    }
L_0891C6E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 43u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0891C700u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x0891C700u) goto L_0891C700;
    return;
L_0891C700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C740;
      }
      goto L_0891C708;
    }
L_0891C708:
    ctx.gpr[31] = (0x0891C710u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0891C710u) goto L_0891C710;
    return;
L_0891C710:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C740;
      }
      goto L_0891C71C;
    }
L_0891C71C:
    ctx.gpr[10] = (17530u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 43u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0891C740u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x0891C740u) goto L_0891C740;
    return;
L_0891C740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C9F4;
      }
      goto L_0891C748;
    }
L_0891C748:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2116), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1025));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (65528u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[18] = (2193u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-14252));
      if (branch_taken) {
          goto L_0891C7A8;
      }
      goto L_0891C79C;
    }
L_0891C79C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(304))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891C7A8;
L_0891C7A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891C7B8u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891C7B8u) goto L_0891C7B8;
    return;
L_0891C7B8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C81C;
      }
      goto L_0891C7C4;
    }
L_0891C7C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891C7D4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891C7D4u) goto L_0891C7D4;
    return;
L_0891C7D4:
    ctx.gpr[4] = (16640u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891C7FC;
      }
      goto L_0891C7E0;
    }
L_0891C7E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891C7F4u);
    ctx.gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891C7F4u) goto L_0891C7F4;
    return;
L_0891C7F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C810;
      }
      goto L_0891C7FC;
    }
L_0891C7FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891C810u);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891C810u) goto L_0891C810;
    return;
L_0891C810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_0891C81C;
L_0891C81C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891C8A0;
      }
      goto L_0891C82C;
    }
L_0891C82C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891C870;
      }
      goto L_0891C844;
    }
L_0891C844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1372)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C870;
      }
      goto L_0891C850;
    }
L_0891C850:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0891C868u);
    ctx.gpr[7] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891C868u) goto L_0891C868;
    return;
L_0891C868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891C88C;
      }
      goto L_0891C870;
    }
L_0891C870:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0891C888u);
    ctx.gpr[7] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891C888u) goto L_0891C888;
    return;
L_0891C888:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0891C88C;
L_0891C88C:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891C898u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0891C898u) goto L_0891C898;
    return;
L_0891C898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C9F4;
      }
      goto L_0891C8A0;
    }
L_0891C8A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891C8B0u);
    ctx.gpr[6] = (0u | 121u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891C8B0u) goto L_0891C8B0;
    return;
L_0891C8B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C944;
      }
      goto L_0891C8B8;
    }
L_0891C8B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891C8F8;
      }
      goto L_0891C8E0;
    }
L_0891C8E0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[22])) && ctx.fpr[13] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891C8F8;
      }
      goto L_0891C8F0;
    }
L_0891C8F0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = ctx.fpr[22] + ctx.fpr[26];
      if (branch_taken) {
          goto L_0891C904;
      }
      goto L_0891C8F8;
    }
L_0891C8F8:
    ctx.gpr[31] = (0x0891C900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0891C900u) goto L_0891C900;
    return;
L_0891C900:
    ctx.fpr[26] = ctx.fpr[0] + ctx.fpr[26];
    goto L_0891C904;
L_0891C904:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0891C930u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x0891C930u) goto L_0891C930;
    return;
L_0891C930:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0891C944u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x0891C944u) goto L_0891C944;
    return;
L_0891C944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C998;
      }
      goto L_0891C95C;
    }
L_0891C95C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 60u);
    ctx.gpr[31] = (0x0891C974u);
    ctx.gpr[7] = (0u | 262u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891C974u) goto L_0891C974;
    return;
L_0891C974:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0891C9E8;
      }
      goto L_0891C998;
    }
L_0891C998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0891C9A4u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem) && ctx.pc == 0x0891C9A4u) goto L_0891C9A4;
    return;
L_0891C9A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C9CC;
      }
      goto L_0891C9AC;
    }
L_0891C9AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0891C9C4u);
    ctx.gpr[7] = (0u | 135u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891C9C4u) goto L_0891C9C4;
    return;
L_0891C9C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891C9E8;
      }
      goto L_0891C9CC;
    }
L_0891C9CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0891C9E4u);
    ctx.gpr[7] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891C9E4u) goto L_0891C9E4;
    return;
L_0891C9E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0891C9E8;
L_0891C9E8:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891C9F4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0891C9F4u) goto L_0891C9F4;
    return;
L_0891C9F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CA20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891CA74u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem) && ctx.pc == 0x0891CA74u) goto L_0891CA74;
    return;
L_0891CA74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891CBD8;
      }
      goto L_0891CA84;
    }
L_0891CA84:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0891CAA4;
      }
      goto L_0891CA8C;
    }
L_0891CA8C:
    ctx.gpr[31] = (0x0891CA94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem) && ctx.pc == 0x0891CA94u) goto L_0891CA94;
    return;
L_0891CA94:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891CAA4;
      }
      goto L_0891CA9C;
    }
L_0891CA9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_0891CBC8;
      }
      goto L_0891CAA4;
    }
L_0891CAA4:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CAC4;
      }
      goto L_0891CAAC;
    }
L_0891CAAC:
    ctx.gpr[31] = (0x0891CAB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem) && ctx.pc == 0x0891CAB4u) goto L_0891CAB4;
    return;
L_0891CAB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CAC4;
      }
      goto L_0891CABC;
    }
L_0891CABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_0891CBC8;
      }
      goto L_0891CAC4;
    }
L_0891CAC4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CAE0;
      }
      goto L_0891CACC;
    }
L_0891CACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891CAE0;
      }
      goto L_0891CAD8;
    }
L_0891CAD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_0891CBC8;
      }
      goto L_0891CAE0;
    }
L_0891CAE0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CAFC;
      }
      goto L_0891CAE8;
    }
L_0891CAE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CAFC;
      }
      goto L_0891CAF4;
    }
L_0891CAF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_0891CBC8;
      }
      goto L_0891CAFC;
    }
L_0891CAFC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CB6C;
      }
      goto L_0891CB04;
    }
L_0891CB04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891CB6C;
      }
      goto L_0891CB14;
    }
L_0891CB14:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891CB24u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem) && ctx.pc == 0x0891CB24u) goto L_0891CB24;
    return;
L_0891CB24:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891CB64;
      }
      goto L_0891CB60;
    }
L_0891CB60:
    ctx.gpr[22] = (0u | 1u);
    goto L_0891CB64;
L_0891CB64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CBC8;
      }
      goto L_0891CB6C;
    }
L_0891CB6C:
    ctx.gpr[4] = (ctx.gpr[21] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CBC8;
      }
      goto L_0891CB78;
    }
L_0891CB78:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891CB88u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem) && ctx.pc == 0x0891CB88u) goto L_0891CB88;
    return;
L_0891CB88:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891CBC8;
      }
      goto L_0891CBC4;
    }
L_0891CBC4:
    ctx.gpr[22] = (0u | 1u);
    goto L_0891CBC8;
L_0891CBC8:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CBD8;
      }
      goto L_0891CBD0;
    }
L_0891CBD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891CD9C;
      }
      goto L_0891CBD8;
    }
L_0891CBD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CBF0;
      }
      goto L_0891CBE8;
    }
L_0891CBE8:
    ctx.gpr[31] = (0x0891CBF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem) && ctx.pc == 0x0891CBF0u) goto L_0891CBF0;
    return;
L_0891CBF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891CC00u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 885u, 0x0890FF54u>(ctx, &aot_mem) && ctx.pc == 0x0891CC00u) goto L_0891CC00;
    return;
L_0891CC00:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891CC0Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 75u, 0x08910498u>(ctx, &aot_mem) && ctx.pc == 0x0891CC0Cu) goto L_0891CC0C;
    return;
L_0891CC0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CC30;
      }
      goto L_0891CC18;
    }
L_0891CC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CC30;
      }
      goto L_0891CC24;
    }
L_0891CC24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[31] = (0x0891CC30u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1136));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x0891CC30u) goto L_0891CC30;
    return;
L_0891CC30:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1136), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0891CC50;
      }
      goto L_0891CC38;
    }
L_0891CC38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CC50;
      }
      goto L_0891CC44;
    }
L_0891CC44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[31] = (0x0891CC50u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1136));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x0891CC50u) goto L_0891CC50;
    return;
L_0891CC50:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CC74;
      }
      goto L_0891CC58;
    }
L_0891CC58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891CC74;
      }
      goto L_0891CC6C;
    }
L_0891CC6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0891CC74;
      }
      goto L_0891CC74;
    }
L_0891CC74:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891CC80u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 142u, 0x08910850u>(ctx, &aot_mem) && ctx.pc == 0x0891CC80u) goto L_0891CC80;
    return;
L_0891CC80:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CCB4;
      }
      goto L_0891CC88;
    }
L_0891CC88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891CCB4;
      }
      goto L_0891CC98;
    }
L_0891CC98:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891CCA8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x0891CCA8u) goto L_0891CCA8;
    return;
L_0891CCA8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891CCB4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 142u, 0x08910850u>(ctx, &aot_mem) && ctx.pc == 0x0891CCB4u) goto L_0891CCB4;
    return;
L_0891CCB4:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0891CCD0;
      }
      goto L_0891CCC8;
    }
L_0891CCC8:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0891CCD0;
L_0891CCD0:
    ctx.gpr[31] = (0x0891CCD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 125u, 0x0891077Cu>(ctx, &aot_mem) && ctx.pc == 0x0891CCD8u) goto L_0891CCD8;
    return;
L_0891CCD8:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0891CCF0;
      }
      goto L_0891CCE4;
    }
L_0891CCE4:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891CCF4;
      }
      goto L_0891CCF0;
    }
L_0891CCF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891CCF4;
L_0891CCF4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891CD00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem) && ctx.pc == 0x0891CD00u) goto L_0891CD00;
    return;
L_0891CD00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CD20;
      }
      goto L_0891CD08;
    }
L_0891CD08:
    ctx.gpr[31] = (0x0891CD10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 648u, 0x08912938u>(ctx, &aot_mem) && ctx.pc == 0x0891CD10u) goto L_0891CD10;
    return;
L_0891CD10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CD78;
      }
      goto L_0891CD18;
    }
L_0891CD18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CD30;
      }
      goto L_0891CD20;
    }
L_0891CD20:
    ctx.gpr[31] = (0x0891CD28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0891CDCC;
L_0891CD28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CD9C;
      }
      goto L_0891CD30;
    }
L_0891CD30:
    ctx.gpr[31] = (0x0891CD38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem) && ctx.pc == 0x0891CD38u) goto L_0891CD38;
    return;
L_0891CD38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CD78;
      }
      goto L_0891CD54;
    }
L_0891CD54:
    ctx.gpr[31] = (0x0891CD5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem) && ctx.pc == 0x0891CD5Cu) goto L_0891CD5C;
    return;
L_0891CD5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 10u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CD98;
      }
      goto L_0891CD78;
    }
L_0891CD78:
    ctx.gpr[31] = (0x0891CD80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 639u, 0x089128ACu>(ctx, &aot_mem) && ctx.pc == 0x0891CD80u) goto L_0891CD80;
    return;
L_0891CD80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CD98;
      }
      goto L_0891CD88;
    }
L_0891CD88:
    ctx.gpr[31] = (0x0891CD90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0891D2C4;
L_0891CD90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CD9C;
      }
      goto L_0891CD98;
    }
L_0891CD98:
    ctx.gpr[2] = (0u | 1u);
    goto L_0891CD9C;
L_0891CD9C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CDCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891CE08u);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem) && ctx.pc == 0x0891CE08u) goto L_0891CE08;
    return;
L_0891CE08:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0891CE30;
      }
      goto L_0891CE1C;
    }
L_0891CE1C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0891CE40;
      }
      goto L_0891CE30;
    }
L_0891CE30:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(904));
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(908));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
    ctx.gpr[16] = (0u | 8u);
    goto L_0891CE40;
L_0891CE40:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0891CE50u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem) && ctx.pc == 0x0891CE50u) goto L_0891CE50;
    return;
L_0891CE50:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0891CE7Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 129u, 0x089107C4u>(ctx, &aot_mem) && ctx.pc == 0x0891CE7Cu) goto L_0891CE7C;
    return;
L_0891CE7C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0891CE88u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 129u, 0x089107C4u>(ctx, &aot_mem) && ctx.pc == 0x0891CE88u) goto L_0891CE88;
    return;
L_0891CE88:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891CF44;
      }
      goto L_0891CE9C;
    }
L_0891CE9C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0891CEACu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem) && ctx.pc == 0x0891CEACu) goto L_0891CEAC;
    return;
L_0891CEAC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891CEBCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 830u, 0x0890FAF8u>(ctx, &aot_mem) && ctx.pc == 0x0891CEBCu) goto L_0891CEBC;
    return;
L_0891CEBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CF44;
      }
      goto L_0891CEC4;
    }
L_0891CEC4:
    ctx.gpr[31] = (0x0891CECCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0891CECCu) goto L_0891CECC;
    return;
L_0891CECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CF30;
      }
      goto L_0891CED8;
    }
L_0891CED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891CF10;
      }
      goto L_0891CEE8;
    }
L_0891CEE8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0891CEF8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem) && ctx.pc == 0x0891CEF8u) goto L_0891CEF8;
    return;
L_0891CEF8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x0891CF08u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem) && ctx.pc == 0x0891CF08u) goto L_0891CF08;
    return;
L_0891CF08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CF30;
      }
      goto L_0891CF10;
    }
L_0891CF10:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0891CF20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem) && ctx.pc == 0x0891CF20u) goto L_0891CF20;
    return;
L_0891CF20:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[31] = (0x0891CF30u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem) && ctx.pc == 0x0891CF30u) goto L_0891CF30;
    return;
L_0891CF30:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0891CF3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0891CF3Cu) goto L_0891CF3C;
    return;
L_0891CF3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0891D28C;
      }
      goto L_0891CF44;
    }
L_0891CF44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D0B4;
      }
      goto L_0891CF50;
    }
L_0891CF50:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0891CF74u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem) && ctx.pc == 0x0891CF74u) goto L_0891CF74;
    return;
L_0891CF74:
    ctx.gpr[11] = (ctx.gpr[16] << 16u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.gpr[31] = (0x0891CFCCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 607u, 0x08976C80u>(ctx, &aot_mem) && ctx.pc == 0x0891CFCCu) goto L_0891CFCC;
    return;
L_0891CFCC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D058;
      }
      goto L_0891CFD8;
    }
L_0891CFD8:
    ctx.gpr[31] = (0x0891CFE0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0891CFE0u) goto L_0891CFE0;
    return;
L_0891CFE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D044;
      }
      goto L_0891CFEC;
    }
L_0891CFEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891D024;
      }
      goto L_0891CFFC;
    }
L_0891CFFC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0891D00Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem) && ctx.pc == 0x0891D00Cu) goto L_0891D00C;
    return;
L_0891D00C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x0891D01Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem) && ctx.pc == 0x0891D01Cu) goto L_0891D01C;
    return;
L_0891D01C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D044;
      }
      goto L_0891D024;
    }
L_0891D024:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0891D034u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem) && ctx.pc == 0x0891D034u) goto L_0891D034;
    return;
L_0891D034:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[31] = (0x0891D044u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem) && ctx.pc == 0x0891D044u) goto L_0891D044;
    return;
L_0891D044:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0891D050u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0891D050u) goto L_0891D050;
    return;
L_0891D050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0891D28C;
      }
      goto L_0891D058;
    }
L_0891D058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0891D0B4;
      }
      goto L_0891D068;
    }
L_0891D068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891D0B4;
      }
      goto L_0891D078;
    }
L_0891D078:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0891D0A4;
      }
      goto L_0891D08C;
    }
L_0891D08C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891D08C;
      }
      goto L_0891D0A4;
    }
L_0891D0A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_0891D0B4;
L_0891D0B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[18]);
    ctx.gpr[31] = (0x0891D0C0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 639u, 0x089128ACu>(ctx, &aot_mem) && ctx.pc == 0x0891D0C0u) goto L_0891D0C0;
    return;
L_0891D0C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D1D0;
      }
      goto L_0891D0C8;
    }
L_0891D0C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0891D1D0;
      }
      goto L_0891D0E4;
    }
L_0891D0E4:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_0891D0F4;
L_0891D0F4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
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
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0891D144u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem) && ctx.pc == 0x0891D144u) goto L_0891D144;
    return;
L_0891D144:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0891D170u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 129u, 0x089107C4u>(ctx, &aot_mem) && ctx.pc == 0x0891D170u) goto L_0891D170;
    return;
L_0891D170:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0891D17Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 129u, 0x089107C4u>(ctx, &aot_mem) && ctx.pc == 0x0891D17Cu) goto L_0891D17C;
    return;
L_0891D17C:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891D1B8;
      }
      goto L_0891D190;
    }
L_0891D190:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891D1A0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 830u, 0x0890FAF8u>(ctx, &aot_mem) && ctx.pc == 0x0891D1A0u) goto L_0891D1A0;
    return;
L_0891D1A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D1B8;
      }
      goto L_0891D1A8;
    }
L_0891D1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0891D1D0;
      }
      goto L_0891D1B8;
    }
L_0891D1B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891D0F4;
      }
      goto L_0891D1D0;
    }
L_0891D1D0:
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
      if (branch_taken) {
          goto L_0891D228;
      }
      goto L_0891D1E0;
    }
L_0891D1E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0891D228;
      }
      goto L_0891D1F8;
    }
L_0891D1F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0891D210;
      }
      goto L_0891D208;
    }
L_0891D208:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891D228;
      }
      goto L_0891D210;
    }
L_0891D210:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891D1F8;
      }
      goto L_0891D228;
    }
L_0891D228:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2232)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1024), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891D24Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x0891D24Cu) goto L_0891D24C;
    return;
L_0891D24C:
    ctx.gpr[31] = (0x0891D254u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x0891D254u) goto L_0891D254;
    return;
L_0891D254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2232)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D26C;
      }
      goto L_0891D260;
    }
L_0891D260:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0891D26Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x0891D26Cu) goto L_0891D26C;
    return;
L_0891D26C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0891D27Cu);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0891D27Cu) goto L_0891D27C;
    return;
L_0891D27C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x0891D288u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x0891D288u) goto L_0891D288;
    return;
L_0891D288:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0891D28C;
L_0891D28C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D2C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2032));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1964), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1968), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1972), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1976), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1980), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1984), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1988), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1992), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1996), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2000), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2004), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2008), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2012), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2016), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (48819u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0891D328u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem) && ctx.pc == 0x0891D328u) goto L_0891D328;
    return;
L_0891D328:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0891D37Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem) && ctx.pc == 0x0891D37Cu) goto L_0891D37C;
    return;
L_0891D37C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1936), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x0891D410u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem) && ctx.pc == 0x0891D410u) goto L_0891D410;
    return;
L_0891D410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_0891D47C;
      }
      goto L_0891D430;
    }
L_0891D430:
    ctx.gpr[31] = (0x0891D438u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem) && ctx.pc == 0x0891D438u) goto L_0891D438;
    return;
L_0891D438:
    ctx.gpr[31] = (0x0891D440u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem) && ctx.pc == 0x0891D440u) goto L_0891D440;
    return;
L_0891D440:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D47C;
      }
      goto L_0891D448;
    }
L_0891D448:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0891D47C;
L_0891D47C:
    ctx.gpr[31] = (0x0891D484u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem) && ctx.pc == 0x0891D484u) goto L_0891D484;
    return;
L_0891D484:
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1936)));
    goto L_0891D4A0;
L_0891D4A0:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891D4A0;
      }
      goto L_0891D4E8;
    }
L_0891D4E8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    goto L_0891D514;
L_0891D514:
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891D514;
      }
      goto L_0891D59C;
    }
L_0891D59C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1912), ctx.gpr[20]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1936)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0891D5C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem) && ctx.pc == 0x0891D5C0u) goto L_0891D5C0;
    return;
L_0891D5C0:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1920), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (0u | 1u);
    goto L_0891D630;
L_0891D630:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891D670;
      }
      goto L_0891D65C;
    }
L_0891D65C:
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_0891D670;
    }
    goto L_0891D670;
L_0891D670:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891D6B0;
      }
      goto L_0891D69C;
    }
L_0891D69C:
    ctx.gpr[17] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
        goto L_0891D6B0;
    }
    goto L_0891D6B0;
L_0891D6B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0891D748;
      }
      goto L_0891D6B8;
    }
L_0891D6B8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0891D748;
      }
      goto L_0891D6C0;
    }
L_0891D6C0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1920), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0891D700;
      }
      goto L_0891D6C8;
    }
L_0891D6C8:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0891D6ECu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0891D6ECu) goto L_0891D6EC;
    return;
L_0891D6EC:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0891D700;
L_0891D700:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D848;
      }
      goto L_0891D708;
    }
L_0891D708:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[26];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0891D72Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0891D72Cu) goto L_0891D72C;
    return;
L_0891D72C:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D848;
      }
      goto L_0891D748;
    }
L_0891D748:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0891D7CC;
      }
      goto L_0891D750;
    }
L_0891D750:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891D7CC;
      }
      goto L_0891D758;
    }
L_0891D758:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D848;
      }
      goto L_0891D7CC;
    }
L_0891D7CC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891D848;
      }
      goto L_0891D7D4;
    }
L_0891D7D4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0891D848;
      }
      goto L_0891D7DC;
    }
L_0891D7DC:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0891D848;
L_0891D848:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0891D630;
      }
      goto L_0891D860;
    }
L_0891D860:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1920)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1912)));
      if (branch_taken) {
          goto L_0891DA10;
      }
      goto L_0891D86C;
    }
L_0891D86C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(808), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    goto L_0891D88C;
L_0891D88C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891D898u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0891D898u) goto L_0891D898;
    return;
L_0891D898:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891D88C;
      }
      goto L_0891D8A8;
    }
L_0891D8A8:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    goto L_0891D8D4;
L_0891D8D4:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891D908;
      }
      goto L_0891D904;
    }
L_0891D904:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0891D908;
L_0891D908:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891D8D4;
      }
      goto L_0891D918;
    }
L_0891D918:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0891D940u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 124u, 0x08A1943Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D940u) goto L_0891D940;
    return;
L_0891D940:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891D950u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem) && ctx.pc == 0x0891D950u) goto L_0891D950;
    return;
L_0891D950:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1936)));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(856), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891D9DC;
      }
      goto L_0891D98C;
    }
L_0891D98C:
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0891D9CCu);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 125u, 0x08A19470u>(ctx, &aot_mem) && ctx.pc == 0x0891D9CCu) goto L_0891D9CC;
    return;
L_0891D9CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D9E4;
      }
      goto L_0891D9D4;
    }
L_0891D9D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DA10;
      }
      goto L_0891D9DC;
    }
L_0891D9DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891E874;
      }
      goto L_0891D9E4;
    }
L_0891D9E4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891D9F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 885u, 0x0890FF54u>(ctx, &aot_mem) && ctx.pc == 0x0891D9F0u) goto L_0891D9F0;
    return;
L_0891D9F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891DA08;
      }
      goto L_0891DA00;
    }
L_0891DA00:
    ctx.gpr[31] = (0x0891DA08u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0891DA08u) goto L_0891DA08;
    return;
L_0891DA08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891E874;
      }
      goto L_0891DA10;
    }
L_0891DA10:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[3] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[13] = (0u | 11u);
    goto L_0891DA78;
L_0891DA78:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(288)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DB3C;
      }
      goto L_0891DABC;
    }
L_0891DABC:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DB3C;
      }
      goto L_0891DACC;
    }
L_0891DACC:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(288)));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[12] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DBC4;
      }
      goto L_0891DB3C;
    }
L_0891DB3C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DBC4;
      }
      goto L_0891DB4C;
    }
L_0891DB4C:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DBC4;
      }
      goto L_0891DB5C;
    }
L_0891DB5C:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(288)));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[12] | 0u);
    goto L_0891DBC4;
L_0891DBC4:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[12]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891DA78;
      }
      goto L_0891DBD8;
    }
L_0891DBD8:
    ctx.gpr[6] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0891DC10;
      }
      goto L_0891DBE4;
    }
L_0891DBE4:
    ctx.gpr[16] = (ctx.gpr[13] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891DBF4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 885u, 0x0890FF54u>(ctx, &aot_mem) && ctx.pc == 0x0891DBF4u) goto L_0891DBF4;
    return;
L_0891DBF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0891DC08;
      }
      goto L_0891DC00;
    }
L_0891DC00:
    ctx.gpr[31] = (0x0891DC08u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0891DC08u) goto L_0891DC08;
    return;
L_0891DC08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891E874;
      }
      goto L_0891DC10;
    }
L_0891DC10:
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891DC30;
      }
      goto L_0891DC20;
    }
L_0891DC20:
    ctx.gpr[6] = (0u - ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_0891DC34;
      }
      goto L_0891DC30;
    }
L_0891DC30:
    ctx.gpr[16] = (ctx.gpr[16] & 3u);
    goto L_0891DC34;
L_0891DC34:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
        goto L_0891DC50;
    }
    goto L_0891DC40;
L_0891DC40:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_0891DC50;
      }
      goto L_0891DC50;
    }
L_0891DC50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    if (static_cast<std::int32_t>(ctx.gpr[6]) >= 0) {
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
        goto L_0891DC6C;
    }
    goto L_0891DC5C;
L_0891DC5C:
    ctx.gpr[6] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_0891DC6C;
      }
      goto L_0891DC6C;
    }
L_0891DC6C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[18] = (ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_0891DC88;
      }
      goto L_0891DC78;
    }
L_0891DC78:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u - ctx.gpr[18]);
      if (branch_taken) {
          goto L_0891DC88;
      }
      goto L_0891DC88;
    }
L_0891DC88:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1936)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(384));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
      if (branch_taken) {
          goto L_0891DD00;
      }
      goto L_0891DCC0;
    }
L_0891DCC0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    if (static_cast<std::int32_t>(ctx.gpr[6]) >= 0) {
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
        goto L_0891DCDC;
    }
    goto L_0891DCCC;
L_0891DCCC:
    ctx.gpr[6] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_0891DCDC;
      }
      goto L_0891DCDC;
    }
L_0891DCDC:
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891DCC0;
      }
      goto L_0891DD00;
    }
L_0891DD00:
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891DD14u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem) && ctx.pc == 0x0891DD14u) goto L_0891DD14;
    return;
L_0891DD14:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1916), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(464));
    ctx.gpr[6] = (ctx.gpr[18] << 4u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(464));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1932), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0891DDA4;
      }
      goto L_0891DD64;
    }
L_0891DD64:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
        goto L_0891DD80;
    }
    goto L_0891DD70;
L_0891DD70:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891DD80;
      }
      goto L_0891DD80;
    }
L_0891DD80:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0891DD64;
      }
      goto L_0891DDA4;
    }
L_0891DDA4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891DDB4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem) && ctx.pc == 0x0891DDB4u) goto L_0891DDB4;
    return;
L_0891DDB4:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1924), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1928), ctx.gpr[4]);
    goto L_0891DDE4;
L_0891DDE4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0891DDF0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0891DDF0u) goto L_0891DDF0;
    return;
L_0891DDF0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891DDE4;
      }
      goto L_0891DE00;
    }
L_0891DE00:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1916)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), 0u);
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1948), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1952), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_0891E114;
      }
      goto L_0891DE48;
    }
L_0891DE48:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (49024u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(384));
    goto L_0891DE74;
L_0891DE74:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1008), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1012), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DF30;
      }
      goto L_0891DF1C;
    }
L_0891DF1C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0891DF30;
L_0891DF30:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x0891DF8Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem) && ctx.pc == 0x0891DF8Cu) goto L_0891DF8C;
    return;
L_0891DF8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891DFD4;
      }
      goto L_0891DF98;
    }
L_0891DF98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0891DFD0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem) && ctx.pc == 0x0891DFD0u) goto L_0891DFD0;
    return;
L_0891DFD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0891DFD4;
L_0891DFD4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E0F4;
      }
      goto L_0891DFDC;
    }
L_0891DFDC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1956), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[31] = (0x0891DFF0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1960), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem) && ctx.pc == 0x0891DFF0u) goto L_0891DFF0;
    return;
L_0891DFF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1960)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1956)));
      if (branch_taken) {
          goto L_0891E0F0;
      }
      goto L_0891DFFC;
    }
L_0891DFFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1912)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891E0F0;
      }
      goto L_0891E00C;
    }
L_0891E00C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1956), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[31] = (0x0891E01Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1960), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x0891E01Cu) goto L_0891E01C;
    return;
L_0891E01C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1960)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1956)));
      if (branch_taken) {
          goto L_0891E0F0;
      }
      goto L_0891E028;
    }
L_0891E028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E0E0;
      }
      goto L_0891E040;
    }
L_0891E040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E064;
      }
      goto L_0891E054;
    }
L_0891E054:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1948), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1952), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891E114;
      }
      goto L_0891E064;
    }
L_0891E064:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E0B4;
      }
      goto L_0891E0A4;
    }
L_0891E0A4:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1948), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1952), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891E114;
      }
      goto L_0891E0B4;
    }
L_0891E0B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E0D8;
      }
      goto L_0891E0C8;
    }
L_0891E0C8:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1948), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1952), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891E114;
      }
      goto L_0891E0D8;
    }
L_0891E0D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E0F4;
      }
      goto L_0891E0E0;
    }
L_0891E0E0:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1948), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1952), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891E114;
      }
      goto L_0891E0F0;
    }
L_0891E0F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), 0u);
    goto L_0891E0F4;
L_0891E0F4:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1916)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891DE74;
      }
      goto L_0891E114;
    }
L_0891E114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1924)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), 0u);
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1940), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1944), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_0891E410;
      }
      goto L_0891E144;
    }
L_0891E144:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (49024u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(564));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(464));
    goto L_0891E170;
L_0891E170:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E22C;
      }
      goto L_0891E218;
    }
L_0891E218:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0891E22C;
L_0891E22C:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x0891E288u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E288u) goto L_0891E288;
    return;
L_0891E288:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E2D0;
      }
      goto L_0891E294;
    }
L_0891E294:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0891E2CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E2CCu) goto L_0891E2CC;
    return;
L_0891E2CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0891E2D0;
L_0891E2D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E3F0;
      }
      goto L_0891E2D8;
    }
L_0891E2D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1956), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[31] = (0x0891E2ECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1960), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem) && ctx.pc == 0x0891E2ECu) goto L_0891E2EC;
    return;
L_0891E2EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1960)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1956)));
      if (branch_taken) {
          goto L_0891E3EC;
      }
      goto L_0891E2F8;
    }
L_0891E2F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1912)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891E3EC;
      }
      goto L_0891E308;
    }
L_0891E308:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1956), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[31] = (0x0891E318u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1960), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x0891E318u) goto L_0891E318;
    return;
L_0891E318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1960)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1956)));
      if (branch_taken) {
          goto L_0891E3EC;
      }
      goto L_0891E324;
    }
L_0891E324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E3DC;
      }
      goto L_0891E33C;
    }
L_0891E33C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E360;
      }
      goto L_0891E350;
    }
L_0891E350:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1940), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1944), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891E410;
      }
      goto L_0891E360;
    }
L_0891E360:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E3B0;
      }
      goto L_0891E3A0;
    }
L_0891E3A0:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1940), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1944), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891E410;
      }
      goto L_0891E3B0;
    }
L_0891E3B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E3D4;
      }
      goto L_0891E3C4;
    }
L_0891E3C4:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1940), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1944), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891E410;
      }
      goto L_0891E3D4;
    }
L_0891E3D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E3F0;
      }
      goto L_0891E3DC;
    }
L_0891E3DC:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1940), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1944), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891E410;
      }
      goto L_0891E3EC;
    }
L_0891E3EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), 0u);
    goto L_0891E3F0;
L_0891E3F0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891E170;
      }
      goto L_0891E410;
    }
L_0891E410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1932)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1912)));
      if (branch_taken) {
          goto L_0891E478;
      }
      goto L_0891E42C;
    }
L_0891E42C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1932)));
    goto L_0891E43C;
L_0891E43C:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891E43C;
      }
      goto L_0891E478;
    }
L_0891E478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1928)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0891E4D8;
      }
      goto L_0891E48C;
    }
L_0891E48C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1928)));
    goto L_0891E49C;
L_0891E49C:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891E49C;
      }
      goto L_0891E4D8;
    }
L_0891E4D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1952)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E50C;
      }
      goto L_0891E4E4;
    }
L_0891E4E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1944)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E50C;
      }
      goto L_0891E4F0;
    }
L_0891E4F0:
    ctx.gpr[4] = (0u | 2u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
        goto L_0891E504;
    }
    goto L_0891E504;
L_0891E504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E5F4;
      }
      goto L_0891E50C;
    }
L_0891E50C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1952)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E520;
      }
      goto L_0891E518;
    }
L_0891E518:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0891E5F4;
      }
      goto L_0891E520;
    }
L_0891E520:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1944)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E534;
      }
      goto L_0891E52C;
    }
L_0891E52C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0891E5F4;
      }
      goto L_0891E534;
    }
L_0891E534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1948)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0891E558;
      }
      goto L_0891E540;
    }
L_0891E540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1940)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E558;
      }
      goto L_0891E550;
    }
L_0891E550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0891E5F4;
      }
      goto L_0891E558;
    }
L_0891E558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1948)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E57C;
      }
      goto L_0891E568;
    }
L_0891E568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1940)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0891E57C;
      }
      goto L_0891E574;
    }
L_0891E574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0891E5F4;
      }
      goto L_0891E57C;
    }
L_0891E57C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
        goto L_0891E5A8;
    }
    goto L_0891E58C;
L_0891E58C:
    ctx.gpr[4] = (0u | 2u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
        goto L_0891E5A0;
    }
    goto L_0891E5A0;
L_0891E5A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E5F4;
      }
      goto L_0891E5A8;
    }
L_0891E5A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
        goto L_0891E5F4;
    }
    goto L_0891E5F4;
L_0891E5F4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E7E4;
      }
      goto L_0891E600;
    }
L_0891E600:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0891E6F4;
      }
      goto L_0891E608;
    }
L_0891E608:
    ctx.gpr[31] = (0x0891E610u);
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem) && ctx.pc == 0x0891E610u) goto L_0891E610;
    return;
L_0891E610:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1932)));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (16640u << 16u);
      if (branch_taken) {
          goto L_0891E7E4;
      }
      goto L_0891E624;
    }
L_0891E624:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (17096u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1280));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1912)));
    goto L_0891E640;
L_0891E640:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(944));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1280)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1284)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1288)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0891E6B0;
      }
      goto L_0891E698;
    }
L_0891E698:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
      if (branch_taken) {
          goto L_0891E6C0;
      }
      goto L_0891E6B0;
    }
L_0891E6B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
    goto L_0891E6C0;
L_0891E6C0:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[7] << 2u);
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(908), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891E640;
      }
      goto L_0891E6EC;
    }
L_0891E6EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E7E4;
      }
      goto L_0891E6F4;
    }
L_0891E6F4:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E7E4;
      }
      goto L_0891E700;
    }
L_0891E700:
    ctx.gpr[31] = (0x0891E708u);
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem) && ctx.pc == 0x0891E708u) goto L_0891E708;
    return;
L_0891E708:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1928)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (16640u << 16u);
      if (branch_taken) {
          goto L_0891E7E4;
      }
      goto L_0891E71C;
    }
L_0891E71C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (17096u << 16u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(464));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1912)));
    goto L_0891E738;
L_0891E738:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[8] = (ctx.gpr[6] << 3u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(944));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1296)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1300)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1304)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_0891E7A8;
      }
      goto L_0891E790;
    }
L_0891E790:
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
      if (branch_taken) {
          goto L_0891E7B8;
      }
      goto L_0891E7A8;
    }
L_0891E7A8:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
    goto L_0891E7B8;
L_0891E7B8:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[8] << 2u);
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(908), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891E738;
      }
      goto L_0891E7E4;
    }
L_0891E7E4:
    ctx.gpr[31] = (0x0891E7ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1912)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 133u, 0x089107ECu>(ctx, &aot_mem) && ctx.pc == 0x0891E7ECu) goto L_0891E7EC;
    return;
L_0891E7EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E824;
      }
      goto L_0891E7F4;
    }
L_0891E7F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[17] = (0u | 11u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891E808u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 885u, 0x0890FF54u>(ctx, &aot_mem) && ctx.pc == 0x0891E808u) goto L_0891E808;
    return;
L_0891E808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0891E81C;
      }
      goto L_0891E814;
    }
L_0891E814:
    ctx.gpr[31] = (0x0891E81Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0891E81Cu) goto L_0891E81C;
    return;
L_0891E81C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891E874;
      }
      goto L_0891E824;
    }
L_0891E824:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2232)));
    ctx.gpr[31] = (0x0891E838u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x0891E838u) goto L_0891E838;
    return;
L_0891E838:
    ctx.gpr[31] = (0x0891E840u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x0891E840u) goto L_0891E840;
    return;
L_0891E840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2232)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0891E858;
      }
      goto L_0891E84C;
    }
L_0891E84C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891E858u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x0891E858u) goto L_0891E858;
    return;
L_0891E858:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891E864u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0891E864u) goto L_0891E864;
    return;
L_0891E864:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x0891E870u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x0891E870u) goto L_0891E870;
    return;
L_0891E870:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0891E874;
L_0891E874:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1964)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1968)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1972)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1976)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1980)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1988)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1992)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1996)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2000)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2004)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2008)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2012)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2016)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2032));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E8B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 31u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891E948;
      }
      goto L_0891E8F8;
    }
L_0891E8F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (ctx.gpr[5] & 512u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E940;
      }
      goto L_0891E908;
    }
L_0891E908:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E940;
      }
      goto L_0891E914;
    }
L_0891E914:
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E938;
      }
      goto L_0891E920;
    }
L_0891E920:
    ctx.gpr[31] = (0x0891E928u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0891E928u) goto L_0891E928;
    return;
L_0891E928:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E950;
      }
      goto L_0891E930;
    }
L_0891E930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891E938;
    }
L_0891E938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891E940;
    }
L_0891E940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891E948;
    }
L_0891E948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891E950;
    }
L_0891E950:
    ctx.gpr[31] = (0x0891E958u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E958u) goto L_0891E958;
    return;
L_0891E958:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E974;
      }
      goto L_0891E960;
    }
L_0891E960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E97C;
      }
      goto L_0891E974;
    }
L_0891E974:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891E97C;
    }
L_0891E97C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x0891E9A0u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0891E9A0u) goto L_0891E9A0;
    return;
L_0891E9A0:
    ctx.gpr[31] = (0x0891E9A8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0891E9A8u) goto L_0891E9A8;
    return;
L_0891E9A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[31] = (0x0891E9B4u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0891E9B4u) goto L_0891E9B4;
    return;
L_0891E9B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0891E9EC;
    }
    goto L_0891E9EC;
L_0891E9EC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0891EA10;
      }
      goto L_0891EA00;
    }
L_0891EA00:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[12];
    goto L_0891EA10;
L_0891EA10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891EA54;
      }
      goto L_0891EA24;
    }
L_0891EA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EA54;
      }
      goto L_0891EA30;
    }
L_0891EA30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(700)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EA54;
      }
      goto L_0891EA3C;
    }
L_0891EA3C:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[31] = (0x0891EA48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0891EA48u) goto L_0891EA48;
    return;
L_0891EA48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EA54;
      }
      goto L_0891EA50;
    }
L_0891EA50:
    ctx.gpr[18] = (0u | 1u);
    goto L_0891EA54;
L_0891EA54:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EA84;
      }
      goto L_0891EA64;
    }
L_0891EA64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891EA84;
      }
      goto L_0891EA74;
    }
L_0891EA74:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EA84;
      }
      goto L_0891EA7C;
    }
L_0891EA7C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EABC;
      }
      goto L_0891EA84;
    }
L_0891EA84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0891EA9Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x0891EA9Cu) goto L_0891EA9C;
    return;
L_0891EA9C:
    ctx.gpr[31] = (0x0891EAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0891EAA4u) goto L_0891EAA4;
    return;
L_0891EAA4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EAD8;
      }
      goto L_0891EAB4;
    }
L_0891EAB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_0891EAC4;
      }
      goto L_0891EABC;
    }
L_0891EABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891EAC4;
    }
L_0891EAC4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891EAD8;
      }
      goto L_0891EAD0;
    }
L_0891EAD0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EBC4;
      }
      goto L_0891EAD8;
    }
L_0891EAD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (0x0891EAE8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0891EAE8u) goto L_0891EAE8;
    return;
L_0891EAE8:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0891EB0C;
      }
      goto L_0891EAFC;
    }
L_0891EAFC:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_0891EB0C;
L_0891EB0C:
    ctx.gpr[31] = (0x0891EB14u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0891EB14u) goto L_0891EB14;
    return;
L_0891EB14:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EB2C;
      }
      goto L_0891EB24;
    }
L_0891EB24:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[28];
      if (branch_taken) {
          goto L_0891EB30;
      }
      goto L_0891EB2C;
    }
L_0891EB2C:
    ctx.fpr[20] = ctx.fpr[24] + ctx.fpr[28];
    goto L_0891EB30;
L_0891EB30:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 173u);
      if (branch_taken) {
          goto L_0891EB44;
      }
      goto L_0891EB38;
    }
L_0891EB38:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891EB4C;
      }
      goto L_0891EB44;
    }
L_0891EB44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 145u);
      if (branch_taken) {
          goto L_0891EB5C;
      }
      goto L_0891EB4C;
    }
L_0891EB4C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891EB5C;
      }
      goto L_0891EB58;
    }
L_0891EB58:
    ctx.gpr[17] = (0u | 157u);
    goto L_0891EB5C;
L_0891EB5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891EB6Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891EB6Cu) goto L_0891EB6C;
    return;
L_0891EB6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EB7C;
      }
      goto L_0891EB74;
    }
L_0891EB74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891EB7C;
    }
L_0891EB7C:
    ctx.gpr[8] = (16640u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0891EB98u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891EB98u) goto L_0891EB98;
    return;
L_0891EB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (2193u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891EBBCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13576));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0891EBBCu) goto L_0891EBBC;
    return;
L_0891EBBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC24;
      }
      goto L_0891EBC4;
    }
L_0891EBC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891EBD4u);
    ctx.gpr[6] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891EBD4u) goto L_0891EBD4;
    return;
L_0891EBD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EBE4;
      }
      goto L_0891EBDC;
    }
L_0891EBDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891EBE4;
    }
L_0891EBE4:
    ctx.gpr[8] = (16640u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0891EC00u);
    ctx.gpr[7] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891EC00u) goto L_0891EC00;
    return;
L_0891EC00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (2193u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891EC24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13576));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0891EC24u) goto L_0891EC24;
    return;
L_0891EC24:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC38;
      }
      goto L_0891EC2C;
    }
L_0891EC2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891EC38u);
    ctx.gpr[5] = (0u | 141u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x0891EC38u) goto L_0891EC38;
    return;
L_0891EC38:
    ctx.gpr[31] = (0x0891EC40u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0891EC40u) goto L_0891EC40;
    return;
L_0891EC40:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0891EC4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem) && ctx.pc == 0x0891EC4Cu) goto L_0891EC4C;
    return;
L_0891EC4C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2232)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891EC5Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x0891EC5Cu) goto L_0891EC5C;
    return;
L_0891EC5C:
    ctx.gpr[31] = (0x0891EC64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x0891EC64u) goto L_0891EC64;
    return;
L_0891EC64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2232)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC7C;
      }
      goto L_0891EC70;
    }
L_0891EC70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891EC7Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x0891EC7Cu) goto L_0891EC7C;
    return;
L_0891EC7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891EC88u);
    ctx.gpr[5] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0891EC88u) goto L_0891EC88;
    return;
L_0891EC88:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891ECB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[7] = (0u | 17u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891ED44;
      }
      goto L_0891ED08;
    }
L_0891ED08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891ED3C;
      }
      goto L_0891ED18;
    }
L_0891ED18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891ED3C;
      }
      goto L_0891ED24;
    }
L_0891ED24:
    ctx.gpr[31] = (0x0891ED2Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0891ED2Cu) goto L_0891ED2C;
    return;
L_0891ED2C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
        goto L_0891ED4C;
    }
    goto L_0891ED34;
L_0891ED34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891ED3C;
    }
L_0891ED3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891ED44;
    }
L_0891ED44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891ED4C;
    }
L_0891ED4C:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891ED5C;
    }
L_0891ED5C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[30] = (0u | 0u);
      if (branch_taken) {
          goto L_0891EDA0;
      }
      goto L_0891ED74;
    }
L_0891ED74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EDA0;
      }
      goto L_0891ED80;
    }
L_0891ED80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(700)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EDA0;
      }
      goto L_0891ED8C;
    }
L_0891ED8C:
    ctx.gpr[31] = (0x0891ED94u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0891ED94u) goto L_0891ED94;
    return;
L_0891ED94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EDA0;
      }
      goto L_0891ED9C;
    }
L_0891ED9C:
    ctx.gpr[16] = (0u | 1u);
    goto L_0891EDA0;
L_0891EDA0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EF0C;
      }
      goto L_0891EDA8;
    }
L_0891EDA8:
    ctx.gpr[31] = (0x0891EDB0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0891EDB0u) goto L_0891EDB0;
    return;
L_0891EDB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EDDC;
      }
      goto L_0891EDB8;
    }
L_0891EDB8:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(3257), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(3172), ctx.gpr[23]);
      if (branch_taken) {
          goto L_0891EDD4;
      }
      goto L_0891EDC8;
    }
L_0891EDC8:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(3172));
    ctx.gpr[31] = (0x0891EDD4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x0891EDD4u) goto L_0891EDD4;
    return;
L_0891EDD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891EDDC;
    }
L_0891EDDC:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x0891EE00u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0891EE00u) goto L_0891EE00;
    return;
L_0891EE00:
    ctx.gpr[31] = (0x0891EE08u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0891EE08u) goto L_0891EE08;
    return;
L_0891EE08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[31] = (0x0891EE14u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0891EE14u) goto L_0891EE14;
    return;
L_0891EE14:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0891EE4C;
    }
    goto L_0891EE4C;
L_0891EE4C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EE70;
      }
      goto L_0891EE60;
    }
L_0891EE60:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    goto L_0891EE70;
L_0891EE70:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EED4;
      }
      goto L_0891EE80;
    }
L_0891EE80:
    ctx.gpr[31] = (0x0891EE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0891EE88u) goto L_0891EE88;
    return;
L_0891EE88:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EECC;
      }
      goto L_0891EE98;
    }
L_0891EE98:
    ctx.gpr[31] = (0x0891EEA0u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0891EEA0u) goto L_0891EEA0;
    return;
L_0891EEA0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20252)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20256)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20228)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20232)));
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20220)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20224)));
      if (branch_taken) {
          goto L_0891EEF4;
      }
      goto L_0891EEC4;
    }
L_0891EEC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EEF8;
      }
      goto L_0891EECC;
    }
L_0891EECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891EED4;
    }
L_0891EED4:
    ctx.gpr[31] = (0x0891EEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0891EEDCu) goto L_0891EEDC;
    return;
L_0891EEDC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EE98;
      }
      goto L_0891EEEC;
    }
L_0891EEEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_0891EE98;
      }
      goto L_0891EEF4;
    }
L_0891EEF4:
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[22];
    goto L_0891EEF8;
L_0891EEF8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891EF04u);
    ctx.gpr[5] = (0u | 141u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x0891EF04u) goto L_0891EF04;
    return;
L_0891EF04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1929))))));
      if (branch_taken) {
          goto L_0891EFE4;
      }
      goto L_0891EF0C;
    }
L_0891EF0C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20252)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20256)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20228)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20232)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20220)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20224)));
      if (branch_taken) {
          goto L_0891EFE0;
      }
      goto L_0891EF28;
    }
L_0891EF28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (0x0891EF38u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0891EF38u) goto L_0891EF38;
    return;
L_0891EF38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (ctx.gpr[4] & 192u);
    ctx.gpr[4] = (ctx.gpr[4] >> 6u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0891EF94;
      }
      goto L_0891EF4C;
    }
L_0891EF4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891EFD4;
      }
      goto L_0891EF54;
    }
L_0891EF54:
    ctx.gpr[31] = (0x0891EF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0891EF5Cu) goto L_0891EF5C;
    return;
L_0891EF5C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49097u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
      if (branch_taken) {
          goto L_0891EFD4;
      }
      goto L_0891EF94;
    }
L_0891EF94:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891EFB0;
      }
      goto L_0891EFA0;
    }
L_0891EFA0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EFC4;
      }
      goto L_0891EFA8;
    }
L_0891EFA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EFD4;
      }
      goto L_0891EFB0;
    }
L_0891EFB0:
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0891EFD4;
      }
      goto L_0891EFC4;
    }
L_0891EFC4:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0891EFD4;
L_0891EFD4:
    ctx.gpr[31] = (0x0891EFDCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0891EFDCu) goto L_0891EFDC;
    return;
L_0891EFDC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0891EFE0;
L_0891EFE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1929))))));
    goto L_0891EFE4;
L_0891EFE4:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0891F014u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem) && ctx.pc == 0x0891F014u) goto L_0891F014;
    return;
L_0891F014:
    ctx.gpr[7] = (ctx.gpr[3] & ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[2] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0891F02C;
      }
      goto L_0891F024;
    }
L_0891F024:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0891F0CC;
      }
      goto L_0891F02C;
    }
L_0891F02C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891F03Cu);
    ctx.gpr[6] = (0u | 214u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891F03Cu) goto L_0891F03C;
    return;
L_0891F03C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F054;
      }
      goto L_0891F048;
    }
L_0891F048:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0891F054;
L_0891F054:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891F064u);
    ctx.gpr[6] = (0u | 215u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891F064u) goto L_0891F064;
    return;
L_0891F064:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F07C;
      }
      goto L_0891F070;
    }
L_0891F070:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0891F07C;
L_0891F07C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891F08Cu);
    ctx.gpr[6] = (0u | 216u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891F08Cu) goto L_0891F08C;
    return;
L_0891F08C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F0A4;
      }
      goto L_0891F098;
    }
L_0891F098:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0891F0A4;
L_0891F0A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891F0B4u);
    ctx.gpr[6] = (0u | 217u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891F0B4u) goto L_0891F0B4;
    return;
L_0891F0B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F0CC;
      }
      goto L_0891F0C0;
    }
L_0891F0C0:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0891F0CC;
L_0891F0CC:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F0F8;
      }
      goto L_0891F0D4;
    }
L_0891F0D4:
    ctx.gpr[31] = (0x0891F0DCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F0DCu) goto L_0891F0DC;
    return;
L_0891F0DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F1E0;
      }
      goto L_0891F0E4;
    }
L_0891F0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F1E0;
      }
      goto L_0891F0F8;
    }
L_0891F0F8:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0891F104u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0891F104u) goto L_0891F104;
    return;
L_0891F104:
    ctx.gpr[31] = (0x0891F10Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem) && ctx.pc == 0x0891F10Cu) goto L_0891F10C;
    return;
L_0891F10C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0891F124u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x0891F124u) goto L_0891F124;
    return;
L_0891F124:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891F134u);
    ctx.gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891F134u) goto L_0891F134;
    return;
L_0891F134:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F1A8;
      }
      goto L_0891F13C;
    }
L_0891F13C:
    ctx.gpr[8] = (16640u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0891F158u);
    ctx.gpr[7] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891F158u) goto L_0891F158;
    return;
L_0891F158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (2193u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891F17Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13576));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0891F17Cu) goto L_0891F17C;
    return;
L_0891F17C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2232)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891F18Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x0891F18Cu) goto L_0891F18C;
    return;
L_0891F18C:
    ctx.gpr[31] = (0x0891F194u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x0891F194u) goto L_0891F194;
    return;
L_0891F194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F1B0;
      }
      goto L_0891F1A0;
    }
L_0891F1A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F1BC;
      }
      goto L_0891F1A8;
    }
L_0891F1A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891F1B0;
    }
L_0891F1B0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891F1BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x0891F1BCu) goto L_0891F1BC;
    return;
L_0891F1BC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891F1C8u);
    ctx.gpr[5] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0891F1C8u) goto L_0891F1C8;
    return;
L_0891F1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0891F24C;
      }
      goto L_0891F1E0;
    }
L_0891F1E0:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0891F1ECu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0891F1ECu) goto L_0891F1EC;
    return;
L_0891F1EC:
    ctx.gpr[31] = (0x0891F1F4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem) && ctx.pc == 0x0891F1F4u) goto L_0891F1F4;
    return;
L_0891F1F4:
    ctx.gpr[31] = (0x0891F1FCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x0891F1FCu) goto L_0891F1FC;
    return;
L_0891F1FC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891F208u);
    ctx.gpr[5] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0891F208u) goto L_0891F208;
    return;
L_0891F208:
    ctx.gpr[8] = (16640u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0891F224u);
    ctx.gpr[7] = (0u | 146u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891F224u) goto L_0891F224;
    return;
L_0891F224:
    ctx.gpr[5] = (2193u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891F238u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13576));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0891F238u) goto L_0891F238;
    return;
L_0891F238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0891F24C;
L_0891F24C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891F254;
    }
L_0891F254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891F264;
    }
L_0891F264:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891F270;
    }
L_0891F270:
    ctx.gpr[31] = (0x0891F278u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F278u) goto L_0891F278;
    return;
L_0891F278:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891F280;
    }
L_0891F280:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2288));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891F2C4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 958u, 0x08AB3BE8u>(ctx, &aot_mem) && ctx.pc == 0x0891F2C4u) goto L_0891F2C4;
    return;
L_0891F2C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2288));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891F2FCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 958u, 0x08AB3BE8u>(ctx, &aot_mem) && ctx.pc == 0x0891F2FCu) goto L_0891F2FC;
    return;
L_0891F2FC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_0891F338:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0891F38C;
      }
      goto L_0891F374;
    }
L_0891F374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2120)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-964));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F38C;
      }
      goto L_0891F388;
    }
L_0891F388:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2120), 0u);
    goto L_0891F38C;
L_0891F38C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F3B4;
      }
      goto L_0891F398;
    }
L_0891F398:
    ctx.gpr[31] = (0x0891F3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x0891F3A0u) goto L_0891F3A0;
    return;
L_0891F3A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891F3B4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem) && ctx.pc == 0x0891F3B4u) goto L_0891F3B4;
    return;
L_0891F3B4:
    ctx.gpr[31] = (0x0891F3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0891F3BCu) goto L_0891F3BC;
    return;
L_0891F3BC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891F458;
      }
      goto L_0891F3C4;
    }
L_0891F3C4:
    ctx.gpr[31] = (0x0891F3CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0891F3CCu) goto L_0891F3CC;
    return;
L_0891F3CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F404;
      }
      goto L_0891F3DC;
    }
L_0891F3DC:
    ctx.gpr[31] = (0x0891F3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0891F3E4u) goto L_0891F3E4;
    return;
L_0891F3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 68u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F40C;
      }
      goto L_0891F3FC;
    }
L_0891F3FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F44C;
      }
      goto L_0891F404;
    }
L_0891F404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891F798;
      }
      goto L_0891F40C;
    }
L_0891F40C:
    ctx.gpr[31] = (0x0891F414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0891F414u) goto L_0891F414;
    return;
L_0891F414:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F44C;
      }
      goto L_0891F420;
    }
L_0891F420:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F44C;
      }
      goto L_0891F430;
    }
L_0891F430:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0891F44Cu);
    ctx.gpr[6] = (0u | 205u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0891F44Cu) goto L_0891F44C;
    return;
L_0891F44C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891F458u);
    ctx.gpr[5] = (0u | 103u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x0891F458u) goto L_0891F458;
    return;
L_0891F458:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891F464u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 69u, 0x08910440u>(ctx, &aot_mem) && ctx.pc == 0x0891F464u) goto L_0891F464;
    return;
L_0891F464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F794;
      }
      goto L_0891F474;
    }
L_0891F474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F794;
      }
      goto L_0891F484;
    }
L_0891F484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0891F4A4;
      }
      goto L_0891F494;
    }
L_0891F494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F4B0;
      }
      goto L_0891F4A4;
    }
L_0891F4A4:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_0891F4B0;
L_0891F4B0:
    ctx.gpr[31] = (0x0891F4B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x0891F4B8u) goto L_0891F4B8;
    return;
L_0891F4B8:
    ctx.gpr[31] = (0x0891F4C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 899u, 0x0890B900u>(ctx, &aot_mem) && ctx.pc == 0x0891F4C0u) goto L_0891F4C0;
    return;
L_0891F4C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F538;
      }
      goto L_0891F4E8;
    }
L_0891F4E8:
    ctx.gpr[31] = (0x0891F4F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F4F0u) goto L_0891F4F0;
    return;
L_0891F4F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F598;
      }
      goto L_0891F4F8;
    }
L_0891F4F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F518;
      }
      goto L_0891F504;
    }
L_0891F504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F598;
      }
      goto L_0891F518;
    }
L_0891F518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0891F530u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F530u) goto L_0891F530;
    return;
L_0891F530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F598;
      }
      goto L_0891F538;
    }
L_0891F538:
    ctx.gpr[31] = (0x0891F540u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0891F540u) goto L_0891F540;
    return;
L_0891F540:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F570;
      }
      goto L_0891F548;
    }
L_0891F548:
    ctx.gpr[31] = (0x0891F550u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0891F550u) goto L_0891F550;
    return;
L_0891F550:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F598;
      }
      goto L_0891F558;
    }
L_0891F558:
    ctx.gpr[31] = (0x0891F560u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0891F560u) goto L_0891F560;
    return;
L_0891F560:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891F598;
      }
      goto L_0891F570;
    }
L_0891F570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F590;
      }
      goto L_0891F580;
    }
L_0891F580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F598;
      }
      goto L_0891F590;
    }
L_0891F590:
    ctx.gpr[31] = (0x0891F598u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x0891F598u) goto L_0891F598;
    return;
L_0891F598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F5B8;
      }
      goto L_0891F5B0;
    }
L_0891F5B0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 152u);
    goto L_0891F5B8;
L_0891F5B8:
    ctx.gpr[4] = (0u | 173u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891F6C0;
      }
      goto L_0891F5C4;
    }
L_0891F5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F640;
      }
      goto L_0891F5D4;
    }
L_0891F5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0891F5ECu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F5ECu) goto L_0891F5EC;
    return;
L_0891F5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0891F604u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F604u) goto L_0891F604;
    return;
L_0891F604:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 98u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 95u);
      if (branch_taken) {
          goto L_0891F624;
      }
      goto L_0891F614;
    }
L_0891F614:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_0891F624;
      }
      goto L_0891F61C;
    }
L_0891F61C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F640;
      }
      goto L_0891F624;
    }
L_0891F624:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 63u);
    ctx.gpr[31] = (0x0891F63Cu);
    ctx.gpr[7] = (0u | 275u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891F63Cu) goto L_0891F63C;
    return;
L_0891F63C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_0891F640;
L_0891F640:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F664;
      }
      goto L_0891F648;
    }
L_0891F648:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891F660u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891F660u) goto L_0891F660;
    return;
L_0891F660:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_0891F664;
L_0891F664:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F67C;
      }
      goto L_0891F678;
    }
L_0891F678:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0891F67C;
L_0891F67C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F6D4;
      }
      goto L_0891F698;
    }
L_0891F698:
    ctx.gpr[5] = (2193u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891F6ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13152));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0891F6ACu) goto L_0891F6AC;
    return;
L_0891F6AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891F6D4;
      }
      goto L_0891F6C0;
    }
L_0891F6C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_0891F6D4;
L_0891F6D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891F6E0u);
    ctx.gpr[5] = (0u | 57u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0891F6E0u) goto L_0891F6E0;
    return;
L_0891F6E0:
    ctx.gpr[31] = (0x0891F6E8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 227u, 0x089050D8u>(ctx, &aot_mem) && ctx.pc == 0x0891F6E8u) goto L_0891F6E8;
    return;
L_0891F6E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F6FC;
      }
      goto L_0891F6F0;
    }
L_0891F6F0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891F6FCu);
    ctx.gpr[5] = (0u | 102u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x0891F6FCu) goto L_0891F6FC;
    return;
L_0891F6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2232)));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F71C;
      }
      goto L_0891F70C;
    }
L_0891F70C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2232)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F724;
      }
      goto L_0891F71C;
    }
L_0891F71C:
    ctx.gpr[31] = (0x0891F724u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x0891F724u) goto L_0891F724;
    return;
L_0891F724:
    ctx.gpr[31] = (0x0891F72Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0891F72Cu) goto L_0891F72C;
    return;
L_0891F72C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F73C;
      }
      goto L_0891F734;
    }
L_0891F734:
    ctx.gpr[31] = (0x0891F73Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 970u, 0x0890BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0891F73Cu) goto L_0891F73C;
    return;
L_0891F73C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1768), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 40u);
      if (branch_taken) {
          goto L_0891F78C;
      }
      goto L_0891F750;
    }
L_0891F750:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891F78C;
      }
      goto L_0891F758;
    }
L_0891F758:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F78C;
      }
      goto L_0891F760;
    }
L_0891F760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (15395u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0891F780u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x0891F780u) goto L_0891F780;
    return;
L_0891F780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_0891F78C;
L_0891F78C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0891F798;
      }
      goto L_0891F794;
    }
L_0891F794:
    ctx.gpr[2] = (0u | 0u);
    goto L_0891F798;
L_0891F798:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
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
L_0891F7BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2248)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891F84C;
      }
      goto L_0891F7F0;
    }
L_0891F7F0:
    ctx.gpr[31] = (0x0891F7F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0891F7F8u) goto L_0891F7F8;
    return;
L_0891F7F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F84C;
      }
      goto L_0891F800;
    }
L_0891F800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F838;
      }
      goto L_0891F80C;
    }
L_0891F80C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F830;
      }
      goto L_0891F81C;
    }
L_0891F81C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F854;
      }
      goto L_0891F828;
    }
L_0891F828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F868;
      }
      goto L_0891F830;
    }
L_0891F830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891F838;
    }
L_0891F838:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891F844u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 304u, 0x08911138u>(ctx, &aot_mem) && ctx.pc == 0x0891F844u) goto L_0891F844;
    return;
L_0891F844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891F84C;
    }
L_0891F84C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891F854;
    }
L_0891F854:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891F860u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 305u, 0x08911140u>(ctx, &aot_mem) && ctx.pc == 0x0891F860u) goto L_0891F860;
    return;
L_0891F860:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F888;
      }
      goto L_0891F868;
    }
L_0891F868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F890;
      }
      goto L_0891F87C;
    }
L_0891F87C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_0891F8C0;
      }
      goto L_0891F888;
    }
L_0891F888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891F890;
    }
L_0891F890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F8B8;
      }
      goto L_0891F89C;
    }
L_0891F89C:
    ctx.gpr[31] = (0x0891F8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F8A4u) goto L_0891F8A4;
    return;
L_0891F8A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F8B8;
      }
      goto L_0891F8AC;
    }
L_0891F8AC:
    ctx.gpr[17] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_0891F8C0;
      }
      goto L_0891F8B8;
    }
L_0891F8B8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_0891F8C0;
L_0891F8C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891F8D0u);
    ctx.gpr[6] = (0u | 217u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891F8D0u) goto L_0891F8D0;
    return;
L_0891F8D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F8F8;
      }
      goto L_0891F8DC;
    }
L_0891F8DC:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891F8F4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 819u, 0x08913524u>(ctx, &aot_mem) && ctx.pc == 0x0891F8F4u) goto L_0891F8F4;
    return;
L_0891F8F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0891F8F8;
L_0891F8F8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F980;
      }
      goto L_0891F900;
    }
L_0891F900:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891F910u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891F910u) goto L_0891F910;
    return;
L_0891F910:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F94C;
      }
      goto L_0891F91C;
    }
L_0891F91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F94C;
      }
      goto L_0891F934;
    }
L_0891F934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_0891F95C;
      }
      goto L_0891F944;
    }
L_0891F944:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F95C;
      }
      goto L_0891F94C;
    }
L_0891F94C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F964;
      }
      goto L_0891F954;
    }
L_0891F954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F980;
      }
      goto L_0891F95C;
    }
L_0891F95C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891F964;
    }
L_0891F964:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891F97Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 819u, 0x08913524u>(ctx, &aot_mem) && ctx.pc == 0x0891F97Cu) goto L_0891F97C;
    return;
L_0891F97C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0891F980;
L_0891F980:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891F988;
    }
L_0891F988:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[31] = (0x0891F994u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 304u, 0x08911138u>(ctx, &aot_mem) && ctx.pc == 0x0891F994u) goto L_0891F994;
    return;
L_0891F994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[19] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_0891F9BC;
      }
      goto L_0891F9A4;
    }
L_0891F9A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_0891F9BC;
      }
      goto L_0891F9AC;
    }
L_0891F9AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_0891F9BC;
      }
      goto L_0891F9B4;
    }
L_0891F9B4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891FA3C;
      }
      goto L_0891F9BC;
    }
L_0891F9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0891F9C8u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem) && ctx.pc == 0x0891F9C8u) goto L_0891F9C8;
    return;
L_0891F9C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (49152u << 16u);
      if (branch_taken) {
          goto L_0891FA28;
      }
      goto L_0891F9D4;
    }
L_0891F9D4:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (4u << 16u);
    goto L_0891F9DC;
L_0891F9DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] & 8u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
      if (branch_taken) {
          goto L_0891FA14;
      }
      goto L_0891F9F4;
    }
L_0891F9F4:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FA14;
      }
      goto L_0891FA04;
    }
L_0891FA04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_0891FA14;
L_0891FA14:
    ctx.gpr[31] = (0x0891FA1Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 217u, 0x0886D53Cu>(ctx, &aot_mem) && ctx.pc == 0x0891FA1Cu) goto L_0891FA1C;
    return;
L_0891FA1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F9DC;
      }
      goto L_0891FA28;
    }
L_0891FA28:
    ctx.gpr[31] = (0x0891FA30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem) && ctx.pc == 0x0891FA30u) goto L_0891FA30;
    return;
L_0891FA30:
    ctx.gpr[31] = (0x0891FA38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0891FA38u) goto L_0891FA38;
    return;
L_0891FA38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    goto L_0891FA3C;
L_0891FA3C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FB64;
      }
      goto L_0891FA4C;
    }
L_0891FA4C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0891FAC0;
      }
      goto L_0891FA58;
    }
L_0891FA58:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0891FB64;
      }
      goto L_0891FA60;
    }
L_0891FA60:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891FAE4;
      }
      goto L_0891FA68;
    }
L_0891FA68:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0891FB40;
      }
      goto L_0891FA70;
    }
L_0891FA70:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0891FA9C;
      }
      goto L_0891FA78;
    }
L_0891FA78:
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891FA94u);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891FA94u) goto L_0891FA94;
    return;
L_0891FA94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891FB64;
      }
      goto L_0891FA9C;
    }
L_0891FA9C:
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891FAB8u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891FAB8u) goto L_0891FAB8;
    return;
L_0891FAB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891FB64;
      }
      goto L_0891FAC0;
    }
L_0891FAC0:
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891FADCu);
    ctx.gpr[7] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891FADCu) goto L_0891FADC;
    return;
L_0891FADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891FB64;
      }
      goto L_0891FAE4;
    }
L_0891FAE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_0891FB18;
      }
      goto L_0891FAF4;
    }
L_0891FAF4:
    ctx.gpr[8] = (16448u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891FB10u);
    ctx.gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891FB10u) goto L_0891FB10;
    return;
L_0891FB10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891FB38;
      }
      goto L_0891FB18;
    }
L_0891FB18:
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891FB34u);
    ctx.gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891FB34u) goto L_0891FB34;
    return;
L_0891FB34:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0891FB38;
L_0891FB38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FB64;
      }
      goto L_0891FB40;
    }
L_0891FB40:
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891FB5Cu);
    ctx.gpr[7] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0891FB5Cu) goto L_0891FB5C;
    return;
L_0891FB5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891FB64;
      }
      goto L_0891FB64;
    }
L_0891FB64:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891FB6C;
    }
L_0891FB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FC78;
      }
      goto L_0891FB78;
    }
L_0891FB78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891FB88u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891FB88u) goto L_0891FB88;
    return;
L_0891FB88:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FBAC;
      }
      goto L_0891FB94;
    }
L_0891FB94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0891FBA8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891FBA8u) goto L_0891FBA8;
    return;
L_0891FBA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0891FBAC;
L_0891FBAC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FBCC;
      }
      goto L_0891FBB4;
    }
L_0891FBB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0891FBC8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891FBC8u) goto L_0891FBC8;
    return;
L_0891FBC8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0891FBCC;
L_0891FBCC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FBEC;
      }
      goto L_0891FBD4;
    }
L_0891FBD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0891FBE8u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891FBE8u) goto L_0891FBE8;
    return;
L_0891FBE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0891FBEC;
L_0891FBEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FC00;
      }
      goto L_0891FBF4;
    }
L_0891FBF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891FC00;
    }
L_0891FC00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0891FC1C;
      }
      goto L_0891FC0C;
    }
L_0891FC0C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891FC1C;
    }
L_0891FC1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 22u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0891FC44;
      }
      goto L_0891FC38;
    }
L_0891FC38:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0891FC44;
L_0891FC44:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (12288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891FC78;
    }
L_0891FC78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0891FC94;
      }
      goto L_0891FC84;
    }
L_0891FC84:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891FC94;
    }
L_0891FC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 22u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0891FCBC;
      }
      goto L_0891FCB0;
    }
L_0891FCB0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0891FCBC;
L_0891FCBC:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (12288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0891FCEC;
L_0891FCEC:
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
L_0891FD10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1328));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1280), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1260), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1264), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1268), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1276), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1284), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1288), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1292), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1296), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1300), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1304), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1308), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1312), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891FD5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem) && ctx.pc == 0x0891FD5Cu) goto L_0891FD5C;
    return;
L_0891FD5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0891FD7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0891FD7Cu) goto L_0891FD7C;
    return;
L_0891FD7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FD98;
      }
      goto L_0891FD84;
    }
L_0891FD84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891FD98;
      }
      goto L_0891FD94;
    }
L_0891FD94:
    ctx.gpr[17] = (0u | 1u);
    goto L_0891FD98;
L_0891FD98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2204)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_0891FDF0;
      }
      goto L_0891FDBC;
    }
L_0891FDBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FDF0;
      }
      goto L_0891FDD0;
    }
L_0891FDD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891FDF0;
      }
      goto L_0891FDE0;
    }
L_0891FDE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(304))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2204), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891FDF0;
L_0891FDF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FE0C;
      }
      goto L_0891FDFC;
    }
L_0891FDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_0891FE0C;
L_0891FE0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] >> 22u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FE38;
      }
      goto L_0891FE30;
    }
L_0891FE30:
    ctx.gpr[31] = (0x0891FE38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 450u, 0x08A930F8u>(ctx, &aot_mem) && ctx.pc == 0x0891FE38u) goto L_0891FE38;
    return;
L_0891FE38:
    ctx.gpr[31] = (0x0891FE40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 191u, 0x0894530Cu>(ctx, &aot_mem) && ctx.pc == 0x0891FE40u) goto L_0891FE40;
    return;
L_0891FE40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891FE8C;
      }
      goto L_0891FE54;
    }
L_0891FE54:
    ctx.gpr[31] = (0x0891FE5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 819u, 0x0890FA3Cu>(ctx, &aot_mem) && ctx.pc == 0x0891FE5Cu) goto L_0891FE5C;
    return;
L_0891FE5C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0891FEAC;
      }
      goto L_0891FE68;
    }
L_0891FE68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0891FE84u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891FE84u) goto L_0891FE84;
    return;
L_0891FE84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FEAC;
      }
      goto L_0891FE8C;
    }
L_0891FE8C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FEAC;
      }
      goto L_0891FE98;
    }
L_0891FE98:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FEAC;
      }
      goto L_0891FEA8;
    }
L_0891FEA8:
    ctx.gpr[18] = (0u | 255u);
    goto L_0891FEAC;
L_0891FEAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0891FEB8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem) && ctx.pc == 0x0891FEB8u) goto L_0891FEB8;
    return;
L_0891FEB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65408u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891FEE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 31u, 0x08914630u>(ctx, &aot_mem) && ctx.pc == 0x0891FEE4u) goto L_0891FEE4;
    return;
L_0891FEE4:
    ctx.gpr[31] = (0x0891FEECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 422u, 0x0891A380u>(ctx, &aot_mem) && ctx.pc == 0x0891FEECu) goto L_0891FEEC;
    return;
L_0891FEEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891FF44;
      }
      goto L_0891FEFC;
    }
L_0891FEFC:
    ctx.gpr[31] = (0x0891FF04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 741u, 0x08912FB0u>(ctx, &aot_mem) && ctx.pc == 0x0891FF04u) goto L_0891FF04;
    return;
L_0891FF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(232));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0891FF1Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891FF1Cu) goto L_0891FF1C;
    return;
L_0891FF1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0891FF34u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891FF34u) goto L_0891FF34;
    return;
L_0891FF34:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF54;
      }
      goto L_0891FF3C;
    }
L_0891FF3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF9C;
      }
      goto L_0891FF44;
    }
L_0891FF44:
    ctx.gpr[31] = (0x0891FF4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 68u, 0x08860704u>(ctx, &aot_mem) && ctx.pc == 0x0891FF4Cu) goto L_0891FF4C;
    return;
L_0891FF4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 144u, 0x089246E4u>(ctx, &aot_mem); return;
      }
      goto L_0891FF54;
    }
L_0891FF54:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(2016));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891FF6Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 413u, 0x08AD9658u>(ctx, &aot_mem) && ctx.pc == 0x0891FF6Cu) goto L_0891FF6C;
    return;
L_0891FF6C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891FF7Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 317u, 0x08821BF4u>(ctx, &aot_mem) && ctx.pc == 0x0891FF7Cu) goto L_0891FF7C;
    return;
L_0891FF7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF8C;
      }
      goto L_0891FF84;
    }
L_0891FF84:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2056), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891FF8C;
L_0891FF8C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2016));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0891FF9Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 554u, 0x08ADA2B4u>(ctx, &aot_mem) && ctx.pc == 0x0891FF9Cu) goto L_0891FF9C;
    return;
L_0891FF9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 59u, 0x089206D4u>(ctx, &aot_mem); return;
      }
      goto L_0891FFAC;
    }
L_0891FFAC:
    ctx.gpr[31] = (0x0891FFB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 831u, 0x08833D14u>(ctx, &aot_mem) && ctx.pc == 0x0891FFB4u) goto L_0891FFB4;
    return;
L_0891FFB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 38u, 0x08920498u>(ctx, &aot_mem); return;
      }
      goto L_0891FFC0;
    }
L_0891FFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 38u, 0x08920498u>(ctx, &aot_mem); return;
      }
      goto L_0891FFD8;
    }
L_0891FFD8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1768)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FFF8;
      }
      goto L_0891FFF0;
    }
L_0891FFF0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 6u, 0x08920040u>(ctx, &aot_mem); return;
      }
      goto L_0891FFF8;
    }
L_0891FFF8:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(7001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 3u, 0x08920014u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 2u, 0x08920004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0070(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0070_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_70(Runtime &runtime) {
    runtime.register_generated_unit(70u, 0x0891C000u, 16384u, &recomp_unit_0070, &recomp_unit_0070_entry);
    runtime.register_function(0x0891C000u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C018u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C01Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C024u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C038u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C04Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C06Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C07Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C084u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C094u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C128u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C130u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C138u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C140u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C148u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C150u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C160u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C168u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C170u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C178u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C180u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C18Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C198u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C210u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C228u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C22Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C238u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C24Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C254u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C25Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C264u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C274u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C280u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C290u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C294u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C29Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C308u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C33Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C348u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C354u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C37Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C380u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C410u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C420u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C424u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C44Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C484u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C494u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C49Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C500u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C51Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C528u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C530u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C538u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C548u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C550u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C564u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C56Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C574u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C588u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C594u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C604u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C608u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C610u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C630u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C644u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C66Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C700u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C708u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C710u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C71Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C740u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C748u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C79Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C810u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C81Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C82Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C844u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C850u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C868u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C870u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C888u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C88Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C898u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C900u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C904u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C930u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C944u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C95Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C974u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C998u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CABCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CACCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD28u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CDCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CECCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CED8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEF8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D00Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D01Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D024u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D034u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D044u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D050u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D058u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D068u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D078u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D08Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D144u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D170u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D17Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D190u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D208u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D210u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D228u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D24Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D254u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D260u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D26Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D27Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D288u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D28Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D328u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D37Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D410u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D430u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D438u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D440u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D448u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D47Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D484u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D514u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D59Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D630u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D65Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D670u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D69Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D700u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D708u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D72Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D748u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D750u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D758u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D848u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D860u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D86Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D88Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D898u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D8A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D8D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D904u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D908u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D918u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D940u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D950u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D98Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DABCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DACCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E00Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E01Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E028u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E040u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E054u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E064u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E114u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E144u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E170u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E218u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E22Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E288u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E294u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E308u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E318u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E324u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E33Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E350u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E360u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E410u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E42Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E43Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E478u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E48Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E49Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E504u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E50Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E518u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E520u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E52Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E534u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E540u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E550u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E558u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E568u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E574u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E57Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E58Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E600u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E608u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E610u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E624u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E640u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E698u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E700u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E708u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E71Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E738u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E790u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E808u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E814u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E81Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E824u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E838u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E840u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E84Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E858u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E864u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E870u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E874u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E908u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E914u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E920u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E928u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E930u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E938u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E940u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E948u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E950u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E958u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E960u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E974u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E97Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EABCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ECB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EECCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EED4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEF8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF28u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F014u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F024u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F02Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F03Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F048u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F054u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F064u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F070u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F07Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F08Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F098u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F104u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F10Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F124u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F134u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F13Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F158u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F17Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F18Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F194u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F208u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F224u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F238u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F24Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F254u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F264u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F270u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F278u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F280u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F338u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F374u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F388u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F38Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F398u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F404u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F40Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F414u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F420u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F430u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F44Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F458u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F464u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F474u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F484u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F494u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F504u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F518u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F530u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F538u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F540u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F548u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F550u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F558u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F560u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F570u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F580u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F590u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F598u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F604u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F614u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F61Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F624u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F63Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F640u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F648u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F660u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F664u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F678u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F67Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F698u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F70Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F71Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F724u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F72Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F734u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F73Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F750u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F758u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F760u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F780u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F78Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F794u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F798u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F800u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F80Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F81Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F828u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F830u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F838u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F844u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F84Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F854u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F860u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F868u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F87Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F888u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F890u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F89Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F900u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F910u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F91Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F934u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F944u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F94Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F954u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F95Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F964u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F97Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F980u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F988u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F994u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA28u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FADCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFF8u, &recomp_unit_0070, "recomp_unit_0070");
}
} // namespace psprecomp
