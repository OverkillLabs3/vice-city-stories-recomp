#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0018[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0,
    20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 0, 42, 0,
    0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 54,
    0, 55, 0, 56, 0, 57, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 0,
    70, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 89, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 107, 0,
    0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0,
    131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 143, 144, 0, 145, 0, 146, 147, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0,
    0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 159, 160, 0, 161, 0, 0, 162, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0,
    0, 169, 0, 170, 0, 0, 0, 0, 171, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 178,
    0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0,
    192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 204,
    0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 207, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0,
    0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 224, 225, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0,
    0, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 257,
    0, 258, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0,
    274, 0, 275, 0, 276, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 282,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0,
    0, 290, 0, 0, 0, 0, 0, 291, 292, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0,
    297, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    311, 0, 312, 0, 313, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 321,
    0, 322, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 330, 0, 331, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0,
    0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 362, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366,
    0, 0, 0, 367, 0, 0, 0, 368, 0, 369, 0, 370, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374,
    0, 0, 375, 0, 0, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0,
    0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0,
    0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 402, 0, 403,
    0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 408, 0, 409, 0, 410, 0, 411, 0, 0, 0,
    0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0,
    0, 0, 417, 0, 0, 418, 0, 0, 0, 419, 0, 420, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424,
    0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 0,
    0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 444, 0, 445, 0, 446, 0, 0, 0, 0, 0,
    0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 451, 0, 452, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0,
    0, 0, 455, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 458, 0, 459, 0, 460, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463,
    0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 470, 0,
    0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 483, 0, 0, 0, 484, 0, 0,
    485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 0, 0, 0, 491, 492, 493, 0, 494, 495, 0, 0, 0, 0, 0,
    0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 0, 511, 0,
    512, 0, 513, 0, 514, 515, 0, 516, 0, 0, 517, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 522, 0,
    0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0,
    0, 0, 0, 0, 531, 0, 0, 532, 0, 533, 0, 0, 534, 0, 535, 0, 0, 536, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0,
    0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 542, 0, 543, 0, 544, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 0, 553, 0, 554, 0, 0, 555, 0, 0,
    0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 559, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    561, 0, 562, 0, 0, 563, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 0, 0,
    573, 0, 574, 0, 0, 575, 0, 0, 576, 0, 577, 0, 0, 0, 578, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0,
    589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0, 0, 592,
    0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    596, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    600, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 0, 604, 0, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 615, 0, 616, 0, 0,
    617, 0, 618, 0, 0, 0, 0, 619, 0, 620, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    628, 0, 629, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 635,
    0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 641, 0, 0, 0,
    0, 0, 642, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 646, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0,
    649, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0, 0, 656,
    0, 0, 657, 0, 658, 0, 0, 0, 0, 659, 0, 0, 660, 0, 661, 0, 0, 0, 0, 662, 663, 0, 0, 664, 0, 0, 665, 0, 666, 0, 667, 0,
    0, 668, 0, 0, 669, 0, 670, 0, 0, 671, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 677, 0, 678, 0, 0,
    0, 0, 679, 0, 680, 0, 681, 0, 0, 0, 682, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685,
    0, 686, 687, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 690, 0, 691, 692, 0, 0, 693, 0, 694, 0, 0, 0, 695, 696, 0, 0, 697, 0, 0,
    0, 698, 0, 699, 0, 0, 700, 0, 0, 0, 701, 0, 702, 0, 0, 703, 0, 704, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 707, 0, 0,
    708, 0, 0, 0, 0, 709, 0, 0, 710, 711, 0, 0, 0, 712, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 715, 0, 716, 717, 0, 0, 0, 0, 718, 0, 0, 719, 0, 0, 720, 0, 721, 722, 0, 0, 723, 0, 724, 0, 0, 0, 725, 726, 0, 0, 727,
    0, 0, 0, 728, 0, 729, 0, 0, 730, 0, 0, 0, 731, 0, 732, 0, 0, 733, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 0,
    740, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 743, 0, 0, 0, 0, 744, 745, 0, 0, 0, 0, 0,
    0, 0, 0, 746, 0, 0, 747, 0, 0, 748, 0, 749, 0, 750, 0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 753, 0, 0, 0, 754, 0, 755, 756, 0, 757, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 759, 0, 0, 760, 0, 761, 0, 762, 0, 0, 0, 0, 763, 764, 0, 0, 0, 0, 0, 765, 0, 0, 766, 0, 767, 0, 0, 0, 0, 768,
    0, 0, 0, 0, 0, 769, 0, 770, 0, 771, 0, 0, 0, 0, 772, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0,
    0, 775, 0, 776, 0, 0, 0, 777, 0, 0, 778, 0, 0, 779, 0, 780, 0, 781, 0, 782, 0, 783, 0, 0, 0, 784, 0, 0, 785, 0, 0, 786,
    0, 787, 0, 788, 0, 0, 0, 789, 0, 790, 0, 0, 791, 0, 792, 0, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 796, 0, 797, 0, 0, 0,
    798, 0, 0, 799, 0, 0, 800, 0, 801, 0, 802, 0, 803, 0, 0, 804, 805, 0, 0, 0, 806, 0, 0, 807, 0, 0, 808, 0, 809, 0, 810,
};
void recomp_unit_0018_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0884C000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0018[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0884C000;
    case 2u: goto L_0884C048;
    case 3u: goto L_0884C09C;
    case 4u: goto L_0884C0B0;
    case 5u: goto L_0884C0E0;
    case 6u: goto L_0884C0F8;
    case 7u: goto L_0884C138;
    case 8u: goto L_0884C144;
    case 9u: goto L_0884C16C;
    case 10u: goto L_0884C188;
    case 11u: goto L_0884C1B0;
    case 12u: goto L_0884C1CC;
    case 13u: goto L_0884C1F8;
    case 14u: goto L_0884C240;
    case 15u: goto L_0884C248;
    case 16u: goto L_0884C250;
    case 17u: goto L_0884C258;
    case 18u: goto L_0884C268;
    case 19u: goto L_0884C278;
    case 20u: goto L_0884C280;
    case 21u: goto L_0884C288;
    case 22u: goto L_0884C298;
    case 23u: goto L_0884C2A8;
    case 24u: goto L_0884C2CC;
    case 25u: goto L_0884C2D8;
    case 26u: goto L_0884C2E0;
    case 27u: goto L_0884C334;
    case 28u: goto L_0884C33C;
    case 29u: goto L_0884C388;
    case 30u: goto L_0884C39C;
    case 31u: goto L_0884C3CC;
    case 32u: goto L_0884C3E4;
    case 33u: goto L_0884C424;
    case 34u: goto L_0884C430;
    case 35u: goto L_0884C458;
    case 36u: goto L_0884C474;
    case 37u: goto L_0884C494;
    case 38u: goto L_0884C4D0;
    case 39u: goto L_0884C4D8;
    case 40u: goto L_0884C4E0;
    case 41u: goto L_0884C4E8;
    case 42u: goto L_0884C4F8;
    case 43u: goto L_0884C508;
    case 44u: goto L_0884C510;
    case 45u: goto L_0884C53C;
    case 46u: goto L_0884C57C;
    case 47u: goto L_0884C5AC;
    case 48u: goto L_0884C5B4;
    case 49u: goto L_0884C5BC;
    case 50u: goto L_0884C5C4;
    case 51u: goto L_0884C5DC;
    case 52u: goto L_0884C5E4;
    case 53u: goto L_0884C5F0;
    case 54u: goto L_0884C5FC;
    case 55u: goto L_0884C604;
    case 56u: goto L_0884C60C;
    case 57u: goto L_0884C614;
    case 58u: goto L_0884C618;
    case 59u: goto L_0884C620;
    case 60u: goto L_0884C628;
    case 61u: goto L_0884C660;
    case 62u: goto L_0884C66C;
    case 63u: goto L_0884C68C;
    case 64u: goto L_0884C6A0;
    case 65u: goto L_0884C6B4;
    case 66u: goto L_0884C6D0;
    case 67u: goto L_0884C6D8;
    case 68u: goto L_0884C6E4;
    case 69u: goto L_0884C6EC;
    case 70u: goto L_0884C700;
    case 71u: goto L_0884C710;
    case 72u: goto L_0884C71C;
    case 73u: goto L_0884C730;
    case 74u: goto L_0884C73C;
    case 75u: goto L_0884C764;
    case 76u: goto L_0884C7B0;
    case 77u: goto L_0884C7FC;
    case 78u: goto L_0884C80C;
    case 79u: goto L_0884C820;
    case 80u: goto L_0884C82C;
    case 81u: goto L_0884C838;
    case 82u: goto L_0884C840;
    case 83u: goto L_0884C84C;
    case 84u: goto L_0884C868;
    case 85u: goto L_0884C880;
    case 86u: goto L_0884C888;
    case 87u: goto L_0884C89C;
    case 88u: goto L_0884C8A8;
    case 89u: goto L_0884C8AC;
    case 90u: goto L_0884C8B4;
    case 91u: goto L_0884C8BC;
    case 92u: goto L_0884C8D0;
    case 93u: goto L_0884C8F8;
    case 94u: goto L_0884C908;
    case 95u: goto L_0884C914;
    case 96u: goto L_0884C928;
    case 97u: goto L_0884C938;
    case 98u: goto L_0884C944;
    case 99u: goto L_0884C96C;
    case 100u: goto L_0884C998;
    case 101u: goto L_0884C9AC;
    case 102u: goto L_0884C9B4;
    case 103u: goto L_0884C9BC;
    case 104u: goto L_0884C9C8;
    case 105u: goto L_0884C9E4;
    case 106u: goto L_0884C9F0;
    case 107u: goto L_0884C9F8;
    case 108u: goto L_0884CA0C;
    case 109u: goto L_0884CA14;
    case 110u: goto L_0884CA20;
    case 111u: goto L_0884CA28;
    case 112u: goto L_0884CA30;
    case 113u: goto L_0884CA38;
    case 114u: goto L_0884CA40;
    case 115u: goto L_0884CA48;
    case 116u: goto L_0884CA60;
    case 117u: goto L_0884CA6C;
    case 118u: goto L_0884CA78;
    case 119u: goto L_0884CAB4;
    case 120u: goto L_0884CAC4;
    case 121u: goto L_0884CACC;
    case 122u: goto L_0884CAD4;
    case 123u: goto L_0884CAE8;
    case 124u: goto L_0884CB18;
    case 125u: goto L_0884CB2C;
    case 126u: goto L_0884CB38;
    case 127u: goto L_0884CB48;
    case 128u: goto L_0884CB54;
    case 129u: goto L_0884CB64;
    case 130u: goto L_0884CB74;
    case 131u: goto L_0884CB80;
    case 132u: goto L_0884CB90;
    case 133u: goto L_0884CBA0;
    case 134u: goto L_0884CBB4;
    case 135u: goto L_0884CBBC;
    case 136u: goto L_0884CBD0;
    case 137u: goto L_0884CBEC;
    case 138u: goto L_0884CC00;
    case 139u: goto L_0884CC2C;
    case 140u: goto L_0884CC3C;
    case 141u: goto L_0884CC4C;
    case 142u: goto L_0884CC58;
    case 143u: goto L_0884CC5C;
    case 144u: goto L_0884CC60;
    case 145u: goto L_0884CC68;
    case 146u: goto L_0884CC70;
    case 147u: goto L_0884CC74;
    case 148u: goto L_0884CC80;
    case 149u: goto L_0884CCE0;
    case 150u: goto L_0884CCF0;
    case 151u: goto L_0884CCF8;
    case 152u: goto L_0884CD0C;
    case 153u: goto L_0884CD18;
    case 154u: goto L_0884CD20;
    case 155u: goto L_0884CD30;
    case 156u: goto L_0884CD38;
    case 157u: goto L_0884CD44;
    case 158u: goto L_0884CD68;
    case 159u: goto L_0884CD8C;
    case 160u: goto L_0884CD90;
    case 161u: goto L_0884CD98;
    case 162u: goto L_0884CDA4;
    case 163u: goto L_0884CDA8;
    case 164u: goto L_0884CDC8;
    case 165u: goto L_0884CDD0;
    case 166u: goto L_0884CDE0;
    case 167u: goto L_0884CDE8;
    case 168u: goto L_0884CDF0;
    case 169u: goto L_0884CE04;
    case 170u: goto L_0884CE0C;
    case 171u: goto L_0884CE20;
    case 172u: goto L_0884CE24;
    case 173u: goto L_0884CE38;
    case 174u: goto L_0884CE4C;
    case 175u: goto L_0884CE5C;
    case 176u: goto L_0884CE6C;
    case 177u: goto L_0884CE78;
    case 178u: goto L_0884CE7C;
    case 179u: goto L_0884CE8C;
    case 180u: goto L_0884CE9C;
    case 181u: goto L_0884CEA4;
    case 182u: goto L_0884CEB4;
    case 183u: goto L_0884CEB8;
    case 184u: goto L_0884CEC0;
    case 185u: goto L_0884CEC8;
    case 186u: goto L_0884CF04;
    case 187u: goto L_0884CF40;
    case 188u: goto L_0884CF50;
    case 189u: goto L_0884CF58;
    case 190u: goto L_0884CF68;
    case 191u: goto L_0884CF78;
    case 192u: goto L_0884CF80;
    case 193u: goto L_0884CF90;
    case 194u: goto L_0884CF98;
    case 195u: goto L_0884CFAC;
    case 196u: goto L_0884CFC0;
    case 197u: goto L_0884CFD0;
    case 198u: goto L_0884CFFC;
    case 199u: goto L_0884D03C;
    case 200u: goto L_0884D04C;
    case 201u: goto L_0884D05C;
    case 202u: goto L_0884D068;
    case 203u: goto L_0884D070;
    case 204u: goto L_0884D07C;
    case 205u: goto L_0884D084;
    case 206u: goto L_0884D0C4;
    case 207u: goto L_0884D0C8;
    case 208u: goto L_0884D0D0;
    case 209u: goto L_0884D0D8;
    case 210u: goto L_0884D0F8;
    case 211u: goto L_0884D108;
    case 212u: goto L_0884D118;
    case 213u: goto L_0884D128;
    case 214u: goto L_0884D138;
    case 215u: goto L_0884D144;
    case 216u: goto L_0884D14C;
    case 217u: goto L_0884D154;
    case 218u: goto L_0884D168;
    case 219u: goto L_0884D18C;
    case 220u: goto L_0884D1A4;
    case 221u: goto L_0884D1B4;
    case 222u: goto L_0884D1BC;
    case 223u: goto L_0884D1D4;
    case 224u: goto L_0884D1E0;
    case 225u: goto L_0884D1E4;
    case 226u: goto L_0884D200;
    case 227u: goto L_0884D210;
    case 228u: goto L_0884D228;
    case 229u: goto L_0884D230;
    case 230u: goto L_0884D254;
    case 231u: goto L_0884D264;
    case 232u: goto L_0884D26C;
    case 233u: goto L_0884D294;
    case 234u: goto L_0884D2BC;
    case 235u: goto L_0884D2EC;
    case 236u: goto L_0884D30C;
    case 237u: goto L_0884D31C;
    case 238u: goto L_0884D328;
    case 239u: goto L_0884D330;
    case 240u: goto L_0884D33C;
    case 241u: goto L_0884D374;
    case 242u: goto L_0884D384;
    case 243u: goto L_0884D394;
    case 244u: goto L_0884D3A0;
    case 245u: goto L_0884D3A8;
    case 246u: goto L_0884D3B4;
    case 247u: goto L_0884D3BC;
    case 248u: goto L_0884D3F8;
    case 249u: goto L_0884D408;
    case 250u: goto L_0884D410;
    case 251u: goto L_0884D418;
    case 252u: goto L_0884D438;
    case 253u: goto L_0884D448;
    case 254u: goto L_0884D458;
    case 255u: goto L_0884D468;
    case 256u: goto L_0884D474;
    case 257u: goto L_0884D47C;
    case 258u: goto L_0884D484;
    case 259u: goto L_0884D498;
    case 260u: goto L_0884D4A0;
    case 261u: goto L_0884D4B8;
    case 262u: goto L_0884D4C4;
    case 263u: goto L_0884D4D4;
    case 264u: goto L_0884D4F0;
    case 265u: goto L_0884D500;
    case 266u: goto L_0884D52C;
    case 267u: goto L_0884D534;
    case 268u: goto L_0884D544;
    case 269u: goto L_0884D554;
    case 270u: goto L_0884D5AC;
    case 271u: goto L_0884D5D4;
    case 272u: goto L_0884D5EC;
    case 273u: goto L_0884D5F4;
    case 274u: goto L_0884D600;
    case 275u: goto L_0884D608;
    case 276u: goto L_0884D610;
    case 277u: goto L_0884D614;
    case 278u: goto L_0884D624;
    case 279u: goto L_0884D644;
    case 280u: goto L_0884D66C;
    case 281u: goto L_0884D674;
    case 282u: goto L_0884D67C;
    case 283u: goto L_0884D68C;
    case 284u: goto L_0884D6AC;
    case 285u: goto L_0884D6BC;
    case 286u: goto L_0884D6C4;
    case 287u: goto L_0884D6D4;
    case 288u: goto L_0884D6E0;
    case 289u: goto L_0884D6E8;
    case 290u: goto L_0884D704;
    case 291u: goto L_0884D71C;
    case 292u: goto L_0884D720;
    case 293u: goto L_0884D724;
    case 294u: goto L_0884D734;
    case 295u: goto L_0884D750;
    case 296u: goto L_0884D76C;
    case 297u: goto L_0884D780;
    case 298u: goto L_0884D78C;
    case 299u: goto L_0884D7A0;
    case 300u: goto L_0884D7AC;
    case 301u: goto L_0884D7CC;
    case 302u: goto L_0884D7E0;
    case 303u: goto L_0884D7F0;
    case 304u: goto L_0884D80C;
    case 305u: goto L_0884D820;
    case 306u: goto L_0884D830;
    case 307u: goto L_0884D840;
    case 308u: goto L_0884D844;
    case 309u: goto L_0884D854;
    case 310u: goto L_0884D8F0;
    case 311u: goto L_0884D900;
    case 312u: goto L_0884D908;
    case 313u: goto L_0884D910;
    case 314u: goto L_0884D914;
    case 315u: goto L_0884D91C;
    case 316u: goto L_0884D924;
    case 317u: goto L_0884D944;
    case 318u: goto L_0884D954;
    case 319u: goto L_0884D964;
    case 320u: goto L_0884D974;
    case 321u: goto L_0884D97C;
    case 322u: goto L_0884D984;
    case 323u: goto L_0884D98C;
    case 324u: goto L_0884D9A4;
    case 325u: goto L_0884D9C4;
    case 326u: goto L_0884D9D4;
    case 327u: goto L_0884DA04;
    case 328u: goto L_0884DA14;
    case 329u: goto L_0884DA24;
    case 330u: goto L_0884DA28;
    case 331u: goto L_0884DA30;
    case 332u: goto L_0884DA38;
    case 333u: goto L_0884DA4C;
    case 334u: goto L_0884DA74;
    case 335u: goto L_0884DA8C;
    case 336u: goto L_0884DA9C;
    case 337u: goto L_0884DAA4;
    case 338u: goto L_0884DABC;
    case 339u: goto L_0884DAC8;
    case 340u: goto L_0884DAE8;
    case 341u: goto L_0884DB18;
    case 342u: goto L_0884DB28;
    case 343u: goto L_0884DB38;
    case 344u: goto L_0884DB48;
    case 345u: goto L_0884DB78;
    case 346u: goto L_0884DB88;
    case 347u: goto L_0884DBA4;
    case 348u: goto L_0884DBB4;
    case 349u: goto L_0884DBCC;
    case 350u: goto L_0884DBD4;
    case 351u: goto L_0884DBF8;
    case 352u: goto L_0884DC08;
    case 353u: goto L_0884DC40;
    case 354u: goto L_0884DC74;
    case 355u: goto L_0884DCDC;
    case 356u: goto L_0884DCFC;
    case 357u: goto L_0884DD2C;
    case 358u: goto L_0884DD3C;
    case 359u: goto L_0884DD5C;
    case 360u: goto L_0884DD94;
    case 361u: goto L_0884DE38;
    case 362u: goto L_0884DE3C;
    case 363u: goto L_0884DE44;
    case 364u: goto L_0884DE4C;
    case 365u: goto L_0884DE6C;
    case 366u: goto L_0884DE7C;
    case 367u: goto L_0884DE8C;
    case 368u: goto L_0884DE9C;
    case 369u: goto L_0884DEA4;
    case 370u: goto L_0884DEAC;
    case 371u: goto L_0884DEB4;
    case 372u: goto L_0884DECC;
    case 373u: goto L_0884DEEC;
    case 374u: goto L_0884DEFC;
    case 375u: goto L_0884DF08;
    case 376u: goto L_0884DF18;
    case 377u: goto L_0884DF20;
    case 378u: goto L_0884DF28;
    case 379u: goto L_0884DF30;
    case 380u: goto L_0884DF44;
    case 381u: goto L_0884DF60;
    case 382u: goto L_0884DF78;
    case 383u: goto L_0884DF84;
    case 384u: goto L_0884DFA4;
    case 385u: goto L_0884DFB0;
    case 386u: goto L_0884DFC0;
    case 387u: goto L_0884DFD0;
    case 388u: goto L_0884DFDC;
    case 389u: goto L_0884DFF8;
    case 390u: goto L_0884E00C;
    case 391u: goto L_0884E024;
    case 392u: goto L_0884E02C;
    case 393u: goto L_0884E054;
    case 394u: goto L_0884E064;
    case 395u: goto L_0884E098;
    case 396u: goto L_0884E0A8;
    case 397u: goto L_0884E0B4;
    case 398u: goto L_0884E10C;
    case 399u: goto L_0884E140;
    case 400u: goto L_0884E1DC;
    case 401u: goto L_0884E1EC;
    case 402u: goto L_0884E1F4;
    case 403u: goto L_0884E1FC;
    case 404u: goto L_0884E21C;
    case 405u: goto L_0884E22C;
    case 406u: goto L_0884E23C;
    case 407u: goto L_0884E24C;
    case 408u: goto L_0884E258;
    case 409u: goto L_0884E260;
    case 410u: goto L_0884E268;
    case 411u: goto L_0884E270;
    case 412u: goto L_0884E288;
    case 413u: goto L_0884E2A8;
    case 414u: goto L_0884E2B8;
    case 415u: goto L_0884E2E8;
    case 416u: goto L_0884E2F8;
    case 417u: goto L_0884E308;
    case 418u: goto L_0884E314;
    case 419u: goto L_0884E324;
    case 420u: goto L_0884E32C;
    case 421u: goto L_0884E334;
    case 422u: goto L_0884E348;
    case 423u: goto L_0884E364;
    case 424u: goto L_0884E37C;
    case 425u: goto L_0884E388;
    case 426u: goto L_0884E3A8;
    case 427u: goto L_0884E3D8;
    case 428u: goto L_0884E3E8;
    case 429u: goto L_0884E3F8;
    case 430u: goto L_0884E408;
    case 431u: goto L_0884E438;
    case 432u: goto L_0884E448;
    case 433u: goto L_0884E464;
    case 434u: goto L_0884E474;
    case 435u: goto L_0884E4A0;
    case 436u: goto L_0884E4A8;
    case 437u: goto L_0884E4B8;
    case 438u: goto L_0884E4C8;
    case 439u: goto L_0884E500;
    case 440u: goto L_0884E534;
    case 441u: goto L_0884E57C;
    case 442u: goto L_0884E5B4;
    case 443u: goto L_0884E654;
    case 444u: goto L_0884E658;
    case 445u: goto L_0884E660;
    case 446u: goto L_0884E668;
    case 447u: goto L_0884E688;
    case 448u: goto L_0884E698;
    case 449u: goto L_0884E6A8;
    case 450u: goto L_0884E6B8;
    case 451u: goto L_0884E6C0;
    case 452u: goto L_0884E6C8;
    case 453u: goto L_0884E6D0;
    case 454u: goto L_0884E6E8;
    case 455u: goto L_0884E708;
    case 456u: goto L_0884E718;
    case 457u: goto L_0884E724;
    case 458u: goto L_0884E734;
    case 459u: goto L_0884E73C;
    case 460u: goto L_0884E744;
    case 461u: goto L_0884E74C;
    case 462u: goto L_0884E760;
    case 463u: goto L_0884E77C;
    case 464u: goto L_0884E794;
    case 465u: goto L_0884E7A0;
    case 466u: goto L_0884E7C0;
    case 467u: goto L_0884E7CC;
    case 468u: goto L_0884E7DC;
    case 469u: goto L_0884E7EC;
    case 470u: goto L_0884E7F8;
    case 471u: goto L_0884E814;
    case 472u: goto L_0884E828;
    case 473u: goto L_0884E854;
    case 474u: goto L_0884E85C;
    case 475u: goto L_0884E86C;
    case 476u: goto L_0884E87C;
    case 477u: goto L_0884E8A8;
    case 478u: goto L_0884E8B8;
    case 479u: goto L_0884E8C4;
    case 480u: goto L_0884E91C;
    case 481u: goto L_0884E950;
    case 482u: goto L_0884E958;
    case 483u: goto L_0884E964;
    case 484u: goto L_0884E974;
    case 485u: goto L_0884E980;
    case 486u: goto L_0884E9A0;
    case 487u: goto L_0884E9A8;
    case 488u: goto L_0884E9B0;
    case 489u: goto L_0884E9B8;
    case 490u: goto L_0884E9C0;
    case 491u: goto L_0884E9D4;
    case 492u: goto L_0884E9D8;
    case 493u: goto L_0884E9DC;
    case 494u: goto L_0884E9E4;
    case 495u: goto L_0884E9E8;
    case 496u: goto L_0884EA04;
    case 497u: goto L_0884EA18;
    case 498u: goto L_0884EAA0;
    case 499u: goto L_0884EAC4;
    case 500u: goto L_0884EB10;
    case 501u: goto L_0884EB20;
    case 502u: goto L_0884EB28;
    case 503u: goto L_0884EB30;
    case 504u: goto L_0884EB38;
    case 505u: goto L_0884EB40;
    case 506u: goto L_0884EB4C;
    case 507u: goto L_0884EB54;
    case 508u: goto L_0884EB5C;
    case 509u: goto L_0884EB64;
    case 510u: goto L_0884EB6C;
    case 511u: goto L_0884EB78;
    case 512u: goto L_0884EB80;
    case 513u: goto L_0884EB88;
    case 514u: goto L_0884EB90;
    case 515u: goto L_0884EB94;
    case 516u: goto L_0884EB9C;
    case 517u: goto L_0884EBA8;
    case 518u: goto L_0884EBB0;
    case 519u: goto L_0884EBCC;
    case 520u: goto L_0884EBE8;
    case 521u: goto L_0884EBF0;
    case 522u: goto L_0884EBF8;
    case 523u: goto L_0884EC04;
    case 524u: goto L_0884EC14;
    case 525u: goto L_0884EC30;
    case 526u: goto L_0884EC6C;
    case 527u: goto L_0884ECB0;
    case 528u: goto L_0884ECB8;
    case 529u: goto L_0884ECEC;
    case 530u: goto L_0884ECF4;
    case 531u: goto L_0884ED10;
    case 532u: goto L_0884ED1C;
    case 533u: goto L_0884ED24;
    case 534u: goto L_0884ED30;
    case 535u: goto L_0884ED38;
    case 536u: goto L_0884ED44;
    case 537u: goto L_0884ED60;
    case 538u: goto L_0884ED84;
    case 539u: goto L_0884EDB0;
    case 540u: goto L_0884EDD0;
    case 541u: goto L_0884EDDC;
    case 542u: goto L_0884EDE4;
    case 543u: goto L_0884EDEC;
    case 544u: goto L_0884EDF4;
    case 545u: goto L_0884EE1C;
    case 546u: goto L_0884EE24;
    case 547u: goto L_0884EE2C;
    case 548u: goto L_0884EE34;
    case 549u: goto L_0884EE3C;
    case 550u: goto L_0884EE44;
    case 551u: goto L_0884EE4C;
    case 552u: goto L_0884EE54;
    case 553u: goto L_0884EE60;
    case 554u: goto L_0884EE68;
    case 555u: goto L_0884EE74;
    case 556u: goto L_0884EE84;
    case 557u: goto L_0884EEA0;
    case 558u: goto L_0884EEA8;
    case 559u: goto L_0884EEB8;
    case 560u: goto L_0884EEBC;
    case 561u: goto L_0884EF00;
    case 562u: goto L_0884EF08;
    case 563u: goto L_0884EF14;
    case 564u: goto L_0884EF1C;
    case 565u: goto L_0884EF30;
    case 566u: goto L_0884EF44;
    case 567u: goto L_0884EF4C;
    case 568u: goto L_0884EF54;
    case 569u: goto L_0884EF5C;
    case 570u: goto L_0884EF64;
    case 571u: goto L_0884EF6C;
    case 572u: goto L_0884EF74;
    case 573u: goto L_0884EF80;
    case 574u: goto L_0884EF88;
    case 575u: goto L_0884EF94;
    case 576u: goto L_0884EFA0;
    case 577u: goto L_0884EFA8;
    case 578u: goto L_0884EFB8;
    case 579u: goto L_0884EFBC;
    case 580u: goto L_0884EFC8;
    case 581u: goto L_0884EFE4;
    case 582u: goto L_0884F048;
    case 583u: goto L_0884F054;
    case 584u: goto L_0884F0B0;
    case 585u: goto L_0884F0B8;
    case 586u: goto L_0884F114;
    case 587u: goto L_0884F120;
    case 588u: goto L_0884F174;
    case 589u: goto L_0884F180;
    case 590u: goto L_0884F1DC;
    case 591u: goto L_0884F1E8;
    case 592u: goto L_0884F1FC;
    case 593u: goto L_0884F220;
    case 594u: goto L_0884F238;
    case 595u: goto L_0884F250;
    case 596u: goto L_0884F280;
    case 597u: goto L_0884F28C;
    case 598u: goto L_0884F2AC;
    case 599u: goto L_0884F2CC;
    case 600u: goto L_0884F300;
    case 601u: goto L_0884F318;
    case 602u: goto L_0884F328;
    case 603u: goto L_0884F334;
    case 604u: goto L_0884F340;
    case 605u: goto L_0884F350;
    case 606u: goto L_0884F35C;
    case 607u: goto L_0884F368;
    case 608u: goto L_0884F374;
    case 609u: goto L_0884F3A0;
    case 610u: goto L_0884F3AC;
    case 611u: goto L_0884F3B4;
    case 612u: goto L_0884F3BC;
    case 613u: goto L_0884F3D0;
    case 614u: goto L_0884F3E0;
    case 615u: goto L_0884F3EC;
    case 616u: goto L_0884F3F4;
    case 617u: goto L_0884F400;
    case 618u: goto L_0884F408;
    case 619u: goto L_0884F41C;
    case 620u: goto L_0884F424;
    case 621u: goto L_0884F42C;
    case 622u: goto L_0884F43C;
    case 623u: goto L_0884F448;
    case 624u: goto L_0884F450;
    case 625u: goto L_0884F468;
    case 626u: goto L_0884F478;
    case 627u: goto L_0884F4B8;
    case 628u: goto L_0884F500;
    case 629u: goto L_0884F508;
    case 630u: goto L_0884F528;
    case 631u: goto L_0884F534;
    case 632u: goto L_0884F53C;
    case 633u: goto L_0884F56C;
    case 634u: goto L_0884F574;
    case 635u: goto L_0884F57C;
    case 636u: goto L_0884F59C;
    case 637u: goto L_0884F5A8;
    case 638u: goto L_0884F5B0;
    case 639u: goto L_0884F5E0;
    case 640u: goto L_0884F5E8;
    case 641u: goto L_0884F5F0;
    case 642u: goto L_0884F608;
    case 643u: goto L_0884F614;
    case 644u: goto L_0884F61C;
    case 645u: goto L_0884F64C;
    case 646u: goto L_0884F654;
    case 647u: goto L_0884F65C;
    case 648u: goto L_0884F674;
    case 649u: goto L_0884F680;
    case 650u: goto L_0884F688;
    case 651u: goto L_0884F6B8;
    case 652u: goto L_0884F6C0;
    case 653u: goto L_0884F6D4;
    case 654u: goto L_0884F6E0;
    case 655u: goto L_0884F6E8;
    case 656u: goto L_0884F6FC;
    case 657u: goto L_0884F708;
    case 658u: goto L_0884F710;
    case 659u: goto L_0884F724;
    case 660u: goto L_0884F730;
    case 661u: goto L_0884F738;
    case 662u: goto L_0884F74C;
    case 663u: goto L_0884F750;
    case 664u: goto L_0884F75C;
    case 665u: goto L_0884F768;
    case 666u: goto L_0884F770;
    case 667u: goto L_0884F778;
    case 668u: goto L_0884F784;
    case 669u: goto L_0884F790;
    case 670u: goto L_0884F798;
    case 671u: goto L_0884F7A4;
    case 672u: goto L_0884F7B0;
    case 673u: goto L_0884F7DC;
    case 674u: goto L_0884F80C;
    case 675u: goto L_0884F84C;
    case 676u: goto L_0884F860;
    case 677u: goto L_0884F86C;
    case 678u: goto L_0884F874;
    case 679u: goto L_0884F888;
    case 680u: goto L_0884F890;
    case 681u: goto L_0884F898;
    case 682u: goto L_0884F8A8;
    case 683u: goto L_0884F8B4;
    case 684u: goto L_0884F8C4;
    case 685u: goto L_0884F8FC;
    case 686u: goto L_0884F904;
    case 687u: goto L_0884F908;
    case 688u: goto L_0884F91C;
    case 689u: goto L_0884F928;
    case 690u: goto L_0884F934;
    case 691u: goto L_0884F93C;
    case 692u: goto L_0884F940;
    case 693u: goto L_0884F94C;
    case 694u: goto L_0884F954;
    case 695u: goto L_0884F964;
    case 696u: goto L_0884F968;
    case 697u: goto L_0884F974;
    case 698u: goto L_0884F984;
    case 699u: goto L_0884F98C;
    case 700u: goto L_0884F998;
    case 701u: goto L_0884F9A8;
    case 702u: goto L_0884F9B0;
    case 703u: goto L_0884F9BC;
    case 704u: goto L_0884F9C4;
    case 705u: goto L_0884F9D8;
    case 706u: goto L_0884F9E0;
    case 707u: goto L_0884F9F4;
    case 708u: goto L_0884FA00;
    case 709u: goto L_0884FA14;
    case 710u: goto L_0884FA20;
    case 711u: goto L_0884FA24;
    case 712u: goto L_0884FA34;
    case 713u: goto L_0884FA40;
    case 714u: goto L_0884FA50;
    case 715u: goto L_0884FA84;
    case 716u: goto L_0884FA8C;
    case 717u: goto L_0884FA90;
    case 718u: goto L_0884FAA4;
    case 719u: goto L_0884FAB0;
    case 720u: goto L_0884FABC;
    case 721u: goto L_0884FAC4;
    case 722u: goto L_0884FAC8;
    case 723u: goto L_0884FAD4;
    case 724u: goto L_0884FADC;
    case 725u: goto L_0884FAEC;
    case 726u: goto L_0884FAF0;
    case 727u: goto L_0884FAFC;
    case 728u: goto L_0884FB0C;
    case 729u: goto L_0884FB14;
    case 730u: goto L_0884FB20;
    case 731u: goto L_0884FB30;
    case 732u: goto L_0884FB38;
    case 733u: goto L_0884FB44;
    case 734u: goto L_0884FB4C;
    case 735u: goto L_0884FB60;
    case 736u: goto L_0884FB74;
    case 737u: goto L_0884FBA0;
    case 738u: goto L_0884FBEC;
    case 739u: goto L_0884FBF4;
    case 740u: goto L_0884FC00;
    case 741u: goto L_0884FC08;
    case 742u: goto L_0884FC48;
    case 743u: goto L_0884FC50;
    case 744u: goto L_0884FC64;
    case 745u: goto L_0884FC68;
    case 746u: goto L_0884FC8C;
    case 747u: goto L_0884FC98;
    case 748u: goto L_0884FCA4;
    case 749u: goto L_0884FCAC;
    case 750u: goto L_0884FCB4;
    case 751u: goto L_0884FCBC;
    case 752u: goto L_0884FCC8;
    case 753u: goto L_0884FD10;
    case 754u: goto L_0884FD20;
    case 755u: goto L_0884FD28;
    case 756u: goto L_0884FD2C;
    case 757u: goto L_0884FD34;
    case 758u: goto L_0884FD40;
    case 759u: goto L_0884FD88;
    case 760u: goto L_0884FD94;
    case 761u: goto L_0884FD9C;
    case 762u: goto L_0884FDA4;
    case 763u: goto L_0884FDB8;
    case 764u: goto L_0884FDBC;
    case 765u: goto L_0884FDD4;
    case 766u: goto L_0884FDE0;
    case 767u: goto L_0884FDE8;
    case 768u: goto L_0884FDFC;
    case 769u: goto L_0884FE14;
    case 770u: goto L_0884FE1C;
    case 771u: goto L_0884FE24;
    case 772u: goto L_0884FE38;
    case 773u: goto L_0884FE3C;
    case 774u: goto L_0884FE64;
    case 775u: goto L_0884FE84;
    case 776u: goto L_0884FE8C;
    case 777u: goto L_0884FE9C;
    case 778u: goto L_0884FEA8;
    case 779u: goto L_0884FEB4;
    case 780u: goto L_0884FEBC;
    case 781u: goto L_0884FEC4;
    case 782u: goto L_0884FECC;
    case 783u: goto L_0884FED4;
    case 784u: goto L_0884FEE4;
    case 785u: goto L_0884FEF0;
    case 786u: goto L_0884FEFC;
    case 787u: goto L_0884FF04;
    case 788u: goto L_0884FF0C;
    case 789u: goto L_0884FF1C;
    case 790u: goto L_0884FF24;
    case 791u: goto L_0884FF30;
    case 792u: goto L_0884FF38;
    case 793u: goto L_0884FF48;
    case 794u: goto L_0884FF54;
    case 795u: goto L_0884FF60;
    case 796u: goto L_0884FF68;
    case 797u: goto L_0884FF70;
    case 798u: goto L_0884FF80;
    case 799u: goto L_0884FF8C;
    case 800u: goto L_0884FF98;
    case 801u: goto L_0884FFA0;
    case 802u: goto L_0884FFA8;
    case 803u: goto L_0884FFB0;
    case 804u: goto L_0884FFBC;
    case 805u: goto L_0884FFC0;
    case 806u: goto L_0884FFD0;
    case 807u: goto L_0884FFDC;
    case 808u: goto L_0884FFE8;
    case 809u: goto L_0884FFF0;
    case 810u: goto L_0884FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0884C000:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C09C;
      }
      goto L_0884C048;
    }
L_0884C048:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    goto L_0884C09C;
L_0884C09C:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884C0B0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0884C0B0u) goto L_0884C0B0;
    return;
L_0884C0B0:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0884C0E0;
    }
    goto L_0884C0E0;
L_0884C0E0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884C268;
      }
      goto L_0884C0F8;
    }
L_0884C0F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884C268;
      }
      goto L_0884C138;
    }
L_0884C138:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C16C;
      }
      goto L_0884C144;
    }
L_0884C144:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 166u);
    ctx.gpr[31] = (0x0884C16Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0884C16Cu) goto L_0884C16C;
    return;
L_0884C16C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884C268;
      }
      goto L_0884C188;
    }
L_0884C188:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0884C1B0;
    }
    goto L_0884C1B0;
L_0884C1B0:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884C1CCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x0884C1CCu) goto L_0884C1CC;
    return;
L_0884C1CC:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0884C1F8;
    }
    goto L_0884C1F8;
L_0884C1F8:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x0884C240u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x0884C240u) goto L_0884C240;
    return;
L_0884C240:
    ctx.gpr[31] = (0x0884C248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0884C248u) goto L_0884C248;
    return;
L_0884C248:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884C268;
      }
      goto L_0884C250;
    }
L_0884C250:
    ctx.gpr[31] = (0x0884C258u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0884C258u) goto L_0884C258;
    return;
L_0884C258:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 300u);
    ctx.gpr[31] = (0x0884C268u);
    ctx.gpr[6] = (0u | 70u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C268u) goto L_0884C268;
    return;
L_0884C268:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 662u, 0x0884BEC8u>(ctx, &aot_mem); return;
      }
      goto L_0884C278;
    }
L_0884C278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C508;
      }
      goto L_0884C280;
    }
L_0884C280:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C508;
      }
      goto L_0884C288;
    }
L_0884C288:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C508;
      }
      goto L_0884C298;
    }
L_0884C298:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1276)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884C4F8;
      }
      goto L_0884C2A8;
    }
L_0884C2A8:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1216)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884C4F8;
      }
      goto L_0884C2CC;
    }
L_0884C2CC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_0884C334;
    }
    goto L_0884C2D8;
L_0884C2D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0884C388;
      }
      goto L_0884C2E0;
    }
L_0884C2E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C388;
      }
      goto L_0884C334;
    }
L_0884C334:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C388;
      }
      goto L_0884C33C;
    }
L_0884C33C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    goto L_0884C388;
L_0884C388:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884C39Cu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0884C39Cu) goto L_0884C39C;
    return;
L_0884C39C:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0884C3CC;
    }
    goto L_0884C3CC;
L_0884C3CC:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884C4F8;
      }
      goto L_0884C3E4;
    }
L_0884C3E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884C4F8;
      }
      goto L_0884C424;
    }
L_0884C424:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C458;
      }
      goto L_0884C430;
    }
L_0884C430:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1276), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 166u);
    ctx.gpr[31] = (0x0884C458u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0884C458u) goto L_0884C458;
    return;
L_0884C458:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884C4F8;
      }
      goto L_0884C474;
    }
L_0884C474:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0884C494u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x0884C494u) goto L_0884C494;
    return;
L_0884C494:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0884C4D0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x0884C4D0u) goto L_0884C4D0;
    return;
L_0884C4D0:
    ctx.gpr[31] = (0x0884C4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0884C4D8u) goto L_0884C4D8;
    return;
L_0884C4D8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884C4F8;
      }
      goto L_0884C4E0;
    }
L_0884C4E0:
    ctx.gpr[31] = (0x0884C4E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0884C4E8u) goto L_0884C4E8;
    return;
L_0884C4E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 300u);
    ctx.gpr[31] = (0x0884C4F8u);
    ctx.gpr[6] = (0u | 70u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C4F8u) goto L_0884C4F8;
    return;
L_0884C4F8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884C298;
      }
      goto L_0884C508;
    }
L_0884C508:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 649u, 0x0884BDA0u>(ctx, &aot_mem); return;
      }
      goto L_0884C510;
    }
L_0884C510:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C53C:
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29840), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29836), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29832), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C57C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0884C5BC;
      }
      goto L_0884C5AC;
    }
L_0884C5AC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884C5C4;
      }
      goto L_0884C5B4;
    }
L_0884C5B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C5E4;
      }
      goto L_0884C5BC;
    }
L_0884C5BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C66C;
      }
      goto L_0884C5C4;
    }
L_0884C5C4:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884C5DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 534u, 0x089B716Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C5DCu) goto L_0884C5DC;
    return;
L_0884C5DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884C604;
      }
      goto L_0884C5E4;
    }
L_0884C5E4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0884C5F0u);
    ctx.gpr[4] = (0u | 48u);
    goto L_0884C700;
L_0884C5F0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884C60C;
      }
      goto L_0884C5FC;
    }
L_0884C5FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C618;
      }
      goto L_0884C604;
    }
L_0884C604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C66C;
      }
      goto L_0884C60C;
    }
L_0884C60C:
    ctx.gpr[31] = (0x0884C614u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0884C68C;
L_0884C614:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    goto L_0884C618;
L_0884C618:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884C628;
      }
      goto L_0884C620;
    }
L_0884C620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C66C;
      }
      goto L_0884C628;
    }
L_0884C628:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884C660u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 544u, 0x089B722Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C660u) goto L_0884C660;
    return;
L_0884C660:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x0884C66Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 544u, 0x08A06228u>(ctx, &aot_mem) && ctx.pc == 0x0884C66Cu) goto L_0884C66C;
    return;
L_0884C66C:
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
L_0884C68C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884C6A0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0884C73C;
L_0884C6A0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C6B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0884C6EC;
      }
      goto L_0884C6D0;
    }
L_0884C6D0:
    ctx.gpr[31] = (0x0884C6D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0884C73C;
L_0884C6D8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C6EC;
      }
      goto L_0884C6E4;
    }
L_0884C6E4:
    ctx.gpr[31] = (0x0884C6ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0884C71C;
L_0884C6EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C700:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884C710u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15948)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 668u, 0x08B66C74u>(ctx, &aot_mem) && ctx.pc == 0x0884C710u) goto L_0884C710;
    return;
L_0884C710:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C71C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884C730u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15948)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 676u, 0x08B66D30u>(ctx, &aot_mem) && ctx.pc == 0x0884C730u) goto L_0884C730;
    return;
L_0884C730:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C73C:
    ctx.gpr[5] = (0u | 89u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C764:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20440));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884C7B0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 97u, 0x088E1EC0u>(ctx, &aot_mem) && ctx.pc == 0x0884C7B0u) goto L_0884C7B0;
    return;
L_0884C7B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(158), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C7FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C840;
      }
      goto L_0884C80C;
    }
L_0884C80C:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27948));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5884), 0u);
      if (branch_taken) {
          goto L_0884C82C;
      }
      goto L_0884C820;
    }
L_0884C820:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_0884C82C;
L_0884C82C:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C840;
      }
      goto L_0884C838;
    }
L_0884C838:
    ctx.gpr[31] = (0x0884C840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0884C840u) goto L_0884C840;
    return;
L_0884C840:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C84C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0884C8BC;
      }
      goto L_0884C868;
    }
L_0884C868:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20440));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x0884C880u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 98u, 0x088E1EDCu>(ctx, &aot_mem) && ctx.pc == 0x0884C880u) goto L_0884C880;
    return;
L_0884C880:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_0884C8AC;
      }
      goto L_0884C888;
    }
L_0884C888:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27948));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5884), 0u);
      if (branch_taken) {
          goto L_0884C8A8;
      }
      goto L_0884C89C;
    }
L_0884C89C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0884C8A8;
L_0884C8A8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_0884C8AC;
L_0884C8AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C8BC;
      }
      goto L_0884C8B4;
    }
L_0884C8B4:
    ctx.gpr[31] = (0x0884C8BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0884C8BCu) goto L_0884C8BC;
    return;
L_0884C8BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C8D0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C8F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884C908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 305u, 0x08B3D594u>(ctx, &aot_mem) && ctx.pc == 0x0884C908u) goto L_0884C908;
    return;
L_0884C908:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7740)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C928:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884C938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 49u, 0x08B3C350u>(ctx, &aot_mem) && ctx.pc == 0x0884C938u) goto L_0884C938;
    return;
L_0884C938:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C944:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884C96Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7940));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C96Cu) goto L_0884C96C;
    return;
L_0884C96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7940), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C998:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884C9B4;
      }
      goto L_0884C9AC;
    }
L_0884C9AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C9BC;
      }
      goto L_0884C9B4;
    }
L_0884C9B4:
    ctx.gpr[31] = (0x0884C9BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 399u, 0x08B3DAC8u>(ctx, &aot_mem) && ctx.pc == 0x0884C9BCu) goto L_0884C9BC;
    return;
L_0884C9BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C9C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884CA28;
      }
      goto L_0884C9E4;
    }
L_0884C9E4:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x0884C9F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 685u, 0x08ABF2D8u>(ctx, &aot_mem) && ctx.pc == 0x0884C9F0u) goto L_0884C9F0;
    return;
L_0884C9F0:
    ctx.gpr[31] = (0x0884C9F8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x0884C9F8u) goto L_0884C9F8;
    return;
L_0884C9F8:
    ctx.gpr[6] = (17786u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0884CA0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 595u, 0x0889B6ACu>(ctx, &aot_mem) && ctx.pc == 0x0884CA0Cu) goto L_0884CA0C;
    return;
L_0884CA0C:
    ctx.gpr[31] = (0x0884CA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 327u, 0x088099B0u>(ctx, &aot_mem) && ctx.pc == 0x0884CA14u) goto L_0884CA14;
    return;
L_0884CA14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CA30;
      }
      goto L_0884CA20;
    }
L_0884CA20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CA38;
      }
      goto L_0884CA28;
    }
L_0884CA28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CAD4;
      }
      goto L_0884CA30;
    }
L_0884CA30:
    ctx.gpr[31] = (0x0884CA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0884CA38u) goto L_0884CA38;
    return;
L_0884CA38:
    ctx.gpr[31] = (0x0884CA40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 566u, 0x0880EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CA40u) goto L_0884CA40;
    return;
L_0884CA40:
    ctx.gpr[31] = (0x0884CA48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0884CA48u) goto L_0884CA48;
    return;
L_0884CA48:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0884CA60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 15u, 0x088E4294u>(ctx, &aot_mem) && ctx.pc == 0x0884CA60u) goto L_0884CA60;
    return;
L_0884CA60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1396));
    goto L_0884CA6C;
L_0884CA6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CAB4;
      }
      goto L_0884CA78;
    }
L_0884CA78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8796), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8836), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    goto L_0884CAB4;
L_0884CAB4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0884CA6C;
      }
      goto L_0884CAC4;
    }
L_0884CAC4:
    ctx.gpr[31] = (0x0884CACCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 79u, 0x0890849Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CACCu) goto L_0884CACC;
    return;
L_0884CACC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0884CAD4;
L_0884CAD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884CAE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884CB18u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0884CB18u) goto L_0884CB18;
    return;
L_0884CB18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0884CBB4;
      }
      goto L_0884CB2C;
    }
L_0884CB2C:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29624));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (0u | 0u);
    goto L_0884CB38;
L_0884CB38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x0884CB48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8796)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x0884CB48u) goto L_0884CB48;
    return;
L_0884CB48:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0884CB54u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 614u, 0x08AD3708u>(ctx, &aot_mem) && ctx.pc == 0x0884CB54u) goto L_0884CB54;
    return;
L_0884CB54:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0884CB64u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x0884CB64u) goto L_0884CB64;
    return;
L_0884CB64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x0884CB74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8796)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x0884CB74u) goto L_0884CB74;
    return;
L_0884CB74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0884CBA0;
      }
      goto L_0884CB80;
    }
L_0884CB80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x0884CB90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8796)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x0884CB90u) goto L_0884CB90;
    return;
L_0884CB90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0884CBA0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x0884CBA0u) goto L_0884CBA0;
    return;
L_0884CBA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884CB38;
      }
      goto L_0884CBB4;
    }
L_0884CBB4:
    ctx.gpr[31] = (0x0884CBBCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x0884CBBCu) goto L_0884CBBC;
    return;
L_0884CBBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0884CC00;
      }
      goto L_0884CBD0;
    }
L_0884CBD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8796)));
    ctx.gpr[31] = (0x0884CBECu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x0884CBECu) goto L_0884CBEC;
    return;
L_0884CBEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884CBD0;
      }
      goto L_0884CC00;
    }
L_0884CC00:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
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
L_0884CC2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884CC3Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0884CC3Cu) goto L_0884CC3C;
    return;
L_0884CC3C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0884CC5C;
      }
      goto L_0884CC4C;
    }
L_0884CC4C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0884CC60;
      }
      goto L_0884CC58;
    }
L_0884CC58:
    ctx.gpr[4] = (0u | 1u);
    goto L_0884CC5C;
L_0884CC5C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0884CC60;
L_0884CC60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CC70;
      }
      goto L_0884CC68;
    }
L_0884CC68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0884CC74;
      }
      goto L_0884CC70;
    }
L_0884CC70:
    ctx.gpr[2] = (0u | 0u);
    goto L_0884CC74;
L_0884CC74:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884CC80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884CCF0;
      }
      goto L_0884CCE0;
    }
L_0884CCE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_0884CCF8;
      }
      goto L_0884CCF0;
    }
L_0884CCF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CEC8;
      }
      goto L_0884CCF8;
    }
L_0884CCF8:
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[22])) && ctx.fpr[20] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0884CD20;
      }
      goto L_0884CD0C;
    }
L_0884CD0C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0884CD18u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0884D624;
L_0884CD18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CD90;
      }
      goto L_0884CD20;
    }
L_0884CD20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884CD38;
      }
      goto L_0884CD30;
    }
L_0884CD30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CD90;
      }
      goto L_0884CD38;
    }
L_0884CD38:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0884CD44u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 91u, 0x088905B0u>(ctx, &aot_mem) && ctx.pc == 0x0884CD44u) goto L_0884CD44;
    return;
L_0884CD44:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884CD8C;
      }
      goto L_0884CD68;
    }
L_0884CD68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0884CD90;
      }
      goto L_0884CD8C;
    }
L_0884CD8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    goto L_0884CD90;
L_0884CD90:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
      if (branch_taken) {
          goto L_0884CDA8;
      }
      goto L_0884CD98;
    }
L_0884CD98:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884CCF8;
      }
      goto L_0884CDA4;
    }
L_0884CDA4:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    goto L_0884CDA8;
L_0884CDA8:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[6] & 32u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u < ctx.gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_0884CE38;
      }
      goto L_0884CDC8;
    }
L_0884CDC8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CDE0;
      }
      goto L_0884CDD0;
    }
L_0884CDD0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0884CDE0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_0884CF04;
L_0884CDE0:
    ctx.gpr[31] = (0x0884CDE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 603u, 0x0889E994u>(ctx, &aot_mem) && ctx.pc == 0x0884CDE8u) goto L_0884CDE8;
    return;
L_0884CDE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CE0C;
      }
      goto L_0884CDF0;
    }
L_0884CDF0:
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0884CE04u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12292));
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 400u, 0x08B19938u>(ctx, &aot_mem) && ctx.pc == 0x0884CE04u) goto L_0884CE04;
    return;
L_0884CE04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0884CE24;
      }
      goto L_0884CE0C;
    }
L_0884CE0C:
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0884CE20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11460));
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 400u, 0x08B19938u>(ctx, &aot_mem) && ctx.pc == 0x0884CE20u) goto L_0884CE20;
    return;
L_0884CE20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_0884CE24;
L_0884CE24:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0884CE5C;
      }
      goto L_0884CE38;
    }
L_0884CE38:
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0884CE4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11540));
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 400u, 0x08B19938u>(ctx, &aot_mem) && ctx.pc == 0x0884CE4Cu) goto L_0884CE4C;
    return;
L_0884CE4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0884CE5C;
L_0884CE5C:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884CEC0;
      }
      goto L_0884CE6C;
    }
L_0884CE6C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_0884CEC0;
      }
      goto L_0884CE78;
    }
L_0884CE78:
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0884CE7C;
L_0884CE7C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[22])) && ctx.fpr[24] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884CEA4;
      }
      goto L_0884CE8C;
    }
L_0884CE8C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0884CE9Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_0884D734;
L_0884CE9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0884CEB8;
      }
      goto L_0884CEA4;
    }
L_0884CEA4:
    ctx.fpr[13] = ctx.fpr[26] / ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884CEB4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0884D734;
L_0884CEB4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_0884CEB8;
L_0884CEB8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884CE7C;
      }
      goto L_0884CEC0;
    }
L_0884CEC0:
    ctx.gpr[31] = (0x0884CEC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 621u, 0x08972D80u>(ctx, &aot_mem) && ctx.pc == 0x0884CEC8u) goto L_0884CEC8;
    return;
L_0884CEC8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884CF04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0884CFD0;
      }
      goto L_0884CF40;
    }
L_0884CF40:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0884CFC0;
      }
      goto L_0884CF50;
    }
L_0884CF50:
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    ctx.gpr[22] = (0u | 0u);
    goto L_0884CF58;
L_0884CF58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CF80;
      }
      goto L_0884CF68;
    }
L_0884CF68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CF80;
      }
      goto L_0884CF78;
    }
L_0884CF78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CFAC;
      }
      goto L_0884CF80;
    }
L_0884CF80:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[22]);
    ctx.gpr[31] = (0x0884CF90u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884CF90u) goto L_0884CF90;
    return;
L_0884CF90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CFAC;
      }
      goto L_0884CF98;
    }
L_0884CF98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0884CFACu);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 12u, 0x089880D8u>(ctx, &aot_mem) && ctx.pc == 0x0884CFACu) goto L_0884CFAC;
    return;
L_0884CFAC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0884CF58;
      }
      goto L_0884CFC0;
    }
L_0884CFC0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884CF40;
      }
      goto L_0884CFD0;
    }
L_0884CFD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884CFFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0884D084;
      }
      goto L_0884D03C;
    }
L_0884D03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D084;
      }
      goto L_0884D04C;
    }
L_0884D04C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D070;
      }
      goto L_0884D05C;
    }
L_0884D05C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884D068u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0884DD94;
L_0884D068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D07C;
      }
      goto L_0884D070;
    }
L_0884D070:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884D07Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0884D854;
L_0884D07C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D2BC;
      }
      goto L_0884D084;
    }
L_0884D084:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884D118;
      }
      goto L_0884D0C4;
    }
L_0884D0C4:
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    goto L_0884D0C8;
L_0884D0C8:
    ctx.gpr[31] = (0x0884D0D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884D0D0u) goto L_0884D0D0;
    return;
L_0884D0D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D108;
      }
      goto L_0884D0D8;
    }
L_0884D0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D108;
      }
      goto L_0884D0F8;
    }
L_0884D0F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_0884D108;
L_0884D108:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884D0C8;
      }
      goto L_0884D118;
    }
L_0884D118:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D200;
      }
      goto L_0884D128;
    }
L_0884D128:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
    goto L_0884D138;
L_0884D138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D1E4;
      }
      goto L_0884D144;
    }
L_0884D144:
    ctx.gpr[31] = (0x0884D14Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884D14Cu) goto L_0884D14C;
    return;
L_0884D14C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D1E4;
      }
      goto L_0884D154;
    }
L_0884D154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884D168u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 61u, 0x089885FCu>(ctx, &aot_mem) && ctx.pc == 0x0884D168u) goto L_0884D168;
    return;
L_0884D168:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<4u, 0u, 1u, 4u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<4u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884D1A4;
      }
      goto L_0884D18C;
    }
L_0884D18C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D1B4;
      }
      goto L_0884D1A4;
    }
L_0884D1A4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0884D1B4;
L_0884D1B4:
    ctx.gpr[31] = (0x0884D1BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884D1BCu) goto L_0884D1BC;
    return;
L_0884D1BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D1E4;
      }
      goto L_0884D1D4;
    }
L_0884D1D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884D1E0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0884D1E0u) goto L_0884D1E0;
    return;
L_0884D1E0:
    ctx.gpr[21] = (0u | 1u);
    goto L_0884D1E4;
L_0884D1E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884D138;
      }
      goto L_0884D200;
    }
L_0884D200:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884D254;
      }
      goto L_0884D210;
    }
L_0884D210:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<4u, 0u, 0u, 4u>();
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vcmp_ct<4u, 8u, 1u, 1u>();
    if (((ctx.vfpu_ctrl[3] >> 5u) & 1u) != 0u) {
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 4u>(vfpu_value); }
        goto L_0884D230;
    }
    goto L_0884D228;
L_0884D228:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<3u, 0u, 4u, 4u>();
    goto L_0884D230;
L_0884D230:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884D254;
L_0884D254:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884D2BC;
      }
      goto L_0884D264;
    }
L_0884D264:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0884D294;
      }
      goto L_0884D26C;
    }
L_0884D26C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0884D2BC;
      }
      goto L_0884D294;
    }
L_0884D294:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_0884D2BC;
L_0884D2BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D2EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[5] & 8u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0884D330;
      }
      goto L_0884D30C;
    }
L_0884D30C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884D330;
      }
      goto L_0884D31C;
    }
L_0884D31C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0884D328u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_0884D854;
L_0884D328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D330;
      }
      goto L_0884D330;
    }
L_0884D330:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D33C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0884D3BC;
      }
      goto L_0884D374;
    }
L_0884D374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D3BC;
      }
      goto L_0884D384;
    }
L_0884D384:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D3A8;
      }
      goto L_0884D394;
    }
L_0884D394:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884D3A0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_0884E5B4;
L_0884D3A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D3B4;
      }
      goto L_0884D3A8;
    }
L_0884D3A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884D3B4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_0884E140;
L_0884D3B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D5AC;
      }
      goto L_0884D3BC;
    }
L_0884D3BC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884D458;
      }
      goto L_0884D3F8;
    }
L_0884D3F8:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D458;
      }
      goto L_0884D408;
    }
L_0884D408:
    ctx.gpr[31] = (0x0884D410u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884D410u) goto L_0884D410;
    return;
L_0884D410:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D448;
      }
      goto L_0884D418;
    }
L_0884D418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D448;
      }
      goto L_0884D438;
    }
L_0884D438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0884D448;
L_0884D448:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884D408;
      }
      goto L_0884D458;
    }
L_0884D458:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0884D4F0;
      }
      goto L_0884D468;
    }
L_0884D468:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    goto L_0884D474;
L_0884D474:
    ctx.gpr[31] = (0x0884D47Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884D47Cu) goto L_0884D47C;
    return;
L_0884D47C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D4D4;
      }
      goto L_0884D484;
    }
L_0884D484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0884D498u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 61u, 0x089885FCu>(ctx, &aot_mem) && ctx.pc == 0x0884D498u) goto L_0884D498;
    return;
L_0884D498:
    ctx.gpr[31] = (0x0884D4A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884D4A0u) goto L_0884D4A0;
    return;
L_0884D4A0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D4C4;
      }
      goto L_0884D4B8;
    }
L_0884D4B8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884D4C4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0884D4C4u) goto L_0884D4C4;
    return;
L_0884D4C4:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0884D4D4;
L_0884D4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884D474;
      }
      goto L_0884D4F0;
    }
L_0884D4F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884D544;
      }
      goto L_0884D500;
    }
L_0884D500:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(48);
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
    ctx.execute_vfpu_vdot_ct<4u, 0u, 0u, 4u>();
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vcmp_ct<4u, 8u, 1u, 1u>();
    if (((ctx.vfpu_ctrl[3] >> 5u) & 1u) != 0u) {
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 4u>(vfpu_value); }
        goto L_0884D534;
    }
    goto L_0884D52C;
L_0884D52C:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<3u, 0u, 4u, 4u>();
    goto L_0884D534;
L_0884D534:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884D544u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 181u, 0x08B1D07Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D544u) goto L_0884D544;
    return;
L_0884D544:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884D5AC;
      }
      goto L_0884D554;
    }
L_0884D554:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884D5AC;
L_0884D5AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
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
L_0884D5D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0884D5ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 177u, 0x0886D34Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D5ECu) goto L_0884D5EC;
    return;
L_0884D5EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D608;
      }
      goto L_0884D5F4;
    }
L_0884D5F4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D610;
      }
      goto L_0884D600;
    }
L_0884D600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D614;
      }
      goto L_0884D608;
    }
L_0884D608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D614;
      }
      goto L_0884D610;
    }
L_0884D610:
    ctx.gpr[2] = (0u | 0u);
    goto L_0884D614;
L_0884D614:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884D674;
      }
      goto L_0884D644;
    }
L_0884D644:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884D67C;
      }
      goto L_0884D66C;
    }
L_0884D66C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D6E8;
      }
      goto L_0884D674;
    }
L_0884D674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0884D724;
      }
      goto L_0884D67C;
    }
L_0884D67C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884D6E8;
      }
      goto L_0884D68C;
    }
L_0884D68C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D6E8;
      }
      goto L_0884D6AC;
    }
L_0884D6AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0884D6C4;
      }
      goto L_0884D6BC;
    }
L_0884D6BC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884D6D4;
      }
      goto L_0884D6C4;
    }
L_0884D6C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884D6D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D6D4u) goto L_0884D6D4;
    return;
L_0884D6D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884D6E0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 611u, 0x0888FE40u>(ctx, &aot_mem) && ctx.pc == 0x0884D6E0u) goto L_0884D6E0;
    return;
L_0884D6E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D724;
      }
      goto L_0884D6E8;
    }
L_0884D6E8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884D720;
      }
      goto L_0884D704;
    }
L_0884D704:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884D720;
      }
      goto L_0884D71C;
    }
L_0884D71C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0884D720;
L_0884D720:
    ctx.gpr[2] = (0u | 1u);
    goto L_0884D724;
L_0884D724:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D734:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0884D840;
      }
      goto L_0884D750;
    }
L_0884D750:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884D78C;
      }
      goto L_0884D76C;
    }
L_0884D76C:
    ctx.gpr[7] = (ctx.gpr[5] & 32u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884D7A0;
      }
      goto L_0884D780;
    }
L_0884D780:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0884D7AC;
      }
      goto L_0884D78C;
    }
L_0884D78C:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884D844;
      }
      goto L_0884D7A0;
    }
L_0884D7A0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_0884D7AC;
L_0884D7AC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884D840;
      }
      goto L_0884D7CC;
    }
L_0884D7CC:
    ctx.gpr[7] = (ctx.gpr[5] & 2u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D7F0;
      }
      goto L_0884D7E0;
    }
L_0884D7E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0884D840;
      }
      goto L_0884D7F0;
    }
L_0884D7F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] & 8u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D820;
      }
      goto L_0884D80C;
    }
L_0884D80C:
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884D820;
L_0884D820:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0884D840;
      }
      goto L_0884D830;
    }
L_0884D830:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884D840u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D840u) goto L_0884D840;
    return;
L_0884D840:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0884D844;
L_0884D844:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
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
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884D908;
      }
      goto L_0884D8F0;
    }
L_0884D8F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0884D910;
      }
      goto L_0884D900;
    }
L_0884D900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D964;
      }
      goto L_0884D908;
    }
L_0884D908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DD5C;
      }
      goto L_0884D910;
    }
L_0884D910:
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
    goto L_0884D914;
L_0884D914:
    ctx.gpr[31] = (0x0884D91Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884D91Cu) goto L_0884D91C;
    return;
L_0884D91C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D954;
      }
      goto L_0884D924;
    }
L_0884D924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D954;
      }
      goto L_0884D944;
    }
L_0884D944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_0884D954;
L_0884D954:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884D914;
      }
      goto L_0884D964;
    }
L_0884D964:
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
    goto L_0884D974;
L_0884D974:
    ctx.gpr[31] = (0x0884D97Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884D97Cu) goto L_0884D97C;
    return;
L_0884D97C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DA14;
      }
      goto L_0884D984;
    }
L_0884D984:
    ctx.gpr[31] = (0x0884D98Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884D98Cu) goto L_0884D98C;
    return;
L_0884D98C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DA14;
      }
      goto L_0884D9A4;
    }
L_0884D9A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DA14;
      }
      goto L_0884D9C4;
    }
L_0884D9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884D9D4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 46u, 0x089883DCu>(ctx, &aot_mem) && ctx.pc == 0x0884D9D4u) goto L_0884D9D4;
    return;
L_0884D9D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DA14;
      }
      goto L_0884DA04;
    }
L_0884DA04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884DA14;
L_0884DA14:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884D974;
      }
      goto L_0884DA24;
    }
L_0884DA24:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_0884DA28;
L_0884DA28:
    ctx.gpr[31] = (0x0884DA30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884DA30u) goto L_0884DA30;
    return;
L_0884DA30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB88;
      }
      goto L_0884DA38;
    }
L_0884DA38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0884DA4Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 61u, 0x089885FCu>(ctx, &aot_mem) && ctx.pc == 0x0884DA4Cu) goto L_0884DA4C;
    return;
L_0884DA4C:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
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
    ctx.execute_vfpu_vdot_ct<4u, 0u, 1u, 4u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<4u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884DA8C;
      }
      goto L_0884DA74;
    }
L_0884DA74:
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
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DA9C;
      }
      goto L_0884DA8C;
    }
L_0884DA8C:
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
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0884DA9C;
L_0884DA9C:
    ctx.gpr[31] = (0x0884DAA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884DAA4u) goto L_0884DAA4;
    return;
L_0884DAA4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB88;
      }
      goto L_0884DABC;
    }
L_0884DABC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884DAC8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0884DAC8u) goto L_0884DAC8;
    return;
L_0884DAC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB88;
      }
      goto L_0884DAE8;
    }
L_0884DAE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB28;
      }
      goto L_0884DB18;
    }
L_0884DB18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884DB28;
L_0884DB28:
    ctx.gpr[20] = (ctx.gpr[20] | ctx.gpr[30]);
    ctx.gpr[20] = (0u < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB88;
      }
      goto L_0884DB38;
    }
L_0884DB38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884DB48u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 34u, 0x08988298u>(ctx, &aot_mem) && ctx.pc == 0x0884DB48u) goto L_0884DB48;
    return;
L_0884DB48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB88;
      }
      goto L_0884DB78;
    }
L_0884DB78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884DB88;
L_0884DB88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884DA28;
      }
      goto L_0884DBA4;
    }
L_0884DBA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884DBF8;
      }
      goto L_0884DBB4;
    }
L_0884DBB4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<4u, 0u, 0u, 4u>();
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vcmp_ct<4u, 8u, 1u, 1u>();
    if (((ctx.vfpu_ctrl[3] >> 5u) & 1u) != 0u) {
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 4u>(vfpu_value); }
        goto L_0884DBD4;
    }
    goto L_0884DBCC;
L_0884DBCC:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<3u, 0u, 4u, 4u>();
    goto L_0884DBD4;
L_0884DBD4:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884DBF8;
L_0884DBF8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884DD5C;
      }
      goto L_0884DC08;
    }
L_0884DC08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DC74;
      }
      goto L_0884DC40;
    }
L_0884DC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884DC74;
L_0884DC74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884DD3C;
      }
      goto L_0884DCDC;
    }
L_0884DCDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (48844u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884DD2C;
      }
      goto L_0884DCFC;
    }
L_0884DCFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0884DD3C;
      }
      goto L_0884DD2C;
    }
L_0884DD2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884DD3C;
L_0884DD3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884DD5C;
L_0884DD5C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
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
L_0884DD94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884DE8C;
      }
      goto L_0884DE38;
    }
L_0884DE38:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884DE3C;
L_0884DE3C:
    ctx.gpr[31] = (0x0884DE44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884DE44u) goto L_0884DE44;
    return;
L_0884DE44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DE7C;
      }
      goto L_0884DE4C;
    }
L_0884DE4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DE7C;
      }
      goto L_0884DE6C;
    }
L_0884DE6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0884DE7C;
L_0884DE7C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884DE3C;
      }
      goto L_0884DE8C;
    }
L_0884DE8C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    goto L_0884DE9C;
L_0884DE9C:
    ctx.gpr[31] = (0x0884DEA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884DEA4u) goto L_0884DEA4;
    return;
L_0884DEA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DF08;
      }
      goto L_0884DEAC;
    }
L_0884DEAC:
    ctx.gpr[31] = (0x0884DEB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884DEB4u) goto L_0884DEB4;
    return;
L_0884DEB4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DF08;
      }
      goto L_0884DECC;
    }
L_0884DECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DF08;
      }
      goto L_0884DEEC;
    }
L_0884DEEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884DEFCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 46u, 0x089883DCu>(ctx, &aot_mem) && ctx.pc == 0x0884DEFCu) goto L_0884DEFC;
    return;
L_0884DEFC:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0884DF08u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0884DF08u) goto L_0884DF08;
    return;
L_0884DF08:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884DE9C;
      }
      goto L_0884DF18;
    }
L_0884DF18:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_0884DF20;
L_0884DF20:
    ctx.gpr[31] = (0x0884DF28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884DF28u) goto L_0884DF28;
    return;
L_0884DF28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DFDC;
      }
      goto L_0884DF30;
    }
L_0884DF30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884DF44u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 61u, 0x089885FCu>(ctx, &aot_mem) && ctx.pc == 0x0884DF44u) goto L_0884DF44;
    return;
L_0884DF44:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0884DF60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884DF60u) goto L_0884DF60;
    return;
L_0884DF60:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DFDC;
      }
      goto L_0884DF78;
    }
L_0884DF78:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884DF84u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0884DF84u) goto L_0884DF84;
    return;
L_0884DF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DFDC;
      }
      goto L_0884DFA4;
    }
L_0884DFA4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0884DFB0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0884DFB0u) goto L_0884DFB0;
    return;
L_0884DFB0:
    ctx.gpr[21] = (ctx.gpr[21] | ctx.gpr[17]);
    ctx.gpr[21] = (0u < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DFDC;
      }
      goto L_0884DFC0;
    }
L_0884DFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884DFD0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 34u, 0x08988298u>(ctx, &aot_mem) && ctx.pc == 0x0884DFD0u) goto L_0884DFD0;
    return;
L_0884DFD0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0884DFDCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0884DFDCu) goto L_0884DFDC;
    return;
L_0884DFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884DF20;
      }
      goto L_0884DFF8;
    }
L_0884DFF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E054;
      }
      goto L_0884E00C;
    }
L_0884E00C:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<4u, 0u, 0u, 4u>();
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vcmp_ct<4u, 8u, 1u, 1u>();
    if (((ctx.vfpu_ctrl[3] >> 5u) & 1u) != 0u) {
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 4u>(vfpu_value); }
        goto L_0884E02C;
    }
    goto L_0884E024;
L_0884E024:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<3u, 0u, 4u, 4u>();
    goto L_0884E02C;
L_0884E02C:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884E054;
L_0884E054:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E10C;
      }
      goto L_0884E064;
    }
L_0884E064:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E0A8;
      }
      goto L_0884E098;
    }
L_0884E098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0884E0A8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0884E0A8u) goto L_0884E0A8;
    return;
L_0884E0A8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884E0B4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x0884E0B4u) goto L_0884E0B4;
    return;
L_0884E0B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884E10C;
L_0884E10C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
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
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884E23C;
      }
      goto L_0884E1DC;
    }
L_0884E1DC:
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E23C;
      }
      goto L_0884E1EC;
    }
L_0884E1EC:
    ctx.gpr[31] = (0x0884E1F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884E1F4u) goto L_0884E1F4;
    return;
L_0884E1F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E22C;
      }
      goto L_0884E1FC;
    }
L_0884E1FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E22C;
      }
      goto L_0884E21C;
    }
L_0884E21C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0884E22C;
L_0884E22C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E1EC;
      }
      goto L_0884E23C;
    }
L_0884E23C:
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0884E308;
      }
      goto L_0884E24C;
    }
L_0884E24C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[20];
    goto L_0884E258;
L_0884E258:
    ctx.gpr[31] = (0x0884E260u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884E260u) goto L_0884E260;
    return;
L_0884E260:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E2F8;
      }
      goto L_0884E268;
    }
L_0884E268:
    ctx.gpr[31] = (0x0884E270u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884E270u) goto L_0884E270;
    return;
L_0884E270:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E2F8;
      }
      goto L_0884E288;
    }
L_0884E288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E2F8;
      }
      goto L_0884E2A8;
    }
L_0884E2A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884E2B8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 46u, 0x089883DCu>(ctx, &aot_mem) && ctx.pc == 0x0884E2B8u) goto L_0884E2B8;
    return;
L_0884E2B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E2F8;
      }
      goto L_0884E2E8;
    }
L_0884E2E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884E2F8;
L_0884E2F8:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E258;
      }
      goto L_0884E308;
    }
L_0884E308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0884E464;
      }
      goto L_0884E314;
    }
L_0884E314:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    goto L_0884E324;
L_0884E324:
    ctx.gpr[31] = (0x0884E32Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884E32Cu) goto L_0884E32C;
    return;
L_0884E32C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E448;
      }
      goto L_0884E334;
    }
L_0884E334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0884E348u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 61u, 0x089885FCu>(ctx, &aot_mem) && ctx.pc == 0x0884E348u) goto L_0884E348;
    return;
L_0884E348:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
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
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0884E364u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884E364u) goto L_0884E364;
    return;
L_0884E364:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E448;
      }
      goto L_0884E37C;
    }
L_0884E37C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884E388u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0884E388u) goto L_0884E388;
    return;
L_0884E388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E448;
      }
      goto L_0884E3A8;
    }
L_0884E3A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E3E8;
      }
      goto L_0884E3D8;
    }
L_0884E3D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884E3E8;
L_0884E3E8:
    ctx.gpr[20] = (ctx.gpr[20] | ctx.gpr[30]);
    ctx.gpr[20] = (0u < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E448;
      }
      goto L_0884E3F8;
    }
L_0884E3F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884E408u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 34u, 0x08988298u>(ctx, &aot_mem) && ctx.pc == 0x0884E408u) goto L_0884E408;
    return;
L_0884E408:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E448;
      }
      goto L_0884E438;
    }
L_0884E438:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884E448;
L_0884E448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E324;
      }
      goto L_0884E464;
    }
L_0884E464:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E4B8;
      }
      goto L_0884E474;
    }
L_0884E474:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
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
    ctx.execute_vfpu_vdot_ct<4u, 0u, 0u, 4u>();
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vcmp_ct<4u, 8u, 1u, 1u>();
    if (((ctx.vfpu_ctrl[3] >> 5u) & 1u) != 0u) {
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 4u>(vfpu_value); }
        goto L_0884E4A8;
    }
    goto L_0884E4A0;
L_0884E4A0:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<3u, 0u, 4u, 4u>();
    goto L_0884E4A8;
L_0884E4A8:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884E4B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 181u, 0x08B1D07Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E4B8u) goto L_0884E4B8;
    return;
L_0884E4B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E57C;
      }
      goto L_0884E4C8;
    }
L_0884E4C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E534;
      }
      goto L_0884E500;
    }
L_0884E500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884E534;
L_0884E534:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    goto L_0884E57C;
L_0884E57C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
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
L_0884E5B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[31]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884E6A8;
      }
      goto L_0884E654;
    }
L_0884E654:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884E658;
L_0884E658:
    ctx.gpr[31] = (0x0884E660u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884E660u) goto L_0884E660;
    return;
L_0884E660:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E698;
      }
      goto L_0884E668;
    }
L_0884E668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E698;
      }
      goto L_0884E688;
    }
L_0884E688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0884E698;
L_0884E698:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E658;
      }
      goto L_0884E6A8;
    }
L_0884E6A8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    goto L_0884E6B8;
L_0884E6B8:
    ctx.gpr[31] = (0x0884E6C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884E6C0u) goto L_0884E6C0;
    return;
L_0884E6C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E724;
      }
      goto L_0884E6C8;
    }
L_0884E6C8:
    ctx.gpr[31] = (0x0884E6D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884E6D0u) goto L_0884E6D0;
    return;
L_0884E6D0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E724;
      }
      goto L_0884E6E8;
    }
L_0884E6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E724;
      }
      goto L_0884E708;
    }
L_0884E708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884E718u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 46u, 0x089883DCu>(ctx, &aot_mem) && ctx.pc == 0x0884E718u) goto L_0884E718;
    return;
L_0884E718:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0884E724u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0884E724u) goto L_0884E724;
    return;
L_0884E724:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E6B8;
      }
      goto L_0884E734;
    }
L_0884E734:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    goto L_0884E73C;
L_0884E73C:
    ctx.gpr[31] = (0x0884E744u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884E744u) goto L_0884E744;
    return;
L_0884E744:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E7F8;
      }
      goto L_0884E74C;
    }
L_0884E74C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884E760u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 61u, 0x089885FCu>(ctx, &aot_mem) && ctx.pc == 0x0884E760u) goto L_0884E760;
    return;
L_0884E760:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0884E77Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08988080u>(ctx, &aot_mem) && ctx.pc == 0x0884E77Cu) goto L_0884E77C;
    return;
L_0884E77C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E7F8;
      }
      goto L_0884E794;
    }
L_0884E794:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884E7A0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0884E7A0u) goto L_0884E7A0;
    return;
L_0884E7A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E7F8;
      }
      goto L_0884E7C0;
    }
L_0884E7C0:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0884E7CCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0884E7CCu) goto L_0884E7CC;
    return;
L_0884E7CC:
    ctx.gpr[21] = (ctx.gpr[21] | ctx.gpr[17]);
    ctx.gpr[21] = (0u < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E7F8;
      }
      goto L_0884E7DC;
    }
L_0884E7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884E7ECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 34u, 0x08988298u>(ctx, &aot_mem) && ctx.pc == 0x0884E7ECu) goto L_0884E7EC;
    return;
L_0884E7EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0884E7F8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0884E7F8u) goto L_0884E7F8;
    return;
L_0884E7F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E73C;
      }
      goto L_0884E814;
    }
L_0884E814:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E86C;
      }
      goto L_0884E828;
    }
L_0884E828:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(48);
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
    ctx.execute_vfpu_vdot_ct<4u, 0u, 0u, 4u>();
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vcmp_ct<4u, 8u, 1u, 1u>();
    if (((ctx.vfpu_ctrl[3] >> 5u) & 1u) != 0u) {
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 4u>(vfpu_value); }
        goto L_0884E85C;
    }
    goto L_0884E854;
L_0884E854:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<3u, 0u, 4u, 4u>();
    goto L_0884E85C;
L_0884E85C:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0884E86Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 181u, 0x08B1D07Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E86Cu) goto L_0884E86C;
    return;
L_0884E86C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E91C;
      }
      goto L_0884E87C;
    }
L_0884E87C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E8B8;
      }
      goto L_0884E8A8;
    }
L_0884E8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0884E8B8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0884E8B8u) goto L_0884E8B8;
    return;
L_0884E8B8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884E8C4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x0884E8C4u) goto L_0884E8C4;
    return;
L_0884E8C4:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884E91C;
L_0884E91C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E950:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E958:
    ctx.gpr[2] = (2181u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-5800));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884E974u);
    // nop
    goto L_0884E958;
L_0884E974:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884E9A0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0884E958;
L_0884E9A0:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_0884E9E8;
    }
    goto L_0884E9A8;
L_0884E9A8:
    ctx.gpr[31] = (0x0884E9B0u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x0884E9B0u) goto L_0884E9B0;
    return;
L_0884E9B0:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_0884E9D8;
    }
    goto L_0884E9B8;
L_0884E9B8:
    ctx.gpr[31] = (0x0884E9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x08980688u>(ctx, &aot_mem) && ctx.pc == 0x0884E9C0u) goto L_0884E9C0;
    return;
L_0884E9C0:
    ctx.gpr[4] = (ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_0884E9DC;
      }
      goto L_0884E9D4;
    }
L_0884E9D4:
    ctx.gpr[17] = (0u | 1u);
    goto L_0884E9D8;
L_0884E9D8:
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    goto L_0884E9DC;
L_0884E9DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E9E8;
      }
      goto L_0884E9E4;
    }
L_0884E9E4:
    ctx.gpr[18] = (0u | 1u);
    goto L_0884E9E8;
L_0884E9E8:
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
L_0884EA04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884EA18u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC59D4u>(ctx, &aot_mem) && ctx.pc == 0x0884EA18u) goto L_0884EA18;
    return;
L_0884EA18:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20456));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), 0u);
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16400u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), 0u);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(232), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(236), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(240), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EAA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0884EBB0;
      }
      goto L_0884EAC4;
    }
L_0884EAC4:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20456));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(240));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(212));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0884EB38;
      }
      goto L_0884EB10;
    }
L_0884EB10:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884EB38;
      }
      goto L_0884EB20;
    }
L_0884EB20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EB38;
      }
      goto L_0884EB28;
    }
L_0884EB28:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EB38;
      }
      goto L_0884EB30;
    }
L_0884EB30:
    ctx.gpr[31] = (0x0884EB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0884EB38u) goto L_0884EB38;
    return;
L_0884EB38:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EB64;
      }
      goto L_0884EB40;
    }
L_0884EB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884EB64;
      }
      goto L_0884EB4C;
    }
L_0884EB4C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EB64;
      }
      goto L_0884EB54;
    }
L_0884EB54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EB64;
      }
      goto L_0884EB5C;
    }
L_0884EB5C:
    ctx.gpr[31] = (0x0884EB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0884EB64u) goto L_0884EB64;
    return;
L_0884EB64:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884EB94;
      }
      goto L_0884EB6C;
    }
L_0884EB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884EB90;
      }
      goto L_0884EB78;
    }
L_0884EB78:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_0884EB94;
    }
    goto L_0884EB80;
L_0884EB80:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_0884EB94;
    }
    goto L_0884EB88;
L_0884EB88:
    ctx.gpr[31] = (0x0884EB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0884EB90u) goto L_0884EB90;
    return;
L_0884EB90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884EB94;
L_0884EB94:
    ctx.gpr[31] = (0x0884EB9Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 486u, 0x08AC5AE8u>(ctx, &aot_mem) && ctx.pc == 0x0884EB9Cu) goto L_0884EB9C;
    return;
L_0884EB9C:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EBB0;
      }
      goto L_0884EBA8;
    }
L_0884EBA8:
    ctx.gpr[31] = (0x0884EBB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0884EBB0u) goto L_0884EBB0;
    return;
L_0884EBB0:
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
L_0884EBCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884EBF0;
      }
      goto L_0884EBE8;
    }
L_0884EBE8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884EBF0;
L_0884EBF0:
    ctx.gpr[31] = (0x0884EBF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884EF30;
L_0884EBF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    ctx.gpr[31] = (0x0884EC04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884F7DC;
L_0884EC04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EC14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EC30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884EC6Cu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 585u, 0x08AC62A0u>(ctx, &aot_mem) && ctx.pc == 0x0884EC6Cu) goto L_0884EC6C;
    return;
L_0884EC6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[31] = (0x0884ECB0u);
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x0884ECB0u) goto L_0884ECB0;
    return;
L_0884ECB0:
    ctx.gpr[31] = (0x0884ECB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 63u, 0x08B0C4CCu>(ctx, &aot_mem) && ctx.pc == 0x0884ECB8u) goto L_0884ECB8;
    return;
L_0884ECB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0884ED84;
      }
      goto L_0884ECEC;
    }
L_0884ECEC:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[23] = (0u | 0u);
    goto L_0884ECF4;
L_0884ECF4:
    ctx.gpr[21] = (ctx.gpr[20] & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0884ED10u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    goto L_0884EFC8;
L_0884ED10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 480 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884ED60;
      }
      goto L_0884ED1C;
    }
L_0884ED1C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884ED60;
      }
      goto L_0884ED24;
    }
L_0884ED24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 272 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884ED60;
      }
      goto L_0884ED30;
    }
L_0884ED30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884ED60;
      }
      goto L_0884ED38;
    }
L_0884ED38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884ED44u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_0884EDF4;
L_0884ED44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884ED60u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem) && ctx.pc == 0x0884ED60u) goto L_0884ED60;
    return;
L_0884ED60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884ECF4;
      }
      goto L_0884ED84;
    }
L_0884ED84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EDB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0884EDD0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884EDD0u) goto L_0884EDD0;
    return;
L_0884EDD0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EDDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EDE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EDEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EDF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884EE34;
      }
      goto L_0884EE1C;
    }
L_0884EE1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0884EE2C;
      }
      goto L_0884EE24;
    }
L_0884EE24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0884EE4C;
      }
      goto L_0884EE2C;
    }
L_0884EE2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884EF1C;
      }
      goto L_0884EE34;
    }
L_0884EE34:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884EE60;
      }
      goto L_0884EE3C;
    }
L_0884EE3C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EE2C;
      }
      goto L_0884EE44;
    }
L_0884EE44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EE74;
      }
      goto L_0884EE4C;
    }
L_0884EE4C:
    ctx.gpr[31] = (0x0884EE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 842u, 0x08993964u>(ctx, &aot_mem) && ctx.pc == 0x0884EE54u) goto L_0884EE54;
    return;
L_0884EE54:
    ctx.gpr[2] = (2238u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-8144));
      if (branch_taken) {
          goto L_0884EF1C;
      }
      goto L_0884EE60;
    }
L_0884EE60:
    ctx.gpr[31] = (0x0884EE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 842u, 0x08993964u>(ctx, &aot_mem) && ctx.pc == 0x0884EE68u) goto L_0884EE68;
    return;
L_0884EE68:
    ctx.gpr[2] = (2238u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_0884EF1C;
      }
      goto L_0884EE74;
    }
L_0884EE74:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
        goto L_0884EEBC;
    }
    goto L_0884EE84;
L_0884EE84:
    ctx.gpr[7] = (2238u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(18024));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884EEA8;
      }
      goto L_0884EEA0;
    }
L_0884EEA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884EEBC;
      }
      goto L_0884EEA8;
    }
L_0884EEA8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884EE84;
      }
      goto L_0884EEB8;
    }
L_0884EEB8:
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    goto L_0884EEBC;
L_0884EEBC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18024));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (2238u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[11] + static_cast<std::uint32_t>(17512));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0884EF00u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 515u, 0x08ABAD24u>(ctx, &aot_mem) && ctx.pc == 0x0884EF00u) goto L_0884EF00;
    return;
L_0884EF00:
    ctx.gpr[31] = (0x0884EF08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 327u, 0x08AB9A5Cu>(ctx, &aot_mem) && ctx.pc == 0x0884EF08u) goto L_0884EF08;
    return;
L_0884EF08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x0884EF14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 274u, 0x08AB96BCu>(ctx, &aot_mem) && ctx.pc == 0x0884EF14u) goto L_0884EF14;
    return;
L_0884EF14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0884EF1C;
      }
      goto L_0884EF1C;
    }
L_0884EF1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EF30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884EF54;
      }
      goto L_0884EF44;
    }
L_0884EF44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0884EF6C;
      }
      goto L_0884EF4C;
    }
L_0884EF4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884EFBC;
      }
      goto L_0884EF54;
    }
L_0884EF54:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884EF74;
      }
      goto L_0884EF5C;
    }
L_0884EF5C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EF4C;
      }
      goto L_0884EF64;
    }
L_0884EF64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EF88;
      }
      goto L_0884EF6C;
    }
L_0884EF6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884EFBC;
      }
      goto L_0884EF74;
    }
L_0884EF74:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x0884EF80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 842u, 0x08993964u>(ctx, &aot_mem) && ctx.pc == 0x0884EF80u) goto L_0884EF80;
    return;
L_0884EF80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
      if (branch_taken) {
          goto L_0884EFBC;
      }
      goto L_0884EF88;
    }
L_0884EF88:
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18024));
    goto L_0884EF94;
L_0884EF94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884EFA8;
      }
      goto L_0884EFA0;
    }
L_0884EFA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_0884EFBC;
      }
      goto L_0884EFA8;
    }
L_0884EFA8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0884EF94;
      }
      goto L_0884EFB8;
    }
L_0884EFB8:
    ctx.gpr[2] = (ctx.gpr[4] & 65535u);
    goto L_0884EFBC;
L_0884EFBC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EFC8:
    ctx.gpr[11] = (ctx.gpr[5] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] & 65535u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[2] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0884F048;
      }
      goto L_0884EFE4;
    }
L_0884EFE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
      if (branch_taken) {
          goto L_0884F1DC;
      }
      goto L_0884F048;
    }
L_0884F048:
    ctx.gpr[2] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884F0B0;
      }
      goto L_0884F054;
    }
L_0884F054:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[8] & 65535u);
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
      if (branch_taken) {
          goto L_0884F1DC;
      }
      goto L_0884F0B0;
    }
L_0884F0B0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F114;
      }
      goto L_0884F0B8;
    }
L_0884F0B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[11] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
      if (branch_taken) {
          goto L_0884F1DC;
      }
      goto L_0884F114;
    }
L_0884F114:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884F174;
      }
      goto L_0884F120;
    }
L_0884F120:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.gpr[8] = (ctx.gpr[11] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[8] = (ctx.gpr[4] & 65535u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
      if (branch_taken) {
          goto L_0884F1DC;
      }
      goto L_0884F174;
    }
L_0884F174:
    ctx.gpr[2] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884F1DC;
      }
      goto L_0884F180;
    }
L_0884F180:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (ctx.gpr[9] & 65535u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    goto L_0884F1DC;
L_0884F1DC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F1E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884F1FCu);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    goto L_0884EDF4;
L_0884F1FC:
    ctx.gpr[5] = (17391u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (17287u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0884F220u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x0884F220u) goto L_0884F220;
    return;
L_0884F220:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0884F238u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 90u, 0x08B0C660u>(ctx, &aot_mem) && ctx.pc == 0x0884F238u) goto L_0884F238;
    return;
L_0884F238:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F250:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 65535u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0884F2AC;
      }
      goto L_0884F280;
    }
L_0884F280:
    ctx.gpr[5] = (ctx.gpr[17] & 65535u);
    ctx.gpr[31] = (0x0884F28Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884F1E8;
L_0884F28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0884F280;
      }
      goto L_0884F2AC;
    }
L_0884F2AC:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
L_0884F2CC:
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
    ctx.gpr[31] = (0x0884F300u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 585u, 0x08AC62A0u>(ctx, &aot_mem) && ctx.pc == 0x0884F300u) goto L_0884F300;
    return;
L_0884F300:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), ctx.gpr[17]);
    ctx.gpr[31] = (0x0884F318u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884EF30;
L_0884F318:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884F478;
      }
      goto L_0884F328;
    }
L_0884F328:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0884F334;
L_0884F334:
    ctx.gpr[5] = (ctx.gpr[17] & 65535u);
    ctx.gpr[31] = (0x0884F340u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884F250;
L_0884F340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0884F374;
      }
      goto L_0884F350;
    }
L_0884F350:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884F368;
      }
      goto L_0884F35C;
    }
L_0884F35C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_0884F368;
L_0884F368:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_0884F468;
      }
      goto L_0884F374;
    }
L_0884F374:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0884F3AC;
      }
      goto L_0884F3A0;
    }
L_0884F3A0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_0884F3B4;
      }
      goto L_0884F3AC;
    }
L_0884F3AC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[21]);
    goto L_0884F3B4;
L_0884F3B4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0884F3F4;
      }
      goto L_0884F3BC;
    }
L_0884F3BC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x0884F3D0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x0884F3D0u) goto L_0884F3D0;
    return;
L_0884F3D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0884F3F4;
      }
      goto L_0884F3E0;
    }
L_0884F3E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[31] = (0x0884F3ECu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x0884F3ECu) goto L_0884F3EC;
    return;
L_0884F3EC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0884F3F4;
L_0884F3F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0884F408;
      }
      goto L_0884F400;
    }
L_0884F400:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0884F424;
      }
      goto L_0884F408;
    }
L_0884F408:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[23] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884F41Cu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x0884F41Cu) goto L_0884F41C;
    return;
L_0884F41C:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0884F424;
L_0884F424:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0884F43C;
      }
      goto L_0884F42C;
    }
L_0884F42C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884F42C;
      }
      goto L_0884F43C;
    }
L_0884F43C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884F450;
      }
      goto L_0884F448;
    }
L_0884F448:
    ctx.gpr[31] = (0x0884F450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0884F450u) goto L_0884F450;
    return;
L_0884F450:
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    goto L_0884F468;
L_0884F468:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F334;
      }
      goto L_0884F478;
    }
L_0884F478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
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
L_0884F4B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884F500u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0884F500u) goto L_0884F500;
    return;
L_0884F500:
    ctx.gpr[31] = (0x0884F508u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C604u>(ctx, &aot_mem) && ctx.pc == 0x0884F508u) goto L_0884F508;
    return;
L_0884F508:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884F56C;
      }
      goto L_0884F528;
    }
L_0884F528:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[31] = (0x0884F534u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0884F534u) goto L_0884F534;
    return;
L_0884F534:
    ctx.gpr[31] = (0x0884F53Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C604u>(ctx, &aot_mem) && ctx.pc == 0x0884F53Cu) goto L_0884F53C;
    return;
L_0884F53C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (17142u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16480u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_0884F750;
      }
      goto L_0884F56C;
    }
L_0884F56C:
    ctx.gpr[31] = (0x0884F574u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0884F574u) goto L_0884F574;
    return;
L_0884F574:
    ctx.gpr[31] = (0x0884F57Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C604u>(ctx, &aot_mem) && ctx.pc == 0x0884F57Cu) goto L_0884F57C;
    return;
L_0884F57C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (49312u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884F5E0;
      }
      goto L_0884F59C;
    }
L_0884F59C:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[31] = (0x0884F5A8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0884F5A8u) goto L_0884F5A8;
    return;
L_0884F5A8:
    ctx.gpr[31] = (0x0884F5B0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C604u>(ctx, &aot_mem) && ctx.pc == 0x0884F5B0u) goto L_0884F5B0;
    return;
L_0884F5B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (17142u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16480u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_0884F750;
      }
      goto L_0884F5E0;
    }
L_0884F5E0:
    ctx.gpr[31] = (0x0884F5E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0884F5E8u) goto L_0884F5E8;
    return;
L_0884F5E8:
    ctx.gpr[31] = (0x0884F5F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem) && ctx.pc == 0x0884F5F0u) goto L_0884F5F0;
    return;
L_0884F5F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884F64C;
      }
      goto L_0884F608;
    }
L_0884F608:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x0884F614u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0884F614u) goto L_0884F614;
    return;
L_0884F614:
    ctx.gpr[31] = (0x0884F61Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem) && ctx.pc == 0x0884F61Cu) goto L_0884F61C;
    return;
L_0884F61C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (17142u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16480u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_0884F750;
      }
      goto L_0884F64C;
    }
L_0884F64C:
    ctx.gpr[31] = (0x0884F654u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0884F654u) goto L_0884F654;
    return;
L_0884F654:
    ctx.gpr[31] = (0x0884F65Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem) && ctx.pc == 0x0884F65Cu) goto L_0884F65C;
    return;
L_0884F65C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884F6B8;
      }
      goto L_0884F674;
    }
L_0884F674:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x0884F680u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0884F680u) goto L_0884F680;
    return;
L_0884F680:
    ctx.gpr[31] = (0x0884F688u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem) && ctx.pc == 0x0884F688u) goto L_0884F688;
    return;
L_0884F688:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (17142u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16480u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_0884F750;
      }
      goto L_0884F6B8;
    }
L_0884F6B8:
    ctx.gpr[31] = (0x0884F6C0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0884F6C0u) goto L_0884F6C0;
    return;
L_0884F6C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F6E0;
      }
      goto L_0884F6D4;
    }
L_0884F6D4:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
      if (branch_taken) {
          goto L_0884F750;
      }
      goto L_0884F6E0;
    }
L_0884F6E0:
    ctx.gpr[31] = (0x0884F6E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0884F6E8u) goto L_0884F6E8;
    return;
L_0884F6E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F708;
      }
      goto L_0884F6FC;
    }
L_0884F6FC:
    ctx.gpr[20] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
      if (branch_taken) {
          goto L_0884F750;
      }
      goto L_0884F708;
    }
L_0884F708:
    ctx.gpr[31] = (0x0884F710u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0884F710u) goto L_0884F710;
    return;
L_0884F710:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F730;
      }
      goto L_0884F724;
    }
L_0884F724:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
      if (branch_taken) {
          goto L_0884F750;
      }
      goto L_0884F730;
    }
L_0884F730:
    ctx.gpr[31] = (0x0884F738u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0884F738u) goto L_0884F738;
    return;
L_0884F738:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
      if (branch_taken) {
          goto L_0884F750;
      }
      goto L_0884F74C;
    }
L_0884F74C:
    ctx.gpr[17] = (0u | 1u);
    goto L_0884F750;
L_0884F750:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F7B0;
      }
      goto L_0884F75C;
    }
L_0884F75C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0884F798;
      }
      goto L_0884F768;
    }
L_0884F768:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884F798;
      }
      goto L_0884F770;
    }
L_0884F770:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0884F798;
      }
      goto L_0884F778;
    }
L_0884F778:
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F790;
      }
      goto L_0884F784;
    }
L_0884F784:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884F790;
L_0884F790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F7B0;
      }
      goto L_0884F798;
    }
L_0884F798:
    ctx.gpr[4] = (ctx.gpr[20] | ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F7B0;
      }
      goto L_0884F7A4;
    }
L_0884F7A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884F7B0;
L_0884F7B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F7DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884F80Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 585u, 0x08AC62A0u>(ctx, &aot_mem) && ctx.pc == 0x0884F80Cu) goto L_0884F80C;
    return;
L_0884F80C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[31] = (0x0884F84Cu);
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x0884F84Cu) goto L_0884F84C;
    return;
L_0884F84C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884F874;
      }
      goto L_0884F860;
    }
L_0884F860:
    ctx.gpr[17] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[31] = (0x0884F86Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x0884F86Cu) goto L_0884F86C;
    return;
L_0884F86C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0884F874;
      }
      goto L_0884F874;
    }
L_0884F874:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F9E0;
      }
      goto L_0884F888;
    }
L_0884F888:
    ctx.gpr[31] = (0x0884F890u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884EF30;
L_0884F890:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884F9E0;
      }
      goto L_0884F898;
    }
L_0884F898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0884F8C4;
      }
      goto L_0884F8A8;
    }
L_0884F8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
        goto L_0884F8B4;
    }
    goto L_0884F8B4;
L_0884F8B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884F9D8;
      }
      goto L_0884F8C4;
    }
L_0884F8C4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0884F904;
      }
      goto L_0884F8FC;
    }
L_0884F8FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0884F908;
      }
      goto L_0884F904;
    }
L_0884F904:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_0884F908;
L_0884F908:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0884F940;
      }
      goto L_0884F91C;
    }
L_0884F91C:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[31] = (0x0884F928u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x0884F928u) goto L_0884F928;
    return;
L_0884F928:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_0884F940;
      }
      goto L_0884F934;
    }
L_0884F934:
    ctx.gpr[31] = (0x0884F93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x0884F93Cu) goto L_0884F93C;
    return;
L_0884F93C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_0884F940;
L_0884F940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884F954;
      }
      goto L_0884F94C;
    }
L_0884F94C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_0884F968;
      }
      goto L_0884F954;
    }
L_0884F954:
    ctx.gpr[22] = (ctx.gpr[18] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0884F964u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x0884F964u) goto L_0884F964;
    return;
L_0884F964:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[22]);
    goto L_0884F968;
L_0884F968:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F984;
      }
      goto L_0884F974;
    }
L_0884F974:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884F974;
      }
      goto L_0884F984;
    }
L_0884F984:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884F9B0;
      }
      goto L_0884F98C;
    }
L_0884F98C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_0884F9B0;
      }
      goto L_0884F998;
    }
L_0884F998:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884F9A8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x0884F9A8u) goto L_0884F9A8;
    return;
L_0884F9A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0884F9B0;
      }
      goto L_0884F9B0;
    }
L_0884F9B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884F9C4;
      }
      goto L_0884F9BC;
    }
L_0884F9BC:
    ctx.gpr[31] = (0x0884F9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0884F9C4u) goto L_0884F9C4;
    return;
L_0884F9C4:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(240), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
    goto L_0884F9D8;
L_0884F9D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB74;
      }
      goto L_0884F9E0;
    }
L_0884F9E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB74;
      }
      goto L_0884F9F4;
    }
L_0884F9F4:
    ctx.gpr[5] = (ctx.gpr[18] & 65535u);
    ctx.gpr[31] = (0x0884FA00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884EDF4;
L_0884FA00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0884FA14u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 93u, 0x08B0C6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884FA14u) goto L_0884FA14;
    return;
L_0884FA14:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884FA24;
      }
      goto L_0884FA20;
    }
L_0884FA20:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_0884FA24;
L_0884FA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
        goto L_0884FA50;
    }
    goto L_0884FA34;
L_0884FA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
        goto L_0884FA40;
    }
    goto L_0884FA40;
L_0884FA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884FB60;
      }
      goto L_0884FA50;
    }
L_0884FA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0884FA8C;
      }
      goto L_0884FA84;
    }
L_0884FA84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0884FA90;
      }
      goto L_0884FA8C;
    }
L_0884FA8C:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_0884FA90;
L_0884FA90:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0884FAC8;
      }
      goto L_0884FAA4;
    }
L_0884FAA4:
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[31] = (0x0884FAB0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x0884FAB0u) goto L_0884FAB0;
    return;
L_0884FAB0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_0884FAC8;
      }
      goto L_0884FABC;
    }
L_0884FABC:
    ctx.gpr[31] = (0x0884FAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x0884FAC4u) goto L_0884FAC4;
    return;
L_0884FAC4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_0884FAC8;
L_0884FAC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884FADC;
      }
      goto L_0884FAD4;
    }
L_0884FAD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_0884FAF0;
      }
      goto L_0884FADC;
    }
L_0884FADC:
    ctx.gpr[23] = (ctx.gpr[19] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884FAECu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x0884FAECu) goto L_0884FAEC;
    return;
L_0884FAEC:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[23]);
    goto L_0884FAF0;
L_0884FAF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB0C;
      }
      goto L_0884FAFC;
    }
L_0884FAFC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884FAFC;
      }
      goto L_0884FB0C;
    }
L_0884FB0C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884FB38;
      }
      goto L_0884FB14;
    }
L_0884FB14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_0884FB38;
      }
      goto L_0884FB20;
    }
L_0884FB20:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884FB30u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x0884FB30u) goto L_0884FB30;
    return;
L_0884FB30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0884FB38;
      }
      goto L_0884FB38;
    }
L_0884FB38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884FB4C;
      }
      goto L_0884FB44;
    }
L_0884FB44:
    ctx.gpr[31] = (0x0884FB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0884FB4Cu) goto L_0884FB4C;
    return;
L_0884FB4C:
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
    goto L_0884FB60;
L_0884FB60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F9F4;
      }
      goto L_0884FB74;
    }
L_0884FB74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FBA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (2237u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[21] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_0884FC8C;
      }
      goto L_0884FBEC;
    }
L_0884FBEC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0884FC8C;
      }
      goto L_0884FBF4;
    }
L_0884FBF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FC8C;
      }
      goto L_0884FC00;
    }
L_0884FC00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FC8C;
      }
      goto L_0884FC08;
    }
L_0884FC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[31] = (0x0884FC48u);
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x0884FC48u) goto L_0884FC48;
    return;
L_0884FC48:
    ctx.gpr[31] = (0x0884FC50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 585u, 0x08AC62A0u>(ctx, &aot_mem) && ctx.pc == 0x0884FC50u) goto L_0884FC50;
    return;
L_0884FC50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FC8C;
      }
      goto L_0884FC64;
    }
L_0884FC64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    goto L_0884FC68;
L_0884FC68:
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884FC68;
      }
      goto L_0884FC8C;
    }
L_0884FC8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884FCAC;
      }
      goto L_0884FC98;
    }
L_0884FC98:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[18]);
    ctx.gpr[31] = (0x0884FCA4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x0884FCA4u) goto L_0884FCA4;
    return;
L_0884FCA4:
    ctx.gpr[31] = (0x0884FCACu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29592));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0884FCACu) goto L_0884FCAC;
    return;
L_0884FCAC:
    ctx.gpr[31] = (0x0884FCB4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 613u, 0x0882E9C4u>(ctx, &aot_mem) && ctx.pc == 0x0884FCB4u) goto L_0884FCB4;
    return;
L_0884FCB4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0884FD20;
      }
      goto L_0884FCBC;
    }
L_0884FCBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
        goto L_0884FD10;
    }
    goto L_0884FCC8;
L_0884FCC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0884FD2C;
      }
      goto L_0884FD10;
    }
L_0884FD10:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0884FD2C;
      }
      goto L_0884FD20;
    }
L_0884FD20:
    ctx.gpr[31] = (0x0884FD28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884F4B8;
L_0884FD28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    goto L_0884FD2C;
L_0884FD2C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0884FD40;
      }
      goto L_0884FD34;
    }
L_0884FD34:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884FD94;
      }
      goto L_0884FD40;
    }
L_0884FD40:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0884FD94;
      }
      goto L_0884FD88;
    }
L_0884FD88:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0884FD94;
L_0884FD94:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0884FDA4;
      }
      goto L_0884FD9C;
    }
L_0884FD9C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884FDE0;
      }
      goto L_0884FDA4;
    }
L_0884FDA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0884FDD4;
      }
      goto L_0884FDB8;
    }
L_0884FDB8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    goto L_0884FDBC;
L_0884FDBC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[9] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884FDBC;
      }
      goto L_0884FDD4;
    }
L_0884FDD4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0884FDE0;
L_0884FDE0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0884FE1C;
      }
      goto L_0884FDE8;
    }
L_0884FDE8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884FE1C;
      }
      goto L_0884FDFC;
    }
L_0884FDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884FE14u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884FE14u) goto L_0884FE14;
    return;
L_0884FE14:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0884FE3C;
      }
      goto L_0884FE1C;
    }
L_0884FE1C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0884FE3C;
      }
      goto L_0884FE24;
    }
L_0884FE24:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884FE3C;
      }
      goto L_0884FE38;
    }
L_0884FE38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884FE3C;
L_0884FE3C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0884FE64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884FE84u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 605u, 0x08AC646Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FE84u) goto L_0884FE84;
    return;
L_0884FE84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FEBC;
      }
      goto L_0884FE8C;
    }
L_0884FE8C:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 161u);
    ctx.gpr[31] = (0x0884FE9Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FE9Cu) goto L_0884FE9C;
    return;
L_0884FE9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884FEA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x0884FEA8u) goto L_0884FEA8;
    return;
L_0884FEA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0884FEC4;
      }
      goto L_0884FEB4;
    }
L_0884FEB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FECC;
      }
      goto L_0884FEBC;
    }
L_0884FEBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 37u, 0x08850168u>(ctx, &aot_mem); return;
      }
      goto L_0884FEC4;
    }
L_0884FEC4:
    ctx.gpr[31] = (0x0884FECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0884FECCu) goto L_0884FECC;
    return;
L_0884FECC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FF38;
      }
      goto L_0884FED4;
    }
L_0884FED4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 171u);
    ctx.gpr[31] = (0x0884FEE4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FEE4u) goto L_0884FEE4;
    return;
L_0884FEE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0884FEF0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x0884FEF0u) goto L_0884FEF0;
    return;
L_0884FEF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0884FF04;
      }
      goto L_0884FEFC;
    }
L_0884FEFC:
    ctx.gpr[31] = (0x0884FF04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0884FF04u) goto L_0884FF04;
    return;
L_0884FF04:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FF38;
      }
      goto L_0884FF0C;
    }
L_0884FF0C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x0884FF1Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0884FF1Cu) goto L_0884FF1C;
    return;
L_0884FF1C:
    ctx.gpr[31] = (0x0884FF24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 833u, 0x08AF78E0u>(ctx, &aot_mem) && ctx.pc == 0x0884FF24u) goto L_0884FF24;
    return;
L_0884FF24:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884FF38;
      }
      goto L_0884FF30;
    }
L_0884FF30:
    ctx.gpr[31] = (0x0884FF38u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0884FF38u) goto L_0884FF38;
    return;
L_0884FF38:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 162u);
    ctx.gpr[31] = (0x0884FF48u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FF48u) goto L_0884FF48;
    return;
L_0884FF48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884FF54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x0884FF54u) goto L_0884FF54;
    return;
L_0884FF54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0884FF68;
      }
      goto L_0884FF60;
    }
L_0884FF60:
    ctx.gpr[31] = (0x0884FF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0884FF68u) goto L_0884FF68;
    return;
L_0884FF68:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FFC0;
      }
      goto L_0884FF70;
    }
L_0884FF70:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 171u);
    ctx.gpr[31] = (0x0884FF80u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FF80u) goto L_0884FF80;
    return;
L_0884FF80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0884FF8Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x0884FF8Cu) goto L_0884FF8C;
    return;
L_0884FF8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0884FFA0;
      }
      goto L_0884FF98;
    }
L_0884FF98:
    ctx.gpr[31] = (0x0884FFA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0884FFA0u) goto L_0884FFA0;
    return;
L_0884FFA0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FFC0;
      }
      goto L_0884FFA8;
    }
L_0884FFA8:
    ctx.gpr[31] = (0x0884FFB0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 935u, 0x08B577CCu>(ctx, &aot_mem) && ctx.pc == 0x0884FFB0u) goto L_0884FFB0;
    return;
L_0884FFB0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0884FFBCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x0884FFBCu) goto L_0884FFBC;
    return;
L_0884FFBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0884FFC0;
L_0884FFC0:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 163u);
    ctx.gpr[31] = (0x0884FFD0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FFD0u) goto L_0884FFD0;
    return;
L_0884FFD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884FFDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x0884FFDCu) goto L_0884FFDC;
    return;
L_0884FFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0884FFF0;
      }
      goto L_0884FFE8;
    }
L_0884FFE8:
    ctx.gpr[31] = (0x0884FFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0884FFF0u) goto L_0884FFF0;
    return;
L_0884FFF0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 9u, 0x08850048u>(ctx, &aot_mem); return;
      }
      goto L_0884FFF8;
    }
L_0884FFF8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (0u | 171u);
    ctx.pc = 0x08850000u; return;
}

void recomp_unit_0018(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0018_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_18(Runtime &runtime) {
    runtime.register_generated_unit(18u, 0x0884C000u, 16384u, &recomp_unit_0018, &recomp_unit_0018_entry);
    runtime.register_function(0x0884C000u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C048u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C09Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C138u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C144u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C16Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C188u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C1B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C1CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C1F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C240u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C248u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C250u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C258u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C268u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C278u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C280u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C288u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C298u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C334u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C33Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C388u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C39Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C3CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C3E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C424u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C430u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C458u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C474u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C494u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C4D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C4D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C4E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C4E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C4F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C508u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C510u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C53Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C57Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C604u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C60Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C614u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C618u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C620u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C628u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C660u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C66Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C68Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C700u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C710u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C71Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C730u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C73Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C764u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C80Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C820u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C82Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C838u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C840u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C84Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C868u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C880u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C888u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C89Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C908u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C914u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C928u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C938u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C944u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C96Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C998u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA60u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CAB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CAC4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CACCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CAD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CAE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB54u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB64u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBA0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC3Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC58u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC60u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC70u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD98u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE7Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEC0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF58u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF98u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFC0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D03Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D04Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D05Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D068u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D070u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D07Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D084u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D108u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D118u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D128u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D138u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D144u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D14Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D154u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D168u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D18Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D200u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D210u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D228u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D230u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D254u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D264u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D26Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D294u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D30Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D31Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D328u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D330u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D33Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D374u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D384u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D394u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D408u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D410u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D418u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D438u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D448u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D458u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D468u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D474u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D47Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D484u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D498u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D500u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D52Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D534u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D544u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D554u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D5ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D5D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D5ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D5F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D600u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D608u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D610u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D614u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D624u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D644u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D66Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D674u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D67Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D68Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D704u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D71Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D720u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D724u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D734u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D750u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D76Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D780u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D78Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D80Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D820u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D830u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D840u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D844u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D854u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D900u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D908u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D910u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D914u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D91Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D924u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D944u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D954u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D964u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D974u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D97Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D984u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D98Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DAA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DABCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DAC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DAE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB88u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBCCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC08u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DCDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DCFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DD2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DD3Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DD5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DD94u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE3Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE7Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DECCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF08u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF60u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFC0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E00Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E024u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E02Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E054u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E064u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E098u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E10Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E140u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E1DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E1ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E1F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E1FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E21Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E22Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E23Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E24Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E258u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E260u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E268u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E270u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E288u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E308u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E314u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E324u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E32Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E334u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E348u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E364u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E37Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E388u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E408u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E438u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E448u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E464u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E474u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E4A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E4A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E4B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E4C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E500u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E534u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E57Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E5B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E654u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E658u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E660u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E668u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E688u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E698u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E6A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E6B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E6C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E6C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E6D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E6E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E708u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E718u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E724u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E734u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E73Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E744u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E74Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E760u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E77Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E794u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E7A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E7C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E7CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E7DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E7ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E7F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E814u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E828u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E854u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E85Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E86Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E87Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E8A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E8B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E8C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E91Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E950u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E958u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E964u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E974u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E980u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EAA0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EAC4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB10u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB54u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB64u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB88u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB94u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBCCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EC04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EC14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EC30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EC6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ECB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ECB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ECECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ECF4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED10u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED60u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDE4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDF4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE34u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE3Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE54u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE60u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EEA0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EEA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EEB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EEBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF08u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF54u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF64u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF88u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF94u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFA0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFE4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F048u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F054u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F114u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F120u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F174u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F180u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F220u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F238u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F250u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F280u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F28Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F2ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F2CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F300u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F318u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F328u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F334u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F340u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F350u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F35Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F368u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F374u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F400u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F408u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F41Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F424u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F42Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F43Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F448u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F450u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F468u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F478u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F4B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F500u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F508u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F528u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F534u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F53Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F56Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F574u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F57Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F59Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F608u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F614u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F61Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F64Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F654u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F65Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F674u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F680u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F688u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F708u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F710u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F724u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F730u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F738u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F74Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F750u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F75Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F768u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F770u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F778u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F784u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F790u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F798u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F80Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F84Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F860u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F86Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F874u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F888u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F890u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F898u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F904u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F908u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F91Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F928u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F934u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F93Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F940u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F94Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F954u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F964u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F968u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F974u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F984u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F98Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F998u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA34u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FABCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAC4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FADCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB60u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBA0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBF4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC08u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC64u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC98u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FCA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FCACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FCB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FCBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FCC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD10u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD34u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD88u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD94u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FDA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FDB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FDBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FDD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FDE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FDE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FDFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE3Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE64u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEC4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FECCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FED4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEE4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF54u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF60u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF70u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF98u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFA0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFC0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFF8u, &recomp_unit_0018, "recomp_unit_0018");
}
} // namespace psprecomp
