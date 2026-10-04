#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0173[4094] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0,
    0, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0,
    18, 0, 19, 20, 0, 21, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 26, 0, 27, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 34, 0, 35, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 0,
    0, 0, 43, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0,
    0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 61,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0,
    69, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0,
    0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103,
    0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110,
    0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 149,
    0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166,
    0, 167, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172,
    0, 0, 0, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0,
    192, 0, 0, 193, 0, 194, 195, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 201,
    0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0,
    0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0,
    0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248,
    0, 249, 0, 0, 250, 0, 251, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0,
    0, 0, 0, 0, 0, 260, 0, 261, 0, 262, 263, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271,
    0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0,
    0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0,
    0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0,
    0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0,
    0, 311, 312, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 321, 322, 0,
    323, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 328, 0, 329, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 336,
    0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 0, 0,
    355, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 365, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 370, 0, 371, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0,
    380, 0, 0, 381, 0, 382, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 386, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 391, 392, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0,
    0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0,
    0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 411, 0, 412, 0, 413, 0, 0, 0, 0, 414, 0, 415, 0, 416, 0, 417, 0,
    418, 0, 0, 0, 419, 0, 420, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0,
    0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0,
    436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0,
    0, 442, 0, 443, 0, 444, 0, 0, 0, 0, 445, 0, 446, 447, 0, 448, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 452, 0, 453,
    0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 457, 0, 458, 0, 0, 0, 459, 0, 460, 0, 0, 461, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 468, 0, 0, 0, 0, 0, 0, 0,
    469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 472, 0, 473, 474, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 476, 0, 0, 0, 477, 0, 478, 0, 0, 479, 0, 480, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0,
    485, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 488, 0, 0, 489, 0, 490, 491, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0,
    0, 0, 0, 494, 0, 495, 0, 496, 0, 497, 0, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 505, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0,
    0, 509, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 513, 0,
    0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0,
    0, 0, 517, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0,
    0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535,
    0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0,
    0, 543, 0, 0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 0, 0, 549, 0, 550, 0, 0, 0, 551, 0, 552, 0, 0, 0, 553, 0, 554, 0,
    0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 558, 0, 559, 0, 560, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 563, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0,
    0, 569, 0, 0, 0, 570, 571, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0,
    0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0,
    0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 582,
    0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0,
    586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593,
    0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0,
    0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0,
    0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0, 0, 0, 0, 608, 609, 0, 0, 0, 0, 0, 0,
    610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0,
    0, 0, 0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 617, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0,
    0, 625, 626, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0,
    0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 0, 0, 0, 0, 634, 635, 0, 0, 0, 0, 0, 0, 636,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0,
    0, 640, 0, 0, 641, 0, 0, 0, 0, 0, 642, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 646,
    0, 0, 647, 0, 0, 0, 648, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 653, 0, 0,
    0, 654, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 657, 658, 0, 0, 659, 0, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 663, 664, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 670, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0,
    673, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    677, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0,
    0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0,
    0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 689, 0, 0, 0, 0, 690, 0, 0, 0,
    0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 0, 0,
    0, 697, 0, 0, 698, 0, 0, 0, 0, 0, 699, 700, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0,
    0, 0, 705, 0, 0, 706, 0, 0, 0, 0, 0, 707, 708, 0, 709, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0,
    0, 712, 0, 0, 713, 0, 0, 714, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 719,
    0, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 728,
};
void recomp_unit_0173_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AB8004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0173[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AB8004;
    case 2u: goto L_08AB8014;
    case 3u: goto L_08AB8028;
    case 4u: goto L_08AB8048;
    case 5u: goto L_08AB8050;
    case 6u: goto L_08AB8070;
    case 7u: goto L_08AB8078;
    case 8u: goto L_08AB808C;
    case 9u: goto L_08AB8094;
    case 10u: goto L_08AB80A8;
    case 11u: goto L_08AB80B4;
    case 12u: goto L_08AB80BC;
    case 13u: goto L_08AB80C4;
    case 14u: goto L_08AB80D8;
    case 15u: goto L_08AB80E0;
    case 16u: goto L_08AB80EC;
    case 17u: goto L_08AB80F8;
    case 18u: goto L_08AB8104;
    case 19u: goto L_08AB810C;
    case 20u: goto L_08AB8110;
    case 21u: goto L_08AB8118;
    case 22u: goto L_08AB812C;
    case 23u: goto L_08AB8138;
    case 24u: goto L_08AB815C;
    case 25u: goto L_08AB8164;
    case 26u: goto L_08AB8188;
    case 27u: goto L_08AB8190;
    case 28u: goto L_08AB81A4;
    case 29u: goto L_08AB81AC;
    case 30u: goto L_08AB81C0;
    case 31u: goto L_08AB81CC;
    case 32u: goto L_08AB81D4;
    case 33u: goto L_08AB81DC;
    case 34u: goto L_08AB81F0;
    case 35u: goto L_08AB81F8;
    case 36u: goto L_08AB8204;
    case 37u: goto L_08AB8228;
    case 38u: goto L_08AB8230;
    case 39u: goto L_08AB8254;
    case 40u: goto L_08AB825C;
    case 41u: goto L_08AB8270;
    case 42u: goto L_08AB8278;
    case 43u: goto L_08AB828C;
    case 44u: goto L_08AB8298;
    case 45u: goto L_08AB82A0;
    case 46u: goto L_08AB82A8;
    case 47u: goto L_08AB82BC;
    case 48u: goto L_08AB82C4;
    case 49u: goto L_08AB82D0;
    case 50u: goto L_08AB82EC;
    case 51u: goto L_08AB82F4;
    case 52u: goto L_08AB8310;
    case 53u: goto L_08AB8318;
    case 54u: goto L_08AB832C;
    case 55u: goto L_08AB8334;
    case 56u: goto L_08AB8348;
    case 57u: goto L_08AB8354;
    case 58u: goto L_08AB835C;
    case 59u: goto L_08AB8364;
    case 60u: goto L_08AB8378;
    case 61u: goto L_08AB8380;
    case 62u: goto L_08AB838C;
    case 63u: goto L_08AB83A8;
    case 64u: goto L_08AB83B0;
    case 65u: goto L_08AB83CC;
    case 66u: goto L_08AB83D4;
    case 67u: goto L_08AB83E8;
    case 68u: goto L_08AB83F0;
    case 69u: goto L_08AB8404;
    case 70u: goto L_08AB8410;
    case 71u: goto L_08AB8418;
    case 72u: goto L_08AB8420;
    case 73u: goto L_08AB8434;
    case 74u: goto L_08AB843C;
    case 75u: goto L_08AB84B0;
    case 76u: goto L_08AB84B8;
    case 77u: goto L_08AB84C8;
    case 78u: goto L_08AB84D4;
    case 79u: goto L_08AB84DC;
    case 80u: goto L_08AB84EC;
    case 81u: goto L_08AB851C;
    case 82u: goto L_08AB852C;
    case 83u: goto L_08AB853C;
    case 84u: goto L_08AB854C;
    case 85u: goto L_08AB855C;
    case 86u: goto L_08AB856C;
    case 87u: goto L_08AB857C;
    case 88u: goto L_08AB858C;
    case 89u: goto L_08AB8598;
    case 90u: goto L_08AB85A0;
    case 91u: goto L_08AB85B0;
    case 92u: goto L_08AB85BC;
    case 93u: goto L_08AB85C4;
    case 94u: goto L_08AB85D4;
    case 95u: goto L_08AB8604;
    case 96u: goto L_08AB8614;
    case 97u: goto L_08AB8624;
    case 98u: goto L_08AB8634;
    case 99u: goto L_08AB8644;
    case 100u: goto L_08AB8654;
    case 101u: goto L_08AB8664;
    case 102u: goto L_08AB8674;
    case 103u: goto L_08AB8680;
    case 104u: goto L_08AB8690;
    case 105u: goto L_08AB869C;
    case 106u: goto L_08AB86A4;
    case 107u: goto L_08AB86B4;
    case 108u: goto L_08AB86E0;
    case 109u: goto L_08AB86F0;
    case 110u: goto L_08AB8700;
    case 111u: goto L_08AB8710;
    case 112u: goto L_08AB8720;
    case 113u: goto L_08AB8730;
    case 114u: goto L_08AB8740;
    case 115u: goto L_08AB874C;
    case 116u: goto L_08AB8754;
    case 117u: goto L_08AB8760;
    case 118u: goto L_08AB8790;
    case 119u: goto L_08AB8798;
    case 120u: goto L_08AB87C8;
    case 121u: goto L_08AB87D0;
    case 122u: goto L_08AB87E8;
    case 123u: goto L_08AB87FC;
    case 124u: goto L_08AB8814;
    case 125u: goto L_08AB8844;
    case 126u: goto L_08AB8854;
    case 127u: goto L_08AB8864;
    case 128u: goto L_08AB8874;
    case 129u: goto L_08AB8884;
    case 130u: goto L_08AB8894;
    case 131u: goto L_08AB88A4;
    case 132u: goto L_08AB891C;
    case 133u: goto L_08AB8924;
    case 134u: goto L_08AB8948;
    case 135u: goto L_08AB8964;
    case 136u: goto L_08AB8970;
    case 137u: goto L_08AB8984;
    case 138u: goto L_08AB8998;
    case 139u: goto L_08AB89C8;
    case 140u: goto L_08AB89E0;
    case 141u: goto L_08AB89F0;
    case 142u: goto L_08AB8A20;
    case 143u: goto L_08AB8A28;
    case 144u: goto L_08AB8A34;
    case 145u: goto L_08AB8A40;
    case 146u: goto L_08AB8A54;
    case 147u: goto L_08AB8A5C;
    case 148u: goto L_08AB8A78;
    case 149u: goto L_08AB8A80;
    case 150u: goto L_08AB8A9C;
    case 151u: goto L_08AB8AA4;
    case 152u: goto L_08AB8AAC;
    case 153u: goto L_08AB8AB8;
    case 154u: goto L_08AB8AD4;
    case 155u: goto L_08AB8ADC;
    case 156u: goto L_08AB8B0C;
    case 157u: goto L_08AB8B18;
    case 158u: goto L_08AB8B24;
    case 159u: goto L_08AB8B2C;
    case 160u: goto L_08AB8B34;
    case 161u: goto L_08AB8B40;
    case 162u: goto L_08AB8B48;
    case 163u: goto L_08AB8B50;
    case 164u: goto L_08AB8B58;
    case 165u: goto L_08AB8B68;
    case 166u: goto L_08AB8B80;
    case 167u: goto L_08AB8B88;
    case 168u: goto L_08AB8B8C;
    case 169u: goto L_08AB8BAC;
    case 170u: goto L_08AB8BC8;
    case 171u: goto L_08AB8BE4;
    case 172u: goto L_08AB8C00;
    case 173u: goto L_08AB8C14;
    case 174u: goto L_08AB8C1C;
    case 175u: goto L_08AB8C28;
    case 176u: goto L_08AB8CB0;
    case 177u: goto L_08AB8CBC;
    case 178u: goto L_08AB8CD0;
    case 179u: goto L_08AB8CDC;
    case 180u: goto L_08AB8CFC;
    case 181u: goto L_08AB8D14;
    case 182u: goto L_08AB8D1C;
    case 183u: goto L_08AB8D28;
    case 184u: goto L_08AB8DAC;
    case 185u: goto L_08AB8DC4;
    case 186u: goto L_08AB8DF8;
    case 187u: goto L_08AB8E04;
    case 188u: goto L_08AB8E28;
    case 189u: goto L_08AB8E40;
    case 190u: goto L_08AB8E70;
    case 191u: goto L_08AB8E7C;
    case 192u: goto L_08AB8E84;
    case 193u: goto L_08AB8E90;
    case 194u: goto L_08AB8E98;
    case 195u: goto L_08AB8E9C;
    case 196u: goto L_08AB8EA8;
    case 197u: goto L_08AB8EBC;
    case 198u: goto L_08AB8EE0;
    case 199u: goto L_08AB8EEC;
    case 200u: goto L_08AB8EF4;
    case 201u: goto L_08AB8F00;
    case 202u: goto L_08AB8F08;
    case 203u: goto L_08AB8F10;
    case 204u: goto L_08AB8F1C;
    case 205u: goto L_08AB8F3C;
    case 206u: goto L_08AB8F6C;
    case 207u: goto L_08AB8F74;
    case 208u: goto L_08AB8F7C;
    case 209u: goto L_08AB8F8C;
    case 210u: goto L_08AB8F94;
    case 211u: goto L_08AB8FAC;
    case 212u: goto L_08AB8FC0;
    case 213u: goto L_08AB8FC8;
    case 214u: goto L_08AB900C;
    case 215u: goto L_08AB9050;
    case 216u: goto L_08AB9068;
    case 217u: goto L_08AB90A8;
    case 218u: goto L_08AB90B0;
    case 219u: goto L_08AB90B8;
    case 220u: goto L_08AB90FC;
    case 221u: goto L_08AB9140;
    case 222u: goto L_08AB9160;
    case 223u: goto L_08AB9190;
    case 224u: goto L_08AB9198;
    case 225u: goto L_08AB91A0;
    case 226u: goto L_08AB91B4;
    case 227u: goto L_08AB91C0;
    case 228u: goto L_08AB9248;
    case 229u: goto L_08AB927C;
    case 230u: goto L_08AB92D0;
    case 231u: goto L_08AB92E8;
    case 232u: goto L_08AB92F4;
    case 233u: goto L_08AB9308;
    case 234u: goto L_08AB9338;
    case 235u: goto L_08AB9350;
    case 236u: goto L_08AB935C;
    case 237u: goto L_08AB938C;
    case 238u: goto L_08AB9394;
    case 239u: goto L_08AB93A0;
    case 240u: goto L_08AB93D0;
    case 241u: goto L_08AB93D8;
    case 242u: goto L_08AB93E4;
    case 243u: goto L_08AB93F8;
    case 244u: goto L_08AB9428;
    case 245u: goto L_08AB9440;
    case 246u: goto L_08AB9448;
    case 247u: goto L_08AB9478;
    case 248u: goto L_08AB9480;
    case 249u: goto L_08AB9488;
    case 250u: goto L_08AB9494;
    case 251u: goto L_08AB949C;
    case 252u: goto L_08AB94A4;
    case 253u: goto L_08AB94AC;
    case 254u: goto L_08AB9500;
    case 255u: goto L_08AB9524;
    case 256u: goto L_08AB953C;
    case 257u: goto L_08AB956C;
    case 258u: goto L_08AB9574;
    case 259u: goto L_08AB957C;
    case 260u: goto L_08AB9598;
    case 261u: goto L_08AB95A0;
    case 262u: goto L_08AB95A8;
    case 263u: goto L_08AB95AC;
    case 264u: goto L_08AB95B4;
    case 265u: goto L_08AB95BC;
    case 266u: goto L_08AB95D8;
    case 267u: goto L_08AB95EC;
    case 268u: goto L_08AB95F4;
    case 269u: goto L_08AB9644;
    case 270u: goto L_08AB9668;
    case 271u: goto L_08AB9680;
    case 272u: goto L_08AB968C;
    case 273u: goto L_08AB96B4;
    case 274u: goto L_08AB96BC;
    case 275u: goto L_08AB96C8;
    case 276u: goto L_08AB96D0;
    case 277u: goto L_08AB96E4;
    case 278u: goto L_08AB96EC;
    case 279u: goto L_08AB96F4;
    case 280u: goto L_08AB9708;
    case 281u: goto L_08AB9718;
    case 282u: goto L_08AB972C;
    case 283u: goto L_08AB9744;
    case 284u: goto L_08AB974C;
    case 285u: goto L_08AB9760;
    case 286u: goto L_08AB976C;
    case 287u: goto L_08AB9778;
    case 288u: goto L_08AB978C;
    case 289u: goto L_08AB97BC;
    case 290u: goto L_08AB97C4;
    case 291u: goto L_08AB97F4;
    case 292u: goto L_08AB97FC;
    case 293u: goto L_08AB9818;
    case 294u: goto L_08AB9840;
    case 295u: goto L_08AB984C;
    case 296u: goto L_08AB986C;
    case 297u: goto L_08AB9874;
    case 298u: goto L_08AB98A8;
    case 299u: goto L_08AB98B8;
    case 300u: goto L_08AB98D0;
    case 301u: goto L_08AB98E8;
    case 302u: goto L_08AB98F8;
    case 303u: goto L_08AB9908;
    case 304u: goto L_08AB9918;
    case 305u: goto L_08AB9928;
    case 306u: goto L_08AB9938;
    case 307u: goto L_08AB9948;
    case 308u: goto L_08AB9958;
    case 309u: goto L_08AB9968;
    case 310u: goto L_08AB9978;
    case 311u: goto L_08AB9988;
    case 312u: goto L_08AB998C;
    case 313u: goto L_08AB9994;
    case 314u: goto L_08AB99A0;
    case 315u: goto L_08AB99AC;
    case 316u: goto L_08AB99CC;
    case 317u: goto L_08AB99D4;
    case 318u: goto L_08AB99E0;
    case 319u: goto L_08AB99EC;
    case 320u: goto L_08AB99F4;
    case 321u: goto L_08AB99F8;
    case 322u: goto L_08AB99FC;
    case 323u: goto L_08AB9A04;
    case 324u: goto L_08AB9A10;
    case 325u: goto L_08AB9A20;
    case 326u: goto L_08AB9A3C;
    case 327u: goto L_08AB9A5C;
    case 328u: goto L_08AB9A88;
    case 329u: goto L_08AB9A90;
    case 330u: goto L_08AB9A9C;
    case 331u: goto L_08AB9AA4;
    case 332u: goto L_08AB9AC4;
    case 333u: goto L_08AB9AD4;
    case 334u: goto L_08AB9AE0;
    case 335u: goto L_08AB9AF4;
    case 336u: goto L_08AB9B00;
    case 337u: goto L_08AB9B0C;
    case 338u: goto L_08AB9B24;
    case 339u: goto L_08AB9B34;
    case 340u: goto L_08AB9B4C;
    case 341u: goto L_08AB9B60;
    case 342u: goto L_08AB9B94;
    case 343u: goto L_08AB9B9C;
    case 344u: goto L_08AB9BC8;
    case 345u: goto L_08AB9BD0;
    case 346u: goto L_08AB9BE4;
    case 347u: goto L_08AB9BF8;
    case 348u: goto L_08AB9C20;
    case 349u: goto L_08AB9C2C;
    case 350u: goto L_08AB9C4C;
    case 351u: goto L_08AB9C74;
    case 352u: goto L_08AB9CE4;
    case 353u: goto L_08AB9CEC;
    case 354u: goto L_08AB9CF4;
    case 355u: goto L_08AB9D04;
    case 356u: goto L_08AB9D0C;
    case 357u: goto L_08AB9D24;
    case 358u: goto L_08AB9D38;
    case 359u: goto L_08AB9D40;
    case 360u: goto L_08AB9D80;
    case 361u: goto L_08AB9DB8;
    case 362u: goto L_08AB9DE8;
    case 363u: goto L_08AB9E64;
    case 364u: goto L_08AB9E6C;
    case 365u: goto L_08AB9E74;
    case 366u: goto L_08AB9EB4;
    case 367u: goto L_08AB9EF8;
    case 368u: goto L_08AB9F28;
    case 369u: goto L_08AB9F98;
    case 370u: goto L_08AB9FA0;
    case 371u: goto L_08AB9FA8;
    case 372u: goto L_08AB9FB8;
    case 373u: goto L_08AB9FC4;
    case 374u: goto L_08ABA04C;
    case 375u: goto L_08ABA080;
    case 376u: goto L_08ABA0D4;
    case 377u: goto L_08ABA104;
    case 378u: goto L_08ABA174;
    case 379u: goto L_08ABA17C;
    case 380u: goto L_08ABA184;
    case 381u: goto L_08ABA190;
    case 382u: goto L_08ABA198;
    case 383u: goto L_08ABA1A0;
    case 384u: goto L_08ABA1A8;
    case 385u: goto L_08ABA21C;
    case 386u: goto L_08ABA28C;
    case 387u: goto L_08ABA294;
    case 388u: goto L_08ABA29C;
    case 389u: goto L_08ABA2B8;
    case 390u: goto L_08ABA2C0;
    case 391u: goto L_08ABA2C8;
    case 392u: goto L_08ABA2CC;
    case 393u: goto L_08ABA2D4;
    case 394u: goto L_08ABA2DC;
    case 395u: goto L_08ABA2F8;
    case 396u: goto L_08ABA30C;
    case 397u: goto L_08ABA314;
    case 398u: goto L_08ABA354;
    case 399u: goto L_08ABA384;
    case 400u: goto L_08ABA3BC;
    case 401u: goto L_08ABA3C8;
    case 402u: goto L_08ABA3D0;
    case 403u: goto L_08ABA3D8;
    case 404u: goto L_08ABA434;
    case 405u: goto L_08ABA450;
    case 406u: goto L_08ABA47C;
    case 407u: goto L_08ABA48C;
    case 408u: goto L_08ABA494;
    case 409u: goto L_08ABA4AC;
    case 410u: goto L_08ABA4B4;
    case 411u: goto L_08ABA4C0;
    case 412u: goto L_08ABA4C8;
    case 413u: goto L_08ABA4D0;
    case 414u: goto L_08ABA4E4;
    case 415u: goto L_08ABA4EC;
    case 416u: goto L_08ABA4F4;
    case 417u: goto L_08ABA4FC;
    case 418u: goto L_08ABA504;
    case 419u: goto L_08ABA514;
    case 420u: goto L_08ABA51C;
    case 421u: goto L_08ABA524;
    case 422u: goto L_08ABA52C;
    case 423u: goto L_08ABA540;
    case 424u: goto L_08ABA548;
    case 425u: goto L_08ABA554;
    case 426u: goto L_08ABA5D8;
    case 427u: goto L_08ABA5F0;
    case 428u: goto L_08ABA610;
    case 429u: goto L_08ABA618;
    case 430u: goto L_08ABA640;
    case 431u: goto L_08ABA648;
    case 432u: goto L_08ABA654;
    case 433u: goto L_08ABA6D8;
    case 434u: goto L_08ABA6DC;
    case 435u: goto L_08ABA6E4;
    case 436u: goto L_08ABA704;
    case 437u: goto L_08ABA73C;
    case 438u: goto L_08ABA744;
    case 439u: goto L_08ABA74C;
    case 440u: goto L_08ABA754;
    case 441u: goto L_08ABA77C;
    case 442u: goto L_08ABA788;
    case 443u: goto L_08ABA790;
    case 444u: goto L_08ABA798;
    case 445u: goto L_08ABA7AC;
    case 446u: goto L_08ABA7B4;
    case 447u: goto L_08ABA7B8;
    case 448u: goto L_08ABA7C0;
    case 449u: goto L_08ABA7C8;
    case 450u: goto L_08ABA7DC;
    case 451u: goto L_08ABA7F0;
    case 452u: goto L_08ABA7F8;
    case 453u: goto L_08ABA800;
    case 454u: goto L_08ABA814;
    case 455u: goto L_08ABA840;
    case 456u: goto L_08ABA848;
    case 457u: goto L_08ABA850;
    case 458u: goto L_08ABA858;
    case 459u: goto L_08ABA868;
    case 460u: goto L_08ABA870;
    case 461u: goto L_08ABA87C;
    case 462u: goto L_08ABA904;
    case 463u: goto L_08ABA914;
    case 464u: goto L_08ABA944;
    case 465u: goto L_08ABA94C;
    case 466u: goto L_08ABA958;
    case 467u: goto L_08ABA9E0;
    case 468u: goto L_08ABA9E4;
    case 469u: goto L_08ABAA04;
    case 470u: goto L_08ABAA38;
    case 471u: goto L_08ABAA40;
    case 472u: goto L_08ABAA4C;
    case 473u: goto L_08ABAA54;
    case 474u: goto L_08ABAA58;
    case 475u: goto L_08ABAA64;
    case 476u: goto L_08ABAA8C;
    case 477u: goto L_08ABAA9C;
    case 478u: goto L_08ABAAA4;
    case 479u: goto L_08ABAAB0;
    case 480u: goto L_08ABAAB8;
    case 481u: goto L_08ABAAC0;
    case 482u: goto L_08ABAACC;
    case 483u: goto L_08ABAAD8;
    case 484u: goto L_08ABAAFC;
    case 485u: goto L_08ABAB04;
    case 486u: goto L_08ABAB28;
    case 487u: goto L_08ABAB34;
    case 488u: goto L_08ABAB3C;
    case 489u: goto L_08ABAB48;
    case 490u: goto L_08ABAB50;
    case 491u: goto L_08ABAB54;
    case 492u: goto L_08ABAB60;
    case 493u: goto L_08ABAB74;
    case 494u: goto L_08ABAB90;
    case 495u: goto L_08ABAB98;
    case 496u: goto L_08ABABA0;
    case 497u: goto L_08ABABA8;
    case 498u: goto L_08ABABB4;
    case 499u: goto L_08ABABBC;
    case 500u: goto L_08ABABC8;
    case 501u: goto L_08ABABD0;
    case 502u: goto L_08ABABD8;
    case 503u: goto L_08ABABE4;
    case 504u: goto L_08ABAC2C;
    case 505u: goto L_08ABAC30;
    case 506u: goto L_08ABAC50;
    case 507u: goto L_08ABAC68;
    case 508u: goto L_08ABAC70;
    case 509u: goto L_08ABAC88;
    case 510u: goto L_08ABAC94;
    case 511u: goto L_08ABAC9C;
    case 512u: goto L_08ABACF8;
    case 513u: goto L_08ABACFC;
    case 514u: goto L_08ABAD18;
    case 515u: goto L_08ABAD24;
    case 516u: goto L_08ABAD74;
    case 517u: goto L_08ABAD8C;
    case 518u: goto L_08ABAD94;
    case 519u: goto L_08ABADA4;
    case 520u: goto L_08ABADBC;
    case 521u: goto L_08ABADC4;
    case 522u: goto L_08ABADCC;
    case 523u: goto L_08ABADE8;
    case 524u: goto L_08ABADFC;
    case 525u: goto L_08ABAE08;
    case 526u: goto L_08ABAE18;
    case 527u: goto L_08ABAE34;
    case 528u: goto L_08ABAE40;
    case 529u: goto L_08ABAE4C;
    case 530u: goto L_08ABAE58;
    case 531u: goto L_08ABAE60;
    case 532u: goto L_08ABAE68;
    case 533u: goto L_08ABAE70;
    case 534u: goto L_08ABAE78;
    case 535u: goto L_08ABAE80;
    case 536u: goto L_08ABAE88;
    case 537u: goto L_08ABAE90;
    case 538u: goto L_08ABAE98;
    case 539u: goto L_08ABAEA0;
    case 540u: goto L_08ABAEA8;
    case 541u: goto L_08ABAEC8;
    case 542u: goto L_08ABAEF0;
    case 543u: goto L_08ABAF08;
    case 544u: goto L_08ABAF14;
    case 545u: goto L_08ABAF1C;
    case 546u: goto L_08ABAF24;
    case 547u: goto L_08ABAF2C;
    case 548u: goto L_08ABAF34;
    case 549u: goto L_08ABAF44;
    case 550u: goto L_08ABAF4C;
    case 551u: goto L_08ABAF5C;
    case 552u: goto L_08ABAF64;
    case 553u: goto L_08ABAF74;
    case 554u: goto L_08ABAF7C;
    case 555u: goto L_08ABAF8C;
    case 556u: goto L_08ABAF94;
    case 557u: goto L_08ABAFA4;
    case 558u: goto L_08ABAFAC;
    case 559u: goto L_08ABAFB4;
    case 560u: goto L_08ABAFBC;
    case 561u: goto L_08ABAFCC;
    case 562u: goto L_08ABAFD4;
    case 563u: goto L_08ABB008;
    case 564u: goto L_08ABB010;
    case 565u: goto L_08ABB01C;
    case 566u: goto L_08ABB04C;
    case 567u: goto L_08ABB054;
    case 568u: goto L_08ABB07C;
    case 569u: goto L_08ABB088;
    case 570u: goto L_08ABB098;
    case 571u: goto L_08ABB09C;
    case 572u: goto L_08ABB0B4;
    case 573u: goto L_08ABB0D8;
    case 574u: goto L_08ABB0F4;
    case 575u: goto L_08ABB114;
    case 576u: goto L_08ABB138;
    case 577u: goto L_08ABB154;
    case 578u: goto L_08ABB174;
    case 579u: goto L_08ABB198;
    case 580u: goto L_08ABB1B4;
    case 581u: goto L_08ABB1DC;
    case 582u: goto L_08ABB200;
    case 583u: goto L_08ABB21C;
    case 584u: goto L_08ABB244;
    case 585u: goto L_08ABB268;
    case 586u: goto L_08ABB284;
    case 587u: goto L_08ABB2AC;
    case 588u: goto L_08ABB2D0;
    case 589u: goto L_08ABB2EC;
    case 590u: goto L_08ABB314;
    case 591u: goto L_08ABB338;
    case 592u: goto L_08ABB354;
    case 593u: goto L_08ABB380;
    case 594u: goto L_08ABB3A4;
    case 595u: goto L_08ABB3C0;
    case 596u: goto L_08ABB3E8;
    case 597u: goto L_08ABB40C;
    case 598u: goto L_08ABB428;
    case 599u: goto L_08ABB454;
    case 600u: goto L_08ABB478;
    case 601u: goto L_08ABB494;
    case 602u: goto L_08ABB4BC;
    case 603u: goto L_08ABB4EC;
    case 604u: goto L_08ABB518;
    case 605u: goto L_08ABB520;
    case 606u: goto L_08ABB540;
    case 607u: goto L_08ABB54C;
    case 608u: goto L_08ABB564;
    case 609u: goto L_08ABB568;
    case 610u: goto L_08ABB584;
    case 611u: goto L_08ABB5B4;
    case 612u: goto L_08ABB5D0;
    case 613u: goto L_08ABB5F0;
    case 614u: goto L_08ABB5F8;
    case 615u: goto L_08ABB618;
    case 616u: goto L_08ABB624;
    case 617u: goto L_08ABB63C;
    case 618u: goto L_08ABB640;
    case 619u: goto L_08ABB65C;
    case 620u: goto L_08ABB68C;
    case 621u: goto L_08ABB6BC;
    case 622u: goto L_08ABB6C4;
    case 623u: goto L_08ABB6E4;
    case 624u: goto L_08ABB6F0;
    case 625u: goto L_08ABB708;
    case 626u: goto L_08ABB70C;
    case 627u: goto L_08ABB728;
    case 628u: goto L_08ABB758;
    case 629u: goto L_08ABB774;
    case 630u: goto L_08ABB794;
    case 631u: goto L_08ABB79C;
    case 632u: goto L_08ABB7BC;
    case 633u: goto L_08ABB7C8;
    case 634u: goto L_08ABB7E0;
    case 635u: goto L_08ABB7E4;
    case 636u: goto L_08ABB800;
    case 637u: goto L_08ABB830;
    case 638u: goto L_08ABB860;
    case 639u: goto L_08ABB868;
    case 640u: goto L_08ABB888;
    case 641u: goto L_08ABB894;
    case 642u: goto L_08ABB8AC;
    case 643u: goto L_08ABB8B0;
    case 644u: goto L_08ABB8CC;
    case 645u: goto L_08ABB8F4;
    case 646u: goto L_08ABB900;
    case 647u: goto L_08ABB90C;
    case 648u: goto L_08ABB91C;
    case 649u: goto L_08ABB920;
    case 650u: goto L_08ABB938;
    case 651u: goto L_08ABB960;
    case 652u: goto L_08ABB96C;
    case 653u: goto L_08ABB978;
    case 654u: goto L_08ABB988;
    case 655u: goto L_08ABB98C;
    case 656u: goto L_08ABB9A4;
    case 657u: goto L_08ABB9BC;
    case 658u: goto L_08ABB9C0;
    case 659u: goto L_08ABB9CC;
    case 660u: goto L_08ABB9D8;
    case 661u: goto L_08ABB9F0;
    case 662u: goto L_08ABBA28;
    case 663u: goto L_08ABBA34;
    case 664u: goto L_08ABBA38;
    case 665u: goto L_08ABBA40;
    case 666u: goto L_08ABBA54;
    case 667u: goto L_08ABBA74;
    case 668u: goto L_08ABBA9C;
    case 669u: goto L_08ABBAC8;
    case 670u: goto L_08ABBAD8;
    case 671u: goto L_08ABBADC;
    case 672u: goto L_08ABBAF4;
    case 673u: goto L_08ABBB04;
    case 674u: goto L_08ABBB14;
    case 675u: goto L_08ABBB38;
    case 676u: goto L_08ABBB54;
    case 677u: goto L_08ABBB84;
    case 678u: goto L_08ABBBA8;
    case 679u: goto L_08ABBBC4;
    case 680u: goto L_08ABBBF4;
    case 681u: goto L_08ABBC18;
    case 682u: goto L_08ABBC2C;
    case 683u: goto L_08ABBC54;
    case 684u: goto L_08ABBC78;
    case 685u: goto L_08ABBC8C;
    case 686u: goto L_08ABBCB4;
    case 687u: goto L_08ABBCC8;
    case 688u: goto L_08ABBCD8;
    case 689u: goto L_08ABBCE0;
    case 690u: goto L_08ABBCF4;
    case 691u: goto L_08ABBD08;
    case 692u: goto L_08ABBD24;
    case 693u: goto L_08ABBD2C;
    case 694u: goto L_08ABBD40;
    case 695u: goto L_08ABBD60;
    case 696u: goto L_08ABBD68;
    case 697u: goto L_08ABBD88;
    case 698u: goto L_08ABBD94;
    case 699u: goto L_08ABBDAC;
    case 700u: goto L_08ABBDB0;
    case 701u: goto L_08ABBDB8;
    case 702u: goto L_08ABBDC8;
    case 703u: goto L_08ABBDE4;
    case 704u: goto L_08ABBDEC;
    case 705u: goto L_08ABBE0C;
    case 706u: goto L_08ABBE18;
    case 707u: goto L_08ABBE30;
    case 708u: goto L_08ABBE34;
    case 709u: goto L_08ABBE3C;
    case 710u: goto L_08ABBE4C;
    case 711u: goto L_08ABBE74;
    case 712u: goto L_08ABBE88;
    case 713u: goto L_08ABBE94;
    case 714u: goto L_08ABBEA0;
    case 715u: goto L_08ABBEA4;
    case 716u: goto L_08ABBEBC;
    case 717u: goto L_08ABBEDC;
    case 718u: goto L_08ABBEE4;
    case 719u: goto L_08ABBF00;
    case 720u: goto L_08ABBF14;
    case 721u: goto L_08ABBF24;
    case 722u: goto L_08ABBF34;
    case 723u: goto L_08ABBF48;
    case 724u: goto L_08ABBF64;
    case 725u: goto L_08ABBF8C;
    case 726u: goto L_08ABBFCC;
    case 727u: goto L_08ABBFEC;
    case 728u: goto L_08ABBFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AB8004:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08AB8014u);
    ctx.gpr[6] = (0u | 1023u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8014u) goto L_08AB8014;
    return;
L_08AB8014:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8050;
      }
      goto L_08AB8028;
    }
L_08AB8028:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11928));
    ctx.gpr[31] = (0x08AB8048u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12864));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8048u) goto L_08AB8048;
    return;
L_08AB8048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8070;
      }
      goto L_08AB8050;
    }
L_08AB8050:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11972));
    ctx.gpr[31] = (0x08AB8070u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12864));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8070u) goto L_08AB8070;
    return;
L_08AB8070:
    ctx.gpr[31] = (0x08AB8078u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08AB8078u) goto L_08AB8078;
    return;
L_08AB8078:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB808Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB808Cu) goto L_08AB808C;
    return;
L_08AB808C:
    ctx.gpr[31] = (0x08AB8094u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem) && ctx.pc == 0x08AB8094u) goto L_08AB8094;
    return;
L_08AB8094:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB80A8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB80A8u) goto L_08AB80A8;
    return;
L_08AB80A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB80BC;
      }
      goto L_08AB80B4;
    }
L_08AB80B4:
    ctx.gpr[31] = (0x08AB80BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208)));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 185u, 0x08AB4E74u>(ctx, &aot_mem) && ctx.pc == 0x08AB80BCu) goto L_08AB80BC;
    return;
L_08AB80BC:
    ctx.gpr[31] = (0x08AB80C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AB80C4u) goto L_08AB80C4;
    return;
L_08AB80C4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB80D8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x08AB80D8u) goto L_08AB80D8;
    return;
L_08AB80D8:
    ctx.gpr[31] = (0x08AB80E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08AB80E0u) goto L_08AB80E0;
    return;
L_08AB80E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (2236u << 16u);
      if (branch_taken) {
          goto L_08AB8118;
      }
      goto L_08AB80EC;
    }
L_08AB80EC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AB80F8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AB80F8u) goto L_08AB80F8;
    return;
L_08AB80F8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8110;
      }
      goto L_08AB8104;
    }
L_08AB8104:
    ctx.gpr[31] = (0x08AB810Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB810Cu) goto L_08AB810C;
    return;
L_08AB810C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AB8110;
L_08AB8110:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[6] = (2236u << 16u);
    goto L_08AB8118;
L_08AB8118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1920));
    ctx.gpr[7] = (0u | 127u);
    ctx.gpr[31] = (0x08AB812Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2236));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB812Cu) goto L_08AB812C;
    return;
L_08AB812C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8164;
      }
      goto L_08AB8138;
    }
L_08AB8138:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(12864));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08AB815Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11928));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB815Cu) goto L_08AB815C;
    return;
L_08AB815C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8188;
      }
      goto L_08AB8164;
    }
L_08AB8164:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(12864));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08AB8188u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11972));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8188u) goto L_08AB8188;
    return;
L_08AB8188:
    ctx.gpr[31] = (0x08AB8190u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08AB8190u) goto L_08AB8190;
    return;
L_08AB8190:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB81A4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB81A4u) goto L_08AB81A4;
    return;
L_08AB81A4:
    ctx.gpr[31] = (0x08AB81ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem) && ctx.pc == 0x08AB81ACu) goto L_08AB81AC;
    return;
L_08AB81AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB81C0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB81C0u) goto L_08AB81C0;
    return;
L_08AB81C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB81D4;
      }
      goto L_08AB81CC;
    }
L_08AB81CC:
    ctx.gpr[31] = (0x08AB81D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 185u, 0x08AB4E74u>(ctx, &aot_mem) && ctx.pc == 0x08AB81D4u) goto L_08AB81D4;
    return;
L_08AB81D4:
    ctx.gpr[31] = (0x08AB81DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AB81DCu) goto L_08AB81DC;
    return;
L_08AB81DC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB81F0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x08AB81F0u) goto L_08AB81F0;
    return;
L_08AB81F0:
    ctx.gpr[31] = (0x08AB81F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08AB81F8u) goto L_08AB81F8;
    return;
L_08AB81F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8230;
      }
      goto L_08AB8204;
    }
L_08AB8204:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(12864));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1912));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08AB8228u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11928));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8228u) goto L_08AB8228;
    return;
L_08AB8228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8254;
      }
      goto L_08AB8230;
    }
L_08AB8230:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(12864));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1912));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08AB8254u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11972));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8254u) goto L_08AB8254;
    return;
L_08AB8254:
    ctx.gpr[31] = (0x08AB825Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08AB825Cu) goto L_08AB825C;
    return;
L_08AB825C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB8270u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB8270u) goto L_08AB8270;
    return;
L_08AB8270:
    ctx.gpr[31] = (0x08AB8278u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem) && ctx.pc == 0x08AB8278u) goto L_08AB8278;
    return;
L_08AB8278:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB828Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB828Cu) goto L_08AB828C;
    return;
L_08AB828C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB82A0;
      }
      goto L_08AB8298;
    }
L_08AB8298:
    ctx.gpr[31] = (0x08AB82A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 185u, 0x08AB4E74u>(ctx, &aot_mem) && ctx.pc == 0x08AB82A0u) goto L_08AB82A0;
    return;
L_08AB82A0:
    ctx.gpr[31] = (0x08AB82A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AB82A8u) goto L_08AB82A8;
    return;
L_08AB82A8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB82BCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x08AB82BCu) goto L_08AB82BC;
    return;
L_08AB82BC:
    ctx.gpr[31] = (0x08AB82C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08AB82C4u) goto L_08AB82C4;
    return;
L_08AB82C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB82F4;
      }
      goto L_08AB82D0;
    }
L_08AB82D0:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1904));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB82ECu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11928));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB82ECu) goto L_08AB82EC;
    return;
L_08AB82EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8310;
      }
      goto L_08AB82F4;
    }
L_08AB82F4:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1904));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB8310u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11972));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8310u) goto L_08AB8310;
    return;
L_08AB8310:
    ctx.gpr[31] = (0x08AB8318u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08AB8318u) goto L_08AB8318;
    return;
L_08AB8318:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB832Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB832Cu) goto L_08AB832C;
    return;
L_08AB832C:
    ctx.gpr[31] = (0x08AB8334u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem) && ctx.pc == 0x08AB8334u) goto L_08AB8334;
    return;
L_08AB8334:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB8348u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB8348u) goto L_08AB8348;
    return;
L_08AB8348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB835C;
      }
      goto L_08AB8354;
    }
L_08AB8354:
    ctx.gpr[31] = (0x08AB835Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 185u, 0x08AB4E74u>(ctx, &aot_mem) && ctx.pc == 0x08AB835Cu) goto L_08AB835C;
    return;
L_08AB835C:
    ctx.gpr[31] = (0x08AB8364u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8364u) goto L_08AB8364;
    return;
L_08AB8364:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB8378u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x08AB8378u) goto L_08AB8378;
    return;
L_08AB8378:
    ctx.gpr[31] = (0x08AB8380u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08AB8380u) goto L_08AB8380;
    return;
L_08AB8380:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB83B0;
      }
      goto L_08AB838C;
    }
L_08AB838C:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1896));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1888));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB83A8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11928));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB83A8u) goto L_08AB83A8;
    return;
L_08AB83A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB83CC;
      }
      goto L_08AB83B0;
    }
L_08AB83B0:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1896));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1888));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB83CCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11972));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB83CCu) goto L_08AB83CC;
    return;
L_08AB83CC:
    ctx.gpr[31] = (0x08AB83D4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08AB83D4u) goto L_08AB83D4;
    return;
L_08AB83D4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB83E8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB83E8u) goto L_08AB83E8;
    return;
L_08AB83E8:
    ctx.gpr[31] = (0x08AB83F0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem) && ctx.pc == 0x08AB83F0u) goto L_08AB83F0;
    return;
L_08AB83F0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB8404u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB8404u) goto L_08AB8404;
    return;
L_08AB8404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8418;
      }
      goto L_08AB8410;
    }
L_08AB8410:
    ctx.gpr[31] = (0x08AB8418u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 185u, 0x08AB4E74u>(ctx, &aot_mem) && ctx.pc == 0x08AB8418u) goto L_08AB8418;
    return;
L_08AB8418:
    ctx.gpr[31] = (0x08AB8420u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8420u) goto L_08AB8420;
    return;
L_08AB8420:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB8434u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x08AB8434u) goto L_08AB8434;
    return;
L_08AB8434:
    ctx.gpr[31] = (0x08AB843Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08AB843Cu) goto L_08AB843C;
    return;
L_08AB843C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1416), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1420), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1428), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1432), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1436), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1444), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1448), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1452), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1460), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1464), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1468), ctx.gpr[20]);
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[8] = (2236u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-572));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-2236));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-572), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1476), ctx.gpr[7]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem); return;
      }
      goto L_08AB84B0;
    }
L_08AB84B0:
    ctx.gpr[31] = (0x08AB84B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 212u, 0x08AB50BCu>(ctx, &aot_mem) && ctx.pc == 0x08AB84B8u) goto L_08AB84B8;
    return;
L_08AB84B8:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[31] = (0x08AB84C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AB84C8u) goto L_08AB84C8;
    return;
L_08AB84C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB84D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 186u, 0x08AB4E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB84D4u) goto L_08AB84D4;
    return;
L_08AB84D4:
    ctx.gpr[31] = (0x08AB84DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 189u, 0x08AB4EC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB84DCu) goto L_08AB84DC;
    return;
L_08AB84DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB84ECu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB84ECu) goto L_08AB84EC;
    return;
L_08AB84EC:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1516), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1500));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    ctx.gpr[31] = (0x08AB851Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB851Cu) goto L_08AB851C;
    return;
L_08AB851C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x08AB852Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB852Cu) goto L_08AB852C;
    return;
L_08AB852C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB853Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB853Cu) goto L_08AB853C;
    return;
L_08AB853C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1956));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x08AB854Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB854Cu) goto L_08AB854C;
    return;
L_08AB854C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB855Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB855Cu) goto L_08AB855C;
    return;
L_08AB855C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1948));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x08AB856Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB856Cu) goto L_08AB856C;
    return;
L_08AB856C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB857Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB857Cu) goto L_08AB857C;
    return;
L_08AB857C:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12504));
    ctx.gpr[31] = (0x08AB858Cu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 189u, 0x08AB4EC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB858Cu) goto L_08AB858C;
    return;
L_08AB858C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem); return;
      }
      goto L_08AB8598;
    }
L_08AB8598:
    ctx.gpr[31] = (0x08AB85A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 212u, 0x08AB50BCu>(ctx, &aot_mem) && ctx.pc == 0x08AB85A0u) goto L_08AB85A0;
    return;
L_08AB85A0:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[31] = (0x08AB85B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AB85B0u) goto L_08AB85B0;
    return;
L_08AB85B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB85BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 186u, 0x08AB4E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB85BCu) goto L_08AB85BC;
    return;
L_08AB85BC:
    ctx.gpr[31] = (0x08AB85C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 189u, 0x08AB4EC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB85C4u) goto L_08AB85C4;
    return;
L_08AB85C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB85D4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB85D4u) goto L_08AB85D4;
    return;
L_08AB85D4:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1516), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1500));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    ctx.gpr[31] = (0x08AB8604u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8604u) goto L_08AB8604;
    return;
L_08AB8604:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x08AB8614u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB8614u) goto L_08AB8614;
    return;
L_08AB8614:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB8624u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8624u) goto L_08AB8624;
    return;
L_08AB8624:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1880));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x08AB8634u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB8634u) goto L_08AB8634;
    return;
L_08AB8634:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB8644u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8644u) goto L_08AB8644;
    return;
L_08AB8644:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1876));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x08AB8654u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB8654u) goto L_08AB8654;
    return;
L_08AB8654:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB8664u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8664u) goto L_08AB8664;
    return;
L_08AB8664:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12684));
    ctx.gpr[31] = (0x08AB8674u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 189u, 0x08AB4EC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8674u) goto L_08AB8674;
    return;
L_08AB8674:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem); return;
      }
      goto L_08AB8680;
    }
L_08AB8680:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[31] = (0x08AB8690u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8690u) goto L_08AB8690;
    return;
L_08AB8690:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB869Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 186u, 0x08AB4E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB869Cu) goto L_08AB869C;
    return;
L_08AB869C:
    ctx.gpr[31] = (0x08AB86A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 189u, 0x08AB4EC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB86A4u) goto L_08AB86A4;
    return;
L_08AB86A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB86B4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB86B4u) goto L_08AB86B4;
    return;
L_08AB86B4:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1516), 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1500));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    ctx.gpr[31] = (0x08AB86E0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB86E0u) goto L_08AB86E0;
    return;
L_08AB86E0:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x08AB86F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB86F0u) goto L_08AB86F0;
    return;
L_08AB86F0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB8700u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8700u) goto L_08AB8700;
    return;
L_08AB8700:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1956));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x08AB8710u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB8710u) goto L_08AB8710;
    return;
L_08AB8710:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB8720u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8720u) goto L_08AB8720;
    return;
L_08AB8720:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1948));
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x08AB8730u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB8730u) goto L_08AB8730;
    return;
L_08AB8730:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB8740u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8740u) goto L_08AB8740;
    return;
L_08AB8740:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08AB874Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB874Cu) goto L_08AB874C;
    return;
L_08AB874C:
    ctx.gpr[31] = (0x08AB8754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 189u, 0x08AB4EC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8754u) goto L_08AB8754;
    return;
L_08AB8754:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem); return;
      }
      goto L_08AB8760;
    }
L_08AB8760:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1516), 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1500));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    ctx.gpr[31] = (0x08AB8790u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8790u) goto L_08AB8790;
    return;
L_08AB8790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem); return;
      }
      goto L_08AB8798;
    }
L_08AB8798:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1516), 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1500));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    ctx.gpr[31] = (0x08AB87C8u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB87C8u) goto L_08AB87C8;
    return;
L_08AB87C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem); return;
      }
      goto L_08AB87D0;
    }
L_08AB87D0:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-552));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB87E8u);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB87E8u) goto L_08AB87E8;
    return;
L_08AB87E8:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x08AB87FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-532));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB87FCu) goto L_08AB87FC;
    return;
L_08AB87FC:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-468));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB8814u);
    ctx.gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB8814u) goto L_08AB8814;
    return;
L_08AB8814:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1516), 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1500));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    ctx.gpr[31] = (0x08AB8844u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8844u) goto L_08AB8844;
    return;
L_08AB8844:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x08AB8854u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB8854u) goto L_08AB8854;
    return;
L_08AB8854:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB8864u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8864u) goto L_08AB8864;
    return;
L_08AB8864:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1956));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x08AB8874u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB8874u) goto L_08AB8874;
    return;
L_08AB8874:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB8884u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8884u) goto L_08AB8884;
    return;
L_08AB8884:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1948));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x08AB8894u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB8894u) goto L_08AB8894;
    return;
L_08AB8894:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB88A4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB88A4u) goto L_08AB88A4;
    return;
L_08AB88A4:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12504));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1488), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1492), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1496), ctx.gpr[17]);
    ctx.gpr[4] = (1024u << 16u);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4040));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 15947u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1416), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1420), ctx.gpr[5]);
    ctx.gpr[5] = (7u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1428), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16384));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1432), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1436), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1444), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 63736u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1448), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1452), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1460), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 50564u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1464), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1468), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem); return;
      }
      goto L_08AB891C;
    }
L_08AB891C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem); return;
      }
      goto L_08AB8924;
    }
L_08AB8924:
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
L_08AB8948:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2280u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB8964u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB8964u) goto L_08AB8964;
    return;
L_08AB8964:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8970:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27808));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_08AB8984;
L_08AB8984:
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
    goto L_08AB8998;
L_08AB8998:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08AB8998;
      }
      goto L_08AB89C8;
    }
L_08AB89C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8984;
      }
      goto L_08AB89E0;
    }
L_08AB89E0:
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26272));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    goto L_08AB89F0;
L_08AB89F0:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08AB89F0;
      }
      goto L_08AB8A20;
    }
L_08AB8A20:
    ctx.gpr[31] = (0x08AB8A28u);
    // nop
    goto L_08AB9680;
L_08AB8A28:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8A34:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB8A54;
      }
      goto L_08AB8A40;
    }
L_08AB8A40:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
      if (branch_taken) {
          goto L_08AB8A40;
      }
      goto L_08AB8A54;
    }
L_08AB8A54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8A5C:
    ctx.gpr[9] = (ctx.gpr[6] & 65535u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[7] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB8AA4;
      }
      goto L_08AB8A78;
    }
L_08AB8A78:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8A9C;
      }
      goto L_08AB8A80;
    }
L_08AB8A80:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AB8A80;
      }
      goto L_08AB8A9C;
    }
L_08AB8A9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08AB8AD4;
      }
      goto L_08AB8AA4;
    }
L_08AB8AA4:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AB8A9C;
      }
      goto L_08AB8AAC;
    }
L_08AB8AAC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8A9C;
      }
      goto L_08AB8AB8;
    }
L_08AB8AB8:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AB8AA4;
      }
      goto L_08AB8AD4;
    }
L_08AB8AD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8ADC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB8B0Cu);
    ctx.gpr[18] = (0u | 0u);
    goto L_08AB8A34;
L_08AB8B0C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB8B18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB8A34;
L_08AB8B18:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB8B34;
      }
      goto L_08AB8B24;
    }
L_08AB8B24:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB8B40;
      }
      goto L_08AB8B2C;
    }
L_08AB8B2C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8B40;
      }
      goto L_08AB8B34;
    }
L_08AB8B34:
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB8B48;
      }
      goto L_08AB8B40;
    }
L_08AB8B40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB8B8C;
      }
      goto L_08AB8B48;
    }
L_08AB8B48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB8B88;
      }
      goto L_08AB8B50;
    }
L_08AB8B50:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8B88;
      }
      goto L_08AB8B58;
    }
L_08AB8B58:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB8B80;
      }
      goto L_08AB8B68;
    }
L_08AB8B68:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB8B48;
      }
      goto L_08AB8B80;
    }
L_08AB8B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB8B8C;
      }
      goto L_08AB8B88;
    }
L_08AB8B88:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AB8B8C;
L_08AB8B8C:
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
L_08AB8BAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[11] = (2240u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-27808));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[11] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (2240u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_08AB8BC8;
L_08AB8BC8:
    ctx.gpr[2] = (ctx.gpr[3] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[11]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8CBC;
      }
      goto L_08AB8BE4;
    }
L_08AB8BE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8CBC;
      }
      goto L_08AB8C00;
    }
L_08AB8C00:
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[11]);
    goto L_08AB8C14;
L_08AB8C14:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8CB0;
      }
      goto L_08AB8C1C;
    }
L_08AB8C1C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AB8CB0;
      }
      goto L_08AB8C28;
    }
L_08AB8C28:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[12]);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[13]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[12]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[2] + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AB8C14;
      }
      goto L_08AB8CB0;
    }
L_08AB8CB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08AB8CBC;
L_08AB8CBC:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[3] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8BC8;
      }
      goto L_08AB8CD0;
    }
L_08AB8CD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26272)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8DF8;
      }
      goto L_08AB8CDC;
    }
L_08AB8CDC:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26272));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8DF8;
      }
      goto L_08AB8CFC;
    }
L_08AB8CFC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26272), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AB8D14;
L_08AB8D14:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8DAC;
      }
      goto L_08AB8D1C;
    }
L_08AB8D1C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AB8DAC;
      }
      goto L_08AB8D28;
    }
L_08AB8D28:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), ctx.gpr[11]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AB8D14;
      }
      goto L_08AB8DAC;
    }
L_08AB8DAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26272)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8DF8;
      }
      goto L_08AB8DC4;
    }
L_08AB8DC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x08AB8DF8u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_08ABAB74;
L_08AB8DF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8E04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB8E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem) && ctx.pc == 0x08AB8E28u) goto L_08AB8E28;
    return;
L_08AB8E28:
    ctx.gpr[18] = (2240u << 16u);
    ctx.gpr[17] = (2240u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-27808));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-26272));
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
    goto L_08AB8E40;
L_08AB8E40:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08AB8E70u);
    ctx.gpr[11] = (ctx.gpr[29] | 0u);
    goto L_08ABAD24;
L_08AB8E70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08AB8E7Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB96BC;
L_08AB8E7C:
    ctx.gpr[31] = (0x08AB8E84u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB9A5C;
L_08AB8E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08AB8E9C;
    }
    goto L_08AB8E90;
L_08AB8E90:
    ctx.gpr[31] = (0x08AB8E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8E98u) goto L_08AB8E98;
    return;
L_08AB8E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AB8E9C;
L_08AB8E9C:
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB8EA8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 618u, 0x089BAEB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8EA8u) goto L_08AB8EA8;
    return;
L_08AB8EA8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
      if (branch_taken) {
          goto L_08AB8E40;
      }
      goto L_08AB8EBC;
    }
L_08AB8EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26272)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08AB8EE0u);
    ctx.gpr[11] = (ctx.gpr[29] | 0u);
    goto L_08ABAD24;
L_08AB8EE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08AB8EECu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB96BC;
L_08AB8EEC:
    ctx.gpr[31] = (0x08AB8EF4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB9A5C;
L_08AB8EF4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08AB8F10;
    }
    goto L_08AB8F00;
L_08AB8F00:
    ctx.gpr[31] = (0x08AB8F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8F08u) goto L_08AB8F08;
    return;
L_08AB8F08:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08AB8F10;
L_08AB8F10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB8F1Cu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 676u, 0x089BB208u>(ctx, &aot_mem) && ctx.pc == 0x08AB8F1Cu) goto L_08AB8F1C;
    return;
L_08AB8F1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8F3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB8F6Cu);
    ctx.gpr[6] = (0u | 256u);
    goto L_08AB8A5C;
L_08AB8F6C:
    ctx.gpr[31] = (0x08AB8F74u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB9A5C;
L_08AB8F74:
    ctx.gpr[31] = (0x08AB8F7Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB8A34;
L_08AB8F7C:
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26272));
    goto L_08AB8F8C;
L_08AB8F8C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08AB8FC0;
      }
      goto L_08AB8F94;
    }
L_08AB8F94:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8FC0;
      }
      goto L_08AB8FAC;
    }
L_08AB8FAC:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB8F8C;
      }
      goto L_08AB8FC0;
    }
L_08AB8FC0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08AB9050;
      }
      goto L_08AB8FC8;
    }
L_08AB8FC8:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_08AB9050;
      }
      goto L_08AB900C;
    }
L_08AB900C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26272)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x08AB9050u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_08ABAB74;
L_08AB9050:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9068:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1056));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB90A8u);
    ctx.gpr[6] = (0u | 256u);
    goto L_08AB8A5C;
L_08AB90A8:
    ctx.gpr[31] = (0x08AB90B0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB9A5C;
L_08AB90B0:
    ctx.gpr[31] = (0x08AB90B8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB8A34;
L_08AB90B8:
    ctx.gpr[5] = (2240u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26272), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26272));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AB9140;
      }
      goto L_08AB90FC;
    }
L_08AB90FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26272)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x08AB9140u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_08ABAB74;
L_08AB9140:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9160:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB9190u);
    ctx.gpr[6] = (0u | 256u);
    goto L_08AB8A5C;
L_08AB9190:
    ctx.gpr[31] = (0x08AB9198u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB9A5C;
L_08AB9198:
    ctx.gpr[31] = (0x08AB91A0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB8A34;
L_08AB91A0:
    ctx.gpr[6] = (2240u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26272)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26272));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB927C;
      }
      goto L_08AB91B4;
    }
L_08AB91B4:
    ctx.gpr[7] = (0u | 7u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
    goto L_08AB91C0;
L_08AB91C0:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08AB91C0;
      }
      goto L_08AB9248;
    }
L_08AB9248:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), 0u);
      if (branch_taken) {
          goto L_08AB92D0;
      }
      goto L_08AB927C;
    }
L_08AB927C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-26272), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB92D0u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08ABAB74;
L_08AB92D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB92E8:
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27808));
    goto L_08AB92F4;
L_08AB92F4:
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
    goto L_08AB9308;
L_08AB9308:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08AB9308;
      }
      goto L_08AB9338;
    }
L_08AB9338:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB92F4;
      }
      goto L_08AB9350;
    }
L_08AB9350:
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26272));
    goto L_08AB935C;
L_08AB935C:
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB935C;
      }
      goto L_08AB938C;
    }
L_08AB938C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9394:
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26272));
    goto L_08AB93A0;
L_08AB93A0:
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB93A0;
      }
      goto L_08AB93D0;
    }
L_08AB93D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB93D8:
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27808));
    goto L_08AB93E4;
L_08AB93E4:
    ctx.gpr[5] = (ctx.gpr[7] << 6u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
    goto L_08AB93F8;
L_08AB93F8:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
      if (branch_taken) {
          goto L_08AB93F8;
      }
      goto L_08AB9428;
    }
L_08AB9428:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB93E4;
      }
      goto L_08AB9440;
    }
L_08AB9440:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB9478u);
    ctx.gpr[6] = (0u | 256u);
    goto L_08AB8A5C;
L_08AB9478:
    ctx.gpr[31] = (0x08AB9480u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB9A5C;
L_08AB9480:
    ctx.gpr[31] = (0x08AB9488u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB8A34;
L_08AB9488:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB94A4;
      }
      goto L_08AB9494;
    }
L_08AB9494:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_08AB94A4;
      }
      goto L_08AB949C;
    }
L_08AB949C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
      if (branch_taken) {
          goto L_08AB94AC;
      }
      goto L_08AB94A4;
    }
L_08AB94A4:
    ctx.gpr[16] = (0u | 4900u);
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    goto L_08AB94AC;
L_08AB94AC:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27808));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB9524;
      }
      goto L_08AB9500;
    }
L_08AB9500:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AB9524u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08ABAB74;
L_08AB9524:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB953C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB956Cu);
    ctx.gpr[6] = (0u | 256u);
    goto L_08AB8A5C;
L_08AB956C:
    ctx.gpr[31] = (0x08AB9574u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB9A5C;
L_08AB9574:
    ctx.gpr[31] = (0x08AB957Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB8A34;
L_08AB957C:
    ctx.gpr[5] = (ctx.gpr[18] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27808));
      if (branch_taken) {
          goto L_08AB95A8;
      }
      goto L_08AB9598;
    }
L_08AB9598:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_08AB95A8;
      }
      goto L_08AB95A0;
    }
L_08AB95A0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB95AC;
      }
      goto L_08AB95A8;
    }
L_08AB95A8:
    ctx.gpr[16] = (0u | 4900u);
    goto L_08AB95AC;
L_08AB95AC:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AB95B4;
L_08AB95B4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08AB95EC;
      }
      goto L_08AB95BC;
    }
L_08AB95BC:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB95EC;
      }
      goto L_08AB95D8;
    }
L_08AB95D8:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB95B4;
      }
      goto L_08AB95EC;
    }
L_08AB95EC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_08AB9668;
      }
      goto L_08AB95F4;
    }
L_08AB95F4:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB9668;
      }
      goto L_08AB9644;
    }
L_08AB9644:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AB9668u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08ABAB74;
L_08AB9668:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9680:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18024));
    goto L_08AB968C;
L_08AB968C:
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB968C;
      }
      goto L_08AB96B4;
    }
L_08AB96B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB96BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-512));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB96EC;
      }
      goto L_08AB96C8;
    }
L_08AB96C8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB96EC;
      }
      goto L_08AB96D0;
    }
L_08AB96D0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB96F4;
      }
      goto L_08AB96E4;
    }
L_08AB96E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9708;
      }
      goto L_08AB96EC;
    }
L_08AB96EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB986C;
      }
      goto L_08AB96F4;
    }
L_08AB96F4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
      if (branch_taken) {
          goto L_08AB96F4;
      }
      goto L_08AB9708;
    }
L_08AB9708:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB972C;
      }
      goto L_08AB9718;
    }
L_08AB9718:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
      if (branch_taken) {
          goto L_08AB9718;
      }
      goto L_08AB972C;
    }
L_08AB972C:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB97FC;
      }
      goto L_08AB9744;
    }
L_08AB9744:
    ctx.gpr[2] = (0u | 126u);
    ctx.gpr[11] = (0u | 97u);
    goto L_08AB974C;
L_08AB974C:
    ctx.gpr[3] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[3] = (ctx.gpr[4] + ctx.gpr[3]);
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB97C4;
      }
      goto L_08AB9760;
    }
L_08AB9760:
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08AB97C4;
      }
      goto L_08AB976C;
    }
L_08AB976C:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB97C4;
      }
      goto L_08AB9778;
    }
L_08AB9778:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(3));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
      if (branch_taken) {
          goto L_08AB97F4;
      }
      goto L_08AB978C;
    }
L_08AB978C:
    ctx.gpr[7] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[29] + ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[3] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
      if (branch_taken) {
          goto L_08AB978C;
      }
      goto L_08AB97BC;
    }
L_08AB97BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB97F4;
      }
      goto L_08AB97C4;
    }
L_08AB97C4:
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[29] + ctx.gpr[3]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    aot_mem.aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB97F4;
      }
      goto L_08AB97F4;
    }
L_08AB97F4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB974C;
      }
      goto L_08AB97FC;
    }
L_08AB97FC:
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9840;
      }
      goto L_08AB9818;
    }
L_08AB9818:
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9818;
      }
      goto L_08AB9840;
    }
L_08AB9840:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB986C;
      }
      goto L_08AB984C;
    }
L_08AB984C:
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB984C;
      }
      goto L_08AB986C;
    }
L_08AB986C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9874:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB98A8u);
    ctx.gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB98A8u) goto L_08AB98A8;
    return;
L_08AB98A8:
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AB98B8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB98B8u) goto L_08AB98B8;
    return;
L_08AB98B8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(150)));
    ctx.gpr[4] = (0u | 126u);
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_08AB9988;
      }
      goto L_08AB98D0;
    }
L_08AB98D0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12184)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB98E8:
    ctx.gpr[6] = (0u | 48u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB98F8;
    }
L_08AB98F8:
    ctx.gpr[6] = (0u | 49u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9908;
    }
L_08AB9908:
    ctx.gpr[6] = (0u | 50u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9918;
    }
L_08AB9918:
    ctx.gpr[6] = (0u | 51u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9928;
    }
L_08AB9928:
    ctx.gpr[6] = (0u | 52u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9938;
    }
L_08AB9938:
    ctx.gpr[6] = (0u | 53u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9948;
    }
L_08AB9948:
    ctx.gpr[6] = (0u | 54u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9958;
    }
L_08AB9958:
    ctx.gpr[6] = (0u | 55u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9968;
    }
L_08AB9968:
    ctx.gpr[6] = (0u | 56u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9978;
    }
L_08AB9978:
    ctx.gpr[6] = (0u | 57u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9988;
    }
L_08AB9988:
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AB998C;
L_08AB998C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB99A0;
      }
      goto L_08AB9994;
    }
L_08AB9994:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB9994;
      }
      goto L_08AB99A0;
    }
L_08AB99A0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB99CC;
      }
      goto L_08AB99AC;
    }
L_08AB99AC:
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB99AC;
      }
      goto L_08AB99CC;
    }
L_08AB99CC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB99FC;
      }
      goto L_08AB99D4;
    }
L_08AB99D4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AB99E0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AB99E0u) goto L_08AB99E0;
    return;
L_08AB99E0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB99F8;
      }
      goto L_08AB99EC;
    }
L_08AB99EC:
    ctx.gpr[31] = (0x08AB99F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB99F4u) goto L_08AB99F4;
    return;
L_08AB99F4:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    goto L_08AB99F8;
L_08AB99F8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AB99FC;
L_08AB99FC:
    ctx.gpr[31] = (0x08AB9A04u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 300u, 0x089F5A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB9A04u) goto L_08AB9A04;
    return;
L_08AB9A04:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB9A10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AB9A10u) goto L_08AB9A10;
    return;
L_08AB9A10:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9A3C;
      }
      goto L_08AB9A20;
    }
L_08AB9A20:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9A20;
      }
      goto L_08AB9A3C;
    }
L_08AB9A3C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9A5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1120));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB9A9C;
      }
      goto L_08AB9A88;
    }
L_08AB9A88:
    ctx.gpr[31] = (0x08AB9A90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB8A34;
L_08AB9A90:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB9AA4;
      }
      goto L_08AB9A9C;
    }
L_08AB9A9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9C4C;
      }
      goto L_08AB9AA4;
    }
L_08AB9AA4:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(572), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9AA4;
      }
      goto L_08AB9AC4;
    }
L_08AB9AC4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB9BD0;
      }
      goto L_08AB9AD4;
    }
L_08AB9AD4:
    ctx.gpr[20] = (0u | 126u);
    ctx.gpr[21] = (0u | 107u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(572));
    goto L_08AB9AE0;
L_08AB9AE0:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AB9B9C;
      }
      goto L_08AB9AF4;
    }
L_08AB9AF4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AB9B9C;
      }
      goto L_08AB9B00;
    }
L_08AB9B00:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AB9B9C;
      }
      goto L_08AB9B0C;
    }
L_08AB9B0C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB9B24u);
    ctx.gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB9B24u) goto L_08AB9B24;
    return;
L_08AB9B24:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB9B34u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08AB9874;
L_08AB9B34:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[31] = (0x08AB9B4Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AB8A34;
L_08AB9B4C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB9BC8;
      }
      goto L_08AB9B60;
    }
L_08AB9B60:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(572)));
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[9] = (ctx.gpr[29] + ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(572), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
      if (branch_taken) {
          goto L_08AB9B60;
      }
      goto L_08AB9B94;
    }
L_08AB9B94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9BC8;
      }
      goto L_08AB9B9C;
    }
L_08AB9B9C:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    goto L_08AB9BC8;
L_08AB9BC8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9AE0;
      }
      goto L_08AB9BD0;
    }
L_08AB9BD0:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x08AB9BE4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08AB8A34;
L_08AB9BE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9C20;
      }
      goto L_08AB9BF8;
    }
L_08AB9BF8:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9BF8;
      }
      goto L_08AB9C20;
    }
L_08AB9C20:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9C4C;
      }
      goto L_08AB9C2C;
    }
L_08AB9C2C:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9C2C;
      }
      goto L_08AB9C4C;
    }
L_08AB9C4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9C74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[23]);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB9CE4u);
    ctx.gpr[11] = (ctx.gpr[29] | 0u);
    goto L_08ABAD24;
L_08AB9CE4:
    ctx.gpr[31] = (0x08AB9CECu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB9A5C;
L_08AB9CEC:
    ctx.gpr[31] = (0x08AB9CF4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB8A34;
L_08AB9CF4:
    ctx.gpr[6] = (2240u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26272));
    goto L_08AB9D04;
L_08AB9D04:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08AB9D38;
      }
      goto L_08AB9D0C;
    }
L_08AB9D0C:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9D38;
      }
      goto L_08AB9D24;
    }
L_08AB9D24:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB9D04;
      }
      goto L_08AB9D38;
    }
L_08AB9D38:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08AB9DB8;
      }
      goto L_08AB9D40;
    }
L_08AB9D40:
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_08AB9DB8;
      }
      goto L_08AB9D80;
    }
L_08AB9D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26272)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x08AB9DB8u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_08ABAB74;
L_08AB9DB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9DE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[11] | 0u);
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB9E64u);
    ctx.gpr[11] = (ctx.gpr[29] | 0u);
    goto L_08ABAD24;
L_08AB9E64:
    ctx.gpr[31] = (0x08AB9E6Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB9A5C;
L_08AB9E6C:
    ctx.gpr[31] = (0x08AB9E74u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB8A34;
L_08AB9E74:
    ctx.gpr[5] = (2240u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26272), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26272));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_08AB9EF8;
      }
      goto L_08AB9EB4;
    }
L_08AB9EB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26272)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x08AB9EF8u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_08ABAB74;
L_08AB9EF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9F28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[23]);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB9F98u);
    ctx.gpr[11] = (ctx.gpr[29] | 0u);
    goto L_08ABAD24;
L_08AB9F98:
    ctx.gpr[31] = (0x08AB9FA0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB9A5C;
L_08AB9FA0:
    ctx.gpr[31] = (0x08AB9FA8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB8A34;
L_08AB9FA8:
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26272)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26272));
      if (branch_taken) {
          goto L_08ABA080;
      }
      goto L_08AB9FB8;
    }
L_08AB9FB8:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    goto L_08AB9FC4;
L_08AB9FC4:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08AB9FC4;
      }
      goto L_08ABA04C;
    }
L_08ABA04C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), 0u);
      if (branch_taken) {
          goto L_08ABA0D4;
      }
      goto L_08ABA080;
    }
L_08ABA080:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26272), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08ABA0D4u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08ABAB74;
L_08ABA0D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA104:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[30]);
    ctx.gpr[16] = (ctx.gpr[11] | 0u);
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[30] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABA174u);
    ctx.gpr[11] = (ctx.gpr[29] | 0u);
    goto L_08ABAD24;
L_08ABA174:
    ctx.gpr[31] = (0x08ABA17Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB9A5C;
L_08ABA17C:
    ctx.gpr[31] = (0x08ABA184u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB8A34;
L_08ABA184:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ABA1A0;
      }
      goto L_08ABA190;
    }
L_08ABA190:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_08ABA1A0;
      }
      goto L_08ABA198;
    }
L_08ABA198:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[30] << 6u);
      if (branch_taken) {
          goto L_08ABA1A8;
      }
      goto L_08ABA1A0;
    }
L_08ABA1A0:
    ctx.gpr[21] = (0u | 4900u);
    ctx.gpr[4] = (ctx.gpr[30] << 6u);
    goto L_08ABA1A8;
L_08ABA1A8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27808));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA21C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[23]);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABA28Cu);
    ctx.gpr[11] = (ctx.gpr[29] | 0u);
    goto L_08ABAD24;
L_08ABA28C:
    ctx.gpr[31] = (0x08ABA294u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB9A5C;
L_08ABA294:
    ctx.gpr[31] = (0x08ABA29Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB8A34;
L_08ABA29C:
    ctx.gpr[4] = (ctx.gpr[23] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27808));
      if (branch_taken) {
          goto L_08ABA2C8;
      }
      goto L_08ABA2B8;
    }
L_08ABA2B8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_08ABA2C8;
      }
      goto L_08ABA2C0;
    }
L_08ABA2C0:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ABA2CC;
      }
      goto L_08ABA2C8;
    }
L_08ABA2C8:
    ctx.gpr[17] = (0u | 4900u);
    goto L_08ABA2CC;
L_08ABA2CC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    goto L_08ABA2D4;
L_08ABA2D4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
      if (branch_taken) {
          goto L_08ABA30C;
      }
      goto L_08ABA2DC;
    }
L_08ABA2DC:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA30C;
      }
      goto L_08ABA2F8;
    }
L_08ABA2F8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABA2D4;
      }
      goto L_08ABA30C;
    }
L_08ABA30C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
      if (branch_taken) {
          goto L_08ABA354;
      }
      goto L_08ABA314;
    }
L_08ABA314:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    goto L_08ABA354;
L_08ABA354:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1056));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABA3BCu);
    ctx.gpr[6] = (0u | 256u);
    goto L_08AB8A5C;
L_08ABA3BC:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ABA3C8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AB96BC;
L_08ABA3C8:
    ctx.gpr[31] = (0x08ABA3D0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB9A5C;
L_08ABA3D0:
    ctx.gpr[31] = (0x08ABA3D8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB8A34;
L_08ABA3D8:
    ctx.gpr[4] = (2240u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26272), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26272));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08ABA434u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    goto L_08ABAB74;
L_08ABA434:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA450:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2240u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-26272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    goto L_08ABA47C;
L_08ABA47C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08ABA48C;
L_08ABA48C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
      if (branch_taken) {
          goto L_08ABA51C;
      }
      goto L_08ABA494;
    }
L_08ABA494:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA51C;
      }
      goto L_08ABA4AC;
    }
L_08ABA4AC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA51C;
      }
      goto L_08ABA4B4;
    }
L_08ABA4B4:
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_08ABA4C0;
L_08ABA4C0:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08ABA4FC;
      }
      goto L_08ABA4C8;
    }
L_08ABA4C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA4FC;
      }
      goto L_08ABA4D0;
    }
L_08ABA4D0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABA4F4;
      }
      goto L_08ABA4E4;
    }
L_08ABA4E4:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA4F4;
      }
      goto L_08ABA4EC;
    }
L_08ABA4EC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08ABA4F4;
L_08ABA4F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA4C0;
      }
      goto L_08ABA4FC;
    }
L_08ABA4FC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA514;
      }
      goto L_08ABA504;
    }
L_08ABA504:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    goto L_08ABA514;
L_08ABA514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA48C;
      }
      goto L_08ABA51C;
    }
L_08ABA51C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA6DC;
      }
      goto L_08ABA524;
    }
L_08ABA524:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA618;
      }
      goto L_08ABA52C;
    }
L_08ABA52C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-26272), 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08ABA540;
L_08ABA540:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA5D8;
      }
      goto L_08ABA548;
    }
L_08ABA548:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08ABA5D8;
      }
      goto L_08ABA554;
    }
L_08ABA554:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 7 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08ABA540;
      }
      goto L_08ABA5D8;
    }
L_08ABA5D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26272)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA6DC;
      }
      goto L_08ABA5F0;
    }
L_08ABA5F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08ABA610u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    goto L_08ABAB74;
L_08ABA610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA6DC;
      }
      goto L_08ABA618;
    }
L_08ABA618:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[19]);
    goto L_08ABA640;
L_08ABA640:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA6D8;
      }
      goto L_08ABA648;
    }
L_08ABA648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08ABA6D8;
      }
      goto L_08ABA654;
    }
L_08ABA654:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08ABA640;
      }
      goto L_08ABA6D8;
    }
L_08ABA6D8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    goto L_08ABA6DC;
L_08ABA6DC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA47C;
      }
      goto L_08ABA6E4;
    }
L_08ABA6E4:
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
L_08ABA704:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2240u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[2] = (0u | 4u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-27808));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    goto L_08ABA73C;
L_08ABA73C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABA7F8;
      }
      goto L_08ABA744;
    }
L_08ABA744:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA7F8;
      }
      goto L_08ABA74C;
    }
L_08ABA74C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_08ABA7F8;
      }
      goto L_08ABA754;
    }
L_08ABA754:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[5] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[18]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA7C0;
      }
      goto L_08ABA77C;
    }
L_08ABA77C:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_08ABA788;
L_08ABA788:
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08ABA7C0;
      }
      goto L_08ABA790;
    }
L_08ABA790:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA7C0;
      }
      goto L_08ABA798;
    }
L_08ABA798:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABA7B8;
      }
      goto L_08ABA7AC;
    }
L_08ABA7AC:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA7B8;
      }
      goto L_08ABA7B4;
    }
L_08ABA7B4:
    ctx.gpr[6] = (0u | 1u);
    goto L_08ABA7B8;
L_08ABA7B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA788;
      }
      goto L_08ABA7C0;
    }
L_08ABA7C0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA7F0;
      }
      goto L_08ABA7C8;
    }
L_08ABA7C8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABA7F0;
      }
      goto L_08ABA7DC;
    }
L_08ABA7DC:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[7] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    goto L_08ABA7F0;
L_08ABA7F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA73C;
      }
      goto L_08ABA7F8;
    }
L_08ABA7F8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA9E4;
      }
      goto L_08ABA800;
    }
L_08ABA800:
    ctx.gpr[17] = (ctx.gpr[16] << 6u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08ABA914;
      }
      goto L_08ABA814;
    }
L_08ABA814:
    ctx.gpr[5] = (2279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17968));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_08ABA850;
      }
      goto L_08ABA840;
    }
L_08ABA840:
    ctx.gpr[31] = (0x08ABA848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08ABA848u) goto L_08ABA848;
    return;
L_08ABA848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[6] = (ctx.gpr[16] & 65535u);
    goto L_08ABA850;
L_08ABA850:
    ctx.gpr[31] = (0x08ABA858u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 618u, 0x089BAEB8u>(ctx, &aot_mem) && ctx.pc == 0x08ABA858u) goto L_08ABA858;
    return;
L_08ABA858:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_08ABA868;
L_08ABA868:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA904;
      }
      goto L_08ABA870;
    }
L_08ABA870:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08ABA904;
      }
      goto L_08ABA87C;
    }
L_08ABA87C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ABA868;
      }
      goto L_08ABA904;
    }
L_08ABA904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABA9E4;
      }
      goto L_08ABA914;
    }
L_08ABA914:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[18]);
    goto L_08ABA944;
L_08ABA944:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA9E0;
      }
      goto L_08ABA94C;
    }
L_08ABA94C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08ABA9E0;
      }
      goto L_08ABA958;
    }
L_08ABA958:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ABA944;
      }
      goto L_08ABA9E0;
    }
L_08ABA9E0:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    goto L_08ABA9E4;
L_08ABA9E4:
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
L_08ABAA04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27808));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAA40;
      }
      goto L_08ABAA38;
    }
L_08ABAA38:
    ctx.gpr[31] = (0x08ABAA40u);
    // nop
    goto L_08ABA704;
L_08ABAA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08ABAA58;
    }
    goto L_08ABAA4C;
L_08ABAA4C:
    ctx.gpr[31] = (0x08ABAA54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08ABAA54u) goto L_08ABAA54;
    return;
L_08ABAA54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08ABAA58;
L_08ABAA58:
    ctx.gpr[6] = (ctx.gpr[16] & 65535u);
    ctx.gpr[31] = (0x08ABAA64u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 618u, 0x089BAEB8u>(ctx, &aot_mem) && ctx.pc == 0x08ABAA64u) goto L_08ABAA64;
    return;
L_08ABAA64:
    ctx.gpr[5] = (2279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17968));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABAA8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABAA9Cu);
    // nop
    goto L_08AB92E8;
L_08ABAA9C:
    ctx.gpr[31] = (0x08ABAAA4u);
    // nop
    goto L_08AB9680;
L_08ABAAA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAAB8;
      }
      goto L_08ABAAB0;
    }
L_08ABAAB0:
    ctx.gpr[31] = (0x08ABAAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08ABAAB8u) goto L_08ABAAB8;
    return;
L_08ABAAB8:
    ctx.gpr[31] = (0x08ABAAC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 573u, 0x089BAB28u>(ctx, &aot_mem) && ctx.pc == 0x08ABAAC0u) goto L_08ABAAC0;
    return;
L_08ABAAC0:
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[31] = (0x08ABAACCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8968));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 646u, 0x0893ABACu>(ctx, &aot_mem) && ctx.pc == 0x08ABAACCu) goto L_08ABAACC;
    return;
L_08ABAACC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABAAD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[17]);
    ctx.gpr[17] = (2240u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-26272));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAB60;
      }
      goto L_08ABAAFC;
    }
L_08ABAAFC:
    ctx.gpr[31] = (0x08ABAB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem) && ctx.pc == 0x08ABAB04u) goto L_08ABAB04;
    return;
L_08ABAB04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26272)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08ABAB28u);
    ctx.gpr[11] = (ctx.gpr[29] | 0u);
    goto L_08ABAD24;
L_08ABAB28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08ABAB34u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB96BC;
L_08ABAB34:
    ctx.gpr[31] = (0x08ABAB3Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB9A5C;
L_08ABAB3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08ABAB54;
    }
    goto L_08ABAB48;
L_08ABAB48:
    ctx.gpr[31] = (0x08ABAB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08ABAB50u) goto L_08ABAB50;
    return;
L_08ABAB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08ABAB54;
L_08ABAB54:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08ABAB60u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 676u, 0x089BB208u>(ctx, &aot_mem) && ctx.pc == 0x08ABAB60u) goto L_08ABAB60;
    return;
L_08ABAB60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABAB74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (2238u << 16u);
    ctx.gpr[2] = (ctx.gpr[3] + static_cast<std::uint32_t>(18024));
    ctx.gpr[14] = (ctx.gpr[2] | 0u);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08ABAB90;
L_08ABAB90:
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[15] = (static_cast<std::int32_t>(ctx.gpr[12]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABAC68;
      }
      goto L_08ABAB98;
    }
L_08ABAB98:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAC68;
      }
      goto L_08ABABA0;
    }
L_08ABABA0:
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ABAC50;
      }
      goto L_08ABABA8;
    }
L_08ABABA8:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08ABAC50;
      }
      goto L_08ABABB4;
    }
L_08ABABB4:
    if (ctx.gpr[12] == 0u) {
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(18024), ctx.gpr[4]);
        goto L_08ABAC30;
    }
    goto L_08ABABBC;
L_08ABABBC:
    ctx.gpr[13] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[13] << 5u);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[2]);
    goto L_08ABABC8;
L_08ABABC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) < 0;
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[13]) < 21 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABAC2C;
      }
      goto L_08ABABD0;
    }
L_08ABABD0:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAC2C;
      }
      goto L_08ABABD8;
    }
L_08ABABD8:
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAC2C;
      }
      goto L_08ABABE4;
    }
L_08ABABE4:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(32), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(36), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(40), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(44), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(48), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(52), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(56), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(60), ctx.gpr[15]);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_08ABABC8;
      }
      goto L_08ABAC2C;
    }
L_08ABAC2C:
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(18024), ctx.gpr[4]);
    goto L_08ABAC30;
L_08ABAC30:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08ABAD18;
      }
      goto L_08ABAC50;
    }
L_08ABAC50:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[12] & 65535u);
    ctx.gpr[14] = (ctx.gpr[12] << 5u);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABAB90;
      }
      goto L_08ABAC68;
    }
L_08ABAC68:
    if (ctx.gpr[12] == 0u) {
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(18024), ctx.gpr[4]);
        goto L_08ABACFC;
    }
    goto L_08ABAC70;
L_08ABAC70:
    ctx.gpr[13] = (ctx.gpr[12] | 0u);
    ctx.gpr[12] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    ctx.gpr[14] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[14];
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
      if (branch_taken) {
          goto L_08ABAC94;
      }
      goto L_08ABAC88;
    }
L_08ABAC88:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    goto L_08ABAC94;
L_08ABAC94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) < 0;
    ctx.gpr[13] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08ABACF8;
      }
      goto L_08ABAC9C;
    }
L_08ABAC9C:
    ctx.gpr[14] = (ctx.gpr[12] << 5u);
    ctx.gpr[15] = (ctx.gpr[14] + ctx.gpr[2]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(4)));
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[13]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(4), ctx.gpr[25]);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(12), ctx.gpr[24]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(16), ctx.gpr[25]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(24), ctx.gpr[24]);
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) >= 0;
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(28), ctx.gpr[15]);
      if (branch_taken) {
          goto L_08ABAC9C;
      }
      goto L_08ABACF8;
    }
L_08ABACF8:
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(18024), ctx.gpr[4]);
    goto L_08ABACFC;
L_08ABACFC:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    goto L_08ABAD18;
L_08ABAD18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABAD24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08ABADC4;
      }
      goto L_08ABAD74;
    }
L_08ABAD74:
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1856));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08ABAD8Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08ABAD8Cu) goto L_08ABAD8C;
    return;
L_08ABAD8C:
    ctx.gpr[31] = (0x08ABAD94u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08ABAD94u) goto L_08ABAD94;
    return;
L_08ABAD94:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(10));
    ctx.gpr[31] = (0x08ABADA4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem) && ctx.pc == 0x08ABADA4u) goto L_08ABADA4;
    return;
L_08ABADA4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABADCC;
      }
      goto L_08ABADBC;
    }
L_08ABADBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABADE8;
      }
      goto L_08ABADC4;
    }
L_08ABADC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08ABB01C;
      }
      goto L_08ABADCC;
    }
L_08ABADCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABADCC;
      }
      goto L_08ABADE8;
    }
L_08ABADE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABB010;
      }
      goto L_08ABADFC;
    }
L_08ABADFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    goto L_08ABAE08;
L_08ABAE08:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 126u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABAFD4;
      }
      goto L_08ABAE18;
    }
L_08ABAE18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ABAFD4;
      }
      goto L_08ABAE34;
    }
L_08ABAE34:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ABAFD4;
      }
      goto L_08ABAE40;
    }
L_08ABAE40:
    ctx.gpr[4] = (ctx.gpr[30] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAEA8;
      }
      goto L_08ABAE4C;
    }
L_08ABAE4C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ABAE80;
      }
      goto L_08ABAE58;
    }
L_08ABAE58:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08ABAE88;
      }
      goto L_08ABAE60;
    }
L_08ABAE60:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABAE90;
      }
      goto L_08ABAE68;
    }
L_08ABAE68:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08ABAE98;
      }
      goto L_08ABAE70;
    }
L_08ABAE70:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08ABAEA0;
      }
      goto L_08ABAE78;
    }
L_08ABAE78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAEA8;
      }
      goto L_08ABAE80;
    }
L_08ABAE80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAEA8;
      }
      goto L_08ABAE88;
    }
L_08ABAE88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAEA8;
      }
      goto L_08ABAE90;
    }
L_08ABAE90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAEA8;
      }
      goto L_08ABAE98;
    }
L_08ABAE98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAEA8;
      }
      goto L_08ABAEA0;
    }
L_08ABAEA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAEA8;
      }
      goto L_08ABAEA8;
    }
L_08ABAEA8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(6));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(6));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABAEF0;
      }
      goto L_08ABAEC8;
    }
L_08ABAEC8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10)));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABAEC8;
      }
      goto L_08ABAEF0;
    }
L_08ABAEF0:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAFB4;
      }
      goto L_08ABAF08;
    }
L_08ABAF08:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ABAF4C;
      }
      goto L_08ABAF14;
    }
L_08ABAF14:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08ABAF64;
      }
      goto L_08ABAF1C;
    }
L_08ABAF1C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABAF7C;
      }
      goto L_08ABAF24;
    }
L_08ABAF24:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08ABAF94;
      }
      goto L_08ABAF2C;
    }
L_08ABAF2C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08ABAFAC;
      }
      goto L_08ABAF34;
    }
L_08ABAF34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ABAF44u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08ABAF44u) goto L_08ABAF44;
    return;
L_08ABAF44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAFB4;
      }
      goto L_08ABAF4C;
    }
L_08ABAF4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ABAF5Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08ABAF5Cu) goto L_08ABAF5C;
    return;
L_08ABAF5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAFB4;
      }
      goto L_08ABAF64;
    }
L_08ABAF64:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ABAF74u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08ABAF74u) goto L_08ABAF74;
    return;
L_08ABAF74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAFB4;
      }
      goto L_08ABAF7C;
    }
L_08ABAF7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ABAF8Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08ABAF8Cu) goto L_08ABAF8C;
    return;
L_08ABAF8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAFB4;
      }
      goto L_08ABAF94;
    }
L_08ABAF94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ABAFA4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08ABAFA4u) goto L_08ABAFA4;
    return;
L_08ABAFA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAFB4;
      }
      goto L_08ABAFAC;
    }
L_08ABAFAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAFB4;
      }
      goto L_08ABAFB4;
    }
L_08ABAFB4:
    ctx.gpr[31] = (0x08ABAFBCu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08ABAFBCu) goto L_08ABAFBC;
    return;
L_08ABAFBC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(10));
    ctx.gpr[31] = (0x08ABAFCCu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem) && ctx.pc == 0x08ABAFCCu) goto L_08ABAFCC;
    return;
L_08ABAFCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB008;
      }
      goto L_08ABAFD4;
    }
L_08ABAFD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(2));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(2));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[20] = (ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
    goto L_08ABB008;
L_08ABB008:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAE08;
      }
      goto L_08ABB010;
    }
L_08ABB010:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08ABB01C;
L_08ABB01C:
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
L_08ABB04C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB054:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABB07Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB07Cu) goto L_08ABB07C;
    return;
L_08ABB07C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABB098;
      }
      goto L_08ABB088;
    }
L_08ABB088:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABB09C;
      }
      goto L_08ABB098;
    }
L_08ABB098:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08ABB09C;
L_08ABB09C:
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
L_08ABB0B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABB0D8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB0D8u) goto L_08ABB0D8;
    return;
L_08ABB0D8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ABB0F4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB0F4u) goto L_08ABB0F4;
    return;
L_08ABB0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB114:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABB138u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB138u) goto L_08ABB138;
    return;
L_08ABB138:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ABB154u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB154u) goto L_08ABB154;
    return;
L_08ABB154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB174:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABB198u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB198u) goto L_08ABB198;
    return;
L_08ABB198:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ABB1B4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB1B4u) goto L_08ABB1B4;
    return;
L_08ABB1B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB1DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABB200u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB200u) goto L_08ABB200;
    return;
L_08ABB200:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ABB21Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB21Cu) goto L_08ABB21C;
    return;
L_08ABB21C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABB268u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB268u) goto L_08ABB268;
    return;
L_08ABB268:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ABB284u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB284u) goto L_08ABB284;
    return;
L_08ABB284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB2AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABB2D0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB2D0u) goto L_08ABB2D0;
    return;
L_08ABB2D0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ABB2ECu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB2ECu) goto L_08ABB2EC;
    return;
L_08ABB2EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB314:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABB338u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB338u) goto L_08ABB338;
    return;
L_08ABB338:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ABB354u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB354u) goto L_08ABB354;
    return;
L_08ABB354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABB3A4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB3A4u) goto L_08ABB3A4;
    return;
L_08ABB3A4:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ABB3C0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB3C0u) goto L_08ABB3C0;
    return;
L_08ABB3C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB3E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABB40Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB40Cu) goto L_08ABB40C;
    return;
L_08ABB40C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ABB428u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB428u) goto L_08ABB428;
    return;
L_08ABB428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB454:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABB478u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB478u) goto L_08ABB478;
    return;
L_08ABB478:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ABB494u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB494u) goto L_08ABB494;
    return;
L_08ABB494:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB4BC:
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
    ctx.gpr[31] = (0x08ABB4ECu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB4ECu) goto L_08ABB4EC;
    return;
L_08ABB4EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB520;
      }
      goto L_08ABB518;
    }
L_08ABB518:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ABB568;
      }
      goto L_08ABB520;
    }
L_08ABB520:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB54C;
      }
      goto L_08ABB540;
    }
L_08ABB540:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ABB568;
      }
      goto L_08ABB54C;
    }
L_08ABB54C:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB568;
      }
      goto L_08ABB564;
    }
L_08ABB564:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABB568;
L_08ABB568:
    ctx.gpr[2] = (0u | 0u);
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
L_08ABB584:
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
    ctx.gpr[31] = (0x08ABB5B4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB5B4u) goto L_08ABB5B4;
    return;
L_08ABB5B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ABB5D0;
    }
    goto L_08ABB5D0;
L_08ABB5D0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB5F8;
      }
      goto L_08ABB5F0;
    }
L_08ABB5F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ABB640;
      }
      goto L_08ABB5F8;
    }
L_08ABB5F8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB624;
      }
      goto L_08ABB618;
    }
L_08ABB618:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ABB640;
      }
      goto L_08ABB624;
    }
L_08ABB624:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB640;
      }
      goto L_08ABB63C;
    }
L_08ABB63C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABB640;
L_08ABB640:
    ctx.gpr[2] = (0u | 0u);
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
L_08ABB65C:
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
    ctx.gpr[31] = (0x08ABB68Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB68Cu) goto L_08ABB68C;
    return;
L_08ABB68C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB6C4;
      }
      goto L_08ABB6BC;
    }
L_08ABB6BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ABB70C;
      }
      goto L_08ABB6C4;
    }
L_08ABB6C4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB6F0;
      }
      goto L_08ABB6E4;
    }
L_08ABB6E4:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ABB70C;
      }
      goto L_08ABB6F0;
    }
L_08ABB6F0:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB70C;
      }
      goto L_08ABB708;
    }
L_08ABB708:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABB70C;
L_08ABB70C:
    ctx.gpr[2] = (0u | 0u);
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
L_08ABB728:
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
    ctx.gpr[31] = (0x08ABB758u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB758u) goto L_08ABB758;
    return;
L_08ABB758:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08ABB774;
    }
    goto L_08ABB774;
L_08ABB774:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB79C;
      }
      goto L_08ABB794;
    }
L_08ABB794:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ABB7E4;
      }
      goto L_08ABB79C;
    }
L_08ABB79C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB7C8;
      }
      goto L_08ABB7BC;
    }
L_08ABB7BC:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ABB7E4;
      }
      goto L_08ABB7C8;
    }
L_08ABB7C8:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB7E4;
      }
      goto L_08ABB7E0;
    }
L_08ABB7E0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABB7E4;
L_08ABB7E4:
    ctx.gpr[2] = (0u | 0u);
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
L_08ABB800:
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
    ctx.gpr[31] = (0x08ABB830u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB830u) goto L_08ABB830;
    return;
L_08ABB830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB868;
      }
      goto L_08ABB860;
    }
L_08ABB860:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ABB8B0;
      }
      goto L_08ABB868;
    }
L_08ABB868:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB894;
      }
      goto L_08ABB888;
    }
L_08ABB888:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ABB8B0;
      }
      goto L_08ABB894;
    }
L_08ABB894:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB8B0;
      }
      goto L_08ABB8AC;
    }
L_08ABB8AC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABB8B0;
L_08ABB8B0:
    ctx.gpr[2] = (0u | 0u);
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
L_08ABB8CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABB8F4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB8F4u) goto L_08ABB8F4;
    return;
L_08ABB8F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB920;
      }
      goto L_08ABB900;
    }
L_08ABB900:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABB91C;
      }
      goto L_08ABB90C;
    }
L_08ABB90C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABB920;
      }
      goto L_08ABB91C;
    }
L_08ABB91C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    goto L_08ABB920;
L_08ABB920:
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
L_08ABB938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABB960u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB960u) goto L_08ABB960;
    return;
L_08ABB960:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB98C;
      }
      goto L_08ABB96C;
    }
L_08ABB96C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABB988;
      }
      goto L_08ABB978;
    }
L_08ABB978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABB98C;
      }
      goto L_08ABB988;
    }
L_08ABB988:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    goto L_08ABB98C;
L_08ABB98C:
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
L_08ABB9A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(535)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ABB9C0;
      }
      goto L_08ABB9BC;
    }
L_08ABB9BC:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8024), static_cast<std::uint8_t>(0u));
    goto L_08ABB9C0;
L_08ABB9C0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(7956));
    ctx.gpr[31] = (0x08ABB9CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 409u, 0x088626C0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB9CCu) goto L_08ABB9CC;
    return;
L_08ABB9CC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(7960));
    ctx.gpr[31] = (0x08ABB9D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 415u, 0x088626F8u>(ctx, &aot_mem) && ctx.pc == 0x08ABB9D8u) goto L_08ABB9D8;
    return;
L_08ABB9D8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(520), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB9F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABBA28u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABBA28u) goto L_08ABBA28;
    return;
L_08ABBA28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08ABBA38;
      }
      goto L_08ABBA34;
    }
L_08ABBA34:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08ABBA38;
L_08ABBA38:
    ctx.gpr[31] = (0x08ABBA40u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 611u, 0x08863470u>(ctx, &aot_mem) && ctx.pc == 0x08ABBA40u) goto L_08ABBA40;
    return;
L_08ABBA40:
    ctx.gpr[7] = (ctx.gpr[2] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABBA54u);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABBA54u) goto L_08ABBA54;
    return;
L_08ABBA54:
    ctx.gpr[2] = (0u | 0u);
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
L_08ABBA74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABBA9Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABBA9Cu) goto L_08ABBA9C;
    return;
L_08ABBA9C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(516));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABBAD8;
      }
      goto L_08ABBAC8;
    }
L_08ABBAC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABBADC;
      }
      goto L_08ABBAD8;
    }
L_08ABBAD8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08ABBADC;
L_08ABBADC:
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
L_08ABBAF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABBB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 575u, 0x0886309Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABBB04u) goto L_08ABBB04;
    return;
L_08ABBB04:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBB14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABBB38u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABBB38u) goto L_08ABBB38;
    return;
L_08ABBB38:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ABBB54u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABBB54u) goto L_08ABBB54;
    return;
L_08ABBB54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBB84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABBBA8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABBBA8u) goto L_08ABBBA8;
    return;
L_08ABBBA8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ABBBC4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABBBC4u) goto L_08ABBBC4;
    return;
L_08ABBBC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBBF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABBC18u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABBC18u) goto L_08ABBC18;
    return;
L_08ABBC18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABBC2Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABBC2Cu) goto L_08ABBC2C;
    return;
L_08ABBC2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBC54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABBC78u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABBC78u) goto L_08ABBC78;
    return;
L_08ABBC78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABBC8Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABBC8Cu) goto L_08ABBC8C;
    return;
L_08ABBC8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBCB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABBCC8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABBCC8u) goto L_08ABBCC8;
    return;
L_08ABBCC8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABBCE0;
      }
      goto L_08ABBCD8;
    }
L_08ABBCD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABBCE0;
      }
      goto L_08ABBCE0;
    }
L_08ABBCE0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBCF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABBD08u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABBD08u) goto L_08ABBD08;
    return;
L_08ABBD08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ABBD2C;
      }
      goto L_08ABBD24;
    }
L_08ABBD24:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08ABBD2C;
      }
      goto L_08ABBD2C;
    }
L_08ABBD2C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBD40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABBD68;
      }
      goto L_08ABBD60;
    }
L_08ABBD60:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ABBDB0;
      }
      goto L_08ABBD68;
    }
L_08ABBD68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(521)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABBD94;
      }
      goto L_08ABBD88;
    }
L_08ABBD88:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ABBDB0;
      }
      goto L_08ABBD94;
    }
L_08ABBD94:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBDB0;
      }
      goto L_08ABBDAC;
    }
L_08ABBDAC:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABBDB0;
L_08ABBDB0:
    ctx.gpr[31] = (0x08ABBDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 575u, 0x0886309Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABBDB8u) goto L_08ABBDB8;
    return;
L_08ABBDB8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBDC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABBDEC;
      }
      goto L_08ABBDE4;
    }
L_08ABBDE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ABBE34;
      }
      goto L_08ABBDEC;
    }
L_08ABBDEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(521)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABBE18;
      }
      goto L_08ABBE0C;
    }
L_08ABBE0C:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ABBE34;
      }
      goto L_08ABBE18;
    }
L_08ABBE18:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBE34;
      }
      goto L_08ABBE30;
    }
L_08ABBE30:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABBE34;
L_08ABBE34:
    ctx.gpr[31] = (0x08ABBE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 575u, 0x0886309Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABBE3Cu) goto L_08ABBE3C;
    return;
L_08ABBE3C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBE4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABBE74u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABBE74u) goto L_08ABBE74;
    return;
L_08ABBE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBEA4;
      }
      goto L_08ABBE88;
    }
L_08ABBE88:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBEA0;
      }
      goto L_08ABBE94;
    }
L_08ABBE94:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ABBEA4;
      }
      goto L_08ABBEA0;
    }
L_08ABBEA0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(0u));
    goto L_08ABBEA4;
L_08ABBEA4:
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
L_08ABBEBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABBEDCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABBEDCu) goto L_08ABBEDC;
    return;
L_08ABBEDC:
    ctx.gpr[31] = (0x08ABBEE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 611u, 0x08863470u>(ctx, &aot_mem) && ctx.pc == 0x08ABBEE4u) goto L_08ABBEE4;
    return;
L_08ABBEE4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(522), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBF00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(522)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBF24;
      }
      goto L_08ABBF14;
    }
L_08ABBF14:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[31] = (0x08ABBF24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21784));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 157u, 0x08864DF4u>(ctx, &aot_mem) && ctx.pc == 0x08ABBF24u) goto L_08ABBF24;
    return;
L_08ABBF24:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBF34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABBF48u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABBF48u) goto L_08ABBF48;
    return;
L_08ABBF48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7968), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBF64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABBF8Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABBF8Cu) goto L_08ABBF8C;
    return;
L_08ABBF8C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(516));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBFCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABBFECu);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABBFECu) goto L_08ABBFEC;
    return;
L_08ABBFEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 1u, 0x08ABC000u>(ctx, &aot_mem); return;
    }
    goto L_08ABBFF8;
L_08ABBFF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 2u, 0x08ABC004u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 1u, 0x08ABC000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0173(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0173_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_173(Runtime &runtime) {
    runtime.register_generated_unit(173u, 0x08AB8000u, 16384u, &recomp_unit_0173, &recomp_unit_0173_entry);
    runtime.register_function(0x08AB8004u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8014u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8028u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8048u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8050u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8070u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8078u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB808Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8094u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8104u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB810Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8110u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8118u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB812Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8138u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB815Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8164u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8188u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8190u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8204u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8228u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8230u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8254u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB825Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8270u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8278u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB828Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8298u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8310u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8318u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB832Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8334u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8348u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8354u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB835Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8364u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8378u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8380u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB838Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8404u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8410u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8418u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8420u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8434u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB843Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB84B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB84B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB84C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB84D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB84DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB84ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB851Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB852Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB853Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB854Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB855Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB856Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB857Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB858Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8598u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB85A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB85B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB85BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB85C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB85D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8604u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8614u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8624u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8634u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8644u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8654u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8664u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8674u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8680u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8690u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB869Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8700u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8710u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8720u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8730u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8740u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB874Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8754u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8760u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8790u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8798u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8814u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8844u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8854u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8864u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8874u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8884u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8894u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB88A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB891Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8924u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8948u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8964u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8970u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8984u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8998u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB89C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB89E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB89F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A20u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A5Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A9Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AA4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AD4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8ADCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B0Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B18u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B2Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B48u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B50u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B58u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B68u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C00u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C14u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8CB0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8CBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8CD0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8CDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8CFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D14u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8DACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8DC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8DF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E7Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E90u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E98u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E9Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8EA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8EBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8EE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8EECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8EF4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F00u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F7Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F94u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8FACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8FC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8FC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB900Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9050u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9068u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9140u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9160u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9190u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9198u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9248u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB927Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB92D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB92E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB92F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9308u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9338u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9350u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB935Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB938Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9394u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9428u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9440u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9448u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9478u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9480u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9488u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9494u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB949Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9500u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9524u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB953Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB956Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9574u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB957Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9598u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9644u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9668u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9680u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB968Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB96B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB96BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB96C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB96D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB96E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB96ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB96F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9708u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9718u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB972Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9744u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB974Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9760u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB976Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9778u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB978Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB97BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB97C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB97F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB97FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9818u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9840u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB984Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB986Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9874u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9908u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9918u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9928u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9938u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9948u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9958u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9968u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9978u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9988u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB998Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9994u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A20u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A5Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A90u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A9Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9AA4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9AC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9AD4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9AE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9AF4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B00u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B0Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B4Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B94u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B9Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9BC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9BD0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9BE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9BF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C20u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C2Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C4Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CF4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D0Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DE8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E64u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9F28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9F98u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9FA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9FA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9FB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9FC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA04Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA080u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA0D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA104u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA174u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA17Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA184u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA190u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA198u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA1A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA1A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA21Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA28Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA294u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA29Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA30Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA314u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA354u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA384u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA3BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA3C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA3D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA3D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA434u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA450u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA47Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA48Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA494u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA504u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA514u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA51Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA524u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA52Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA540u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA548u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA554u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA5D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA5F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA610u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA618u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA640u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA648u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA654u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA6D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA6DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA6E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA704u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA73Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA744u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA74Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA754u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA77Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA788u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA790u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA798u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA800u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA814u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA840u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA848u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA850u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA858u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA868u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA870u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA87Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA904u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA914u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA944u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA94Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA958u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA9E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA9E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA4Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA58u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA64u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA9Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAA4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAB0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAACCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAD8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB48u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB50u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB90u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB98u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABD0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABD8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC2Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC30u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC50u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC68u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC94u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC9Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABACF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABACFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD18u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD94u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADA4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADCCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADE8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE18u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE4Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE58u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE68u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE90u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE98u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEF0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF14u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF2Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF44u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF4Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF5Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF64u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF7Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF94u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFA4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFCCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFD4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB008u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB010u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB01Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB04Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB054u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB07Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB088u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB098u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB09Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB114u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB138u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB154u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB174u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB198u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB1B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB1DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB200u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB21Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB244u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB268u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB284u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB2ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB2D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB2ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB314u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB338u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB354u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB380u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB3A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB3C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB3E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB40Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB428u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB454u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB478u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB494u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB4BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB4ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB518u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB520u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB540u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB54Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB564u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB568u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB584u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB618u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB624u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB63Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB640u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB65Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB68Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB708u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB70Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB728u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB758u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB774u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB794u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB79Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB800u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB830u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB860u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB868u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB888u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB894u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB8ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB8B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB8CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB8F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB900u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB90Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB91Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB920u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB938u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB960u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB96Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB978u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB988u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB98Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB9A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB9BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB9C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB9CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB9D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB9F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA9Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBAC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBAD8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBADCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBAF4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB14u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBF4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC18u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC2Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBCB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBCC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBCD8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBCE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBCF4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD2Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD68u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD94u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDB0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE0Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE18u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE30u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE4Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE94u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEA4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF00u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF14u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF48u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF64u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBFCCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBFECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBFF8u, &recomp_unit_0173, "recomp_unit_0173");
}
} // namespace psprecomp
