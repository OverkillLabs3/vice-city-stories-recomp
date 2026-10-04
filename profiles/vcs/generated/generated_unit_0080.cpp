#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0080[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0,
    65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0,
    99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0,
    0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122,
    0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0,
    130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 137, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 146, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0,
    0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 163, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 167, 0, 168, 0, 169, 0, 0, 0, 170, 171, 0, 0, 172, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 178,
    179, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189,
    0, 190, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 198, 0, 199, 0, 200, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0,
    0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 217, 0, 218, 0, 219, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223,
    0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 239, 0, 0, 0,
    240, 0, 241, 0, 242, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0,
    0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 257, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 272, 0, 273, 0, 0, 0, 274, 0, 275, 0, 276, 0, 277, 0, 0, 0,
    278, 0, 279, 0, 280, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0,
    287, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 296,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 310, 0,
    0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 318, 0, 319, 320,
    0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 332, 0, 333, 334, 0, 0, 0, 0, 0, 335, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0,
    0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 347, 0, 348, 0, 349, 0, 350, 351, 0,
    0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 0, 357,
    0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0,
    0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0,
    0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0,
    0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 386, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0,
    0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    410, 411, 0, 0, 412, 413, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 421, 0, 0, 0, 422, 0, 0, 0, 423, 424, 0, 425, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0,
    0, 435, 0, 436, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0,
    444, 0, 445, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452,
    0, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 456, 457, 0, 0, 458, 0, 0, 459, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 466,
    0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 472, 0, 0, 473, 0, 474, 0, 0, 0, 0, 475,
    0, 0, 476, 0, 477, 0, 478, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482,
    0, 0, 483, 0, 0, 0, 484, 0, 485, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 490,
    0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 0,
    0, 498, 0, 499, 0, 0, 0, 0, 0, 500, 0, 501, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0,
    506, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 511, 0, 512, 0, 0, 513, 0, 0, 514, 0, 515, 0, 516,
    0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 526, 0, 527, 0,
    528, 0, 529, 0, 0, 530, 0, 531, 532, 0, 533, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 538, 0, 539, 0, 540, 0,
    541, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 547, 0, 0, 548, 0, 549, 0, 0, 0,
    0, 0, 0, 550, 0, 0, 551, 0, 552, 0, 553, 0, 554, 0, 0, 555, 0, 556, 0, 557, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562, 563, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565,
    0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0,
    573, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 0, 583, 0, 584, 585, 0, 0, 586, 0, 0,
    0, 0, 0, 0, 587, 0, 588, 0, 589, 0, 0, 0, 590, 0, 591, 0, 592, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 595,
    0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0,
    600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 604, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 607, 608, 609, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 616, 0, 617, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0,
    0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 626,
    0, 0, 627, 0, 0, 0, 0, 628, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0,
    0, 0, 0, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 0, 0, 641, 0, 642, 0, 643, 0, 644, 645, 0, 646,
    0, 647, 648, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0,
    656, 0, 0, 657, 0, 0, 0, 658, 0, 0, 659, 0, 0, 0, 660, 0, 0, 661, 0, 0, 0, 0, 662, 0, 663, 664, 0, 665, 0, 0, 0, 0,
    0, 666, 0, 0, 667, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 670, 0, 671, 0, 672, 0, 0, 673, 0, 674, 0, 675, 0, 676, 0, 0,
    0, 677, 0, 0, 678, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 683, 0, 684, 0, 685, 0, 686, 0,
    687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 693, 0, 694, 0, 695, 0, 0, 0, 0, 696, 0, 697, 0, 698, 0, 699, 0, 700, 0, 701, 0,
    702, 0, 703, 0, 0, 0, 0, 0, 704, 0, 705, 706, 0, 0, 0, 707, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 711, 0,
    0, 0, 0, 0, 0, 0, 712, 0, 713, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 719,
    0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 724, 0, 0, 0, 725, 0, 0, 0, 0, 726,
    0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 732, 0, 733, 0, 0, 734,
    0, 0, 735, 0, 736, 0, 0, 737, 0, 0, 0, 738, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0,
    741, 0, 0, 0, 0, 0, 0, 0, 742, 0, 743, 0, 0, 0, 0, 744, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 748, 0,
    749, 750, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 753, 0, 754, 0, 755, 0, 756, 0, 757,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 760, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 762, 0, 0, 763, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 767, 0, 768, 0, 769, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 771, 0, 0, 772, 0, 0, 773, 0, 774, 775, 0, 0, 0, 0, 776, 0, 0, 777, 0, 778, 0, 0,
    0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 781, 0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 784,
    0, 785, 0, 786, 0, 787, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 792, 0, 0, 0, 793, 0, 0, 794, 0,
    0, 0, 0, 0, 795, 0, 796, 0, 797, 0, 798, 0, 0, 799, 0, 800, 0, 0, 801, 0, 802, 0, 803, 0, 0, 0, 804, 0, 0, 0, 805, 0,
    0, 0, 0, 0, 806, 0, 807, 0, 0, 808, 0, 809, 0, 810, 0, 811, 0, 0, 0, 812, 0, 0, 0, 0, 813, 0, 0, 0, 0, 814, 0, 815,
    0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 818, 0, 819, 0, 0, 820, 821, 0, 822, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 0, 825, 0,
    826, 0, 0, 827, 0, 0, 828, 829, 0, 830, 0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 0, 833, 0, 834, 0, 0, 0, 0, 835, 0, 0, 836,
    0, 0, 837, 0, 838, 0, 839, 0, 0, 840, 0, 0, 841, 0, 842, 0, 843, 0, 844, 0, 0, 0, 845, 0, 0, 0, 0, 846, 0, 0, 0, 0,
    847, 0, 848, 0, 0, 0, 849, 0, 0, 0, 850, 0, 0, 851, 0, 852, 0, 0, 853, 854, 0, 855, 0, 0, 856, 0, 0, 0, 857, 0, 0, 0,
    0, 858, 0, 859, 0, 0, 860, 0, 0, 861, 862, 0, 863, 0, 0, 864, 0, 0, 0, 865, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 0, 868,
};
void recomp_unit_0080_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08944000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0080[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08944000;
    case 2u: goto L_08944014;
    case 3u: goto L_08944048;
    case 4u: goto L_08944070;
    case 5u: goto L_08944094;
    case 6u: goto L_089440DC;
    case 7u: goto L_089440F4;
    case 8u: goto L_089440FC;
    case 9u: goto L_08944124;
    case 10u: goto L_08944150;
    case 11u: goto L_08944160;
    case 12u: goto L_08944180;
    case 13u: goto L_089441A0;
    case 14u: goto L_089441B0;
    case 15u: goto L_089441E8;
    case 16u: goto L_089441F0;
    case 17u: goto L_08944228;
    case 18u: goto L_08944238;
    case 19u: goto L_08944240;
    case 20u: goto L_089442F4;
    case 21u: goto L_08944338;
    case 22u: goto L_08944378;
    case 23u: goto L_08944388;
    case 24u: goto L_089443A8;
    case 25u: goto L_089443E4;
    case 26u: goto L_08944410;
    case 27u: goto L_08944420;
    case 28u: goto L_08944440;
    case 29u: goto L_08944478;
    case 30u: goto L_089444A4;
    case 31u: goto L_089444B4;
    case 32u: goto L_089444D4;
    case 33u: goto L_0894450C;
    case 34u: goto L_08944534;
    case 35u: goto L_08944544;
    case 36u: goto L_08944564;
    case 37u: goto L_08944598;
    case 38u: goto L_089445B4;
    case 39u: goto L_089445D4;
    case 40u: goto L_08944600;
    case 41u: goto L_08944614;
    case 42u: goto L_0894461C;
    case 43u: goto L_089446C4;
    case 44u: goto L_08944708;
    case 45u: goto L_08944744;
    case 46u: goto L_08944764;
    case 47u: goto L_089447A0;
    case 48u: goto L_089447D0;
    case 49u: goto L_08944804;
    case 50u: goto L_08944824;
    case 51u: goto L_0894485C;
    case 52u: goto L_0894488C;
    case 53u: goto L_089448C0;
    case 54u: goto L_089448E0;
    case 55u: goto L_08944918;
    case 56u: goto L_08944940;
    case 57u: goto L_08944970;
    case 58u: goto L_08944990;
    case 59u: goto L_089449C4;
    case 60u: goto L_089449E4;
    case 61u: goto L_089449EC;
    case 62u: goto L_08944A2C;
    case 63u: goto L_08944A68;
    case 64u: goto L_08944A78;
    case 65u: goto L_08944A80;
    case 66u: goto L_08944A98;
    case 67u: goto L_08944AB0;
    case 68u: goto L_08944AC4;
    case 69u: goto L_08944AE0;
    case 70u: goto L_08944AEC;
    case 71u: goto L_08944B04;
    case 72u: goto L_08944B18;
    case 73u: goto L_08944B24;
    case 74u: goto L_08944B3C;
    case 75u: goto L_08944B50;
    case 76u: goto L_08944B5C;
    case 77u: goto L_08944B74;
    case 78u: goto L_08944BA0;
    case 79u: goto L_08944BB4;
    case 80u: goto L_08944BBC;
    case 81u: goto L_08944BD4;
    case 82u: goto L_08944BE4;
    case 83u: goto L_08944C10;
    case 84u: goto L_08944C24;
    case 85u: goto L_08944C28;
    case 86u: goto L_08944C34;
    case 87u: goto L_08944C48;
    case 88u: goto L_08944C58;
    case 89u: goto L_08944C70;
    case 90u: goto L_08944C78;
    case 91u: goto L_08944CC0;
    case 92u: goto L_08944CE4;
    case 93u: goto L_08944CEC;
    case 94u: goto L_08944D08;
    case 95u: goto L_08944D14;
    case 96u: goto L_08944D50;
    case 97u: goto L_08944D6C;
    case 98u: goto L_08944D74;
    case 99u: goto L_08944D80;
    case 100u: goto L_08944D90;
    case 101u: goto L_08944D9C;
    case 102u: goto L_08944DC4;
    case 103u: goto L_08944DF0;
    case 104u: goto L_08944E0C;
    case 105u: goto L_08944E28;
    case 106u: goto L_08944E3C;
    case 107u: goto L_08944E48;
    case 108u: goto L_08944E54;
    case 109u: goto L_08944E60;
    case 110u: goto L_08944E6C;
    case 111u: goto L_08944E78;
    case 112u: goto L_08944E84;
    case 113u: goto L_08944E90;
    case 114u: goto L_08944E9C;
    case 115u: goto L_08944EA8;
    case 116u: goto L_08944EB4;
    case 117u: goto L_08944EC0;
    case 118u: goto L_08944ECC;
    case 119u: goto L_08944ED8;
    case 120u: goto L_08944EE4;
    case 121u: goto L_08944EF0;
    case 122u: goto L_08944EFC;
    case 123u: goto L_08944F08;
    case 124u: goto L_08944F14;
    case 125u: goto L_08944F2C;
    case 126u: goto L_08944F40;
    case 127u: goto L_08944F4C;
    case 128u: goto L_08944F60;
    case 129u: goto L_08944F6C;
    case 130u: goto L_08944F80;
    case 131u: goto L_08944F8C;
    case 132u: goto L_08944F98;
    case 133u: goto L_08944FBC;
    case 134u: goto L_08944FC4;
    case 135u: goto L_08944FD0;
    case 136u: goto L_08944FE4;
    case 137u: goto L_0894500C;
    case 138u: goto L_08945010;
    case 139u: goto L_08945024;
    case 140u: goto L_0894502C;
    case 141u: goto L_08945038;
    case 142u: goto L_08945050;
    case 143u: goto L_08945064;
    case 144u: goto L_08945070;
    case 145u: goto L_08945098;
    case 146u: goto L_0894509C;
    case 147u: goto L_089450AC;
    case 148u: goto L_089450C0;
    case 149u: goto L_089450D0;
    case 150u: goto L_089450DC;
    case 151u: goto L_089450EC;
    case 152u: goto L_089450F8;
    case 153u: goto L_08945104;
    case 154u: goto L_08945110;
    case 155u: goto L_08945120;
    case 156u: goto L_0894512C;
    case 157u: goto L_08945138;
    case 158u: goto L_08945158;
    case 159u: goto L_0894516C;
    case 160u: goto L_08945190;
    case 161u: goto L_089451A8;
    case 162u: goto L_089451B0;
    case 163u: goto L_089451C8;
    case 164u: goto L_089451CC;
    case 165u: goto L_089451D8;
    case 166u: goto L_089451F4;
    case 167u: goto L_08945204;
    case 168u: goto L_0894520C;
    case 169u: goto L_08945214;
    case 170u: goto L_08945224;
    case 171u: goto L_08945228;
    case 172u: goto L_08945234;
    case 173u: goto L_0894523C;
    case 174u: goto L_08945248;
    case 175u: goto L_08945258;
    case 176u: goto L_08945260;
    case 177u: goto L_08945270;
    case 178u: goto L_0894527C;
    case 179u: goto L_08945280;
    case 180u: goto L_08945288;
    case 181u: goto L_08945298;
    case 182u: goto L_089452A8;
    case 183u: goto L_089452B0;
    case 184u: goto L_089452B8;
    case 185u: goto L_089452C8;
    case 186u: goto L_089452D0;
    case 187u: goto L_089452E0;
    case 188u: goto L_089452F4;
    case 189u: goto L_089452FC;
    case 190u: goto L_08945304;
    case 191u: goto L_0894530C;
    case 192u: goto L_08945314;
    case 193u: goto L_08945330;
    case 194u: goto L_0894533C;
    case 195u: goto L_08945398;
    case 196u: goto L_089453A0;
    case 197u: goto L_089453A8;
    case 198u: goto L_089453B8;
    case 199u: goto L_089453C0;
    case 200u: goto L_089453C8;
    case 201u: goto L_089453CC;
    case 202u: goto L_089453DC;
    case 203u: goto L_089453FC;
    case 204u: goto L_08945404;
    case 205u: goto L_08945410;
    case 206u: goto L_08945424;
    case 207u: goto L_08945450;
    case 208u: goto L_08945460;
    case 209u: goto L_08945478;
    case 210u: goto L_08945484;
    case 211u: goto L_089454A0;
    case 212u: goto L_089454AC;
    case 213u: goto L_089454B8;
    case 214u: goto L_089454C8;
    case 215u: goto L_089454E0;
    case 216u: goto L_089454E8;
    case 217u: goto L_0894550C;
    case 218u: goto L_08945514;
    case 219u: goto L_0894551C;
    case 220u: goto L_08945520;
    case 221u: goto L_0894553C;
    case 222u: goto L_08945568;
    case 223u: goto L_0894557C;
    case 224u: goto L_08945588;
    case 225u: goto L_08945594;
    case 226u: goto L_089455A4;
    case 227u: goto L_089455BC;
    case 228u: goto L_089455C8;
    case 229u: goto L_089455E4;
    case 230u: goto L_089455F8;
    case 231u: goto L_08945600;
    case 232u: goto L_08945620;
    case 233u: goto L_0894562C;
    case 234u: goto L_08945634;
    case 235u: goto L_0894563C;
    case 236u: goto L_08945658;
    case 237u: goto L_08945660;
    case 238u: goto L_08945668;
    case 239u: goto L_08945670;
    case 240u: goto L_08945680;
    case 241u: goto L_08945688;
    case 242u: goto L_08945690;
    case 243u: goto L_08945694;
    case 244u: goto L_089456B0;
    case 245u: goto L_089456DC;
    case 246u: goto L_089456EC;
    case 247u: goto L_08945704;
    case 248u: goto L_08945710;
    case 249u: goto L_0894572C;
    case 250u: goto L_08945738;
    case 251u: goto L_08945744;
    case 252u: goto L_08945754;
    case 253u: goto L_0894576C;
    case 254u: goto L_08945774;
    case 255u: goto L_08945798;
    case 256u: goto L_089457A0;
    case 257u: goto L_089457A8;
    case 258u: goto L_089457AC;
    case 259u: goto L_089457C8;
    case 260u: goto L_089457F4;
    case 261u: goto L_08945808;
    case 262u: goto L_08945814;
    case 263u: goto L_08945820;
    case 264u: goto L_08945830;
    case 265u: goto L_08945848;
    case 266u: goto L_08945854;
    case 267u: goto L_08945870;
    case 268u: goto L_08945884;
    case 269u: goto L_0894588C;
    case 270u: goto L_089458AC;
    case 271u: goto L_089458B8;
    case 272u: goto L_089458C0;
    case 273u: goto L_089458C8;
    case 274u: goto L_089458D8;
    case 275u: goto L_089458E0;
    case 276u: goto L_089458E8;
    case 277u: goto L_089458F0;
    case 278u: goto L_08945900;
    case 279u: goto L_08945908;
    case 280u: goto L_08945910;
    case 281u: goto L_08945914;
    case 282u: goto L_08945930;
    case 283u: goto L_08945944;
    case 284u: goto L_08945954;
    case 285u: goto L_08945960;
    case 286u: goto L_08945970;
    case 287u: goto L_08945980;
    case 288u: goto L_08945988;
    case 289u: goto L_0894599C;
    case 290u: goto L_089459C4;
    case 291u: goto L_089459D8;
    case 292u: goto L_089459E4;
    case 293u: goto L_08945A50;
    case 294u: goto L_08945A58;
    case 295u: goto L_08945A60;
    case 296u: goto L_08945A7C;
    case 297u: goto L_08945AA4;
    case 298u: goto L_08945AB8;
    case 299u: goto L_08945AC4;
    case 300u: goto L_08945B34;
    case 301u: goto L_08945B3C;
    case 302u: goto L_08945B44;
    case 303u: goto L_08945B60;
    case 304u: goto L_08945B80;
    case 305u: goto L_08945B88;
    case 306u: goto L_08945B9C;
    case 307u: goto L_08945BC4;
    case 308u: goto L_08945BD8;
    case 309u: goto L_08945BF0;
    case 310u: goto L_08945BF8;
    case 311u: goto L_08945C04;
    case 312u: goto L_08945C20;
    case 313u: goto L_08945C2C;
    case 314u: goto L_08945C38;
    case 315u: goto L_08945C44;
    case 316u: goto L_08945C54;
    case 317u: goto L_08945C68;
    case 318u: goto L_08945C70;
    case 319u: goto L_08945C78;
    case 320u: goto L_08945C7C;
    case 321u: goto L_08945C94;
    case 322u: goto L_08945CBC;
    case 323u: goto L_08945CD4;
    case 324u: goto L_08945CDC;
    case 325u: goto L_08945CE8;
    case 326u: goto L_08945D04;
    case 327u: goto L_08945D10;
    case 328u: goto L_08945D1C;
    case 329u: goto L_08945D28;
    case 330u: goto L_08945D38;
    case 331u: goto L_08945D4C;
    case 332u: goto L_08945D54;
    case 333u: goto L_08945D5C;
    case 334u: goto L_08945D60;
    case 335u: goto L_08945D78;
    case 336u: goto L_08945DA4;
    case 337u: goto L_08945DB8;
    case 338u: goto L_08945DCC;
    case 339u: goto L_08945DD8;
    case 340u: goto L_08945DE4;
    case 341u: goto L_08945DF4;
    case 342u: goto L_08945E0C;
    case 343u: goto L_08945E20;
    case 344u: goto L_08945E28;
    case 345u: goto L_08945E44;
    case 346u: goto L_08945E54;
    case 347u: goto L_08945E5C;
    case 348u: goto L_08945E64;
    case 349u: goto L_08945E6C;
    case 350u: goto L_08945E74;
    case 351u: goto L_08945E78;
    case 352u: goto L_08945E94;
    case 353u: goto L_08945EC0;
    case 354u: goto L_08945ED4;
    case 355u: goto L_08945EE0;
    case 356u: goto L_08945EEC;
    case 357u: goto L_08945EFC;
    case 358u: goto L_08945F14;
    case 359u: goto L_08945F20;
    case 360u: goto L_08945F3C;
    case 361u: goto L_08945F50;
    case 362u: goto L_08945F58;
    case 363u: goto L_08945F78;
    case 364u: goto L_08945F88;
    case 365u: goto L_08945F90;
    case 366u: goto L_08945F98;
    case 367u: goto L_08945FA0;
    case 368u: goto L_08945FA8;
    case 369u: goto L_08945FAC;
    case 370u: goto L_08945FC8;
    case 371u: goto L_08945FE8;
    case 372u: goto L_08945FF0;
    case 373u: goto L_08946004;
    case 374u: goto L_08946024;
    case 375u: goto L_0894602C;
    case 376u: goto L_08946038;
    case 377u: goto L_0894604C;
    case 378u: goto L_0894606C;
    case 379u: goto L_08946074;
    case 380u: goto L_08946088;
    case 381u: goto L_089460A8;
    case 382u: goto L_089460B0;
    case 383u: goto L_089460BC;
    case 384u: goto L_089460D0;
    case 385u: goto L_089460F0;
    case 386u: goto L_08946104;
    case 387u: goto L_0894610C;
    case 388u: goto L_08946118;
    case 389u: goto L_08946130;
    case 390u: goto L_08946138;
    case 391u: goto L_08946140;
    case 392u: goto L_08946148;
    case 393u: goto L_08946150;
    case 394u: goto L_08946158;
    case 395u: goto L_08946168;
    case 396u: goto L_089461A8;
    case 397u: goto L_089461B4;
    case 398u: goto L_089461C8;
    case 399u: goto L_089461D8;
    case 400u: goto L_0894624C;
    case 401u: goto L_0894628C;
    case 402u: goto L_089462BC;
    case 403u: goto L_089462E8;
    case 404u: goto L_089462F0;
    case 405u: goto L_08946304;
    case 406u: goto L_08946354;
    case 407u: goto L_08946394;
    case 408u: goto L_089463C4;
    case 409u: goto L_089463D0;
    case 410u: goto L_08946400;
    case 411u: goto L_08946404;
    case 412u: goto L_08946410;
    case 413u: goto L_08946414;
    case 414u: goto L_08946420;
    case 415u: goto L_0894642C;
    case 416u: goto L_08946460;
    case 417u: goto L_0894646C;
    case 418u: goto L_08946498;
    case 419u: goto L_089464A8;
    case 420u: goto L_089464B8;
    case 421u: goto L_089464BC;
    case 422u: goto L_089464CC;
    case 423u: goto L_089464DC;
    case 424u: goto L_089464E0;
    case 425u: goto L_089464E8;
    case 426u: goto L_0894651C;
    case 427u: goto L_0894653C;
    case 428u: goto L_0894654C;
    case 429u: goto L_08946558;
    case 430u: goto L_0894656C;
    case 431u: goto L_0894659C;
    case 432u: goto L_089465C0;
    case 433u: goto L_089465DC;
    case 434u: goto L_089465E8;
    case 435u: goto L_08946604;
    case 436u: goto L_0894660C;
    case 437u: goto L_08946620;
    case 438u: goto L_08946628;
    case 439u: goto L_08946638;
    case 440u: goto L_08946648;
    case 441u: goto L_08946658;
    case 442u: goto L_08946668;
    case 443u: goto L_08946678;
    case 444u: goto L_08946680;
    case 445u: goto L_08946688;
    case 446u: goto L_08946694;
    case 447u: goto L_089466A4;
    case 448u: goto L_089466B4;
    case 449u: goto L_089466C4;
    case 450u: goto L_089466C8;
    case 451u: goto L_089466DC;
    case 452u: goto L_089466FC;
    case 453u: goto L_0894670C;
    case 454u: goto L_08946718;
    case 455u: goto L_08946724;
    case 456u: goto L_0894672C;
    case 457u: goto L_08946730;
    case 458u: goto L_0894673C;
    case 459u: goto L_08946748;
    case 460u: goto L_0894674C;
    case 461u: goto L_08946770;
    case 462u: goto L_089467AC;
    case 463u: goto L_089467DC;
    case 464u: goto L_089467E8;
    case 465u: goto L_089467F4;
    case 466u: goto L_089467FC;
    case 467u: goto L_08946808;
    case 468u: goto L_08946818;
    case 469u: goto L_08946828;
    case 470u: goto L_08946838;
    case 471u: goto L_0894684C;
    case 472u: goto L_08946854;
    case 473u: goto L_08946860;
    case 474u: goto L_08946868;
    case 475u: goto L_0894687C;
    case 476u: goto L_08946888;
    case 477u: goto L_08946890;
    case 478u: goto L_08946898;
    case 479u: goto L_089468A8;
    case 480u: goto L_089468B8;
    case 481u: goto L_089468E0;
    case 482u: goto L_089468FC;
    case 483u: goto L_08946908;
    case 484u: goto L_08946918;
    case 485u: goto L_08946920;
    case 486u: goto L_08946924;
    case 487u: goto L_0894693C;
    case 488u: goto L_08946960;
    case 489u: goto L_0894696C;
    case 490u: goto L_0894697C;
    case 491u: goto L_08946984;
    case 492u: goto L_089469A4;
    case 493u: goto L_089469AC;
    case 494u: goto L_089469B0;
    case 495u: goto L_089469C4;
    case 496u: goto L_089469E8;
    case 497u: goto L_089469F4;
    case 498u: goto L_08946A04;
    case 499u: goto L_08946A0C;
    case 500u: goto L_08946A24;
    case 501u: goto L_08946A2C;
    case 502u: goto L_08946A30;
    case 503u: goto L_08946A44;
    case 504u: goto L_08946A58;
    case 505u: goto L_08946A68;
    case 506u: goto L_08946A80;
    case 507u: goto L_08946A90;
    case 508u: goto L_08946AA0;
    case 509u: goto L_08946AB0;
    case 510u: goto L_08946AC4;
    case 511u: goto L_08946ACC;
    case 512u: goto L_08946AD4;
    case 513u: goto L_08946AE0;
    case 514u: goto L_08946AEC;
    case 515u: goto L_08946AF4;
    case 516u: goto L_08946AFC;
    case 517u: goto L_08946B08;
    case 518u: goto L_08946B14;
    case 519u: goto L_08946B3C;
    case 520u: goto L_08946B4C;
    case 521u: goto L_08946B58;
    case 522u: goto L_08946B9C;
    case 523u: goto L_08946BAC;
    case 524u: goto L_08946BD0;
    case 525u: goto L_08946BE4;
    case 526u: goto L_08946BF0;
    case 527u: goto L_08946BF8;
    case 528u: goto L_08946C00;
    case 529u: goto L_08946C08;
    case 530u: goto L_08946C14;
    case 531u: goto L_08946C1C;
    case 532u: goto L_08946C20;
    case 533u: goto L_08946C28;
    case 534u: goto L_08946C30;
    case 535u: goto L_08946C3C;
    case 536u: goto L_08946C54;
    case 537u: goto L_08946C5C;
    case 538u: goto L_08946C68;
    case 539u: goto L_08946C70;
    case 540u: goto L_08946C78;
    case 541u: goto L_08946C80;
    case 542u: goto L_08946C90;
    case 543u: goto L_08946C98;
    case 544u: goto L_08946CAC;
    case 545u: goto L_08946CC8;
    case 546u: goto L_08946CD0;
    case 547u: goto L_08946CDC;
    case 548u: goto L_08946CE8;
    case 549u: goto L_08946CF0;
    case 550u: goto L_08946D0C;
    case 551u: goto L_08946D18;
    case 552u: goto L_08946D20;
    case 553u: goto L_08946D28;
    case 554u: goto L_08946D30;
    case 555u: goto L_08946D3C;
    case 556u: goto L_08946D44;
    case 557u: goto L_08946D4C;
    case 558u: goto L_08946D54;
    case 559u: goto L_08946D60;
    case 560u: goto L_08946D8C;
    case 561u: goto L_08946DB4;
    case 562u: goto L_08946DC0;
    case 563u: goto L_08946DC4;
    case 564u: goto L_08946DE8;
    case 565u: goto L_08946DFC;
    case 566u: goto L_08946E04;
    case 567u: goto L_08946E28;
    case 568u: goto L_08946E3C;
    case 569u: goto L_08946E58;
    case 570u: goto L_08946E9C;
    case 571u: goto L_08946EA8;
    case 572u: goto L_08946EDC;
    case 573u: goto L_08946F00;
    case 574u: goto L_08946F14;
    case 575u: goto L_08946F24;
    case 576u: goto L_08946F30;
    case 577u: goto L_08946F38;
    case 578u: goto L_08946F9C;
    case 579u: goto L_08946FAC;
    case 580u: goto L_08946FB8;
    case 581u: goto L_08946FC4;
    case 582u: goto L_08946FD0;
    case 583u: goto L_08946FDC;
    case 584u: goto L_08946FE4;
    case 585u: goto L_08946FE8;
    case 586u: goto L_08946FF4;
    case 587u: goto L_08947010;
    case 588u: goto L_08947018;
    case 589u: goto L_08947020;
    case 590u: goto L_08947030;
    case 591u: goto L_08947038;
    case 592u: goto L_08947040;
    case 593u: goto L_08947048;
    case 594u: goto L_0894705C;
    case 595u: goto L_0894707C;
    case 596u: goto L_0894708C;
    case 597u: goto L_089470B0;
    case 598u: goto L_089470C0;
    case 599u: goto L_089470F0;
    case 600u: goto L_08947100;
    case 601u: goto L_08947114;
    case 602u: goto L_08947130;
    case 603u: goto L_08947138;
    case 604u: goto L_08947140;
    case 605u: goto L_08947154;
    case 606u: goto L_08947160;
    case 607u: goto L_08947188;
    case 608u: goto L_0894718C;
    case 609u: goto L_08947190;
    case 610u: goto L_08947198;
    case 611u: goto L_089471B4;
    case 612u: goto L_089471D8;
    case 613u: goto L_089471E4;
    case 614u: goto L_08947218;
    case 615u: goto L_08947224;
    case 616u: goto L_0894722C;
    case 617u: goto L_08947234;
    case 618u: goto L_08947240;
    case 619u: goto L_08947268;
    case 620u: goto L_08947278;
    case 621u: goto L_0894729C;
    case 622u: goto L_089472B4;
    case 623u: goto L_089472C0;
    case 624u: goto L_089472C8;
    case 625u: goto L_089472EC;
    case 626u: goto L_089472FC;
    case 627u: goto L_08947308;
    case 628u: goto L_0894731C;
    case 629u: goto L_08947324;
    case 630u: goto L_08947340;
    case 631u: goto L_08947364;
    case 632u: goto L_0894736C;
    case 633u: goto L_08947390;
    case 634u: goto L_08947398;
    case 635u: goto L_089473A0;
    case 636u: goto L_089473A8;
    case 637u: goto L_089473B0;
    case 638u: goto L_089473B8;
    case 639u: goto L_089473C0;
    case 640u: goto L_089473C8;
    case 641u: goto L_089473D8;
    case 642u: goto L_089473E0;
    case 643u: goto L_089473E8;
    case 644u: goto L_089473F0;
    case 645u: goto L_089473F4;
    case 646u: goto L_089473FC;
    case 647u: goto L_08947404;
    case 648u: goto L_08947408;
    case 649u: goto L_08947420;
    case 650u: goto L_08947428;
    case 651u: goto L_0894743C;
    case 652u: goto L_08947454;
    case 653u: goto L_0894745C;
    case 654u: goto L_08947468;
    case 655u: goto L_08947470;
    case 656u: goto L_08947480;
    case 657u: goto L_0894748C;
    case 658u: goto L_0894749C;
    case 659u: goto L_089474A8;
    case 660u: goto L_089474B8;
    case 661u: goto L_089474C4;
    case 662u: goto L_089474D8;
    case 663u: goto L_089474E0;
    case 664u: goto L_089474E4;
    case 665u: goto L_089474EC;
    case 666u: goto L_08947504;
    case 667u: goto L_08947510;
    case 668u: goto L_0894751C;
    case 669u: goto L_08947534;
    case 670u: goto L_08947540;
    case 671u: goto L_08947548;
    case 672u: goto L_08947550;
    case 673u: goto L_0894755C;
    case 674u: goto L_08947564;
    case 675u: goto L_0894756C;
    case 676u: goto L_08947574;
    case 677u: goto L_08947584;
    case 678u: goto L_08947590;
    case 679u: goto L_089475A0;
    case 680u: goto L_089475A8;
    case 681u: goto L_089475C8;
    case 682u: goto L_089475D8;
    case 683u: goto L_089475E0;
    case 684u: goto L_089475E8;
    case 685u: goto L_089475F0;
    case 686u: goto L_089475F8;
    case 687u: goto L_08947600;
    case 688u: goto L_08947608;
    case 689u: goto L_08947610;
    case 690u: goto L_08947618;
    case 691u: goto L_08947620;
    case 692u: goto L_08947628;
    case 693u: goto L_0894762C;
    case 694u: goto L_08947634;
    case 695u: goto L_0894763C;
    case 696u: goto L_08947650;
    case 697u: goto L_08947658;
    case 698u: goto L_08947660;
    case 699u: goto L_08947668;
    case 700u: goto L_08947670;
    case 701u: goto L_08947678;
    case 702u: goto L_08947680;
    case 703u: goto L_08947688;
    case 704u: goto L_089476A0;
    case 705u: goto L_089476A8;
    case 706u: goto L_089476AC;
    case 707u: goto L_089476BC;
    case 708u: goto L_089476C8;
    case 709u: goto L_089476D8;
    case 710u: goto L_089476E8;
    case 711u: goto L_089476F8;
    case 712u: goto L_08947718;
    case 713u: goto L_08947720;
    case 714u: goto L_08947728;
    case 715u: goto L_08947738;
    case 716u: goto L_0894774C;
    case 717u: goto L_0894776C;
    case 718u: goto L_08947774;
    case 719u: goto L_0894777C;
    case 720u: goto L_08947794;
    case 721u: goto L_089477A8;
    case 722u: goto L_089477C8;
    case 723u: goto L_089477D0;
    case 724u: goto L_089477D8;
    case 725u: goto L_089477E8;
    case 726u: goto L_089477FC;
    case 727u: goto L_08947808;
    case 728u: goto L_08947814;
    case 729u: goto L_08947838;
    case 730u: goto L_08947848;
    case 731u: goto L_08947858;
    case 732u: goto L_08947868;
    case 733u: goto L_08947870;
    case 734u: goto L_0894787C;
    case 735u: goto L_08947888;
    case 736u: goto L_08947890;
    case 737u: goto L_0894789C;
    case 738u: goto L_089478AC;
    case 739u: goto L_089478B4;
    case 740u: goto L_089478E8;
    case 741u: goto L_08947900;
    case 742u: goto L_08947920;
    case 743u: goto L_08947928;
    case 744u: goto L_0894793C;
    case 745u: goto L_08947944;
    case 746u: goto L_0894795C;
    case 747u: goto L_08947968;
    case 748u: goto L_08947978;
    case 749u: goto L_08947980;
    case 750u: goto L_08947984;
    case 751u: goto L_08947990;
    case 752u: goto L_089479C4;
    case 753u: goto L_089479DC;
    case 754u: goto L_089479E4;
    case 755u: goto L_089479EC;
    case 756u: goto L_089479F4;
    case 757u: goto L_089479FC;
    case 758u: goto L_08947A34;
    case 759u: goto L_08947A40;
    case 760u: goto L_08947A48;
    case 761u: goto L_08947A50;
    case 762u: goto L_08947A88;
    case 763u: goto L_08947A94;
    case 764u: goto L_08947A9C;
    case 765u: goto L_08947AA4;
    case 766u: goto L_08947ADC;
    case 767u: goto L_08947AE8;
    case 768u: goto L_08947AF0;
    case 769u: goto L_08947AF8;
    case 770u: goto L_08947B24;
    case 771u: goto L_08947B28;
    case 772u: goto L_08947B34;
    case 773u: goto L_08947B40;
    case 774u: goto L_08947B48;
    case 775u: goto L_08947B4C;
    case 776u: goto L_08947B60;
    case 777u: goto L_08947B6C;
    case 778u: goto L_08947B74;
    case 779u: goto L_08947B90;
    case 780u: goto L_08947BC4;
    case 781u: goto L_08947BD0;
    case 782u: goto L_08947BE0;
    case 783u: goto L_08947BE8;
    case 784u: goto L_08947BFC;
    case 785u: goto L_08947C04;
    case 786u: goto L_08947C0C;
    case 787u: goto L_08947C14;
    case 788u: goto L_08947C20;
    case 789u: goto L_08947C30;
    case 790u: goto L_08947C40;
    case 791u: goto L_08947C50;
    case 792u: goto L_08947C5C;
    case 793u: goto L_08947C6C;
    case 794u: goto L_08947C78;
    case 795u: goto L_08947C90;
    case 796u: goto L_08947C98;
    case 797u: goto L_08947CA0;
    case 798u: goto L_08947CA8;
    case 799u: goto L_08947CB4;
    case 800u: goto L_08947CBC;
    case 801u: goto L_08947CC8;
    case 802u: goto L_08947CD0;
    case 803u: goto L_08947CD8;
    case 804u: goto L_08947CE8;
    case 805u: goto L_08947CF8;
    case 806u: goto L_08947D10;
    case 807u: goto L_08947D18;
    case 808u: goto L_08947D24;
    case 809u: goto L_08947D2C;
    case 810u: goto L_08947D34;
    case 811u: goto L_08947D3C;
    case 812u: goto L_08947D4C;
    case 813u: goto L_08947D60;
    case 814u: goto L_08947D74;
    case 815u: goto L_08947D7C;
    case 816u: goto L_08947D8C;
    case 817u: goto L_08947D9C;
    case 818u: goto L_08947DA8;
    case 819u: goto L_08947DB0;
    case 820u: goto L_08947DBC;
    case 821u: goto L_08947DC0;
    case 822u: goto L_08947DC8;
    case 823u: goto L_08947DD4;
    case 824u: goto L_08947DE4;
    case 825u: goto L_08947DF8;
    case 826u: goto L_08947E00;
    case 827u: goto L_08947E0C;
    case 828u: goto L_08947E18;
    case 829u: goto L_08947E1C;
    case 830u: goto L_08947E24;
    case 831u: goto L_08947E30;
    case 832u: goto L_08947E40;
    case 833u: goto L_08947E54;
    case 834u: goto L_08947E5C;
    case 835u: goto L_08947E70;
    case 836u: goto L_08947E7C;
    case 837u: goto L_08947E88;
    case 838u: goto L_08947E90;
    case 839u: goto L_08947E98;
    case 840u: goto L_08947EA4;
    case 841u: goto L_08947EB0;
    case 842u: goto L_08947EB8;
    case 843u: goto L_08947EC0;
    case 844u: goto L_08947EC8;
    case 845u: goto L_08947ED8;
    case 846u: goto L_08947EEC;
    case 847u: goto L_08947F00;
    case 848u: goto L_08947F08;
    case 849u: goto L_08947F18;
    case 850u: goto L_08947F28;
    case 851u: goto L_08947F34;
    case 852u: goto L_08947F3C;
    case 853u: goto L_08947F48;
    case 854u: goto L_08947F4C;
    case 855u: goto L_08947F54;
    case 856u: goto L_08947F60;
    case 857u: goto L_08947F70;
    case 858u: goto L_08947F84;
    case 859u: goto L_08947F8C;
    case 860u: goto L_08947F98;
    case 861u: goto L_08947FA4;
    case 862u: goto L_08947FA8;
    case 863u: goto L_08947FB0;
    case 864u: goto L_08947FBC;
    case 865u: goto L_08947FCC;
    case 866u: goto L_08947FE0;
    case 867u: goto L_08947FE8;
    case 868u: goto L_08947FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08944000:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08944014u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x08944014u) goto L_08944014;
    return;
L_08944014:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1216)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08944048u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944048u) goto L_08944048;
    return;
L_08944048:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08944070u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944070u) goto L_08944070;
    return;
L_08944070:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08944094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944094u) goto L_08944094;
    return;
L_08944094:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1184)));
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089440DCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x089440DCu) goto L_089440DC;
    return;
L_089440DC:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(720));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(720));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 536u, 0x08943D90u>(ctx, &aot_mem); return;
      }
      goto L_089440F4;
    }
L_089440F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944C24;
      }
      goto L_089440FC;
    }
L_089440FC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(146)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08944238;
      }
      goto L_08944124;
    }
L_08944124:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(136));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    goto L_08944150;
L_08944150:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08944160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944160u) goto L_08944160;
    return;
L_08944160:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08944180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944180u) goto L_08944180;
    return;
L_08944180:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089441A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089441A0u) goto L_089441A0;
    return;
L_089441A0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089441F0;
      }
      goto L_089441B0;
    }
L_089441B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (0u | 36u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089441E8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x089441E8u) goto L_089441E8;
    return;
L_089441E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944228;
      }
      goto L_089441F0;
    }
L_089441F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (0u | 38u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08944228u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x08944228u) goto L_08944228;
    return;
L_08944228:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944150;
      }
      goto L_08944238;
    }
L_08944238:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08944C24;
      }
      goto L_08944240;
    }
L_08944240:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(688), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(689), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(690), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 196u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(691), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1160), ctx.gpr[4]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1156), ctx.gpr[4]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(136));
      if (branch_taken) {
          goto L_08944614;
      }
      goto L_089442F4;
    }
L_089442F4:
    ctx.fpr[30] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1148), ctx.gpr[4]);
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.gpr[5] = (2247u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8224));
    ctx.gpr[4] = (15349u << 16u);
    ctx.gpr[5] = (2247u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12320));
    ctx.gpr[18] = (0u | 300u);
    goto L_08944338;
L_08944338:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1172), ctx.gpr[20]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1176), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08944378u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08944378u) goto L_08944378;
    return;
L_08944378:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08944388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944388u) goto L_08944388;
    return;
L_08944388:
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089443A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089443A8u) goto L_089443A8;
    return;
L_089443A8:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x089443E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x089443E4u) goto L_089443E4;
    return;
L_089443E4:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08944410u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08944410u) goto L_08944410;
    return;
L_08944410:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08944420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944420u) goto L_08944420;
    return;
L_08944420:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08944440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944440u) goto L_08944440;
    return;
L_08944440:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08944478u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x08944478u) goto L_08944478;
    return;
L_08944478:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1176)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089444A4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x089444A4u) goto L_089444A4;
    return;
L_089444A4:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089444B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089444B4u) goto L_089444B4;
    return;
L_089444B4:
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089444D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089444D4u) goto L_089444D4;
    return;
L_089444D4:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0894450Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x0894450Cu) goto L_0894450C;
    return;
L_0894450C:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08944534u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08944534u) goto L_08944534;
    return;
L_08944534:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08944544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944544u) goto L_08944544;
    return;
L_08944544:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08944564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944564u) goto L_08944564;
    return;
L_08944564:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08944598u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x08944598u) goto L_08944598;
    return;
L_08944598:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(720));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1172)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(720));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1184)));
      if (branch_taken) {
          goto L_08944338;
      }
      goto L_089445B4;
    }
L_089445B4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(146)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1160)));
      if (branch_taken) {
          goto L_08944614;
      }
      goto L_089445D4;
    }
L_089445D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08944600u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x08944600u) goto L_08944600;
    return;
L_08944600:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(146)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089445D4;
      }
      goto L_08944614;
    }
L_08944614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944C24;
      }
      goto L_0894461C;
    }
L_0894461C:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(784), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(785), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(786), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 196u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(787), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 1000u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2247u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1136), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8224));
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12320));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.fpr[30] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(136));
    goto L_089446C4;
L_089446C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1184), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1176), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08944708u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08944708u) goto L_08944708;
    return;
L_08944708:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(864)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(868)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08944744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944744u) goto L_08944744;
    return;
L_08944744:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(872)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08944764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944764u) goto L_08944764;
    return;
L_08944764:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1184)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 26u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x089447A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x089447A0u) goto L_089447A0;
    return;
L_089447A0:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1176)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089447D0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x089447D0u) goto L_089447D0;
    return;
L_089447D0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(864)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(868)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1196), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08944804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944804u) goto L_08944804;
    return;
L_08944804:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(872)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08944824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944824u) goto L_08944824;
    return;
L_08944824:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 26u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0894485Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x0894485Cu) goto L_0894485C;
    return;
L_0894485C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1180), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894488Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0894488Cu) goto L_0894488C;
    return;
L_0894488C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(864)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1176), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(868)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089448C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089448C0u) goto L_089448C0;
    return;
L_089448C0:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(872)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089448E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089448E0u) goto L_089448E0;
    return;
L_089448E0:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 26u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08944918u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x08944918u) goto L_08944918;
    return;
L_08944918:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08944940u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08944940u) goto L_08944940;
    return;
L_08944940:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(864)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1176)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(868)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08944970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944970u) goto L_08944970;
    return;
L_08944970:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(872)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08944990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944990u) goto L_08944990;
    return;
L_08944990:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 26u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x089449C4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x089449C4u) goto L_089449C4;
    return;
L_089449C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(720));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(720));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1136), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1216)));
      if (branch_taken) {
          goto L_089446C4;
      }
      goto L_089449E4;
    }
L_089449E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944C24;
      }
      goto L_089449EC;
    }
L_089449EC:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 1000u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(136));
    goto L_08944A2C;
L_08944A2C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08944A68u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x08944A68u) goto L_08944A68;
    return;
L_08944A68:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944A2C;
      }
      goto L_08944A78;
    }
L_08944A78:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08944C24;
      }
      goto L_08944A80;
    }
L_08944A80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(128)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944BBC;
      }
      goto L_08944A98;
    }
L_08944A98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(146)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944BB4;
      }
      goto L_08944AB0;
    }
L_08944AB0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[19] = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(136));
    goto L_08944AC4;
L_08944AC4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(944)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944B04;
      }
      goto L_08944AE0;
    }
L_08944AE0:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x08944AECu);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944AECu) goto L_08944AEC;
    return;
L_08944AEC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(944)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08944B04;
L_08944B04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(948)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944B3C;
      }
      goto L_08944B18;
    }
L_08944B18:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x08944B24u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944B24u) goto L_08944B24;
    return;
L_08944B24:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(948)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(948), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08944B3C;
L_08944B3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(952)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944B74;
      }
      goto L_08944B50;
    }
L_08944B50:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x08944B5Cu);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08944B5Cu) goto L_08944B5C;
    return;
L_08944B5C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(952)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(952), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08944B74;
L_08944B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08944BA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x08944BA0u) goto L_08944BA0;
    return;
L_08944BA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(146)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944AC4;
      }
      goto L_08944BB4;
    }
L_08944BB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944C24;
      }
      goto L_08944BBC;
    }
L_08944BBC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(146)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944C24;
      }
      goto L_08944BD4;
    }
L_08944BD4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(136));
    goto L_08944BE4;
L_08944BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08944C10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x08944C10u) goto L_08944C10;
    return;
L_08944C10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(146)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944BE4;
      }
      goto L_08944C24;
    }
L_08944C24:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    goto L_08944C28;
L_08944C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944C78;
      }
      goto L_08944C34;
    }
L_08944C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944C78;
      }
      goto L_08944C48;
    }
L_08944C48:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18160));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18152));
    ctx.gpr[31] = (0x08944C58u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 324u, 0x08941FE4u>(ctx, &aot_mem) && ctx.pc == 0x08944C58u) goto L_08944C58;
    return;
L_08944C58:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(142), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08944C78;
      }
      goto L_08944C70;
    }
L_08944C70:
    ctx.gpr[31] = (0x08944C78u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 344u, 0x08942110u>(ctx, &aot_mem) && ctx.pc == 0x08944C78u) goto L_08944C78;
    return;
L_08944C78:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1228)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1232)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1236)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1240)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1244)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1256)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1268)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1272)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1276)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1280)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1284)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1288)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944CC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (2196u << 16u);
    ctx.gpr[5] = (0u | 70u);
    ctx.gpr[6] = (0u | 160u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944CE4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7116));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08944CE4u) goto L_08944CE4;
    return;
L_08944CE4:
    ctx.gpr[31] = (0x08944CECu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18120));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08944CECu) goto L_08944CEC;
    return;
L_08944CEC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (2196u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2224));
    ctx.gpr[31] = (0x08944D08u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8268));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08944D08u) goto L_08944D08;
    return;
L_08944D08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944D14:
    ctx.gpr[5] = (0u | 3u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944D50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944D74;
      }
      goto L_08944D6C;
    }
L_08944D6C:
    ctx.gpr[31] = (0x08944D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 621u, 0x08972D80u>(ctx, &aot_mem) && ctx.pc == 0x08944D74u) goto L_08944D74;
    return;
L_08944D74:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944D80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.gpr[2] = (0u | 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944D90:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944D9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2247u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(8736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944DC4u);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 667u, 0x08B6B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08944DC4u) goto L_08944DC4;
    return;
L_08944DC4:
    ctx.gpr[4] = (19646u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 48160u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2247u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(8808));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08944DF0u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 694u, 0x08B6B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08944DF0u) goto L_08944DF0;
    return;
L_08944DF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(17440));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08944E0Cu);
    ctx.gpr[5] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 667u, 0x08B6B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08944E0Cu) goto L_08944E0C;
    return;
L_08944E0C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(8896));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08944E28u);
    ctx.gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 667u, 0x08B6B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08944E28u) goto L_08944E28;
    return;
L_08944E28:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2198u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08944E3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17500));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944E3Cu) goto L_08944E3C;
    return;
L_08944E3C:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944E48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21468));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944E48u) goto L_08944E48;
    return;
L_08944E48:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944E54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21540));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944E54u) goto L_08944E54;
    return;
L_08944E54:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944E60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21820));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944E60u) goto L_08944E60;
    return;
L_08944E60:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944E6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22192));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944E6Cu) goto L_08944E6C;
    return;
L_08944E6C:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944E78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22472));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944E78u) goto L_08944E78;
    return;
L_08944E78:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944E84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22832));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944E84u) goto L_08944E84;
    return;
L_08944E84:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944E90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22940));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944E90u) goto L_08944E90;
    return;
L_08944E90:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944E9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23164));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944E9Cu) goto L_08944E9C;
    return;
L_08944E9C:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944EA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23392));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944EA8u) goto L_08944EA8;
    return;
L_08944EA8:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944EB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23452));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944EB4u) goto L_08944EB4;
    return;
L_08944EB4:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944EC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23700));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944EC0u) goto L_08944EC0;
    return;
L_08944EC0:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944ECCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23928));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944ECCu) goto L_08944ECC;
    return;
L_08944ECC:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944ED8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24212));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944ED8u) goto L_08944ED8;
    return;
L_08944ED8:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944EE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24520));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944EE4u) goto L_08944EE4;
    return;
L_08944EE4:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944EF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24580));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944EF0u) goto L_08944EF0;
    return;
L_08944EF0:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944EFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24652));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944EFCu) goto L_08944EFC;
    return;
L_08944EFC:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944F08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24712));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944F08u) goto L_08944F08;
    return;
L_08944F08:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[31] = (0x08944F14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24784));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem) && ctx.pc == 0x08944F14u) goto L_08944F14;
    return;
L_08944F14:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944F2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2247u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944F40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8736));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 673u, 0x08B6B74Cu>(ctx, &aot_mem) && ctx.pc == 0x08944F40u) goto L_08944F40;
    return;
L_08944F40:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944F4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2247u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944F60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8808));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 700u, 0x08B6B970u>(ctx, &aot_mem) && ctx.pc == 0x08944F60u) goto L_08944F60;
    return;
L_08944F60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944F6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2238u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944F80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17440));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 673u, 0x08B6B74Cu>(ctx, &aot_mem) && ctx.pc == 0x08944F80u) goto L_08944F80;
    return;
L_08944F80:
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[31] = (0x08944F8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8896));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 673u, 0x08B6B74Cu>(ctx, &aot_mem) && ctx.pc == 0x08944F8Cu) goto L_08944F8C;
    return;
L_08944F8C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944F98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2247u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08944FD0;
      }
      goto L_08944FBC;
    }
L_08944FBC:
    ctx.gpr[31] = (0x08944FC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x08944FC4u) goto L_08944FC4;
    return;
L_08944FC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08944FBC;
      }
      goto L_08944FD0;
    }
L_08944FD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944FE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2247u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8808));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    ctx.gpr[16] = (2196u << 16u);
      if (branch_taken) {
          goto L_08945038;
      }
      goto L_0894500C;
    }
L_0894500C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(19856));
    goto L_08945010;
L_08945010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08945024u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 248u, 0x0881DCCCu>(ctx, &aot_mem) && ctx.pc == 0x08945024u) goto L_08945024;
    return;
L_08945024:
    ctx.gpr[31] = (0x0894502Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x0894502Cu) goto L_0894502C;
    return;
L_0894502C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08945010;
      }
      goto L_08945038;
    }
L_08945038:
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
L_08945050:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2238u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08945064u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17440));
    goto L_08945070;
L_08945064:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945070:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945138;
      }
      goto L_08945098;
    }
L_08945098:
    ctx.gpr[17] = (0u | 1u);
    goto L_0894509C;
L_0894509C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894512C;
      }
      goto L_089450AC;
    }
L_089450AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089450D0;
      }
      goto L_089450C0;
    }
L_089450C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089450D0;
L_089450D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089450F8;
      }
      goto L_089450DC;
    }
L_089450DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(58)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089450F8;
      }
      goto L_089450EC;
    }
L_089450EC:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089450F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089450F8u) goto L_089450F8;
    return;
L_089450F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08945104u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 496u, 0x08A7A664u>(ctx, &aot_mem) && ctx.pc == 0x08945104u) goto L_08945104;
    return;
L_08945104:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894512C;
      }
      goto L_08945110;
    }
L_08945110:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(58)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894512C;
      }
      goto L_08945120;
    }
L_08945120:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0894512Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0894512Cu) goto L_0894512C;
    return;
L_0894512C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0894509C;
      }
      goto L_08945138;
    }
L_08945138:
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
L_08945158:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089451B0;
      }
      goto L_0894516C;
    }
L_0894516C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08945190u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19840));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 248u, 0x0881DCCCu>(ctx, &aot_mem) && ctx.pc == 0x08945190u) goto L_08945190;
    return;
L_08945190:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[31] = (0x089451A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8808));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 704u, 0x08B6B9C0u>(ctx, &aot_mem) && ctx.pc == 0x089451A8u) goto L_089451A8;
    return;
L_089451A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_089451CC;
      }
      goto L_089451B0;
    }
L_089451B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2247u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x089451C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8736));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 677u, 0x08B6B79Cu>(ctx, &aot_mem) && ctx.pc == 0x089451C8u) goto L_089451C8;
    return;
L_089451C8:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_089451CC;
L_089451CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089451D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08945214;
      }
      goto L_089451F4;
    }
L_089451F4:
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08945204u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8896));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 677u, 0x08B6B79Cu>(ctx, &aot_mem) && ctx.pc == 0x08945204u) goto L_08945204;
    return;
L_08945204:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945214;
      }
      goto L_0894520C;
    }
L_0894520C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08945228;
      }
      goto L_08945214;
    }
L_08945214:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08945224u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17440));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 677u, 0x08B6B79Cu>(ctx, &aot_mem) && ctx.pc == 0x08945224u) goto L_08945224;
    return;
L_08945224:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08945228;
L_08945228:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945234:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945270;
      }
      goto L_0894523C;
    }
L_0894523C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    goto L_08945248;
L_08945248:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08945258;
    }
    goto L_08945258;
L_08945258:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0894527C;
      }
      goto L_08945260;
    }
L_08945260:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 9000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08945248;
      }
      goto L_08945270;
    }
L_08945270:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08945280;
      }
      goto L_0894527C;
    }
L_0894527C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[9]));
    goto L_08945280;
L_08945280:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945288:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089452B0;
      }
      goto L_08945298;
    }
L_08945298:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089452B8;
      }
      goto L_089452A8;
    }
L_089452A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089452C8;
      }
      goto L_089452B0;
    }
L_089452B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089452C8;
      }
      goto L_089452B8;
    }
L_089452B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089452C8;
L_089452C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089452D0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089452E0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089452F4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089452FC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945304:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894530C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945314:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089453A0;
      }
      goto L_08945330;
    }
L_08945330:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0894533Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089462F0;
L_0894533C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18092)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6572), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089453A8;
      }
      goto L_08945398;
    }
L_08945398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089453B8;
      }
      goto L_089453A0;
    }
L_089453A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089453CC;
      }
      goto L_089453A8;
    }
L_089453A8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089453C8;
      }
      goto L_089453B8;
    }
L_089453B8:
    ctx.gpr[31] = (0x089453C0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089453C0u) goto L_089453C0;
    return;
L_089453C0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089453C8;
      }
      goto L_089453C8;
    }
L_089453C8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089453CC;
L_089453CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089453DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8916)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945410;
      }
      goto L_089453FC;
    }
L_089453FC:
    ctx.gpr[31] = (0x08945404u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0894530C;
L_08945404:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08945410u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0894628C;
L_08945410:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8916)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0894551C;
      }
      goto L_08945450;
    }
L_08945450:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08945460u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_089452F4;
L_08945460:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08945514;
      }
      goto L_08945478;
    }
L_08945478:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08945514;
      }
      goto L_08945484;
    }
L_08945484:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08945514;
      }
      goto L_089454A0;
    }
L_089454A0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089454ACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x089454ACu) goto L_089454AC;
    return;
L_089454AC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089454B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x089454B8u) goto L_089454B8;
    return;
L_089454B8:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089454C8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08946354;
L_089454C8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_08945514;
      }
      goto L_089454E0;
    }
L_089454E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_0894550C;
      }
      goto L_089454E8;
    }
L_089454E8:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08945514;
      }
      goto L_0894550C;
    }
L_0894550C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945520;
      }
      goto L_08945514;
    }
L_08945514:
    ctx.gpr[31] = (0x0894551Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x0894551Cu) goto L_0894551C;
    return;
L_0894551C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08945520;
L_08945520:
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
L_0894553C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8916)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945690;
      }
      goto L_08945568;
    }
L_08945568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0894557Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x0894557Cu) goto L_0894557C;
    return;
L_0894557C:
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08945588u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945588:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08945594u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08945594u) goto L_08945594;
    return;
L_08945594:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089455A4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08946354;
L_089455A4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08945620;
      }
      goto L_089455BC;
    }
L_089455BC:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08945620;
      }
      goto L_089455C8;
    }
L_089455C8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08945620;
      }
      goto L_089455E4;
    }
L_089455E4:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_08945620;
      }
      goto L_089455F8;
    }
L_089455F8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08945634;
      }
      goto L_08945600;
    }
L_08945600:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08945634;
      }
      goto L_08945620;
    }
L_08945620:
    ctx.gpr[4] = (ctx.gpr[17] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894563C;
      }
      goto L_0894562C;
    }
L_0894562C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945670;
      }
      goto L_08945634;
    }
L_08945634:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945694;
      }
      goto L_0894563C;
    }
L_0894563C:
    ctx.gpr[4] = (14545u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08945658u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    goto L_08945158;
L_08945658:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945668;
      }
      goto L_08945660;
    }
L_08945660:
    ctx.gpr[31] = (0x08945668u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x08945668u) goto L_08945668;
    return;
L_08945668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945694;
      }
      goto L_08945670;
    }
L_08945670:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08945680u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08945158;
L_08945680:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945690;
      }
      goto L_08945688;
    }
L_08945688:
    ctx.gpr[31] = (0x08945690u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x08945690u) goto L_08945690;
    return;
L_08945690:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08945694;
L_08945694:
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
L_089456B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089457A8;
      }
      goto L_089456DC;
    }
L_089456DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089456ECu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_089452F4;
L_089456EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089457A0;
      }
      goto L_08945704;
    }
L_08945704:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_089457A0;
      }
      goto L_08945710;
    }
L_08945710:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089457A0;
      }
      goto L_0894572C;
    }
L_0894572C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08945738u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08945738u) goto L_08945738;
    return;
L_08945738:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08945744u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08945744u) goto L_08945744;
    return;
L_08945744:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08945754u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08946354;
L_08945754:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_089457A0;
      }
      goto L_0894576C;
    }
L_0894576C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08945798;
      }
      goto L_08945774;
    }
L_08945774:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089457A0;
      }
      goto L_08945798;
    }
L_08945798:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089457AC;
      }
      goto L_089457A0;
    }
L_089457A0:
    ctx.gpr[31] = (0x089457A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x089457A8u) goto L_089457A8;
    return;
L_089457A8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_089457AC;
L_089457AC:
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
L_089457C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945910;
      }
      goto L_089457F4;
    }
L_089457F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08945808u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08945808u) goto L_08945808;
    return;
L_08945808:
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08945814u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945814:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08945820u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08945820u) goto L_08945820;
    return;
L_08945820:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08945830u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08946354;
L_08945830:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089458AC;
      }
      goto L_08945848;
    }
L_08945848:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_089458AC;
      }
      goto L_08945854;
    }
L_08945854:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089458AC;
      }
      goto L_08945870;
    }
L_08945870:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_089458AC;
      }
      goto L_08945884;
    }
L_08945884:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_089458C0;
      }
      goto L_0894588C;
    }
L_0894588C:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089458C0;
      }
      goto L_089458AC;
    }
L_089458AC:
    ctx.gpr[4] = (ctx.gpr[17] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089458C8;
      }
      goto L_089458B8;
    }
L_089458B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089458F0;
      }
      goto L_089458C0;
    }
L_089458C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945914;
      }
      goto L_089458C8;
    }
L_089458C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089458D8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08945158;
L_089458D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089458E8;
      }
      goto L_089458E0;
    }
L_089458E0:
    ctx.gpr[31] = (0x089458E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x089458E8u) goto L_089458E8;
    return;
L_089458E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945914;
      }
      goto L_089458F0;
    }
L_089458F0:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08945900u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08945158;
L_08945900:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945910;
      }
      goto L_08945908;
    }
L_08945908:
    ctx.gpr[31] = (0x08945910u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x08945910u) goto L_08945910;
    return;
L_08945910:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08945914;
L_08945914:
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
L_08945930:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08945944u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08945288;
L_08945944:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x08945954u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 384u, 0x08AAE058u>(ctx, &aot_mem) && ctx.pc == 0x08945954u) goto L_08945954;
    return;
L_08945954:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945988;
      }
      goto L_08945960;
    }
L_08945960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08945980;
      }
      goto L_08945970;
    }
L_08945970:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08945980u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 455u, 0x0895B470u>(ctx, &aot_mem) && ctx.pc == 0x08945980u) goto L_08945980;
    return;
L_08945980:
    ctx.gpr[31] = (0x08945988u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x08945988u) goto L_08945988;
    return;
L_08945988:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894599C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945A60;
      }
      goto L_089459C4;
    }
L_089459C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089459D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x089459D8u) goto L_089459D8;
    return;
L_089459D8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089459E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x089459E4u) goto L_089459E4;
    return;
L_089459E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18092)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[18] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[31] = (0x08945A50u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    goto L_08945158;
L_08945A50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945A60;
      }
      goto L_08945A58;
    }
L_08945A58:
    ctx.gpr[31] = (0x08945A60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x08945A60u) goto L_08945A60;
    return;
L_08945A60:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08945A7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8916)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945B44;
      }
      goto L_08945AA4;
    }
L_08945AA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08945AB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08945AB8u) goto L_08945AB8;
    return;
L_08945AB8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08945AC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08945AC4u) goto L_08945AC4;
    return;
L_08945AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18092)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[18] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08945B34u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08945158;
L_08945B34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945B44;
      }
      goto L_08945B3C;
    }
L_08945B3C:
    ctx.gpr[31] = (0x08945B44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x08945B44u) goto L_08945B44;
    return;
L_08945B44:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08945B60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945B88;
      }
      goto L_08945B80;
    }
L_08945B80:
    ctx.gpr[31] = (0x08945B88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x08945B88u) goto L_08945B88;
    return;
L_08945B88:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945B9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8928)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945C78;
      }
      goto L_08945BC4;
    }
L_08945BC4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08945C78;
      }
      goto L_08945BD8;
    }
L_08945BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08945C70;
      }
      goto L_08945BF0;
    }
L_08945BF0:
    ctx.gpr[31] = (0x08945BF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945BF8:
    ctx.gpr[4] = (ctx.gpr[2] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08945C70;
      }
      goto L_08945C04;
    }
L_08945C04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08945C70;
      }
      goto L_08945C20;
    }
L_08945C20:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08945C2Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08945C2Cu) goto L_08945C2C;
    return;
L_08945C2C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08945C38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08945C38u) goto L_08945C38;
    return;
L_08945C38:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08945C44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945C44:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08945C54u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08946354;
L_08945C54:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08945C70;
      }
      goto L_08945C68;
    }
L_08945C68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945C7C;
      }
      goto L_08945C70;
    }
L_08945C70:
    ctx.gpr[31] = (0x08945C78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x08945C78u) goto L_08945C78;
    return;
L_08945C78:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08945C7C;
L_08945C7C:
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
L_08945C94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8928)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945D5C;
      }
      goto L_08945CBC;
    }
L_08945CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08945D54;
      }
      goto L_08945CD4;
    }
L_08945CD4:
    ctx.gpr[31] = (0x08945CDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945CDC:
    ctx.gpr[4] = (ctx.gpr[2] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08945D54;
      }
      goto L_08945CE8;
    }
L_08945CE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08945D54;
      }
      goto L_08945D04;
    }
L_08945D04:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08945D10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08945D10u) goto L_08945D10;
    return;
L_08945D10:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08945D1Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08945D1Cu) goto L_08945D1C;
    return;
L_08945D1C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08945D28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945D28:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08945D38u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08946354;
L_08945D38:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08945D54;
      }
      goto L_08945D4C;
    }
L_08945D4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945D60;
      }
      goto L_08945D54;
    }
L_08945D54:
    ctx.gpr[31] = (0x08945D5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x08945D5Cu) goto L_08945D5C;
    return;
L_08945D5C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08945D60;
L_08945D60:
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
L_08945D78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8928)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945E74;
      }
      goto L_08945DA4;
    }
L_08945DA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08945E74;
      }
      goto L_08945DB8;
    }
L_08945DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08945DCCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08945DCCu) goto L_08945DCC;
    return;
L_08945DCC:
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08945DD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945DD8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08945DE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08945DE4u) goto L_08945DE4;
    return;
L_08945DE4:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08945DF4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08946354;
L_08945DF4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
      if (branch_taken) {
          goto L_08945E44;
      }
      goto L_08945E0C;
    }
L_08945E0C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
      if (branch_taken) {
          goto L_08945E44;
      }
      goto L_08945E20;
    }
L_08945E20:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08945E44;
      }
      goto L_08945E28;
    }
L_08945E28:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08945E64;
      }
      goto L_08945E44;
    }
L_08945E44:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08945E54u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08945158;
L_08945E54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945E6C;
      }
      goto L_08945E5C;
    }
L_08945E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945E74;
      }
      goto L_08945E64;
    }
L_08945E64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945E78;
      }
      goto L_08945E6C;
    }
L_08945E6C:
    ctx.gpr[31] = (0x08945E74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x08945E74u) goto L_08945E74;
    return;
L_08945E74:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08945E78;
L_08945E78:
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
L_08945E94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8928)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945FA8;
      }
      goto L_08945EC0;
    }
L_08945EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08945ED4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08945ED4u) goto L_08945ED4;
    return;
L_08945ED4:
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08945EE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945EE0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08945EECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08945EECu) goto L_08945EEC;
    return;
L_08945EEC:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08945EFCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08946354;
L_08945EFC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08945F78;
      }
      goto L_08945F14;
    }
L_08945F14:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08945F78;
      }
      goto L_08945F20;
    }
L_08945F20:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08945F78;
      }
      goto L_08945F3C;
    }
L_08945F3C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_08945F78;
      }
      goto L_08945F50;
    }
L_08945F50:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08945F98;
      }
      goto L_08945F58;
    }
L_08945F58:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08945F98;
      }
      goto L_08945F78;
    }
L_08945F78:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08945F88u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08945158;
L_08945F88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945FA0;
      }
      goto L_08945F90;
    }
L_08945F90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945FA8;
      }
      goto L_08945F98;
    }
L_08945F98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945FAC;
      }
      goto L_08945FA0;
    }
L_08945FA0:
    ctx.gpr[31] = (0x08945FA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x08945FA8u) goto L_08945FA8;
    return;
L_08945FA8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08945FAC;
L_08945FAC:
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
L_08945FC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8916)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945FF0;
      }
      goto L_08945FE8;
    }
L_08945FE8:
    ctx.gpr[31] = (0x08945FF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x08945FF0u) goto L_08945FF0;
    return;
L_08945FF0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946004:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8916)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08946038;
      }
      goto L_08946024;
    }
L_08946024:
    ctx.gpr[31] = (0x0894602Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0894530C;
L_0894602C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08946038u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0894628C;
L_08946038:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894604C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08946074;
      }
      goto L_0894606C;
    }
L_0894606C:
    ctx.gpr[31] = (0x08946074u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x08946074u) goto L_08946074;
    return;
L_08946074:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946088:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089460BC;
      }
      goto L_089460A8;
    }
L_089460A8:
    ctx.gpr[31] = (0x089460B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0894530C;
L_089460B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089460BCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0894628C;
L_089460BC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089460D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089460F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089462F0;
L_089460F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8936)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946118;
      }
      goto L_08946104;
    }
L_08946104:
    ctx.gpr[31] = (0x0894610Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0894530C;
L_0894610C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08946118u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0894628C;
L_08946118:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946130:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946140;
      }
      goto L_08946138;
    }
L_08946138:
    ctx.gpr[5] = (2198u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17500));
    goto L_08946140;
L_08946140:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946150;
      }
      goto L_08946148;
    }
L_08946148:
    ctx.gpr[5] = (2198u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17500));
    goto L_08946150;
L_08946150:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946158:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08946168u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-18096), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 121u, 0x08890828u>(ctx, &aot_mem) && ctx.pc == 0x08946168u) goto L_08946168;
    return;
L_08946168:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-18092), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1960)));
      if (branch_taken) {
          goto L_089461B4;
      }
      goto L_089461A8;
    }
L_089461A8:
    ctx.gpr[6] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (16800u << 16u);
      if (branch_taken) {
          goto L_089461C8;
      }
      goto L_089461B4;
    }
L_089461B4:
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9216u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8944), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089461D8;
      }
      goto L_089461C8;
    }
L_089461C8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8944), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089461D8;
L_089461D8:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1952)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17036u << 16u);
    ctx.gpr[5] = (17076u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (17116u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8916), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8928), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8920), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8924), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8932), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8940), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894624C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18092)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894628C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (23808u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089462BCu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x089462BCu) goto L_089462BC;
    return;
L_089462BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (23808u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089462E8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089462F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08946304u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x08946304u) goto L_08946304;
    return;
L_08946304:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18092)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18092)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[6] & 48u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089463C4;
      }
      goto L_08946394;
    }
L_08946394:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08946404;
      }
      goto L_089463C4;
    }
L_089463C4:
    ctx.gpr[4] = (ctx.gpr[6] & 12u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946400;
      }
      goto L_089463D0;
    }
L_089463D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08946404;
      }
      goto L_08946400;
    }
L_08946400:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08946404;
L_08946404:
    ctx.gpr[4] = (ctx.gpr[6] & 36u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946414;
      }
      goto L_08946410;
    }
L_08946410:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    goto L_08946414;
L_08946414:
    ctx.gpr[4] = (ctx.gpr[6] & 1536u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089464E0;
      }
      goto L_08946420;
    }
L_08946420:
    ctx.gpr[4] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08946460;
      }
      goto L_0894642C;
    }
L_0894642C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08946498;
      }
      goto L_08946460;
    }
L_08946460:
    ctx.gpr[4] = (ctx.gpr[6] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946498;
      }
      goto L_0894646C;
    }
L_0894646C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    goto L_08946498;
L_08946498:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089464BC;
      }
      goto L_089464A8;
    }
L_089464A8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089464BC;
      }
      goto L_089464B8;
    }
L_089464B8:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    goto L_089464BC;
L_089464BC:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089464E0;
      }
      goto L_089464CC;
    }
L_089464CC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089464E0;
      }
      goto L_089464DC;
    }
L_089464DC:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    goto L_089464E0;
L_089464E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089464E8:
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8736));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8808));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17440));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8896));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894651C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894653Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 555u, 0x088079D0u>(ctx, &aot_mem) && ctx.pc == 0x0894653Cu) goto L_0894653C;
    return;
L_0894653C:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18004));
    ctx.gpr[31] = (0x0894654Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 249u, 0x0889D344u>(ctx, &aot_mem) && ctx.pc == 0x0894654Cu) goto L_0894654C;
    return;
L_0894654C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08946558u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem) && ctx.pc == 0x08946558u) goto L_08946558;
    return;
L_08946558:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894656C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894659Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x0894659Cu) goto L_0894659C;
    return;
L_0894659C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089465C0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x089465C0u) goto L_089465C0;
    return;
L_089465C0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894660C;
      }
      goto L_089465DC;
    }
L_089465DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089465E8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x089465E8u) goto L_089465E8;
    return;
L_089465E8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08946628;
      }
      goto L_08946604;
    }
L_08946604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946668;
      }
      goto L_0894660C;
    }
L_0894660C:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08946620u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9496));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem) && ctx.pc == 0x08946620u) goto L_08946620;
    return;
L_08946620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894674C;
      }
      goto L_08946628;
    }
L_08946628:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946680;
      }
      goto L_08946638;
    }
L_08946638:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(146)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946680;
      }
      goto L_08946648;
    }
L_08946648:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946680;
      }
      goto L_08946658;
    }
L_08946658:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946680;
      }
      goto L_08946668;
    }
L_08946668:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089466C4;
      }
      goto L_08946678;
    }
L_08946678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08946688;
      }
      goto L_08946680;
    }
L_08946680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0894674C;
      }
      goto L_08946688;
    }
L_08946688:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(146)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089466C4;
      }
      goto L_08946694;
    }
L_08946694:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089466C4;
      }
      goto L_089466A4;
    }
L_089466A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089466C4;
      }
      goto L_089466B4;
    }
L_089466B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089466C8;
      }
      goto L_089466C4;
    }
L_089466C4:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    goto L_089466C8;
L_089466C8:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[21] = (0u | 2u);
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[21] = (0u | 15u);
        goto L_089466DC;
    }
    goto L_089466DC;
L_089466DC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089466FCu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem) && ctx.pc == 0x089466FCu) goto L_089466FC;
    return;
L_089466FC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894670Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0894651C;
L_0894670C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08946718u);
    ctx.gpr[4] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08946718u) goto L_08946718;
    return;
L_08946718:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08946730;
      }
      goto L_08946724;
    }
L_08946724:
    ctx.gpr[31] = (0x0894672Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 314u, 0x08A0A1DCu>(ctx, &aot_mem) && ctx.pc == 0x0894672Cu) goto L_0894672C;
    return;
L_0894672C:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    goto L_08946730;
L_08946730:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x0894673Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem) && ctx.pc == 0x0894673Cu) goto L_0894673C;
    return;
L_0894673C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08946748u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 623u, 0x088BAFE8u>(ctx, &aot_mem) && ctx.pc == 0x08946748u) goto L_08946748;
    return;
L_08946748:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_0894674C;
L_0894674C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946770:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_089467AC;
L_089467AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_089467DC;
    }
    goto L_089467DC;
L_089467DC:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946860;
      }
      goto L_089467E8;
    }
L_089467E8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089467F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem) && ctx.pc == 0x089467F4u) goto L_089467F4;
    return;
L_089467F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946854;
      }
      goto L_089467FC;
    }
L_089467FC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08946808u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem) && ctx.pc == 0x08946808u) goto L_08946808;
    return;
L_08946808:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08946838;
    }
    goto L_08946818;
L_08946818:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08946828u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08946828u) goto L_08946828;
    return;
L_08946828:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08946838;
L_08946838:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(102)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946854;
      }
      goto L_0894684C;
    }
L_0894684C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    goto L_08946854;
L_08946854:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_089467AC;
      }
      goto L_08946860;
    }
L_08946860:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089468A8;
      }
      goto L_08946868;
    }
L_08946868:
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (0u | 15u);
    ctx.gpr[8] = (0u | 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31024));
    goto L_0894687C;
L_0894687C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08946890;
      }
      goto L_08946888;
    }
L_08946888:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08946898;
      }
      goto L_08946890;
    }
L_08946890:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    goto L_08946898;
L_08946898:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 336 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0894687C;
      }
      goto L_089468A8;
    }
L_089468A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089468B8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x089468B8u) goto L_089468B8;
    return;
L_089468B8:
    ctx.gpr[2] = (0u | 1u);
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
L_089468E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18004));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089468FCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem) && ctx.pc == 0x089468FCu) goto L_089468FC;
    return;
L_089468FC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946924;
      }
      goto L_08946908;
    }
L_08946908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08946924;
      }
      goto L_08946918;
    }
L_08946918:
    ctx.gpr[31] = (0x08946920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 608u, 0x088F2DDCu>(ctx, &aot_mem) && ctx.pc == 0x08946920u) goto L_08946920;
    return;
L_08946920:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08946924;
L_08946924:
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
L_0894693C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18004));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08946960u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem) && ctx.pc == 0x08946960u) goto L_08946960;
    return;
L_08946960:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089469AC;
      }
      goto L_0894696C;
    }
L_0894696C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089469AC;
      }
      goto L_0894697C;
    }
L_0894697C:
    ctx.gpr[31] = (0x08946984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 659u, 0x088F352Cu>(ctx, &aot_mem) && ctx.pc == 0x08946984u) goto L_08946984;
    return;
L_08946984:
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31024));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(57)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089469A4u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x089469A4u) goto L_089469A4;
    return;
L_089469A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089469B0;
      }
      goto L_089469AC;
    }
L_089469AC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089469B0;
L_089469B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089469C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18004));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089469E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem) && ctx.pc == 0x089469E8u) goto L_089469E8;
    return;
L_089469E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946A2C;
      }
      goto L_089469F4;
    }
L_089469F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946A2C;
      }
      goto L_08946A04;
    }
L_08946A04:
    ctx.gpr[31] = (0x08946A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 659u, 0x088F352Cu>(ctx, &aot_mem) && ctx.pc == 0x08946A0Cu) goto L_08946A0C;
    return;
L_08946A0C:
    ctx.gpr[4] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31024));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08946A24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 313u, 0x08931AD0u>(ctx, &aot_mem) && ctx.pc == 0x08946A24u) goto L_08946A24;
    return;
L_08946A24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08946A30;
      }
      goto L_08946A2C;
    }
L_08946A2C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08946A30;
L_08946A30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946A44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08946A58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11072));
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 644u, 0x088F3420u>(ctx, &aot_mem) && ctx.pc == 0x08946A58u) goto L_08946A58;
    return;
L_08946A58:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946A68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08946A80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 313u, 0x08931AD0u>(ctx, &aot_mem) && ctx.pc == 0x08946A80u) goto L_08946A80;
    return;
L_08946A80:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946A90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08946AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 733u, 0x088F3AC4u>(ctx, &aot_mem) && ctx.pc == 0x08946AA0u) goto L_08946AA0;
    return;
L_08946AA0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946AB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08946AD4;
      }
      goto L_08946AC4;
    }
L_08946AC4:
    ctx.gpr[31] = (0x08946ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08946ACCu) goto L_08946ACC;
    return;
L_08946ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[5] = (2232u << 16u);
    goto L_08946AD4;
L_08946AD4:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18004));
    ctx.gpr[31] = (0x08946AE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9648));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 270u, 0x08885284u>(ctx, &aot_mem) && ctx.pc == 0x08946AE0u) goto L_08946AE0;
    return;
L_08946AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08946AFC;
      }
      goto L_08946AEC;
    }
L_08946AEC:
    ctx.gpr[31] = (0x08946AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08946AF4u) goto L_08946AF4;
    return;
L_08946AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[5] = (2232u << 16u);
    goto L_08946AFC;
L_08946AFC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08946B08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9552));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem) && ctx.pc == 0x08946B08u) goto L_08946B08;
    return;
L_08946B08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946B14:
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
L_08946B3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08946B4Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08946B4Cu) goto L_08946B4C;
    return;
L_08946B4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946B58:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
L_08946B9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1780))))));
    ctx.gpr[2] = (ctx.gpr[4] & 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946BAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08946CF0;
      }
      goto L_08946BD0;
    }
L_08946BD0:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23360));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x08946BE4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 13u, 0x08AB4074u>(ctx, &aot_mem) && ctx.pc == 0x08946BE4u) goto L_08946BE4;
    return;
L_08946BE4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(6000));
      if (branch_taken) {
          goto L_08946C80;
      }
      goto L_08946BF0;
    }
L_08946BF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08946C1C;
      }
      goto L_08946BF8;
    }
L_08946BF8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(152));
        goto L_08946C20;
    }
    goto L_08946C00;
L_08946C00:
    ctx.gpr[31] = (0x08946C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 721u, 0x08B6BAECu>(ctx, &aot_mem) && ctx.pc == 0x08946C08u) goto L_08946C08;
    return;
L_08946C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(6000)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(152));
        goto L_08946C20;
    }
    goto L_08946C14;
L_08946C14:
    ctx.gpr[31] = (0x08946C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08946C1Cu) goto L_08946C1C;
    return;
L_08946C1C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(152));
    goto L_08946C20;
L_08946C20:
    ctx.gpr[31] = (0x08946C28u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 771u, 0x088876BCu>(ctx, &aot_mem) && ctx.pc == 0x08946C28u) goto L_08946C28;
    return;
L_08946C28:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08946C78;
      }
      goto L_08946C30;
    }
L_08946C30:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29640));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08946C78;
      }
      goto L_08946C3C;
    }
L_08946C3C:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19080));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946C78;
      }
      goto L_08946C54;
    }
L_08946C54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08946C78;
      }
      goto L_08946C5C;
    }
L_08946C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946C78;
      }
      goto L_08946C68;
    }
L_08946C68:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946C78;
      }
      goto L_08946C70;
    }
L_08946C70:
    ctx.gpr[31] = (0x08946C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08946C78u) goto L_08946C78;
    return;
L_08946C78:
    ctx.gpr[31] = (0x08946C80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08946C80u) goto L_08946C80;
    return;
L_08946C80:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3292), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946CD0;
      }
      goto L_08946C90;
    }
L_08946C90:
    ctx.gpr[31] = (0x08946C98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08946C98u) goto L_08946C98;
    return;
L_08946C98:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946CC8;
      }
      goto L_08946CAC;
    }
L_08946CAC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08946CC8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946CC8u) goto L_08946CC8;
    return;
L_08946CC8:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17613), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3304), 0u);
    goto L_08946CD0;
L_08946CD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08946CDCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 416u, 0x08905FECu>(ctx, &aot_mem) && ctx.pc == 0x08946CDCu) goto L_08946CDC;
    return;
L_08946CDC:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946CF0;
      }
      goto L_08946CE8;
    }
L_08946CE8:
    ctx.gpr[31] = (0x08946CF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 477u, 0x08906308u>(ctx, &aot_mem) && ctx.pc == 0x08946CF0u) goto L_08946CF0;
    return;
L_08946CF0:
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
L_08946D0C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4196)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946D20;
      }
      goto L_08946D18;
    }
L_08946D18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(2016));
      if (branch_taken) {
          goto L_08946D28;
      }
      goto L_08946D20;
    }
L_08946D20:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_08946D28;
L_08946D28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946D30:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4196)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946D44;
      }
      goto L_08946D3C;
    }
L_08946D3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(2016));
      if (branch_taken) {
          goto L_08946D4C;
      }
      goto L_08946D44;
    }
L_08946D44:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_08946D4C;
L_08946D4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946D54:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(152));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946D60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08946D8Cu);
    ctx.gpr[4] = (0u | 3344u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x08946D8Cu) goto L_08946D8C;
    return;
L_08946D8C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08946DC4;
      }
      goto L_08946DB4;
    }
L_08946DB4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08946DC0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 420u, 0x08949E34u>(ctx, &aot_mem) && ctx.pc == 0x08946DC0u) goto L_08946DC0;
    return;
L_08946DC0:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08946DC4;
L_08946DC4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08946DE8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08946DE8u) goto L_08946DE8;
    return;
L_08946DE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08946DFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08946DFCu) goto L_08946DFC;
    return;
L_08946DFC:
    ctx.gpr[31] = (0x08946E04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08946E04u) goto L_08946E04;
    return;
L_08946E04:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08946E28;
    }
    goto L_08946E28;
L_08946E28:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08946E3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 400u, 0x08949CA8u>(ctx, &aot_mem) && ctx.pc == 0x08946E3Cu) goto L_08946E3C;
    return;
L_08946E3C:
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
L_08946E58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[6] = (ctx.gpr[6] | 128u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08946E9Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08946E9Cu) goto L_08946E9C;
    return;
L_08946E9C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946EA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08946EDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08946EDCu) goto L_08946EDC;
    return;
L_08946EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946F00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946F24;
      }
      goto L_08946F14;
    }
L_08946F14:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08946F24u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 427u, 0x08A39C74u>(ctx, &aot_mem) && ctx.pc == 0x08946F24u) goto L_08946F24;
    return;
L_08946F24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946F30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946F38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[17] = (0u | 44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (50298u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] | 0u);
    goto L_08946F9C;
L_08946F9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08946FACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08946FACu) goto L_08946FAC;
    return;
L_08946FAC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894707C;
      }
      goto L_08946FB8;
    }
L_08946FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946FD0;
      }
      goto L_08946FC4;
    }
L_08946FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894707C;
      }
      goto L_08946FD0;
    }
L_08946FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08946FE8;
    }
    goto L_08946FDC;
L_08946FDC:
    ctx.gpr[31] = (0x08946FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08946FE4u) goto L_08946FE4;
    return;
L_08946FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08946FE8;
L_08946FE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    ctx.gpr[31] = (0x08946FF4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 633u, 0x0893E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08946FF4u) goto L_08946FF4;
    return;
L_08946FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08947030;
      }
      goto L_08947010;
    }
L_08947010:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08947020;
      }
      goto L_08947018;
    }
L_08947018:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08947040;
      }
      goto L_08947020;
    }
L_08947020:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08947010;
      }
      goto L_08947030;
    }
L_08947030:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08947040;
      }
      goto L_08947038;
    }
L_08947038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08947040;
      }
      goto L_08947040;
    }
L_08947040:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894707C;
      }
      goto L_08947048;
    }
L_08947048:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0894705Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x0894705Cu) goto L_0894705C;
    return;
L_0894705C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_0894707C;
L_0894707C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08946F9C;
      }
      goto L_0894708C;
    }
L_0894708C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089470B0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_08947160;
      }
      goto L_089470C0;
    }
L_089470C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(333)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947138;
      }
      goto L_089470F0;
    }
L_089470F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947138;
      }
      goto L_08947100;
    }
L_08947100:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08947138;
      }
      goto L_08947114;
    }
L_08947114:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3264)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08947140;
      }
      goto L_08947130;
    }
L_08947130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894718C;
      }
      goto L_08947138;
    }
L_08947138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08947190;
      }
      goto L_08947140;
    }
L_08947140:
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08947154;
    }
    goto L_08947154;
L_08947154:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08947190;
      }
      goto L_08947160;
    }
L_08947160:
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3264)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3160)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894718C;
      }
      goto L_08947188;
    }
L_08947188:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0894718C;
L_0894718C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08947190;
L_08947190:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947198:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089471D8;
      }
      goto L_089471B4;
    }
L_089471B4:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089471D8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089471E4;
L_089471D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089471E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08947224;
      }
      goto L_08947218;
    }
L_08947218:
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947234;
      }
      goto L_08947224;
    }
L_08947224:
    ctx.gpr[31] = (0x0894722Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0894722Cu) goto L_0894722C;
    return;
L_0894722C:
    ctx.gpr[31] = (0x08947234u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 588u, 0x08A1BE00u>(ctx, &aot_mem) && ctx.pc == 0x08947234u) goto L_08947234;
    return;
L_08947234:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08947240u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08947240u) goto L_08947240;
    return;
L_08947240:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1396));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08947268u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08947268u) goto L_08947268;
    return;
L_08947268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_08947278;
    }
    goto L_08947278;
L_08947278:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x0894729Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x0894729Cu) goto L_0894729C;
    return;
L_0894729C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089472C0;
      }
      goto L_089472B4;
    }
L_089472B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089472C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem) && ctx.pc == 0x089472C0u) goto L_089472C0;
    return;
L_089472C0:
    ctx.gpr[31] = (0x089472C8u);
    ctx.gpr[4] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089472C8u) goto L_089472C8;
    return;
L_089472C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (32u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 214u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 55u);
        goto L_089472EC;
    }
    goto L_089472EC;
L_089472EC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089472FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x089472FCu) goto L_089472FC;
    return;
L_089472FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894731C;
      }
      goto L_08947308;
    }
L_08947308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_0894731C;
L_0894731C:
    ctx.gpr[31] = (0x08947324u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 588u, 0x08A1BE00u>(ctx, &aot_mem) && ctx.pc == 0x08947324u) goto L_08947324;
    return;
L_08947324:
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
L_08947340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08947364u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    goto L_08946B3C;
L_08947364:
    ctx.gpr[31] = (0x0894736Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x0894736Cu) goto L_0894736C;
    return;
L_0894736C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1396));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089473A0;
      }
      goto L_08947390;
    }
L_08947390:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_089473A0;
      }
      goto L_08947398;
    }
L_08947398:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089473B0;
      }
      goto L_089473A0;
    }
L_089473A0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089473B8;
      }
      goto L_089473A8;
    }
L_089473A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08947408;
      }
      goto L_089473B0;
    }
L_089473B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08947408;
      }
      goto L_089473B8;
    }
L_089473B8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089473A8;
      }
      goto L_089473C0;
    }
L_089473C0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089473E0;
      }
      goto L_089473C8;
    }
L_089473C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 16u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_089473F4;
    }
    goto L_089473D8;
L_089473D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 22u);
      if (branch_taken) {
          goto L_089473E8;
      }
      goto L_089473E0;
    }
L_089473E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08947408;
      }
      goto L_089473E8;
    }
L_089473E8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08947404;
      }
      goto L_089473F0;
    }
L_089473F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    goto L_089473F4;
L_089473F4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947404;
      }
      goto L_089473FC;
    }
L_089473FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08947408;
      }
      goto L_08947404;
    }
L_08947404:
    ctx.gpr[2] = (0u | 1u);
    goto L_08947408;
L_08947408:
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
L_08947420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[7] = (0u | 0u);
    goto L_08947428;
L_08947428:
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(6288)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894745C;
      }
      goto L_0894743C;
    }
L_0894743C:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947428;
      }
      goto L_08947454;
    }
L_08947454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947468;
      }
      goto L_0894745C;
    }
L_0894745C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(6288), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1744), 0u);
      if (branch_taken) {
          goto L_08947468;
      }
      goto L_08947468;
    }
L_08947468:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947470:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08947480u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 965u, 0x08AB3C80u>(ctx, &aot_mem) && ctx.pc == 0x08947480u) goto L_08947480;
    return;
L_08947480:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894748C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894749Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 982u, 0x08AB3D5Cu>(ctx, &aot_mem) && ctx.pc == 0x0894749Cu) goto L_0894749C;
    return;
L_0894749C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089474A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089474B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 988u, 0x08AB3DB4u>(ctx, &aot_mem) && ctx.pc == 0x089474B8u) goto L_089474B8;
    return;
L_089474B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089474C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6992)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089474E0;
      }
      goto L_089474D8;
    }
L_089474D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6992));
      if (branch_taken) {
          goto L_089474E4;
      }
      goto L_089474E0;
    }
L_089474E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089474E4;
L_089474E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089474EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947510;
      }
      goto L_08947504;
    }
L_08947504:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08947510u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 588u, 0x08A1BE00u>(ctx, &aot_mem) && ctx.pc == 0x08947510u) goto L_08947510;
    return;
L_08947510:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894751C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 52 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08947540;
      }
      goto L_08947534;
    }
L_08947534:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0894756C;
      }
      goto L_08947540;
    }
L_08947540:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 55 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894755C;
      }
      goto L_08947548;
    }
L_08947548:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894755C;
      }
      goto L_08947550;
    }
L_08947550:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0894756C;
      }
      goto L_0894755C;
    }
L_0894755C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894756C;
      }
      goto L_08947564;
    }
L_08947564:
    ctx.gpr[4] = (0u | 46u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894756C;
L_0894756C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947574:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089475A0;
      }
      goto L_08947584;
    }
L_08947584:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3192)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089475A0;
      }
      goto L_08947590;
    }
L_08947590:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3192), 0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089475A0;
L_089475A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089475A8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089475E0;
      }
      goto L_089475C8;
    }
L_089475C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947620;
      }
      goto L_089475D8;
    }
L_089475D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 29u);
      if (branch_taken) {
          goto L_089475E8;
      }
      goto L_089475E0;
    }
L_089475E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0894762C;
      }
      goto L_089475E8;
    }
L_089475E8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_08947620;
      }
      goto L_089475F0;
    }
L_089475F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 22u);
      if (branch_taken) {
          goto L_08947620;
      }
      goto L_089475F8;
    }
L_089475F8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 23u);
      if (branch_taken) {
          goto L_08947620;
      }
      goto L_08947600;
    }
L_08947600:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 32u);
      if (branch_taken) {
          goto L_08947620;
      }
      goto L_08947608;
    }
L_08947608:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 34u);
      if (branch_taken) {
          goto L_08947620;
      }
      goto L_08947610;
    }
L_08947610:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 35u);
      if (branch_taken) {
          goto L_08947620;
      }
      goto L_08947618;
    }
L_08947618:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947628;
      }
      goto L_08947620;
    }
L_08947620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0894762C;
      }
      goto L_08947628;
    }
L_08947628:
    ctx.gpr[2] = (0u | 0u);
    goto L_0894762C;
L_0894762C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947634:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(3330));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894763C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08947650u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089476BC;
L_08947650:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089476A0;
      }
      goto L_08947658;
    }
L_08947658:
    ctx.gpr[31] = (0x08947660u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089476D8;
L_08947660:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089476A0;
      }
      goto L_08947668;
    }
L_08947668:
    ctx.gpr[31] = (0x08947670u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089476C8;
L_08947670:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089476A0;
      }
      goto L_08947678;
    }
L_08947678:
    ctx.gpr[31] = (0x08947680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem) && ctx.pc == 0x08947680u) goto L_08947680;
    return;
L_08947680:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089476A0;
      }
      goto L_08947688;
    }
L_08947688:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3330)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089476A8;
      }
      goto L_089476A0;
    }
L_089476A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089476AC;
      }
      goto L_089476A8;
    }
L_089476A8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089476AC;
L_089476AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089476BC:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3330)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089476C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3330)));
    ctx.gpr[2] = (ctx.gpr[4] & 4u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089476D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3330)));
    ctx.gpr[2] = (ctx.gpr[4] & 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089476E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3330)));
    ctx.gpr[2] = (ctx.gpr[4] & 32u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089476F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08947738;
      }
      goto L_08947718;
    }
L_08947718:
    ctx.gpr[31] = (0x08947720u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0894763C;
L_08947720:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947738;
      }
      goto L_08947728;
    }
L_08947728:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3330)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3296), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08947738;
L_08947738:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894774C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08947794;
      }
      goto L_0894776C;
    }
L_0894776C:
    ctx.gpr[31] = (0x08947774u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0894763C;
L_08947774:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947794;
      }
      goto L_0894777C;
    }
L_0894777C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3330)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3296), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3300), ctx.gpr[4]);
    goto L_08947794;
L_08947794:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089477A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089477E8;
      }
      goto L_089477C8;
    }
L_089477C8:
    ctx.gpr[31] = (0x089477D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0894763C;
L_089477D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089477E8;
      }
      goto L_089477D8;
    }
L_089477D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3330)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3296), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089477E8;
L_089477E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089477FC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947868;
      }
      goto L_08947808;
    }
L_08947808:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947868;
      }
      goto L_08947814;
    }
L_08947814:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3330)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3296)));
    ctx.gpr[7] = (ctx.gpr[7] | 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3296), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947848;
      }
      goto L_08947838;
    }
L_08947838:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08947868;
      }
      goto L_08947848;
    }
L_08947848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947868;
      }
      goto L_08947858;
    }
L_08947858:
    ctx.gpr[4] = (16298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 15729u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08947868;
L_08947868:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947870:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947888;
      }
      goto L_0894787C;
    }
L_0894787C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3330)));
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08947888;
L_08947888:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947890:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089478AC;
      }
      goto L_0894789C;
    }
L_0894789C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3330)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089478AC;
L_089478AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089478B4:
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[6] = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3296)));
      if (branch_taken) {
          goto L_08947900;
      }
      goto L_089478E8;
    }
L_089478E8:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08947920;
      }
      goto L_08947900;
    }
L_08947900:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[6] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    goto L_08947920;
L_08947920:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3296), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3296)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
        goto L_0894793C;
    }
    goto L_0894793C;
L_0894793C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947944:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3330)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947984;
      }
      goto L_0894795C;
    }
L_0894795C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947984;
      }
      goto L_08947968;
    }
L_08947968:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[7] = (16256u << 16u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_08947980;
      }
      goto L_08947978;
    }
L_08947978:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08947984;
      }
      goto L_08947980;
    }
L_08947980:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08947984;
L_08947984:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3296), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947990:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3330)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089479EC;
      }
      goto L_089479C4;
    }
L_089479C4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089479DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089476BC;
L_089479DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089479FC;
      }
      goto L_089479E4;
    }
L_089479E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947A40;
      }
      goto L_089479EC;
    }
L_089479EC:
    ctx.gpr[31] = (0x089479F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08947944;
L_089479F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947B74;
      }
      goto L_089479FC;
    }
L_089479FC:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(146)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3296)));
    ctx.gpr[7] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08947A34u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08947A34u) goto L_08947A34;
    return;
L_08947A34:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947B28;
      }
      goto L_08947A40;
    }
L_08947A40:
    ctx.gpr[31] = (0x08947A48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089476D8;
L_08947A48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947A94;
      }
      goto L_08947A50;
    }
L_08947A50:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3296)));
    ctx.gpr[7] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08947A88u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08947A88u) goto L_08947A88;
    return;
L_08947A88:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947B28;
      }
      goto L_08947A94;
    }
L_08947A94:
    ctx.gpr[31] = (0x08947A9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089476C8;
L_08947A9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947AE8;
      }
      goto L_08947AA4;
    }
L_08947AA4:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(150)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3296)));
    ctx.gpr[7] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08947ADCu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08947ADCu) goto L_08947ADC;
    return;
L_08947ADC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947B28;
      }
      goto L_08947AE8;
    }
L_08947AE8:
    ctx.gpr[31] = (0x08947AF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089476E8;
L_08947AF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947B28;
      }
      goto L_08947AF8;
    }
L_08947AF8:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08947B24u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08947B24u) goto L_08947B24;
    return;
L_08947B24:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08947B28;
L_08947B28:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08947B34u);
    ctx.gpr[4] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08947B34u) goto L_08947B34;
    return;
L_08947B34:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08947B4C;
      }
      goto L_08947B40;
    }
L_08947B40:
    ctx.gpr[31] = (0x08947B48u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 314u, 0x08A0A1DCu>(ctx, &aot_mem) && ctx.pc == 0x08947B48u) goto L_08947B48;
    return;
L_08947B48:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08947B4C;
L_08947B4C:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08947B60u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08947B60u) goto L_08947B60;
    return;
L_08947B60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08947B6Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 623u, 0x088BAFE8u>(ctx, &aot_mem) && ctx.pc == 0x08947B6Cu) goto L_08947B6C;
    return;
L_08947B6C:
    ctx.gpr[31] = (0x08947B74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08947944;
L_08947B74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947B90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08947BC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08947BC4u) goto L_08947BC4;
    return;
L_08947BC4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08947BE8;
      }
      goto L_08947BD0;
    }
L_08947BD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08947BE0u);
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 395u, 0x08ADD768u>(ctx, &aot_mem) && ctx.pc == 0x08947BE0u) goto L_08947BE0;
    return;
L_08947BE0:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08947C0C;
      }
      goto L_08947BE8;
    }
L_08947BE8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08947BFCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08947BFCu) goto L_08947BFC;
    return;
L_08947BFC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
        goto L_08947C14;
    }
    goto L_08947C04;
L_08947C04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947C5C;
      }
      goto L_08947C0C;
    }
L_08947C0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 5u, 0x08948020u>(ctx, &aot_mem); return;
      }
      goto L_08947C14;
    }
L_08947C14:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08947C20u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08947C20u) goto L_08947C20;
    return;
L_08947C20:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08947C50;
    }
    goto L_08947C30;
L_08947C30:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08947C40u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08947C40u) goto L_08947C40;
    return;
L_08947C40:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08947C50;
L_08947C50:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08947C98;
      }
      goto L_08947C5C;
    }
L_08947C5C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08947C6Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08947C6Cu) goto L_08947C6C;
    return;
L_08947C6C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947EB8;
      }
      goto L_08947C78;
    }
L_08947C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947CA0;
      }
      goto L_08947C90;
    }
L_08947C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947CBC;
      }
      goto L_08947C98;
    }
L_08947C98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 5u, 0x08948020u>(ctx, &aot_mem); return;
      }
      goto L_08947CA0;
    }
L_08947CA0:
    ctx.gpr[31] = (0x08947CA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 597u, 0x089D3458u>(ctx, &aot_mem) && ctx.pc == 0x08947CA8u) goto L_08947CA8;
    return;
L_08947CA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08947CB4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 696u, 0x0890EF94u>(ctx, &aot_mem) && ctx.pc == 0x08947CB4u) goto L_08947CB4;
    return;
L_08947CB4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08947CD0;
      }
      goto L_08947CBC;
    }
L_08947CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947CD8;
      }
      goto L_08947CC8;
    }
L_08947CC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08947CF8;
      }
      goto L_08947CD0;
    }
L_08947CD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 5u, 0x08948020u>(ctx, &aot_mem); return;
      }
      goto L_08947CD8;
    }
L_08947CD8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08947CE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08947CE8u) goto L_08947CE8;
    return;
L_08947CE8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08947CF8;
L_08947CF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(346)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947D2C;
      }
      goto L_08947D10;
    }
L_08947D10:
    ctx.gpr[31] = (0x08947D18u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08947D18u) goto L_08947D18;
    return;
L_08947D18:
    ctx.gpr[4] = (0u | 4u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08947D34;
    }
    goto L_08947D24;
L_08947D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947E90;
      }
      goto L_08947D2C;
    }
L_08947D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 5u, 0x08948020u>(ctx, &aot_mem); return;
      }
      goto L_08947D34;
    }
L_08947D34:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08947D60;
    }
    goto L_08947D3C;
L_08947D3C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[31] = (0x08947D4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08947D4Cu) goto L_08947D4C;
    return;
L_08947D4C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08947D60;
L_08947D60:
    ctx.gpr[5] = (ctx.gpr[5] ^ 65535u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947E90;
      }
      goto L_08947D74;
    }
L_08947D74:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 65535u);
      if (branch_taken) {
          goto L_08947D9C;
      }
      goto L_08947D7C;
    }
L_08947D7C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(19));
    ctx.gpr[31] = (0x08947D8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08947D8Cu) goto L_08947D8C;
    return;
L_08947D8C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08947D9C;
L_08947D9C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08947DB0;
      }
      goto L_08947DA8;
    }
L_08947DA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08947DC0;
      }
      goto L_08947DB0;
    }
L_08947DB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08947DBCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08947DBCu) goto L_08947DBC;
    return;
L_08947DBC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08947DC0;
L_08947DC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947E90;
      }
      goto L_08947DC8;
    }
L_08947DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08947DF8;
    }
    goto L_08947DD4;
L_08947DD4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08947DE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08947DE4u) goto L_08947DE4;
    return;
L_08947DE4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08947DF8;
L_08947DF8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08947E0C;
      }
      goto L_08947E00;
    }
L_08947E00:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08947E1C;
      }
      goto L_08947E0C;
    }
L_08947E0C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08947E18u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08947E18u) goto L_08947E18;
    return;
L_08947E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    goto L_08947E1C;
L_08947E1C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947E90;
      }
      goto L_08947E24;
    }
L_08947E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08947E54;
    }
    goto L_08947E30;
L_08947E30:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(21));
    ctx.gpr[31] = (0x08947E40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08947E40u) goto L_08947E40;
    return;
L_08947E40:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08947E54;
L_08947E54:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08947E70;
      }
      goto L_08947E5C;
    }
L_08947E5C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_08947E88;
      }
      goto L_08947E70;
    }
L_08947E70:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08947E7Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08947E7Cu) goto L_08947E7C;
    return;
L_08947E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    goto L_08947E88;
L_08947E88:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947EC0;
      }
      goto L_08947E90;
    }
L_08947E90:
    ctx.gpr[31] = (0x08947E98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08947E98u) goto L_08947E98;
    return;
L_08947E98:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08947EB8;
      }
      goto L_08947EA4;
    }
L_08947EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947EC8;
      }
      goto L_08947EB0;
    }
L_08947EB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_08947EEC;
      }
      goto L_08947EB8;
    }
L_08947EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 5u, 0x08948020u>(ctx, &aot_mem); return;
      }
      goto L_08947EC0;
    }
L_08947EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 5u, 0x08948020u>(ctx, &aot_mem); return;
      }
      goto L_08947EC8;
    }
L_08947EC8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(22));
    ctx.gpr[31] = (0x08947ED8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08947ED8u) goto L_08947ED8;
    return;
L_08947ED8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08947EEC;
L_08947EEC:
    ctx.gpr[5] = (ctx.gpr[5] ^ 65535u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947EB8;
      }
      goto L_08947F00;
    }
L_08947F00:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 65535u);
      if (branch_taken) {
          goto L_08947F28;
      }
      goto L_08947F08;
    }
L_08947F08:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(23));
    ctx.gpr[31] = (0x08947F18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08947F18u) goto L_08947F18;
    return;
L_08947F18:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08947F28;
L_08947F28:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08947F3C;
      }
      goto L_08947F34;
    }
L_08947F34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08947F4C;
      }
      goto L_08947F3C;
    }
L_08947F3C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08947F48u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08947F48u) goto L_08947F48;
    return;
L_08947F48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08947F4C;
L_08947F4C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947EB8;
      }
      goto L_08947F54;
    }
L_08947F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08947F84;
    }
    goto L_08947F60;
L_08947F60:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08947F70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08947F70u) goto L_08947F70;
    return;
L_08947F70:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08947F84;
L_08947F84:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08947F98;
      }
      goto L_08947F8C;
    }
L_08947F8C:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08947FA8;
      }
      goto L_08947F98;
    }
L_08947F98:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08947FA4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08947FA4u) goto L_08947FA4;
    return;
L_08947FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    goto L_08947FA8;
L_08947FA8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947EB8;
      }
      goto L_08947FB0;
    }
L_08947FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08947FE0;
    }
    goto L_08947FBC;
L_08947FBC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(25));
    ctx.gpr[31] = (0x08947FCCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08947FCCu) goto L_08947FCC;
    return;
L_08947FCC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08947FE0;
L_08947FE0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08947FFC;
      }
      goto L_08947FE8;
    }
L_08947FE8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(62)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948014u>(ctx, &aot_mem); return;
      }
      goto L_08947FFC;
    }
L_08947FFC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.pc = 0x08948000u; return;
}

void recomp_unit_0080(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0080_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_80(Runtime &runtime) {
    runtime.register_generated_unit(80u, 0x08944000u, 16384u, &recomp_unit_0080, &recomp_unit_0080_entry);
    runtime.register_function(0x08944000u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944014u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944048u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944070u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944094u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944124u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944150u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944160u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944180u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944228u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944238u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944240u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944338u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944378u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944388u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089443A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089443E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944410u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944420u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944440u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944478u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894450Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944534u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944544u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944564u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944598u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944600u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944614u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894461Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944708u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944744u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944764u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089447A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089447D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944804u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944824u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894485Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894488Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944918u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944940u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944970u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944990u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944ECCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944ED8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EFCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894500Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945010u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945024u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894502Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945038u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945050u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945064u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945070u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945098u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894509Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945104u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945110u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945120u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894512Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945138u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945158u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894516Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945190u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945204u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894520Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945214u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945224u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945228u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945234u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894523Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945248u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945258u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945260u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945270u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894527Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945280u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945288u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945298u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945304u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894530Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945314u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945330u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894533Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945398u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945404u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945410u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945424u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945450u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945460u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945478u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945484u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894550Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945514u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894551Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945520u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894553Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945568u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894557Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945588u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945594u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945600u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945620u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894562Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945634u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894563Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945658u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945660u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945668u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945670u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945680u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945688u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945690u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945694u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945704u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945710u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894572Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945738u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945744u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945754u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894576Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945774u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945798u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945808u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945814u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945820u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945830u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945848u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945854u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945870u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945884u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894588Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945900u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945908u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945910u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945914u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945930u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945944u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945954u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945960u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945970u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945980u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945988u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894599Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945AA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945AB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945AC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B88u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DCCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E64u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945EC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945ED4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945EE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945EECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945EFCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F88u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946004u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946024u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894602Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946038u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894604Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894606Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946074u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946088u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946104u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894610Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946118u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946130u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946138u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946140u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946148u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946150u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946158u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946168u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089461A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089461B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089461C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089461D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894624Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894628Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946304u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946354u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946394u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089463C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089463D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946400u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946404u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946410u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946414u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946420u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894642Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946460u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894646Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946498u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894651Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894653Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894654Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946558u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894656Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894659Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946604u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894660Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946620u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946628u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946638u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946648u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946658u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946668u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946678u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946680u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946688u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946694u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894670Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946718u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946724u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894672Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946730u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894673Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946748u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894674Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946770u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946808u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946818u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946828u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946838u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894684Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946854u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946860u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946868u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894687Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946888u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946890u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946898u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946908u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946918u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946920u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946924u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894693Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946960u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894696Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894697Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946984u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946ACCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AFCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DFCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947010u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947018u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947020u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947030u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947038u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947040u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947048u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894705Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894707Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894708Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089470B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089470C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089470F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947100u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947114u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947130u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947138u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947140u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947154u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947160u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947188u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894718Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947190u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947198u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947218u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947224u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894722Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947234u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947240u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947268u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947278u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894729Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947308u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894731Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947324u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947340u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947364u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894736Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947390u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947398u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947404u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947408u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947420u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947428u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894743Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947454u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894745Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947468u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947470u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947480u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894748Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894749Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947504u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947510u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894751Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947534u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947540u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947548u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947550u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894755Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947564u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894756Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947574u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947584u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947590u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947600u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947608u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947610u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947618u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947620u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947628u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894762Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947634u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894763Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947650u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947658u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947660u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947668u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947670u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947678u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947680u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947688u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947718u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947720u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947728u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947738u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894774Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894776Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947774u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894777Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947794u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947808u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947814u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947838u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947848u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947858u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947868u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947870u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894787Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947888u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947890u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894789Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947900u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947920u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947928u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894793Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947944u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894795Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947968u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947978u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947980u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947984u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947990u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A88u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947ADCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BFCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E88u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947ED8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FCCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FFCu, &recomp_unit_0080, "recomp_unit_0080");
}
} // namespace psprecomp
