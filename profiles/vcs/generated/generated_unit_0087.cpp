#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0087[4095] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 14, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 42, 0, 0,
    0, 43, 0, 44, 0, 45, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0,
    72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0,
    93, 0, 94, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 137,
    0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0,
    0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0,
    155, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165,
    0, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 0,
    0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 181, 0, 182, 0, 0, 0, 183, 0, 184, 185, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 225, 226, 0, 227, 0, 0, 228, 0,
    0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 233, 234, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 244, 245, 0, 246, 0, 0, 247, 0, 0,
    0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 252, 253, 0, 254, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0,
    265, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 269, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0, 0,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0,
    0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 295, 296, 0, 297,
    0, 298, 0, 299, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0,
    0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0,
    326, 0, 0, 0, 327, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332,
    0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0,
    0, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0,
    0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0,
    0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0,
    0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 360, 0, 0,
    361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0,
    0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0,
    372, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 378, 0,
    0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0,
    394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399,
    0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 402, 0, 403, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406,
    0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0,
    412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 418,
    0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0,
    0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0,
    0, 0, 439, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 446, 0, 0,
    447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0,
    0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0,
    457, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0,
    0, 0, 465, 0, 466, 0, 0, 467, 0, 468, 0, 0, 469, 0, 470, 0, 0, 471, 0, 472, 473, 0, 474, 0, 0, 0, 475, 0, 0, 476, 477, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484,
    0, 485, 0, 486, 0, 487, 488, 0, 0, 489, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0,
    0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 0, 0, 0, 0, 502, 0,
    0, 503, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 506, 507, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 510, 511, 0, 512, 0, 0,
    513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0,
    518, 0, 0, 0, 519, 0, 520, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0,
    0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 530,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0,
    536, 0, 0, 0, 537, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 542, 0, 0,
    0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 0, 550, 551,
    0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0,
    556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 560, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0,
    570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576,
    0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 580, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584,
    0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 591, 0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594,
    0, 0, 0, 0, 595, 596, 0, 0, 0, 0, 597, 598, 0, 0, 0, 0, 599, 600, 0, 0, 0, 0, 0, 601, 602, 0, 0, 0, 603, 0, 0, 0,
    604, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 608, 609, 0, 610, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 613,
    0, 0, 0, 614, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0,
    0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0,
    628, 629, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 634, 0, 0, 635, 0, 636, 0, 0, 0,
    0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0,
    0, 644, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 651, 0, 652,
    0, 653, 0, 654, 0, 655, 0, 656, 657, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 662, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 666, 0, 667, 0, 668, 0, 669, 0, 670, 0,
    0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0, 675, 0, 676, 0, 0, 0, 677, 0,
    678, 0, 0, 0, 679, 0, 680, 0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685, 686, 0, 0, 0,
    687, 0, 688, 0, 0, 0, 689, 0, 0, 690, 0, 0, 0, 0, 0, 691, 0, 692, 0, 693, 0, 0, 694, 0, 695, 0, 0, 696, 0, 697, 698, 0,
    699, 0, 700, 0, 701, 0, 702, 0, 703, 0, 0, 0, 704, 0, 705, 0, 0, 706, 0, 707, 0, 708, 0, 0, 709, 710, 0, 711, 0, 712, 0, 0,
    0, 713, 0, 714, 0, 715, 0, 0, 0, 716, 0, 717, 0, 718, 0, 0, 719, 0, 720, 0, 0, 0, 721, 0, 722, 0, 723, 0, 724, 0, 725, 0,
    0, 0, 726, 0, 727, 0, 728, 0, 0, 729, 0, 730, 0, 0, 0, 731, 0, 732, 0, 733, 0, 734, 0, 735, 0, 0, 0, 0, 736, 0, 737, 0,
    0, 0, 738, 0, 739, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 744, 0, 745, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 749, 750, 0, 751, 0, 0,
    0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 754, 0, 755, 756, 0, 0, 0, 0, 0, 757, 0, 0, 758, 0, 759, 0, 760,
    0, 761, 0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 765, 0, 0, 766, 0, 0, 767, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 769, 0, 0, 770, 0, 0, 771, 0, 772, 0, 773, 0, 774, 0, 775, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0, 778, 0, 779, 780, 0,
    0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0,
    0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 793, 0, 0, 0, 0, 794, 0, 0, 795, 0, 0, 0, 0, 796, 0, 0, 0, 0,
    797, 0, 798, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 800, 0, 0, 801, 802, 0, 0, 0, 0, 0, 803, 0, 0, 804, 0, 805, 0,
    0, 0, 0, 0, 0, 806, 0, 0, 807, 808, 0, 0, 0, 0, 0, 0, 809, 0, 0, 810, 811, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 813,
    0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 815, 0, 0, 816, 817, 0, 0, 818, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 820,
    0, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0,
    0, 0, 0, 0, 826, 0, 0, 0, 827, 0, 0, 0, 828, 0, 0, 0, 829, 0, 0, 0, 0, 0, 830, 831, 0, 0, 0, 832, 0, 0, 833,
};
void recomp_unit_0087_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08960000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0087[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08960000;
    case 2u: goto L_08960018;
    case 3u: goto L_08960020;
    case 4u: goto L_08960028;
    case 5u: goto L_08960030;
    case 6u: goto L_0896006C;
    case 7u: goto L_08960090;
    case 8u: goto L_089600AC;
    case 9u: goto L_089600C8;
    case 10u: goto L_089600D4;
    case 11u: goto L_08960104;
    case 12u: goto L_0896011C;
    case 13u: goto L_0896012C;
    case 14u: goto L_08960134;
    case 15u: goto L_08960138;
    case 16u: goto L_08960154;
    case 17u: goto L_08960194;
    case 18u: goto L_0896019C;
    case 19u: goto L_089601C8;
    case 20u: goto L_08960200;
    case 21u: goto L_0896022C;
    case 22u: goto L_08960240;
    case 23u: goto L_08960278;
    case 24u: goto L_0896029C;
    case 25u: goto L_089602A8;
    case 26u: goto L_089602B4;
    case 27u: goto L_089602B8;
    case 28u: goto L_089602C8;
    case 29u: goto L_08960304;
    case 30u: goto L_0896030C;
    case 31u: goto L_08960314;
    case 32u: goto L_0896033C;
    case 33u: goto L_08960340;
    case 34u: goto L_08960350;
    case 35u: goto L_08960388;
    case 36u: goto L_089603B0;
    case 37u: goto L_089603BC;
    case 38u: goto L_089603C4;
    case 39u: goto L_089603D4;
    case 40u: goto L_089603E4;
    case 41u: goto L_089603EC;
    case 42u: goto L_089603F4;
    case 43u: goto L_08960404;
    case 44u: goto L_0896040C;
    case 45u: goto L_08960414;
    case 46u: goto L_08960418;
    case 47u: goto L_08960424;
    case 48u: goto L_08960450;
    case 49u: goto L_08960468;
    case 50u: goto L_08960490;
    case 51u: goto L_08960498;
    case 52u: goto L_089604A0;
    case 53u: goto L_089604A8;
    case 54u: goto L_089604B0;
    case 55u: goto L_089604B8;
    case 56u: goto L_089604C8;
    case 57u: goto L_089604D0;
    case 58u: goto L_089604E0;
    case 59u: goto L_089604F8;
    case 60u: goto L_08960528;
    case 61u: goto L_08960530;
    case 62u: goto L_08960538;
    case 63u: goto L_08960540;
    case 64u: goto L_08960548;
    case 65u: goto L_08960550;
    case 66u: goto L_08960560;
    case 67u: goto L_08960580;
    case 68u: goto L_08960590;
    case 69u: goto L_089605D0;
    case 70u: goto L_089605E8;
    case 71u: goto L_089605F8;
    case 72u: goto L_08960600;
    case 73u: goto L_08960608;
    case 74u: goto L_08960610;
    case 75u: goto L_08960618;
    case 76u: goto L_08960620;
    case 77u: goto L_08960628;
    case 78u: goto L_08960640;
    case 79u: goto L_08960650;
    case 80u: goto L_08960658;
    case 81u: goto L_08960660;
    case 82u: goto L_08960668;
    case 83u: goto L_0896069C;
    case 84u: goto L_089606AC;
    case 85u: goto L_089606B4;
    case 86u: goto L_089606BC;
    case 87u: goto L_089606D0;
    case 88u: goto L_089606E4;
    case 89u: goto L_089606FC;
    case 90u: goto L_089607E0;
    case 91u: goto L_089607EC;
    case 92u: goto L_089607F8;
    case 93u: goto L_08960800;
    case 94u: goto L_08960808;
    case 95u: goto L_0896080C;
    case 96u: goto L_08960814;
    case 97u: goto L_0896085C;
    case 98u: goto L_08960880;
    case 99u: goto L_089608A4;
    case 100u: goto L_089608B8;
    case 101u: goto L_089608C0;
    case 102u: goto L_089608D4;
    case 103u: goto L_08960908;
    case 104u: goto L_08960910;
    case 105u: goto L_0896093C;
    case 106u: goto L_0896095C;
    case 107u: goto L_08960964;
    case 108u: goto L_08960974;
    case 109u: goto L_08960990;
    case 110u: goto L_089609A0;
    case 111u: goto L_089609B4;
    case 112u: goto L_089609D4;
    case 113u: goto L_089609DC;
    case 114u: goto L_089609EC;
    case 115u: goto L_08960A08;
    case 116u: goto L_08960A18;
    case 117u: goto L_08960A2C;
    case 118u: goto L_08960A60;
    case 119u: goto L_08960A70;
    case 120u: goto L_08960A7C;
    case 121u: goto L_08960A98;
    case 122u: goto L_08960AA8;
    case 123u: goto L_08960AB8;
    case 124u: goto L_08960AC4;
    case 125u: goto L_08960ACC;
    case 126u: goto L_08960AD4;
    case 127u: goto L_08960AE4;
    case 128u: goto L_08960AF4;
    case 129u: goto L_08960B18;
    case 130u: goto L_08960B28;
    case 131u: goto L_08960B3C;
    case 132u: goto L_08960B48;
    case 133u: goto L_08960B58;
    case 134u: goto L_08960B60;
    case 135u: goto L_08960B6C;
    case 136u: goto L_08960B74;
    case 137u: goto L_08960B7C;
    case 138u: goto L_08960B84;
    case 139u: goto L_08960B8C;
    case 140u: goto L_08960B9C;
    case 141u: goto L_08960BAC;
    case 142u: goto L_08960BE0;
    case 143u: goto L_08960BF8;
    case 144u: goto L_08960C04;
    case 145u: goto L_08960C0C;
    case 146u: goto L_08960C14;
    case 147u: goto L_08960C1C;
    case 148u: goto L_08960C24;
    case 149u: goto L_08960C34;
    case 150u: goto L_08960C40;
    case 151u: goto L_08960C50;
    case 152u: goto L_08960C60;
    case 153u: goto L_08960C70;
    case 154u: goto L_08960C78;
    case 155u: goto L_08960C80;
    case 156u: goto L_08960C88;
    case 157u: goto L_08960C90;
    case 158u: goto L_08960CA0;
    case 159u: goto L_08960CB0;
    case 160u: goto L_08960CC0;
    case 161u: goto L_08960CC8;
    case 162u: goto L_08960CD0;
    case 163u: goto L_08960CDC;
    case 164u: goto L_08960CEC;
    case 165u: goto L_08960CFC;
    case 166u: goto L_08960D08;
    case 167u: goto L_08960D14;
    case 168u: goto L_08960D1C;
    case 169u: goto L_08960D24;
    case 170u: goto L_08960D34;
    case 171u: goto L_08960D44;
    case 172u: goto L_08960D58;
    case 173u: goto L_08960D64;
    case 174u: goto L_08960D6C;
    case 175u: goto L_08960D74;
    case 176u: goto L_08960D84;
    case 177u: goto L_08960D8C;
    case 178u: goto L_08960DB0;
    case 179u: goto L_08960DC0;
    case 180u: goto L_08960DC8;
    case 181u: goto L_08960DCC;
    case 182u: goto L_08960DD4;
    case 183u: goto L_08960DE4;
    case 184u: goto L_08960DEC;
    case 185u: goto L_08960DF0;
    case 186u: goto L_08960DF8;
    case 187u: goto L_08960E48;
    case 188u: goto L_08960E78;
    case 189u: goto L_08960EA8;
    case 190u: goto L_08960ED8;
    case 191u: goto L_08960F08;
    case 192u: goto L_08960F38;
    case 193u: goto L_08960F68;
    case 194u: goto L_08960F98;
    case 195u: goto L_08960FC8;
    case 196u: goto L_08960FF8;
    case 197u: goto L_08961028;
    case 198u: goto L_08961058;
    case 199u: goto L_08961088;
    case 200u: goto L_089610B8;
    case 201u: goto L_089610E8;
    case 202u: goto L_08961118;
    case 203u: goto L_08961144;
    case 204u: goto L_08961158;
    case 205u: goto L_089611A0;
    case 206u: goto L_089611D0;
    case 207u: goto L_08961200;
    case 208u: goto L_08961230;
    case 209u: goto L_08961260;
    case 210u: goto L_08961290;
    case 211u: goto L_089612C0;
    case 212u: goto L_089612F0;
    case 213u: goto L_08961320;
    case 214u: goto L_08961350;
    case 215u: goto L_08961380;
    case 216u: goto L_089613B0;
    case 217u: goto L_089613E0;
    case 218u: goto L_08961410;
    case 219u: goto L_08961440;
    case 220u: goto L_08961470;
    case 221u: goto L_0896149C;
    case 222u: goto L_089614B0;
    case 223u: goto L_089614CC;
    case 224u: goto L_089614D8;
    case 225u: goto L_089614E0;
    case 226u: goto L_089614E4;
    case 227u: goto L_089614EC;
    case 228u: goto L_089614F8;
    case 229u: goto L_0896150C;
    case 230u: goto L_08961518;
    case 231u: goto L_08961524;
    case 232u: goto L_08961530;
    case 233u: goto L_08961538;
    case 234u: goto L_0896153C;
    case 235u: goto L_08961544;
    case 236u: goto L_0896154C;
    case 237u: goto L_0896155C;
    case 238u: goto L_0896156C;
    case 239u: goto L_08961578;
    case 240u: goto L_08961598;
    case 241u: goto L_089615AC;
    case 242u: goto L_089615C8;
    case 243u: goto L_089615D4;
    case 244u: goto L_089615DC;
    case 245u: goto L_089615E0;
    case 246u: goto L_089615E8;
    case 247u: goto L_089615F4;
    case 248u: goto L_0896160C;
    case 249u: goto L_08961618;
    case 250u: goto L_08961624;
    case 251u: goto L_08961630;
    case 252u: goto L_08961638;
    case 253u: goto L_0896163C;
    case 254u: goto L_08961644;
    case 255u: goto L_0896164C;
    case 256u: goto L_08961654;
    case 257u: goto L_08961664;
    case 258u: goto L_08961674;
    case 259u: goto L_08961680;
    case 260u: goto L_089616A0;
    case 261u: goto L_089616B4;
    case 262u: goto L_089616C8;
    case 263u: goto L_089616DC;
    case 264u: goto L_089616E8;
    case 265u: goto L_08961700;
    case 266u: goto L_0896170C;
    case 267u: goto L_08961720;
    case 268u: goto L_08961730;
    case 269u: goto L_08961738;
    case 270u: goto L_0896173C;
    case 271u: goto L_0896174C;
    case 272u: goto L_0896175C;
    case 273u: goto L_08961764;
    case 274u: goto L_08961774;
    case 275u: goto L_08961794;
    case 276u: goto L_089617A4;
    case 277u: goto L_089617B0;
    case 278u: goto L_089617B8;
    case 279u: goto L_089617D0;
    case 280u: goto L_089617E4;
    case 281u: goto L_089617F8;
    case 282u: goto L_08961854;
    case 283u: goto L_089618B4;
    case 284u: goto L_089618BC;
    case 285u: goto L_089618C4;
    case 286u: goto L_089618DC;
    case 287u: goto L_089618F4;
    case 288u: goto L_0896190C;
    case 289u: goto L_08961920;
    case 290u: goto L_0896192C;
    case 291u: goto L_08961934;
    case 292u: goto L_0896194C;
    case 293u: goto L_08961954;
    case 294u: goto L_08961968;
    case 295u: goto L_08961970;
    case 296u: goto L_08961974;
    case 297u: goto L_0896197C;
    case 298u: goto L_08961984;
    case 299u: goto L_0896198C;
    case 300u: goto L_08961994;
    case 301u: goto L_089619A4;
    case 302u: goto L_089619B8;
    case 303u: goto L_089619D0;
    case 304u: goto L_08961A00;
    case 305u: goto L_08961A18;
    case 306u: goto L_08961A38;
    case 307u: goto L_08961A44;
    case 308u: goto L_08961A48;
    case 309u: goto L_08961A60;
    case 310u: goto L_08961A78;
    case 311u: goto L_08961A90;
    case 312u: goto L_08961AA8;
    case 313u: goto L_08961AC0;
    case 314u: goto L_08961AF0;
    case 315u: goto L_08961B08;
    case 316u: goto L_08961B28;
    case 317u: goto L_08961B50;
    case 318u: goto L_08961B5C;
    case 319u: goto L_08961B78;
    case 320u: goto L_08961B98;
    case 321u: goto L_08961BBC;
    case 322u: goto L_08961BC4;
    case 323u: goto L_08961BCC;
    case 324u: goto L_08961BE4;
    case 325u: goto L_08961BF4;
    case 326u: goto L_08961C00;
    case 327u: goto L_08961C10;
    case 328u: goto L_08961C18;
    case 329u: goto L_08961C24;
    case 330u: goto L_08961C34;
    case 331u: goto L_08961C64;
    case 332u: goto L_08961C7C;
    case 333u: goto L_08961C9C;
    case 334u: goto L_08961CA8;
    case 335u: goto L_08961CB8;
    case 336u: goto L_08961CE4;
    case 337u: goto L_08961CF4;
    case 338u: goto L_08961D0C;
    case 339u: goto L_08961D14;
    case 340u: goto L_08961D24;
    case 341u: goto L_08961D3C;
    case 342u: goto L_08961D54;
    case 343u: goto L_08961D6C;
    case 344u: goto L_08961D84;
    case 345u: goto L_08961D9C;
    case 346u: goto L_08961DCC;
    case 347u: goto L_08961DE4;
    case 348u: goto L_08961E04;
    case 349u: goto L_08961E2C;
    case 350u: goto L_08961E38;
    case 351u: goto L_08961E54;
    case 352u: goto L_08961E74;
    case 353u: goto L_08961E98;
    case 354u: goto L_08961EA0;
    case 355u: goto L_08961EA8;
    case 356u: goto L_08961EC0;
    case 357u: goto L_08961ED0;
    case 358u: goto L_08961EDC;
    case 359u: goto L_08961EEC;
    case 360u: goto L_08961EF4;
    case 361u: goto L_08961F00;
    case 362u: goto L_08961F10;
    case 363u: goto L_08961F40;
    case 364u: goto L_08961F58;
    case 365u: goto L_08961F78;
    case 366u: goto L_08961F84;
    case 367u: goto L_08961F94;
    case 368u: goto L_08961FC0;
    case 369u: goto L_08961FD0;
    case 370u: goto L_08961FE8;
    case 371u: goto L_08961FF0;
    case 372u: goto L_08962000;
    case 373u: goto L_0896200C;
    case 374u: goto L_0896201C;
    case 375u: goto L_08962048;
    case 376u: goto L_08962058;
    case 377u: goto L_08962070;
    case 378u: goto L_08962078;
    case 379u: goto L_08962084;
    case 380u: goto L_08962090;
    case 381u: goto L_089620A8;
    case 382u: goto L_089620C0;
    case 383u: goto L_089620E0;
    case 384u: goto L_089620F8;
    case 385u: goto L_08962110;
    case 386u: goto L_08962128;
    case 387u: goto L_08962140;
    case 388u: goto L_08962144;
    case 389u: goto L_08962178;
    case 390u: goto L_08962190;
    case 391u: goto L_089621B0;
    case 392u: goto L_089621D8;
    case 393u: goto L_089621E4;
    case 394u: goto L_08962200;
    case 395u: goto L_08962220;
    case 396u: goto L_08962244;
    case 397u: goto L_0896224C;
    case 398u: goto L_0896225C;
    case 399u: goto L_0896227C;
    case 400u: goto L_0896228C;
    case 401u: goto L_08962298;
    case 402u: goto L_089622A8;
    case 403u: goto L_089622B0;
    case 404u: goto L_089622BC;
    case 405u: goto L_089622CC;
    case 406u: goto L_089622FC;
    case 407u: goto L_08962314;
    case 408u: goto L_08962334;
    case 409u: goto L_08962340;
    case 410u: goto L_08962364;
    case 411u: goto L_08962374;
    case 412u: goto L_08962380;
    case 413u: goto L_08962390;
    case 414u: goto L_089623BC;
    case 415u: goto L_089623CC;
    case 416u: goto L_089623E4;
    case 417u: goto L_089623EC;
    case 418u: goto L_089623FC;
    case 419u: goto L_08962408;
    case 420u: goto L_0896242C;
    case 421u: goto L_0896243C;
    case 422u: goto L_08962448;
    case 423u: goto L_08962458;
    case 424u: goto L_08962484;
    case 425u: goto L_08962494;
    case 426u: goto L_089624AC;
    case 427u: goto L_089624B4;
    case 428u: goto L_089624C4;
    case 429u: goto L_089624DC;
    case 430u: goto L_089624F4;
    case 431u: goto L_0896250C;
    case 432u: goto L_0896253C;
    case 433u: goto L_08962554;
    case 434u: goto L_08962574;
    case 435u: goto L_0896259C;
    case 436u: goto L_089625A8;
    case 437u: goto L_089625C4;
    case 438u: goto L_089625E4;
    case 439u: goto L_08962608;
    case 440u: goto L_08962610;
    case 441u: goto L_08962620;
    case 442u: goto L_08962640;
    case 443u: goto L_08962650;
    case 444u: goto L_0896265C;
    case 445u: goto L_0896266C;
    case 446u: goto L_08962674;
    case 447u: goto L_08962680;
    case 448u: goto L_08962690;
    case 449u: goto L_089626C0;
    case 450u: goto L_089626D8;
    case 451u: goto L_089626F8;
    case 452u: goto L_08962704;
    case 453u: goto L_0896271C;
    case 454u: goto L_0896272C;
    case 455u: goto L_08962758;
    case 456u: goto L_08962768;
    case 457u: goto L_08962780;
    case 458u: goto L_08962788;
    case 459u: goto L_08962794;
    case 460u: goto L_089627A0;
    case 461u: goto L_089627B8;
    case 462u: goto L_089627CC;
    case 463u: goto L_089627DC;
    case 464u: goto L_089627F4;
    case 465u: goto L_08962808;
    case 466u: goto L_08962810;
    case 467u: goto L_0896281C;
    case 468u: goto L_08962824;
    case 469u: goto L_08962830;
    case 470u: goto L_08962838;
    case 471u: goto L_08962844;
    case 472u: goto L_0896284C;
    case 473u: goto L_08962850;
    case 474u: goto L_08962858;
    case 475u: goto L_08962868;
    case 476u: goto L_08962874;
    case 477u: goto L_08962878;
    case 478u: goto L_089628A4;
    case 479u: goto L_089628C4;
    case 480u: goto L_089628DC;
    case 481u: goto L_089628E4;
    case 482u: goto L_089628EC;
    case 483u: goto L_089628F4;
    case 484u: goto L_089628FC;
    case 485u: goto L_08962904;
    case 486u: goto L_0896290C;
    case 487u: goto L_08962914;
    case 488u: goto L_08962918;
    case 489u: goto L_08962924;
    case 490u: goto L_08962934;
    case 491u: goto L_0896293C;
    case 492u: goto L_08962954;
    case 493u: goto L_0896296C;
    case 494u: goto L_08962984;
    case 495u: goto L_0896299C;
    case 496u: goto L_089629B0;
    case 497u: goto L_089629C0;
    case 498u: goto L_089629C8;
    case 499u: goto L_089629D0;
    case 500u: goto L_089629D8;
    case 501u: goto L_089629E0;
    case 502u: goto L_089629F8;
    case 503u: goto L_08962A04;
    case 504u: goto L_08962A14;
    case 505u: goto L_08962A20;
    case 506u: goto L_08962A38;
    case 507u: goto L_08962A3C;
    case 508u: goto L_08962A44;
    case 509u: goto L_08962A50;
    case 510u: goto L_08962A68;
    case 511u: goto L_08962A6C;
    case 512u: goto L_08962A74;
    case 513u: goto L_08962A80;
    case 514u: goto L_08962A98;
    case 515u: goto L_08962AB0;
    case 516u: goto L_08962ABC;
    case 517u: goto L_08962AF4;
    case 518u: goto L_08962B00;
    case 519u: goto L_08962B10;
    case 520u: goto L_08962B18;
    case 521u: goto L_08962B24;
    case 522u: goto L_08962B38;
    case 523u: goto L_08962B54;
    case 524u: goto L_08962B74;
    case 525u: goto L_08962B8C;
    case 526u: goto L_08962BAC;
    case 527u: goto L_08962BCC;
    case 528u: goto L_08962BDC;
    case 529u: goto L_08962BF4;
    case 530u: goto L_08962BFC;
    case 531u: goto L_08962C38;
    case 532u: goto L_08962C48;
    case 533u: goto L_08962C50;
    case 534u: goto L_08962C64;
    case 535u: goto L_08962C78;
    case 536u: goto L_08962C80;
    case 537u: goto L_08962C90;
    case 538u: goto L_08962C98;
    case 539u: goto L_08962CA0;
    case 540u: goto L_08962CDC;
    case 541u: goto L_08962CEC;
    case 542u: goto L_08962CF4;
    case 543u: goto L_08962D0C;
    case 544u: goto L_08962D20;
    case 545u: goto L_08962D4C;
    case 546u: goto L_08962D54;
    case 547u: goto L_08962D5C;
    case 548u: goto L_08962D64;
    case 549u: goto L_08962D6C;
    case 550u: goto L_08962D78;
    case 551u: goto L_08962D7C;
    case 552u: goto L_08962D90;
    case 553u: goto L_08962DA8;
    case 554u: goto L_08962DC0;
    case 555u: goto L_08962DDC;
    case 556u: goto L_08962E00;
    case 557u: goto L_08962E18;
    case 558u: goto L_08962E34;
    case 559u: goto L_08962E48;
    case 560u: goto L_08962E4C;
    case 561u: goto L_08962E5C;
    case 562u: goto L_08962E88;
    case 563u: goto L_08962EAC;
    case 564u: goto L_08962EB8;
    case 565u: goto L_08962EC0;
    case 566u: goto L_08962F34;
    case 567u: goto L_08962F40;
    case 568u: goto L_08962F54;
    case 569u: goto L_08962F74;
    case 570u: goto L_08962F80;
    case 571u: goto L_08962F94;
    case 572u: goto L_08962FB4;
    case 573u: goto L_08962FC0;
    case 574u: goto L_08962FD0;
    case 575u: goto L_08962FF0;
    case 576u: goto L_08962FFC;
    case 577u: goto L_0896300C;
    case 578u: goto L_08963020;
    case 579u: goto L_08963030;
    case 580u: goto L_08963038;
    case 581u: goto L_08963040;
    case 582u: goto L_08963050;
    case 583u: goto L_08963068;
    case 584u: goto L_0896307C;
    case 585u: goto L_08963088;
    case 586u: goto L_089630C0;
    case 587u: goto L_089630EC;
    case 588u: goto L_08963118;
    case 589u: goto L_0896312C;
    case 590u: goto L_0896313C;
    case 591u: goto L_08963144;
    case 592u: goto L_08963150;
    case 593u: goto L_0896315C;
    case 594u: goto L_0896317C;
    case 595u: goto L_08963190;
    case 596u: goto L_08963194;
    case 597u: goto L_089631A8;
    case 598u: goto L_089631AC;
    case 599u: goto L_089631C0;
    case 600u: goto L_089631C4;
    case 601u: goto L_089631DC;
    case 602u: goto L_089631E0;
    case 603u: goto L_089631F0;
    case 604u: goto L_08963200;
    case 605u: goto L_0896320C;
    case 606u: goto L_08963224;
    case 607u: goto L_08963234;
    case 608u: goto L_08963244;
    case 609u: goto L_08963248;
    case 610u: goto L_08963250;
    case 611u: goto L_0896325C;
    case 612u: goto L_08963264;
    case 613u: goto L_0896327C;
    case 614u: goto L_0896328C;
    case 615u: goto L_08963294;
    case 616u: goto L_089632A4;
    case 617u: goto L_089632B8;
    case 618u: goto L_089632CC;
    case 619u: goto L_089632E4;
    case 620u: goto L_089632F8;
    case 621u: goto L_08963314;
    case 622u: goto L_08963324;
    case 623u: goto L_08963334;
    case 624u: goto L_0896333C;
    case 625u: goto L_0896334C;
    case 626u: goto L_08963364;
    case 627u: goto L_08963378;
    case 628u: goto L_08963380;
    case 629u: goto L_08963384;
    case 630u: goto L_0896338C;
    case 631u: goto L_089633A0;
    case 632u: goto L_089633C4;
    case 633u: goto L_089633CC;
    case 634u: goto L_089633DC;
    case 635u: goto L_089633E8;
    case 636u: goto L_089633F0;
    case 637u: goto L_08963408;
    case 638u: goto L_0896341C;
    case 639u: goto L_08963428;
    case 640u: goto L_08963444;
    case 641u: goto L_08963450;
    case 642u: goto L_0896345C;
    case 643u: goto L_08963468;
    case 644u: goto L_08963484;
    case 645u: goto L_08963494;
    case 646u: goto L_089634A0;
    case 647u: goto L_089634B0;
    case 648u: goto L_089634BC;
    case 649u: goto L_089634D0;
    case 650u: goto L_089634E4;
    case 651u: goto L_089634F4;
    case 652u: goto L_089634FC;
    case 653u: goto L_08963504;
    case 654u: goto L_0896350C;
    case 655u: goto L_08963514;
    case 656u: goto L_0896351C;
    case 657u: goto L_08963520;
    case 658u: goto L_08963524;
    case 659u: goto L_0896354C;
    case 660u: goto L_08963598;
    case 661u: goto L_089635A0;
    case 662u: goto L_089635A8;
    case 663u: goto L_089635B0;
    case 664u: goto L_089635C0;
    case 665u: goto L_089635D0;
    case 666u: goto L_089635D8;
    case 667u: goto L_089635E0;
    case 668u: goto L_089635E8;
    case 669u: goto L_089635F0;
    case 670u: goto L_089635F8;
    case 671u: goto L_08963610;
    case 672u: goto L_08963618;
    case 673u: goto L_0896364C;
    case 674u: goto L_08963654;
    case 675u: goto L_08963660;
    case 676u: goto L_08963668;
    case 677u: goto L_08963678;
    case 678u: goto L_08963680;
    case 679u: goto L_08963690;
    case 680u: goto L_08963698;
    case 681u: goto L_089636A8;
    case 682u: goto L_089636B0;
    case 683u: goto L_089636CC;
    case 684u: goto L_089636DC;
    case 685u: goto L_089636EC;
    case 686u: goto L_089636F0;
    case 687u: goto L_08963700;
    case 688u: goto L_08963708;
    case 689u: goto L_08963718;
    case 690u: goto L_08963724;
    case 691u: goto L_0896373C;
    case 692u: goto L_08963744;
    case 693u: goto L_0896374C;
    case 694u: goto L_08963758;
    case 695u: goto L_08963760;
    case 696u: goto L_0896376C;
    case 697u: goto L_08963774;
    case 698u: goto L_08963778;
    case 699u: goto L_08963780;
    case 700u: goto L_08963788;
    case 701u: goto L_08963790;
    case 702u: goto L_08963798;
    case 703u: goto L_089637A0;
    case 704u: goto L_089637B0;
    case 705u: goto L_089637B8;
    case 706u: goto L_089637C4;
    case 707u: goto L_089637CC;
    case 708u: goto L_089637D4;
    case 709u: goto L_089637E0;
    case 710u: goto L_089637E4;
    case 711u: goto L_089637EC;
    case 712u: goto L_089637F4;
    case 713u: goto L_08963804;
    case 714u: goto L_0896380C;
    case 715u: goto L_08963814;
    case 716u: goto L_08963824;
    case 717u: goto L_0896382C;
    case 718u: goto L_08963834;
    case 719u: goto L_08963840;
    case 720u: goto L_08963848;
    case 721u: goto L_08963858;
    case 722u: goto L_08963860;
    case 723u: goto L_08963868;
    case 724u: goto L_08963870;
    case 725u: goto L_08963878;
    case 726u: goto L_08963888;
    case 727u: goto L_08963890;
    case 728u: goto L_08963898;
    case 729u: goto L_089638A4;
    case 730u: goto L_089638AC;
    case 731u: goto L_089638BC;
    case 732u: goto L_089638C4;
    case 733u: goto L_089638CC;
    case 734u: goto L_089638D4;
    case 735u: goto L_089638DC;
    case 736u: goto L_089638F0;
    case 737u: goto L_089638F8;
    case 738u: goto L_08963908;
    case 739u: goto L_08963910;
    case 740u: goto L_08963924;
    case 741u: goto L_0896392C;
    case 742u: goto L_0896393C;
    case 743u: goto L_08963948;
    case 744u: goto L_08963958;
    case 745u: goto L_08963960;
    case 746u: goto L_08963990;
    case 747u: goto L_0896399C;
    case 748u: goto L_089639E0;
    case 749u: goto L_089639E8;
    case 750u: goto L_089639EC;
    case 751u: goto L_089639F4;
    case 752u: goto L_08963A08;
    case 753u: goto L_08963A34;
    case 754u: goto L_08963A3C;
    case 755u: goto L_08963A44;
    case 756u: goto L_08963A48;
    case 757u: goto L_08963A60;
    case 758u: goto L_08963A6C;
    case 759u: goto L_08963A74;
    case 760u: goto L_08963A7C;
    case 761u: goto L_08963A84;
    case 762u: goto L_08963A8C;
    case 763u: goto L_08963A98;
    case 764u: goto L_08963AA4;
    case 765u: goto L_08963AB0;
    case 766u: goto L_08963ABC;
    case 767u: goto L_08963AC8;
    case 768u: goto L_08963AD4;
    case 769u: goto L_08963B04;
    case 770u: goto L_08963B10;
    case 771u: goto L_08963B1C;
    case 772u: goto L_08963B24;
    case 773u: goto L_08963B2C;
    case 774u: goto L_08963B34;
    case 775u: goto L_08963B3C;
    case 776u: goto L_08963B48;
    case 777u: goto L_08963B54;
    case 778u: goto L_08963B6C;
    case 779u: goto L_08963B74;
    case 780u: goto L_08963B78;
    case 781u: goto L_08963B90;
    case 782u: goto L_08963BAC;
    case 783u: goto L_08963BF4;
    case 784u: goto L_08963C58;
    case 785u: goto L_08963C8C;
    case 786u: goto L_08963C9C;
    case 787u: goto L_08963CB0;
    case 788u: goto L_08963CC8;
    case 789u: goto L_08963CE8;
    case 790u: goto L_08963D08;
    case 791u: goto L_08963D18;
    case 792u: goto L_08963D28;
    case 793u: goto L_08963D38;
    case 794u: goto L_08963D4C;
    case 795u: goto L_08963D58;
    case 796u: goto L_08963D6C;
    case 797u: goto L_08963D80;
    case 798u: goto L_08963D88;
    case 799u: goto L_08963DA4;
    case 800u: goto L_08963DBC;
    case 801u: goto L_08963DC8;
    case 802u: goto L_08963DCC;
    case 803u: goto L_08963DE4;
    case 804u: goto L_08963DF0;
    case 805u: goto L_08963DF8;
    case 806u: goto L_08963E14;
    case 807u: goto L_08963E20;
    case 808u: goto L_08963E24;
    case 809u: goto L_08963E40;
    case 810u: goto L_08963E4C;
    case 811u: goto L_08963E50;
    case 812u: goto L_08963E74;
    case 813u: goto L_08963E7C;
    case 814u: goto L_08963E98;
    case 815u: goto L_08963EB4;
    case 816u: goto L_08963EC0;
    case 817u: goto L_08963EC4;
    case 818u: goto L_08963ED0;
    case 819u: goto L_08963EEC;
    case 820u: goto L_08963EFC;
    case 821u: goto L_08963F08;
    case 822u: goto L_08963F20;
    case 823u: goto L_08963F3C;
    case 824u: goto L_08963F54;
    case 825u: goto L_08963F78;
    case 826u: goto L_08963F90;
    case 827u: goto L_08963FA0;
    case 828u: goto L_08963FB0;
    case 829u: goto L_08963FC0;
    case 830u: goto L_08963FD8;
    case 831u: goto L_08963FDC;
    case 832u: goto L_08963FEC;
    case 833u: goto L_08963FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08960000:
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
          goto L_08960020;
      }
      goto L_08960018;
    }
L_08960018:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08960020;
L_08960020:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960030;
      }
      goto L_08960028;
    }
L_08960028:
    ctx.gpr[31] = (0x08960030u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 295u, 0x0895DEDCu>(ctx, &aot_mem) && ctx.pc == 0x08960030u) goto L_08960030;
    return;
L_08960030:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896006C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2448));
    ctx.gpr[7] = (2198u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-12212));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08960090u);
    ctx.gpr[6] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08960090u) goto L_08960090;
    return;
L_08960090:
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11888));
    ctx.gpr[7] = (2198u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-10720));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x089600ACu);
    ctx.gpr[6] = (0u | 320u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089600ACu) goto L_089600AC;
    return;
L_089600AC:
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13808));
    ctx.gpr[7] = (2198u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8780));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x089600C8u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089600C8u) goto L_089600C8;
    return;
L_089600C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089600D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 14u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08960138;
      }
      goto L_08960104;
    }
L_08960104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x0896011Cu);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem) && ctx.pc == 0x0896011Cu) goto L_0896011C;
    return;
L_0896011C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0896012Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896012Cu) goto L_0896012C;
    return;
L_0896012C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960138;
      }
      goto L_08960134;
    }
L_08960134:
    ctx.gpr[16] = (0u | 1u);
    goto L_08960138;
L_08960138:
    ctx.gpr[2] = (ctx.gpr[16] & 255u);
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
L_08960154:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[17] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08960194u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08960194u) goto L_08960194;
    return;
L_08960194:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960200;
      }
      goto L_0896019C;
    }
L_0896019C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960200;
      }
      goto L_089601C8;
    }
L_089601C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896022C;
      }
      goto L_08960200;
    }
L_08960200:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    goto L_0896022C;
L_0896022C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960240:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08960278u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08960278u) goto L_08960278;
    return;
L_08960278:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089602B4;
      }
      goto L_0896029C;
    }
L_0896029C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089602B4;
      }
      goto L_089602A8;
    }
L_089602A8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_089602B8;
      }
      goto L_089602B4;
    }
L_089602B4:
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    goto L_089602B8;
L_089602B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089602C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896033C;
      }
      goto L_08960304;
    }
L_08960304:
    ctx.gpr[31] = (0x0896030Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0896030Cu) goto L_0896030C;
    return;
L_0896030C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896033C;
      }
      goto L_08960314;
    }
L_08960314:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08960340;
      }
      goto L_0896033C;
    }
L_0896033C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08960340;
L_08960340:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960350:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08960388u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08960388u) goto L_08960388;
    return;
L_08960388:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089603C4;
      }
      goto L_089603B0;
    }
L_089603B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089603C4;
      }
      goto L_089603BC;
    }
L_089603BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_089603C4;
      }
      goto L_089603C4;
    }
L_089603C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089603D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089603E4u);
    // nop
    goto L_089602C8;
L_089603E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960414;
      }
      goto L_089603EC;
    }
L_089603EC:
    ctx.gpr[31] = (0x089603F4u);
    // nop
    goto L_089602C8;
L_089603F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08960414;
      }
      goto L_08960404;
    }
L_08960404:
    ctx.gpr[31] = (0x0896040Cu);
    // nop
    goto L_089602C8;
L_0896040C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960418;
      }
      goto L_08960414;
    }
L_08960414:
    ctx.gpr[2] = (0u | 0u);
    goto L_08960418;
L_08960418:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960424:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960450:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(5465)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089604B8;
      }
      goto L_08960468;
    }
L_08960468:
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089604B0;
      }
      goto L_08960490;
    }
L_08960490:
    ctx.gpr[31] = (0x08960498u);
    // nop
    goto L_089602C8;
L_08960498:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089604C8;
      }
      goto L_089604A0;
    }
L_089604A0:
    ctx.gpr[31] = (0x089604A8u);
    // nop
    goto L_089602C8;
L_089604A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089604D0;
      }
      goto L_089604B0;
    }
L_089604B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089604D0;
      }
      goto L_089604B8;
    }
L_089604B8:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089604D0;
      }
      goto L_089604C8;
    }
L_089604C8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    goto L_089604D0;
L_089604D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089604E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(5465)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960550;
      }
      goto L_089604F8;
    }
L_089604F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[16] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960548;
      }
      goto L_08960528;
    }
L_08960528:
    ctx.gpr[31] = (0x08960530u);
    // nop
    goto L_089602C8;
L_08960530:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08960560;
    }
    goto L_08960538;
L_08960538:
    ctx.gpr[31] = (0x08960540u);
    // nop
    goto L_089602C8;
L_08960540:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08960580;
      }
      goto L_08960548;
    }
L_08960548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08960580;
      }
      goto L_08960550;
    }
L_08960550:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08960580;
      }
      goto L_08960560;
    }
L_08960560:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    goto L_08960580;
L_08960580:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960590:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08960610;
      }
      goto L_089605D0;
    }
L_089605D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08960600;
      }
      goto L_089605E8;
    }
L_089605E8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08960600;
      }
      goto L_089605F8;
    }
L_089605F8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08960608;
      }
      goto L_08960600;
    }
L_08960600:
    ctx.gpr[31] = (0x08960608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08960608u) goto L_08960608;
    return;
L_08960608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089606BC;
      }
      goto L_08960610;
    }
L_08960610:
    ctx.gpr[31] = (0x08960618u);
    // nop
    goto L_089602C8;
L_08960618:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08960668;
    }
    goto L_08960620;
L_08960620:
    ctx.gpr[31] = (0x08960628u);
    // nop
    goto L_089602C8;
L_08960628:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08960658;
      }
      goto L_08960640;
    }
L_08960640:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08960658;
      }
      goto L_08960650;
    }
L_08960650:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08960660;
      }
      goto L_08960658;
    }
L_08960658:
    ctx.gpr[31] = (0x08960660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08960660u) goto L_08960660;
    return;
L_08960660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089606BC;
      }
      goto L_08960668;
    }
L_08960668:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089606B4;
      }
      goto L_0896069C;
    }
L_0896069C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089606B4;
      }
      goto L_089606AC;
    }
L_089606AC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089606BC;
      }
      goto L_089606B4;
    }
L_089606B4:
    ctx.gpr[31] = (0x089606BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089606BCu) goto L_089606BC;
    return;
L_089606BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089606D0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), 0u);
        goto L_089606FC;
    }
    goto L_089606E4;
L_089606E4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), 0u);
    goto L_089606FC;
L_089606FC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(300), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(228), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(240), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(244), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(252), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(264), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(272), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(292), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(334), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(335), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 100u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(338), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(339), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(308), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(312), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(316), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 20u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(328), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089607E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960800;
      }
      goto L_089607EC;
    }
L_089607EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960808;
      }
      goto L_089607F8;
    }
L_089607F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896080C;
      }
      goto L_08960800;
    }
L_08960800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896080C;
      }
      goto L_08960808;
    }
L_08960808:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896080C;
L_0896080C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960814:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896085Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0896085Cu) goto L_0896085C;
    return;
L_0896085C:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[26];
        goto L_08960880;
    }
    goto L_08960880;
L_08960880:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089608A4u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089608A4u) goto L_089608A4;
    return;
L_089608A4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
        goto L_089608B8;
    }
    goto L_089608B8;
L_089608B8:
    ctx.gpr[31] = (0x089608C0u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x089608C0u) goto L_089608C0;
    return;
L_089608C0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
        goto L_089608D4;
    }
    goto L_089608D4;
L_089608D4:
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[26];
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[14] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08960910;
      }
      goto L_08960908;
    }
L_08960908:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08960910;
L_08960910:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896093C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896095Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0896095Cu) goto L_0896095C;
    return;
L_0896095C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960990;
      }
      goto L_08960964;
    }
L_08960964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960990;
      }
      goto L_08960974;
    }
L_08960974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089609A0;
      }
      goto L_08960990;
    }
L_08960990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
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
    goto L_089609A0;
L_089609A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089609B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089609D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x089609D4u) goto L_089609D4;
    return;
L_089609D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960A08;
      }
      goto L_089609DC;
    }
L_089609DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960A08;
      }
      goto L_089609EC;
    }
L_089609EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960A18;
      }
      goto L_08960A08;
    }
L_08960A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    goto L_08960A18;
L_08960A18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960A2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08960A7C;
      }
      goto L_08960A60;
    }
L_08960A60:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08960A70u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08960A70u) goto L_08960A70;
    return;
L_08960A70:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08960A7C;
L_08960A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960CD0;
      }
      goto L_08960A98;
    }
L_08960A98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 246u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08960ACC;
      }
      goto L_08960AA8;
    }
L_08960AA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 275u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08960ACC;
      }
      goto L_08960AB8;
    }
L_08960AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960AD4;
      }
      goto L_08960AC4;
    }
L_08960AC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08960AF4;
      }
      goto L_08960ACC;
    }
L_08960ACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960AD4;
    }
L_08960AD4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(33));
    ctx.gpr[31] = (0x08960AE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08960AE4u) goto L_08960AE4;
    return;
L_08960AE4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08960AF4;
L_08960AF4:
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08960B28;
      }
      goto L_08960B18;
    }
L_08960B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(380)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08960B84;
      }
      goto L_08960B28;
    }
L_08960B28:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960B3Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 118u, 0x089A8CF4u>(ctx, &aot_mem) && ctx.pc == 0x08960B3Cu) goto L_08960B3C;
    return;
L_08960B3C:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08960B7C;
      }
      goto L_08960B48;
    }
L_08960B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960B58u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 817u, 0x089ABCECu>(ctx, &aot_mem) && ctx.pc == 0x08960B58u) goto L_08960B58;
    return;
L_08960B58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960B74;
      }
      goto L_08960B60;
    }
L_08960B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960B8C;
      }
      goto L_08960B6C;
    }
L_08960B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08960BAC;
      }
      goto L_08960B74;
    }
L_08960B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960B7C;
    }
L_08960B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960B84;
    }
L_08960B84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960B8C;
    }
L_08960B8C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    ctx.gpr[31] = (0x08960B9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08960B9Cu) goto L_08960B9C;
    return;
L_08960B9C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08960BAC;
L_08960BAC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15436u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08960C0C;
      }
      goto L_08960BE0;
    }
L_08960BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08960BF8u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960BF8u) goto L_08960BF8;
    return;
L_08960BF8:
    ctx.gpr[21] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08960C14;
      }
      goto L_08960C04;
    }
L_08960C04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960CC8;
      }
      goto L_08960C0C;
    }
L_08960C0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960C14;
    }
L_08960C14:
    ctx.gpr[31] = (0x08960C1Cu);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    goto L_08960424;
L_08960C1C:
    ctx.gpr[31] = (0x08960C24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 696u, 0x0890EF94u>(ctx, &aot_mem) && ctx.pc == 0x08960C24u) goto L_08960C24;
    return;
L_08960C24:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08960C70;
      }
      goto L_08960C34;
    }
L_08960C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08960C60;
    }
    goto L_08960C40;
L_08960C40:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(35));
    ctx.gpr[31] = (0x08960C50u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08960C50u) goto L_08960C50;
    return;
L_08960C50:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08960C60;
L_08960C60:
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08960C80;
      }
      goto L_08960C70;
    }
L_08960C70:
    if (ctx.gpr[19] == ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08960C88;
    }
    goto L_08960C78;
L_08960C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960CC8;
      }
      goto L_08960C80;
    }
L_08960C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960C88;
    }
L_08960C88:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08960CB0;
    }
    goto L_08960C90;
L_08960C90:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08960CA0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08960CA0u) goto L_08960CA0;
    return;
L_08960CA0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08960CB0;
L_08960CB0:
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08960CC8;
      }
      goto L_08960CC0;
    }
L_08960CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960CC8;
    }
L_08960CC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D08;
      }
      goto L_08960CD0;
    }
L_08960CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08960CFC;
    }
    goto L_08960CDC;
L_08960CDC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(37));
    ctx.gpr[31] = (0x08960CECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08960CECu) goto L_08960CEC;
    return;
L_08960CEC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08960CFC;
L_08960CFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(206))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08960D1C;
      }
      goto L_08960D08;
    }
L_08960D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D24;
      }
      goto L_08960D14;
    }
L_08960D14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08960D44;
      }
      goto L_08960D1C;
    }
L_08960D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960D24;
    }
L_08960D24:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(38));
    ctx.gpr[31] = (0x08960D34u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08960D34u) goto L_08960D34;
    return;
L_08960D34:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08960D44;
L_08960D44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(193)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960D6C;
      }
      goto L_08960D58;
    }
L_08960D58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D74;
      }
      goto L_08960D64;
    }
L_08960D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960D6C;
    }
L_08960D6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960D74;
    }
L_08960D74:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x08960D84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 266u, 0x08ADCEC0u>(ctx, &aot_mem) && ctx.pc == 0x08960D84u) goto L_08960D84;
    return;
L_08960D84:
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08960D8C;
L_08960D8C:
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
L_08960DB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08960DC8;
      }
      goto L_08960DC0;
    }
L_08960DC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08960DCC;
      }
      goto L_08960DC8;
    }
L_08960DC8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08960DCC;
L_08960DCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960DD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08960DEC;
      }
      goto L_08960DE4;
    }
L_08960DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08960DF0;
      }
      goto L_08960DEC;
    }
L_08960DEC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08960DF0;
L_08960DF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960DF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (0u | 352u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (2238u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(172));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08960E48u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08960E48u) goto L_08960E48;
    return;
L_08960E48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(208));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960E78u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08960E78u) goto L_08960E78;
    return;
L_08960E78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(212));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960EA8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08960EA8u) goto L_08960EA8;
    return;
L_08960EA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(300));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960ED8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08960ED8u) goto L_08960ED8;
    return;
L_08960ED8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(304));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960F08u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08960F08u) goto L_08960F08;
    return;
L_08960F08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(176));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960F38u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08960F38u) goto L_08960F38;
    return;
L_08960F38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(333));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960F68u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08960F68u) goto L_08960F68;
    return;
L_08960F68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(334));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960F98u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08960F98u) goto L_08960F98;
    return;
L_08960F98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(335));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960FC8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08960FC8u) goto L_08960FC8;
    return;
L_08960FC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(336));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960FF8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08960FF8u) goto L_08960FF8;
    return;
L_08960FF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(337));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961028u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08961028u) goto L_08961028;
    return;
L_08961028:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(338));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961058u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08961058u) goto L_08961058;
    return;
L_08961058:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(339));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961088u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08961088u) goto L_08961088;
    return;
L_08961088:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(340));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089610B8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089610B8u) goto L_089610B8;
    return;
L_089610B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089610E8u);
    ctx.gpr[6] = (0u | 70u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089610E8u) goto L_089610E8;
    return;
L_089610E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(341));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(70));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961118u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08961118u) goto L_08961118;
    return;
L_08961118:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(342));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08961144u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08961144u) goto L_08961144;
    return;
L_08961144:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961158:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2238u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(172));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089611A0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089611A0u) goto L_089611A0;
    return;
L_089611A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(208));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089611D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089611D0u) goto L_089611D0;
    return;
L_089611D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(212));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961200u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08961200u) goto L_08961200;
    return;
L_08961200:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(300));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961230u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08961230u) goto L_08961230;
    return;
L_08961230:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(304));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961260u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08961260u) goto L_08961260;
    return;
L_08961260:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(176));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961290u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08961290u) goto L_08961290;
    return;
L_08961290:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(333));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089612C0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089612C0u) goto L_089612C0;
    return;
L_089612C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(334));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089612F0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089612F0u) goto L_089612F0;
    return;
L_089612F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(335));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961320u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08961320u) goto L_08961320;
    return;
L_08961320:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(336));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961350u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08961350u) goto L_08961350;
    return;
L_08961350:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(337));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961380u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08961380u) goto L_08961380;
    return;
L_08961380:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(338));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089613B0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089613B0u) goto L_089613B0;
    return;
L_089613B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(339));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089613E0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089613E0u) goto L_089613E0;
    return;
L_089613E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(340));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961410u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08961410u) goto L_08961410;
    return;
L_08961410:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961440u);
    ctx.gpr[6] = (0u | 70u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08961440u) goto L_08961440;
    return;
L_08961440:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(341));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(70));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961470u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08961470u) goto L_08961470;
    return;
L_08961470:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(342));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[31] = (0x0896149Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0896149Cu) goto L_0896149C;
    return;
L_0896149C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089614B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08961598;
      }
      goto L_089614CC;
    }
L_089614CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_089614E4;
    }
    goto L_089614D8;
L_089614D8:
    ctx.gpr[31] = (0x089614E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x089614E0u) goto L_089614E0;
    return;
L_089614E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_089614E4;
L_089614E4:
    ctx.gpr[31] = (0x089614ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 552u, 0x089BAA4Cu>(ctx, &aot_mem) && ctx.pc == 0x089614ECu) goto L_089614EC;
    return;
L_089614EC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961598;
      }
      goto L_089614F8;
    }
L_089614F8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[31] = (0x0896150Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 563u, 0x08A363D8u>(ctx, &aot_mem) && ctx.pc == 0x0896150Cu) goto L_0896150C;
    return;
L_0896150C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08961544;
    }
    goto L_08961518;
L_08961518:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08961524u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08961524u) goto L_08961524;
    return;
L_08961524:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896153C;
      }
      goto L_08961530;
    }
L_08961530:
    ctx.gpr[31] = (0x08961538u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08961538u) goto L_08961538;
    return;
L_08961538:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0896153C;
L_0896153C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08961544;
L_08961544:
    ctx.gpr[31] = (0x0896154Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17580));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0896154Cu) goto L_0896154C;
    return;
L_0896154C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 4000u);
    ctx.gpr[31] = (0x0896155Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 246u, 0x08AB9448u>(ctx, &aot_mem) && ctx.pc == 0x0896155Cu) goto L_0896155C;
    return;
L_0896155C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9032)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0896156Cu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9032), ctx.gpr[4]);
    goto L_08960424;
L_0896156C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961598;
      }
      goto L_08961578;
    }
L_08961578:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), ctx.gpr[5]);
    goto L_08961598;
L_08961598:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089615AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089616A0;
      }
      goto L_089615C8;
    }
L_089615C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_089615E0;
    }
    goto L_089615D4;
L_089615D4:
    ctx.gpr[31] = (0x089615DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x089615DCu) goto L_089615DC;
    return;
L_089615DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_089615E0;
L_089615E0:
    ctx.gpr[31] = (0x089615E8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 552u, 0x089BAA4Cu>(ctx, &aot_mem) && ctx.pc == 0x089615E8u) goto L_089615E8;
    return;
L_089615E8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089616A0;
      }
      goto L_089615F4;
    }
L_089615F4:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0896160Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 563u, 0x08A363D8u>(ctx, &aot_mem) && ctx.pc == 0x0896160Cu) goto L_0896160C;
    return;
L_0896160C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08961644;
    }
    goto L_08961618;
L_08961618:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08961624u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08961624u) goto L_08961624;
    return;
L_08961624:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896163C;
      }
      goto L_08961630;
    }
L_08961630:
    ctx.gpr[31] = (0x08961638u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08961638u) goto L_08961638;
    return;
L_08961638:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0896163C;
L_0896163C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08961644;
L_08961644:
    ctx.gpr[31] = (0x0896164Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17572));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0896164Cu) goto L_0896164C;
    return;
L_0896164C:
    ctx.gpr[31] = (0x08961654u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 606u, 0x08A17A04u>(ctx, &aot_mem) && ctx.pc == 0x08961654u) goto L_08961654;
    return;
L_08961654:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 5000u);
    ctx.gpr[31] = (0x08961664u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 246u, 0x08AB9448u>(ctx, &aot_mem) && ctx.pc == 0x08961664u) goto L_08961664;
    return;
L_08961664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9036)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08961674u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9036), ctx.gpr[4]);
    goto L_08960424;
L_08961674:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089616A0;
      }
      goto L_08961680;
    }
L_08961680:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), ctx.gpr[5]);
    goto L_089616A0;
L_089616A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089616B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089616DC;
      }
      goto L_089616C8;
    }
L_089616C8:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[31] = (0x089616DCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 563u, 0x08A363D8u>(ctx, &aot_mem) && ctx.pc == 0x089616DCu) goto L_089616DC;
    return;
L_089616DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089616E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0896170C;
      }
      goto L_08961700;
    }
L_08961700:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896173C;
      }
      goto L_0896170C;
    }
L_0896170C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
      if (branch_taken) {
          goto L_08961730;
      }
      goto L_08961720;
    }
L_08961720:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896173C;
      }
      goto L_08961730;
    }
L_08961730:
    ctx.gpr[31] = (0x08961738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x08961738u) goto L_08961738;
    return;
L_08961738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0896173C;
L_0896173C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[6] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896175C;
      }
      goto L_0896174C;
    }
L_0896174C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[6] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08961764;
      }
      goto L_0896175C;
    }
L_0896175C:
    ctx.gpr[31] = (0x08961764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08961764u) goto L_08961764;
    return;
L_08961764:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961774:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089617E4;
      }
      goto L_08961794;
    }
L_08961794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089617E4;
      }
      goto L_089617A4;
    }
L_089617A4:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089617B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 962u, 0x0897FD10u>(ctx, &aot_mem) && ctx.pc == 0x089617B0u) goto L_089617B0;
    return;
L_089617B0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089617E4;
      }
      goto L_089617B8;
    }
L_089617B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(328));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x089617D0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08960424;
L_089617D0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089617E4u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089617E4u) goto L_089617E4;
    return;
L_089617E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089617F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[6] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08961974;
      }
      goto L_089618B4;
    }
L_089618B4:
    ctx.gpr[31] = (0x089618BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x089618BCu) goto L_089618BC;
    return;
L_089618BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961974;
      }
      goto L_089618C4;
    }
L_089618C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 226u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896190C;
      }
      goto L_089618DC;
    }
L_089618DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 183u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896190C;
      }
      goto L_089618F4;
    }
L_089618F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-959));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08961974;
      }
      goto L_0896190C;
    }
L_0896190C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08961974;
      }
      goto L_08961920;
    }
L_08961920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0896192Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 559u, 0x08B021B0u>(ctx, &aot_mem) && ctx.pc == 0x0896192Cu) goto L_0896192C;
    return;
L_0896192C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961974;
      }
      goto L_08961934;
    }
L_08961934:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(184)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961970;
      }
      goto L_0896194C;
    }
L_0896194C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(184)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(172)));
    goto L_08961954;
L_08961954:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1000));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
      if (branch_taken) {
          goto L_08961954;
      }
      goto L_08961968;
    }
L_08961968:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(172), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    goto L_08961970;
L_08961970:
    ctx.gpr[16] = (0u | 0u);
    goto L_08961974;
L_08961974:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961984;
      }
      goto L_0896197C;
    }
L_0896197C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    goto L_08961984;
L_08961984:
    ctx.gpr[31] = (0x0896198Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0896198Cu) goto L_0896198C;
    return;
L_0896198C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089627B8;
      }
      goto L_08961994;
    }
L_08961994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089627B8;
      }
      goto L_089619A4;
    }
L_089619A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962090;
      }
      goto L_089619B8;
    }
L_089619B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1884)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (16968u << 16u);
      if (branch_taken) {
          goto L_08961A44;
      }
      goto L_089619D0;
    }
L_089619D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[6] = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(252)));
      if (branch_taken) {
          goto L_08961A18;
      }
      goto L_08961A00;
    }
L_08961A00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08961A38;
      }
      goto L_08961A18;
    }
L_08961A18:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[6] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_08961A38;
L_08961A38:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(252), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08961A48;
      }
      goto L_08961A44;
    }
L_08961A44:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(252), 0u);
    goto L_08961A48;
L_08961A48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1544)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08961D24;
      }
      goto L_08961A60;
    }
L_08961A60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1548)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08961D24;
      }
      goto L_08961A78;
    }
L_08961A78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1536)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08961C18;
      }
      goto L_08961A90;
    }
L_08961A90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1540)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08961C18;
      }
      goto L_08961AA8;
    }
L_08961AA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16968u << 16u);
      if (branch_taken) {
          goto L_08961C18;
      }
      goto L_08961AC0;
    }
L_08961AC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(244)));
      if (branch_taken) {
          goto L_08961B08;
      }
      goto L_08961AF0;
    }
L_08961AF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08961B28;
      }
      goto L_08961B08;
    }
L_08961B08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_08961B28;
L_08961B28:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(248)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(272)));
    ctx.fpr[17] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08961B5C;
      }
      goto L_08961B50;
    }
L_08961B50:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    goto L_08961B5C;
L_08961B5C:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_08961B98;
    }
    goto L_08961B78;
L_08961B78:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08961BBC;
      }
      goto L_08961B98;
    }
L_08961B98:
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    ctx.gpr[4] = (32768u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    goto L_08961BBC;
L_08961BBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (20352u << 16u);
      if (branch_taken) {
          goto L_08961BCC;
      }
      goto L_08961BC4;
    }
L_08961BC4:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    goto L_08961BCC;
L_08961BCC:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08961BE4;
    }
    goto L_08961BE4;
L_08961BE4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
        goto L_08961C00;
    }
    goto L_08961BF4;
L_08961BF4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08961C10;
      }
      goto L_08961C00;
    }
L_08961C00:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08961C10;
L_08961C10:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08962084;
      }
      goto L_08961C18;
    }
L_08961C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961CA8;
      }
      goto L_08961C24;
    }
L_08961C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(272)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(500) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_08961CA8;
      }
      goto L_08961C34;
    }
L_08961C34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(272)));
      if (branch_taken) {
          goto L_08961C7C;
      }
      goto L_08961C64;
    }
L_08961C64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08961C9C;
      }
      goto L_08961C7C;
    }
L_08961C7C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[4] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_08961C9C;
L_08961C9C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08962084;
      }
      goto L_08961CA8;
    }
L_08961CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(244)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08961D14;
      }
      goto L_08961CB8;
    }
L_08961CB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(244)));
    ctx.gpr[4] = (0u | 1000u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(276), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9040)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961CF4;
      }
      goto L_08961CE4;
    }
L_08961CE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(244)));
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9040), ctx.gpr[4]);
    goto L_08961CF4;
L_08961CF4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9044)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(248)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08961D14;
      }
      goto L_08961D0C;
    }
L_08961D0C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9044), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08961D14;
L_08961D14:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(244), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), 0u);
      if (branch_taken) {
          goto L_08962084;
      }
      goto L_08961D24;
    }
L_08961D24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1536)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08962000;
      }
      goto L_08961D3C;
    }
L_08961D3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1540)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08962000;
      }
      goto L_08961D54;
    }
L_08961D54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1540)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08961EF4;
      }
      goto L_08961D6C;
    }
L_08961D6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1548)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08961EF4;
      }
      goto L_08961D84;
    }
L_08961D84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16968u << 16u);
      if (branch_taken) {
          goto L_08961EF4;
      }
      goto L_08961D9C;
    }
L_08961D9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.gpr[6] = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(244)));
      if (branch_taken) {
          goto L_08961DE4;
      }
      goto L_08961DCC;
    }
L_08961DCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08961E04;
      }
      goto L_08961DE4;
    }
L_08961DE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.gpr[6] = (32768u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_08961E04;
L_08961E04:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(248)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(272)));
    ctx.fpr[17] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08961E38;
      }
      goto L_08961E2C;
    }
L_08961E2C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    goto L_08961E38;
L_08961E38:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_08961E74;
    }
    goto L_08961E54;
L_08961E54:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08961E98;
      }
      goto L_08961E74;
    }
L_08961E74:
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    ctx.gpr[4] = (32768u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    goto L_08961E98;
L_08961E98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (20352u << 16u);
      if (branch_taken) {
          goto L_08961EA8;
      }
      goto L_08961EA0;
    }
L_08961EA0:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    goto L_08961EA8;
L_08961EA8:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08961EC0;
    }
    goto L_08961EC0;
L_08961EC0:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
        goto L_08961EDC;
    }
    goto L_08961ED0;
L_08961ED0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08961EEC;
      }
      goto L_08961EDC;
    }
L_08961EDC:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08961EEC;
L_08961EEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08962084;
      }
      goto L_08961EF4;
    }
L_08961EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961F84;
      }
      goto L_08961F00;
    }
L_08961F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(272)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(500) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_08961F84;
      }
      goto L_08961F10;
    }
L_08961F10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(272)));
      if (branch_taken) {
          goto L_08961F58;
      }
      goto L_08961F40;
    }
L_08961F40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08961F78;
      }
      goto L_08961F58;
    }
L_08961F58:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[4] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_08961F78;
L_08961F78:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08962084;
      }
      goto L_08961F84;
    }
L_08961F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(244)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08961FF0;
      }
      goto L_08961F94;
    }
L_08961F94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(244)));
    ctx.gpr[4] = (0u | 1000u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(276), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9040)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961FD0;
      }
      goto L_08961FC0;
    }
L_08961FC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(244)));
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9040), ctx.gpr[4]);
    goto L_08961FD0;
L_08961FD0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9044)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(248)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08961FF0;
      }
      goto L_08961FE8;
    }
L_08961FE8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9044), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08961FF0;
L_08961FF0:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(244), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), 0u);
      if (branch_taken) {
          goto L_08962084;
      }
      goto L_08962000;
    }
L_08962000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962084;
      }
      goto L_0896200C;
    }
L_0896200C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(244)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08962078;
      }
      goto L_0896201C;
    }
L_0896201C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(244)));
    ctx.gpr[4] = (0u | 1000u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(276), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9040)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962058;
      }
      goto L_08962048;
    }
L_08962048:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(244)));
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9040), ctx.gpr[4]);
    goto L_08962058;
L_08962058:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9044)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(248)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08962078;
      }
      goto L_08962070;
    }
L_08962070:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9044), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08962078;
L_08962078:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(244), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), 0u);
    goto L_08962084;
L_08962084:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(256), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(264), 0u);
      if (branch_taken) {
          goto L_089627CC;
      }
      goto L_08962090;
    }
L_08962090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089620C0;
      }
      goto L_089620A8;
    }
L_089620A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089627A0;
      }
      goto L_089620C0;
    }
L_089620C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1232)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089623FC;
      }
      goto L_089620E0;
    }
L_089620E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1236)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089623FC;
      }
      goto L_089620F8;
    }
L_089620F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_08962144;
      }
      goto L_08962110;
    }
L_08962110:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1244)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089622B0;
      }
      goto L_08962128;
    }
L_08962128:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089622B0;
      }
      goto L_08962140;
    }
L_08962140:
    ctx.gpr[4] = (16968u << 16u);
    goto L_08962144;
L_08962144:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.gpr[6] = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08962190;
      }
      goto L_08962178;
    }
L_08962178:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089621B0;
      }
      goto L_08962190;
    }
L_08962190:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.gpr[6] = (32768u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_089621B0;
L_089621B0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(260)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(272)));
    ctx.fpr[17] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089621E4;
      }
      goto L_089621D8;
    }
L_089621D8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    goto L_089621E4;
L_089621E4:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_08962220;
    }
    goto L_08962200;
L_08962200:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08962244;
      }
      goto L_08962220;
    }
L_08962220:
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    ctx.gpr[4] = (32768u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    goto L_08962244;
L_08962244:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_0896225C;
      }
      goto L_0896224C;
    }
L_0896224C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.gpr[4] = (15948u << 16u);
    goto L_0896225C;
L_0896225C:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_0896227C;
    }
    goto L_0896227C;
L_0896227C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
        goto L_08962298;
    }
    goto L_0896228C;
L_0896228C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089622A8;
      }
      goto L_08962298;
    }
L_08962298:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089622A8;
L_089622A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08962794;
      }
      goto L_089622B0;
    }
L_089622B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962340;
      }
      goto L_089622BC;
    }
L_089622BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(272)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(500) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_08962340;
      }
      goto L_089622CC;
    }
L_089622CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(272)));
      if (branch_taken) {
          goto L_08962314;
      }
      goto L_089622FC;
    }
L_089622FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08962334;
      }
      goto L_08962314;
    }
L_08962314:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[4] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_08962334;
L_08962334:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08962794;
      }
      goto L_08962340;
    }
L_08962340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (17723u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[14] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08962364;
      }
      goto L_08962364;
    }
L_08962364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(256)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08962380;
      }
      goto L_08962374;
    }
L_08962374:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_08962380;
L_08962380:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089623EC;
      }
      goto L_08962390;
    }
L_08962390:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(256)));
    ctx.gpr[4] = (0u | 1000u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(284), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9048)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089623CC;
      }
      goto L_089623BC;
    }
L_089623BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(256)));
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9048), ctx.gpr[4]);
    goto L_089623CC;
L_089623CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9052)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(260)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089623EC;
      }
      goto L_089623E4;
    }
L_089623E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9052), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089623EC;
L_089623EC:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), 0u);
      if (branch_taken) {
          goto L_08962794;
      }
      goto L_089623FC;
    }
L_089623FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089624C4;
      }
      goto L_08962408;
    }
L_08962408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (17723u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[14] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0896242C;
      }
      goto L_0896242C;
    }
L_0896242C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08962448;
      }
      goto L_0896243C;
    }
L_0896243C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    goto L_08962448;
L_08962448:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089624B4;
      }
      goto L_08962458;
    }
L_08962458:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(256)));
    ctx.gpr[4] = (0u | 1000u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(284), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9048)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962494;
      }
      goto L_08962484;
    }
L_08962484:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(256)));
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9048), ctx.gpr[4]);
    goto L_08962494;
L_08962494:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9052)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(260)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089624B4;
      }
      goto L_089624AC;
    }
L_089624AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9052), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089624B4;
L_089624B4:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), 0u);
      if (branch_taken) {
          goto L_08962794;
      }
      goto L_089624C4;
    }
L_089624C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08962674;
      }
      goto L_089624DC;
    }
L_089624DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1244)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08962674;
      }
      goto L_089624F4;
    }
L_089624F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_08962674;
      }
      goto L_0896250C;
    }
L_0896250C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.gpr[6] = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_08962554;
      }
      goto L_0896253C;
    }
L_0896253C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08962574;
      }
      goto L_08962554;
    }
L_08962554:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.gpr[6] = (32768u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_08962574;
L_08962574:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(268)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(272)));
    ctx.fpr[17] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089625A8;
      }
      goto L_0896259C;
    }
L_0896259C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    goto L_089625A8;
L_089625A8:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_089625E4;
    }
    goto L_089625C4;
L_089625C4:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08962608;
      }
      goto L_089625E4;
    }
L_089625E4:
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    ctx.gpr[4] = (32768u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    goto L_08962608;
L_08962608:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08962620;
      }
      goto L_08962610;
    }
L_08962610:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.gpr[4] = (15948u << 16u);
    goto L_08962620;
L_08962620:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08962640;
    }
    goto L_08962640;
L_08962640:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
        goto L_0896265C;
    }
    goto L_08962650;
L_08962650:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896266C;
      }
      goto L_0896265C;
    }
L_0896265C:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0896266C;
L_0896266C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08962794;
      }
      goto L_08962674;
    }
L_08962674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962704;
      }
      goto L_08962680;
    }
L_08962680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(272)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(500) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_08962704;
      }
      goto L_08962690;
    }
L_08962690:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(272)));
      if (branch_taken) {
          goto L_089626D8;
      }
      goto L_089626C0;
    }
L_089626C0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089626F8;
      }
      goto L_089626D8;
    }
L_089626D8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_089626F8;
L_089626F8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08962794;
      }
      goto L_08962704;
    }
L_08962704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0896271C;
      }
      goto L_0896271C;
    }
L_0896271C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962788;
      }
      goto L_0896272C;
    }
L_0896272C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 1000u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(292), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9056)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962768;
      }
      goto L_08962758;
    }
L_08962758:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(264)));
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9056), ctx.gpr[4]);
    goto L_08962768;
L_08962768:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9060)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(268)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08962788;
      }
      goto L_08962780;
    }
L_08962780:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9060), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08962788;
L_08962788:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(264), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), 0u);
    goto L_08962794;
L_08962794:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(244), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(252), 0u);
      if (branch_taken) {
          goto L_089627CC;
      }
      goto L_089627A0;
    }
L_089627A0:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(244), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(252), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(264), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), 0u);
      if (branch_taken) {
          goto L_089627CC;
      }
      goto L_089627B8;
    }
L_089627B8:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(244), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(252), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(264), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(272), 0u);
    goto L_089627CC;
L_089627CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(172)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(304)));
        goto L_08962878;
    }
    goto L_089627DC;
L_089627DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(172)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u - ctx.gpr[4]);
        goto L_089627F4;
    }
    goto L_089627F4;
L_089627F4:
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962810;
      }
      goto L_08962808;
    }
L_08962808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 12345u);
      if (branch_taken) {
          goto L_08962850;
      }
      goto L_08962810;
    }
L_08962810:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962824;
      }
      goto L_0896281C;
    }
L_0896281C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1234u);
      if (branch_taken) {
          goto L_08962850;
      }
      goto L_08962824;
    }
L_08962824:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962838;
      }
      goto L_08962830;
    }
L_08962830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 123u);
      if (branch_taken) {
          goto L_08962850;
      }
      goto L_08962838;
    }
L_08962838:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 51 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896284C;
      }
      goto L_08962844;
    }
L_08962844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 42u);
      if (branch_taken) {
          goto L_08962850;
      }
      goto L_0896284C;
    }
L_0896284C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08962850;
L_08962850:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08962868;
      }
      goto L_08962858;
    }
L_08962858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08962874;
      }
      goto L_08962868;
    }
L_08962868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    goto L_08962874;
L_08962874:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(304)));
    goto L_08962878;
L_08962878:
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(304)));
        goto L_089628A4;
    }
    goto L_089628A4;
L_089628A4:
    ctx.gpr[4] = (16313u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(304)));
        goto L_089628C4;
    }
    goto L_089628C4;
L_089628C4:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962904;
      }
      goto L_089628DC;
    }
L_089628DC:
    ctx.gpr[31] = (0x089628E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x089628E4u) goto L_089628E4;
    return;
L_089628E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962904;
      }
      goto L_089628EC;
    }
L_089628EC:
    ctx.gpr[31] = (0x089628F4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x089628F4u) goto L_089628F4;
    return;
L_089628F4:
    ctx.gpr[31] = (0x089628FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 400u, 0x0898D1B8u>(ctx, &aot_mem) && ctx.pc == 0x089628FCu) goto L_089628FC;
    return;
L_089628FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08962918;
      }
      goto L_08962904;
    }
L_08962904:
    ctx.gpr[31] = (0x0896290Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0896290Cu) goto L_0896290C;
    return;
L_0896290C:
    ctx.gpr[31] = (0x08962914u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 392u, 0x0898D168u>(ctx, &aot_mem) && ctx.pc == 0x08962914u) goto L_08962914;
    return;
L_08962914:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08962918;
L_08962918:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08962934;
      }
      goto L_08962924;
    }
L_08962924:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(324)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08962934;
L_08962934:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_0896293C;
    }
L_0896293C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 36u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08962954;
    }
L_08962954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_0896296C;
    }
L_0896296C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08962984;
    }
L_08962984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_0896299C;
    }
L_0896299C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[7] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089629C0;
      }
      goto L_089629B0;
    }
L_089629B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089629C8;
      }
      goto L_089629C0;
    }
L_089629C0:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_089629C8;
L_089629C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089629D0;
    }
L_089629D0:
    ctx.gpr[31] = (0x089629D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x089629D8u) goto L_089629D8;
    return;
L_089629D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962D54;
      }
      goto L_089629E0;
    }
L_089629E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962D54;
      }
      goto L_089629F8;
    }
L_089629F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08962A6C;
      }
      goto L_08962A04;
    }
L_08962A04:
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08962A14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08962A14u) goto L_08962A14;
    return;
L_08962A14:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08962A3C;
      }
      goto L_08962A20;
    }
L_08962A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 246u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08962A3C;
      }
      goto L_08962A38;
    }
L_08962A38:
    ctx.gpr[16] = (0u | 0u);
    goto L_08962A3C;
L_08962A3C:
    ctx.gpr[31] = (0x08962A44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08962A44u) goto L_08962A44;
    return;
L_08962A44:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08962A6C;
      }
      goto L_08962A50;
    }
L_08962A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 275u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08962A6C;
      }
      goto L_08962A68;
    }
L_08962A68:
    ctx.gpr[16] = (0u | 0u);
    goto L_08962A6C;
L_08962A6C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962A74;
    }
L_08962A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962A80;
    }
L_08962A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_08962B38;
    }
    goto L_08962A98;
L_08962A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_08962B38;
    }
    goto L_08962AB0;
L_08962AB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962B18;
      }
      goto L_08962ABC;
    }
L_08962ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
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
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08962B10;
      }
      goto L_08962AF4;
    }
L_08962AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08962B00u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 408u, 0x089AD800u>(ctx, &aot_mem) && ctx.pc == 0x08962B00u) goto L_08962B00;
    return;
L_08962B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    goto L_08962B10;
L_08962B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962B18;
    }
L_08962B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08962B24u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 408u, 0x089AD800u>(ctx, &aot_mem) && ctx.pc == 0x08962B24u) goto L_08962B24;
    return;
L_08962B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962B38;
    }
L_08962B38:
    ctx.gpr[16] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962B54;
    }
L_08962B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962B74;
    }
L_08962B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962B8C;
    }
L_08962B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(408));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08962BACu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962BACu) goto L_08962BAC;
    return;
L_08962BAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08962BDC;
      }
      goto L_08962BCC;
    }
L_08962BCC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08962BDC;
L_08962BDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(636)));
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962C50;
      }
      goto L_08962BF4;
    }
L_08962BF4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962C38;
      }
      goto L_08962BFC;
    }
L_08962BFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(320));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08962C50;
      }
      goto L_08962C38;
    }
L_08962C38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08962C48u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08962C48u) goto L_08962C48;
    return;
L_08962C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962C50;
    }
L_08962C50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08962C78;
      }
      goto L_08962C64;
    }
L_08962C64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08962C98;
      }
      goto L_08962C78;
    }
L_08962C78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962C80;
    }
L_08962C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08962C90u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08962C90u) goto L_08962C90;
    return;
L_08962C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962C98;
    }
L_08962C98:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962CDC;
      }
      goto L_08962CA0;
    }
L_08962CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
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
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_08962CF4;
    }
    goto L_08962CDC;
L_08962CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08962CECu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08962CECu) goto L_08962CEC;
    return;
L_08962CEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962CF4;
    }
L_08962CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962D0C;
    }
L_08962D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962D20;
    }
L_08962D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    goto L_08962D4C;
L_08962D4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08962D54;
    }
L_08962D54:
    ctx.gpr[31] = (0x08962D5Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08962D5Cu) goto L_08962D5C;
    return;
L_08962D5C:
    ctx.gpr[31] = (0x08962D64u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 400u, 0x0898D1B8u>(ctx, &aot_mem) && ctx.pc == 0x08962D64u) goto L_08962D64;
    return;
L_08962D64:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_08962D7C;
    }
    goto L_08962D6C;
L_08962D6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08962D78;
    }
L_08962D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_08962D7C;
L_08962D7C:
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08962D90;
    }
L_08962D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08962DA8;
    }
L_08962DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 22u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08962DC0;
    }
L_08962DC0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08962EB8;
      }
      goto L_08962DDC;
    }
L_08962DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962EB8;
      }
      goto L_08962E00;
    }
L_08962E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962EB8;
      }
      goto L_08962E18;
    }
L_08962E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1300)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08962E4C;
    }
    goto L_08962E34;
L_08962E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08962EB8;
      }
      goto L_08962E48;
    }
L_08962E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08962E4C;
L_08962E4C:
    ctx.gpr[5] = (0u | 278u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08962EB8;
      }
      goto L_08962E5C;
    }
L_08962E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08962EB8;
      }
      goto L_08962E88;
    }
L_08962E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08962EB8;
      }
      goto L_08962EAC;
    }
L_08962EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08962EB8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 277u, 0x089A9810u>(ctx, &aot_mem) && ctx.pc == 0x08962EB8u) goto L_08962EB8;
    return;
L_08962EB8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08963144;
      }
      goto L_08962EC0;
    }
L_08962EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17056u << 16u);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[22] / ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (16880u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16840u << 16u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[28];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[28];
    ctx.fpr[28] = ctx.fpr[14] + ctx.fpr[28];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 49u);
        goto L_08962F34;
    }
    goto L_08962F34;
L_08962F34:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08962F40;
    }
    goto L_08962F40;
L_08962F40:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08962F54;
    }
    goto L_08962F54;
L_08962F54:
    ctx.fpr[15] = ctx.fpr[26] / ctx.fpr[12];
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 49u);
        goto L_08962F74;
    }
    goto L_08962F74;
L_08962F74:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08962F80;
    }
    goto L_08962F80;
L_08962F80:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_08962F94;
    }
    goto L_08962F94;
L_08962F94:
    ctx.fpr[15] = ctx.fpr[24] / ctx.fpr[12];
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 49u);
        goto L_08962FB4;
    }
    goto L_08962FB4;
L_08962FB4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08962FC0;
    }
    goto L_08962FC0;
L_08962FC0:
    ctx.gpr[20] = (0u | 49u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 49 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_08962FD0;
    }
    goto L_08962FD0;
L_08962FD0:
    ctx.fpr[12] = ctx.fpr[28] / ctx.fpr[12];
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 49u);
        goto L_08962FF0;
    }
    goto L_08962FF0;
L_08962FF0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08962FFC;
    }
    goto L_08962FFC;
L_08962FFC:
    ctx.gpr[30] = (0u | 49u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 49 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_0896300C;
    }
    goto L_0896300C;
L_0896300C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963030;
      }
      goto L_08963020;
    }
L_08963020:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08963040;
      }
      goto L_08963030;
    }
L_08963030:
    ctx.gpr[31] = (0x08963038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem) && ctx.pc == 0x08963038u) goto L_08963038;
    return;
L_08963038:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08963040;
L_08963040:
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] << 4u);
      if (branch_taken) {
          goto L_0896313C;
      }
      goto L_08963050;
    }
L_08963050:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08963068;
L_08963068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_0896312C;
      }
      goto L_0896307C;
    }
L_0896307C:
    ctx.gpr[16] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    goto L_08963088;
L_08963088:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089630C0u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08963BF4;
L_089630C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089630ECu);
    ctx.gpr[9] = (0u | 1u);
    goto L_08963BF4;
L_089630EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08963118u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08963BF4;
L_08963118:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
      if (branch_taken) {
          goto L_08963088;
      }
      goto L_0896312C;
    }
L_0896312C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08963068;
      }
      goto L_0896313C;
    }
L_0896313C:
    ctx.gpr[18] = (0u | 22u);
    ctx.gpr[19] = (0u | 16u);
    goto L_08963144;
L_08963144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08963150;
    }
L_08963150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_0896315C;
    }
L_0896315C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 14u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963264;
      }
      goto L_0896317C;
    }
L_0896317C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08963194;
      }
      goto L_08963190;
    }
L_08963190:
    ctx.gpr[17] = (0u | 0u);
    goto L_08963194;
L_08963194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089631AC;
      }
      goto L_089631A8;
    }
L_089631A8:
    ctx.gpr[17] = (0u | 0u);
    goto L_089631AC;
L_089631AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089631C4;
      }
      goto L_089631C0;
    }
L_089631C0:
    ctx.gpr[17] = (0u | 0u);
    goto L_089631C4;
L_089631C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089631E0;
      }
      goto L_089631DC;
    }
L_089631DC:
    ctx.gpr[17] = (0u | 0u);
    goto L_089631E0;
L_089631E0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896320C;
      }
      goto L_089631F0;
    }
L_089631F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08963200u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08963200u) goto L_08963200;
    return;
L_08963200:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896320C;
L_0896320C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963248;
      }
      goto L_08963224;
    }
L_08963224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(380)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963244;
      }
      goto L_08963234;
    }
L_08963234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(380)));
    ctx.gpr[5] = (0u | 233u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963248;
      }
      goto L_08963244;
    }
L_08963244:
    ctx.gpr[17] = (0u | 0u);
    goto L_08963248;
L_08963248:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896325C;
      }
      goto L_08963250;
    }
L_08963250:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x0896325Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08960A2C;
L_0896325C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08963264;
    }
L_08963264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (0u | 112u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963294;
      }
      goto L_0896327C;
    }
L_0896327C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x0896328Cu);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x0896328Cu) goto L_0896328C;
    return;
L_0896328C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08963294;
    }
L_08963294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089632A4;
    }
L_089632A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089632B8;
    }
L_089632B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089632CC;
    }
L_089632CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089632E4;
    }
L_089632E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08963384;
      }
      goto L_089632F8;
    }
L_089632F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963384;
      }
      goto L_08963314;
    }
L_08963314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963380;
      }
      goto L_08963324;
    }
L_08963324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x08963334u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 296u, 0x08B01088u>(ctx, &aot_mem) && ctx.pc == 0x08963334u) goto L_08963334;
    return;
L_08963334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963384;
      }
      goto L_0896333C;
    }
L_0896333C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x0896334Cu);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x0896334Cu) goto L_0896334C;
    return;
L_0896334C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08963364u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x08963364u) goto L_08963364;
    return;
L_08963364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[31] = (0x08963378u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem) && ctx.pc == 0x08963378u) goto L_08963378;
    return;
L_08963378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963384;
      }
      goto L_08963380;
    }
L_08963380:
    ctx.gpr[16] = (0u | 0u);
    goto L_08963384;
L_08963384:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_0896338C;
    }
L_0896338C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089633CC;
      }
      goto L_089633A0;
    }
L_089633A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x089633C4u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089633C4u) goto L_089633C4;
    return;
L_089633C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089633CC;
    }
L_089633CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089633DC;
    }
L_089633DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x089633E8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 296u, 0x08B01088u>(ctx, &aot_mem) && ctx.pc == 0x089633E8u) goto L_089633E8;
    return;
L_089633E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089633F0;
    }
L_089633F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08963408u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x08963408u) goto L_08963408;
    return;
L_08963408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[31] = (0x0896341Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem) && ctx.pc == 0x0896341Cu) goto L_0896341C;
    return;
L_0896341C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089635C0;
      }
      goto L_08963428;
    }
L_08963428:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(220)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7668)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08963494;
      }
      goto L_08963444;
    }
L_08963444:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963494;
      }
      goto L_08963450;
    }
L_08963450:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963494;
      }
      goto L_0896345C;
    }
L_0896345C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963494;
      }
      goto L_08963468;
    }
L_08963468:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08963484u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08963484u) goto L_08963484;
    return;
L_08963484:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08963494u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem) && ctx.pc == 0x08963494u) goto L_08963494;
    return;
L_08963494:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089635C0;
      }
      goto L_089634A0;
    }
L_089634A0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6992));
      if (branch_taken) {
          goto L_08963520;
      }
      goto L_089634B0;
    }
L_089634B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(218)));
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
        goto L_08963524;
    }
    goto L_089634BC;
L_089634BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[31] = (0x089634D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 125u, 0x08A1CC44u>(ctx, &aot_mem) && ctx.pc == 0x089634D0u) goto L_089634D0;
    return;
L_089634D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089634E4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089634E4u) goto L_089634E4;
    return;
L_089634E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089634F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem) && ctx.pc == 0x089634F4u) goto L_089634F4;
    return;
L_089634F4:
    ctx.gpr[31] = (0x089634FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 316u, 0x08A225A4u>(ctx, &aot_mem) && ctx.pc == 0x089634FCu) goto L_089634FC;
    return;
L_089634FC:
    ctx.gpr[31] = (0x08963504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 127u, 0x08A11208u>(ctx, &aot_mem) && ctx.pc == 0x08963504u) goto L_08963504;
    return;
L_08963504:
    ctx.gpr[31] = (0x0896350Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 11u, 0x08A7C6A8u>(ctx, &aot_mem) && ctx.pc == 0x0896350Cu) goto L_0896350C;
    return;
L_0896350C:
    ctx.gpr[31] = (0x08963514u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08963514u) goto L_08963514;
    return;
L_08963514:
    ctx.gpr[31] = (0x0896351Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem) && ctx.pc == 0x0896351Cu) goto L_0896351C;
    return;
L_0896351C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    goto L_08963520;
L_08963520:
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
    goto L_08963524;
L_08963524:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963598;
      }
      goto L_0896354C;
    }
L_0896354C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_08963598;
L_08963598:
    ctx.gpr[31] = (0x089635A0u);
    // nop
    goto L_089602C8;
L_089635A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089635C0;
      }
      goto L_089635A8;
    }
L_089635A8:
    ctx.gpr[31] = (0x089635B0u);
    // nop
    goto L_089602C8;
L_089635B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089635C0;
L_089635C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963778;
      }
      goto L_089635D0;
    }
L_089635D0:
    ctx.gpr[31] = (0x089635D8u);
    // nop
    goto L_089602C8;
L_089635D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089636EC;
      }
      goto L_089635E0;
    }
L_089635E0:
    ctx.gpr[31] = (0x089635E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x089635E8u) goto L_089635E8;
    return;
L_089635E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089636EC;
      }
      goto L_089635F0;
    }
L_089635F0:
    ctx.gpr[31] = (0x089635F8u);
    // nop
    goto L_089602C8;
L_089635F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089636EC;
      }
      goto L_08963610;
    }
L_08963610:
    ctx.gpr[31] = (0x08963618u);
    // nop
    goto L_089602C8;
L_08963618:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(320));
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
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089636EC;
      }
      goto L_0896364C;
    }
L_0896364C:
    ctx.gpr[31] = (0x08963654u);
    // nop
    goto L_089602C8;
L_08963654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963690;
      }
      goto L_08963660;
    }
L_08963660:
    ctx.gpr[31] = (0x08963668u);
    // nop
    goto L_089602C8;
L_08963668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963690;
      }
      goto L_08963678;
    }
L_08963678:
    ctx.gpr[31] = (0x08963680u);
    // nop
    goto L_089602C8;
L_08963680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089636EC;
      }
      goto L_08963690;
    }
L_08963690:
    ctx.gpr[31] = (0x08963698u);
    // nop
    goto L_089602C8;
L_08963698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089636EC;
      }
      goto L_089636A8;
    }
L_089636A8:
    ctx.gpr[31] = (0x089636B0u);
    // nop
    goto L_089602C8;
L_089636B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089636DC;
      }
      goto L_089636CC;
    }
L_089636CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089636F0;
      }
      goto L_089636DC;
    }
L_089636DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089636F0;
      }
      goto L_089636EC;
    }
L_089636EC:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(236), 0u);
    goto L_089636F0;
L_089636F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963778;
      }
      goto L_08963700;
    }
L_08963700:
    ctx.gpr[31] = (0x08963708u);
    // nop
    goto L_089602C8;
L_08963708:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963778;
      }
      goto L_08963718;
    }
L_08963718:
    ctx.gpr[4] = (17273u << 16u);
    ctx.gpr[31] = (0x08963724u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089602C8;
L_08963724:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(636)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(636)));
        goto L_0896373C;
    }
    goto L_0896373C;
L_0896373C:
    ctx.gpr[31] = (0x08963744u);
    // nop
    goto L_089602C8;
L_08963744:
    ctx.gpr[31] = (0x0896374Cu);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089602C8;
L_0896374C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963778;
      }
      goto L_08963758;
    }
L_08963758:
    ctx.gpr[31] = (0x08963760u);
    // nop
    goto L_089602C8;
L_08963760:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(944));
    ctx.gpr[31] = (0x0896376Cu);
    ctx.gpr[5] = (0u | 225u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 383u, 0x08B0D94Cu>(ctx, &aot_mem) && ctx.pc == 0x0896376Cu) goto L_0896376C;
    return;
L_0896376C:
    ctx.gpr[31] = (0x08963774u);
    // nop
    goto L_089602C8;
L_08963774:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1840), 0u);
    goto L_08963778;
L_08963778:
    ctx.gpr[31] = (0x08963780u);
    // nop
    goto L_089602C8;
L_08963780:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089638F0;
      }
      goto L_08963788;
    }
L_08963788:
    ctx.gpr[31] = (0x08963790u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089602C8;
L_08963790:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[16] = (0u | 0u);
    goto L_08963798;
L_08963798:
    ctx.gpr[31] = (0x089637A0u);
    // nop
    goto L_089602C8;
L_089637A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(565)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089637EC;
      }
      goto L_089637B0;
    }
L_089637B0:
    ctx.gpr[31] = (0x089637B8u);
    // nop
    goto L_089602C8;
L_089637B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089637C4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089637C4u) goto L_089637C4;
    return;
L_089637C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089637E4;
      }
      goto L_089637CC;
    }
L_089637CC:
    ctx.gpr[31] = (0x089637D4u);
    // nop
    goto L_089602C8;
L_089637D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089637E0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089637E0u) goto L_089637E0;
    return;
L_089637E0:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(0u));
    goto L_089637E4;
L_089637E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08963798;
      }
      goto L_089637EC;
    }
L_089637EC:
    ctx.gpr[31] = (0x089637F4u);
    // nop
    goto L_089602C8;
L_089637F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896393C;
      }
      goto L_08963804;
    }
L_08963804:
    ctx.gpr[31] = (0x0896380Cu);
    // nop
    goto L_089602C8;
L_0896380C:
    ctx.gpr[31] = (0x08963814u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x08963814u) goto L_08963814;
    return;
L_08963814:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[16] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08963840;
      }
      goto L_08963824;
    }
L_08963824:
    ctx.gpr[31] = (0x0896382Cu);
    // nop
    goto L_089602C8;
L_0896382C:
    ctx.gpr[31] = (0x08963834u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x08963834u) goto L_08963834;
    return;
L_08963834:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08963858;
      }
      goto L_08963840;
    }
L_08963840:
    ctx.gpr[31] = (0x08963848u);
    // nop
    goto L_089602C8;
L_08963848:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(264)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9064)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08963858;
L_08963858:
    ctx.gpr[31] = (0x08963860u);
    // nop
    goto L_089602C8;
L_08963860:
    ctx.gpr[31] = (0x08963868u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x08963868u) goto L_08963868;
    return;
L_08963868:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08963888;
      }
      goto L_08963870;
    }
L_08963870:
    ctx.gpr[31] = (0x08963878u);
    // nop
    goto L_089602C8;
L_08963878:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(264)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9068)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9068), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08963888;
L_08963888:
    ctx.gpr[31] = (0x08963890u);
    // nop
    goto L_089602C8;
L_08963890:
    ctx.gpr[31] = (0x08963898u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x08963898u) goto L_08963898;
    return;
L_08963898:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089638BC;
      }
      goto L_089638A4;
    }
L_089638A4:
    ctx.gpr[31] = (0x089638ACu);
    // nop
    goto L_089602C8;
L_089638AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(264)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9072)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089638BC;
L_089638BC:
    ctx.gpr[31] = (0x089638C4u);
    // nop
    goto L_089602C8;
L_089638C4:
    ctx.gpr[31] = (0x089638CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x089638CCu) goto L_089638CC;
    return;
L_089638CC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0896393C;
      }
      goto L_089638D4;
    }
L_089638D4:
    ctx.gpr[31] = (0x089638DCu);
    // nop
    goto L_089602C8;
L_089638DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(264)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9076)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9076), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896393C;
      }
      goto L_089638F0;
    }
L_089638F0:
    ctx.gpr[31] = (0x089638F8u);
    // nop
    goto L_08960424;
L_089638F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963924;
      }
      goto L_08963908;
    }
L_08963908:
    ctx.gpr[31] = (0x08963910u);
    // nop
    goto L_08960424;
L_08963910:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(264)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9080)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896393C;
      }
      goto L_08963924;
    }
L_08963924:
    ctx.gpr[31] = (0x0896392Cu);
    // nop
    goto L_08960424;
L_0896392C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(264)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9084)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9084), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0896393C;
L_0896393C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963B78;
      }
      goto L_08963948;
    }
L_08963948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08963960;
      }
      goto L_08963958;
    }
L_08963958:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08963B54;
      }
      goto L_08963960;
    }
L_08963960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (0u | 20000u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7668)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963A48;
      }
      goto L_08963990;
    }
L_08963990:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0896399Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08960154;
L_0896399C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(6592));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_089639E8;
      }
      goto L_089639E0;
    }
L_089639E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17556), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089639EC;
      }
      goto L_089639E8;
    }
L_089639E8:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17556), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_089639EC;
L_089639EC:
    ctx.gpr[31] = (0x089639F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08960154;
L_089639F4:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[31] = (0x08963A08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08960154;
L_08963A08:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08963A34u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem) && ctx.pc == 0x08963A34u) goto L_08963A34;
    return;
L_08963A34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963A44;
      }
      goto L_08963A3C;
    }
L_08963A3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17555), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08963A48;
      }
      goto L_08963A44;
    }
L_08963A44:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17555), static_cast<std::uint8_t>(0u));
    goto L_08963A48;
L_08963A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2320)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963AD4;
      }
      goto L_08963A60;
    }
L_08963A60:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08963A98;
      }
      goto L_08963A6C;
    }
L_08963A6C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08963AA4;
      }
      goto L_08963A74;
    }
L_08963A74:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08963AB0;
      }
      goto L_08963A7C;
    }
L_08963A7C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08963ABC;
      }
      goto L_08963A84;
    }
L_08963A84:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08963AC8;
      }
      goto L_08963A8C;
    }
L_08963A8C:
    ctx.gpr[4] = (16888u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08963AD4;
      }
      goto L_08963A98;
    }
L_08963A98:
    ctx.gpr[4] = (17016u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08963AD4;
      }
      goto L_08963AA4;
    }
L_08963AA4:
    ctx.gpr[4] = (17146u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08963AD4;
      }
      goto L_08963AB0;
    }
L_08963AB0:
    ctx.gpr[4] = (17274u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08963AD4;
      }
      goto L_08963ABC;
    }
L_08963ABC:
    ctx.gpr[4] = (17402u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08963AD4;
      }
      goto L_08963AC8;
    }
L_08963AC8:
    ctx.gpr[4] = (17530u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08963AD4;
      }
      goto L_08963AD4;
    }
L_08963AD4:
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(320)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08963B48;
      }
      goto L_08963B04;
    }
L_08963B04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17556)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963B54;
      }
      goto L_08963B10;
    }
L_08963B10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17555)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963B54;
      }
      goto L_08963B1C;
    }
L_08963B1C:
    ctx.gpr[31] = (0x08963B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE958u>(ctx, &aot_mem) && ctx.pc == 0x08963B24u) goto L_08963B24;
    return;
L_08963B24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963B54;
      }
      goto L_08963B2C;
    }
L_08963B2C:
    ctx.gpr[31] = (0x08963B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 530u, 0x08AAE97Cu>(ctx, &aot_mem) && ctx.pc == 0x08963B34u) goto L_08963B34;
    return;
L_08963B34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963B54;
      }
      goto L_08963B3C;
    }
L_08963B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963B54;
      }
      goto L_08963B48;
    }
L_08963B48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(320)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08963B54;
L_08963B54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9088)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9088)));
        goto L_08963B74;
    }
    goto L_08963B6C;
L_08963B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(320)));
      if (branch_taken) {
          goto L_08963B74;
      }
      goto L_08963B74;
    }
L_08963B74:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9088), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08963B78;
L_08963B78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (1526u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7937));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(172)));
        goto L_08963B90;
    }
    goto L_08963B90;
L_08963B90:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (1526u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7937));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(176)));
        goto L_08963BAC;
    }
    goto L_08963BAC;
L_08963BAC:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963BF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[19]);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[8]);
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[7]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 7u, 0x089640C0u>(ctx, &aot_mem); return;
      }
      goto L_08963C58;
    }
L_08963C58:
    ctx.gpr[4] = (16422u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 6u);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 8u);
    ctx.gpr[4] = (16544u << 16u);
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[20] = (1u << 16u);
    goto L_08963C8C;
L_08963C8C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08963C9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089600D4;
L_08963C9C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem); return;
      }
      goto L_08963CB0;
    }
L_08963CB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 512u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem); return;
      }
      goto L_08963CC8;
    }
L_08963CC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 4u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem); return;
      }
      goto L_08963CE8;
    }
L_08963CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 14u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08963D4C;
      }
      goto L_08963D08;
    }
L_08963D08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08963D38;
    }
    goto L_08963D18;
L_08963D18:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[31] = (0x08963D28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08963D28u) goto L_08963D28;
    return;
L_08963D28:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08963D38;
L_08963D38:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[16] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u < ctx.gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_08963D58;
      }
      goto L_08963D4C;
    }
L_08963D4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[16] = (ctx.gpr[4] & 4u);
    ctx.gpr[16] = (0u < ctx.gpr[16] ? 1u : 0u);
    goto L_08963D58;
L_08963D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem); return;
      }
      goto L_08963D6C;
    }
L_08963D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem); return;
      }
      goto L_08963D80;
    }
L_08963D80:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem); return;
      }
      goto L_08963D88;
    }
L_08963D88:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 14u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08963DF8;
      }
      goto L_08963DA4;
    }
L_08963DA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[20]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963DCC;
      }
      goto L_08963DBC;
    }
L_08963DBC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08963DCC;
      }
      goto L_08963DC8;
    }
L_08963DC8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08963DCC;
L_08963DCC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[20]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963E50;
      }
      goto L_08963DE4;
    }
L_08963DE4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08963E50;
      }
      goto L_08963DF0;
    }
L_08963DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08963E50;
      }
      goto L_08963DF8;
    }
L_08963DF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 4u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963E24;
      }
      goto L_08963E14;
    }
L_08963E14:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08963E24;
      }
      goto L_08963E20;
    }
L_08963E20:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08963E24;
L_08963E24:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 4u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963E50;
      }
      goto L_08963E40;
    }
L_08963E40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08963E50;
      }
      goto L_08963E4C;
    }
L_08963E4C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08963E50;
L_08963E50:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (16025u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08963E7C;
      }
      goto L_08963E74;
    }
L_08963E74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem); return;
      }
      goto L_08963E7C;
    }
L_08963E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(236)));
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08963EC4;
      }
      goto L_08963E98;
    }
L_08963E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963EC4;
      }
      goto L_08963EB4;
    }
L_08963EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963EC4;
      }
      goto L_08963EC0;
    }
L_08963EC0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08963EC4;
L_08963EC4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08963ED0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089617F8;
L_08963ED0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08963EEC;
    }
    goto L_08963EEC;
L_08963EEC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem); return;
      }
      goto L_08963EFC;
    }
L_08963EFC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08963F08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089617F8;
L_08963F08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[31] = (0x08963F20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089617F8;
L_08963F20:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08963F3Cu);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_089617F8;
L_08963F3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[22] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[31] = (0x08963F54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089617F8;
L_08963F54:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[14];
    ctx.fpr[22] = std::sqrt(ctx.fpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08963FDC;
      }
      goto L_08963F78;
    }
L_08963F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963FDC;
      }
      goto L_08963F90;
    }
L_08963F90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08963FC0;
    }
    goto L_08963FA0;
L_08963FA0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(181));
    ctx.gpr[31] = (0x08963FB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08963FB0u) goto L_08963FB0;
    return;
L_08963FB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(181)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08963FC0;
L_08963FC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963FDC;
      }
      goto L_08963FD8;
    }
L_08963FD8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08963FDC;
L_08963FDC:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem); return;
      }
      goto L_08963FEC;
    }
L_08963FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 3u, 0x0896408Cu>(ctx, &aot_mem); return;
      }
      goto L_08963FF8;
    }
L_08963FF8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.pc = 0x08964000u; return;
}

void recomp_unit_0087(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0087_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_87(Runtime &runtime) {
    runtime.register_generated_unit(87u, 0x08960000u, 16384u, &recomp_unit_0087, &recomp_unit_0087_entry);
    runtime.register_function(0x08960000u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960018u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960020u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960028u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960030u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896006Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960090u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960104u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896011Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896012Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960134u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960138u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960154u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960194u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896019Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960200u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896022Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960240u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960278u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896029Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960304u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896030Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960314u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896033Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960340u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960350u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960388u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960404u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896040Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960414u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960418u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960424u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960450u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960468u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960490u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960498u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960528u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960530u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960538u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960540u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960548u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960550u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960560u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960580u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960590u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089605D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089605E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089605F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960600u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960608u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960610u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960618u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960620u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960628u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960640u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960650u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960658u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960660u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960668u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896069Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960800u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960808u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896080Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960814u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896085Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960880u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960908u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960910u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896093Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896095Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960964u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960974u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960990u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960ACCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CD0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D44u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D64u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960ED8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F68u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961028u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961058u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961088u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089610B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089610E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961118u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961144u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961158u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961200u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961230u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961260u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961290u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961320u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961350u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961380u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089613B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089613E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961410u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961440u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961470u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896149Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896150Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961518u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961524u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961530u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961538u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896153Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961544u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896154Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896155Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896156Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961578u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961598u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896160Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961618u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961624u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961630u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961638u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896163Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961644u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896164Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961654u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961664u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961674u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961680u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961700u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896170Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961720u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961730u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961738u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896173Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896174Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896175Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961764u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961774u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961794u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961854u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896190Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961920u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896192Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961934u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896194Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961954u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961968u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961970u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961974u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896197Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961984u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896198Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961994u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089619A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089619B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089619D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A44u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961AA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961AC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961AF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C64u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961DCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961DE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961ED0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FD0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FE8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962000u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896200Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896201Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962048u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962058u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962070u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962078u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962084u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962090u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962110u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962128u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962140u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962144u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962178u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962190u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089621B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089621D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089621E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962200u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962220u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962244u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896224Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896225Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896227Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896228Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962298u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962314u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962334u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962340u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962364u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962374u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962380u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962390u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962408u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896242Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896243Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962448u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962458u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962484u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962494u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896250Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896253Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962554u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962574u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896259Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089625A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089625C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089625E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962608u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962610u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962620u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962640u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962650u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896265Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896266Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962674u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962680u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962690u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089626C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089626D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089626F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962704u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896271Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896272Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962758u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962768u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962780u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962788u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962794u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962808u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962810u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896281Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962824u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962830u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962838u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962844u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896284Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962850u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962858u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962868u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962874u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962878u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089628A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089628C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089628DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089628E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089628ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089628F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089628FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962904u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896290Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962914u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962918u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962924u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962934u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896293Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962954u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896296Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962984u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896299Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089629B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089629C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089629C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089629D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089629D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089629E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089629F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A44u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A68u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962AB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962ABCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962AF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C64u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D64u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FD0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896300Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963020u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963030u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963038u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963040u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963050u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963068u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896307Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963088u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963118u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896312Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896313Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963144u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963150u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896315Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896317Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963190u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963194u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963200u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896320Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963224u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963234u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963244u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963248u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963250u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896325Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963264u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896327Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896328Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963294u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963314u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963324u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963334u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896333Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896334Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963364u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963378u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963380u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963384u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896338Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963408u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896341Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963428u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963444u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963450u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896345Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963468u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963484u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963494u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963504u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896350Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963514u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896351Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963520u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963524u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896354Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963598u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963610u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963618u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896364Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963654u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963660u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963668u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963678u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963680u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963690u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963698u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963700u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963708u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963718u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963724u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896373Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963744u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896374Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963758u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963760u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896376Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963774u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963778u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963780u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963788u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963790u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963798u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963804u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896380Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963814u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963824u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896382Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963834u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963840u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963848u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963858u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963860u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963868u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963870u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963878u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963888u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963890u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963898u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963908u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963910u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963924u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896392Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896393Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963948u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963958u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963960u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963990u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896399Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A44u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963AA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963AB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963ABCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963AC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963AD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963BACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963BF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CE8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963ED0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FD8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FF8u, &recomp_unit_0087, "recomp_unit_0087");
}
} // namespace psprecomp
