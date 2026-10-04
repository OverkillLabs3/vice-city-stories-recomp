#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0051[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8,
    0, 9, 0, 10, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0, 0,
    0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0,
    34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 39, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43,
    0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 58, 59, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0,
    63, 64, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 70, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73,
    74, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 81,
    0, 82, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 96, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 105, 0,
    106, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124,
    0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 144, 0, 0, 145, 0, 146, 0, 147,
    0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 154, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 160,
    0, 161, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 169,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 218,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 223, 0, 224, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 233, 0, 234, 235, 0, 236, 0, 0, 0, 0, 237, 0, 238,
    0, 239, 0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247,
    0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0,
    0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0,
    0, 0, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0,
    0, 290, 291, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 296, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 305, 0, 0, 306, 0, 0, 0,
    0, 0, 0, 0, 0, 307, 0, 308, 0, 309, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 0,
    0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 321, 0, 322, 323, 0, 324, 0, 0,
    325, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 331, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 337, 0, 0,
    0, 338, 0, 339, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 347,
    348, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 352, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 356, 0, 357,
    0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 364, 0, 365, 0,
    0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 379, 380, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382,
    0, 383, 0, 384, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 392, 0, 393,
    0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400,
    0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 403, 0, 0, 0, 404, 0, 405, 0, 406, 0, 0, 0, 0, 0,
    0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412,
    413, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 418, 419, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 422, 0,
    0, 0, 0, 423, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 436, 0, 437, 0, 438, 0, 439, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    444, 0, 445, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 455, 0, 456, 0, 0, 0, 0,
    0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    458, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473,
    0, 0, 0, 0, 474, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0,
    0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 487,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0,
    492, 0, 493, 0, 494, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0,
    0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 510, 0,
    0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0,
    0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 518, 0, 0, 0, 0, 0, 0, 519,
    0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 523, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 537, 0, 538, 0,
    539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 543, 0, 0,
    0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0,
    0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0,
    0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 587, 0, 588, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0,
    0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 594, 0, 0, 595,
    0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    597, 0, 0, 598, 0, 599, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0,
    0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0,
    0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0,
    626, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630,
};
void recomp_unit_0051_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088D0000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0051[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D0000;
    case 2u: goto L_088D0028;
    case 3u: goto L_088D003C;
    case 4u: goto L_088D0048;
    case 5u: goto L_088D0050;
    case 6u: goto L_088D0064;
    case 7u: goto L_088D0074;
    case 8u: goto L_088D007C;
    case 9u: goto L_088D0084;
    case 10u: goto L_088D008C;
    case 11u: goto L_088D0098;
    case 12u: goto L_088D00AC;
    case 13u: goto L_088D00B4;
    case 14u: goto L_088D00BC;
    case 15u: goto L_088D00CC;
    case 16u: goto L_088D00D8;
    case 17u: goto L_088D00E0;
    case 18u: goto L_088D00E8;
    case 19u: goto L_088D00F0;
    case 20u: goto L_088D0104;
    case 21u: goto L_088D0110;
    case 22u: goto L_088D011C;
    case 23u: goto L_088D0128;
    case 24u: goto L_088D0148;
    case 25u: goto L_088D0178;
    case 26u: goto L_088D0188;
    case 27u: goto L_088D01A0;
    case 28u: goto L_088D01A8;
    case 29u: goto L_088D01B0;
    case 30u: goto L_088D01B4;
    case 31u: goto L_088D01C8;
    case 32u: goto L_088D01E4;
    case 33u: goto L_088D01F4;
    case 34u: goto L_088D0200;
    case 35u: goto L_088D0214;
    case 36u: goto L_088D0230;
    case 37u: goto L_088D0248;
    case 38u: goto L_088D0280;
    case 39u: goto L_088D0288;
    case 40u: goto L_088D028C;
    case 41u: goto L_088D02AC;
    case 42u: goto L_088D02F4;
    case 43u: goto L_088D02FC;
    case 44u: goto L_088D0308;
    case 45u: goto L_088D0310;
    case 46u: goto L_088D0318;
    case 47u: goto L_088D0320;
    case 48u: goto L_088D032C;
    case 49u: goto L_088D0344;
    case 50u: goto L_088D034C;
    case 51u: goto L_088D0354;
    case 52u: goto L_088D0364;
    case 53u: goto L_088D0380;
    case 54u: goto L_088D0390;
    case 55u: goto L_088D03A0;
    case 56u: goto L_088D03AC;
    case 57u: goto L_088D03C0;
    case 58u: goto L_088D03C4;
    case 59u: goto L_088D03C8;
    case 60u: goto L_088D03D0;
    case 61u: goto L_088D03E0;
    case 62u: goto L_088D03EC;
    case 63u: goto L_088D0400;
    case 64u: goto L_088D0404;
    case 65u: goto L_088D0408;
    case 66u: goto L_088D0410;
    case 67u: goto L_088D0424;
    case 68u: goto L_088D0430;
    case 69u: goto L_088D0444;
    case 70u: goto L_088D044C;
    case 71u: goto L_088D0450;
    case 72u: goto L_088D0460;
    case 73u: goto L_088D047C;
    case 74u: goto L_088D0480;
    case 75u: goto L_088D0494;
    case 76u: goto L_088D04A4;
    case 77u: goto L_088D04B8;
    case 78u: goto L_088D04C0;
    case 79u: goto L_088D04DC;
    case 80u: goto L_088D04F4;
    case 81u: goto L_088D04FC;
    case 82u: goto L_088D0504;
    case 83u: goto L_088D0510;
    case 84u: goto L_088D0518;
    case 85u: goto L_088D0530;
    case 86u: goto L_088D053C;
    case 87u: goto L_088D0548;
    case 88u: goto L_088D054C;
    case 89u: goto L_088D0558;
    case 90u: goto L_088D0564;
    case 91u: goto L_088D0578;
    case 92u: goto L_088D058C;
    case 93u: goto L_088D05A8;
    case 94u: goto L_088D05D8;
    case 95u: goto L_088D05E0;
    case 96u: goto L_088D05E4;
    case 97u: goto L_088D0610;
    case 98u: goto L_088D066C;
    case 99u: goto L_088D067C;
    case 100u: goto L_088D06A4;
    case 101u: goto L_088D06A8;
    case 102u: goto L_088D06D8;
    case 103u: goto L_088D06E4;
    case 104u: goto L_088D06F0;
    case 105u: goto L_088D06F8;
    case 106u: goto L_088D0700;
    case 107u: goto L_088D0704;
    case 108u: goto L_088D070C;
    case 109u: goto L_088D0714;
    case 110u: goto L_088D071C;
    case 111u: goto L_088D0724;
    case 112u: goto L_088D0768;
    case 113u: goto L_088D077C;
    case 114u: goto L_088D07C4;
    case 115u: goto L_088D07D0;
    case 116u: goto L_088D07F0;
    case 117u: goto L_088D0828;
    case 118u: goto L_088D0834;
    case 119u: goto L_088D083C;
    case 120u: goto L_088D0844;
    case 121u: goto L_088D084C;
    case 122u: goto L_088D0854;
    case 123u: goto L_088D085C;
    case 124u: goto L_088D087C;
    case 125u: goto L_088D0884;
    case 126u: goto L_088D089C;
    case 127u: goto L_088D08D0;
    case 128u: goto L_088D08E4;
    case 129u: goto L_088D08EC;
    case 130u: goto L_088D08F0;
    case 131u: goto L_088D0940;
    case 132u: goto L_088D0948;
    case 133u: goto L_088D0954;
    case 134u: goto L_088D0978;
    case 135u: goto L_088D0990;
    case 136u: goto L_088D09B4;
    case 137u: goto L_088D09C8;
    case 138u: goto L_088D09F0;
    case 139u: goto L_088D0A30;
    case 140u: goto L_088D0A54;
    case 141u: goto L_088D0A9C;
    case 142u: goto L_088D0ACC;
    case 143u: goto L_088D0AD4;
    case 144u: goto L_088D0AE0;
    case 145u: goto L_088D0AEC;
    case 146u: goto L_088D0AF4;
    case 147u: goto L_088D0AFC;
    case 148u: goto L_088D0B08;
    case 149u: goto L_088D0B10;
    case 150u: goto L_088D0B44;
    case 151u: goto L_088D0B50;
    case 152u: goto L_088D0B5C;
    case 153u: goto L_088D0B68;
    case 154u: goto L_088D0B6C;
    case 155u: goto L_088D0B7C;
    case 156u: goto L_088D0BAC;
    case 157u: goto L_088D0BDC;
    case 158u: goto L_088D0BE4;
    case 159u: goto L_088D0BF0;
    case 160u: goto L_088D0BFC;
    case 161u: goto L_088D0C04;
    case 162u: goto L_088D0C0C;
    case 163u: goto L_088D0C18;
    case 164u: goto L_088D0C20;
    case 165u: goto L_088D0C54;
    case 166u: goto L_088D0C60;
    case 167u: goto L_088D0C6C;
    case 168u: goto L_088D0C78;
    case 169u: goto L_088D0C7C;
    case 170u: goto L_088D0C8C;
    case 171u: goto L_088D0CBC;
    case 172u: goto L_088D0CC4;
    case 173u: goto L_088D0CD0;
    case 174u: goto L_088D0CE4;
    case 175u: goto L_088D0CEC;
    case 176u: goto L_088D0D18;
    case 177u: goto L_088D0D44;
    case 178u: goto L_088D0D64;
    case 179u: goto L_088D0D88;
    case 180u: goto L_088D0DCC;
    case 181u: goto L_088D0DEC;
    case 182u: goto L_088D0E34;
    case 183u: goto L_088D0E54;
    case 184u: goto L_088D0E68;
    case 185u: goto L_088D0EB4;
    case 186u: goto L_088D0EE0;
    case 187u: goto L_088D0EEC;
    case 188u: goto L_088D0EF4;
    case 189u: goto L_088D0F18;
    case 190u: goto L_088D0F64;
    case 191u: goto L_088D0F84;
    case 192u: goto L_088D0FD8;
    case 193u: goto L_088D0FEC;
    case 194u: goto L_088D1018;
    case 195u: goto L_088D1064;
    case 196u: goto L_088D106C;
    case 197u: goto L_088D108C;
    case 198u: goto L_088D10C4;
    case 199u: goto L_088D10FC;
    case 200u: goto L_088D1134;
    case 201u: goto L_088D1160;
    case 202u: goto L_088D11CC;
    case 203u: goto L_088D11D8;
    case 204u: goto L_088D11FC;
    case 205u: goto L_088D1218;
    case 206u: goto L_088D1240;
    case 207u: goto L_088D128C;
    case 208u: goto L_088D1294;
    case 209u: goto L_088D12CC;
    case 210u: goto L_088D1334;
    case 211u: goto L_088D133C;
    case 212u: goto L_088D134C;
    case 213u: goto L_088D13B0;
    case 214u: goto L_088D13B8;
    case 215u: goto L_088D13C4;
    case 216u: goto L_088D13E8;
    case 217u: goto L_088D13F0;
    case 218u: goto L_088D13FC;
    case 219u: goto L_088D1410;
    case 220u: goto L_088D1428;
    case 221u: goto L_088D1434;
    case 222u: goto L_088D1458;
    case 223u: goto L_088D1484;
    case 224u: goto L_088D148C;
    case 225u: goto L_088D1498;
    case 226u: goto L_088D14AC;
    case 227u: goto L_088D14F8;
    case 228u: goto L_088D150C;
    case 229u: goto L_088D1518;
    case 230u: goto L_088D1520;
    case 231u: goto L_088D1538;
    case 232u: goto L_088D1540;
    case 233u: goto L_088D154C;
    case 234u: goto L_088D1554;
    case 235u: goto L_088D1558;
    case 236u: goto L_088D1560;
    case 237u: goto L_088D1574;
    case 238u: goto L_088D157C;
    case 239u: goto L_088D1584;
    case 240u: goto L_088D158C;
    case 241u: goto L_088D1594;
    case 242u: goto L_088D15A0;
    case 243u: goto L_088D15B0;
    case 244u: goto L_088D15C0;
    case 245u: goto L_088D15CC;
    case 246u: goto L_088D15F4;
    case 247u: goto L_088D15FC;
    case 248u: goto L_088D1608;
    case 249u: goto L_088D161C;
    case 250u: goto L_088D1650;
    case 251u: goto L_088D1654;
    case 252u: goto L_088D1698;
    case 253u: goto L_088D16A0;
    case 254u: goto L_088D16AC;
    case 255u: goto L_088D16C0;
    case 256u: goto L_088D16EC;
    case 257u: goto L_088D16F4;
    case 258u: goto L_088D1710;
    case 259u: goto L_088D1760;
    case 260u: goto L_088D17A4;
    case 261u: goto L_088D17DC;
    case 262u: goto L_088D1820;
    case 263u: goto L_088D183C;
    case 264u: goto L_088D1888;
    case 265u: goto L_088D18C4;
    case 266u: goto L_088D1904;
    case 267u: goto L_088D1910;
    case 268u: goto L_088D192C;
    case 269u: goto L_088D1940;
    case 270u: goto L_088D1970;
    case 271u: goto L_088D1978;
    case 272u: goto L_088D1998;
    case 273u: goto L_088D19A0;
    case 274u: goto L_088D19DC;
    case 275u: goto L_088D19EC;
    case 276u: goto L_088D1A34;
    case 277u: goto L_088D1A50;
    case 278u: goto L_088D1A78;
    case 279u: goto L_088D1AD4;
    case 280u: goto L_088D1AE8;
    case 281u: goto L_088D1AF8;
    case 282u: goto L_088D1B0C;
    case 283u: goto L_088D1B1C;
    case 284u: goto L_088D1B24;
    case 285u: goto L_088D1B30;
    case 286u: goto L_088D1B3C;
    case 287u: goto L_088D1B44;
    case 288u: goto L_088D1B68;
    case 289u: goto L_088D1B78;
    case 290u: goto L_088D1B84;
    case 291u: goto L_088D1B88;
    case 292u: goto L_088D1B98;
    case 293u: goto L_088D1BA0;
    case 294u: goto L_088D1BD0;
    case 295u: goto L_088D1BD8;
    case 296u: goto L_088D1BEC;
    case 297u: goto L_088D1BF0;
    case 298u: goto L_088D1C18;
    case 299u: goto L_088D1C48;
    case 300u: goto L_088D1C9C;
    case 301u: goto L_088D1CB8;
    case 302u: goto L_088D1CCC;
    case 303u: goto L_088D1CD4;
    case 304u: goto L_088D1CDC;
    case 305u: goto L_088D1CE4;
    case 306u: goto L_088D1CF0;
    case 307u: goto L_088D1D14;
    case 308u: goto L_088D1D1C;
    case 309u: goto L_088D1D24;
    case 310u: goto L_088D1D2C;
    case 311u: goto L_088D1D38;
    case 312u: goto L_088D1D44;
    case 313u: goto L_088D1D5C;
    case 314u: goto L_088D1D64;
    case 315u: goto L_088D1D6C;
    case 316u: goto L_088D1D84;
    case 317u: goto L_088D1DA4;
    case 318u: goto L_088D1DC0;
    case 319u: goto L_088D1DCC;
    case 320u: goto L_088D1DD8;
    case 321u: goto L_088D1DE0;
    case 322u: goto L_088D1DE8;
    case 323u: goto L_088D1DEC;
    case 324u: goto L_088D1DF4;
    case 325u: goto L_088D1E00;
    case 326u: goto L_088D1E10;
    case 327u: goto L_088D1E1C;
    case 328u: goto L_088D1E2C;
    case 329u: goto L_088D1E50;
    case 330u: goto L_088D1E70;
    case 331u: goto L_088D1E74;
    case 332u: goto L_088D1E90;
    case 333u: goto L_088D1EA0;
    case 334u: goto L_088D1EBC;
    case 335u: goto L_088D1EE0;
    case 336u: goto L_088D1EEC;
    case 337u: goto L_088D1EF4;
    case 338u: goto L_088D1F04;
    case 339u: goto L_088D1F0C;
    case 340u: goto L_088D1F20;
    case 341u: goto L_088D1F28;
    case 342u: goto L_088D1F3C;
    case 343u: goto L_088D1F44;
    case 344u: goto L_088D1F4C;
    case 345u: goto L_088D1F60;
    case 346u: goto L_088D1F68;
    case 347u: goto L_088D1F7C;
    case 348u: goto L_088D1F80;
    case 349u: goto L_088D1F90;
    case 350u: goto L_088D1FA4;
    case 351u: goto L_088D1FAC;
    case 352u: goto L_088D1FC0;
    case 353u: goto L_088D1FC4;
    case 354u: goto L_088D1FE4;
    case 355u: goto L_088D1FEC;
    case 356u: goto L_088D1FF4;
    case 357u: goto L_088D1FFC;
    case 358u: goto L_088D2008;
    case 359u: goto L_088D2020;
    case 360u: goto L_088D2030;
    case 361u: goto L_088D2048;
    case 362u: goto L_088D2058;
    case 363u: goto L_088D2068;
    case 364u: goto L_088D2070;
    case 365u: goto L_088D2078;
    case 366u: goto L_088D2090;
    case 367u: goto L_088D209C;
    case 368u: goto L_088D20AC;
    case 369u: goto L_088D20B8;
    case 370u: goto L_088D20C0;
    case 371u: goto L_088D210C;
    case 372u: goto L_088D2118;
    case 373u: goto L_088D2128;
    case 374u: goto L_088D2140;
    case 375u: goto L_088D2150;
    case 376u: goto L_088D2158;
    case 377u: goto L_088D2160;
    case 378u: goto L_088D2168;
    case 379u: goto L_088D2174;
    case 380u: goto L_088D2178;
    case 381u: goto L_088D21F4;
    case 382u: goto L_088D21FC;
    case 383u: goto L_088D2204;
    case 384u: goto L_088D220C;
    case 385u: goto L_088D2210;
    case 386u: goto L_088D2248;
    case 387u: goto L_088D2290;
    case 388u: goto L_088D22AC;
    case 389u: goto L_088D22BC;
    case 390u: goto L_088D22E0;
    case 391u: goto L_088D22E8;
    case 392u: goto L_088D22F4;
    case 393u: goto L_088D22FC;
    case 394u: goto L_088D2304;
    case 395u: goto L_088D230C;
    case 396u: goto L_088D2314;
    case 397u: goto L_088D2348;
    case 398u: goto L_088D2350;
    case 399u: goto L_088D236C;
    case 400u: goto L_088D237C;
    case 401u: goto L_088D2398;
    case 402u: goto L_088D23C4;
    case 403u: goto L_088D23C8;
    case 404u: goto L_088D23D8;
    case 405u: goto L_088D23E0;
    case 406u: goto L_088D23E8;
    case 407u: goto L_088D2408;
    case 408u: goto L_088D2424;
    case 409u: goto L_088D2434;
    case 410u: goto L_088D2454;
    case 411u: goto L_088D246C;
    case 412u: goto L_088D247C;
    case 413u: goto L_088D2480;
    case 414u: goto L_088D2488;
    case 415u: goto L_088D2498;
    case 416u: goto L_088D24AC;
    case 417u: goto L_088D24B4;
    case 418u: goto L_088D24C8;
    case 419u: goto L_088D24CC;
    case 420u: goto L_088D24DC;
    case 421u: goto L_088D24F0;
    case 422u: goto L_088D24F8;
    case 423u: goto L_088D250C;
    case 424u: goto L_088D2510;
    case 425u: goto L_088D2518;
    case 426u: goto L_088D2520;
    case 427u: goto L_088D2528;
    case 428u: goto L_088D2530;
    case 429u: goto L_088D253C;
    case 430u: goto L_088D2554;
    case 431u: goto L_088D2564;
    case 432u: goto L_088D257C;
    case 433u: goto L_088D258C;
    case 434u: goto L_088D25A8;
    case 435u: goto L_088D25B4;
    case 436u: goto L_088D2614;
    case 437u: goto L_088D261C;
    case 438u: goto L_088D2624;
    case 439u: goto L_088D262C;
    case 440u: goto L_088D2630;
    case 441u: goto L_088D2660;
    case 442u: goto L_088D26C4;
    case 443u: goto L_088D26D4;
    case 444u: goto L_088D2700;
    case 445u: goto L_088D2708;
    case 446u: goto L_088D2710;
    case 447u: goto L_088D2734;
    case 448u: goto L_088D2744;
    case 449u: goto L_088D2754;
    case 450u: goto L_088D2770;
    case 451u: goto L_088D27A8;
    case 452u: goto L_088D27B4;
    case 453u: goto L_088D27D0;
    case 454u: goto L_088D27D8;
    case 455u: goto L_088D27E4;
    case 456u: goto L_088D27EC;
    case 457u: goto L_088D2804;
    case 458u: goto L_088D2880;
    case 459u: goto L_088D2888;
    case 460u: goto L_088D28A0;
    case 461u: goto L_088D28C0;
    case 462u: goto L_088D28CC;
    case 463u: goto L_088D28D8;
    case 464u: goto L_088D28E0;
    case 465u: goto L_088D28EC;
    case 466u: goto L_088D2928;
    case 467u: goto L_088D292C;
    case 468u: goto L_088D2948;
    case 469u: goto L_088D2960;
    case 470u: goto L_088D29A8;
    case 471u: goto L_088D29B4;
    case 472u: goto L_088D29C8;
    case 473u: goto L_088D29FC;
    case 474u: goto L_088D2A10;
    case 475u: goto L_088D2A14;
    case 476u: goto L_088D2A30;
    case 477u: goto L_088D2A40;
    case 478u: goto L_088D2A8C;
    case 479u: goto L_088D2A98;
    case 480u: goto L_088D2AAC;
    case 481u: goto L_088D2AD4;
    case 482u: goto L_088D2ADC;
    case 483u: goto L_088D2AE8;
    case 484u: goto L_088D2B0C;
    case 485u: goto L_088D2B1C;
    case 486u: goto L_088D2B6C;
    case 487u: goto L_088D2B7C;
    case 488u: goto L_088D2BC0;
    case 489u: goto L_088D2C24;
    case 490u: goto L_088D2C34;
    case 491u: goto L_088D2C78;
    case 492u: goto L_088D2C80;
    case 493u: goto L_088D2C88;
    case 494u: goto L_088D2C90;
    case 495u: goto L_088D2C98;
    case 496u: goto L_088D2CB4;
    case 497u: goto L_088D2CBC;
    case 498u: goto L_088D2CC8;
    case 499u: goto L_088D2CD0;
    case 500u: goto L_088D2CE8;
    case 501u: goto L_088D2D50;
    case 502u: goto L_088D2D58;
    case 503u: goto L_088D2D70;
    case 504u: goto L_088D2D90;
    case 505u: goto L_088D2D9C;
    case 506u: goto L_088D2DA8;
    case 507u: goto L_088D2DB0;
    case 508u: goto L_088D2DBC;
    case 509u: goto L_088D2DF4;
    case 510u: goto L_088D2DF8;
    case 511u: goto L_088D2E18;
    case 512u: goto L_088D2E30;
    case 513u: goto L_088D2E78;
    case 514u: goto L_088D2E84;
    case 515u: goto L_088D2E98;
    case 516u: goto L_088D2ECC;
    case 517u: goto L_088D2EDC;
    case 518u: goto L_088D2EE0;
    case 519u: goto L_088D2EFC;
    case 520u: goto L_088D2F0C;
    case 521u: goto L_088D2F58;
    case 522u: goto L_088D2F64;
    case 523u: goto L_088D2F78;
    case 524u: goto L_088D2FA8;
    case 525u: goto L_088D2FB0;
    case 526u: goto L_088D2FBC;
    case 527u: goto L_088D2FE0;
    case 528u: goto L_088D2FF0;
    case 529u: goto L_088D3048;
    case 530u: goto L_088D304C;
    case 531u: goto L_088D3090;
    case 532u: goto L_088D3100;
    case 533u: goto L_088D3118;
    case 534u: goto L_088D3144;
    case 535u: goto L_088D3150;
    case 536u: goto L_088D3158;
    case 537u: goto L_088D3170;
    case 538u: goto L_088D3178;
    case 539u: goto L_088D3180;
    case 540u: goto L_088D31C4;
    case 541u: goto L_088D31D8;
    case 542u: goto L_088D31E4;
    case 543u: goto L_088D31F4;
    case 544u: goto L_088D320C;
    case 545u: goto L_088D323C;
    case 546u: goto L_088D3250;
    case 547u: goto L_088D3298;
    case 548u: goto L_088D32A0;
    case 549u: goto L_088D32D0;
    case 550u: goto L_088D32E4;
    case 551u: goto L_088D3344;
    case 552u: goto L_088D3374;
    case 553u: goto L_088D3388;
    case 554u: goto L_088D33E4;
    case 555u: goto L_088D3404;
    case 556u: goto L_088D346C;
    case 557u: goto L_088D349C;
    case 558u: goto L_088D34B0;
    case 559u: goto L_088D34F8;
    case 560u: goto L_088D3528;
    case 561u: goto L_088D353C;
    case 562u: goto L_088D3598;
    case 563u: goto L_088D35C8;
    case 564u: goto L_088D3624;
    case 565u: goto L_088D3654;
    case 566u: goto L_088D36B4;
    case 567u: goto L_088D36E4;
    case 568u: goto L_088D36F8;
    case 569u: goto L_088D3754;
    case 570u: goto L_088D3784;
    case 571u: goto L_088D37E4;
    case 572u: goto L_088D3814;
    case 573u: goto L_088D3828;
    case 574u: goto L_088D3884;
    case 575u: goto L_088D38C0;
    case 576u: goto L_088D38D4;
    case 577u: goto L_088D38E4;
    case 578u: goto L_088D38F0;
    case 579u: goto L_088D3954;
    case 580u: goto L_088D3984;
    case 581u: goto L_088D3998;
    case 582u: goto L_088D39F8;
    case 583u: goto L_088D3A28;
    case 584u: goto L_088D3A3C;
    case 585u: goto L_088D3A9C;
    case 586u: goto L_088D3AA8;
    case 587u: goto L_088D3AB4;
    case 588u: goto L_088D3ABC;
    case 589u: goto L_088D3AC8;
    case 590u: goto L_088D3AEC;
    case 591u: goto L_088D3B10;
    case 592u: goto L_088D3B5C;
    case 593u: goto L_088D3B68;
    case 594u: goto L_088D3B70;
    case 595u: goto L_088D3B7C;
    case 596u: goto L_088D3BA0;
    case 597u: goto L_088D3C00;
    case 598u: goto L_088D3C0C;
    case 599u: goto L_088D3C14;
    case 600u: goto L_088D3C20;
    case 601u: goto L_088D3C44;
    case 602u: goto L_088D3CA8;
    case 603u: goto L_088D3CC4;
    case 604u: goto L_088D3CD0;
    case 605u: goto L_088D3CE0;
    case 606u: goto L_088D3CF0;
    case 607u: goto L_088D3D08;
    case 608u: goto L_088D3D38;
    case 609u: goto L_088D3D48;
    case 610u: goto L_088D3D6C;
    case 611u: goto L_088D3D78;
    case 612u: goto L_088D3DA8;
    case 613u: goto L_088D3DF8;
    case 614u: goto L_088D3E48;
    case 615u: goto L_088D3E78;
    case 616u: goto L_088D3EA0;
    case 617u: goto L_088D3ED0;
    case 618u: goto L_088D3EF8;
    case 619u: goto L_088D3F04;
    case 620u: goto L_088D3F1C;
    case 621u: goto L_088D3F2C;
    case 622u: goto L_088D3F3C;
    case 623u: goto L_088D3F48;
    case 624u: goto L_088D3F60;
    case 625u: goto L_088D3F70;
    case 626u: goto L_088D3F80;
    case 627u: goto L_088D3F8C;
    case 628u: goto L_088D3FB0;
    case 629u: goto L_088D3FE4;
    case 630u: goto L_088D3FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D0000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088D0288;
      }
      goto L_088D0028;
    }
L_088D0028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088D0050;
      }
      goto L_088D003C;
    }
L_088D003C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D0048u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 702u, 0x088C76BCu>(ctx, &aot_mem) && ctx.pc == 0x088D0048u) goto L_088D0048;
    return;
L_088D0048:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D0084;
      }
      goto L_088D0050;
    }
L_088D0050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 244u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D007C;
      }
      goto L_088D0064;
    }
L_088D0064:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(558)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088D008C;
      }
      goto L_088D0074;
    }
L_088D0074:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_088D00B4;
      }
      goto L_088D007C;
    }
L_088D007C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088D028C;
      }
      goto L_088D0084;
    }
L_088D0084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088D028C;
      }
      goto L_088D008C;
    }
L_088D008C:
    ctx.gpr[8] = (0u | 65535u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
        goto L_088D00B4;
    }
    goto L_088D0098;
L_088D0098:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (0u | 80u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_088D00B4;
      }
      goto L_088D00AC;
    }
L_088D00AC:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    goto L_088D00B4;
L_088D00B4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D00E8;
      }
      goto L_088D00BC;
    }
L_088D00BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088D00E0;
      }
      goto L_088D00CC;
    }
L_088D00CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(700)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D00F0;
      }
      goto L_088D00D8;
    }
L_088D00D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0280;
      }
      goto L_088D00E0;
    }
L_088D00E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088D028C;
      }
      goto L_088D00E8;
    }
L_088D00E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088D028C;
      }
      goto L_088D00F0;
    }
L_088D00F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 496u);
    ctx.gpr[6] = (ctx.gpr[6] >> 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0178;
      }
      goto L_088D0104;
    }
L_088D0104:
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(45) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 44u);
      if (branch_taken) {
          goto L_088D011C;
      }
      goto L_088D0110;
    }
L_088D0110:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(700), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(700)));
    goto L_088D011C;
L_088D011C:
    ctx.gpr[7] = (0u | 44u);
    if (ctx.gpr[5] != ctx.gpr[7]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(704)));
        goto L_088D0148;
    }
    goto L_088D0128;
L_088D0128:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26344)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(704), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(700)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(704)));
    goto L_088D0148;
L_088D0148:
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16944));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D01A8;
      }
      goto L_088D0178;
    }
L_088D0178:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088D0188u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088D0188u) goto L_088D0188;
    return;
L_088D0188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (16928u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D01B0;
      }
      goto L_088D01A0;
    }
L_088D01A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 20u);
      if (branch_taken) {
          goto L_088D01B4;
      }
      goto L_088D01A8;
    }
L_088D01A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088D028C;
      }
      goto L_088D01B0;
    }
L_088D01B0:
    ctx.gpr[4] = (0u | 80u);
    goto L_088D01B4;
L_088D01B4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088D01C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D01C8u) goto L_088D01C8;
    return;
L_088D01C8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088D01F4;
      }
      goto L_088D01E4;
    }
L_088D01E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088D01F4;
L_088D01F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D0280;
      }
      goto L_088D0200;
    }
L_088D0200:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088D0230;
      }
      goto L_088D0214;
    }
L_088D0214:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    ctx.gpr[4] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 22000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088D0248;
      }
      goto L_088D0230;
    }
L_088D0230:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(652)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(656)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088D0248;
L_088D0248:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D0280u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D0280u) goto L_088D0280;
    return;
L_088D0280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088D028C;
      }
      goto L_088D0288;
    }
L_088D0288:
    ctx.gpr[2] = (0u | 0u);
    goto L_088D028C;
L_088D028C:
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
L_088D02AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 496u);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088D0310;
      }
      goto L_088D02F4;
    }
L_088D02F4:
    ctx.gpr[31] = (0x088D02FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 262u, 0x08895420u>(ctx, &aot_mem) && ctx.pc == 0x088D02FCu) goto L_088D02FC;
    return;
L_088D02FC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D0318;
      }
      goto L_088D0308;
    }
L_088D0308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D032C;
      }
      goto L_088D0310;
    }
L_088D0310:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D05E4;
      }
      goto L_088D0318;
    }
L_088D0318:
    ctx.gpr[31] = (0x088D0320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088D0320u) goto L_088D0320;
    return;
L_088D0320:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D034C;
      }
      goto L_088D032C;
    }
L_088D032C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088D0354;
      }
      goto L_088D0344;
    }
L_088D0344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0364;
      }
      goto L_088D034C;
    }
L_088D034C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D05E4;
      }
      goto L_088D0354;
    }
L_088D0354:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088D0364;
L_088D0364:
    ctx.gpr[4] = (17981u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D05E0;
      }
      goto L_088D0380;
    }
L_088D0380:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088D03D0;
      }
      goto L_088D0390;
    }
L_088D0390:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(558)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088D03C4;
      }
      goto L_088D03A0;
    }
L_088D03A0:
    ctx.gpr[8] = (0u | 65535u);
    if (ctx.gpr[6] == ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_088D03C8;
    }
    goto L_088D03AC;
L_088D03AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088D03C8;
      }
      goto L_088D03C0;
    }
L_088D03C0:
    ctx.gpr[5] = (0u | 1u);
    goto L_088D03C4;
L_088D03C4:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_088D03C8;
L_088D03C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D05D8;
      }
      goto L_088D03D0;
    }
L_088D03D0:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(558)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088D0404;
      }
      goto L_088D03E0;
    }
L_088D03E0:
    ctx.gpr[8] = (0u | 65535u);
    if (ctx.gpr[6] == ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_088D0408;
    }
    goto L_088D03EC;
L_088D03EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088D0408;
      }
      goto L_088D0400;
    }
L_088D0400:
    ctx.gpr[5] = (0u | 1u);
    goto L_088D0404;
L_088D0404:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_088D0408;
L_088D0408:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0450;
      }
      goto L_088D0410;
    }
L_088D0410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(700)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0430;
      }
      goto L_088D0424;
    }
L_088D0424:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(750));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(700), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_088D0430;
L_088D0430:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(700)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(375));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D044C;
      }
      goto L_088D0444;
    }
L_088D0444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088D05E4;
      }
      goto L_088D044C;
    }
L_088D044C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_088D0450;
L_088D0450:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088D0460u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088D0460u) goto L_088D0460;
    return;
L_088D0460:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (17116u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(617))))));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 80u);
      if (branch_taken) {
          goto L_088D0480;
      }
      goto L_088D047C;
    }
L_088D047C:
    ctx.gpr[4] = (0u | 20u);
    goto L_088D0480;
L_088D0480:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088D0494u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D0494u) goto L_088D0494;
    return;
L_088D0494:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D05D8;
      }
      goto L_088D04A4;
    }
L_088D04A4:
    ctx.gpr[20] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D04B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 697u, 0x088C768Cu>(ctx, &aot_mem) && ctx.pc == 0x088D04B8u) goto L_088D04B8;
    return;
L_088D04B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D058C;
      }
      goto L_088D04C0;
    }
L_088D04C0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D04FC;
      }
      goto L_088D04DC;
    }
L_088D04DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(700)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[21] = (2237u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088D0504;
      }
      goto L_088D04F4;
    }
L_088D04F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0558;
      }
      goto L_088D04FC;
    }
L_088D04FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088D05E4;
      }
      goto L_088D0504;
    }
L_088D0504:
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 74u);
      if (branch_taken) {
          goto L_088D0558;
      }
      goto L_088D0510;
    }
L_088D0510:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D0558;
      }
      goto L_088D0518;
    }
L_088D0518:
    ctx.gpr[4] = (0u | 310u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D053C;
      }
      goto L_088D0530;
    }
L_088D0530:
    ctx.gpr[4] = (0u | 12668u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D054C;
      }
      goto L_088D053C;
    }
L_088D053C:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D0548u);
    ctx.gpr[5] = (0u | 310u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D0548u) goto L_088D0548;
    return;
L_088D0548:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_088D054C;
L_088D054C:
    ctx.gpr[4] = (0u | 60u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D05A8;
      }
      goto L_088D0558;
    }
L_088D0558:
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D0578;
      }
      goto L_088D0564;
    }
L_088D0564:
    ctx.gpr[4] = (0u | 280u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 11440u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D05A8;
      }
      goto L_088D0578;
    }
L_088D0578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(664)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D05A8;
      }
      goto L_088D058C;
    }
L_088D058C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(652)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[21] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(656)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088D05A8;
L_088D05A8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D05D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D05D8u) goto L_088D05D8;
    return;
L_088D05D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088D05E4;
      }
      goto L_088D05E0;
    }
L_088D05E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088D05E4;
L_088D05E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088D067C;
      }
      goto L_088D066C;
    }
L_088D066C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088D067C;
L_088D067C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6308)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1C18;
      }
      goto L_088D06A4;
    }
L_088D06A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_088D06A8;
L_088D06A8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6266)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 113 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088D0828;
      }
      goto L_088D06D8;
    }
L_088D06D8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 56 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 90 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D0714;
      }
      goto L_088D06E4;
    }
L_088D06E4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 55 ? 1u : 0u);
        goto L_088D0704;
    }
    goto L_088D06F0;
L_088D06F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088D0884;
      }
      goto L_088D06F8;
    }
L_088D06F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088D1BF0;
      }
      goto L_088D0700;
    }
L_088D0700:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 55 ? 1u : 0u);
    goto L_088D0704;
L_088D0704:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D06F8;
      }
      goto L_088D070C;
    }
L_088D070C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D14F8;
      }
      goto L_088D0714;
    }
L_088D0714:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 62u);
      if (branch_taken) {
          goto L_088D07C4;
      }
      goto L_088D071C;
    }
L_088D071C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D06F8;
      }
      goto L_088D0724;
    }
L_088D0724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 5u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 34u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31));
    ctx.gpr[31] = (0x088D0768u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D0768u) goto L_088D0768;
    return;
L_088D0768:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[22] >> 5u);
    ctx.gpr[31] = (0x088D077Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D077Cu) goto L_088D077C;
    return;
L_088D077C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26332)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(90));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D07C4;
    }
L_088D07C4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 94 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D06F8;
      }
      goto L_088D07D0;
    }
L_088D07D0:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D07F0u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D07F0u) goto L_088D07F0;
    return;
L_088D07F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 50u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D0828;
    }
L_088D0828:
    ctx.gpr[5] = (0u | 204u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 167u);
      if (branch_taken) {
          goto L_088D0A54;
      }
      goto L_088D0834;
    }
L_088D0834:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 166u);
      if (branch_taken) {
          goto L_088D1888;
      }
      goto L_088D083C;
    }
L_088D083C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 165u);
      if (branch_taken) {
          goto L_088D1760;
      }
      goto L_088D0844;
    }
L_088D0844:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 114u);
      if (branch_taken) {
          goto L_088D0FD8;
      }
      goto L_088D084C;
    }
L_088D084C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 113u);
      if (branch_taken) {
          goto L_088D1978;
      }
      goto L_088D0854;
    }
L_088D0854:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D06F8;
      }
      goto L_088D085C;
    }
L_088D085C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D087Cu);
    ctx.gpr[6] = (0u | 113u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 496u, 0x088D789Cu>(ctx, &aot_mem) && ctx.pc == 0x088D087Cu) goto L_088D087C;
    return;
L_088D087C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088D1BF0;
      }
      goto L_088D0884;
    }
L_088D0884:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20160)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D089C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (15969u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1640)));
    ctx.gpr[4] = (ctx.gpr[5] | 18350u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_088D08E4;
      }
      goto L_088D08D0;
    }
L_088D08D0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_088D08F0;
      }
      goto L_088D08E4;
    }
L_088D08E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088D1BF0;
      }
      goto L_088D08EC;
    }
L_088D08EC:
    ctx.gpr[4] = (16256u << 16u);
    goto L_088D08F0;
L_088D08F0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23712)));
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(89));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23712)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D0948;
      }
      goto L_088D0940;
    }
L_088D0940:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23712), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D0954;
      }
      goto L_088D0948;
    }
L_088D0948:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23712)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23712), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088D0954;
L_088D0954:
    ctx.gpr[4] = (17914u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17914u << 16u);
      if (branch_taken) {
          goto L_088D0990;
      }
      goto L_088D0978;
    }
L_088D0978:
    ctx.gpr[4] = (17914u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D09B4;
      }
      goto L_088D0990;
    }
L_088D0990:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088D09B4;
L_088D09B4:
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[23] >> 5u);
    ctx.gpr[31] = (0x088D09C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D09C8u) goto L_088D09C8;
    return;
L_088D09C8:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D09F0;
    }
L_088D09F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26324)));
    ctx.gpr[5] = (0u | 30u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 203u);
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[5] = (0u | 203u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[6] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x088D0A30u);
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D0A30u) goto L_088D0A30;
    return;
L_088D0A30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D0A54;
    }
L_088D0A54:
    ctx.gpr[4] = (0u | 58u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 72u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 120u);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D0A9C;
    }
L_088D0A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26324)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (17692u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(668)));
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[6] + static_cast<std::uint32_t>(117));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D0AE0;
      }
      goto L_088D0ACC;
    }
L_088D0ACC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D0B08;
      }
      goto L_088D0AD4;
    }
L_088D0AD4:
    ctx.gpr[4] = (0u | 260u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D0B10;
      }
      goto L_088D0AE0;
    }
L_088D0AE0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D0AFC;
      }
      goto L_088D0AEC;
    }
L_088D0AEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0B08;
      }
      goto L_088D0AF4;
    }
L_088D0AF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
      if (branch_taken) {
          goto L_088D0B10;
      }
      goto L_088D0AFC;
    }
L_088D0AFC:
    ctx.gpr[4] = (0u | 334u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D0B10;
      }
      goto L_088D0B08;
    }
L_088D0B08:
    ctx.gpr[4] = (0u | 257u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_088D0B10;
L_088D0B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6266)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[31] = (0x088D0B44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x088D0B44u) goto L_088D0B44;
    return;
L_088D0B44:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D0B5C;
      }
      goto L_088D0B50;
    }
L_088D0B50:
    ctx.gpr[4] = (0u | 23459u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D0B6C;
      }
      goto L_088D0B5C;
    }
L_088D0B5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088D0B68u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D0B68u) goto L_088D0B68;
    return;
L_088D0B68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_088D0B6C;
L_088D0B6C:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D0B7Cu);
    ctx.gpr[5] = (ctx.gpr[23] >> 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D0B7Cu) goto L_088D0B7C;
    return;
L_088D0B7C:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D0BAC;
    }
L_088D0BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    ctx.gpr[5] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (17692u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(668)));
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[6] + static_cast<std::uint32_t>(122));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D0BF0;
      }
      goto L_088D0BDC;
    }
L_088D0BDC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D0C18;
      }
      goto L_088D0BE4;
    }
L_088D0BE4:
    ctx.gpr[4] = (0u | 259u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D0C20;
      }
      goto L_088D0BF0;
    }
L_088D0BF0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D0C0C;
      }
      goto L_088D0BFC;
    }
L_088D0BFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0C18;
      }
      goto L_088D0C04;
    }
L_088D0C04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
      if (branch_taken) {
          goto L_088D0C20;
      }
      goto L_088D0C0C;
    }
L_088D0C0C:
    ctx.gpr[4] = (0u | 333u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D0C20;
      }
      goto L_088D0C18;
    }
L_088D0C18:
    ctx.gpr[4] = (0u | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_088D0C20;
L_088D0C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6266)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[31] = (0x088D0C54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x088D0C54u) goto L_088D0C54;
    return;
L_088D0C54:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D0C6C;
      }
      goto L_088D0C60;
    }
L_088D0C60:
    ctx.gpr[4] = (0u | 28062u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D0C7C;
      }
      goto L_088D0C6C;
    }
L_088D0C6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088D0C78u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D0C78u) goto L_088D0C78;
    return;
L_088D0C78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_088D0C7C;
L_088D0C7C:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D0C8Cu);
    ctx.gpr[5] = (ctx.gpr[23] >> 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D0C8Cu) goto L_088D0C8C;
    return;
L_088D0C8C:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D0CBC;
    }
L_088D0CBC:
    ctx.gpr[31] = (0x088D0CC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x088D0CC4u) goto L_088D0CC4;
    return;
L_088D0CC4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D0CE4;
      }
      goto L_088D0CD0;
    }
L_088D0CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D0CEC;
      }
      goto L_088D0CE4;
    }
L_088D0CE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088D1BF0;
      }
      goto L_088D0CEC;
    }
L_088D0CEC:
    ctx.gpr[4] = (0u | 106u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 33u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[6] = (17505u << 16u);
    ctx.gpr[22] = (0u | 60u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D0D18u);
    ctx.gpr[5] = (0u | 106u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D0D18u) goto L_088D0D18;
    return;
L_088D0D18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D0D44;
    }
L_088D0D44:
    ctx.gpr[4] = (0u | 204u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 37u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D0D64u);
    ctx.gpr[5] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D0D64u) goto L_088D0D64;
    return;
L_088D0D64:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[22] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[23] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    ctx.gpr[31] = (0x088D0D88u);
    ctx.gpr[5] = (ctx.gpr[23] >> 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D0D88u) goto L_088D0D88;
    return;
L_088D0D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26336)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(30));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D0DCC;
    }
L_088D0DCC:
    ctx.gpr[4] = (0u | 226u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 81u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D0DECu);
    ctx.gpr[5] = (0u | 226u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D0DECu) goto L_088D0DEC;
    return;
L_088D0DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26336)));
    ctx.gpr[5] = (0u | 25u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18173u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(75));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D0E34;
    }
L_088D0E34:
    ctx.gpr[4] = (0u | 307u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 87u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D0E54u);
    ctx.gpr[5] = (0u | 307u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D0E54u) goto L_088D0E54;
    return;
L_088D0E54:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[22] >> 3u);
    ctx.gpr[31] = (0x088D0E68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D0E68u) goto L_088D0E68;
    return;
L_088D0E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26324)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D0EB4;
    }
L_088D0EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6266)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D0EEC;
      }
      goto L_088D0EE0;
    }
L_088D0EE0:
    ctx.gpr[4] = (0u | 15600u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D0EF4;
      }
      goto L_088D0EEC;
    }
L_088D0EEC:
    ctx.gpr[4] = (0u | 13118u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088D0EF4;
L_088D0EF4:
    ctx.gpr[4] = (0u | 324u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 51u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] >> 3u);
    ctx.gpr[31] = (0x088D0F18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D0F18u) goto L_088D0F18;
    return;
L_088D0F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26320)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D0F64;
    }
L_088D0F64:
    ctx.gpr[4] = (0u | 325u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 86u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D0F84u);
    ctx.gpr[5] = (0u | 324u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D0F84u) goto L_088D0F84;
    return;
L_088D0F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26320)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D0FD8;
    }
L_088D0FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26344)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23716)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1064;
      }
      goto L_088D0FEC;
    }
L_088D0FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26344)));
    ctx.gpr[5] = (0u | 321u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23716), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D1018u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D1018u) goto L_088D1018;
    return;
L_088D1018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26336)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (17608u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(90));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D1064;
    }
L_088D1064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088D1BF0;
      }
      goto L_088D106C;
    }
L_088D106C:
    ctx.gpr[4] = (0u | 28u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 80u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D108Cu);
    ctx.gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D108Cu) goto L_088D108C;
    return;
L_088D108C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17505u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D10C4;
    }
L_088D10C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6276)));
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D128C;
      }
      goto L_088D10FC;
    }
L_088D10FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6276)));
    ctx.gpr[4] = (17480u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_088D1160;
    }
    goto L_088D1134;
L_088D1134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (17480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(6276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_088D1160;
L_088D1160:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26320)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6276)));
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (17442u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17174u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23720)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[14];
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23720), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23720)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 47 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (17882u << 16u);
      if (branch_taken) {
          goto L_088D11D8;
      }
      goto L_088D11CC;
    }
L_088D11CC:
    ctx.gpr[4] = (0u | 41u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23720), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17882u << 16u);
    goto L_088D11D8;
L_088D11D8:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17882u << 16u);
      if (branch_taken) {
          goto L_088D1218;
      }
      goto L_088D11FC;
    }
L_088D11FC:
    ctx.gpr[4] = (17882u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D1240;
      }
      goto L_088D1218;
    }
L_088D1218:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_088D1240;
L_088D1240:
    ctx.gpr[5] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(6000));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D128C;
    }
L_088D128C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088D1BF0;
      }
      goto L_088D1294;
    }
L_088D1294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (17436u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6266)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 14u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_088D134C;
    }
    goto L_088D12CC;
L_088D12CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6276)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 337u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D133C;
      }
      goto L_088D1334;
    }
L_088D1334:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_088D133C;
L_088D133C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D13C4;
      }
      goto L_088D134C;
    }
L_088D134C:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6276)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 335u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D13B8;
      }
      goto L_088D13B0;
    }
L_088D13B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_088D13B8;
L_088D13B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    goto L_088D13C4;
L_088D13C4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23711)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23711), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23711)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 86 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D13F0;
      }
      goto L_088D13E8;
    }
L_088D13E8:
    ctx.gpr[4] = (0u | 82u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23711), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088D13F0;
L_088D13F0:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D13FCu);
    ctx.gpr[5] = (0u | 335u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D13FCu) goto L_088D13FC;
    return;
L_088D13FC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[23] >> 4u);
    ctx.gpr[31] = (0x088D1410u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D1410u) goto L_088D1410;
    return;
L_088D1410:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D1434;
      }
      goto L_088D1428;
    }
L_088D1428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088D1434;
L_088D1434:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16840u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D1458;
    }
L_088D1458:
    ctx.gpr[4] = (0u | 336u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23710)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23710), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23710)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 95 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D148C;
      }
      goto L_088D1484;
    }
L_088D1484:
    ctx.gpr[4] = (0u | 91u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23710), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088D148C;
L_088D148C:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D1498u);
    ctx.gpr[5] = (0u | 336u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D1498u) goto L_088D1498;
    return;
L_088D1498:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D14ACu);
    ctx.gpr[5] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D14ACu) goto L_088D14AC;
    return;
L_088D14AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26336)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17661u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(117));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D14F8;
    }
L_088D14F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 261 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 275 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D1538;
      }
      goto L_088D150C;
    }
L_088D150C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -996 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -963 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D1650;
      }
      goto L_088D1518;
    }
L_088D1518:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(996));
      if (branch_taken) {
          goto L_088D1650;
      }
      goto L_088D1520;
    }
L_088D1520:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20032)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1538:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 276 ? 1u : 0u);
        goto L_088D1558;
    }
    goto L_088D1540;
L_088D1540:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 262 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D1560;
      }
      goto L_088D154C;
    }
L_088D154C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
      if (branch_taken) {
          goto L_088D1654;
      }
      goto L_088D1554;
    }
L_088D1554:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 276 ? 1u : 0u);
    goto L_088D1558;
L_088D1558:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
        goto L_088D1654;
    }
    goto L_088D1560;
L_088D1560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 275u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D15C0;
      }
      goto L_088D1574;
    }
L_088D1574:
    ctx.gpr[31] = (0x088D157Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088D157Cu) goto L_088D157C;
    return;
L_088D157C:
    ctx.gpr[31] = (0x088D1584u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 367u, 0x0898D050u>(ctx, &aot_mem) && ctx.pc == 0x088D1584u) goto L_088D1584;
    return;
L_088D1584:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D15A0;
      }
      goto L_088D158C;
    }
L_088D158C:
    ctx.gpr[31] = (0x088D1594u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem) && ctx.pc == 0x088D1594u) goto L_088D1594;
    return;
L_088D1594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D15B0;
      }
      goto L_088D15A0;
    }
L_088D15A0:
    ctx.gpr[4] = (0u | 236u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D15CC;
      }
      goto L_088D15B0;
    }
L_088D15B0:
    ctx.gpr[4] = (0u | 298u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D15CC;
      }
      goto L_088D15C0;
    }
L_088D15C0:
    ctx.gpr[4] = (0u | 236u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_088D15CC;
L_088D15CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23719)));
    ctx.gpr[22] = (0u | 127u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23719), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23719)));
    ctx.gpr[5] = (18017u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D15FC;
      }
      goto L_088D15F4;
    }
L_088D15F4:
    ctx.gpr[4] = (0u | 53u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23719), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088D15FC;
L_088D15FC:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D1608u);
    ctx.gpr[5] = (0u | 236u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D1608u) goto L_088D1608;
    return;
L_088D1608:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[20] >> 4u);
    ctx.gpr[31] = (0x088D161Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D161Cu) goto L_088D161C;
    return;
L_088D161C:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D16EC;
      }
      goto L_088D1650;
    }
L_088D1650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    goto L_088D1654;
L_088D1654:
    ctx.gpr[5] = (0u | 7u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 340u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23719)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23719), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (18017u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23719)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(120));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D16A0;
      }
      goto L_088D1698;
    }
L_088D1698:
    ctx.gpr[4] = (0u | 53u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23719), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088D16A0;
L_088D16A0:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D16ACu);
    ctx.gpr[5] = (0u | 340u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D16ACu) goto L_088D16AC;
    return;
L_088D16AC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[23] >> 4u);
    ctx.gpr[31] = (0x088D16C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D16C0u) goto L_088D16C0;
    return;
L_088D16C0:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088D16EC;
L_088D16EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D16F4;
    }
L_088D16F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 59u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D1710u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D1710u) goto L_088D1710;
    return;
L_088D1710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26324)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(11025));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16908u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(70));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D1760;
    }
L_088D1760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6276)));
    ctx.gpr[4] = (17285u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_088D17DC;
    }
    goto L_088D17A4;
L_088D17A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6276)));
    ctx.gpr[4] = (17285u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D1820;
      }
      goto L_088D17DC;
    }
L_088D17DC:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6276)));
    ctx.gpr[4] = (17285u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_088D1820;
L_088D1820:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D183Cu);
    ctx.gpr[5] = (0u | 6000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D183Cu) goto L_088D183C;
    return;
L_088D183C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26336)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (17608u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D1888;
    }
L_088D1888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6276));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088D18C4;
    }
    goto L_088D18C4;
L_088D18C4:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17150u << 16u);
    ctx.gpr[4] = (0u | 127u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 1u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_088D1904;
    }
    goto L_088D1904;
L_088D1904:
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D1970;
      }
      goto L_088D1910;
    }
L_088D1910:
    ctx.gpr[5] = (0u | 186u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[31] = (0x088D192Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D192Cu) goto L_088D192C;
    return;
L_088D192C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[23] >> 4u);
    ctx.gpr[31] = (0x088D1940u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D1940u) goto L_088D1940;
    return;
L_088D1940:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D1AD4;
      }
      goto L_088D1970;
    }
L_088D1970:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088D1BF0;
      }
      goto L_088D1978;
    }
L_088D1978:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D1998u);
    ctx.gpr[6] = (0u | 114u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 496u, 0x088D789Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1998u) goto L_088D1998;
    return;
L_088D1998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088D1BF0;
      }
      goto L_088D19A0;
    }
L_088D19A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6276)));
    ctx.gpr[4] = (15645u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15645u << 16u);
      if (branch_taken) {
          goto L_088D19EC;
      }
      goto L_088D19DC;
    }
L_088D19DC:
    ctx.gpr[4] = (15645u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15645u << 16u);
    goto L_088D19EC;
L_088D19EC:
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[5] = (17723u << 16u);
    ctx.gpr[4] = (0u | 326u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 79u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17723u << 16u);
      if (branch_taken) {
          goto L_088D1A50;
      }
      goto L_088D1A34;
    }
L_088D1A34:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D1A78;
      }
      goto L_088D1A50;
    }
L_088D1A50:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_088D1A78;
L_088D1A78:
    ctx.gpr[5] = (16916u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(9000));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (17608u << 16u);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(90));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    goto L_088D1AD4;
L_088D1AD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_088D1BF0;
    }
    goto L_088D1AE8;
L_088D1AE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088D1AF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088D1AF8u) goto L_088D1AF8;
    return;
L_088D1AF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D1B0Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D1B0Cu) goto L_088D1B0C;
    return;
L_088D1B0C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_088D1BF0;
    }
    goto L_088D1B1C;
L_088D1B1C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1B30;
      }
      goto L_088D1B24;
    }
L_088D1B24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D1B3C;
      }
      goto L_088D1B30;
    }
L_088D1B30:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088D1B3C;
L_088D1B3C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_088D1B84;
      }
      goto L_088D1B44;
    }
L_088D1B44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D1B78;
      }
      goto L_088D1B68;
    }
L_088D1B68:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D1B88;
      }
      goto L_088D1B78;
    }
L_088D1B78:
    ctx.gpr[20] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D1B88;
      }
      goto L_088D1B84;
    }
L_088D1B84:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    goto L_088D1B88;
L_088D1B88:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D1B98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D1B98u) goto L_088D1B98;
    return;
L_088D1B98:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (0u | 127u);
      if (branch_taken) {
          goto L_088D1BEC;
      }
      goto L_088D1BA0;
    }
L_088D1BA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23719)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23719), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23719)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D1BD8;
      }
      goto L_088D1BD0;
    }
L_088D1BD0:
    ctx.gpr[4] = (0u | 53u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23719), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088D1BD8;
L_088D1BD8:
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D1BECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D1BECu) goto L_088D1BEC;
    return;
L_088D1BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_088D1BF0;
L_088D1BF0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6308)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_088D06A8;
    }
    goto L_088D1C18;
L_088D1C18:
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
L_088D1C48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (18017u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088D220C;
      }
      goto L_088D1C9C;
    }
L_088D1C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D1CD4;
      }
      goto L_088D1CB8;
    }
L_088D1CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 214 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < -996 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D1CDC;
      }
      goto L_088D1CCC;
    }
L_088D1CCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 265 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D1D24;
      }
      goto L_088D1CD4;
    }
L_088D1CD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D2210;
      }
      goto L_088D1CDC;
    }
L_088D1CDC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 185u);
      if (branch_taken) {
          goto L_088D1D14;
      }
      goto L_088D1CE4;
    }
L_088D1CE4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < -997 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D1D1C;
      }
      goto L_088D1CF0;
    }
L_088D1CF0:
    ctx.gpr[4] = (17851u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 9000u);
    ctx.gpr[4] = (16880u << 16u);
    ctx.gpr[19] = (0u | 75u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_088D1DC0;
      }
      goto L_088D1D14;
    }
L_088D1D14:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D1CF0;
      }
      goto L_088D1D1C;
    }
L_088D1D1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D2210;
      }
      goto L_088D1D24;
    }
L_088D1D24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 277u);
      if (branch_taken) {
          goto L_088D1D5C;
      }
      goto L_088D1D2C;
    }
L_088D1D2C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 226 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(-214));
      if (branch_taken) {
          goto L_088D1D6C;
      }
      goto L_088D1D38;
    }
L_088D1D38:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 247 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(-247));
      if (branch_taken) {
          goto L_088D1D1C;
      }
      goto L_088D1D44;
    }
L_088D1D44:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19896)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1D5C:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D1D1C;
      }
      goto L_088D1D64;
    }
L_088D1D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1CF0;
      }
      goto L_088D1D6C;
    }
L_088D1D6C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19824)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1D84:
    ctx.gpr[4] = (17383u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 1782u);
    ctx.gpr[4] = (16880u << 16u);
    ctx.gpr[19] = (0u | 75u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D1DC0;
      }
      goto L_088D1DA4;
    }
L_088D1DA4:
    ctx.gpr[4] = (17458u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 3775u);
    ctx.gpr[4] = (17106u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088D1DC0;
L_088D1DC0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1DE0;
      }
      goto L_088D1DCC;
    }
L_088D1DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1092)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1DE8;
      }
      goto L_088D1DD8;
    }
L_088D1DD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1DEC;
      }
      goto L_088D1DE0;
    }
L_088D1DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D2210;
      }
      goto L_088D1DE8;
    }
L_088D1DE8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1092), ctx.gpr[18]);
    goto L_088D1DEC;
L_088D1DEC:
    ctx.gpr[31] = (0x088D1DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088D1DF4u) goto L_088D1DF4;
    return;
L_088D1DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D1E50;
      }
      goto L_088D1E00;
    }
L_088D1E00:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6640));
    ctx.gpr[31] = (0x088D1E10u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x088D1E10u) goto L_088D1E10;
    return;
L_088D1E10:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088D1E1Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x088D1E1Cu) goto L_088D1E1C;
    return;
L_088D1E1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_088D1E2C;
    }
    goto L_088D1E2C;
L_088D1E2C:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_088D1E74;
      }
      goto L_088D1E50;
    }
L_088D1E50:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(604)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(608)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088D1E70;
    }
    goto L_088D1E70;
L_088D1E70:
    ctx.gpr[21] = (0u | 0u);
    goto L_088D1E74;
L_088D1E74:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
        goto L_088D1EA0;
    }
    goto L_088D1E90;
L_088D1E90:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088D1EBC;
      }
      goto L_088D1EA0;
    }
L_088D1EA0:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088D1EBC;
L_088D1EBC:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D1EEC;
      }
      goto L_088D1EE0;
    }
L_088D1EE0:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] >> 3u);
    goto L_088D1EEC;
L_088D1EEC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1FC4;
      }
      goto L_088D1EF4;
    }
L_088D1EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1F44;
      }
      goto L_088D1F04;
    }
L_088D1F04:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1F28;
      }
      goto L_088D1F0C;
    }
L_088D1F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_088D1F20;
    }
    goto L_088D1F20;
L_088D1F20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D1F80;
      }
      goto L_088D1F28;
    }
L_088D1F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_088D1F3C;
    }
    goto L_088D1F3C;
L_088D1F3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D1F80;
      }
      goto L_088D1F44;
    }
L_088D1F44:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1F68;
      }
      goto L_088D1F4C;
    }
L_088D1F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-100));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_088D1F60;
    }
    goto L_088D1F60;
L_088D1F60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D1F80;
      }
      goto L_088D1F68;
    }
L_088D1F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_088D1F7C;
    }
    goto L_088D1F7C;
L_088D1F7C:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088D1F80;
L_088D1F80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1FAC;
      }
      goto L_088D1F90;
    }
L_088D1F90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1096)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_088D1FA4;
    }
    goto L_088D1FA4;
L_088D1FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D1FC4;
      }
      goto L_088D1FAC;
    }
L_088D1FAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1096)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_088D1FC0;
    }
    goto L_088D1FC0;
L_088D1FC0:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_088D1FC4;
L_088D1FC4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D210C;
      }
      goto L_088D1FE4;
    }
L_088D1FE4:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2020;
      }
      goto L_088D1FEC;
    }
L_088D1FEC:
    ctx.gpr[31] = (0x088D1FF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 922u, 0x08AFFD38u>(ctx, &aot_mem) && ctx.pc == 0x088D1FF4u) goto L_088D1FF4;
    return;
L_088D1FF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2020;
      }
      goto L_088D1FFC;
    }
L_088D1FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D210C;
      }
      goto L_088D2008;
    }
L_088D2008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D210C;
      }
      goto L_088D2020;
    }
L_088D2020:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088D2030u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088D2030u) goto L_088D2030;
    return;
L_088D2030:
    ctx.gpr[6] = (17136u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088D2048u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D2048u) goto L_088D2048;
    return;
L_088D2048:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D210C;
      }
      goto L_088D2058;
    }
L_088D2058:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2070;
      }
      goto L_088D2068;
    }
L_088D2068:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088D2070;
L_088D2070:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (15395u << 16u);
      if (branch_taken) {
          goto L_088D209C;
      }
      goto L_088D2078;
    }
L_088D2078:
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D209C;
      }
      goto L_088D2090;
    }
L_088D2090:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088D209C;
L_088D209C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D20B8;
      }
      goto L_088D20AC;
    }
L_088D20AC:
    ctx.gpr[4] = (0u | 24u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D20C0;
      }
      goto L_088D20B8;
    }
L_088D20B8:
    ctx.gpr[4] = (0u | 21u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_088D20C0;
L_088D20C0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17136u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088D210Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D210Cu) goto L_088D210C;
    return;
L_088D210C:
    ctx.gpr[4] = (0u | 214u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D21F4;
      }
      goto L_088D2118;
    }
L_088D2118:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088D2128u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088D2128u) goto L_088D2128;
    return;
L_088D2128:
    ctx.gpr[6] = (17136u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D2140u);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D2140u) goto L_088D2140;
    return;
L_088D2140:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D21F4;
      }
      goto L_088D2150;
    }
L_088D2150:
    if (ctx.gpr[21] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_088D2178;
    }
    goto L_088D2158;
L_088D2158:
    ctx.gpr[31] = (0x088D2160u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 922u, 0x08AFFD38u>(ctx, &aot_mem) && ctx.pc == 0x088D2160u) goto L_088D2160;
    return;
L_088D2160:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_088D2178;
    }
    goto L_088D2168;
L_088D2168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D21F4;
      }
      goto L_088D2174;
    }
L_088D2174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_088D2178;
L_088D2178:
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (0u | 6000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 39u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 190u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17136u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[31] = (0x088D21F4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D21F4u) goto L_088D21F4;
    return;
L_088D21F4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2204;
      }
      goto L_088D21FC;
    }
L_088D21FC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1096), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1092), ctx.gpr[18]);
    goto L_088D2204;
L_088D2204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D2210;
      }
      goto L_088D220C;
    }
L_088D220C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088D2210;
L_088D2210:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (18017u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088D262C;
      }
      goto L_088D2290;
    }
L_088D2290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D230C;
      }
      goto L_088D22AC;
    }
L_088D22AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2304;
      }
      goto L_088D22BC;
    }
L_088D22BC:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16856u << 16u);
    ctx.gpr[18] = (0u | 5000u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[19] = (0u | 100u);
      if (branch_taken) {
          goto L_088D22FC;
      }
      goto L_088D22E0;
    }
L_088D22E0:
    ctx.gpr[31] = (0x088D22E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088D22E8u) goto L_088D22E8;
    return;
L_088D22E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D2314;
      }
      goto L_088D22F4;
    }
L_088D22F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D23E8;
      }
      goto L_088D22FC;
    }
L_088D22FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D2630;
      }
      goto L_088D2304;
    }
L_088D2304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D2630;
      }
      goto L_088D230C;
    }
L_088D230C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D2630;
      }
      goto L_088D2314;
    }
L_088D2314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2350;
      }
      goto L_088D2348;
    }
L_088D2348:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088D2350;
L_088D2350:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
        goto L_088D237C;
    }
    goto L_088D236C;
L_088D236C:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088D2398;
      }
      goto L_088D237C;
    }
L_088D237C:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088D2398;
L_088D2398:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1104)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D23C8;
      }
      goto L_088D23C4;
    }
L_088D23C4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(500));
    goto L_088D23C8;
L_088D23C8:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6640));
    ctx.gpr[31] = (0x088D23D8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x088D23D8u) goto L_088D23D8;
    return;
L_088D23D8:
    ctx.gpr[31] = (0x088D23E0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x088D23E0u) goto L_088D23E0;
    return;
L_088D23E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_088D246C;
      }
      goto L_088D23E8;
    }
L_088D23E8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(604)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(608)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088D2408;
    }
    goto L_088D2408;
L_088D2408:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088D2434;
      }
      goto L_088D2424;
    }
L_088D2424:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088D2454;
      }
      goto L_088D2434;
    }
L_088D2434:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088D2454;
L_088D2454:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_088D246C;
L_088D246C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1061))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_088D2480;
      }
      goto L_088D247C;
    }
L_088D247C:
    ctx.gpr[22] = (0u | 1500u);
    goto L_088D2480;
L_088D2480:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2510;
      }
      goto L_088D2488;
    }
L_088D2488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23708)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D24B4;
      }
      goto L_088D2498;
    }
L_088D2498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23708)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_088D24AC;
    }
    goto L_088D24AC;
L_088D24AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D24CC;
      }
      goto L_088D24B4;
    }
L_088D24B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23708)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-100));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_088D24C8;
    }
    goto L_088D24C8;
L_088D24C8:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088D24CC;
L_088D24CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23704)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D24F8;
      }
      goto L_088D24DC;
    }
L_088D24DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23704)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_088D24F0;
    }
    goto L_088D24F0;
L_088D24F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D2510;
      }
      goto L_088D24F8;
    }
L_088D24F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23704)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_088D250C;
    }
    goto L_088D250C;
L_088D250C:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_088D2510;
L_088D2510:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D2614;
      }
      goto L_088D2518;
    }
L_088D2518:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2554;
      }
      goto L_088D2520;
    }
L_088D2520:
    ctx.gpr[31] = (0x088D2528u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 922u, 0x08AFFD38u>(ctx, &aot_mem) && ctx.pc == 0x088D2528u) goto L_088D2528;
    return;
L_088D2528:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2554;
      }
      goto L_088D2530;
    }
L_088D2530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2614;
      }
      goto L_088D253C;
    }
L_088D253C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2614;
      }
      goto L_088D2554;
    }
L_088D2554:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088D2564u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088D2564u) goto L_088D2564;
    return;
L_088D2564:
    ctx.gpr[6] = (17136u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088D257Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D257Cu) goto L_088D257C;
    return;
L_088D257C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D2614;
      }
      goto L_088D258C;
    }
L_088D258C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_088D25B4;
      }
      goto L_088D25A8;
    }
L_088D25A8:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[18]);
    goto L_088D25B4;
L_088D25B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 21u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17136u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088D2614u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D2614u) goto L_088D2614;
    return;
L_088D2614:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2624;
      }
      goto L_088D261C;
    }
L_088D261C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23704), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23708), ctx.gpr[18]);
    goto L_088D2624;
L_088D2624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D2630;
      }
      goto L_088D262C;
    }
L_088D262C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088D2630;
L_088D2630:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (15395u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088D2708;
      }
      goto L_088D26C4;
    }
L_088D26C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088D26D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088D26D4u) goto L_088D26D4;
    return;
L_088D26D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1588)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23696)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D2710;
      }
      goto L_088D2700;
    }
L_088D2700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16179u << 16u);
      if (branch_taken) {
          goto L_088D2754;
      }
      goto L_088D2708;
    }
L_088D2708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2B7C;
      }
      goto L_088D2710;
    }
L_088D2710:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1596)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23700)));
    ctx.gpr[4] = (16608u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16179u << 16u);
      if (branch_taken) {
          goto L_088D2754;
      }
      goto L_088D2734;
    }
L_088D2734:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[26])) && ctx.fpr[22] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16179u << 16u);
      if (branch_taken) {
          goto L_088D2754;
      }
      goto L_088D2744;
    }
L_088D2744:
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23696), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16179u << 16u);
    goto L_088D2754;
L_088D2754:
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_088D2770;
    }
    goto L_088D2770;
L_088D2770:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23696), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1493)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[23] = (ctx.gpr[4] << 16u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 16u));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088D27A8;
    }
    goto L_088D27A8;
L_088D27A8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23684)));
    ctx.gpr[31] = (0x088D27B4u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23688)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088D27B4u) goto L_088D27B4;
    return;
L_088D27B4:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D27D0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x088D27D0u) goto L_088D27D0;
    return;
L_088D27D0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
        goto L_088D27E4;
    }
    goto L_088D27D8;
L_088D27D8:
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088D27E4;
L_088D27E4:
    ctx.gpr[31] = (0x088D27ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x088D27ECu) goto L_088D27EC;
    return;
L_088D27EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088D2804;
    }
    goto L_088D2804;
L_088D2804:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23828)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23812)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23816)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (15872u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[18] + ctx.fpr[19];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(432));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088D2880u);
    ctx.fpr[28] = ctx.fpr[13] + ctx.fpr[28];
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D2880u) goto L_088D2880;
    return;
L_088D2880:
    ctx.gpr[31] = (0x088D2888u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 363u, 0x088C5CD0u>(ctx, &aot_mem) && ctx.pc == 0x088D2888u) goto L_088D2888;
    return;
L_088D2888:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088D28A0;
    }
    goto L_088D28A0;
L_088D28A0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23808)));
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1616)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const bool branch_taken = ctx.gpr[4] == 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_088D28D8;
      }
      goto L_088D28C0;
    }
L_088D28C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D28CCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 164u, 0x088C8FA8u>(ctx, &aot_mem) && ctx.pc == 0x088D28CCu) goto L_088D28CC;
    return;
L_088D28CC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088D28E0;
      }
      goto L_088D28D8;
    }
L_088D28D8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[18] = (0u | 0u);
    goto L_088D28E0;
L_088D28E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D28ECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 160u, 0x088C8F68u>(ctx, &aot_mem) && ctx.pc == 0x088D28ECu) goto L_088D28EC;
    return;
L_088D28EC:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23796)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23792)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23804)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23824)));
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[26]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088D292C;
      }
      goto L_088D2928;
    }
L_088D2928:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088D292C;
L_088D292C:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088D2948u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D2948u) goto L_088D2948;
    return;
L_088D2948:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u | 63u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 38u);
      if (branch_taken) {
          goto L_088D29FC;
      }
      goto L_088D2960;
    }
L_088D2960:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 19u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (18060u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 40960u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2237u << 16u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088D29B4;
      }
      goto L_088D29A8;
    }
L_088D29A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D29C8;
      }
      goto L_088D29B4;
    }
L_088D29B4:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_088D29C8;
L_088D29C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088D29FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D29FCu) goto L_088D29FC;
    return;
L_088D29FC:
    ctx.gpr[4] = (16384u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D2A14;
      }
      goto L_088D2A10;
    }
L_088D2A10:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088D2A14;
L_088D2A14:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088D2A30u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D2A30u) goto L_088D2A30;
    return;
L_088D2A30:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (0u | 38u);
      if (branch_taken) {
          goto L_088D2AD4;
      }
      goto L_088D2A40;
    }
L_088D2A40:
    ctx.gpr[4] = (18091u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 322u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] | 57344u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088D2A98;
      }
      goto L_088D2A8C;
    }
L_088D2A8C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D2AAC;
      }
      goto L_088D2A98;
    }
L_088D2A98:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_088D2AAC;
L_088D2AAC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088D2AD4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D2AD4u) goto L_088D2AD4;
    return;
L_088D2AD4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2B6C;
      }
      goto L_088D2ADC;
    }
L_088D2ADC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23703)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_088D2B6C;
      }
      goto L_088D2AE8;
    }
L_088D2AE8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088D2B0Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D2B0Cu) goto L_088D2B0C;
    return;
L_088D2B0C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 38u);
      if (branch_taken) {
          goto L_088D2B6C;
      }
      goto L_088D2B1C;
    }
L_088D2B1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D2B6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D2B6Cu) goto L_088D2B6C;
    return;
L_088D2B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1596)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23703), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23700), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D2B7C;
L_088D2B7C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2BC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (15395u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088D2C80;
      }
      goto L_088D2C24;
    }
L_088D2C24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088D2C34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088D2C34u) goto L_088D2C34;
    return;
L_088D2C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1493)));
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[23] = (ctx.gpr[5] << 16u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 16u));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_088D2C88;
      }
      goto L_088D2C78;
    }
L_088D2C78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23684)));
      if (branch_taken) {
          goto L_088D2C90;
      }
      goto L_088D2C80;
    }
L_088D2C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D304C;
      }
      goto L_088D2C88;
    }
L_088D2C88:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23684)));
    goto L_088D2C90;
L_088D2C90:
    ctx.gpr[31] = (0x088D2C98u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23688)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088D2C98u) goto L_088D2C98;
    return;
L_088D2C98:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D2CB4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x088D2CB4u) goto L_088D2CB4;
    return;
L_088D2CB4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
        goto L_088D2CC8;
    }
    goto L_088D2CBC;
L_088D2CBC:
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088D2CC8;
L_088D2CC8:
    ctx.gpr[31] = (0x088D2CD0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x088D2CD0u) goto L_088D2CD0;
    return;
L_088D2CD0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088D2CE8;
    }
    goto L_088D2CE8;
L_088D2CE8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23812)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23828)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23816)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (15872u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.fpr[22] = ctx.fpr[17] + ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(432));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088D2D50u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D2D50u) goto L_088D2D50;
    return;
L_088D2D50:
    ctx.gpr[31] = (0x088D2D58u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 363u, 0x088C5CD0u>(ctx, &aot_mem) && ctx.pc == 0x088D2D58u) goto L_088D2D58;
    return;
L_088D2D58:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088D2D70;
    }
    goto L_088D2D70;
L_088D2D70:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23808)));
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1616)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const bool branch_taken = ctx.gpr[4] == 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_088D2DA8;
      }
      goto L_088D2D90;
    }
L_088D2D90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D2D9Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 164u, 0x088C8FA8u>(ctx, &aot_mem) && ctx.pc == 0x088D2D9Cu) goto L_088D2D9C;
    return;
L_088D2D9C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088D2DB0;
      }
      goto L_088D2DA8;
    }
L_088D2DA8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[17] = (0u | 0u);
    goto L_088D2DB0;
L_088D2DB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D2DBCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 160u, 0x088C8F68u>(ctx, &aot_mem) && ctx.pc == 0x088D2DBCu) goto L_088D2DBC;
    return;
L_088D2DBC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23796)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23792)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23804)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23824)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[26]));
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088D2DF8;
      }
      goto L_088D2DF4;
    }
L_088D2DF4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088D2DF8;
L_088D2DF8:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[28]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088D2E18u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D2E18u) goto L_088D2E18;
    return;
L_088D2E18:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u | 63u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 38u);
      if (branch_taken) {
          goto L_088D2ECC;
      }
      goto L_088D2E30;
    }
L_088D2E30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 19u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (18060u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 40960u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2237u << 16u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088D2E84;
      }
      goto L_088D2E78;
    }
L_088D2E78:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D2E98;
      }
      goto L_088D2E84;
    }
L_088D2E84:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_088D2E98;
L_088D2E98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088D2ECCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D2ECCu) goto L_088D2ECC;
    return;
L_088D2ECC:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_088D2EE0;
      }
      goto L_088D2EDC;
    }
L_088D2EDC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088D2EE0;
L_088D2EE0:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088D2EFCu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D2EFCu) goto L_088D2EFC;
    return;
L_088D2EFC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (0u | 38u);
      if (branch_taken) {
          goto L_088D2FA8;
      }
      goto L_088D2F0C;
    }
L_088D2F0C:
    ctx.gpr[4] = (18091u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 322u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] | 57344u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088D2F64;
      }
      goto L_088D2F58;
    }
L_088D2F58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D2F78;
      }
      goto L_088D2F64;
    }
L_088D2F64:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_088D2F78;
L_088D2F78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088D2FA8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D2FA8u) goto L_088D2FA8;
    return;
L_088D2FA8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D3048;
      }
      goto L_088D2FB0;
    }
L_088D2FB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23680)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_088D3048;
      }
      goto L_088D2FBC;
    }
L_088D2FBC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088D2FE0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D2FE0u) goto L_088D2FE0;
    return;
L_088D2FE0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 38u);
      if (branch_taken) {
          goto L_088D3048;
      }
      goto L_088D2FF0;
    }
L_088D2FF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D3048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D3048u) goto L_088D3048;
    return;
L_088D3048:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23680), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088D304C;
L_088D304C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_088D3090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (20224u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 89u, 0x088D4948u>(ctx, &aot_mem); return;
      }
      goto L_088D3100;
    }
L_088D3100:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (0u | 43u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[21] = (0u | 45u);
    goto L_088D3118;
L_088D3118:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[18] = (ctx.gpr[20] + ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(6266)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 187 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 188 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D3170;
      }
      goto L_088D3144;
    }
L_088D3144:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 57 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 87u, 0x088D4934u>(ctx, &aot_mem); return;
      }
      goto L_088D3150;
    }
L_088D3150:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-33));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 87u, 0x088D4934u>(ctx, &aot_mem); return;
      }
      goto L_088D3158;
    }
L_088D3158:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19776)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3170:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 189 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 68u, 0x088D4634u>(ctx, &aot_mem); return;
      }
      goto L_088D3178;
    }
L_088D3178:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 87u, 0x088D4934u>(ctx, &aot_mem); return;
      }
      goto L_088D3180;
    }
L_088D3180:
    ctx.gpr[5] = (0u | 189u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 18000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6276)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 76u, 0x088D4850u>(ctx, &aot_mem); return;
      }
      goto L_088D31C4;
    }
L_088D31C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(368)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D31E4;
      }
      goto L_088D31D8;
    }
L_088D31D8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 88u, 0x088D493Cu>(ctx, &aot_mem); return;
      }
      goto L_088D31E4;
    }
L_088D31E4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-18));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3A9C;
      }
      goto L_088D31F4;
    }
L_088D31F4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19680)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D320C:
    ctx.gpr[4] = (0u | 284u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D323Cu);
    ctx.gpr[5] = (0u | 284u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D323Cu) goto L_088D323C;
    return;
L_088D323C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x088D3250u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D3250u) goto L_088D3250;
    return;
L_088D3250:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (18017u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088D3298;
L_088D3298:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 89u, 0x088D4948u>(ctx, &aot_mem); return;
      }
      goto L_088D32A0;
    }
L_088D32A0:
    ctx.gpr[4] = (0u | 110u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D32D0u);
    ctx.gpr[5] = (0u | 110u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D32D0u) goto L_088D32D0;
    return;
L_088D32D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x088D32E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D32E4u) goto L_088D32E4;
    return;
L_088D32E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26324)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(105));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D3344;
    }
L_088D3344:
    ctx.gpr[4] = (0u | 298u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3374u);
    ctx.gpr[5] = (0u | 298u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D3374u) goto L_088D3374;
    return;
L_088D3374:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x088D3388u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D3388u) goto L_088D3388;
    return;
L_088D3388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26320)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(95));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D33E4;
    }
L_088D33E4:
    ctx.gpr[4] = (0u | 191u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3404u);
    ctx.gpr[5] = (0u | 191u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D3404u) goto L_088D3404;
    return;
L_088D3404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17761u << 16u);
    ctx.gpr[21] = (0u | 105u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D346C;
    }
L_088D346C:
    ctx.gpr[4] = (0u | 236u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D349Cu);
    ctx.gpr[5] = (0u | 236u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D349Cu) goto L_088D349C;
    return;
L_088D349C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x088D34B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D34B0u) goto L_088D34B0;
    return;
L_088D34B0:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (18017u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D34F8;
    }
L_088D34F8:
    ctx.gpr[4] = (0u | 253u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3528u);
    ctx.gpr[5] = (0u | 253u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D3528u) goto L_088D3528;
    return;
L_088D3528:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x088D353Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D353Cu) goto L_088D353C;
    return;
L_088D353C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26332)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(113));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D3598;
    }
L_088D3598:
    ctx.gpr[4] = (0u | 327u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D35C8u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D35C8u) goto L_088D35C8;
    return;
L_088D35C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26332)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(17000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(85));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D3624;
    }
L_088D3624:
    ctx.gpr[4] = (0u | 327u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D3654u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D3654u) goto L_088D3654;
    return;
L_088D3654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26332)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 34000u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(85));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D36B4;
    }
L_088D36B4:
    ctx.gpr[4] = (0u | 301u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D36E4u);
    ctx.gpr[5] = (0u | 301u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D36E4u) goto L_088D36E4;
    return;
L_088D36E4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x088D36F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D36F8u) goto L_088D36F8;
    return;
L_088D36F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26332)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(105));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D3754;
    }
L_088D3754:
    ctx.gpr[4] = (0u | 301u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D3784u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D3784u) goto L_088D3784;
    return;
L_088D3784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26332)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 43150u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(105));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D37E4;
    }
L_088D37E4:
    ctx.gpr[4] = (0u | 340u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3814u);
    ctx.gpr[5] = (0u | 340u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D3814u) goto L_088D3814;
    return;
L_088D3814:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x088D3828u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D3828u) goto L_088D3828;
    return;
L_088D3828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26332)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(113));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D3884;
    }
L_088D3884:
    ctx.gpr[4] = (0u | 314u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(368)));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D38D4;
      }
      goto L_088D38C0;
    }
L_088D38C0:
    ctx.gpr[4] = (0u | 25472u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 25472u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 796u);
      if (branch_taken) {
          goto L_088D38E4;
      }
      goto L_088D38D4;
    }
L_088D38D4:
    ctx.gpr[4] = (0u | 20182u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 20182u);
    ctx.gpr[4] = (0u | 630u);
    goto L_088D38E4;
L_088D38E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088D38F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D38F0u) goto L_088D38F0;
    return;
L_088D38F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26336)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D3954;
    }
L_088D3954:
    ctx.gpr[4] = (0u | 317u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3984u);
    ctx.gpr[5] = (0u | 317u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D3984u) goto L_088D3984;
    return;
L_088D3984:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x088D3998u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D3998u) goto L_088D3998;
    return;
L_088D3998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D39F8;
    }
L_088D39F8:
    ctx.gpr[4] = (0u | 308u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3A28u);
    ctx.gpr[5] = (0u | 308u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D3A28u) goto L_088D3A28;
    return;
L_088D3A28:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x088D3A3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D3A3Cu) goto L_088D3A3C;
    return;
L_088D3A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D3A9C;
    }
L_088D3A9C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 88u, 0x088D493Cu>(ctx, &aot_mem); return;
      }
      goto L_088D3AA8;
    }
L_088D3AA8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3AB4u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem) && ctx.pc == 0x088D3AB4u) goto L_088D3AB4;
    return;
L_088D3AB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D3AEC;
      }
      goto L_088D3ABC;
    }
L_088D3ABC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3AC8u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem) && ctx.pc == 0x088D3AC8u) goto L_088D3AC8;
    return;
L_088D3AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6308)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 88u, 0x088D493Cu>(ctx, &aot_mem); return;
      }
      goto L_088D3AEC;
    }
L_088D3AEC:
    ctx.gpr[4] = (0u | 5921u);
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D3B10u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D3B10u) goto L_088D3B10;
    return;
L_088D3B10:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D3B5C;
    }
L_088D3B5C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3B68u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem) && ctx.pc == 0x088D3B68u) goto L_088D3B68;
    return;
L_088D3B68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 5921u);
      if (branch_taken) {
          goto L_088D3BA0;
      }
      goto L_088D3B70;
    }
L_088D3B70:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3B7Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem) && ctx.pc == 0x088D3B7Cu) goto L_088D3B7C;
    return;
L_088D3B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6308)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 88u, 0x088D493Cu>(ctx, &aot_mem); return;
      }
      goto L_088D3BA0;
    }
L_088D3BA0:
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 27000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D3C00;
    }
L_088D3C00:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3C0Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem) && ctx.pc == 0x088D3C0Cu) goto L_088D3C0C;
    return;
L_088D3C0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 5920u);
      if (branch_taken) {
          goto L_088D3C44;
      }
      goto L_088D3C14;
    }
L_088D3C14:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3C20u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem) && ctx.pc == 0x088D3C20u) goto L_088D3C20;
    return;
L_088D3C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6308)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 88u, 0x088D493Cu>(ctx, &aot_mem); return;
      }
      goto L_088D3C44;
    }
L_088D3C44:
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 27000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.gpr[21] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D3CA8;
    }
L_088D3CA8:
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(6276)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
        goto L_088D3CD0;
    }
    goto L_088D3CC4;
L_088D3CC4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D3CE0;
      }
      goto L_088D3CD0;
    }
L_088D3CD0:
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_088D3CE0;
L_088D3CE0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-18));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3EF8;
      }
      goto L_088D3CF0;
    }
L_088D3CF0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19600)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3D08:
    ctx.gpr[4] = (0u | 269u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[21] = (0u | 75u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3D38u);
    ctx.gpr[5] = (0u | 269u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D3D38u) goto L_088D3D38;
    return;
L_088D3D38:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D3D48u);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D3D48u) goto L_088D3D48;
    return;
L_088D3D48:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.gpr[4] = (17505u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[18] = (0u | 5u);
    goto L_088D3D6C;
L_088D3D6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D3D78u);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D3D78u) goto L_088D3D78;
    return;
L_088D3D78:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_088D3298;
      }
      goto L_088D3DA8;
    }
L_088D3DA8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 39243u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 75u);
    ctx.gpr[4] = (17505u << 16u);
    ctx.gpr[19] = (0u | 39243u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_088D3D6C;
      }
      goto L_088D3DF8;
    }
L_088D3DF8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 30290u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 75u);
    ctx.gpr[4] = (17505u << 16u);
    ctx.gpr[19] = (0u | 30290u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_088D3D6C;
      }
      goto L_088D3E48;
    }
L_088D3E48:
    ctx.gpr[4] = (0u | 299u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[21] = (0u | 75u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3E78u);
    ctx.gpr[5] = (0u | 299u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D3E78u) goto L_088D3E78;
    return;
L_088D3E78:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_088D3D6C;
      }
      goto L_088D3EA0;
    }
L_088D3EA0:
    ctx.gpr[4] = (0u | 295u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[21] = (0u | 75u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3ED0u);
    ctx.gpr[5] = (0u | 295u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D3ED0u) goto L_088D3ED0;
    return;
L_088D3ED0:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_088D3D6C;
      }
      goto L_088D3EF8;
    }
L_088D3EF8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 88u, 0x088D493Cu>(ctx, &aot_mem); return;
      }
      goto L_088D3F04;
    }
L_088D3F04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_088D3F3C;
    }
    goto L_088D3F1C;
L_088D3F1C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D3F2Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x088D3F2Cu) goto L_088D3F2C;
    return;
L_088D3F2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_088D3F3C;
L_088D3F3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088D3F8C;
      }
      goto L_088D3F48;
    }
L_088D3F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_088D3F80;
    }
    goto L_088D3F60;
L_088D3F60:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D3F70u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x088D3F70u) goto L_088D3F70;
    return;
L_088D3F70:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_088D3F80;
L_088D3F80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26332)));
        goto L_088D3FB0;
    }
    goto L_088D3F8C;
L_088D3F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6308)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 88u, 0x088D493Cu>(ctx, &aot_mem); return;
      }
      goto L_088D3FB0;
    }
L_088D3FB0:
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (17352u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[22] = (0u | 5u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 2u, 0x088D4004u>(ctx, &aot_mem); return;
      }
      goto L_088D3FE4;
    }
L_088D3FE4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[31] = (0x088D3FF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x088D3FF4u) goto L_088D3FF4;
    return;
L_088D3FF4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.pc = 0x088D4000u; return;
}

void recomp_unit_0051(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0051_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_51(Runtime &runtime) {
    runtime.register_generated_unit(51u, 0x088D0000u, 16384u, &recomp_unit_0051, &recomp_unit_0051_entry);
    runtime.register_function(0x088D0000u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0028u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D003Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0048u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0050u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0064u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0074u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D007Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0084u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D008Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0098u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00E0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00F0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0104u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0110u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D011Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0128u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0148u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0178u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0188u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D01A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D01A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D01B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D01B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D01C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D01E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D01F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0200u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0214u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0230u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0248u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0280u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0288u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D028Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D02ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D02F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D02FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0308u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0310u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0318u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0320u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D032Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0344u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D034Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0354u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0364u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0380u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0390u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03D0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03E0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03ECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0400u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0404u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0408u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0410u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0424u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0430u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0444u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D044Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0450u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0460u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D047Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0480u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0494u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D04A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D04B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D04C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D04DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D04F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D04FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0504u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0510u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0518u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0530u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D053Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0548u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D054Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0558u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0564u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0578u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D058Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D05A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D05D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D05E0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D05E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0610u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D066Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D067Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D06A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D06A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D06D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D06E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D06F0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D06F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0700u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0704u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D070Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0714u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D071Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0724u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0768u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D077Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D07C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D07D0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D07F0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0828u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0834u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D083Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0844u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D084Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0854u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D085Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D087Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0884u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D089Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D08D0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D08E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D08ECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D08F0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0940u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0948u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0954u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0978u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0990u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D09B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D09C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D09F0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A30u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A54u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0ACCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0AD4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0AE0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0AECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0AF4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0AFCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0B08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0B10u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0B44u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0B50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0B5Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0B68u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0B6Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0B7Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0BACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0BDCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0BE4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0BF0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0BFCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C04u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C0Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C20u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C54u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C60u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C6Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C7Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C8Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0CBCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0CC4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0CD0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0CE4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0CECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0D18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0D44u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0D64u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0D88u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0DCCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0DECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E34u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E54u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E68u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0EB4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0EE0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0EECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0EF4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0F18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0F64u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0F84u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0FD8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0FECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1018u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1064u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D106Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D108Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D10C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D10FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1134u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1160u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D11CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D11D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D11FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1218u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1240u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D128Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1294u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D12CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1334u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D133Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D134Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D13B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D13B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D13C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D13E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D13F0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D13FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1410u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1428u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1434u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1458u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1484u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D148Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1498u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D14ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D14F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D150Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1518u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1520u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1538u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1540u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D154Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1554u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1558u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1560u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1574u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D157Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1584u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D158Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1594u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D15A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D15B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D15C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D15CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D15F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D15FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1608u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D161Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1650u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1654u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1698u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D16A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D16ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D16C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D16ECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D16F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1710u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1760u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D17A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D17DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1820u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D183Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1888u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D18C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1904u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1910u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D192Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1940u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1970u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1978u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1998u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D19A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D19DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D19ECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A34u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1AD4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1AE8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1AF8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B0Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B1Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B30u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B44u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B68u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B84u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B88u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B98u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BA0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BD0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BD8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BF0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C48u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1CB8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1CCCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1CD4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1CDCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1CE4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1CF0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D14u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D1Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D2Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D38u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D44u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D5Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D64u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D6Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D84u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1DA4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1DC0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1DCCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1DD8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1DE0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1DE8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1DECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1DF4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E00u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E10u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E1Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E2Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E70u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E74u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E90u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1EA0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1EBCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1EE0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1EECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1EF4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F04u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F0Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F20u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F28u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F44u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F4Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F60u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F68u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F7Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F80u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F90u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FA4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FC0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FC4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FE4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FF4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FFCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2008u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2020u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2030u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2048u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2058u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2068u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2070u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2078u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2090u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D209Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D20ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D20B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D20C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D210Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2118u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2128u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2140u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2150u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2158u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2160u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2168u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2174u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2178u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2204u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D220Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2210u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2248u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2290u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22E0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2304u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D230Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2314u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2348u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2350u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D236Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D237Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2398u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23E0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2408u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2424u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2434u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2454u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D246Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D247Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2480u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2488u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2498u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24F0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D250Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2510u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2518u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2520u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2528u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2530u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D253Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2554u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2564u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D257Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D258Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D25A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D25B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2614u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D261Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2624u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D262Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2630u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2660u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D26C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D26D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2700u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2708u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2710u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2734u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2744u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2754u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2770u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D27A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D27B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D27D0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D27D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D27E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D27ECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2804u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2880u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2888u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28E0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28ECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2928u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D292Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2948u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2960u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D29A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D29B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D29C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D29FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A10u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A14u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A30u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A40u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A8Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A98u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2AACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2AD4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2ADCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2AE8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B0Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B1Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B6Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B7Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2BC0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C34u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C80u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C88u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C90u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C98u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2CB4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2CBCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2CC8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2CD0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2CE8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D58u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D70u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D90u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2DA8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2DB0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2DBCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2DF4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2DF8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E30u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E84u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E98u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2ECCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2EDCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2EE0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2EFCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F0Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F58u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F64u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2FA8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2FB0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2FBCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2FE0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2FF0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3048u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D304Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3090u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3100u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3118u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3144u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3150u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3158u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3170u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3178u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3180u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D31C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D31D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D31E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D31F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D320Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D323Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3250u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3298u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D32A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D32D0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D32E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3344u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3374u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3388u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D33E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3404u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D346Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D349Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3528u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D353Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3598u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D35C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3624u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3654u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D36B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D36E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D36F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3754u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3784u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D37E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3814u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3828u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3884u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D38C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D38D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D38E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D38F0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3954u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3984u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3998u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D39F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A28u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3AA8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3AB4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3ABCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3AC8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3AECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B10u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B5Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B68u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B70u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B7Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3BA0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C00u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C0Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C14u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C20u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C44u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CA8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CC4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CD0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CE0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CF0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D38u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D48u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D6Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3DA8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3DF8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E48u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3EA0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3ED0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3EF8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F04u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F1Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F2Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F48u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F60u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F70u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F80u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F8Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FB0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FE4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FF4u, &recomp_unit_0051, "recomp_unit_0051");
}
} // namespace psprecomp
