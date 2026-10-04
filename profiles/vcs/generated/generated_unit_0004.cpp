#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0004[4058] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0,
    0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0,
    0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0,
    41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 45, 46, 0, 47, 0, 48, 49, 0, 50, 0, 0,
    0, 0, 51, 0, 52, 53, 0, 54, 0, 0, 0, 55, 0, 56, 57, 0, 58, 0, 0, 0, 59, 60, 0, 61, 0, 62, 0, 0, 63, 0, 0, 64,
    0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74,
    0, 75, 76, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 83, 84, 0, 85, 0, 86, 0, 0, 0, 87, 0,
    0, 88, 0, 0, 89, 0, 0, 90, 0, 91, 92, 0, 93, 0, 94, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 98, 0, 0, 99, 0, 100, 101,
    0, 102, 0, 103, 0, 0, 0, 104, 0, 105, 0, 106, 0, 0, 107, 0, 0, 108, 0, 109, 110, 0, 111, 0, 112, 0, 0, 0, 113, 114, 0, 115,
    0, 0, 116, 0, 0, 117, 0, 118, 119, 0, 120, 0, 121, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 128, 0, 129,
    0, 130, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 0, 135, 0, 136, 137, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 158, 0, 159, 0, 0, 160, 0, 0, 0,
    161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 0, 178, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0,
    183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 200, 0, 0,
    0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0,
    0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 216, 217, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0,
    220, 0, 221, 222, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 227, 0, 228, 0, 0, 229, 0, 230,
    0, 0, 231, 0, 232, 233, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 238, 0, 239, 240, 0, 241, 0, 0,
    0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0,
    250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 254, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258,
    0, 259, 0, 260, 0, 261, 262, 0, 0, 0, 263, 0, 264, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 269, 270,
    0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0,
    278, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0,
    0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315,
    0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0,
    327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 332, 0, 0,
    0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 336, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 338, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 345, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0,
    0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0,
    0, 0, 361, 0, 0, 362, 0, 363, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 370, 0,
    0, 0, 371, 0, 372, 373, 0, 374, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0,
    0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0,
    0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0,
    392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398,
    0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0,
    0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 421,
    0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0,
    0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 433, 0, 434, 435, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0,
    0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0,
    0, 0, 447, 0, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0,
    0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0,
    0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 465, 0, 0, 466, 0, 0, 0, 0, 0,
    0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480,
    0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 0, 492, 0, 493, 0, 494, 0, 495, 0, 0, 496, 0,
    0, 0, 497, 0, 498, 0, 0, 0, 499, 0, 0, 500, 0, 501, 0, 0, 502, 0, 503, 504, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0,
    0, 507, 0, 0, 0, 0, 0, 0, 0, 508, 509, 0, 510, 0, 511, 512, 0, 513, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0,
    0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0,
    0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 527,
    0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 533, 0, 534, 535, 0, 536, 0, 0, 537, 0, 538, 539, 0, 540, 0, 0, 541, 0, 542, 543, 0, 544, 0, 0, 545, 0, 546, 547, 0, 548, 0,
    0, 0, 549, 0, 550, 551, 0, 552, 0, 0, 553, 0, 554, 555, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0,
    564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 566, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573,
    0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 589, 0, 0,
    0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 595, 0, 596, 597, 0, 0, 598, 0, 599, 600, 0, 0, 601, 0, 602, 603, 0, 0, 604, 0, 605,
    606, 0, 0, 607, 0, 608, 609, 0, 0, 610, 0, 611, 612, 0, 0, 613, 0, 614, 615, 0, 0, 616, 0, 617, 618, 0, 0, 619, 0, 620, 621, 0,
    0, 622, 0, 623, 624, 0, 0, 625, 0, 626, 627, 0, 0, 628, 0, 629, 630, 0, 0, 631, 0, 632, 633, 0, 0, 634, 0, 635, 636, 0, 0, 637,
    0, 638, 639, 0, 0, 640, 0, 641, 642, 0, 0, 643, 0, 644, 645, 0, 0, 646, 0, 647, 648, 0, 0, 649, 0, 650, 651, 0, 0, 652, 0, 653,
    654, 0, 0, 655, 0, 656, 657, 0, 0, 658, 0, 659, 660, 0, 0, 661, 0, 662, 663, 0, 0, 664, 0, 665, 666, 0, 0, 667, 0, 668, 669, 0,
    0, 670, 0, 671, 672, 0, 0, 673, 0, 674, 675, 0, 0, 676, 0, 677, 678, 0, 0, 679, 0, 680, 681, 0, 0, 682, 0, 683, 684, 0, 0, 685,
    0, 686, 687, 0, 0, 688, 0, 689, 690, 0, 0, 691, 0, 692, 693, 0, 0, 694, 0, 695, 696, 0, 0, 697, 0, 698, 699, 0, 0, 700, 0, 701,
    702, 0, 0, 703, 0, 704, 705, 0, 0, 706, 0, 707, 708, 0, 0, 709, 0, 710, 711, 0, 0, 712, 0, 713, 714, 0, 0, 715, 0, 716, 717, 0,
    0, 718, 0, 719, 720, 0, 0, 721, 0, 722, 723, 0, 0, 724, 0, 725, 726, 0, 0, 727, 0, 728, 729, 0, 0, 730, 0, 731, 732, 0, 0, 733,
    0, 734, 735, 0, 0, 736, 0, 737, 738, 0, 0, 739, 0, 740, 741, 0, 0, 742, 0, 743, 744, 0, 0, 745, 0, 746, 747, 0, 0, 748, 0, 749,
    750, 0, 0, 751, 0, 752, 753, 0, 0, 754, 0, 755, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0,
    0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 765, 0, 0, 0, 0,
    0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 768, 0, 769, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0,
    0, 0, 772, 0, 0, 0, 773, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 775, 0, 0, 776, 777, 0, 778, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 781, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 784, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 797, 0, 0, 0, 0,
    798, 0, 0, 799, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801,
};
void recomp_unit_0004_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08814000u;
        entry_id = (entry_delta < 16232u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0004[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08814000;
    case 2u: goto L_08814014;
    case 3u: goto L_0881402C;
    case 4u: goto L_08814040;
    case 5u: goto L_08814060;
    case 6u: goto L_08814068;
    case 7u: goto L_08814084;
    case 8u: goto L_0881408C;
    case 9u: goto L_08814098;
    case 10u: goto L_088140C0;
    case 11u: goto L_08814100;
    case 12u: goto L_08814110;
    case 13u: goto L_08814134;
    case 14u: goto L_08814144;
    case 15u: goto L_08814168;
    case 16u: goto L_08814178;
    case 17u: goto L_0881419C;
    case 18u: goto L_088141AC;
    case 19u: goto L_088141CC;
    case 20u: goto L_088141DC;
    case 21u: goto L_088141FC;
    case 22u: goto L_0881420C;
    case 23u: goto L_0881422C;
    case 24u: goto L_0881423C;
    case 25u: goto L_0881425C;
    case 26u: goto L_0881426C;
    case 27u: goto L_08814294;
    case 28u: goto L_08814318;
    case 29u: goto L_08814328;
    case 30u: goto L_0881437C;
    case 31u: goto L_08814380;
    case 32u: goto L_088143CC;
    case 33u: goto L_088143E4;
    case 34u: goto L_088143F4;
    case 35u: goto L_08814404;
    case 36u: goto L_08814418;
    case 37u: goto L_0881443C;
    case 38u: goto L_08814444;
    case 39u: goto L_08814468;
    case 40u: goto L_08814478;
    case 41u: goto L_08814480;
    case 42u: goto L_08814488;
    case 43u: goto L_088144C0;
    case 44u: goto L_088144CC;
    case 45u: goto L_088144D4;
    case 46u: goto L_088144D8;
    case 47u: goto L_088144E0;
    case 48u: goto L_088144E8;
    case 49u: goto L_088144EC;
    case 50u: goto L_088144F4;
    case 51u: goto L_08814508;
    case 52u: goto L_08814510;
    case 53u: goto L_08814514;
    case 54u: goto L_0881451C;
    case 55u: goto L_0881452C;
    case 56u: goto L_08814534;
    case 57u: goto L_08814538;
    case 58u: goto L_08814540;
    case 59u: goto L_08814550;
    case 60u: goto L_08814554;
    case 61u: goto L_0881455C;
    case 62u: goto L_08814564;
    case 63u: goto L_08814570;
    case 64u: goto L_0881457C;
    case 65u: goto L_08814584;
    case 66u: goto L_08814590;
    case 67u: goto L_088145A0;
    case 68u: goto L_088145A8;
    case 69u: goto L_088145B8;
    case 70u: goto L_088145C8;
    case 71u: goto L_088145D8;
    case 72u: goto L_088145E4;
    case 73u: goto L_088145F0;
    case 74u: goto L_088145FC;
    case 75u: goto L_08814604;
    case 76u: goto L_08814608;
    case 77u: goto L_08814610;
    case 78u: goto L_08814618;
    case 79u: goto L_08814628;
    case 80u: goto L_08814634;
    case 81u: goto L_08814640;
    case 82u: goto L_0881464C;
    case 83u: goto L_08814654;
    case 84u: goto L_08814658;
    case 85u: goto L_08814660;
    case 86u: goto L_08814668;
    case 87u: goto L_08814678;
    case 88u: goto L_08814684;
    case 89u: goto L_08814690;
    case 90u: goto L_0881469C;
    case 91u: goto L_088146A4;
    case 92u: goto L_088146A8;
    case 93u: goto L_088146B0;
    case 94u: goto L_088146B8;
    case 95u: goto L_088146C8;
    case 96u: goto L_088146D0;
    case 97u: goto L_088146D8;
    case 98u: goto L_088146E4;
    case 99u: goto L_088146F0;
    case 100u: goto L_088146F8;
    case 101u: goto L_088146FC;
    case 102u: goto L_08814704;
    case 103u: goto L_0881470C;
    case 104u: goto L_0881471C;
    case 105u: goto L_08814724;
    case 106u: goto L_0881472C;
    case 107u: goto L_08814738;
    case 108u: goto L_08814744;
    case 109u: goto L_0881474C;
    case 110u: goto L_08814750;
    case 111u: goto L_08814758;
    case 112u: goto L_08814760;
    case 113u: goto L_08814770;
    case 114u: goto L_08814774;
    case 115u: goto L_0881477C;
    case 116u: goto L_08814788;
    case 117u: goto L_08814794;
    case 118u: goto L_0881479C;
    case 119u: goto L_088147A0;
    case 120u: goto L_088147A8;
    case 121u: goto L_088147B0;
    case 122u: goto L_088147C0;
    case 123u: goto L_088147C8;
    case 124u: goto L_088147D0;
    case 125u: goto L_088147DC;
    case 126u: goto L_088147E8;
    case 127u: goto L_088147F0;
    case 128u: goto L_088147F4;
    case 129u: goto L_088147FC;
    case 130u: goto L_08814804;
    case 131u: goto L_08814814;
    case 132u: goto L_0881481C;
    case 133u: goto L_08814824;
    case 134u: goto L_08814830;
    case 135u: goto L_0881483C;
    case 136u: goto L_08814844;
    case 137u: goto L_08814848;
    case 138u: goto L_08814850;
    case 139u: goto L_08814858;
    case 140u: goto L_08814868;
    case 141u: goto L_0881487C;
    case 142u: goto L_088148C4;
    case 143u: goto L_0881491C;
    case 144u: goto L_08814924;
    case 145u: goto L_0881492C;
    case 146u: goto L_08814944;
    case 147u: goto L_08814958;
    case 148u: goto L_0881496C;
    case 149u: goto L_08814978;
    case 150u: goto L_08814998;
    case 151u: goto L_088149C8;
    case 152u: goto L_088149D4;
    case 153u: goto L_088149E4;
    case 154u: goto L_088149F8;
    case 155u: goto L_08814A10;
    case 156u: goto L_08814A44;
    case 157u: goto L_08814A54;
    case 158u: goto L_08814A5C;
    case 159u: goto L_08814A64;
    case 160u: goto L_08814A70;
    case 161u: goto L_08814A80;
    case 162u: goto L_08814A94;
    case 163u: goto L_08814AA8;
    case 164u: goto L_08814ABC;
    case 165u: goto L_08814AEC;
    case 166u: goto L_08814B1C;
    case 167u: goto L_08814B4C;
    case 168u: goto L_08814B58;
    case 169u: goto L_08814B68;
    case 170u: goto L_08814B90;
    case 171u: goto L_08814BB8;
    case 172u: goto L_08814BC4;
    case 173u: goto L_08814BEC;
    case 174u: goto L_08814C08;
    case 175u: goto L_08814C1C;
    case 176u: goto L_08814C2C;
    case 177u: goto L_08814C34;
    case 178u: goto L_08814C40;
    case 179u: goto L_08814C44;
    case 180u: goto L_08814C54;
    case 181u: goto L_08814C64;
    case 182u: goto L_08814C74;
    case 183u: goto L_08814C80;
    case 184u: goto L_08814C8C;
    case 185u: goto L_08814CD0;
    case 186u: goto L_08814CDC;
    case 187u: goto L_08814CE8;
    case 188u: goto L_08814D04;
    case 189u: goto L_08814D10;
    case 190u: goto L_08814D1C;
    case 191u: goto L_08814D28;
    case 192u: goto L_08814D30;
    case 193u: goto L_08814D5C;
    case 194u: goto L_08814D68;
    case 195u: goto L_08814D74;
    case 196u: goto L_08814D88;
    case 197u: goto L_08814DAC;
    case 198u: goto L_08814DC8;
    case 199u: goto L_08814DF0;
    case 200u: goto L_08814DF4;
    case 201u: goto L_08814E08;
    case 202u: goto L_08814E10;
    case 203u: goto L_08814E28;
    case 204u: goto L_08814E88;
    case 205u: goto L_08814E90;
    case 206u: goto L_08814E9C;
    case 207u: goto L_08814EAC;
    case 208u: goto L_08814EDC;
    case 209u: goto L_08814EE4;
    case 210u: goto L_08814EF4;
    case 211u: goto L_08814F04;
    case 212u: goto L_08814F14;
    case 213u: goto L_08814F20;
    case 214u: goto L_08814F38;
    case 215u: goto L_08814F44;
    case 216u: goto L_08814F4C;
    case 217u: goto L_08814F50;
    case 218u: goto L_08814F68;
    case 219u: goto L_08814F74;
    case 220u: goto L_08814F80;
    case 221u: goto L_08814F88;
    case 222u: goto L_08814F8C;
    case 223u: goto L_08814F94;
    case 224u: goto L_08814F9C;
    case 225u: goto L_08814FD4;
    case 226u: goto L_08814FDC;
    case 227u: goto L_08814FE0;
    case 228u: goto L_08814FE8;
    case 229u: goto L_08814FF4;
    case 230u: goto L_08814FFC;
    case 231u: goto L_08815008;
    case 232u: goto L_08815010;
    case 233u: goto L_08815014;
    case 234u: goto L_0881501C;
    case 235u: goto L_08815028;
    case 236u: goto L_0881504C;
    case 237u: goto L_08815054;
    case 238u: goto L_08815060;
    case 239u: goto L_08815068;
    case 240u: goto L_0881506C;
    case 241u: goto L_08815074;
    case 242u: goto L_08815084;
    case 243u: goto L_0881509C;
    case 244u: goto L_088150AC;
    case 245u: goto L_088150B4;
    case 246u: goto L_088150D8;
    case 247u: goto L_08815114;
    case 248u: goto L_0881516C;
    case 249u: goto L_08815178;
    case 250u: goto L_08815180;
    case 251u: goto L_08815188;
    case 252u: goto L_088151A8;
    case 253u: goto L_088151B4;
    case 254u: goto L_088151C4;
    case 255u: goto L_088151C8;
    case 256u: goto L_088151D0;
    case 257u: goto L_088151F0;
    case 258u: goto L_088151FC;
    case 259u: goto L_08815204;
    case 260u: goto L_0881520C;
    case 261u: goto L_08815214;
    case 262u: goto L_08815218;
    case 263u: goto L_08815228;
    case 264u: goto L_08815230;
    case 265u: goto L_08815234;
    case 266u: goto L_0881523C;
    case 267u: goto L_0881525C;
    case 268u: goto L_08815268;
    case 269u: goto L_08815278;
    case 270u: goto L_0881527C;
    case 271u: goto L_08815284;
    case 272u: goto L_088152AC;
    case 273u: goto L_088152B8;
    case 274u: goto L_088152CC;
    case 275u: goto L_088152DC;
    case 276u: goto L_088152E4;
    case 277u: goto L_088152EC;
    case 278u: goto L_08815300;
    case 279u: goto L_0881530C;
    case 280u: goto L_0881531C;
    case 281u: goto L_0881532C;
    case 282u: goto L_0881533C;
    case 283u: goto L_08815340;
    case 284u: goto L_08815348;
    case 285u: goto L_08815384;
    case 286u: goto L_0881538C;
    case 287u: goto L_08815394;
    case 288u: goto L_0881539C;
    case 289u: goto L_088153A4;
    case 290u: goto L_088153B0;
    case 291u: goto L_088153C8;
    case 292u: goto L_088153E0;
    case 293u: goto L_088153F8;
    case 294u: goto L_08815410;
    case 295u: goto L_08815438;
    case 296u: goto L_08815470;
    case 297u: goto L_088154A0;
    case 298u: goto L_088154C0;
    case 299u: goto L_088154DC;
    case 300u: goto L_088154F8;
    case 301u: goto L_08815500;
    case 302u: goto L_08815520;
    case 303u: goto L_08815540;
    case 304u: goto L_08815568;
    case 305u: goto L_08815574;
    case 306u: goto L_08815588;
    case 307u: goto L_088155B4;
    case 308u: goto L_088155B8;
    case 309u: goto L_088155C0;
    case 310u: goto L_088155E4;
    case 311u: goto L_08815610;
    case 312u: goto L_08815634;
    case 313u: goto L_08815638;
    case 314u: goto L_0881565C;
    case 315u: goto L_0881567C;
    case 316u: goto L_08815688;
    case 317u: goto L_088156B8;
    case 318u: goto L_088156E8;
    case 319u: goto L_08815704;
    case 320u: goto L_08815728;
    case 321u: goto L_08815748;
    case 322u: goto L_0881579C;
    case 323u: goto L_088157A8;
    case 324u: goto L_088157B8;
    case 325u: goto L_088157CC;
    case 326u: goto L_088157EC;
    case 327u: goto L_08815800;
    case 328u: goto L_0881580C;
    case 329u: goto L_08815828;
    case 330u: goto L_08815844;
    case 331u: goto L_08815870;
    case 332u: goto L_08815874;
    case 333u: goto L_08815890;
    case 334u: goto L_08815898;
    case 335u: goto L_088158B4;
    case 336u: goto L_088158BC;
    case 337u: goto L_088158C0;
    case 338u: goto L_08815904;
    case 339u: goto L_08815910;
    case 340u: goto L_08815920;
    case 341u: goto L_08815938;
    case 342u: goto L_08815968;
    case 343u: goto L_08815994;
    case 344u: goto L_088159C8;
    case 345u: goto L_088159CC;
    case 346u: goto L_088159E0;
    case 347u: goto L_088159E8;
    case 348u: goto L_08815A0C;
    case 349u: goto L_08815A70;
    case 350u: goto L_08815A78;
    case 351u: goto L_08815A84;
    case 352u: goto L_08815AA0;
    case 353u: goto L_08815AE0;
    case 354u: goto L_08815AE8;
    case 355u: goto L_08815B1C;
    case 356u: goto L_08815B48;
    case 357u: goto L_08815BB0;
    case 358u: goto L_08815BBC;
    case 359u: goto L_08815BE4;
    case 360u: goto L_08815BF0;
    case 361u: goto L_08815C08;
    case 362u: goto L_08815C14;
    case 363u: goto L_08815C1C;
    case 364u: goto L_08815C24;
    case 365u: goto L_08815C30;
    case 366u: goto L_08815C40;
    case 367u: goto L_08815C4C;
    case 368u: goto L_08815C68;
    case 369u: goto L_08815C70;
    case 370u: goto L_08815C78;
    case 371u: goto L_08815C88;
    case 372u: goto L_08815C90;
    case 373u: goto L_08815C94;
    case 374u: goto L_08815C9C;
    case 375u: goto L_08815CA4;
    case 376u: goto L_08815CB0;
    case 377u: goto L_08815CB8;
    case 378u: goto L_08815CC8;
    case 379u: goto L_08815CE4;
    case 380u: goto L_08815CF0;
    case 381u: goto L_08815D0C;
    case 382u: goto L_08815D18;
    case 383u: goto L_08815D34;
    case 384u: goto L_08815D40;
    case 385u: goto L_08815D5C;
    case 386u: goto L_08815D68;
    case 387u: goto L_08815D84;
    case 388u: goto L_08815D90;
    case 389u: goto L_08815DBC;
    case 390u: goto L_08815DE4;
    case 391u: goto L_08815DF4;
    case 392u: goto L_08815E00;
    case 393u: goto L_08815E20;
    case 394u: goto L_08815E2C;
    case 395u: goto L_08815E48;
    case 396u: goto L_08815E54;
    case 397u: goto L_08815E70;
    case 398u: goto L_08815E7C;
    case 399u: goto L_08815E98;
    case 400u: goto L_08815EA4;
    case 401u: goto L_08815EC0;
    case 402u: goto L_08815ECC;
    case 403u: goto L_08815EF4;
    case 404u: goto L_08815F1C;
    case 405u: goto L_08815F24;
    case 406u: goto L_08815F34;
    case 407u: goto L_08815F40;
    case 408u: goto L_08815F60;
    case 409u: goto L_08815F6C;
    case 410u: goto L_08815F88;
    case 411u: goto L_08815F94;
    case 412u: goto L_08815FB0;
    case 413u: goto L_08815FBC;
    case 414u: goto L_08815FD8;
    case 415u: goto L_08815FE4;
    case 416u: goto L_08816000;
    case 417u: goto L_0881600C;
    case 418u: goto L_08816038;
    case 419u: goto L_08816060;
    case 420u: goto L_08816070;
    case 421u: goto L_0881607C;
    case 422u: goto L_0881609C;
    case 423u: goto L_088160A8;
    case 424u: goto L_088160C4;
    case 425u: goto L_088160D0;
    case 426u: goto L_088160EC;
    case 427u: goto L_088160F8;
    case 428u: goto L_08816114;
    case 429u: goto L_08816120;
    case 430u: goto L_0881613C;
    case 431u: goto L_08816148;
    case 432u: goto L_08816170;
    case 433u: goto L_08816198;
    case 434u: goto L_088161A0;
    case 435u: goto L_088161A4;
    case 436u: goto L_088161B4;
    case 437u: goto L_088161C0;
    case 438u: goto L_088161DC;
    case 439u: goto L_088161E8;
    case 440u: goto L_08816204;
    case 441u: goto L_08816210;
    case 442u: goto L_0881622C;
    case 443u: goto L_08816238;
    case 444u: goto L_0881624C;
    case 445u: goto L_08816268;
    case 446u: goto L_08816278;
    case 447u: goto L_08816288;
    case 448u: goto L_08816294;
    case 449u: goto L_088162A4;
    case 450u: goto L_088162B0;
    case 451u: goto L_088162C0;
    case 452u: goto L_088162CC;
    case 453u: goto L_088162DC;
    case 454u: goto L_088162E8;
    case 455u: goto L_088162F4;
    case 456u: goto L_08816310;
    case 457u: goto L_08816320;
    case 458u: goto L_08816328;
    case 459u: goto L_08816368;
    case 460u: goto L_0881651C;
    case 461u: goto L_08816578;
    case 462u: goto L_0881658C;
    case 463u: goto L_0881659C;
    case 464u: goto L_088165D8;
    case 465u: goto L_088165DC;
    case 466u: goto L_088165E8;
    case 467u: goto L_08816604;
    case 468u: goto L_08816610;
    case 469u: goto L_08816638;
    case 470u: goto L_08816644;
    case 471u: goto L_0881666C;
    case 472u: goto L_08816678;
    case 473u: goto L_088166A0;
    case 474u: goto L_088166AC;
    case 475u: goto L_088166D0;
    case 476u: goto L_088166EC;
    case 477u: goto L_08816730;
    case 478u: goto L_08816750;
    case 479u: goto L_08816760;
    case 480u: goto L_0881677C;
    case 481u: goto L_08816798;
    case 482u: goto L_088167A8;
    case 483u: goto L_088167FC;
    case 484u: goto L_0881685C;
    case 485u: goto L_08816868;
    case 486u: goto L_0881689C;
    case 487u: goto L_088168A8;
    case 488u: goto L_088168B0;
    case 489u: goto L_088168B8;
    case 490u: goto L_088168C0;
    case 491u: goto L_088168C8;
    case 492u: goto L_088168D4;
    case 493u: goto L_088168DC;
    case 494u: goto L_088168E4;
    case 495u: goto L_088168EC;
    case 496u: goto L_088168F8;
    case 497u: goto L_08816908;
    case 498u: goto L_08816910;
    case 499u: goto L_08816920;
    case 500u: goto L_0881692C;
    case 501u: goto L_08816934;
    case 502u: goto L_08816940;
    case 503u: goto L_08816948;
    case 504u: goto L_0881694C;
    case 505u: goto L_08816958;
    case 506u: goto L_08816960;
    case 507u: goto L_08816984;
    case 508u: goto L_088169A4;
    case 509u: goto L_088169A8;
    case 510u: goto L_088169B0;
    case 511u: goto L_088169B8;
    case 512u: goto L_088169BC;
    case 513u: goto L_088169C4;
    case 514u: goto L_088169CC;
    case 515u: goto L_088169E4;
    case 516u: goto L_088169F8;
    case 517u: goto L_08816A0C;
    case 518u: goto L_08816A78;
    case 519u: goto L_08816A8C;
    case 520u: goto L_08816AA4;
    case 521u: goto L_08816AB4;
    case 522u: goto L_08816B24;
    case 523u: goto L_08816B34;
    case 524u: goto L_08816B48;
    case 525u: goto L_08816B60;
    case 526u: goto L_08816B74;
    case 527u: goto L_08816B7C;
    case 528u: goto L_08816B94;
    case 529u: goto L_08816BAC;
    case 530u: goto L_08816BC0;
    case 531u: goto L_08816BD4;
    case 532u: goto L_08816C18;
    case 533u: goto L_08816C84;
    case 534u: goto L_08816C8C;
    case 535u: goto L_08816C90;
    case 536u: goto L_08816C98;
    case 537u: goto L_08816CA4;
    case 538u: goto L_08816CAC;
    case 539u: goto L_08816CB0;
    case 540u: goto L_08816CB8;
    case 541u: goto L_08816CC4;
    case 542u: goto L_08816CCC;
    case 543u: goto L_08816CD0;
    case 544u: goto L_08816CD8;
    case 545u: goto L_08816CE4;
    case 546u: goto L_08816CEC;
    case 547u: goto L_08816CF0;
    case 548u: goto L_08816CF8;
    case 549u: goto L_08816D08;
    case 550u: goto L_08816D10;
    case 551u: goto L_08816D14;
    case 552u: goto L_08816D1C;
    case 553u: goto L_08816D28;
    case 554u: goto L_08816D30;
    case 555u: goto L_08816D34;
    case 556u: goto L_08816D3C;
    case 557u: goto L_08816D58;
    case 558u: goto L_08816D60;
    case 559u: goto L_08816DD4;
    case 560u: goto L_08816DEC;
    case 561u: goto L_08816E2C;
    case 562u: goto L_08816E48;
    case 563u: goto L_08816E64;
    case 564u: goto L_08816E80;
    case 565u: goto L_08816EA0;
    case 566u: goto L_08816F04;
    case 567u: goto L_08816F14;
    case 568u: goto L_08816F20;
    case 569u: goto L_08816F30;
    case 570u: goto L_08816F40;
    case 571u: goto L_08816F4C;
    case 572u: goto L_08816F70;
    case 573u: goto L_08816F7C;
    case 574u: goto L_08816F88;
    case 575u: goto L_08816F94;
    case 576u: goto L_08816FA0;
    case 577u: goto L_08816FAC;
    case 578u: goto L_08816FB8;
    case 579u: goto L_08816FC4;
    case 580u: goto L_08816FD0;
    case 581u: goto L_08816FDC;
    case 582u: goto L_08817034;
    case 583u: goto L_0881704C;
    case 584u: goto L_088170A0;
    case 585u: goto L_088170B0;
    case 586u: goto L_088170C4;
    case 587u: goto L_088170D8;
    case 588u: goto L_088170E8;
    case 589u: goto L_088170F4;
    case 590u: goto L_08817108;
    case 591u: goto L_0881711C;
    case 592u: goto L_08817128;
    case 593u: goto L_08817134;
    case 594u: goto L_08817190;
    case 595u: goto L_088171AC;
    case 596u: goto L_088171B4;
    case 597u: goto L_088171B8;
    case 598u: goto L_088171C4;
    case 599u: goto L_088171CC;
    case 600u: goto L_088171D0;
    case 601u: goto L_088171DC;
    case 602u: goto L_088171E4;
    case 603u: goto L_088171E8;
    case 604u: goto L_088171F4;
    case 605u: goto L_088171FC;
    case 606u: goto L_08817200;
    case 607u: goto L_0881720C;
    case 608u: goto L_08817214;
    case 609u: goto L_08817218;
    case 610u: goto L_08817224;
    case 611u: goto L_0881722C;
    case 612u: goto L_08817230;
    case 613u: goto L_0881723C;
    case 614u: goto L_08817244;
    case 615u: goto L_08817248;
    case 616u: goto L_08817254;
    case 617u: goto L_0881725C;
    case 618u: goto L_08817260;
    case 619u: goto L_0881726C;
    case 620u: goto L_08817274;
    case 621u: goto L_08817278;
    case 622u: goto L_08817284;
    case 623u: goto L_0881728C;
    case 624u: goto L_08817290;
    case 625u: goto L_0881729C;
    case 626u: goto L_088172A4;
    case 627u: goto L_088172A8;
    case 628u: goto L_088172B4;
    case 629u: goto L_088172BC;
    case 630u: goto L_088172C0;
    case 631u: goto L_088172CC;
    case 632u: goto L_088172D4;
    case 633u: goto L_088172D8;
    case 634u: goto L_088172E4;
    case 635u: goto L_088172EC;
    case 636u: goto L_088172F0;
    case 637u: goto L_088172FC;
    case 638u: goto L_08817304;
    case 639u: goto L_08817308;
    case 640u: goto L_08817314;
    case 641u: goto L_0881731C;
    case 642u: goto L_08817320;
    case 643u: goto L_0881732C;
    case 644u: goto L_08817334;
    case 645u: goto L_08817338;
    case 646u: goto L_08817344;
    case 647u: goto L_0881734C;
    case 648u: goto L_08817350;
    case 649u: goto L_0881735C;
    case 650u: goto L_08817364;
    case 651u: goto L_08817368;
    case 652u: goto L_08817374;
    case 653u: goto L_0881737C;
    case 654u: goto L_08817380;
    case 655u: goto L_0881738C;
    case 656u: goto L_08817394;
    case 657u: goto L_08817398;
    case 658u: goto L_088173A4;
    case 659u: goto L_088173AC;
    case 660u: goto L_088173B0;
    case 661u: goto L_088173BC;
    case 662u: goto L_088173C4;
    case 663u: goto L_088173C8;
    case 664u: goto L_088173D4;
    case 665u: goto L_088173DC;
    case 666u: goto L_088173E0;
    case 667u: goto L_088173EC;
    case 668u: goto L_088173F4;
    case 669u: goto L_088173F8;
    case 670u: goto L_08817404;
    case 671u: goto L_0881740C;
    case 672u: goto L_08817410;
    case 673u: goto L_0881741C;
    case 674u: goto L_08817424;
    case 675u: goto L_08817428;
    case 676u: goto L_08817434;
    case 677u: goto L_0881743C;
    case 678u: goto L_08817440;
    case 679u: goto L_0881744C;
    case 680u: goto L_08817454;
    case 681u: goto L_08817458;
    case 682u: goto L_08817464;
    case 683u: goto L_0881746C;
    case 684u: goto L_08817470;
    case 685u: goto L_0881747C;
    case 686u: goto L_08817484;
    case 687u: goto L_08817488;
    case 688u: goto L_08817494;
    case 689u: goto L_0881749C;
    case 690u: goto L_088174A0;
    case 691u: goto L_088174AC;
    case 692u: goto L_088174B4;
    case 693u: goto L_088174B8;
    case 694u: goto L_088174C4;
    case 695u: goto L_088174CC;
    case 696u: goto L_088174D0;
    case 697u: goto L_088174DC;
    case 698u: goto L_088174E4;
    case 699u: goto L_088174E8;
    case 700u: goto L_088174F4;
    case 701u: goto L_088174FC;
    case 702u: goto L_08817500;
    case 703u: goto L_0881750C;
    case 704u: goto L_08817514;
    case 705u: goto L_08817518;
    case 706u: goto L_08817524;
    case 707u: goto L_0881752C;
    case 708u: goto L_08817530;
    case 709u: goto L_0881753C;
    case 710u: goto L_08817544;
    case 711u: goto L_08817548;
    case 712u: goto L_08817554;
    case 713u: goto L_0881755C;
    case 714u: goto L_08817560;
    case 715u: goto L_0881756C;
    case 716u: goto L_08817574;
    case 717u: goto L_08817578;
    case 718u: goto L_08817584;
    case 719u: goto L_0881758C;
    case 720u: goto L_08817590;
    case 721u: goto L_0881759C;
    case 722u: goto L_088175A4;
    case 723u: goto L_088175A8;
    case 724u: goto L_088175B4;
    case 725u: goto L_088175BC;
    case 726u: goto L_088175C0;
    case 727u: goto L_088175CC;
    case 728u: goto L_088175D4;
    case 729u: goto L_088175D8;
    case 730u: goto L_088175E4;
    case 731u: goto L_088175EC;
    case 732u: goto L_088175F0;
    case 733u: goto L_088175FC;
    case 734u: goto L_08817604;
    case 735u: goto L_08817608;
    case 736u: goto L_08817614;
    case 737u: goto L_0881761C;
    case 738u: goto L_08817620;
    case 739u: goto L_0881762C;
    case 740u: goto L_08817634;
    case 741u: goto L_08817638;
    case 742u: goto L_08817644;
    case 743u: goto L_0881764C;
    case 744u: goto L_08817650;
    case 745u: goto L_0881765C;
    case 746u: goto L_08817664;
    case 747u: goto L_08817668;
    case 748u: goto L_08817674;
    case 749u: goto L_0881767C;
    case 750u: goto L_08817680;
    case 751u: goto L_0881768C;
    case 752u: goto L_08817694;
    case 753u: goto L_08817698;
    case 754u: goto L_088176A4;
    case 755u: goto L_088176AC;
    case 756u: goto L_088176B0;
    case 757u: goto L_088176C8;
    case 758u: goto L_088176EC;
    case 759u: goto L_0881770C;
    case 760u: goto L_0881774C;
    case 761u: goto L_08817768;
    case 762u: goto L_088177A8;
    case 763u: goto L_088177BC;
    case 764u: goto L_088177E0;
    case 765u: goto L_088177EC;
    case 766u: goto L_08817810;
    case 767u: goto L_08817840;
    case 768u: goto L_0881784C;
    case 769u: goto L_08817854;
    case 770u: goto L_08817860;
    case 771u: goto L_08817878;
    case 772u: goto L_08817888;
    case 773u: goto L_08817898;
    case 774u: goto L_088178A0;
    case 775u: goto L_0881790C;
    case 776u: goto L_08817918;
    case 777u: goto L_0881791C;
    case 778u: goto L_08817924;
    case 779u: goto L_08817930;
    case 780u: goto L_08817954;
    case 781u: goto L_08817988;
    case 782u: goto L_08817990;
    case 783u: goto L_088179D0;
    case 784u: goto L_08817A04;
    case 785u: goto L_08817A18;
    case 786u: goto L_08817A30;
    case 787u: goto L_08817A68;
    case 788u: goto L_08817A98;
    case 789u: goto L_08817AAC;
    case 790u: goto L_08817AE0;
    case 791u: goto L_08817C24;
    case 792u: goto L_08817C30;
    case 793u: goto L_08817C44;
    case 794u: goto L_08817C50;
    case 795u: goto L_08817C60;
    case 796u: goto L_08817DE0;
    case 797u: goto L_08817DEC;
    case 798u: goto L_08817E00;
    case 799u: goto L_08817E0C;
    case 800u: goto L_08817E1C;
    case 801u: goto L_08817F64;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08814000:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08814060;
      }
      goto L_08814014;
    }
L_08814014:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08814060;
      }
      goto L_0881402C;
    }
L_0881402C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08814060;
      }
      goto L_08814040;
    }
L_08814040:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08814060;
L_08814060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 994u, 0x08813CB0u>(ctx, &aot_mem); return;
      }
      goto L_08814068;
    }
L_08814068:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (0x08814084u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 230u, 0x08861824u>(ctx, &aot_mem) && ctx.pc == 0x08814084u) goto L_08814084;
    return;
L_08814084:
    ctx.gpr[31] = (0x0881408Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 151u, 0x08810A58u>(ctx, &aot_mem) && ctx.pc == 0x0881408Cu) goto L_0881408C;
    return;
L_0881408C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_0881487C;
      }
      goto L_08814098;
    }
L_08814098:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 139u);
    ctx.gpr[7] = (0u | 194u);
    ctx.gpr[31] = (0x088140C0u);
    ctx.gpr[8] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x088140C0u) goto L_088140C0;
    return;
L_088140C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[26];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[26];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.gpr[31] = (0x08814100u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08814100u) goto L_08814100;
    return;
L_08814100:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08814110u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08814110u) goto L_08814110;
    return;
L_08814110:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[13] - ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[20];
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[20];
    ctx.gpr[31] = (0x08814134u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08814134u) goto L_08814134;
    return;
L_08814134:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08814144u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08814144u) goto L_08814144;
    return;
L_08814144:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[31] = (0x08814168u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08814168u) goto L_08814168;
    return;
L_08814168:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08814178u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08814178u) goto L_08814178;
    return;
L_08814178:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[20];
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[20];
    ctx.gpr[31] = (0x0881419Cu);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0881419Cu) goto L_0881419C;
    return;
L_0881419C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088141ACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x088141ACu) goto L_088141AC;
    return;
L_088141AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = ctx.fpr[13] - ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[31] = (0x088141CCu);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x088141CCu) goto L_088141CC;
    return;
L_088141CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088141DCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x088141DCu) goto L_088141DC;
    return;
L_088141DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[24];
    ctx.gpr[31] = (0x088141FCu);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x088141FCu) goto L_088141FC;
    return;
L_088141FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881420Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x0881420Cu) goto L_0881420C;
    return;
L_0881420C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[26];
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[20];
    ctx.gpr[31] = (0x0881422Cu);
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0881422Cu) goto L_0881422C;
    return;
L_0881422C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881423Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x0881423Cu) goto L_0881423C;
    return;
L_0881423C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[24];
    ctx.gpr[31] = (0x0881425Cu);
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0881425Cu) goto L_0881425C;
    return;
L_0881425C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881426Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x0881426Cu) goto L_0881426C;
    return;
L_0881426C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[30] = ctx.fpr[12] - ctx.fpr[30];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.fpr[22] = ctx.fpr[13] - ctx.fpr[22];
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08814294u);
    ctx.gpr[8] = (0u | 190u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08814294u) goto L_08814294;
    return;
L_08814294:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(230));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(10));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(90));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0881437C;
      }
      goto L_08814318;
    }
L_08814318:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08814380;
      }
      goto L_08814328;
    }
L_08814328:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-109));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(-40));
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.fpr[28] = ctx.fpr[28] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(5));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[20] = (ctx.gpr[23] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(35));
      if (branch_taken) {
          goto L_088143CC;
      }
      goto L_0881437C;
    }
L_0881437C:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(40));
    goto L_08814380;
L_08814380:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(109));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(5));
    ctx.gpr[20] = (ctx.gpr[23] + static_cast<std::uint32_t>(20));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(35));
    goto L_088143CC;
L_088143CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088143E4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x088143E4u) goto L_088143E4;
    return;
L_088143E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088143F4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x088143F4u) goto L_088143F4;
    return;
L_088143F4:
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_08814444;
      }
      goto L_08814404;
    }
L_08814404:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08814444;
      }
      goto L_08814418;
    }
L_08814418:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0881443Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 124u, 0x08AF5238u>(ctx, &aot_mem) && ctx.pc == 0x0881443Cu) goto L_0881443C;
    return;
L_0881443C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08814468;
      }
      goto L_08814444;
    }
L_08814444:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08814468u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 124u, 0x08AF5238u>(ctx, &aot_mem) && ctx.pc == 0x08814468u) goto L_08814468;
    return;
L_08814468:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08814478u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x08814478u) goto L_08814478;
    return;
L_08814478:
    ctx.gpr[31] = (0x08814480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x08814480u) goto L_08814480;
    return;
L_08814480:
    ctx.gpr[31] = (0x08814488u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem) && ctx.pc == 0x08814488u) goto L_08814488;
    return;
L_08814488:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x088144C0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x088144C0u) goto L_088144C0;
    return;
L_088144C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088144D8;
      }
      goto L_088144CC;
    }
L_088144CC:
    ctx.gpr[31] = (0x088144D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x088144D4u) goto L_088144D4;
    return;
L_088144D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_088144D8;
L_088144D8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088144EC;
      }
      goto L_088144E0;
    }
L_088144E0:
    ctx.gpr[31] = (0x088144E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x088144E8u) goto L_088144E8;
    return;
L_088144E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_088144EC;
L_088144EC:
    ctx.gpr[31] = (0x088144F4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x088144F4u) goto L_088144F4;
    return;
L_088144F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(316)));
      if (branch_taken) {
          goto L_08814514;
      }
      goto L_08814508;
    }
L_08814508:
    ctx.gpr[31] = (0x08814510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08814510u) goto L_08814510;
    return;
L_08814510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_08814514;
L_08814514:
    ctx.gpr[31] = (0x0881451Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0881451Cu) goto L_0881451C;
    return;
L_0881451C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08814538;
      }
      goto L_0881452C;
    }
L_0881452C:
    ctx.gpr[31] = (0x08814534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08814534u) goto L_08814534;
    return;
L_08814534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_08814538;
L_08814538:
    ctx.gpr[31] = (0x08814540u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x08814540u) goto L_08814540;
    return;
L_08814540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08814554;
      }
      goto L_08814550;
    }
L_08814550:
    ctx.gpr[21] = (0u | 1u);
    goto L_08814554;
L_08814554:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_08814564;
      }
      goto L_0881455C;
    }
L_0881455C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814584;
      }
      goto L_08814564;
    }
L_08814564:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30840));
    ctx.gpr[31] = (0x08814570u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08814570u) goto L_08814570;
    return;
L_08814570:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x0881457Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30832));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x0881457Cu) goto L_0881457C;
    return;
L_0881457C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088145C8;
      }
      goto L_08814584;
    }
L_08814584:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088145A8;
      }
      goto L_08814590;
    }
L_08814590:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30824));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088145A0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x088145A0u) goto L_088145A0;
    return;
L_088145A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088145B8;
      }
      goto L_088145A8;
    }
L_088145A8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30816));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088145B8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x088145B8u) goto L_088145B8;
    return;
L_088145B8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30804));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088145C8u);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x088145C8u) goto L_088145C8;
    return;
L_088145C8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30792));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.gpr[31] = (0x088145D8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x088145D8u) goto L_088145D8;
    return;
L_088145D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814610;
      }
      goto L_088145E4;
    }
L_088145E4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088145F0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x088145F0u) goto L_088145F0;
    return;
L_088145F0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814608;
      }
      goto L_088145FC;
    }
L_088145FC:
    ctx.gpr[31] = (0x08814604u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08814604u) goto L_08814604;
    return;
L_08814604:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08814608;
L_08814608:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08814610;
L_08814610:
    ctx.gpr[31] = (0x08814618u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30780));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08814618u) goto L_08814618;
    return;
L_08814618:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814628u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x08814628u) goto L_08814628;
    return;
L_08814628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814660;
      }
      goto L_08814634;
    }
L_08814634:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08814640u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08814640u) goto L_08814640;
    return;
L_08814640:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814658;
      }
      goto L_0881464C;
    }
L_0881464C:
    ctx.gpr[31] = (0x08814654u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08814654u) goto L_08814654;
    return;
L_08814654:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08814658;
L_08814658:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08814660;
L_08814660:
    ctx.gpr[31] = (0x08814668u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08814668u) goto L_08814668;
    return;
L_08814668:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08814678u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x08814678u) goto L_08814678;
    return;
L_08814678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088146B0;
      }
      goto L_08814684;
    }
L_08814684:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08814690u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08814690u) goto L_08814690;
    return;
L_08814690:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088146A8;
      }
      goto L_0881469C;
    }
L_0881469C:
    ctx.gpr[31] = (0x088146A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x088146A4u) goto L_088146A4;
    return;
L_088146A4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088146A8;
L_088146A8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088146B0;
L_088146B0:
    ctx.gpr[31] = (0x088146B8u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30772));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x088146B8u) goto L_088146B8;
    return;
L_088146B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088146C8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x088146C8u) goto L_088146C8;
    return;
L_088146C8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_08814724;
      }
      goto L_088146D0;
    }
L_088146D0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30832));
      if (branch_taken) {
          goto L_08814704;
      }
      goto L_088146D8;
    }
L_088146D8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088146E4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x088146E4u) goto L_088146E4;
    return;
L_088146E4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088146FC;
      }
      goto L_088146F0;
    }
L_088146F0:
    ctx.gpr[31] = (0x088146F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x088146F8u) goto L_088146F8;
    return;
L_088146F8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088146FC;
L_088146FC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08814704;
L_08814704:
    ctx.gpr[31] = (0x0881470Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0881470Cu) goto L_0881470C;
    return;
L_0881470C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0881471Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0881471Cu) goto L_0881471C;
    return;
L_0881471C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_08814774;
      }
      goto L_08814724;
    }
L_08814724:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814758;
      }
      goto L_0881472C;
    }
L_0881472C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08814738u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08814738u) goto L_08814738;
    return;
L_08814738:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814750;
      }
      goto L_08814744;
    }
L_08814744:
    ctx.gpr[31] = (0x0881474Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0881474Cu) goto L_0881474C;
    return;
L_0881474C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08814750;
L_08814750:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08814758;
L_08814758:
    ctx.gpr[31] = (0x08814760u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08814760u) goto L_08814760;
    return;
L_08814760:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08814770u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x08814770u) goto L_08814770;
    return;
L_08814770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08814774;
L_08814774:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088147A8;
      }
      goto L_0881477C;
    }
L_0881477C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08814788u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08814788u) goto L_08814788;
    return;
L_08814788:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088147A0;
      }
      goto L_08814794;
    }
L_08814794:
    ctx.gpr[31] = (0x0881479Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0881479Cu) goto L_0881479C;
    return;
L_0881479C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088147A0;
L_088147A0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088147A8;
L_088147A8:
    ctx.gpr[31] = (0x088147B0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30764));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x088147B0u) goto L_088147B0;
    return;
L_088147B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088147C0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x088147C0u) goto L_088147C0;
    return;
L_088147C0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_0881481C;
      }
      goto L_088147C8;
    }
L_088147C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30832));
      if (branch_taken) {
          goto L_088147FC;
      }
      goto L_088147D0;
    }
L_088147D0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088147DCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x088147DCu) goto L_088147DC;
    return;
L_088147DC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088147F4;
      }
      goto L_088147E8;
    }
L_088147E8:
    ctx.gpr[31] = (0x088147F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x088147F0u) goto L_088147F0;
    return;
L_088147F0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088147F4;
L_088147F4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088147FC;
L_088147FC:
    ctx.gpr[31] = (0x08814804u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08814804u) goto L_08814804;
    return;
L_08814804:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08814814u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x08814814u) goto L_08814814;
    return;
L_08814814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08814868;
      }
      goto L_0881481C;
    }
L_0881481C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814850;
      }
      goto L_08814824;
    }
L_08814824:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08814830u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08814830u) goto L_08814830;
    return;
L_08814830:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814848;
      }
      goto L_0881483C;
    }
L_0881483C:
    ctx.gpr[31] = (0x08814844u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08814844u) goto L_08814844;
    return;
L_08814844:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08814848;
L_08814848:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08814850;
L_08814850:
    ctx.gpr[31] = (0x08814858u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08814858u) goto L_08814858;
    return;
L_08814858:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08814868u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x08814868u) goto L_08814868;
    return;
L_08814868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (0x0881487Cu);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 230u, 0x08861824u>(ctx, &aot_mem) && ctx.pc == 0x0881487Cu) goto L_0881487C;
    return;
L_0881487C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088148C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(628)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881492C;
      }
      goto L_0881491C;
    }
L_0881491C:
    ctx.gpr[31] = (0x08814924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem) && ctx.pc == 0x08814924u) goto L_08814924;
    return;
L_08814924:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088150D8;
      }
      goto L_0881492C;
    }
L_0881492C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(624)));
    ctx.gpr[6] = (ctx.gpr[4] & 2u);
    ctx.gpr[6] = (ctx.gpr[6] >> 1u);
    ctx.gpr[31] = (0x08814944u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 654u, 0x0880F3B4u>(ctx, &aot_mem) && ctx.pc == 0x08814944u) goto L_08814944;
    return;
L_08814944:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[4] = (ctx.gpr[4] & 224u);
    ctx.gpr[17] = (0u | 96u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0881496C;
      }
      goto L_08814958;
    }
L_08814958:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] & 224u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088149D4;
      }
      goto L_0881496C;
    }
L_0881496C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088149D4;
      }
      goto L_08814978;
    }
L_08814978:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(640));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(660)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08814998u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08816368;
L_08814998:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(660)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088149D4;
      }
      goto L_088149C8;
    }
L_088149C8:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088149D4;
L_088149D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[4] = (ctx.gpr[4] & 224u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088149F8;
      }
      goto L_088149E4;
    }
L_088149E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[4] = (ctx.gpr[4] & 224u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088150D8;
      }
      goto L_088149F8;
    }
L_088149F8:
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(640));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08814A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 58u, 0x089604E0u>(ctx, &aot_mem) && ctx.pc == 0x08814A10u) goto L_08814A10;
    return;
L_08814A10:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (ctx.gpr[21] + static_cast<std::uint32_t>(6864));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08814A44u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem) && ctx.pc == 0x08814A44u) goto L_08814A44;
    return;
L_08814A44:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08814B90;
      }
      goto L_08814A54;
    }
L_08814A54:
    ctx.gpr[31] = (0x08814A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08814A5Cu) goto L_08814A5C;
    return;
L_08814A5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814B90;
      }
      goto L_08814A64;
    }
L_08814A64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814B4C;
      }
      goto L_08814A70;
    }
L_08814A70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814B4C;
      }
      goto L_08814A80;
    }
L_08814A80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(6880)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08814AEC;
      }
      goto L_08814A94;
    }
L_08814A94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(6884)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08814AEC;
      }
      goto L_08814AA8;
    }
L_08814AA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(6888)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08814AEC;
      }
      goto L_08814ABC;
    }
L_08814ABC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08814B1C;
      }
      goto L_08814AEC;
    }
L_08814AEC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(6880));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_08814B1C;
L_08814B1C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08814B90;
      }
      goto L_08814B4C;
    }
L_08814B4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814B90;
      }
      goto L_08814B58;
    }
L_08814B58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814B90;
      }
      goto L_08814B68;
    }
L_08814B68:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08814B90u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x08814B90u) goto L_08814B90;
    return;
L_08814B90:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08814BB8u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 606u, 0x0880EDB0u>(ctx, &aot_mem) && ctx.pc == 0x08814BB8u) goto L_08814BB8;
    return;
L_08814BB8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08814BC4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 620u, 0x0880F05Cu>(ctx, &aot_mem) && ctx.pc == 0x08814BC4u) goto L_08814BC4;
    return;
L_08814BC4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08814BECu);
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[17];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 561u, 0x08A8EF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08814BECu) goto L_08814BEC;
    return;
L_08814BEC:
    ctx.gpr[4] = (49962u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17194u << 16u);
      if (branch_taken) {
          goto L_08814C2C;
      }
      goto L_08814C08;
    }
L_08814C08:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08814C2C;
      }
      goto L_08814C1C;
    }
L_08814C1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(665)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08814C34;
      }
      goto L_08814C2C;
    }
L_08814C2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 255u);
      if (branch_taken) {
          goto L_08814C44;
      }
      goto L_08814C34;
    }
L_08814C34:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08814C40u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 626u, 0x0880F0E4u>(ctx, &aot_mem) && ctx.pc == 0x08814C40u) goto L_08814C40;
    return;
L_08814C40:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08814C44;
L_08814C44:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08814C54u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 577u, 0x0880EB64u>(ctx, &aot_mem) && ctx.pc == 0x08814C54u) goto L_08814C54;
    return;
L_08814C54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814C80;
      }
      goto L_08814C64;
    }
L_08814C64:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08814C80;
      }
      goto L_08814C74;
    }
L_08814C74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088150D8;
      }
      goto L_08814C80;
    }
L_08814C80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(665)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814E90;
      }
      goto L_08814C8C;
    }
L_08814C8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[20] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[30] = (ctx.gpr[20] >> 16u);
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[20] = (ctx.gpr[20] >> 8u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[23] = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_08814CE8;
      }
      goto L_08814CD0;
    }
L_08814CD0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08814D30;
      }
      goto L_08814CDC;
    }
L_08814CDC:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08814D30;
      }
      goto L_08814CE8;
    }
L_08814CE8:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08814D1C;
      }
      goto L_08814D04;
    }
L_08814D04:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08814D30;
      }
      goto L_08814D10;
    }
L_08814D10:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08814D30;
      }
      goto L_08814D1C;
    }
L_08814D1C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08814D30;
      }
      goto L_08814D28;
    }
L_08814D28:
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08814D30;
L_08814D30:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(664)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(6848)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814D5Cu);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    goto L_08815B48;
L_08814D5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814E88;
      }
      goto L_08814D68;
    }
L_08814D68:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08814D74;
L_08814D74:
    ctx.gpr[16] = (ctx.gpr[17] << 3u);
    ctx.gpr[16] = (ctx.gpr[21] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08814DF4;
      }
      goto L_08814D88;
    }
L_08814D88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08814DF0;
      }
      goto L_08814DAC;
    }
L_08814DAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(624)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x08814DC8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 654u, 0x0880F3B4u>(ctx, &aot_mem) && ctx.pc == 0x08814DC8u) goto L_08814DC8;
    return;
L_08814DC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[2] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08814DF4;
      }
      goto L_08814DF0;
    }
L_08814DF0:
    ctx.gpr[18] = (0u | 1u);
    goto L_08814DF4;
L_08814DF4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814D74;
      }
      goto L_08814E08;
    }
L_08814E08:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814E88;
      }
      goto L_08814E10;
    }
L_08814E10:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(6848)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814E28u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08814E28u) goto L_08814E28;
    return;
L_08814E28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(612)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(619), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(616)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(617)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(618)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(619)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(612)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(612), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08814E88;
L_08814E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088150D8;
      }
      goto L_08814E90;
    }
L_08814E90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814EAC;
      }
      goto L_08814E9C;
    }
L_08814E9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(665)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08814EE4;
      }
      goto L_08814EAC;
    }
L_08814EAC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(665)));
    ctx.gpr[4] = (ctx.gpr[20] >> 24u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[20] >> 16u);
    ctx.gpr[9] = (ctx.gpr[20] >> 8u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08814EDCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x08814EDCu) goto L_08814EDC;
    return;
L_08814EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088150D8;
      }
      goto L_08814EE4;
    }
L_08814EE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(665)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08814F14;
      }
      goto L_08814EF4;
    }
L_08814EF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(665)));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08814F14;
      }
      goto L_08814F04;
    }
L_08814F04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(665)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088150B4;
      }
      goto L_08814F14;
    }
L_08814F14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088150D8;
      }
      goto L_08814F20;
    }
L_08814F20:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(252));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08814F38u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08814F38u) goto L_08814F38;
    return;
L_08814F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08814F50;
    }
    goto L_08814F44;
L_08814F44:
    ctx.gpr[31] = (0x08814F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08814F4Cu) goto L_08814F4C;
    return;
L_08814F4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08814F50;
L_08814F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.gpr[31] = (0x08814F68u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 14u, 0x089EC180u>(ctx, &aot_mem) && ctx.pc == 0x08814F68u) goto L_08814F68;
    return;
L_08814F68:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08815028;
      }
      goto L_08814F74;
    }
L_08814F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_08814F8C;
    }
    goto L_08814F80;
L_08814F80:
    ctx.gpr[31] = (0x08814F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08814F88u) goto L_08814F88;
    return;
L_08814F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_08814F8C;
L_08814F8C:
    ctx.gpr[31] = (0x08814F94u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x08814F94u) goto L_08814F94;
    return;
L_08814F94:
    ctx.gpr[31] = (0x08814F9Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 67u, 0x089EC594u>(ctx, &aot_mem) && ctx.pc == 0x08814F9Cu) goto L_08814F9C;
    return;
L_08814F9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(257)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(258)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(253), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(259)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(254), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(255), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_08814FE0;
    }
    goto L_08814FD4;
L_08814FD4:
    ctx.gpr[31] = (0x08814FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08814FDCu) goto L_08814FDC;
    return;
L_08814FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_08814FE0;
L_08814FE0:
    ctx.gpr[31] = (0x08814FE8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x08814FE8u) goto L_08814FE8;
    return;
L_08814FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08814FFC;
      }
      goto L_08814FF4;
    }
L_08814FF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815028;
      }
      goto L_08814FFC;
    }
L_08814FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_08815014;
    }
    goto L_08815008;
L_08815008:
    ctx.gpr[31] = (0x08815010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08815010u) goto L_08815010;
    return;
L_08815010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_08815014;
L_08815014:
    ctx.gpr[31] = (0x0881501Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0881501Cu) goto L_0881501C;
    return;
L_0881501C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815028;
      }
      goto L_08815028;
    }
L_08815028:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(665)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(253)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(254)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0881504Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x0881504Cu) goto L_0881504C;
    return;
L_0881504C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_088150AC;
      }
      goto L_08815054;
    }
L_08815054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0881506C;
    }
    goto L_08815060;
L_08815060:
    ctx.gpr[31] = (0x08815068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08815068u) goto L_08815068;
    return;
L_08815068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0881506C;
L_0881506C:
    ctx.gpr[31] = (0x08815074u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x08815074u) goto L_08815074;
    return;
L_08815074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088150AC;
      }
      goto L_08815084;
    }
L_08815084:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0881509Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x0881509Cu) goto L_0881509C;
    return;
L_0881509C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088150ACu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 761u, 0x0880FD24u>(ctx, &aot_mem) && ctx.pc == 0x088150ACu) goto L_088150AC;
    return;
L_088150AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088150D8;
      }
      goto L_088150B4;
    }
L_088150B4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(665)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x088150D8u);
    ctx.gpr[9] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x088150D8u) goto L_088150D8;
    return;
L_088150D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815114:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[20]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[6] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08815284;
      }
      goto L_0881516C;
    }
L_0881516C:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0881523C;
      }
      goto L_08815178;
    }
L_08815178:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088151D0;
      }
      goto L_08815180;
    }
L_08815180:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08815340;
      }
      goto L_08815188;
    }
L_08815188:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(632)));
    ctx.gpr[31] = (0x088151A8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x088151A8u) goto L_088151A8;
    return;
L_088151A8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088151C8;
      }
      goto L_088151B4;
    }
L_088151B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088151C8;
      }
      goto L_088151C4;
    }
L_088151C4:
    ctx.gpr[20] = (0u | 1u);
    goto L_088151C8;
L_088151C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815340;
      }
      goto L_088151D0;
    }
L_088151D0:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(632)));
    ctx.gpr[31] = (0x088151F0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x088151F0u) goto L_088151F0;
    return;
L_088151F0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815230;
      }
      goto L_088151FC;
    }
L_088151FC:
    ctx.gpr[31] = (0x08815204u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08815204u) goto L_08815204;
    return;
L_08815204:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815214;
      }
      goto L_0881520C;
    }
L_0881520C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08815218;
      }
      goto L_08815214;
    }
L_08815214:
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    goto L_08815218;
L_08815218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08815234;
      }
      goto L_08815228;
    }
L_08815228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08815234;
      }
      goto L_08815230;
    }
L_08815230:
    ctx.gpr[18] = (0u | 0u);
    goto L_08815234;
L_08815234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815340;
      }
      goto L_0881523C;
    }
L_0881523C:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(632)));
    ctx.gpr[31] = (0x0881525Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem) && ctx.pc == 0x0881525Cu) goto L_0881525C;
    return;
L_0881525C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881527C;
      }
      goto L_08815268;
    }
L_08815268:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(476)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881527C;
      }
      goto L_08815278;
    }
L_08815278:
    ctx.gpr[20] = (0u | 1u);
    goto L_0881527C;
L_0881527C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815340;
      }
      goto L_08815284;
    }
L_08815284:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(632)));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x088152ACu);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x088152ACu) goto L_088152AC;
    return;
L_088152AC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815340;
      }
      goto L_088152B8;
    }
L_088152B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x088152CCu);
    ctx.gpr[22] = (ctx.gpr[21] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 639u, 0x08823710u>(ctx, &aot_mem) && ctx.pc == 0x088152CCu) goto L_088152CC;
    return;
L_088152CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088152DCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088152DCu) goto L_088152DC;
    return;
L_088152DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815300;
      }
      goto L_088152E4;
    }
L_088152E4:
    ctx.gpr[31] = (0x088152ECu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 19u, 0x08824204u>(ctx, &aot_mem) && ctx.pc == 0x088152ECu) goto L_088152EC;
    return;
L_088152EC:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881533C;
      }
      goto L_08815300;
    }
L_08815300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_0881532C;
    }
    goto L_0881530C;
L_0881530C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[31] = (0x0881531Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x0881531Cu) goto L_0881531C;
    return;
L_0881531C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_0881532C;
L_0881532C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_0881533C;
L_0881533C:
    ctx.gpr[19] = (0u | 1u);
    goto L_08815340;
L_08815340:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088154F8;
      }
      goto L_08815348;
    }
L_08815348:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(6864));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08815384u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem) && ctx.pc == 0x08815384u) goto L_08815384;
    return;
L_08815384:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088154F8;
      }
      goto L_0881538C;
    }
L_0881538C:
    ctx.gpr[31] = (0x08815394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08815394u) goto L_08815394;
    return;
L_08815394:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088154F8;
      }
      goto L_0881539C;
    }
L_0881539C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088154A0;
      }
      goto L_088153A4;
    }
L_088153A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088154A0;
      }
      goto L_088153B0;
    }
L_088153B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6880)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815438;
      }
      goto L_088153C8;
    }
L_088153C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6884)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815438;
      }
      goto L_088153E0;
    }
L_088153E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6888)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815438;
      }
      goto L_088153F8;
    }
L_088153F8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(6864));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08815410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 58u, 0x089604E0u>(ctx, &aot_mem) && ctx.pc == 0x08815410u) goto L_08815410;
    return;
L_08815410:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08815470;
      }
      goto L_08815438;
    }
L_08815438:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(6864));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(6880));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08815470;
L_08815470:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088154F8;
      }
      goto L_088154A0;
    }
L_088154A0:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088154F8;
      }
      goto L_088154C0;
    }
L_088154C0:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(6864));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088154DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 58u, 0x089604E0u>(ctx, &aot_mem) && ctx.pc == 0x088154DCu) goto L_088154DC;
    return;
L_088154DC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088154F8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x088154F8u) goto L_088154F8;
    return;
L_088154F8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815B1C;
      }
      goto L_08815500;
    }
L_08815500:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
      if (branch_taken) {
          goto L_08815610;
      }
      goto L_08815520;
    }
L_08815520:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
      if (branch_taken) {
          goto L_088155C0;
      }
      goto L_08815540;
    }
L_08815540:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(632)));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08815568u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08815568u) goto L_08815568;
    return;
L_08815568:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088155B4;
      }
      goto L_08815574;
    }
L_08815574:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08815588u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 156u, 0x08ADC7F0u>(ctx, &aot_mem) && ctx.pc == 0x08815588u) goto L_08815588;
    return;
L_08815588:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088155B8;
      }
      goto L_088155B4;
    }
L_088155B4:
    ctx.gpr[19] = (0u | 0u);
    goto L_088155B8;
L_088155B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815638;
      }
      goto L_088155C0;
    }
L_088155C0:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(632)));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x088155E4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 167u, 0x08ADC88Cu>(ctx, &aot_mem) && ctx.pc == 0x088155E4u) goto L_088155E4;
    return;
L_088155E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08815638;
      }
      goto L_08815610;
    }
L_08815610:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(624)));
    ctx.gpr[6] = (ctx.gpr[6] >> 1u);
    ctx.gpr[31] = (0x08815634u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 654u, 0x0880F3B4u>(ctx, &aot_mem) && ctx.pc == 0x08815634u) goto L_08815634;
    return;
L_08815634:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08815638;
L_08815638:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[4] & 224u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
      if (branch_taken) {
          goto L_0881567C;
      }
      goto L_0881565C;
    }
L_0881565C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] & 224u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08815704;
      }
      goto L_0881567C;
    }
L_0881567C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815704;
      }
      goto L_08815688;
    }
L_08815688:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(660)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088156B8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08816368;
L_088156B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(660)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815704;
      }
      goto L_088156E8;
    }
L_088156E8:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16544u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08815704;
L_08815704:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[4] & 224u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
      if (branch_taken) {
          goto L_08815748;
      }
      goto L_08815728;
    }
L_08815728:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[4] = (ctx.gpr[4] & 224u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08815B1C;
      }
      goto L_08815748;
    }
L_08815748:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881579Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 606u, 0x0880EDB0u>(ctx, &aot_mem) && ctx.pc == 0x0881579Cu) goto L_0881579C;
    return;
L_0881579C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088157A8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 620u, 0x0880F05Cu>(ctx, &aot_mem) && ctx.pc == 0x088157A8u) goto L_088157A8;
    return;
L_088157A8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088157B8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 626u, 0x0880F0E4u>(ctx, &aot_mem) && ctx.pc == 0x088157B8u) goto L_088157B8;
    return;
L_088157B8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088157CCu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 577u, 0x0880EB64u>(ctx, &aot_mem) && ctx.pc == 0x088157CCu) goto L_088157CC;
    return;
L_088157CC:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_0881580C;
      }
      goto L_088157EC;
    }
L_088157EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881580C;
      }
      goto L_08815800;
    }
L_08815800:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815B1C;
      }
      goto L_0881580C;
    }
L_0881580C:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(665)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08815A78;
      }
      goto L_08815828;
    }
L_08815828:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (0x08815844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 58u, 0x089604E0u>(ctx, &aot_mem) && ctx.pc == 0x08815844u) goto L_08815844;
    return;
L_08815844:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815874;
      }
      goto L_08815870;
    }
L_08815870:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08815874;
L_08815874:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815898;
      }
      goto L_08815890;
    }
L_08815890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088158C0;
      }
      goto L_08815898;
    }
L_08815898:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088158BC;
      }
      goto L_088158B4;
    }
L_088158B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088158C0;
      }
      goto L_088158BC;
    }
L_088158BC:
    ctx.gpr[4] = (0u | 2u);
    goto L_088158C0;
L_088158C0:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(664)));
    ctx.gpr[6] = (ctx.gpr[19] >> 24u);
    ctx.gpr[7] = (ctx.gpr[19] >> 16u);
    ctx.gpr[8] = (ctx.gpr[19] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6848)));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x08815904u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08815B48;
L_08815904:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815A70;
      }
      goto L_08815910;
    }
L_08815910:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088159E0;
      }
      goto L_08815920;
    }
L_08815920:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
      if (branch_taken) {
          goto L_088159CC;
      }
      goto L_08815938;
    }
L_08815938:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[19] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
      if (branch_taken) {
          goto L_088159C8;
      }
      goto L_08815968;
    }
L_08815968:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(624)));
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08815994u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 654u, 0x0880F3B4u>(ctx, &aot_mem) && ctx.pc == 0x08815994u) goto L_08815994;
    return;
L_08815994:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[2] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088159CC;
      }
      goto L_088159C8;
    }
L_088159C8:
    ctx.gpr[18] = (0u | 1u);
    goto L_088159CC;
L_088159CC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08815920;
      }
      goto L_088159E0;
    }
L_088159E0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08815A70;
      }
      goto L_088159E8;
    }
L_088159E8:
    ctx.gpr[5] = (ctx.gpr[19] >> 24u);
    ctx.gpr[6] = (ctx.gpr[19] >> 16u);
    ctx.gpr[7] = (ctx.gpr[19] >> 8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6848)));
    ctx.gpr[31] = (0x08815A0Cu);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08815A0Cu) goto L_08815A0C;
    return;
L_08815A0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(621), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(622), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(623), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(620)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(621)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(622)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(623)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(612), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08815A70;
L_08815A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815B1C;
      }
      goto L_08815A78;
    }
L_08815A78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
      if (branch_taken) {
          goto L_08815AA0;
      }
      goto L_08815A84;
    }
L_08815A84:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(665)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08815AE8;
      }
      goto L_08815AA0;
    }
L_08815AA0:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(665)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[19] >> 24u);
    ctx.gpr[8] = (ctx.gpr[19] >> 16u);
    ctx.gpr[9] = (ctx.gpr[19] >> 8u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08815AE0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x08815AE0u) goto L_08815AE0;
    return;
L_08815AE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815B1C;
      }
      goto L_08815AE8;
    }
L_08815AE8:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(665)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x08815B1Cu);
    ctx.gpr[9] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x08815B1Cu) goto L_08815B1C;
    return;
L_08815B1C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815B48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[21] = (ctx.gpr[9] & 255u);
    ctx.gpr[22] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08815BBC;
      }
      goto L_08815BB0;
    }
L_08815BB0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08815BBC;
L_08815BBC:
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08815BF0;
      }
      goto L_08815BE4;
    }
L_08815BE4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08815C08;
      }
      goto L_08815BF0;
    }
L_08815BF0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[17] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08815C08;
L_08815C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08815C1C;
      }
      goto L_08815C14;
    }
L_08815C14:
    ctx.gpr[31] = (0x08815C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08815C1Cu) goto L_08815C1C;
    return;
L_08815C1C:
    ctx.gpr[31] = (0x08815C24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 580u, 0x089BABACu>(ctx, &aot_mem) && ctx.pc == 0x08815C24u) goto L_08815C24;
    return;
L_08815C24:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08815F1C;
      }
      goto L_08815C30;
    }
L_08815C30:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08815F1C;
      }
      goto L_08815C40;
    }
L_08815C40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815C68;
      }
      goto L_08815C4C;
    }
L_08815C4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (0u | 700u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(351) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08815F1C;
      }
      goto L_08815C68;
    }
L_08815C68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08815C94;
      }
      goto L_08815C70;
    }
L_08815C70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_08815F1C;
      }
      goto L_08815C78;
    }
L_08815C78:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08815CB8;
      }
      goto L_08815C88;
    }
L_08815C88:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[30];
      if (branch_taken) {
          goto L_08815CC8;
      }
      goto L_08815C90;
    }
L_08815C90:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    goto L_08815C94;
L_08815C94:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08815F24;
      }
      goto L_08815C9C;
    }
L_08815C9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815F1C;
      }
      goto L_08815CA4;
    }
L_08815CA4:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088161A0;
      }
      goto L_08815CB0;
    }
L_08815CB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088161A4;
      }
      goto L_08815CB8;
    }
L_08815CB8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[30];
    goto L_08815CC8;
L_08815CC8:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08815CF0;
      }
      goto L_08815CE4;
    }
L_08815CE4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_08815CF0;
L_08815CF0:
    ctx.fpr[30] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08815D18;
      }
      goto L_08815D0C;
    }
L_08815D0C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_08815D18;
L_08815D18:
    ctx.fpr[24] = ctx.fpr[26] - ctx.fpr[24];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08815D40;
      }
      goto L_08815D34;
    }
L_08815D34:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08815D40;
L_08815D40:
    ctx.fpr[22] = ctx.fpr[28] + ctx.fpr[22];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08815D68;
      }
      goto L_08815D5C;
    }
L_08815D5C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08815D68;
L_08815D68:
    ctx.fpr[20] = ctx.fpr[28] - ctx.fpr[20];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08815D90;
      }
      goto L_08815D84;
    }
L_08815D84:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08815D90;
L_08815D90:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    ctx.gpr[4] = (16448u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08815DBCu);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08815DBCu) goto L_08815DBC;
    return;
L_08815DBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08815DE4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 124u, 0x08AF5238u>(ctx, &aot_mem) && ctx.pc == 0x08815DE4u) goto L_08815DE4;
    return;
L_08815DE4:
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08815E00;
      }
      goto L_08815DF4;
    }
L_08815DF4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_08815E00;
L_08815E00:
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[30];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08815E2C;
      }
      goto L_08815E20;
    }
L_08815E20:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_08815E2C;
L_08815E2C:
    ctx.fpr[30] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08815E54;
      }
      goto L_08815E48;
    }
L_08815E48:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_08815E54;
L_08815E54:
    ctx.fpr[24] = ctx.fpr[26] - ctx.fpr[24];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08815E7C;
      }
      goto L_08815E70;
    }
L_08815E70:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08815E7C;
L_08815E7C:
    ctx.fpr[22] = ctx.fpr[28] + ctx.fpr[22];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08815EA4;
      }
      goto L_08815E98;
    }
L_08815E98:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08815EA4;
L_08815EA4:
    ctx.fpr[20] = ctx.fpr[28] - ctx.fpr[20];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08815ECC;
      }
      goto L_08815EC0;
    }
L_08815EC0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08815ECC;
L_08815ECC:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08815EF4u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08815EF4u) goto L_08815EF4;
    return;
L_08815EF4:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08815F1Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 124u, 0x08AF5238u>(ctx, &aot_mem) && ctx.pc == 0x08815F1Cu) goto L_08815F1C;
    return;
L_08815F1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08816328;
      }
      goto L_08815F24;
    }
L_08815F24:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08815F40;
      }
      goto L_08815F34;
    }
L_08815F34:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_08815F40;
L_08815F40:
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08815F6C;
      }
      goto L_08815F60;
    }
L_08815F60:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_08815F6C;
L_08815F6C:
    ctx.fpr[30] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08815F94;
      }
      goto L_08815F88;
    }
L_08815F88:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_08815F94;
L_08815F94:
    ctx.fpr[24] = ctx.fpr[26] + ctx.fpr[24];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08815FBC;
      }
      goto L_08815FB0;
    }
L_08815FB0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08815FBC;
L_08815FBC:
    ctx.fpr[22] = ctx.fpr[28] - ctx.fpr[22];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08815FE4;
      }
      goto L_08815FD8;
    }
L_08815FD8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08815FE4;
L_08815FE4:
    ctx.fpr[20] = ctx.fpr[26] - ctx.fpr[20];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
      if (branch_taken) {
          goto L_0881600C;
      }
      goto L_08816000;
    }
L_08816000:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0881600C;
L_0881600C:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08816038u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08816038u) goto L_08816038;
    return;
L_08816038:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08816060u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 124u, 0x08AF5238u>(ctx, &aot_mem) && ctx.pc == 0x08816060u) goto L_08816060;
    return;
L_08816060:
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_0881607C;
      }
      goto L_08816070;
    }
L_08816070:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_0881607C;
L_0881607C:
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088160A8;
      }
      goto L_0881609C;
    }
L_0881609C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_088160A8;
L_088160A8:
    ctx.fpr[30] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
      if (branch_taken) {
          goto L_088160D0;
      }
      goto L_088160C4;
    }
L_088160C4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_088160D0;
L_088160D0:
    ctx.fpr[24] = ctx.fpr[26] + ctx.fpr[24];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
      if (branch_taken) {
          goto L_088160F8;
      }
      goto L_088160EC;
    }
L_088160EC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_088160F8;
L_088160F8:
    ctx.fpr[22] = ctx.fpr[28] - ctx.fpr[22];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08816120;
      }
      goto L_08816114;
    }
L_08816114:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08816120;
L_08816120:
    ctx.fpr[20] = ctx.fpr[26] - ctx.fpr[20];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08816148;
      }
      goto L_0881613C;
    }
L_0881613C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08816148;
L_08816148:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08816170u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08816170u) goto L_08816170;
    return;
L_08816170:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08816198u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 124u, 0x08AF5238u>(ctx, &aot_mem) && ctx.pc == 0x08816198u) goto L_08816198;
    return;
L_08816198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815F1C;
      }
      goto L_088161A0;
    }
L_088161A0:
    ctx.gpr[17] = (0u | 1u);
    goto L_088161A4;
L_088161A4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088161C0;
      }
      goto L_088161B4;
    }
L_088161B4:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088161C0;
L_088161C0:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
      if (branch_taken) {
          goto L_088161E8;
      }
      goto L_088161DC;
    }
L_088161DC:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_088161E8;
L_088161E8:
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[13];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
      if (branch_taken) {
          goto L_08816210;
      }
      goto L_08816204;
    }
L_08816204:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_08816210;
L_08816210:
    ctx.fpr[14] = ctx.fpr[26] + ctx.fpr[14];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
      if (branch_taken) {
          goto L_08816238;
      }
      goto L_0881622C;
    }
L_0881622C:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    goto L_08816238;
L_08816238:
    ctx.fpr[15] = ctx.fpr[28] + ctx.fpr[15];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0881624Cu);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0881624Cu) goto L_0881624C;
    return;
L_0881624C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08816268u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08816268u) goto L_08816268;
    return;
L_08816268:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08816278u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08816278u) goto L_08816278;
    return;
L_08816278:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08816294;
      }
      goto L_08816288;
    }
L_08816288:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08816294;
L_08816294:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_088162B0;
      }
      goto L_088162A4;
    }
L_088162A4:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_088162B0;
L_088162B0:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[13];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_088162CC;
      }
      goto L_088162C0;
    }
L_088162C0:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_088162CC;
L_088162CC:
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_088162E8;
      }
      goto L_088162DC;
    }
L_088162DC:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_088162E8;
L_088162E8:
    ctx.fpr[15] = ctx.fpr[28] + ctx.fpr[14];
    ctx.gpr[31] = (0x088162F4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x088162F4u) goto L_088162F4;
    return;
L_088162F4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08816310u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08816310u) goto L_08816310;
    return;
L_08816310:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08816320u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08816320u) goto L_08816320;
    return;
L_08816320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815F1C;
      }
      goto L_08816328;
    }
L_08816328:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816368:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16307u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[10] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[10]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[11]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[11]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881651C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16278u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52196u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08816578u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08816578u) goto L_08816578;
    return;
L_08816578:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0881659C;
      }
      goto L_0881658C;
    }
L_0881658C:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0881659C;
L_0881659C:
    ctx.gpr[4] = (16201u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16572u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32477u);
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_088165DC;
      }
      goto L_088165D8;
    }
L_088165D8:
    ctx.gpr[17] = (0u | 7u);
    goto L_088165DC;
L_088165DC:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_088166D0;
      }
      goto L_088165E8;
    }
L_088165E8:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(17880)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    jump_target = ctx.gpr[1];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816604:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_088166D0;
      }
      goto L_08816610;
    }
L_08816610:
    ctx.gpr[4] = (16174u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 5243u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_088166D0;
      }
      goto L_08816638;
    }
L_08816638:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
      if (branch_taken) {
          goto L_088166D0;
      }
      goto L_08816644;
    }
L_08816644:
    ctx.gpr[4] = (16174u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 5243u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
      if (branch_taken) {
          goto L_088166D0;
      }
      goto L_0881666C;
    }
L_0881666C:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
      if (branch_taken) {
          goto L_088166D0;
      }
      goto L_08816678;
    }
L_08816678:
    ctx.gpr[4] = (16174u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 5243u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
      if (branch_taken) {
          goto L_088166D0;
      }
      goto L_088166A0;
    }
L_088166A0:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_088166D0;
      }
      goto L_088166AC;
    }
L_088166AC:
    ctx.gpr[4] = (16174u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 5243u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[14];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_088166D0;
L_088166D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (0u | 700u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(351) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088167A8;
      }
      goto L_088166EC;
    }
L_088166EC:
    ctx.fpr[26] = ctx.fpr[22] - ctx.fpr[24];
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.fpr[28] = ctx.fpr[20] - ctx.fpr[24];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22952));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[22] = ctx.fpr[24] + ctx.fpr[22];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.fpr[20] = ctx.fpr[24] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[28] + ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[15];
    ctx.gpr[31] = (0x08816730u);
    ctx.fpr[15] = ctx.fpr[20] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08816730u) goto L_08816730;
    return;
L_08816730:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6848)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08816750u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08816750u) goto L_08816750;
    return;
L_08816750:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08816760u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 72u, 0x08AF4650u>(ctx, &aot_mem) && ctx.pc == 0x08816760u) goto L_08816760;
    return;
L_08816760:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881677Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0881677Cu) goto L_0881677C;
    return;
L_0881677C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6848)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08816798u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08816798u) goto L_08816798;
    return;
L_08816798:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088167A8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 72u, 0x08AF4650u>(ctx, &aot_mem) && ctx.pc == 0x088167A8u) goto L_088167A8;
    return;
L_088167A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(612), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088167FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881685Cu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 198u, 0x0880CAECu>(ctx, &aot_mem) && ctx.pc == 0x0881685Cu) goto L_0881685C;
    return;
L_0881685C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088169CC;
      }
      goto L_08816868;
    }
L_08816868:
    ctx.gpr[4] = (ctx.gpr[30] & 1u);
    ctx.gpr[5] = (ctx.gpr[18] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8496));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(23280));
    ctx.gpr[19] = (ctx.gpr[22] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088168B8;
      }
      goto L_0881689C;
    }
L_0881689C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088168B8;
      }
      goto L_088168A8;
    }
L_088168A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_088168B8;
      }
      goto L_088168B0;
    }
L_088168B0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088168C0;
      }
      goto L_088168B8;
    }
L_088168B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088168C8;
      }
      goto L_088168C0;
    }
L_088168C0:
    ctx.gpr[4] = (ctx.gpr[30] << 3u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_088168C8;
L_088168C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6904)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088168F8;
      }
      goto L_088168D4;
    }
L_088168D4:
    ctx.gpr[31] = (0x088168DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 601u, 0x0889E968u>(ctx, &aot_mem) && ctx.pc == 0x088168DCu) goto L_088168DC;
    return;
L_088168DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088168F8;
      }
      goto L_088168E4;
    }
L_088168E4:
    ctx.gpr[31] = (0x088168ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 601u, 0x0889E968u>(ctx, &aot_mem) && ctx.pc == 0x088168ECu) goto L_088168EC;
    return;
L_088168EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088169A8;
      }
      goto L_088168F8;
    }
L_088168F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6904)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08816960;
      }
      goto L_08816908;
    }
L_08816908:
    ctx.gpr[31] = (0x08816910u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 601u, 0x0889E968u>(ctx, &aot_mem) && ctx.pc == 0x08816910u) goto L_08816910;
    return;
L_08816910:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816960;
      }
      goto L_08816920;
    }
L_08816920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816960;
      }
      goto L_0881692C;
    }
L_0881692C:
    ctx.gpr[31] = (0x08816934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 229u, 0x08B21310u>(ctx, &aot_mem) && ctx.pc == 0x08816934u) goto L_08816934;
    return;
L_08816934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_0881694C;
    }
    goto L_08816940;
L_08816940:
    ctx.gpr[31] = (0x08816948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08816948u) goto L_08816948;
    return;
L_08816948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_0881694C;
L_0881694C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08816958u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 231u, 0x08955020u>(ctx, &aot_mem) && ctx.pc == 0x08816958u) goto L_08816958;
    return;
L_08816958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08816960;
L_08816960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6900)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(6904), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8496u);
    ctx.gpr[31] = (0x08816984u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 694u, 0x0893681Cu>(ctx, &aot_mem) && ctx.pc == 0x08816984u) goto L_08816984;
    return;
L_08816984:
    ctx.gpr[4] = (116u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x088169A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 285u, 0x08A3137Cu>(ctx, &aot_mem) && ctx.pc == 0x088169A4u) goto L_088169A4;
    return;
L_088169A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[2]);
    goto L_088169A8;
L_088169A8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088169BC;
      }
      goto L_088169B0;
    }
L_088169B0:
    ctx.gpr[31] = (0x088169B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 601u, 0x0889E968u>(ctx, &aot_mem) && ctx.pc == 0x088169B8u) goto L_088169B8;
    return;
L_088169B8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_088169BC;
L_088169BC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088169CC;
      }
      goto L_088169C4;
    }
L_088169C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08816BD4;
      }
      goto L_088169CC;
    }
L_088169CC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (16254u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[16] = (ctx.gpr[29] + ctx.gpr[16]);
    goto L_088169E4;
L_088169E4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088169F8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 606u, 0x0880EDB0u>(ctx, &aot_mem) && ctx.pc == 0x088169F8u) goto L_088169F8;
    return;
L_088169F8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088169E4;
      }
      goto L_08816A0C;
    }
L_08816A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (15112u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 34953u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (15216u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 61681u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
    ctx.gpr[4] = (16768u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 4u);
    ctx.gpr[4] = (15744u << 16u);
    ctx.gpr[21] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.gpr[17] = (ctx.gpr[29] + ctx.gpr[17]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    goto L_08816A78;
L_08816A78:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08816A8Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 610u, 0x0880EE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08816A8Cu) goto L_08816A8C;
    return;
L_08816A8C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08816AA4u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 614u, 0x0880EF34u>(ctx, &aot_mem) && ctx.pc == 0x08816AA4u) goto L_08816AA4;
    return;
L_08816AA4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08816AB4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 577u, 0x0880EB64u>(ctx, &aot_mem) && ctx.pc == 0x08816AB4u) goto L_08816AB4;
    return;
L_08816AB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08816A78;
      }
      goto L_08816B24;
    }
L_08816B24:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08816B7C;
      }
      goto L_08816B34;
    }
L_08816B34:
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08816B48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08816B48u) goto L_08816B48;
    return;
L_08816B48:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(6848)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.gpr[5] = (0u | 204u);
    ctx.gpr[6] = (0u | 204u);
    ctx.gpr[31] = (0x08816B60u);
    ctx.gpr[7] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08816B60u) goto L_08816B60;
    return;
L_08816B60:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08816B74u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 93u, 0x08AF4D64u>(ctx, &aot_mem) && ctx.pc == 0x08816B74u) goto L_08816B74;
    return;
L_08816B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08816BC0;
      }
      goto L_08816B7C;
    }
L_08816B7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08816B94u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08816B94u) goto L_08816B94;
    return;
L_08816B94:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(6848)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08816BACu);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08816BACu) goto L_08816BAC;
    return;
L_08816BAC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08816BC0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 93u, 0x08AF4D64u>(ctx, &aot_mem) && ctx.pc == 0x08816BC0u) goto L_08816BC0;
    return;
L_08816BC0:
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08816BD4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8272));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 486u, 0x08AEE120u>(ctx, &aot_mem) && ctx.pc == 0x08816BD4u) goto L_08816BD4;
    return;
L_08816BD4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816C18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (50944u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(257));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08816C90;
      }
      goto L_08816C84;
    }
L_08816C84:
    ctx.gpr[31] = (0x08816C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08816C8Cu) goto L_08816C8C;
    return;
L_08816C8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08816C90;
L_08816C90:
    ctx.gpr[31] = (0x08816C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 558u, 0x089BAA88u>(ctx, &aot_mem) && ctx.pc == 0x08816C98u) goto L_08816C98;
    return;
L_08816C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08816CB0;
      }
      goto L_08816CA4;
    }
L_08816CA4:
    ctx.gpr[31] = (0x08816CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08816CACu) goto L_08816CAC;
    return;
L_08816CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08816CB0;
L_08816CB0:
    ctx.gpr[31] = (0x08816CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 561u, 0x089BAAA8u>(ctx, &aot_mem) && ctx.pc == 0x08816CB8u) goto L_08816CB8;
    return;
L_08816CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08816CD0;
      }
      goto L_08816CC4;
    }
L_08816CC4:
    ctx.gpr[31] = (0x08816CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08816CCCu) goto L_08816CCC;
    return;
L_08816CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08816CD0;
L_08816CD0:
    ctx.gpr[31] = (0x08816CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 558u, 0x089BAA88u>(ctx, &aot_mem) && ctx.pc == 0x08816CD8u) goto L_08816CD8;
    return;
L_08816CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08816CF0;
      }
      goto L_08816CE4;
    }
L_08816CE4:
    ctx.gpr[31] = (0x08816CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08816CECu) goto L_08816CEC;
    return;
L_08816CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08816CF0;
L_08816CF0:
    ctx.gpr[31] = (0x08816CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 565u, 0x089BAAD0u>(ctx, &aot_mem) && ctx.pc == 0x08816CF8u) goto L_08816CF8;
    return;
L_08816CF8:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08816D14;
      }
      goto L_08816D08;
    }
L_08816D08:
    ctx.gpr[31] = (0x08816D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08816D10u) goto L_08816D10;
    return;
L_08816D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08816D14;
L_08816D14:
    ctx.gpr[31] = (0x08816D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 561u, 0x089BAAA8u>(ctx, &aot_mem) && ctx.pc == 0x08816D1Cu) goto L_08816D1C;
    return;
L_08816D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08816D34;
      }
      goto L_08816D28;
    }
L_08816D28:
    ctx.gpr[31] = (0x08816D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08816D30u) goto L_08816D30;
    return;
L_08816D30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08816D34;
L_08816D34:
    ctx.gpr[31] = (0x08816D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 569u, 0x089BAAFCu>(ctx, &aot_mem) && ctx.pc == 0x08816D3Cu) goto L_08816D3C;
    return;
L_08816D3C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08816D58u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08816D58u) goto L_08816D58;
    return;
L_08816D58:
    ctx.gpr[31] = (0x08816D60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 743u, 0x0880FA88u>(ctx, &aot_mem) && ctx.pc == 0x08816D60u) goto L_08816D60;
    return;
L_08816D60:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32639u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (65407u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (17402u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] | 0u);
    ctx.gpr[4] = (16512u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
    goto L_08816DD4;
L_08816DD4:
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08816DECu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 610u, 0x0880EE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08816DECu) goto L_08816DEC;
    return;
L_08816DEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[30];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08816E2C;
    }
    goto L_08816E2C;
L_08816E2C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08816E48;
    }
    goto L_08816E48;
L_08816E48:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_08816E64;
    }
    goto L_08816E64;
L_08816E64:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_08816E80;
    }
    goto L_08816E80;
L_08816E80:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08816DD4;
      }
      goto L_08816EA0;
    }
L_08816EA0:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[13]));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[15] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[19]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[19];
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.fpr[17] = ctx.fpr[12] - ctx.fpr[17];
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[14]));
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[14]));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[13]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[19]));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[12])) && ctx.fpr[2] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08816F20;
      }
      goto L_08816F04;
    }
L_08816F04:
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08816F20;
      }
      goto L_08816F14;
    }
L_08816F14:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    goto L_08816F20;
L_08816F20:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[13])) && ctx.fpr[14] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08816F4C;
      }
      goto L_08816F30;
    }
L_08816F30:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08816F4C;
      }
      goto L_08816F40;
    }
L_08816F40:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08816F4C;
L_08816F4C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08816F70u);
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08816F70u) goto L_08816F70;
    return;
L_08816F70:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08816F7Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08816F7Cu) goto L_08816F7C;
    return;
L_08816F7C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08816F88u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08816F88u) goto L_08816F88;
    return;
L_08816F88:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08816F94u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08816F94u) goto L_08816F94;
    return;
L_08816F94:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x08816FA0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08816FA0u) goto L_08816FA0;
    return;
L_08816FA0:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08816FACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08816FACu) goto L_08816FAC;
    return;
L_08816FAC:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08816FB8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08816FB8u) goto L_08816FB8;
    return;
L_08816FB8:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08816FC4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08816FC4u) goto L_08816FC4;
    return;
L_08816FC4:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08816FD0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08816FD0u) goto L_08816FD0;
    return;
L_08816FD0:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08816FDCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08816FDCu) goto L_08816FDC;
    return;
L_08816FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15112u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (15216u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[4] | 61681u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[4] = (49024u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x08817034u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 577u, 0x0880EB64u>(ctx, &aot_mem) && ctx.pc == 0x08817034u) goto L_08817034;
    return;
L_08817034:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881704Cu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 577u, 0x0880EB64u>(ctx, &aot_mem) && ctx.pc == 0x0881704Cu) goto L_0881704C;
    return;
L_0881704C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088170A0u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 230u, 0x08861824u>(ctx, &aot_mem) && ctx.pc == 0x088170A0u) goto L_088170A0;
    return;
L_088170A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088170B0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_088167FC;
L_088170B0:
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088170C4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_088167FC;
L_088170C4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088170D8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_088167FC;
L_088170D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088170E8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_088167FC;
L_088170E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08817108;
      }
      goto L_088170F4;
    }
L_088170F4:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x08817108u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 132u, 0x08804E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08817108u) goto L_08817108;
    return;
L_08817108:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0881711Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 230u, 0x08861824u>(ctx, &aot_mem) && ctx.pc == 0x0881711Cu) goto L_0881711C;
    return;
L_0881711C:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08817128u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08817128u) goto L_08817128;
    return;
L_08817128:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08817134u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08817134u) goto L_08817134;
    return;
L_08817134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (50944u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(257));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08817190:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-22952));
      if (branch_taken) {
          goto L_088171B8;
      }
      goto L_088171AC;
    }
L_088171AC:
    ctx.gpr[31] = (0x088171B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088171B4u) goto L_088171B4;
    return;
L_088171B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088171B8;
L_088171B8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6624));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088171D0;
      }
      goto L_088171C4;
    }
L_088171C4:
    ctx.gpr[31] = (0x088171CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088171CCu) goto L_088171CC;
    return;
L_088171CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088171D0;
L_088171D0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6628));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088171E8;
      }
      goto L_088171DC;
    }
L_088171DC:
    ctx.gpr[31] = (0x088171E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088171E4u) goto L_088171E4;
    return;
L_088171E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088171E8;
L_088171E8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6632));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817200;
      }
      goto L_088171F4;
    }
L_088171F4:
    ctx.gpr[31] = (0x088171FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088171FCu) goto L_088171FC;
    return;
L_088171FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817200;
L_08817200:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6636));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817218;
      }
      goto L_0881720C;
    }
L_0881720C:
    ctx.gpr[31] = (0x08817214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817214u) goto L_08817214;
    return;
L_08817214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817218;
L_08817218:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6640));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817230;
      }
      goto L_08817224;
    }
L_08817224:
    ctx.gpr[31] = (0x0881722Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881722Cu) goto L_0881722C;
    return;
L_0881722C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817230;
L_08817230:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6644));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817248;
      }
      goto L_0881723C;
    }
L_0881723C:
    ctx.gpr[31] = (0x08817244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817244u) goto L_08817244;
    return;
L_08817244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817248;
L_08817248:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6648));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817260;
      }
      goto L_08817254;
    }
L_08817254:
    ctx.gpr[31] = (0x0881725Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881725Cu) goto L_0881725C;
    return;
L_0881725C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817260;
L_08817260:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6652));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817278;
      }
      goto L_0881726C;
    }
L_0881726C:
    ctx.gpr[31] = (0x08817274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817274u) goto L_08817274;
    return;
L_08817274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817278;
L_08817278:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6656));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817290;
      }
      goto L_08817284;
    }
L_08817284:
    ctx.gpr[31] = (0x0881728Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881728Cu) goto L_0881728C;
    return;
L_0881728C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817290;
L_08817290:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6660));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088172A8;
      }
      goto L_0881729C;
    }
L_0881729C:
    ctx.gpr[31] = (0x088172A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088172A4u) goto L_088172A4;
    return;
L_088172A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088172A8;
L_088172A8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6664));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088172C0;
      }
      goto L_088172B4;
    }
L_088172B4:
    ctx.gpr[31] = (0x088172BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088172BCu) goto L_088172BC;
    return;
L_088172BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088172C0;
L_088172C0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6668));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088172D8;
      }
      goto L_088172CC;
    }
L_088172CC:
    ctx.gpr[31] = (0x088172D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088172D4u) goto L_088172D4;
    return;
L_088172D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088172D8;
L_088172D8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6672));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088172F0;
      }
      goto L_088172E4;
    }
L_088172E4:
    ctx.gpr[31] = (0x088172ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088172ECu) goto L_088172EC;
    return;
L_088172EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088172F0;
L_088172F0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6676));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817308;
      }
      goto L_088172FC;
    }
L_088172FC:
    ctx.gpr[31] = (0x08817304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817304u) goto L_08817304;
    return;
L_08817304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817308;
L_08817308:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6680));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817320;
      }
      goto L_08817314;
    }
L_08817314:
    ctx.gpr[31] = (0x0881731Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881731Cu) goto L_0881731C;
    return;
L_0881731C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817320;
L_08817320:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6684));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817338;
      }
      goto L_0881732C;
    }
L_0881732C:
    ctx.gpr[31] = (0x08817334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817334u) goto L_08817334;
    return;
L_08817334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817338;
L_08817338:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6688));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817350;
      }
      goto L_08817344;
    }
L_08817344:
    ctx.gpr[31] = (0x0881734Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881734Cu) goto L_0881734C;
    return;
L_0881734C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817350;
L_08817350:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6692));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817368;
      }
      goto L_0881735C;
    }
L_0881735C:
    ctx.gpr[31] = (0x08817364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817364u) goto L_08817364;
    return;
L_08817364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817368;
L_08817368:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6696));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817380;
      }
      goto L_08817374;
    }
L_08817374:
    ctx.gpr[31] = (0x0881737Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881737Cu) goto L_0881737C;
    return;
L_0881737C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817380;
L_08817380:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6700));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817398;
      }
      goto L_0881738C;
    }
L_0881738C:
    ctx.gpr[31] = (0x08817394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817394u) goto L_08817394;
    return;
L_08817394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817398;
L_08817398:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6704));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088173B0;
      }
      goto L_088173A4;
    }
L_088173A4:
    ctx.gpr[31] = (0x088173ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088173ACu) goto L_088173AC;
    return;
L_088173AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088173B0;
L_088173B0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6708));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088173C8;
      }
      goto L_088173BC;
    }
L_088173BC:
    ctx.gpr[31] = (0x088173C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088173C4u) goto L_088173C4;
    return;
L_088173C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088173C8;
L_088173C8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6712));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088173E0;
      }
      goto L_088173D4;
    }
L_088173D4:
    ctx.gpr[31] = (0x088173DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088173DCu) goto L_088173DC;
    return;
L_088173DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088173E0;
L_088173E0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6716));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088173F8;
      }
      goto L_088173EC;
    }
L_088173EC:
    ctx.gpr[31] = (0x088173F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088173F4u) goto L_088173F4;
    return;
L_088173F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088173F8;
L_088173F8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6720));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817410;
      }
      goto L_08817404;
    }
L_08817404:
    ctx.gpr[31] = (0x0881740Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881740Cu) goto L_0881740C;
    return;
L_0881740C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817410;
L_08817410:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6724));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817428;
      }
      goto L_0881741C;
    }
L_0881741C:
    ctx.gpr[31] = (0x08817424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817424u) goto L_08817424;
    return;
L_08817424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817428;
L_08817428:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6728));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817440;
      }
      goto L_08817434;
    }
L_08817434:
    ctx.gpr[31] = (0x0881743Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881743Cu) goto L_0881743C;
    return;
L_0881743C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817440;
L_08817440:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6732));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817458;
      }
      goto L_0881744C;
    }
L_0881744C:
    ctx.gpr[31] = (0x08817454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817454u) goto L_08817454;
    return;
L_08817454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817458;
L_08817458:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6736));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817470;
      }
      goto L_08817464;
    }
L_08817464:
    ctx.gpr[31] = (0x0881746Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881746Cu) goto L_0881746C;
    return;
L_0881746C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817470;
L_08817470:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6740));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817488;
      }
      goto L_0881747C;
    }
L_0881747C:
    ctx.gpr[31] = (0x08817484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817484u) goto L_08817484;
    return;
L_08817484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817488;
L_08817488:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6744));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088174A0;
      }
      goto L_08817494;
    }
L_08817494:
    ctx.gpr[31] = (0x0881749Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881749Cu) goto L_0881749C;
    return;
L_0881749C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088174A0;
L_088174A0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6748));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088174B8;
      }
      goto L_088174AC;
    }
L_088174AC:
    ctx.gpr[31] = (0x088174B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088174B4u) goto L_088174B4;
    return;
L_088174B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088174B8;
L_088174B8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6752));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088174D0;
      }
      goto L_088174C4;
    }
L_088174C4:
    ctx.gpr[31] = (0x088174CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088174CCu) goto L_088174CC;
    return;
L_088174CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088174D0;
L_088174D0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6756));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088174E8;
      }
      goto L_088174DC;
    }
L_088174DC:
    ctx.gpr[31] = (0x088174E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088174E4u) goto L_088174E4;
    return;
L_088174E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088174E8;
L_088174E8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6760));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817500;
      }
      goto L_088174F4;
    }
L_088174F4:
    ctx.gpr[31] = (0x088174FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088174FCu) goto L_088174FC;
    return;
L_088174FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817500;
L_08817500:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6764));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817518;
      }
      goto L_0881750C;
    }
L_0881750C:
    ctx.gpr[31] = (0x08817514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817514u) goto L_08817514;
    return;
L_08817514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817518;
L_08817518:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6768));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817530;
      }
      goto L_08817524;
    }
L_08817524:
    ctx.gpr[31] = (0x0881752Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881752Cu) goto L_0881752C;
    return;
L_0881752C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817530;
L_08817530:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6772));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817548;
      }
      goto L_0881753C;
    }
L_0881753C:
    ctx.gpr[31] = (0x08817544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817544u) goto L_08817544;
    return;
L_08817544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817548;
L_08817548:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6776));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817560;
      }
      goto L_08817554;
    }
L_08817554:
    ctx.gpr[31] = (0x0881755Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881755Cu) goto L_0881755C;
    return;
L_0881755C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817560;
L_08817560:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6780));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817578;
      }
      goto L_0881756C;
    }
L_0881756C:
    ctx.gpr[31] = (0x08817574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817574u) goto L_08817574;
    return;
L_08817574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817578;
L_08817578:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6784));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817590;
      }
      goto L_08817584;
    }
L_08817584:
    ctx.gpr[31] = (0x0881758Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881758Cu) goto L_0881758C;
    return;
L_0881758C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817590;
L_08817590:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6788));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088175A8;
      }
      goto L_0881759C;
    }
L_0881759C:
    ctx.gpr[31] = (0x088175A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088175A4u) goto L_088175A4;
    return;
L_088175A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088175A8;
L_088175A8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6792));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088175C0;
      }
      goto L_088175B4;
    }
L_088175B4:
    ctx.gpr[31] = (0x088175BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088175BCu) goto L_088175BC;
    return;
L_088175BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088175C0;
L_088175C0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6796));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088175D8;
      }
      goto L_088175CC;
    }
L_088175CC:
    ctx.gpr[31] = (0x088175D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088175D4u) goto L_088175D4;
    return;
L_088175D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088175D8;
L_088175D8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6800));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088175F0;
      }
      goto L_088175E4;
    }
L_088175E4:
    ctx.gpr[31] = (0x088175ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088175ECu) goto L_088175EC;
    return;
L_088175EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088175F0;
L_088175F0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6804));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817608;
      }
      goto L_088175FC;
    }
L_088175FC:
    ctx.gpr[31] = (0x08817604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817604u) goto L_08817604;
    return;
L_08817604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817608;
L_08817608:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6808));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817620;
      }
      goto L_08817614;
    }
L_08817614:
    ctx.gpr[31] = (0x0881761Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881761Cu) goto L_0881761C;
    return;
L_0881761C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817620;
L_08817620:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6812));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817638;
      }
      goto L_0881762C;
    }
L_0881762C:
    ctx.gpr[31] = (0x08817634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817634u) goto L_08817634;
    return;
L_08817634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817638;
L_08817638:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6816));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817650;
      }
      goto L_08817644;
    }
L_08817644:
    ctx.gpr[31] = (0x0881764Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881764Cu) goto L_0881764C;
    return;
L_0881764C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817650;
L_08817650:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6820));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817668;
      }
      goto L_0881765C;
    }
L_0881765C:
    ctx.gpr[31] = (0x08817664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817664u) goto L_08817664;
    return;
L_08817664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817668;
L_08817668:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6824));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817680;
      }
      goto L_08817674;
    }
L_08817674:
    ctx.gpr[31] = (0x0881767Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0881767Cu) goto L_0881767C;
    return;
L_0881767C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817680;
L_08817680:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6828));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817698;
      }
      goto L_0881768C;
    }
L_0881768C:
    ctx.gpr[31] = (0x08817694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08817694u) goto L_08817694;
    return;
L_08817694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08817698;
L_08817698:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6832));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088176B0;
      }
      goto L_088176A4;
    }
L_088176A4:
    ctx.gpr[31] = (0x088176ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x088176ACu) goto L_088176AC;
    return;
L_088176AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088176B0;
L_088176B0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6836));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088176C8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (65280u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    goto L_088176EC;
L_088176EC:
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[5] & 65535u);
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(17));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881774C;
      }
      goto L_0881770C;
    }
L_0881770C:
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(16208), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(17));
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(16208), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(17));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
      if (branch_taken) {
          goto L_0881770C;
      }
      goto L_0881774C;
    }
L_0881774C:
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(34));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088177A8;
      }
      goto L_08817768;
    }
L_08817768:
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(16208), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(17));
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(16208), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
      if (branch_taken) {
          goto L_08817768;
      }
      goto L_088177A8;
    }
L_088177A8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088176EC;
      }
      goto L_088177BC;
    }
L_088177BC:
    ctx.gpr[6] = (15477u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[6] | 49807u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[6] = (16640u << 16u);
    ctx.gpr[5] = (0u | 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    goto L_088177E0;
L_088177E0:
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088177EC;
L_088177EC:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08817810;
L_08817810:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[12] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[12]));
      if (branch_taken) {
          goto L_0881784C;
      }
      goto L_08817840;
    }
L_08817840:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_0881784C;
L_0881784C:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08817860;
      }
      goto L_08817854;
    }
L_08817854:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08817860;
L_08817860:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(28));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[9]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08817810;
      }
      goto L_08817878;
    }
L_08817878:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[10]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088177EC;
      }
      goto L_08817888;
    }
L_08817888:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8092));
      if (branch_taken) {
          goto L_088177E0;
      }
      goto L_08817898;
    }
L_08817898:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088178A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[4] = (256u << 16u);
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(16208));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[22] & ctx.gpr[4]);
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(29232));
    ctx.gpr[30] = (ctx.gpr[17] + static_cast<std::uint32_t>(29552));
    ctx.gpr[23] = (4096u << 16u);
    goto L_0881790C;
L_0881790C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08817930;
      }
      goto L_08817918;
    }
L_08817918:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881791C;
L_0881791C:
    ctx.gpr[31] = (0x08817924u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem) && ctx.pc == 0x08817924u) goto L_08817924;
    return;
L_08817924:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881791C;
      }
      goto L_08817930;
    }
L_08817930:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (4608u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4577));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08817988;
      }
      goto L_08817954;
    }
L_08817954:
    ctx.gpr[7] = (ctx.gpr[22] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    goto L_08817988;
L_08817988:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[7] = (ctx.gpr[18] >> 8u);
      if (branch_taken) {
          goto L_088179D0;
      }
      goto L_08817990;
    }
L_08817990:
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[18] & ctx.gpr[6]);
    ctx.gpr[7] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    goto L_088179D0;
L_088179D0:
    ctx.gpr[6] = (1028u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(544));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08817A04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08817A04u) goto L_08817A04;
    return;
L_08817A04:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08817A18u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08817A18u) goto L_08817A18;
    return;
L_08817A18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08817A30u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 498u, 0x088DF9D0u>(ctx, &aot_mem) && ctx.pc == 0x08817A30u) goto L_08817A30;
    return;
L_08817A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2816u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8092));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881790C;
      }
      goto L_08817A68;
    }
L_08817A68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08817A98:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08817AAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(7744));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08817AE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08817AE0u) goto L_08817AE0;
    return;
L_08817AE0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (14848u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (15104u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[7] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (56576u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1404)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[6] >> 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[6] = (18944u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[9] = (19200u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[10] >> 24u);
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    ctx.gpr[11] = (256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[15] = (ctx.gpr[4] + static_cast<std::uint32_t>(29552));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0u | 255u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (21760u << 16u);
    ctx.gpr[3] = (22528u << 16u);
    ctx.gpr[12] = (22016u << 16u);
    ctx.gpr[13] = (22272u << 16u);
    ctx.gpr[14] = (15u << 16u);
    ctx.gpr[24] = (4096u << 16u);
    ctx.gpr[25] = (2560u << 16u);
    ctx.gpr[17] = (18432u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    ctx.gpr[18] = (18688u << 16u);
      if (branch_taken) {
          goto L_08817C30;
      }
      goto L_08817C24;
    }
L_08817C24:
    ctx.gpr[7] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08817C30;
L_08817C30:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_08817C50;
    }
    goto L_08817C44;
L_08817C44:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08817C60;
      }
      goto L_08817C50;
    }
L_08817C50:
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    goto L_08817C60;
L_08817C60:
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    ctx.gpr[8] = (ctx.gpr[10] & ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] & ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[8] | ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (ctx.gpr[7] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[12]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[13]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (50944u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[7] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[7] = (56578u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] >> 8u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[8] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (16384u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] >> 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (ctx.gpr[8] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[10] >> 24u);
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08817DEC;
      }
      goto L_08817DE0;
    }
L_08817DE0:
    ctx.gpr[7] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08817DEC;
L_08817DEC:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[13];
        goto L_08817E0C;
    }
    goto L_08817E00;
L_08817E00:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08817E1C;
      }
      goto L_08817E0C;
    }
L_08817E0C:
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    goto L_08817E1C;
L_08817E1C:
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    ctx.gpr[8] = (ctx.gpr[10] & ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] & ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[8] | ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (ctx.gpr[7] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[12]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[13]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (ctx.gpr[7] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[8] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[7] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08817F64:
    ctx.gpr[8] = (17664u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[8] = (17352u << 16u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (15616u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[8] = (16896u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16128u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[16] = ctx.fpr[13] - ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[10] = (0u - ctx.gpr[10]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.pc = 0x08818000u; return;
}

void recomp_unit_0004(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0004_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_4(Runtime &runtime) {
    runtime.register_generated_unit(4u, 0x08814000u, 16384u, &recomp_unit_0004, &recomp_unit_0004_entry);
    runtime.register_function(0x08814000u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814014u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881402Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814040u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814060u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814068u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814084u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881408Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814098u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814100u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814110u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814134u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814144u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814168u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814178u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881419Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881420Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881422Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881423Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881425Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881426Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814294u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814318u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814328u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881437Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814380u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814404u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814418u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881443Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814444u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814468u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814478u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814480u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814488u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814508u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814510u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814514u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881451Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881452Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814534u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814538u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814540u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814550u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814554u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881455Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814564u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814570u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881457Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814584u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814590u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814604u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814608u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814610u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814618u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814628u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814634u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814640u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881464Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814654u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814658u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814660u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814668u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814678u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814684u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814690u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881469Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814704u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881470Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881471Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814724u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881472Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814738u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814744u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881474Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814750u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814758u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814760u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814770u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814774u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881477Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814788u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814794u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881479Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814804u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814814u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881481Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814824u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814830u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881483Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814844u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814848u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814850u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814858u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814868u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881487Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881491Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814924u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881492Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814944u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814958u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881496Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814978u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814998u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814ABCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CD0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814FD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814FDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814FE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814FE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814FF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814FFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815008u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815010u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815014u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881501Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815028u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881504Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815054u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815060u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815068u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881506Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815074u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815084u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881509Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088150ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088150B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088150D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815114u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881516Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815178u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815180u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815188u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815204u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881520Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815214u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815218u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815228u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815230u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815234u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881523Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881525Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815268u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815278u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881527Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815284u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815300u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881530Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881531Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881532Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881533Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815340u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815348u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815384u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881538Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815394u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881539Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815410u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815438u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815470u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815500u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815520u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815540u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815568u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815574u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815588u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815610u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815634u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815638u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881565Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881567Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815688u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815704u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815728u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815748u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881579Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088157A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088157B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088157CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088157ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815800u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881580Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815828u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815844u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815870u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815874u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815890u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815898u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815904u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815910u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815920u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815938u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815968u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815994u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BBCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815DBCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815DE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815DF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815ECCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F60u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FBCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816000u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881600Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816038u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816060u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816070u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881607Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881609Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816114u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816120u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881613Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816148u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816170u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816198u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816204u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816210u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881622Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816238u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881624Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816268u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816278u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816288u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816294u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816310u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816320u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816328u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816368u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881651Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816578u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881658Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881659Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816604u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816610u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816638u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816644u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881666Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816678u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816730u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816750u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816760u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881677Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816798u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881685Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816868u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881689Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816908u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816910u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816920u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881692Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816934u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816940u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816948u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881694Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816958u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816960u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816984u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AB4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B60u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CD0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D60u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816EA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FD0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817034u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881704Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817108u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881711Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817128u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817134u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817190u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817200u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881720Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817214u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817218u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817224u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881722Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817230u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881723Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817244u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817248u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817254u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881725Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817260u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881726Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817274u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817278u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817284u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881728Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817290u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881729Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817304u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817308u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817314u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881731Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817320u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881732Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817334u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817338u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817344u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881734Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817350u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881735Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817364u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817368u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817374u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881737Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817380u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881738Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817394u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817398u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817404u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881740Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817410u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881741Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817424u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817428u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817434u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881743Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817440u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881744Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817454u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817458u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817464u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881746Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817470u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881747Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817484u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817488u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817494u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881749Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817500u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881750Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817514u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817518u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817524u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881752Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817530u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881753Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817544u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817548u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817554u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881755Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817560u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881756Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817574u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817578u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817584u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881758Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817590u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881759Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817604u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817608u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817614u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881761Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817620u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881762Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817634u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817638u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817644u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881764Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817650u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881765Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817664u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817668u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817674u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881767Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817680u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881768Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817694u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817698u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881770Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881774Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817768u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817810u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817840u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881784Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817854u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817860u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817878u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817888u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817898u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881790Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817918u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881791Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817924u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817930u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817954u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817988u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817990u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817AACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817AE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C60u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F64u, &recomp_unit_0004, "recomp_unit_0004");
}
} // namespace psprecomp
