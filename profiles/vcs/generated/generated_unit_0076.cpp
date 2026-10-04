#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_config.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static float get_effective_aspect_ratio(float default_aspect) noexcept {
    const vcs::VcsConfiguration &config = vcs::vcs_configuration();
    if (!config.initialized) return default_aspect;
    const vcs::DisplaySurfaceDimensions output =
        vcs::resolve_display_surface_dimensions(config.display);
    const float aspect = vcs::resolve_widescreen_aspect_ratio(config, output.width, output.height);
    return (aspect > 0.0f) ? aspect : default_aspect;
}
static float widen_horizontal_extent(float native_extent) noexcept {
    const vcs::VcsConfiguration &config = vcs::vcs_configuration();
    if (!config.initialized) return native_extent;
    const vcs::DisplaySurfaceDimensions output =
        vcs::resolve_display_surface_dimensions(config.display);
    return native_extent * vcs::widescreen_stretch_factor(config, output.width, output.height);
}
static const std::uint16_t kEntryIds_recomp_unit_0076[4092] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 14, 0, 15, 16, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0,
    0, 20, 21, 0, 22, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 27, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 32, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 38, 39, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 45, 0, 46, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 53, 0, 0,
    0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 63, 0, 64, 0,
    65, 0, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0,
    75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89,
    0, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    98, 0, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107,
    0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114,
    0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 123, 0, 124, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0,
    0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 137, 138, 0, 139, 0, 0, 140, 0, 141, 142, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 153,
    0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162,
    0, 0, 163, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 171,
    0, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 0, 192, 0, 193, 194, 0, 195,
    0, 0, 196, 0, 197, 0, 0, 198, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 203, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 211,
    0, 212, 0, 0, 213, 0, 0, 214, 0, 215, 216, 217, 0, 218, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 223, 224, 0, 225, 0, 226,
    0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237,
    0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 249, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0,
    254, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 260, 0, 0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 264, 0, 265,
    0, 266, 267, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 273, 0, 274,
    0, 275, 276, 0, 277, 0, 0, 0, 0, 278, 279, 0, 280, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 283, 0, 284, 0, 285, 286, 0,
    287, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 294, 0, 0, 0, 0, 295, 296, 0, 297,
    0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0,
    0, 307, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 312, 0, 313, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 319, 320, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 325, 0, 326, 0,
    0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 334, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0,
    0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 358, 0, 359, 0, 360, 0, 361, 0,
    0, 362, 0, 363, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370,
    0, 371, 0, 372, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 0, 379,
    0, 380, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 386, 387, 0, 388, 0, 389, 0, 0, 0, 390, 0, 391, 0, 392, 0,
    0, 393, 0, 0, 394, 0, 0, 395, 0, 396, 397, 0, 398, 0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0,
    405, 0, 406, 407, 0, 408, 0, 409, 0, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 414, 415, 0, 416, 0, 417, 0, 0, 0, 418,
    0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 423, 0, 0, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0,
    435, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 440, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444,
    0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0,
    0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 458, 0, 0, 0, 459, 0, 0, 460, 461, 462, 0, 463, 0, 464, 0, 0, 465,
    0, 466, 0, 467, 468, 0, 469, 0, 470, 0, 471, 0, 472, 0, 0, 0, 473, 0, 0, 474, 475, 476, 0, 477, 0, 478, 0, 0, 479, 0, 480, 0,
    481, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0,
    0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 493,
    0, 494, 0, 0, 495, 0, 0, 0, 0, 496, 0, 497, 0, 0, 498, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0,
    0, 502, 0, 503, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0, 0, 510, 0, 511, 0, 0,
    512, 0, 513, 0, 514, 0, 515, 0, 516, 517, 0, 518, 0, 519, 0, 520, 521, 0, 522, 0, 0, 523, 0, 524, 0, 525, 0, 526, 0, 527, 0, 528,
    0, 529, 0, 0, 530, 0, 531, 0, 532, 0, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 0, 0, 538, 0, 539, 0, 540, 0, 0, 0, 0,
    0, 0, 0, 541, 0, 0, 0, 542, 0, 543, 0, 0, 544, 0, 545, 546, 0, 547, 0, 548, 0, 549, 0, 0, 550, 0, 551, 552, 0, 553, 0, 554,
    0, 0, 555, 0, 556, 557, 0, 558, 0, 559, 0, 0, 560, 0, 561, 0, 0, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0,
    0, 569, 0, 570, 571, 0, 572, 0, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580,
    0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586, 0, 587, 0, 588, 0, 589, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591,
    0, 0, 592, 0, 0, 593, 0, 0, 0, 594, 0, 0, 595, 0, 0, 0, 596, 0, 597, 0, 598, 0, 0, 599, 0, 600, 0, 0, 601, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 610, 0, 0,
    611, 0, 612, 0, 613, 0, 614, 615, 0, 616, 0, 617, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0,
    0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 0, 0, 627,
    0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0,
    633, 0, 0, 0, 634, 0, 0, 635, 0, 0, 636, 0, 637, 0, 638, 0, 0, 639, 0, 640, 641, 0, 642, 0, 0, 643, 0, 644, 0, 0, 645, 0,
    646, 0, 647, 0, 648, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 652, 0, 653, 0, 654, 0,
    655, 0, 0, 656, 0, 0, 657, 0, 658, 0, 659, 0, 0, 660, 0, 661, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 0,
    0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 670, 0,
    671, 0, 672, 0, 673, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 676, 0, 677, 0, 678, 0, 679, 0, 680, 0, 681, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 684, 0, 685, 0, 686, 0, 687, 0, 688, 0, 689, 0, 690, 0,
    691, 692, 0, 0, 693, 0, 0, 694, 0, 0, 0, 0, 0, 695, 696, 0, 0, 0, 0, 0, 697, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0,
    700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 704, 0, 705, 0, 706, 707, 0, 0, 708, 0, 0, 709, 0,
    710, 0, 711, 0, 712, 0, 713, 0, 714, 0, 715, 0, 716, 0, 717, 0, 718, 0, 719, 0, 0, 0, 0, 720, 0, 721, 0, 722, 0, 723, 0, 0,
    724, 0, 725, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 728, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 0,
    732, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0,
    0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 0, 744, 0, 745, 0, 746, 0, 747, 0, 0, 748, 0, 749, 0,
    750, 0, 0, 751, 0, 752, 0, 753, 0, 0, 754, 0, 755, 0, 756, 0, 757, 0, 0, 758, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0,
    0, 762, 0, 763, 764, 0, 0, 765, 0, 0, 766, 0, 767, 0, 768, 0, 769, 0, 0, 770, 0, 0, 771, 0, 0, 772, 0, 773, 774, 775, 0, 776,
    0, 0, 0, 777, 0, 0, 778, 0, 0, 779, 0, 0, 780, 0, 781, 782, 0, 783, 0, 0, 0, 784, 0, 0, 785, 0, 0, 786, 0, 0, 787, 0,
    788, 789, 0, 790, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 794, 0, 0, 795, 0, 0, 796, 0, 0, 797,
    0, 798, 799, 0, 800, 0, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 0, 804, 0, 805, 806, 0, 807, 0, 0, 0, 0, 808, 0, 0, 0, 0,
    0, 0, 0, 809, 0, 810, 0, 0, 811, 0, 812, 0, 813, 0, 814, 0, 0, 0, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 817, 0, 0, 0,
    0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 822, 0, 0, 0, 0, 823, 0, 824, 0, 0, 825, 0, 0,
    826, 0, 0, 827, 0, 828, 829, 830, 0, 831, 832, 0, 833, 0, 834, 0, 835, 0, 836, 0, 837, 0, 838, 0, 0, 0, 0, 839, 0, 0, 0, 840,
    0, 841, 0, 842, 0, 0, 0, 843, 0, 0, 844, 0, 845, 0, 846, 0, 847, 848, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 850, 0, 0, 0, 851, 0, 852, 0, 853, 0, 854, 0, 0, 855, 0, 0, 856, 0, 857, 0, 0, 858, 0, 0, 0, 0, 859, 0,
    860, 0, 861, 0, 862, 0, 863, 864, 0, 865, 0, 0, 866, 0, 867, 0, 0, 0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 870,
    871, 0, 872, 0, 0, 0, 0, 873, 0, 0, 0, 874, 0, 0, 875, 876, 0, 0, 0, 877, 0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 879, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 880, 881, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 0, 884, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0,
    0, 0, 887, 0, 888, 889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 891, 0,
    0, 892, 0, 0, 893, 0, 894, 895, 896, 0, 897, 0, 898, 0, 0, 899, 0, 0, 900, 0, 0, 901, 0, 902, 903, 904, 0, 0, 905, 0, 906, 0,
    907, 0, 0, 0, 0, 0, 0, 0, 908, 0, 909, 0, 910, 0, 0, 911, 0, 0, 912, 913, 0, 0, 0, 0, 914, 0, 0, 0, 915, 0, 0, 0,
    916, 0, 917, 0, 918, 0, 919, 0, 0, 0, 0, 920, 0, 921, 0, 922, 0, 923, 0, 0, 0, 0, 924, 0, 925, 0, 0, 0, 0, 926, 0, 927,
    0, 0, 0, 0, 928, 929, 0, 930, 0, 0, 0, 0, 931, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 932, 0, 0, 0, 0, 0, 933, 0, 0,
    934, 0, 935, 0, 0, 0, 0, 936, 0, 0, 0, 0, 0, 0, 0, 0, 0, 937, 0, 0, 0, 0, 938, 0, 0, 0, 0, 0, 939, 0, 0, 940,
    0, 0, 0, 0, 941, 0, 0, 0, 0, 0, 0, 942, 943, 0, 944, 0, 945, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0, 947, 0, 0, 0, 0,
    948, 0, 0, 0, 0, 0, 0, 0, 0, 949, 0, 950, 0, 0, 0, 0, 951, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 952, 0,
    953, 954, 0, 955, 0, 0, 0, 0, 956, 0, 957, 0, 958, 0, 959, 0, 0, 960, 0, 0, 0, 0, 0, 0, 0, 0, 0, 961, 0, 962, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 963, 0, 964, 0, 965, 0, 966, 0, 0, 967, 0, 0, 968, 0, 0, 969, 0, 0, 970, 0, 971, 972, 973, 0, 0,
    974, 0, 0, 0, 975, 0, 976, 0, 0, 977, 0, 0, 978, 0, 0, 979, 0, 980, 981, 0, 982, 0, 983, 0, 0, 0, 984, 0, 0, 985, 0, 0,
    0, 986, 0, 987, 988, 0, 989, 0, 0, 0, 0, 990, 0, 0, 991, 0, 0, 0, 0, 0, 992, 0, 0, 0, 0, 0, 0, 0, 0, 0, 993, 0,
    994, 0, 0, 0, 0, 0, 0, 0, 0, 0, 995, 996, 0, 997, 0, 0, 998, 0, 0, 999, 0, 1000, 1001, 0, 1002, 0, 1003, 0, 0, 0, 1004, 0,
    1005, 0, 0, 0, 1006, 0, 0, 0, 1007, 0, 1008, 0, 1009, 0, 1010, 0, 0, 1011, 0, 0, 1012, 0, 1013, 0, 0, 1014, 0, 0, 1015, 0, 0, 0,
    1016, 0, 1017, 0, 1018, 0, 1019, 0, 1020, 0, 0, 0, 1021, 0, 1022, 1023, 0, 1024, 0, 1025, 0, 1026, 0, 0, 0, 1027, 0, 1028, 1029, 0, 1030, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1031, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1032, 0, 0, 1033, 0, 0, 0, 0, 0, 0,
    0, 1034, 0, 1035, 0, 1036, 0, 0, 1037, 0, 1038, 0, 1039, 0, 0, 0, 0, 1040, 0, 0, 1041, 0, 1042, 0, 0, 1043, 0, 0, 0, 1044, 0, 0,
    1045, 0, 1046, 0, 1047, 0, 0, 1048, 0, 0, 0, 0, 1049, 0, 1050, 0, 0, 0, 0, 1051, 1052, 0, 1053, 0, 0, 1054, 0, 1055, 0, 1056, 0, 1057,
    1058, 0, 1059, 0, 1060, 0, 0, 1061, 0, 0, 1062, 0, 1063, 1064, 0, 0, 1065, 0, 0, 1066, 0, 0, 1067, 0, 1068, 0, 0, 1069, 0, 1070, 0, 1071,
    0, 1072, 0, 0, 1073, 0, 1074, 0, 0, 1075, 0, 0, 1076, 0, 1077, 0, 1078, 0, 0, 1079, 0, 0, 0, 1080, 0, 1081, 0, 1082, 0, 0, 0, 1083,
    0, 1084, 0, 1085, 0, 1086, 0, 0, 1087, 0, 0, 1088, 0, 0, 1089, 0, 0, 0, 0, 1090, 0, 1091, 0, 0, 0, 0, 0, 1092, 0, 0, 1093, 0,
    0, 0, 0, 1094, 0, 1095, 0, 0, 0, 1096, 0, 0, 0, 1097, 0, 1098, 0, 1099, 0, 1100, 0, 1101, 0, 1102, 0, 0, 1103, 0, 0, 0, 1104, 0,
    0, 1105, 0, 1106, 0, 1107, 0, 0, 0, 0, 0, 0, 0, 1108, 0, 1109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1110, 0, 1111, 0, 0, 0, 1112, 0, 0, 0, 1113, 0, 1114, 0, 1115, 0, 1116, 0, 1117, 0, 1118, 0, 1119, 0, 1120, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1121, 0, 1122, 0, 1123, 0, 0, 0, 1124, 0, 1125, 0, 1126, 0, 0, 1127, 0, 0,
    0, 1128, 0, 1129, 0, 1130, 0, 1131, 0, 1132, 0, 1133, 0, 1134, 0, 1135, 0, 0, 1136, 0, 1137, 0, 1138, 0, 0, 0, 1139, 0, 0, 0, 1140, 0,
    1141, 0, 1142, 0, 0, 1143, 0, 1144, 1145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1146, 0, 0, 0, 1147, 0, 1148, 0, 0, 1149,
};
void recomp_unit_0076_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08934000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0076[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08934000;
    case 2u: goto L_08934024;
    case 3u: goto L_0893402C;
    case 4u: goto L_08934048;
    case 5u: goto L_08934084;
    case 6u: goto L_08934090;
    case 7u: goto L_0893409C;
    case 8u: goto L_089340C0;
    case 9u: goto L_089340D4;
    case 10u: goto L_08934108;
    case 11u: goto L_08934114;
    case 12u: goto L_08934124;
    case 13u: goto L_08934134;
    case 14u: goto L_08934138;
    case 15u: goto L_08934140;
    case 16u: goto L_08934144;
    case 17u: goto L_08934158;
    case 18u: goto L_08934164;
    case 19u: goto L_08934174;
    case 20u: goto L_08934184;
    case 21u: goto L_08934188;
    case 22u: goto L_08934190;
    case 23u: goto L_08934194;
    case 24u: goto L_089341C0;
    case 25u: goto L_089341C8;
    case 26u: goto L_089341E8;
    case 27u: goto L_089341EC;
    case 28u: goto L_08934220;
    case 29u: goto L_08934240;
    case 30u: goto L_0893424C;
    case 31u: goto L_08934260;
    case 32u: goto L_0893428C;
    case 33u: goto L_08934290;
    case 34u: goto L_089342A8;
    case 35u: goto L_089342B8;
    case 36u: goto L_089342D4;
    case 37u: goto L_089342E0;
    case 38u: goto L_089342E8;
    case 39u: goto L_089342EC;
    case 40u: goto L_08934310;
    case 41u: goto L_08934334;
    case 42u: goto L_08934348;
    case 43u: goto L_08934354;
    case 44u: goto L_08934378;
    case 45u: goto L_08934384;
    case 46u: goto L_0893438C;
    case 47u: goto L_08934390;
    case 48u: goto L_089343AC;
    case 49u: goto L_089343C0;
    case 50u: goto L_089343C8;
    case 51u: goto L_089343D8;
    case 52u: goto L_089343EC;
    case 53u: goto L_089343F4;
    case 54u: goto L_08934404;
    case 55u: goto L_0893440C;
    case 56u: goto L_08934414;
    case 57u: goto L_0893441C;
    case 58u: goto L_0893442C;
    case 59u: goto L_08934438;
    case 60u: goto L_08934444;
    case 61u: goto L_08934458;
    case 62u: goto L_08934468;
    case 63u: goto L_08934470;
    case 64u: goto L_08934478;
    case 65u: goto L_08934480;
    case 66u: goto L_0893448C;
    case 67u: goto L_08934494;
    case 68u: goto L_0893449C;
    case 69u: goto L_089344A4;
    case 70u: goto L_089344AC;
    case 71u: goto L_089344BC;
    case 72u: goto L_089344D4;
    case 73u: goto L_089344E8;
    case 74u: goto L_089344F8;
    case 75u: goto L_08934500;
    case 76u: goto L_08934508;
    case 77u: goto L_08934510;
    case 78u: goto L_08934518;
    case 79u: goto L_08934520;
    case 80u: goto L_08934530;
    case 81u: goto L_08934538;
    case 82u: goto L_08934540;
    case 83u: goto L_08934550;
    case 84u: goto L_08934580;
    case 85u: goto L_0893458C;
    case 86u: goto L_08934598;
    case 87u: goto L_089345B0;
    case 88u: goto L_089345DC;
    case 89u: goto L_089345FC;
    case 90u: goto L_08934608;
    case 91u: goto L_08934614;
    case 92u: goto L_0893461C;
    case 93u: goto L_08934624;
    case 94u: goto L_08934630;
    case 95u: goto L_08934638;
    case 96u: goto L_08934654;
    case 97u: goto L_08934668;
    case 98u: goto L_08934680;
    case 99u: goto L_0893468C;
    case 100u: goto L_08934698;
    case 101u: goto L_089346A0;
    case 102u: goto L_089346A8;
    case 103u: goto L_089346B4;
    case 104u: goto L_089346BC;
    case 105u: goto L_089346D8;
    case 106u: goto L_089346EC;
    case 107u: goto L_089346FC;
    case 108u: goto L_08934704;
    case 109u: goto L_0893470C;
    case 110u: goto L_0893472C;
    case 111u: goto L_08934734;
    case 112u: goto L_08934748;
    case 113u: goto L_08934768;
    case 114u: goto L_0893477C;
    case 115u: goto L_08934784;
    case 116u: goto L_08934794;
    case 117u: goto L_089347B0;
    case 118u: goto L_089347BC;
    case 119u: goto L_089347C4;
    case 120u: goto L_089347CC;
    case 121u: goto L_089347D4;
    case 122u: goto L_089347F8;
    case 123u: goto L_08934808;
    case 124u: goto L_08934810;
    case 125u: goto L_08934814;
    case 126u: goto L_08934828;
    case 127u: goto L_0893483C;
    case 128u: goto L_08934844;
    case 129u: goto L_0893484C;
    case 130u: goto L_08934854;
    case 131u: goto L_0893485C;
    case 132u: goto L_08934864;
    case 133u: goto L_0893486C;
    case 134u: goto L_08934878;
    case 135u: goto L_08934888;
    case 136u: goto L_089348A4;
    case 137u: goto L_089348AC;
    case 138u: goto L_089348B0;
    case 139u: goto L_089348B8;
    case 140u: goto L_089348C4;
    case 141u: goto L_089348CC;
    case 142u: goto L_089348D0;
    case 143u: goto L_089348D8;
    case 144u: goto L_089348E4;
    case 145u: goto L_089348FC;
    case 146u: goto L_0893491C;
    case 147u: goto L_08934928;
    case 148u: goto L_08934930;
    case 149u: goto L_08934934;
    case 150u: goto L_08934950;
    case 151u: goto L_08934968;
    case 152u: goto L_08934970;
    case 153u: goto L_0893497C;
    case 154u: goto L_08934984;
    case 155u: goto L_08934990;
    case 156u: goto L_089349A8;
    case 157u: goto L_089349BC;
    case 158u: goto L_089349C8;
    case 159u: goto L_089349E0;
    case 160u: goto L_089349EC;
    case 161u: goto L_089349F4;
    case 162u: goto L_089349FC;
    case 163u: goto L_08934A08;
    case 164u: goto L_08934A10;
    case 165u: goto L_08934A1C;
    case 166u: goto L_08934A24;
    case 167u: goto L_08934A78;
    case 168u: goto L_08934AE4;
    case 169u: goto L_08934AEC;
    case 170u: goto L_08934AF4;
    case 171u: goto L_08934AFC;
    case 172u: goto L_08934B0C;
    case 173u: goto L_08934B14;
    case 174u: goto L_08934B1C;
    case 175u: goto L_08934B24;
    case 176u: goto L_08934B2C;
    case 177u: goto L_08934B54;
    case 178u: goto L_08934B6C;
    case 179u: goto L_08934B70;
    case 180u: goto L_08934B9C;
    case 181u: goto L_08934C44;
    case 182u: goto L_08934C60;
    case 183u: goto L_08934C68;
    case 184u: goto L_08934C70;
    case 185u: goto L_08934C78;
    case 186u: goto L_08934CB0;
    case 187u: goto L_08934CB8;
    case 188u: goto L_08934CC0;
    case 189u: goto L_08934CC8;
    case 190u: goto L_08934CD0;
    case 191u: goto L_08934CD8;
    case 192u: goto L_08934CE8;
    case 193u: goto L_08934CF0;
    case 194u: goto L_08934CF4;
    case 195u: goto L_08934CFC;
    case 196u: goto L_08934D08;
    case 197u: goto L_08934D10;
    case 198u: goto L_08934D1C;
    case 199u: goto L_08934D24;
    case 200u: goto L_08934D30;
    case 201u: goto L_08934D3C;
    case 202u: goto L_08934D5C;
    case 203u: goto L_08934D60;
    case 204u: goto L_08934D94;
    case 205u: goto L_08934DA4;
    case 206u: goto L_08934DB0;
    case 207u: goto L_08934DC8;
    case 208u: goto L_08934DD0;
    case 209u: goto L_08934DE0;
    case 210u: goto L_08934DF4;
    case 211u: goto L_08934DFC;
    case 212u: goto L_08934E04;
    case 213u: goto L_08934E10;
    case 214u: goto L_08934E1C;
    case 215u: goto L_08934E24;
    case 216u: goto L_08934E28;
    case 217u: goto L_08934E2C;
    case 218u: goto L_08934E34;
    case 219u: goto L_08934E3C;
    case 220u: goto L_08934E48;
    case 221u: goto L_08934E54;
    case 222u: goto L_08934E60;
    case 223u: goto L_08934E68;
    case 224u: goto L_08934E6C;
    case 225u: goto L_08934E74;
    case 226u: goto L_08934E7C;
    case 227u: goto L_08934E84;
    case 228u: goto L_08934E9C;
    case 229u: goto L_08934EA4;
    case 230u: goto L_08934EAC;
    case 231u: goto L_08934EB4;
    case 232u: goto L_08934EBC;
    case 233u: goto L_08934EDC;
    case 234u: goto L_08934EE4;
    case 235u: goto L_08934EEC;
    case 236u: goto L_08934EF4;
    case 237u: goto L_08934EFC;
    case 238u: goto L_08934F04;
    case 239u: goto L_08934F0C;
    case 240u: goto L_08934F14;
    case 241u: goto L_08934F28;
    case 242u: goto L_08934F40;
    case 243u: goto L_08934F4C;
    case 244u: goto L_08934F58;
    case 245u: goto L_08934F6C;
    case 246u: goto L_08934F74;
    case 247u: goto L_08934F88;
    case 248u: goto L_08934FBC;
    case 249u: goto L_08934FC0;
    case 250u: goto L_08934FC8;
    case 251u: goto L_08934FD4;
    case 252u: goto L_08934FEC;
    case 253u: goto L_08934FF8;
    case 254u: goto L_08935000;
    case 255u: goto L_08935008;
    case 256u: goto L_08935010;
    case 257u: goto L_08935024;
    case 258u: goto L_08935034;
    case 259u: goto L_0893503C;
    case 260u: goto L_08935044;
    case 261u: goto L_08935054;
    case 262u: goto L_0893505C;
    case 263u: goto L_0893506C;
    case 264u: goto L_08935074;
    case 265u: goto L_0893507C;
    case 266u: goto L_08935084;
    case 267u: goto L_08935088;
    case 268u: goto L_08935094;
    case 269u: goto L_0893509C;
    case 270u: goto L_089350C4;
    case 271u: goto L_089350D8;
    case 272u: goto L_089350EC;
    case 273u: goto L_089350F4;
    case 274u: goto L_089350FC;
    case 275u: goto L_08935104;
    case 276u: goto L_08935108;
    case 277u: goto L_08935110;
    case 278u: goto L_08935124;
    case 279u: goto L_08935128;
    case 280u: goto L_08935130;
    case 281u: goto L_08935144;
    case 282u: goto L_08935150;
    case 283u: goto L_08935164;
    case 284u: goto L_0893516C;
    case 285u: goto L_08935174;
    case 286u: goto L_08935178;
    case 287u: goto L_08935180;
    case 288u: goto L_0893518C;
    case 289u: goto L_08935194;
    case 290u: goto L_089351B0;
    case 291u: goto L_089351BC;
    case 292u: goto L_089351C8;
    case 293u: goto L_089351D4;
    case 294u: goto L_089351DC;
    case 295u: goto L_089351F0;
    case 296u: goto L_089351F4;
    case 297u: goto L_089351FC;
    case 298u: goto L_08935210;
    case 299u: goto L_0893521C;
    case 300u: goto L_08935230;
    case 301u: goto L_08935238;
    case 302u: goto L_08935240;
    case 303u: goto L_08935254;
    case 304u: goto L_08935260;
    case 305u: goto L_0893526C;
    case 306u: goto L_08935278;
    case 307u: goto L_08935284;
    case 308u: goto L_0893528C;
    case 309u: goto L_08935298;
    case 310u: goto L_089352A4;
    case 311u: goto L_089352B0;
    case 312u: goto L_089352B8;
    case 313u: goto L_089352C0;
    case 314u: goto L_089352C4;
    case 315u: goto L_089352E4;
    case 316u: goto L_089352FC;
    case 317u: goto L_0893530C;
    case 318u: goto L_08935314;
    case 319u: goto L_08935328;
    case 320u: goto L_0893532C;
    case 321u: goto L_08935334;
    case 322u: goto L_08935348;
    case 323u: goto L_08935354;
    case 324u: goto L_08935368;
    case 325u: goto L_08935370;
    case 326u: goto L_08935378;
    case 327u: goto L_08935384;
    case 328u: goto L_08935390;
    case 329u: goto L_089353A0;
    case 330u: goto L_089353BC;
    case 331u: goto L_089353C4;
    case 332u: goto L_089353D8;
    case 333u: goto L_089353F0;
    case 334u: goto L_089353F8;
    case 335u: goto L_0893540C;
    case 336u: goto L_08935444;
    case 337u: goto L_08935448;
    case 338u: goto L_08935460;
    case 339u: goto L_08935474;
    case 340u: goto L_08935484;
    case 341u: goto L_08935490;
    case 342u: goto L_08935528;
    case 343u: goto L_08935548;
    case 344u: goto L_08935558;
    case 345u: goto L_089355AC;
    case 346u: goto L_089355C8;
    case 347u: goto L_089355D8;
    case 348u: goto L_08935638;
    case 349u: goto L_08935654;
    case 350u: goto L_08935664;
    case 351u: goto L_089356AC;
    case 352u: goto L_089356C8;
    case 353u: goto L_089356D8;
    case 354u: goto L_08935704;
    case 355u: goto L_0893570C;
    case 356u: goto L_08935744;
    case 357u: goto L_0893574C;
    case 358u: goto L_08935760;
    case 359u: goto L_08935768;
    case 360u: goto L_08935770;
    case 361u: goto L_08935778;
    case 362u: goto L_08935784;
    case 363u: goto L_0893578C;
    case 364u: goto L_08935790;
    case 365u: goto L_0893579C;
    case 366u: goto L_089357BC;
    case 367u: goto L_089357C4;
    case 368u: goto L_089357CC;
    case 369u: goto L_089357D4;
    case 370u: goto L_089357FC;
    case 371u: goto L_08935804;
    case 372u: goto L_0893580C;
    case 373u: goto L_08935814;
    case 374u: goto L_0893582C;
    case 375u: goto L_08935848;
    case 376u: goto L_08935854;
    case 377u: goto L_08935864;
    case 378u: goto L_08935870;
    case 379u: goto L_0893587C;
    case 380u: goto L_08935884;
    case 381u: goto L_0893588C;
    case 382u: goto L_08935898;
    case 383u: goto L_089358A4;
    case 384u: goto L_089358B0;
    case 385u: goto L_089358BC;
    case 386u: goto L_089358C4;
    case 387u: goto L_089358C8;
    case 388u: goto L_089358D0;
    case 389u: goto L_089358D8;
    case 390u: goto L_089358E8;
    case 391u: goto L_089358F0;
    case 392u: goto L_089358F8;
    case 393u: goto L_08935904;
    case 394u: goto L_08935910;
    case 395u: goto L_0893591C;
    case 396u: goto L_08935924;
    case 397u: goto L_08935928;
    case 398u: goto L_08935930;
    case 399u: goto L_08935938;
    case 400u: goto L_08935948;
    case 401u: goto L_08935950;
    case 402u: goto L_0893595C;
    case 403u: goto L_08935968;
    case 404u: goto L_08935974;
    case 405u: goto L_08935980;
    case 406u: goto L_08935988;
    case 407u: goto L_0893598C;
    case 408u: goto L_08935994;
    case 409u: goto L_0893599C;
    case 410u: goto L_089359AC;
    case 411u: goto L_089359B8;
    case 412u: goto L_089359C4;
    case 413u: goto L_089359D0;
    case 414u: goto L_089359D8;
    case 415u: goto L_089359DC;
    case 416u: goto L_089359E4;
    case 417u: goto L_089359EC;
    case 418u: goto L_089359FC;
    case 419u: goto L_08935A04;
    case 420u: goto L_08935A1C;
    case 421u: goto L_08935A34;
    case 422u: goto L_08935A3C;
    case 423u: goto L_08935A48;
    case 424u: goto L_08935A54;
    case 425u: goto L_08935A5C;
    case 426u: goto L_08935A64;
    case 427u: goto L_08935A6C;
    case 428u: goto L_08935A74;
    case 429u: goto L_08935A7C;
    case 430u: goto L_08935AA4;
    case 431u: goto L_08935AC0;
    case 432u: goto L_08935AC8;
    case 433u: goto L_08935AE0;
    case 434u: goto L_08935AEC;
    case 435u: goto L_08935B00;
    case 436u: goto L_08935B08;
    case 437u: goto L_08935B10;
    case 438u: goto L_08935B30;
    case 439u: goto L_08935B38;
    case 440u: goto L_08935B40;
    case 441u: goto L_08935B48;
    case 442u: goto L_08935B5C;
    case 443u: goto L_08935BF4;
    case 444u: goto L_08935BFC;
    case 445u: goto L_08935C04;
    case 446u: goto L_08935C0C;
    case 447u: goto L_08935C14;
    case 448u: goto L_08935C1C;
    case 449u: goto L_08935C24;
    case 450u: goto L_08935C34;
    case 451u: goto L_08935C3C;
    case 452u: goto L_08935C54;
    case 453u: goto L_08935C5C;
    case 454u: goto L_08935C70;
    case 455u: goto L_08935C88;
    case 456u: goto L_08935CAC;
    case 457u: goto L_08935CB4;
    case 458u: goto L_08935CBC;
    case 459u: goto L_08935CCC;
    case 460u: goto L_08935CD8;
    case 461u: goto L_08935CDC;
    case 462u: goto L_08935CE0;
    case 463u: goto L_08935CE8;
    case 464u: goto L_08935CF0;
    case 465u: goto L_08935CFC;
    case 466u: goto L_08935D04;
    case 467u: goto L_08935D0C;
    case 468u: goto L_08935D10;
    case 469u: goto L_08935D18;
    case 470u: goto L_08935D20;
    case 471u: goto L_08935D28;
    case 472u: goto L_08935D30;
    case 473u: goto L_08935D40;
    case 474u: goto L_08935D4C;
    case 475u: goto L_08935D50;
    case 476u: goto L_08935D54;
    case 477u: goto L_08935D5C;
    case 478u: goto L_08935D64;
    case 479u: goto L_08935D70;
    case 480u: goto L_08935D78;
    case 481u: goto L_08935D80;
    case 482u: goto L_08935D88;
    case 483u: goto L_08935DA0;
    case 484u: goto L_08935DC4;
    case 485u: goto L_08935DD0;
    case 486u: goto L_08935DE8;
    case 487u: goto L_08935E0C;
    case 488u: goto L_08935E20;
    case 489u: goto L_08935E28;
    case 490u: goto L_08935E4C;
    case 491u: goto L_08935E5C;
    case 492u: goto L_08935E64;
    case 493u: goto L_08935E7C;
    case 494u: goto L_08935E84;
    case 495u: goto L_08935E90;
    case 496u: goto L_08935EA4;
    case 497u: goto L_08935EAC;
    case 498u: goto L_08935EB8;
    case 499u: goto L_08935EC0;
    case 500u: goto L_08935ED4;
    case 501u: goto L_08935EE8;
    case 502u: goto L_08935F04;
    case 503u: goto L_08935F0C;
    case 504u: goto L_08935F14;
    case 505u: goto L_08935F20;
    case 506u: goto L_08935F3C;
    case 507u: goto L_08935F44;
    case 508u: goto L_08935F4C;
    case 509u: goto L_08935F58;
    case 510u: goto L_08935F6C;
    case 511u: goto L_08935F74;
    case 512u: goto L_08935F80;
    case 513u: goto L_08935F88;
    case 514u: goto L_08935F90;
    case 515u: goto L_08935F98;
    case 516u: goto L_08935FA0;
    case 517u: goto L_08935FA4;
    case 518u: goto L_08935FAC;
    case 519u: goto L_08935FB4;
    case 520u: goto L_08935FBC;
    case 521u: goto L_08935FC0;
    case 522u: goto L_08935FC8;
    case 523u: goto L_08935FD4;
    case 524u: goto L_08935FDC;
    case 525u: goto L_08935FE4;
    case 526u: goto L_08935FEC;
    case 527u: goto L_08935FF4;
    case 528u: goto L_08935FFC;
    case 529u: goto L_08936004;
    case 530u: goto L_08936010;
    case 531u: goto L_08936018;
    case 532u: goto L_08936020;
    case 533u: goto L_0893602C;
    case 534u: goto L_08936034;
    case 535u: goto L_0893603C;
    case 536u: goto L_08936044;
    case 537u: goto L_0893604C;
    case 538u: goto L_0893605C;
    case 539u: goto L_08936064;
    case 540u: goto L_0893606C;
    case 541u: goto L_0893608C;
    case 542u: goto L_0893609C;
    case 543u: goto L_089360A4;
    case 544u: goto L_089360B0;
    case 545u: goto L_089360B8;
    case 546u: goto L_089360BC;
    case 547u: goto L_089360C4;
    case 548u: goto L_089360CC;
    case 549u: goto L_089360D4;
    case 550u: goto L_089360E0;
    case 551u: goto L_089360E8;
    case 552u: goto L_089360EC;
    case 553u: goto L_089360F4;
    case 554u: goto L_089360FC;
    case 555u: goto L_08936108;
    case 556u: goto L_08936110;
    case 557u: goto L_08936114;
    case 558u: goto L_0893611C;
    case 559u: goto L_08936124;
    case 560u: goto L_08936130;
    case 561u: goto L_08936138;
    case 562u: goto L_08936148;
    case 563u: goto L_08936150;
    case 564u: goto L_08936158;
    case 565u: goto L_08936160;
    case 566u: goto L_08936168;
    case 567u: goto L_08936170;
    case 568u: goto L_08936178;
    case 569u: goto L_08936184;
    case 570u: goto L_0893618C;
    case 571u: goto L_08936190;
    case 572u: goto L_08936198;
    case 573u: goto L_089361A4;
    case 574u: goto L_089361AC;
    case 575u: goto L_089361B4;
    case 576u: goto L_089361BC;
    case 577u: goto L_089361C4;
    case 578u: goto L_089361CC;
    case 579u: goto L_089361D4;
    case 580u: goto L_089361FC;
    case 581u: goto L_08936204;
    case 582u: goto L_0893620C;
    case 583u: goto L_08936214;
    case 584u: goto L_0893621C;
    case 585u: goto L_08936224;
    case 586u: goto L_0893622C;
    case 587u: goto L_08936234;
    case 588u: goto L_0893623C;
    case 589u: goto L_08936244;
    case 590u: goto L_08936250;
    case 591u: goto L_0893627C;
    case 592u: goto L_08936288;
    case 593u: goto L_08936294;
    case 594u: goto L_089362A4;
    case 595u: goto L_089362B0;
    case 596u: goto L_089362C0;
    case 597u: goto L_089362C8;
    case 598u: goto L_089362D0;
    case 599u: goto L_089362DC;
    case 600u: goto L_089362E4;
    case 601u: goto L_089362F0;
    case 602u: goto L_0893631C;
    case 603u: goto L_08936338;
    case 604u: goto L_08936344;
    case 605u: goto L_08936350;
    case 606u: goto L_08936358;
    case 607u: goto L_08936360;
    case 608u: goto L_08936368;
    case 609u: goto L_08936370;
    case 610u: goto L_08936374;
    case 611u: goto L_08936380;
    case 612u: goto L_08936388;
    case 613u: goto L_08936390;
    case 614u: goto L_08936398;
    case 615u: goto L_0893639C;
    case 616u: goto L_089363A4;
    case 617u: goto L_089363AC;
    case 618u: goto L_089363B4;
    case 619u: goto L_089363BC;
    case 620u: goto L_089363DC;
    case 621u: goto L_089363F8;
    case 622u: goto L_08936418;
    case 623u: goto L_08936428;
    case 624u: goto L_08936444;
    case 625u: goto L_08936454;
    case 626u: goto L_0893645C;
    case 627u: goto L_0893647C;
    case 628u: goto L_0893648C;
    case 629u: goto L_089364A8;
    case 630u: goto L_089364B8;
    case 631u: goto L_089364D4;
    case 632u: goto L_089364E4;
    case 633u: goto L_08936500;
    case 634u: goto L_08936510;
    case 635u: goto L_0893651C;
    case 636u: goto L_08936528;
    case 637u: goto L_08936530;
    case 638u: goto L_08936538;
    case 639u: goto L_08936544;
    case 640u: goto L_0893654C;
    case 641u: goto L_08936550;
    case 642u: goto L_08936558;
    case 643u: goto L_08936564;
    case 644u: goto L_0893656C;
    case 645u: goto L_08936578;
    case 646u: goto L_08936580;
    case 647u: goto L_08936588;
    case 648u: goto L_08936590;
    case 649u: goto L_08936598;
    case 650u: goto L_089365BC;
    case 651u: goto L_089365D8;
    case 652u: goto L_089365E8;
    case 653u: goto L_089365F0;
    case 654u: goto L_089365F8;
    case 655u: goto L_08936600;
    case 656u: goto L_0893660C;
    case 657u: goto L_08936618;
    case 658u: goto L_08936620;
    case 659u: goto L_08936628;
    case 660u: goto L_08936634;
    case 661u: goto L_0893663C;
    case 662u: goto L_08936644;
    case 663u: goto L_08936660;
    case 664u: goto L_08936674;
    case 665u: goto L_08936690;
    case 666u: goto L_089366B8;
    case 667u: goto L_089366C8;
    case 668u: goto L_089366D8;
    case 669u: goto L_089366EC;
    case 670u: goto L_089366F8;
    case 671u: goto L_08936700;
    case 672u: goto L_08936708;
    case 673u: goto L_08936710;
    case 674u: goto L_0893671C;
    case 675u: goto L_08936730;
    case 676u: goto L_08936748;
    case 677u: goto L_08936750;
    case 678u: goto L_08936758;
    case 679u: goto L_08936760;
    case 680u: goto L_08936768;
    case 681u: goto L_08936770;
    case 682u: goto L_089367B8;
    case 683u: goto L_089367C0;
    case 684u: goto L_089367C8;
    case 685u: goto L_089367D0;
    case 686u: goto L_089367D8;
    case 687u: goto L_089367E0;
    case 688u: goto L_089367E8;
    case 689u: goto L_089367F0;
    case 690u: goto L_089367F8;
    case 691u: goto L_08936800;
    case 692u: goto L_08936804;
    case 693u: goto L_08936810;
    case 694u: goto L_0893681C;
    case 695u: goto L_08936834;
    case 696u: goto L_08936838;
    case 697u: goto L_08936850;
    case 698u: goto L_0893685C;
    case 699u: goto L_08936864;
    case 700u: goto L_08936880;
    case 701u: goto L_08936898;
    case 702u: goto L_089368B8;
    case 703u: goto L_089368C4;
    case 704u: goto L_089368CC;
    case 705u: goto L_089368D4;
    case 706u: goto L_089368DC;
    case 707u: goto L_089368E0;
    case 708u: goto L_089368EC;
    case 709u: goto L_089368F8;
    case 710u: goto L_08936900;
    case 711u: goto L_08936908;
    case 712u: goto L_08936910;
    case 713u: goto L_08936918;
    case 714u: goto L_08936920;
    case 715u: goto L_08936928;
    case 716u: goto L_08936930;
    case 717u: goto L_08936938;
    case 718u: goto L_08936940;
    case 719u: goto L_08936948;
    case 720u: goto L_0893695C;
    case 721u: goto L_08936964;
    case 722u: goto L_0893696C;
    case 723u: goto L_08936974;
    case 724u: goto L_08936980;
    case 725u: goto L_08936988;
    case 726u: goto L_08936990;
    case 727u: goto L_089369A8;
    case 728u: goto L_089369BC;
    case 729u: goto L_089369CC;
    case 730u: goto L_089369DC;
    case 731u: goto L_089369F0;
    case 732u: goto L_08936A00;
    case 733u: goto L_08936A10;
    case 734u: goto L_08936A20;
    case 735u: goto L_08936A30;
    case 736u: goto L_08936A40;
    case 737u: goto L_08936A50;
    case 738u: goto L_08936A60;
    case 739u: goto L_08936A70;
    case 740u: goto L_08936A84;
    case 741u: goto L_08936A98;
    case 742u: goto L_08936AAC;
    case 743u: goto L_08936ABC;
    case 744u: goto L_08936ACC;
    case 745u: goto L_08936AD4;
    case 746u: goto L_08936ADC;
    case 747u: goto L_08936AE4;
    case 748u: goto L_08936AF0;
    case 749u: goto L_08936AF8;
    case 750u: goto L_08936B00;
    case 751u: goto L_08936B0C;
    case 752u: goto L_08936B14;
    case 753u: goto L_08936B1C;
    case 754u: goto L_08936B28;
    case 755u: goto L_08936B30;
    case 756u: goto L_08936B38;
    case 757u: goto L_08936B40;
    case 758u: goto L_08936B4C;
    case 759u: goto L_08936B54;
    case 760u: goto L_08936B5C;
    case 761u: goto L_08936B78;
    case 762u: goto L_08936B84;
    case 763u: goto L_08936B8C;
    case 764u: goto L_08936B90;
    case 765u: goto L_08936B9C;
    case 766u: goto L_08936BA8;
    case 767u: goto L_08936BB0;
    case 768u: goto L_08936BB8;
    case 769u: goto L_08936BC0;
    case 770u: goto L_08936BCC;
    case 771u: goto L_08936BD8;
    case 772u: goto L_08936BE4;
    case 773u: goto L_08936BEC;
    case 774u: goto L_08936BF0;
    case 775u: goto L_08936BF4;
    case 776u: goto L_08936BFC;
    case 777u: goto L_08936C0C;
    case 778u: goto L_08936C18;
    case 779u: goto L_08936C24;
    case 780u: goto L_08936C30;
    case 781u: goto L_08936C38;
    case 782u: goto L_08936C3C;
    case 783u: goto L_08936C44;
    case 784u: goto L_08936C54;
    case 785u: goto L_08936C60;
    case 786u: goto L_08936C6C;
    case 787u: goto L_08936C78;
    case 788u: goto L_08936C80;
    case 789u: goto L_08936C84;
    case 790u: goto L_08936C8C;
    case 791u: goto L_08936CA0;
    case 792u: goto L_08936CC0;
    case 793u: goto L_08936CC8;
    case 794u: goto L_08936CD8;
    case 795u: goto L_08936CE4;
    case 796u: goto L_08936CF0;
    case 797u: goto L_08936CFC;
    case 798u: goto L_08936D04;
    case 799u: goto L_08936D08;
    case 800u: goto L_08936D10;
    case 801u: goto L_08936D20;
    case 802u: goto L_08936D2C;
    case 803u: goto L_08936D38;
    case 804u: goto L_08936D44;
    case 805u: goto L_08936D4C;
    case 806u: goto L_08936D50;
    case 807u: goto L_08936D58;
    case 808u: goto L_08936D6C;
    case 809u: goto L_08936D8C;
    case 810u: goto L_08936D94;
    case 811u: goto L_08936DA0;
    case 812u: goto L_08936DA8;
    case 813u: goto L_08936DB0;
    case 814u: goto L_08936DB8;
    case 815u: goto L_08936DD8;
    case 816u: goto L_08936DE0;
    case 817u: goto L_08936DF0;
    case 818u: goto L_08936E04;
    case 819u: goto L_08936E0C;
    case 820u: goto L_08936E2C;
    case 821u: goto L_08936E44;
    case 822u: goto L_08936E4C;
    case 823u: goto L_08936E60;
    case 824u: goto L_08936E68;
    case 825u: goto L_08936E74;
    case 826u: goto L_08936E80;
    case 827u: goto L_08936E8C;
    case 828u: goto L_08936E94;
    case 829u: goto L_08936E98;
    case 830u: goto L_08936E9C;
    case 831u: goto L_08936EA4;
    case 832u: goto L_08936EA8;
    case 833u: goto L_08936EB0;
    case 834u: goto L_08936EB8;
    case 835u: goto L_08936EC0;
    case 836u: goto L_08936EC8;
    case 837u: goto L_08936ED0;
    case 838u: goto L_08936ED8;
    case 839u: goto L_08936EEC;
    case 840u: goto L_08936EFC;
    case 841u: goto L_08936F04;
    case 842u: goto L_08936F0C;
    case 843u: goto L_08936F1C;
    case 844u: goto L_08936F28;
    case 845u: goto L_08936F30;
    case 846u: goto L_08936F38;
    case 847u: goto L_08936F40;
    case 848u: goto L_08936F44;
    case 849u: goto L_08936F58;
    case 850u: goto L_08936F90;
    case 851u: goto L_08936FA0;
    case 852u: goto L_08936FA8;
    case 853u: goto L_08936FB0;
    case 854u: goto L_08936FB8;
    case 855u: goto L_08936FC4;
    case 856u: goto L_08936FD0;
    case 857u: goto L_08936FD8;
    case 858u: goto L_08936FE4;
    case 859u: goto L_08936FF8;
    case 860u: goto L_08937000;
    case 861u: goto L_08937008;
    case 862u: goto L_08937010;
    case 863u: goto L_08937018;
    case 864u: goto L_0893701C;
    case 865u: goto L_08937024;
    case 866u: goto L_08937030;
    case 867u: goto L_08937038;
    case 868u: goto L_0893704C;
    case 869u: goto L_08937074;
    case 870u: goto L_0893707C;
    case 871u: goto L_08937080;
    case 872u: goto L_08937088;
    case 873u: goto L_0893709C;
    case 874u: goto L_089370AC;
    case 875u: goto L_089370B8;
    case 876u: goto L_089370BC;
    case 877u: goto L_089370CC;
    case 878u: goto L_089370E0;
    case 879u: goto L_08937188;
    case 880u: goto L_089371CC;
    case 881u: goto L_089371D0;
    case 882u: goto L_089371E8;
    case 883u: goto L_08937228;
    case 884u: goto L_08937234;
    case 885u: goto L_08937240;
    case 886u: goto L_0893726C;
    case 887u: goto L_08937288;
    case 888u: goto L_08937290;
    case 889u: goto L_08937294;
    case 890u: goto L_089372C0;
    case 891u: goto L_089372F8;
    case 892u: goto L_08937304;
    case 893u: goto L_08937310;
    case 894u: goto L_08937318;
    case 895u: goto L_0893731C;
    case 896u: goto L_08937320;
    case 897u: goto L_08937328;
    case 898u: goto L_08937330;
    case 899u: goto L_0893733C;
    case 900u: goto L_08937348;
    case 901u: goto L_08937354;
    case 902u: goto L_0893735C;
    case 903u: goto L_08937360;
    case 904u: goto L_08937364;
    case 905u: goto L_08937370;
    case 906u: goto L_08937378;
    case 907u: goto L_08937380;
    case 908u: goto L_089373A0;
    case 909u: goto L_089373A8;
    case 910u: goto L_089373B0;
    case 911u: goto L_089373BC;
    case 912u: goto L_089373C8;
    case 913u: goto L_089373CC;
    case 914u: goto L_089373E0;
    case 915u: goto L_089373F0;
    case 916u: goto L_08937400;
    case 917u: goto L_08937408;
    case 918u: goto L_08937410;
    case 919u: goto L_08937418;
    case 920u: goto L_0893742C;
    case 921u: goto L_08937434;
    case 922u: goto L_0893743C;
    case 923u: goto L_08937444;
    case 924u: goto L_08937458;
    case 925u: goto L_08937460;
    case 926u: goto L_08937474;
    case 927u: goto L_0893747C;
    case 928u: goto L_08937490;
    case 929u: goto L_08937494;
    case 930u: goto L_0893749C;
    case 931u: goto L_089374B0;
    case 932u: goto L_089374DC;
    case 933u: goto L_089374F4;
    case 934u: goto L_08937500;
    case 935u: goto L_08937508;
    case 936u: goto L_0893751C;
    case 937u: goto L_08937544;
    case 938u: goto L_08937558;
    case 939u: goto L_08937570;
    case 940u: goto L_0893757C;
    case 941u: goto L_08937590;
    case 942u: goto L_089375AC;
    case 943u: goto L_089375B0;
    case 944u: goto L_089375B8;
    case 945u: goto L_089375C0;
    case 946u: goto L_089375E4;
    case 947u: goto L_089375EC;
    case 948u: goto L_08937600;
    case 949u: goto L_08937624;
    case 950u: goto L_0893762C;
    case 951u: goto L_08937640;
    case 952u: goto L_08937678;
    case 953u: goto L_08937680;
    case 954u: goto L_08937684;
    case 955u: goto L_0893768C;
    case 956u: goto L_089376A0;
    case 957u: goto L_089376A8;
    case 958u: goto L_089376B0;
    case 959u: goto L_089376B8;
    case 960u: goto L_089376C4;
    case 961u: goto L_089376EC;
    case 962u: goto L_089376F4;
    case 963u: goto L_0893771C;
    case 964u: goto L_08937724;
    case 965u: goto L_0893772C;
    case 966u: goto L_08937734;
    case 967u: goto L_08937740;
    case 968u: goto L_0893774C;
    case 969u: goto L_08937758;
    case 970u: goto L_08937764;
    case 971u: goto L_0893776C;
    case 972u: goto L_08937770;
    case 973u: goto L_08937774;
    case 974u: goto L_08937780;
    case 975u: goto L_08937790;
    case 976u: goto L_08937798;
    case 977u: goto L_089377A4;
    case 978u: goto L_089377B0;
    case 979u: goto L_089377BC;
    case 980u: goto L_089377C4;
    case 981u: goto L_089377C8;
    case 982u: goto L_089377D0;
    case 983u: goto L_089377D8;
    case 984u: goto L_089377E8;
    case 985u: goto L_089377F4;
    case 986u: goto L_08937804;
    case 987u: goto L_0893780C;
    case 988u: goto L_08937810;
    case 989u: goto L_08937818;
    case 990u: goto L_0893782C;
    case 991u: goto L_08937838;
    case 992u: goto L_08937850;
    case 993u: goto L_08937878;
    case 994u: goto L_08937880;
    case 995u: goto L_089378A8;
    case 996u: goto L_089378AC;
    case 997u: goto L_089378B4;
    case 998u: goto L_089378C0;
    case 999u: goto L_089378CC;
    case 1000u: goto L_089378D4;
    case 1001u: goto L_089378D8;
    case 1002u: goto L_089378E0;
    case 1003u: goto L_089378E8;
    case 1004u: goto L_089378F8;
    case 1005u: goto L_08937900;
    case 1006u: goto L_08937910;
    case 1007u: goto L_08937920;
    case 1008u: goto L_08937928;
    case 1009u: goto L_08937930;
    case 1010u: goto L_08937938;
    case 1011u: goto L_08937944;
    case 1012u: goto L_08937950;
    case 1013u: goto L_08937958;
    case 1014u: goto L_08937964;
    case 1015u: goto L_08937970;
    case 1016u: goto L_08937980;
    case 1017u: goto L_08937988;
    case 1018u: goto L_08937990;
    case 1019u: goto L_08937998;
    case 1020u: goto L_089379A0;
    case 1021u: goto L_089379B0;
    case 1022u: goto L_089379B8;
    case 1023u: goto L_089379BC;
    case 1024u: goto L_089379C4;
    case 1025u: goto L_089379CC;
    case 1026u: goto L_089379D4;
    case 1027u: goto L_089379E4;
    case 1028u: goto L_089379EC;
    case 1029u: goto L_089379F0;
    case 1030u: goto L_089379F8;
    case 1031u: goto L_08937A28;
    case 1032u: goto L_08937A58;
    case 1033u: goto L_08937A64;
    case 1034u: goto L_08937A84;
    case 1035u: goto L_08937A8C;
    case 1036u: goto L_08937A94;
    case 1037u: goto L_08937AA0;
    case 1038u: goto L_08937AA8;
    case 1039u: goto L_08937AB0;
    case 1040u: goto L_08937AC4;
    case 1041u: goto L_08937AD0;
    case 1042u: goto L_08937AD8;
    case 1043u: goto L_08937AE4;
    case 1044u: goto L_08937AF4;
    case 1045u: goto L_08937B00;
    case 1046u: goto L_08937B08;
    case 1047u: goto L_08937B10;
    case 1048u: goto L_08937B1C;
    case 1049u: goto L_08937B30;
    case 1050u: goto L_08937B38;
    case 1051u: goto L_08937B4C;
    case 1052u: goto L_08937B50;
    case 1053u: goto L_08937B58;
    case 1054u: goto L_08937B64;
    case 1055u: goto L_08937B6C;
    case 1056u: goto L_08937B74;
    case 1057u: goto L_08937B7C;
    case 1058u: goto L_08937B80;
    case 1059u: goto L_08937B88;
    case 1060u: goto L_08937B90;
    case 1061u: goto L_08937B9C;
    case 1062u: goto L_08937BA8;
    case 1063u: goto L_08937BB0;
    case 1064u: goto L_08937BB4;
    case 1065u: goto L_08937BC0;
    case 1066u: goto L_08937BCC;
    case 1067u: goto L_08937BD8;
    case 1068u: goto L_08937BE0;
    case 1069u: goto L_08937BEC;
    case 1070u: goto L_08937BF4;
    case 1071u: goto L_08937BFC;
    case 1072u: goto L_08937C04;
    case 1073u: goto L_08937C10;
    case 1074u: goto L_08937C18;
    case 1075u: goto L_08937C24;
    case 1076u: goto L_08937C30;
    case 1077u: goto L_08937C38;
    case 1078u: goto L_08937C40;
    case 1079u: goto L_08937C4C;
    case 1080u: goto L_08937C5C;
    case 1081u: goto L_08937C64;
    case 1082u: goto L_08937C6C;
    case 1083u: goto L_08937C7C;
    case 1084u: goto L_08937C84;
    case 1085u: goto L_08937C8C;
    case 1086u: goto L_08937C94;
    case 1087u: goto L_08937CA0;
    case 1088u: goto L_08937CAC;
    case 1089u: goto L_08937CB8;
    case 1090u: goto L_08937CCC;
    case 1091u: goto L_08937CD4;
    case 1092u: goto L_08937CEC;
    case 1093u: goto L_08937CF8;
    case 1094u: goto L_08937D0C;
    case 1095u: goto L_08937D14;
    case 1096u: goto L_08937D24;
    case 1097u: goto L_08937D34;
    case 1098u: goto L_08937D3C;
    case 1099u: goto L_08937D44;
    case 1100u: goto L_08937D4C;
    case 1101u: goto L_08937D54;
    case 1102u: goto L_08937D5C;
    case 1103u: goto L_08937D68;
    case 1104u: goto L_08937D78;
    case 1105u: goto L_08937D84;
    case 1106u: goto L_08937D8C;
    case 1107u: goto L_08937D94;
    case 1108u: goto L_08937DB4;
    case 1109u: goto L_08937DBC;
    case 1110u: goto L_08937E0C;
    case 1111u: goto L_08937E14;
    case 1112u: goto L_08937E24;
    case 1113u: goto L_08937E34;
    case 1114u: goto L_08937E3C;
    case 1115u: goto L_08937E44;
    case 1116u: goto L_08937E4C;
    case 1117u: goto L_08937E54;
    case 1118u: goto L_08937E5C;
    case 1119u: goto L_08937E64;
    case 1120u: goto L_08937E6C;
    case 1121u: goto L_08937EB8;
    case 1122u: goto L_08937EC0;
    case 1123u: goto L_08937EC8;
    case 1124u: goto L_08937ED8;
    case 1125u: goto L_08937EE0;
    case 1126u: goto L_08937EE8;
    case 1127u: goto L_08937EF4;
    case 1128u: goto L_08937F04;
    case 1129u: goto L_08937F0C;
    case 1130u: goto L_08937F14;
    case 1131u: goto L_08937F1C;
    case 1132u: goto L_08937F24;
    case 1133u: goto L_08937F2C;
    case 1134u: goto L_08937F34;
    case 1135u: goto L_08937F3C;
    case 1136u: goto L_08937F48;
    case 1137u: goto L_08937F50;
    case 1138u: goto L_08937F58;
    case 1139u: goto L_08937F68;
    case 1140u: goto L_08937F78;
    case 1141u: goto L_08937F80;
    case 1142u: goto L_08937F88;
    case 1143u: goto L_08937F94;
    case 1144u: goto L_08937F9C;
    case 1145u: goto L_08937FA0;
    case 1146u: goto L_08937FC8;
    case 1147u: goto L_08937FD8;
    case 1148u: goto L_08937FE0;
    case 1149u: goto L_08937FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08934000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08934024u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934024u) goto L_08934024;
    return;
L_08934024:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    goto L_0893402C;
L_0893402C:
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
L_08934048:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089340C0;
      }
      goto L_08934084;
    }
L_08934084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08934090u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 722u, 0x088BB7D4u>(ctx, &aot_mem) && ctx.pc == 0x08934090u) goto L_08934090;
    return;
L_08934090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0893409Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x0893409Cu) goto L_0893409C;
    return;
L_0893409C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934084;
      }
      goto L_089340C0;
    }
L_089340C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089340D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
        goto L_08934144;
    }
    goto L_08934108;
L_08934108:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08934114;
L_08934114:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
        goto L_08934134;
    }
    goto L_08934124;
L_08934124:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08934138;
      }
      goto L_08934134;
    }
L_08934134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08934138;
L_08934138:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08934114;
    }
    goto L_08934140;
L_08934140:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    goto L_08934144;
L_08934144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
        goto L_08934194;
    }
    goto L_08934158;
L_08934158:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08934164;
L_08934164:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08934184;
    }
    goto L_08934174;
L_08934174:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08934188;
      }
      goto L_08934184;
    }
L_08934184:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08934188;
L_08934188:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08934164;
    }
    goto L_08934190;
L_08934190:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    goto L_08934194;
L_08934194:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089341EC;
      }
      goto L_089341C0;
    }
L_089341C0:
    ctx.gpr[31] = (0x089341C8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x089341C8u) goto L_089341C8;
    return;
L_089341C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089341C0;
      }
      goto L_089341E8;
    }
L_089341E8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089341EC;
L_089341EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893428C;
      }
      goto L_08934220;
    }
L_08934220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08934290;
    }
    goto L_08934240;
L_08934240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934310;
      }
      goto L_0893424C;
    }
L_0893424C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08934260u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 462u, 0x08B6AA64u>(ctx, &aot_mem) && ctx.pc == 0x08934260u) goto L_08934260;
    return;
L_08934260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08934310;
      }
      goto L_0893428C;
    }
L_0893428C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08934290;
L_08934290:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08934310;
      }
      goto L_089342A8;
    }
L_089342A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x089342B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x089342B8u) goto L_089342B8;
    return;
L_089342B8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x089342D4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 484u, 0x08B6AC34u>(ctx, &aot_mem) && ctx.pc == 0x089342D4u) goto L_089342D4;
    return;
L_089342D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089342EC;
    }
    goto L_089342E0;
L_089342E0:
    ctx.gpr[31] = (0x089342E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x089342E8u) goto L_089342E8;
    return;
L_089342E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089342EC;
L_089342EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089342A8;
      }
      goto L_08934310;
    }
L_08934310:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08934348u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_089340D4;
L_08934348:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08934378u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08934378u) goto L_08934378;
    return;
L_08934378:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934390;
      }
      goto L_08934384;
    }
L_08934384:
    ctx.gpr[31] = (0x0893438Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 384u, 0x08B19834u>(ctx, &aot_mem) && ctx.pc == 0x0893438Cu) goto L_0893438C;
    return;
L_0893438C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08934390;
L_08934390:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
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
L_089343AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089343C8;
      }
      goto L_089343C0;
    }
L_089343C0:
    ctx.gpr[31] = (0x089343C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x089343C8u) goto L_089343C8;
    return;
L_089343C8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089343D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089343F4;
      }
      goto L_089343EC;
    }
L_089343EC:
    ctx.gpr[31] = (0x089343F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x089343F4u) goto L_089343F4;
    return;
L_089343F4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934404:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893440C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934414:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893441C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893442Cu);
    // nop
    ctx.pc = 0x08B73224u;
    return;
L_0893442C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934438:
    ctx.gpr[2] = (0u | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4189), static_cast<std::uint8_t>(ctx.gpr[2]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08934458u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08934458u) goto L_08934458;
    return;
L_08934458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    ctx.gpr[16] = (2236u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(31984));
      if (branch_taken) {
          goto L_08934470;
      }
      goto L_08934468;
    }
L_08934468:
    ctx.gpr[31] = (0x08934470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08934470u) goto L_08934470;
    return;
L_08934470:
    ctx.gpr[31] = (0x08934478u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 121u, 0x08954778u>(ctx, &aot_mem) && ctx.pc == 0x08934478u) goto L_08934478;
    return;
L_08934478:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893448C;
      }
      goto L_08934480;
    }
L_08934480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    ctx.gpr[31] = (0x0893448Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 507u, 0x089567C0u>(ctx, &aot_mem) && ctx.pc == 0x0893448Cu) goto L_0893448C;
    return;
L_0893448C:
    ctx.gpr[31] = (0x08934494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem) && ctx.pc == 0x08934494u) goto L_08934494;
    return;
L_08934494:
    ctx.gpr[31] = (0x0893449Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 641u, 0x08ABEFDCu>(ctx, &aot_mem) && ctx.pc == 0x0893449Cu) goto L_0893449C;
    return;
L_0893449C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089344AC;
      }
      goto L_089344A4;
    }
L_089344A4:
    ctx.gpr[31] = (0x089344ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 650u, 0x08ABF048u>(ctx, &aot_mem) && ctx.pc == 0x089344ACu) goto L_089344AC;
    return;
L_089344AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089344BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19632)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934538;
      }
      goto L_089344D4;
    }
L_089344D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089344E8u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19632), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08934444;
L_089344E8:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    ctx.gpr[31] = (0x089344F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 620u, 0x08ABEE2Cu>(ctx, &aot_mem) && ctx.pc == 0x089344F8u) goto L_089344F8;
    return;
L_089344F8:
    ctx.gpr[31] = (0x08934500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 746u, 0x0887F804u>(ctx, &aot_mem) && ctx.pc == 0x08934500u) goto L_08934500;
    return;
L_08934500:
    ctx.gpr[31] = (0x08934508u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 694u, 0x08AD3BD0u>(ctx, &aot_mem) && ctx.pc == 0x08934508u) goto L_08934508;
    return;
L_08934508:
    ctx.gpr[31] = (0x08934510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem) && ctx.pc == 0x08934510u) goto L_08934510;
    return;
L_08934510:
    ctx.gpr[31] = (0x08934518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 620u, 0x08ABEE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08934518u) goto L_08934518;
    return;
L_08934518:
    ctx.gpr[31] = (0x08934520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 746u, 0x0887F804u>(ctx, &aot_mem) && ctx.pc == 0x08934520u) goto L_08934520;
    return;
L_08934520:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19632), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08934530u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08934530u) goto L_08934530;
    return;
L_08934530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934540;
      }
      goto L_08934538;
    }
L_08934538:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19632), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (0u | 0u);
    goto L_08934540;
L_08934540:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(29232));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08934580u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 336u, 0x089B9BA0u>(ctx, &aot_mem) && ctx.pc == 0x08934580u) goto L_08934580;
    return;
L_08934580:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0893458Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem) && ctx.pc == 0x0893458Cu) goto L_0893458C;
    return;
L_0893458C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08934598u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08934598u) goto L_08934598;
    return;
L_08934598:
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
L_089345B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19631)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08934704;
      }
      goto L_089345DC;
    }
L_089345DC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19631), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934668;
      }
      goto L_089345FC;
    }
L_089345FC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08934608u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08934608u) goto L_08934608;
    return;
L_08934608:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934654;
      }
      goto L_08934614;
    }
L_08934614:
    ctx.gpr[31] = (0x0893461Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 128u, 0x0890C798u>(ctx, &aot_mem) && ctx.pc == 0x0893461Cu) goto L_0893461C;
    return;
L_0893461C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934654;
      }
      goto L_08934624;
    }
L_08934624:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08934630u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08934630u) goto L_08934630;
    return;
L_08934630:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934654;
      }
      goto L_08934638;
    }
L_08934638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08934654u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934654u) goto L_08934654;
    return;
L_08934654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089345FC;
      }
      goto L_08934668;
    }
L_08934668:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089346EC;
      }
      goto L_08934680;
    }
L_08934680:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0893468Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x0893468Cu) goto L_0893468C;
    return;
L_0893468C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089346D8;
      }
      goto L_08934698;
    }
L_08934698:
    ctx.gpr[31] = (0x089346A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 772u, 0x08AFF508u>(ctx, &aot_mem) && ctx.pc == 0x089346A0u) goto L_089346A0;
    return;
L_089346A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089346D8;
      }
      goto L_089346A8;
    }
L_089346A8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089346B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x089346B4u) goto L_089346B4;
    return;
L_089346B4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089346D8;
      }
      goto L_089346BC;
    }
L_089346BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089346D8u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089346D8u) goto L_089346D8;
    return;
L_089346D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934680;
      }
      goto L_089346EC;
    }
L_089346EC:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19631), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089346FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x089346FCu) goto L_089346FC;
    return;
L_089346FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893470C;
      }
      goto L_08934704;
    }
L_08934704:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19631), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (0u | 0u);
    goto L_0893470C;
L_0893470C:
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
L_0893472C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934734:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6548)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08934748u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B7346Cu;
    return;
L_08934748:
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19628));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4160)));
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26752));
    ctx.gpr[31] = (0x08934768u);
    ctx.gpr[7] = (2u << 16u);
    ctx.pc = 0x08B734B4u;
    return;
L_08934768:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6544), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0893477Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B73464u;
    return;
L_0893477C:
    ctx.gpr[31] = (0x08934784u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B734F4u;
    return;
L_08934784:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934794:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089347B0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0893472C;
L_089347B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089347BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08934438;
L_089347BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089347CC;
      }
      goto L_089347C4;
    }
L_089347C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08934814;
      }
      goto L_089347CC;
    }
L_089347CC:
    ctx.gpr[31] = (0x089347D4u);
    // nop
    ctx.pc = 0x08B7347Cu;
    return;
L_089347D4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6548), ctx.gpr[2]);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19616));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4160)));
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089347F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18228));
    ctx.pc = 0x08B734B4u;
    return;
L_089347F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08934808u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B73464u;
    return;
L_08934808:
    ctx.gpr[31] = (0x08934810u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6548)));
    ctx.pc = 0x08B734F4u;
    return;
L_08934810:
    ctx.gpr[2] = (0u | 0u);
    goto L_08934814;
L_08934814:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934828:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893483Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 367u, 0x08871430u>(ctx, &aot_mem) && ctx.pc == 0x0893483Cu) goto L_0893483C;
    return;
L_0893483C:
    ctx.gpr[31] = (0x08934844u);
    // nop
    goto L_08934414;
L_08934844:
    ctx.gpr[31] = (0x0893484Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 368u, 0x08871438u>(ctx, &aot_mem) && ctx.pc == 0x0893484Cu) goto L_0893484C;
    return;
L_0893484C:
    ctx.gpr[31] = (0x08934854u);
    // nop
    goto L_08934404;
L_08934854:
    ctx.gpr[31] = (0x0893485Cu);
    // nop
    goto L_0893440C;
L_0893485C:
    ctx.gpr[31] = (0x08934864u);
    // nop
    goto L_08934A1C;
L_08934864:
    ctx.gpr[31] = (0x0893486Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 819u, 0x0898B354u>(ctx, &aot_mem) && ctx.pc == 0x0893486Cu) goto L_0893486C;
    return;
L_0893486C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08934888;
      }
      goto L_08934878;
    }
L_08934878:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), ctx.gpr[4]);
    ctx.gpr[31] = (0x08934888u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem) && ctx.pc == 0x08934888u) goto L_08934888;
    return;
L_08934888:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7864), 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-1039), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-1038), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089348B0;
      }
      goto L_089348A4;
    }
L_089348A4:
    ctx.gpr[31] = (0x089348ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x089348ACu) goto L_089348AC;
    return;
L_089348AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_089348B0;
L_089348B0:
    ctx.gpr[31] = (0x089348B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 630u, 0x089C6D70u>(ctx, &aot_mem) && ctx.pc == 0x089348B8u) goto L_089348B8;
    return;
L_089348B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089348D0;
      }
      goto L_089348C4;
    }
L_089348C4:
    ctx.gpr[31] = (0x089348CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x089348CCu) goto L_089348CC;
    return;
L_089348CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_089348D0;
L_089348D0:
    ctx.gpr[31] = (0x089348D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 678u, 0x089C6F58u>(ctx, &aot_mem) && ctx.pc == 0x089348D8u) goto L_089348D8;
    return;
L_089348D8:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[31] = (0x089348E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14560));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 30u, 0x088301F4u>(ctx, &aot_mem) && ctx.pc == 0x089348E4u) goto L_089348E4;
    return;
L_089348E4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-1038), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089348FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893491Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20160));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0893491Cu) goto L_0893491C;
    return;
L_0893491C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934934;
      }
      goto L_08934928;
    }
L_08934928:
    ctx.gpr[31] = (0x08934930u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 315u, 0x08AFDA60u>(ctx, &aot_mem) && ctx.pc == 0x08934930u) goto L_08934930;
    return;
L_08934930:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08934934;
L_08934934:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11272));
    ctx.gpr[31] = (0x08934950u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-31072));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 376u, 0x08AFDEA4u>(ctx, &aot_mem) && ctx.pc == 0x08934950u) goto L_08934950;
    return;
L_08934950:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08934968u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11220));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 376u, 0x08AFDEA4u>(ctx, &aot_mem) && ctx.pc == 0x08934968u) goto L_08934968;
    return;
L_08934968:
    ctx.gpr[31] = (0x08934970u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 328u, 0x08AFDBC0u>(ctx, &aot_mem) && ctx.pc == 0x08934970u) goto L_08934970;
    return;
L_08934970:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0893497Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 317u, 0x08AFDA88u>(ctx, &aot_mem) && ctx.pc == 0x0893497Cu) goto L_0893497C;
    return;
L_0893497C:
    ctx.gpr[31] = (0x08934984u);
    // nop
    ctx.pc = 0x08B7347Cu;
    return;
L_08934984:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4160)));
    ctx.gpr[31] = (0x08934990u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B734ECu;
    return;
L_08934990:
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
L_089349A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089349BCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089348FC;
L_089349BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089349C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089349F4;
      }
      goto L_089349E0;
    }
L_089349E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19670)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934A08;
      }
      goto L_089349EC;
    }
L_089349EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934A10;
      }
      goto L_089349F4;
    }
L_089349F4:
    ctx.gpr[31] = (0x089349FCu);
    ctx.gpr[4] = (0u | 0u);
    goto L_0893505C;
L_089349FC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19670), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08934A10;
      }
      goto L_08934A08;
    }
L_08934A08:
    ctx.gpr[31] = (0x08934A10u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0893505C;
L_08934A10:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934A1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934A24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[17] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[31] = (0x08934A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 438u, 0x08975D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08934A78u) goto L_08934A78;
    return;
L_08934A78:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16976)));
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    ctx.gpr[5] = (16355u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 36409u);
    ctx.fpr[13] = get_effective_aspect_ratio(std::bit_cast<float>(ctx.gpr[5]));
    ctx.fpr[12] = widen_horizontal_extent(ctx.fpr[12]);
    ctx.gpr[31] = (0x08934AE4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 586u, 0x0893A7A4u>(ctx, &aot_mem) && ctx.pc == 0x08934AE4u) goto L_08934AE4;
    return;
L_08934AE4:
    ctx.gpr[31] = (0x08934AECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 394u, 0x08946158u>(ctx, &aot_mem) && ctx.pc == 0x08934AECu) goto L_08934AEC;
    return;
L_08934AEC:
    ctx.gpr[31] = (0x08934AF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 276u, 0x089E1640u>(ctx, &aot_mem) && ctx.pc == 0x08934AF4u) goto L_08934AF4;
    return;
L_08934AF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934B24;
      }
      goto L_08934AFC;
    }
L_08934AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08934B0Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 130u, 0x088908D4u>(ctx, &aot_mem) && ctx.pc == 0x08934B0Cu) goto L_08934B0C;
    return;
L_08934B0C:
    ctx.gpr[31] = (0x08934B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 36u, 0x08AF431Cu>(ctx, &aot_mem) && ctx.pc == 0x08934B14u) goto L_08934B14;
    return;
L_08934B14:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934B2C;
      }
      goto L_08934B1C;
    }
L_08934B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934B6C;
      }
      goto L_08934B24;
    }
L_08934B24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08934B70;
      }
      goto L_08934B2C;
    }
L_08934B2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x08934B54u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08934B54u) goto L_08934B54;
    return;
L_08934B54:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08934B6Cu);
    ctx.gpr[8] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 138u, 0x08AF5328u>(ctx, &aot_mem) && ctx.pc == 0x08934B6Cu) goto L_08934B6C;
    return;
L_08934B6C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08934B70;
L_08934B70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934B9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[30] = (ctx.gpr[5] << 16u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[23] = (ctx.gpr[6] << 16u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 16u));
    ctx.gpr[22] = (ctx.gpr[7] << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[21] = (ctx.gpr[8] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[20] = (ctx.gpr[9] << 16u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[19] = (ctx.gpr[10] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16976)));
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08934C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 438u, 0x08975D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08934C44u) goto L_08934C44;
    return;
L_08934C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    ctx.gpr[5] = (16355u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 36409u);
    ctx.fpr[13] = get_effective_aspect_ratio(std::bit_cast<float>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08934C60u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = widen_horizontal_extent(ctx.fpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 586u, 0x0893A7A4u>(ctx, &aot_mem) && ctx.pc == 0x08934C60u) goto L_08934C60;
    return;
L_08934C60:
    ctx.gpr[31] = (0x08934C68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 394u, 0x08946158u>(ctx, &aot_mem) && ctx.pc == 0x08934C68u) goto L_08934C68;
    return;
L_08934C68:
    ctx.gpr[31] = (0x08934C70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 276u, 0x089E1640u>(ctx, &aot_mem) && ctx.pc == 0x08934C70u) goto L_08934C70;
    return;
L_08934C70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (2236u << 16u);
      if (branch_taken) {
          goto L_08934CB8;
      }
      goto L_08934C78;
    }
L_08934C78:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(8892));
      if (branch_taken) {
          goto L_08934CC0;
      }
      goto L_08934CB0;
    }
L_08934CB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934CF4;
      }
      goto L_08934CB8;
    }
L_08934CB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08934D60;
      }
      goto L_08934CC0;
    }
L_08934CC0:
    ctx.gpr[31] = (0x08934CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08934CC8u) goto L_08934CC8;
    return;
L_08934CC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934CF4;
      }
      goto L_08934CD0;
    }
L_08934CD0:
    ctx.gpr[31] = (0x08934CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08934CD8u) goto L_08934CD8;
    return;
L_08934CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08934CF0;
      }
      goto L_08934CE8;
    }
L_08934CE8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08934CF4;
      }
      goto L_08934CF0;
    }
L_08934CF0:
    ctx.gpr[16] = (0u | 1u);
    goto L_08934CF4;
L_08934CF4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
      if (branch_taken) {
          goto L_08934D10;
      }
      goto L_08934CFC;
    }
L_08934CFC:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08934D08u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 130u, 0x088908D4u>(ctx, &aot_mem) && ctx.pc == 0x08934D08u) goto L_08934D08;
    return;
L_08934D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934D1C;
      }
      goto L_08934D10;
    }
L_08934D10:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08934D1Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 130u, 0x088908D4u>(ctx, &aot_mem) && ctx.pc == 0x08934D1Cu) goto L_08934D1C;
    return;
L_08934D1C:
    ctx.gpr[31] = (0x08934D24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 270u, 0x08A1D628u>(ctx, &aot_mem) && ctx.pc == 0x08934D24u) goto L_08934D24;
    return;
L_08934D24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[31] = (0x08934D30u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08934D30u) goto L_08934D30;
    return;
L_08934D30:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08934D3Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08934D3Cu) goto L_08934D3C;
    return;
L_08934D3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08934D5Cu);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 374u, 0x0888DF50u>(ctx, &aot_mem) && ctx.pc == 0x08934D5Cu) goto L_08934D5C;
    return;
L_08934D5C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08934D60;
L_08934D60:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
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
L_08934D94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08934DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 251u, 0x0888CE54u>(ctx, &aot_mem) && ctx.pc == 0x08934DA4u) goto L_08934DA4;
    return;
L_08934DA4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934DB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08934DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 744u, 0x08A071F0u>(ctx, &aot_mem) && ctx.pc == 0x08934DC8u) goto L_08934DC8;
    return;
L_08934DC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934DFC;
      }
      goto L_08934DD0;
    }
L_08934DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8808)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6552)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08934DFC;
      }
      goto L_08934DE0;
    }
L_08934DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8808)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6552), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934E04;
      }
      goto L_08934DF4;
    }
L_08934DF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934E2C;
      }
      goto L_08934DFC;
    }
L_08934DFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934F14;
      }
      goto L_08934E04;
    }
L_08934E04:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08934E10u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08934E10u) goto L_08934E10;
    return;
L_08934E10:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934E28;
      }
      goto L_08934E1C;
    }
L_08934E1C:
    ctx.gpr[31] = (0x08934E24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08934E24u) goto L_08934E24;
    return;
L_08934E24:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08934E28;
L_08934E28:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08934E2C;
L_08934E2C:
    ctx.gpr[31] = (0x08934E34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 411u, 0x089F6318u>(ctx, &aot_mem) && ctx.pc == 0x08934E34u) goto L_08934E34;
    return;
L_08934E34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934EA4;
      }
      goto L_08934E3C;
    }
L_08934E3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19600));
      if (branch_taken) {
          goto L_08934E74;
      }
      goto L_08934E48;
    }
L_08934E48:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08934E54u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08934E54u) goto L_08934E54;
    return;
L_08934E54:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934E6C;
      }
      goto L_08934E60;
    }
L_08934E60:
    ctx.gpr[31] = (0x08934E68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08934E68u) goto L_08934E68;
    return;
L_08934E68:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08934E6C;
L_08934E6C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19600));
    goto L_08934E74;
L_08934E74:
    ctx.gpr[31] = (0x08934E7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 441u, 0x089F64FCu>(ctx, &aot_mem) && ctx.pc == 0x08934E7Cu) goto L_08934E7C;
    return;
L_08934E7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934EA4;
      }
      goto L_08934E84;
    }
L_08934E84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934EBC;
      }
      goto L_08934E9C;
    }
L_08934E9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934EAC;
      }
      goto L_08934EA4;
    }
L_08934EA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934F14;
      }
      goto L_08934EAC;
    }
L_08934EAC:
    ctx.gpr[31] = (0x08934EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 302u, 0x08939298u>(ctx, &aot_mem) && ctx.pc == 0x08934EB4u) goto L_08934EB4;
    return;
L_08934EB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934F0C;
      }
      goto L_08934EBC;
    }
L_08934EBC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08934EDCu);
    ctx.gpr[10] = (0u | 255u);
    goto L_08934A24;
L_08934EDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934F14;
      }
      goto L_08934EE4;
    }
L_08934EE4:
    ctx.gpr[31] = (0x08934EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 36u, 0x08AF431Cu>(ctx, &aot_mem) && ctx.pc == 0x08934EECu) goto L_08934EEC;
    return;
L_08934EEC:
    ctx.gpr[31] = (0x08934EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem) && ctx.pc == 0x08934EF4u) goto L_08934EF4;
    return;
L_08934EF4:
    ctx.gpr[31] = (0x08934EFCu);
    // nop
    goto L_08936F58;
L_08934EFC:
    ctx.gpr[31] = (0x08934F04u);
    // nop
    goto L_089366D8;
L_08934F04:
    ctx.gpr[31] = (0x08934F0Cu);
    ctx.gpr[4] = (0u | 1u);
    goto L_08934F28;
L_08934F0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934F14;
      }
      goto L_08934F14;
    }
L_08934F14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934F28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08934FBC;
      }
      goto L_08934F40;
    }
L_08934F40:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08934F4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 74u, 0x08A1C770u>(ctx, &aot_mem) && ctx.pc == 0x08934F4Cu) goto L_08934F4C;
    return;
L_08934F4C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08934FBC;
      }
      goto L_08934F58;
    }
L_08934F58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934FC0;
      }
      goto L_08934F6C;
    }
L_08934F6C:
    ctx.gpr[31] = (0x08934F74u);
    // nop
    ctx.pc = 0x08B73514u;
    return;
L_08934F74:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08934F88u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_08934F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08934FC0;
      }
      goto L_08934FBC;
    }
L_08934FBC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08934FC0;
L_08934FC0:
    ctx.gpr[31] = (0x08934FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 590u, 0x08932C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08934FC8u) goto L_08934FC8;
    return;
L_08934FC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934FEC;
      }
      goto L_08934FD4;
    }
L_08934FD4:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8728), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08935034;
      }
      goto L_08934FEC;
    }
L_08934FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935000;
      }
      goto L_08934FF8;
    }
L_08934FF8:
    ctx.gpr[31] = (0x08935000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08935000u) goto L_08935000;
    return;
L_08935000:
    ctx.gpr[31] = (0x08935008u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 121u, 0x08954778u>(ctx, &aot_mem) && ctx.pc == 0x08935008u) goto L_08935008;
    return;
L_08935008:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
      if (branch_taken) {
          goto L_08935024;
      }
      goto L_08935010;
    }
L_08935010:
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8728), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08935034;
      }
      goto L_08935024;
    }
L_08935024:
    ctx.gpr[5] = (14545u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8728), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08935034;
L_08935034:
    ctx.gpr[31] = (0x0893503Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 97u, 0x08890618u>(ctx, &aot_mem) && ctx.pc == 0x0893503Cu) goto L_0893503C;
    return;
L_0893503C:
    ctx.gpr[31] = (0x08935044u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 274u, 0x089E1620u>(ctx, &aot_mem) && ctx.pc == 0x08935044u) goto L_08935044;
    return;
L_08935044:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935054:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893505C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893506Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 312u, 0x089E17DCu>(ctx, &aot_mem) && ctx.pc == 0x0893506Cu) goto L_0893506C;
    return;
L_0893506C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935084;
      }
      goto L_08935074;
    }
L_08935074:
    ctx.gpr[31] = (0x0893507Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 710u, 0x08AC2FC4u>(ctx, &aot_mem) && ctx.pc == 0x0893507Cu) goto L_0893507C;
    return;
L_0893507C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935088;
      }
      goto L_08935084;
    }
L_08935084:
    ctx.gpr[2] = (0u | 0u);
    goto L_08935088;
L_08935088:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935094:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19682)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893509C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19652));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089350F4;
      }
      goto L_089350C4;
    }
L_089350C4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19682), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19592));
    ctx.gpr[31] = (0x089350D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem) && ctx.pc == 0x089350D8u) goto L_089350D8;
    return;
L_089350D8:
    ctx.gpr[20] = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_089350FC;
      }
      goto L_089350EC;
    }
L_089350EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935108;
      }
      goto L_089350F4;
    }
L_089350F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089352C4;
      }
      goto L_089350FC;
    }
L_089350FC:
    ctx.gpr[31] = (0x08935104u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 571u, 0x08AAEBC8u>(ctx, &aot_mem) && ctx.pc == 0x08935104u) goto L_08935104;
    return;
L_08935104:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08935108;
L_08935108:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08935128;
      }
      goto L_08935110;
    }
L_08935110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08935130;
    }
    goto L_08935124;
L_08935124:
    ctx.gpr[4] = (0u | 0u);
    goto L_08935128;
L_08935128:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08935164;
      }
      goto L_08935130;
    }
L_08935130:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08935150;
    }
    goto L_08935144;
L_08935144:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08935164;
      }
      goto L_08935150;
    }
L_08935150:
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08935164;
L_08935164:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08935178;
      }
      goto L_0893516C;
    }
L_0893516C:
    ctx.gpr[31] = (0x08935174u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 359u, 0x08A65A24u>(ctx, &aot_mem) && ctx.pc == 0x08935174u) goto L_08935174;
    return;
L_08935174:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08935178;
L_08935178:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893518C;
      }
      goto L_08935180;
    }
L_08935180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893526C;
      }
      goto L_0893518C;
    }
L_0893518C:
    ctx.gpr[31] = (0x08935194u);
    // nop
    goto L_089352E4;
L_08935194:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x089351B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11164));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 737u, 0x08B670D0u>(ctx, &aot_mem) && ctx.pc == 0x089351B0u) goto L_089351B0;
    return;
L_089351B0:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x089351BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 737u, 0x08B670D0u>(ctx, &aot_mem) && ctx.pc == 0x089351BCu) goto L_089351BC;
    return;
L_089351BC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19584));
    ctx.gpr[31] = (0x089351C8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 737u, 0x08B670D0u>(ctx, &aot_mem) && ctx.pc == 0x089351C8u) goto L_089351C8;
    return;
L_089351C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089351D4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 725u, 0x08AAF4D4u>(ctx, &aot_mem) && ctx.pc == 0x089351D4u) goto L_089351D4;
    return;
L_089351D4:
    if (static_cast<std::int32_t>(ctx.gpr[19]) < 0) {
    ctx.gpr[19] = (0u | 0u);
        goto L_089351F4;
    }
    goto L_089351DC;
L_089351DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_089351FC;
    }
    goto L_089351F0;
L_089351F0:
    ctx.gpr[19] = (0u | 0u);
    goto L_089351F4;
L_089351F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08935230;
      }
      goto L_089351FC;
    }
L_089351FC:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0893521C;
    }
    goto L_08935210;
L_08935210:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08935230;
      }
      goto L_0893521C;
    }
L_0893521C:
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08935230;
L_08935230:
    ctx.gpr[31] = (0x08935238u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 351u, 0x08A6598Cu>(ctx, &aot_mem) && ctx.pc == 0x08935238u) goto L_08935238;
    return;
L_08935238:
    ctx.gpr[31] = (0x08935240u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 377u, 0x08A65B34u>(ctx, &aot_mem) && ctx.pc == 0x08935240u) goto L_08935240;
    return;
L_08935240:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19652), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08935254u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08935254u) goto L_08935254;
    return;
L_08935254:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_0893526C;
      }
      goto L_08935260;
    }
L_08935260:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893526Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x0893526Cu) goto L_0893526C;
    return;
L_0893526C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0893528C;
      }
      goto L_08935278;
    }
L_08935278:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08935284u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08935284u) goto L_08935284;
    return;
L_08935284:
    ctx.gpr[31] = (0x0893528Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0893528Cu) goto L_0893528C;
    return;
L_0893528C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(43)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089352C0;
      }
      goto L_08935298;
    }
L_08935298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089352B8;
      }
      goto L_089352A4;
    }
L_089352A4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x089352B0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x089352B0u) goto L_089352B0;
    return;
L_089352B0:
    ctx.gpr[31] = (0x089352B8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x089352B8u) goto L_089352B8;
    return;
L_089352B8:
    ctx.gpr[31] = (0x089352C0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 616u, 0x0882E9E0u>(ctx, &aot_mem) && ctx.pc == 0x089352C0u) goto L_089352C0;
    return;
L_089352C0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_089352C4;
L_089352C4:
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
L_089352E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19682), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089352FCu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19592));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem) && ctx.pc == 0x089352FCu) goto L_089352FC;
    return;
L_089352FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08935390;
      }
      goto L_0893530C;
    }
L_0893530C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0893532C;
      }
      goto L_08935314;
    }
L_08935314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08935334;
    }
    goto L_08935328;
L_08935328:
    ctx.gpr[4] = (0u | 0u);
    goto L_0893532C;
L_0893532C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08935368;
      }
      goto L_08935334;
    }
L_08935334:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08935354;
    }
    goto L_08935348;
L_08935348:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08935368;
      }
      goto L_08935354;
    }
L_08935354:
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08935368;
L_08935368:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935390;
      }
      goto L_08935370;
    }
L_08935370:
    ctx.gpr[31] = (0x08935378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem) && ctx.pc == 0x08935378u) goto L_08935378;
    return;
L_08935378:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19652));
    ctx.gpr[31] = (0x08935384u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08935384u) goto L_08935384;
    return;
L_08935384:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19652), 0u);
    ctx.gpr[31] = (0x08935390u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 621u, 0x08AAEEA8u>(ctx, &aot_mem) && ctx.pc == 0x08935390u) goto L_08935390;
    return;
L_08935390:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089353A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19564)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089353F0;
      }
      goto L_089353BC;
    }
L_089353BC:
    ctx.gpr[31] = (0x089353C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089353C4u) goto L_089353C4;
    return;
L_089353C4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19540)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19544)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089353D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089353D8u) goto L_089353D8;
    return;
L_089353D8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19564), ctx.gpr[4]);
    goto L_089353F0;
L_089353F0:
    ctx.gpr[31] = (0x089353F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089353F8u) goto L_089353F8;
    return;
L_089353F8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19532)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19536)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0893540Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0893540Cu) goto L_0893540C;
    return;
L_0893540C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19564)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[28] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-19579)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19564), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08935448;
      }
      goto L_08935444;
    }
L_08935444:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19564), 0u);
    goto L_08935448;
L_08935448:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19296));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19560));
    ctx.gpr[31] = (0x08935460u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08935460u) goto L_08935460;
    return;
L_08935460:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935474:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9176));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935484:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19668), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935490:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16448u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17297u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[4] = (17305u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (16864u << 16u);
    ctx.gpr[8] = (17166u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[31] = (0x08935528u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08935528u) goto L_08935528;
    return;
L_08935528:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08935548u);
    ctx.gpr[8] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08935548u) goto L_08935548;
    return;
L_08935548:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08935558u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08935558u) goto L_08935558;
    return;
L_08935558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17296u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[6] = (17304u << 16u);
    ctx.gpr[8] = (17163u << 16u);
    ctx.gpr[7] = (16840u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[31] = (0x089355ACu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089355ACu) goto L_089355AC;
    return;
L_089355AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089355C8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089355C8u) goto L_089355C8;
    return;
L_089355C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089355D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x089355D8u) goto L_089355D8;
    return;
L_089355D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17296u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 32768u);
    ctx.gpr[4] = (17303u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 32768u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[26] / ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[28] / ctx.fpr[12];
    ctx.gpr[7] = (16848u << 16u);
    ctx.gpr[8] = (17162u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[31] = (0x08935638u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08935638u) goto L_08935638;
    return;
L_08935638:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08935654u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08935654u) goto L_08935654;
    return;
L_08935654:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08935664u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08935664u) goto L_08935664;
    return;
L_08935664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[26] / ctx.fpr[15];
    ctx.gpr[5] = (17120u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[15] = ctx.fpr[28] / ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[30];
    ctx.gpr[31] = (0x089356ACu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089356ACu) goto L_089356AC;
    return;
L_089356AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 140u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089356C8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089356C8u) goto L_089356C8;
    return;
L_089356C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089356D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x089356D8u) goto L_089356D8;
    return;
L_089356D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935704:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19648), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893570C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935744u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B73594u;
    return;
L_08935744:
    ctx.gpr[31] = (0x0893574Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0893509C;
L_0893574C:
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08935770;
      }
      goto L_08935760;
    }
L_08935760:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08935778;
      }
      goto L_08935768;
    }
L_08935768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935790;
      }
      goto L_08935770;
    }
L_08935770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A7C;
      }
      goto L_08935778;
    }
L_08935778:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19520));
    ctx.gpr[31] = (0x08935784u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x08935784u) goto L_08935784;
    return;
L_08935784:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935790;
      }
      goto L_0893578C;
    }
L_0893578C:
    ctx.gpr[19] = (0u | 1u);
    goto L_08935790;
L_08935790:
    ctx.gpr[4] = (0u | 255u);
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_0893579C;
    }
    goto L_0893579C;
L_0893579C:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089357BCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08934A24;
L_089357BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893580C;
      }
      goto L_089357C4;
    }
L_089357C4:
    ctx.gpr[31] = (0x089357CCu);
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 36u, 0x08AF431Cu>(ctx, &aot_mem) && ctx.pc == 0x089357CCu) goto L_089357CC;
    return;
L_089357CC:
    ctx.gpr[31] = (0x089357D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem) && ctx.pc == 0x089357D4u) goto L_089357D4;
    return;
L_089357D4:
    ctx.gpr[5] = (17392u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089357FCu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089357FCu) goto L_089357FC;
    return;
L_089357FC:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_08935814;
      }
      goto L_08935804;
    }
L_08935804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893582C;
      }
      goto L_0893580C;
    }
L_0893580C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A7C;
      }
      goto L_08935814;
    }
L_08935814:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0893582C;
L_0893582C:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08935848u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08935848u) goto L_08935848;
    return;
L_08935848:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08935854u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08935854u) goto L_08935854;
    return;
L_08935854:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08935864u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 72u, 0x08AF4650u>(ctx, &aot_mem) && ctx.pc == 0x08935864u) goto L_08935864;
    return;
L_08935864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19648)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089359FC;
      }
      goto L_08935870;
    }
L_08935870:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x0893587Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x0893587Cu) goto L_0893587C;
    return;
L_0893587C:
    ctx.gpr[31] = (0x08935884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x08935884u) goto L_08935884;
    return;
L_08935884:
    ctx.gpr[31] = (0x0893588Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x0893588Cu) goto L_0893588C;
    return;
L_0893588C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19648)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089358F0;
      }
      goto L_08935898;
    }
L_08935898:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19508));
      if (branch_taken) {
          goto L_089358D0;
      }
      goto L_089358A4;
    }
L_089358A4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089358B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089358B0u) goto L_089358B0;
    return;
L_089358B0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089358C8;
      }
      goto L_089358BC;
    }
L_089358BC:
    ctx.gpr[31] = (0x089358C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089358C4u) goto L_089358C4;
    return;
L_089358C4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089358C8;
L_089358C8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19508));
    goto L_089358D0;
L_089358D0:
    ctx.gpr[31] = (0x089358D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089358D8u) goto L_089358D8;
    return;
L_089358D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089358E8u);
    ctx.gpr[6] = (0u | 240u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089358E8u) goto L_089358E8;
    return;
L_089358E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089359FC;
      }
      goto L_089358F0;
    }
L_089358F0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08935950;
      }
      goto L_089358F8;
    }
L_089358F8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19500));
      if (branch_taken) {
          goto L_08935930;
      }
      goto L_08935904;
    }
L_08935904:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08935910u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08935910u) goto L_08935910;
    return;
L_08935910:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935928;
      }
      goto L_0893591C;
    }
L_0893591C:
    ctx.gpr[31] = (0x08935924u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08935924u) goto L_08935924;
    return;
L_08935924:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08935928;
L_08935928:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19500));
    goto L_08935930;
L_08935930:
    ctx.gpr[31] = (0x08935938u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08935938u) goto L_08935938;
    return;
L_08935938:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08935948u);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x08935948u) goto L_08935948;
    return;
L_08935948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089359FC;
      }
      goto L_08935950;
    }
L_08935950:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089359FC;
      }
      goto L_0893595C;
    }
L_0893595C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19492));
      if (branch_taken) {
          goto L_08935994;
      }
      goto L_08935968;
    }
L_08935968:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08935974u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08935974u) goto L_08935974;
    return;
L_08935974:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893598C;
      }
      goto L_08935980;
    }
L_08935980:
    ctx.gpr[31] = (0x08935988u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08935988u) goto L_08935988;
    return;
L_08935988:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0893598C;
L_0893598C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19492));
    goto L_08935994;
L_08935994:
    ctx.gpr[31] = (0x0893599Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0893599Cu) goto L_0893599C;
    return;
L_0893599C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089359ACu);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089359ACu) goto L_089359AC;
    return;
L_089359AC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19484));
      if (branch_taken) {
          goto L_089359E4;
      }
      goto L_089359B8;
    }
L_089359B8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089359C4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089359C4u) goto L_089359C4;
    return;
L_089359C4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089359DC;
      }
      goto L_089359D0;
    }
L_089359D0:
    ctx.gpr[31] = (0x089359D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089359D8u) goto L_089359D8;
    return;
L_089359D8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089359DC;
L_089359DC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19484));
    goto L_089359E4;
L_089359E4:
    ctx.gpr[31] = (0x089359ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089359ECu) goto L_089359EC;
    return;
L_089359EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089359FCu);
    ctx.gpr[6] = (0u | 150u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089359FCu) goto L_089359FC;
    return;
L_089359FC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A74;
      }
      goto L_08935A04;
    }
L_08935A04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19668)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19668), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08935A48;
      }
      goto L_08935A1C;
    }
L_08935A1C:
    ctx.gpr[4] = (16688u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08935A3C;
      }
      goto L_08935A34;
    }
L_08935A34:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19668), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08935A3C;
L_08935A3C:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A54;
      }
      goto L_08935A48;
    }
L_08935A48:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    goto L_08935A54;
L_08935A54:
    ctx.gpr[31] = (0x08935A5Cu);
    // nop
    goto L_08935490;
L_08935A5C:
    ctx.gpr[31] = (0x08935A64u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x08935A64u) goto L_08935A64;
    return;
L_08935A64:
    ctx.gpr[31] = (0x08935A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x08935A6Cu) goto L_08935A6C;
    return;
L_08935A6C:
    ctx.gpr[31] = (0x08935A74u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x08935A74u) goto L_08935A74;
    return;
L_08935A74:
    ctx.gpr[31] = (0x08935A7Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_08934F28;
L_08935A7C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935AC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    goto L_08935474;
L_08935AC0:
    ctx.gpr[31] = (0x08935AC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0893509C;
L_08935AC8:
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32304));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08935AE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 74u, 0x08A1C770u>(ctx, &aot_mem) && ctx.pc == 0x08935AE0u) goto L_08935AE0;
    return;
L_08935AE0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08935B08;
      }
      goto L_08935AEC;
    }
L_08935AEC:
    ctx.gpr[17] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08935B00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem) && ctx.pc == 0x08935B00u) goto L_08935B00;
    return;
L_08935B00:
    ctx.gpr[31] = (0x08935B08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 91u, 0x08A1C8D0u>(ctx, &aot_mem) && ctx.pc == 0x08935B08u) goto L_08935B08;
    return;
L_08935B08:
    ctx.gpr[31] = (0x08935B10u);
    // nop
    ctx.pc = 0x08B73224u;
    return;
L_08935B10:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08935B30u);
    ctx.gpr[10] = (0u | 255u);
    goto L_08934A24;
L_08935B30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935C1C;
      }
      goto L_08935B38;
    }
L_08935B38:
    ctx.gpr[31] = (0x08935B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 36u, 0x08AF431Cu>(ctx, &aot_mem) && ctx.pc == 0x08935B40u) goto L_08935B40;
    return;
L_08935B40:
    ctx.gpr[31] = (0x08935B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem) && ctx.pc == 0x08935B48u) goto L_08935B48;
    return;
L_08935B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08935B5Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 283u, 0x08B217D4u>(ctx, &aot_mem) && ctx.pc == 0x08935B5Cu) goto L_08935B5C;
    return;
L_08935B5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[8] = (54272u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] & 1023u);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[8] = (54528u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] & 1023u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(29552), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(29552));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11))))));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 63u);
    ctx.gpr[11] = (ctx.gpr[6] & 63u);
    ctx.gpr[2] = (ctx.gpr[7] << (ctx.gpr[5] & 31u));
    ctx.gpr[11] = (ctx.gpr[7] << (ctx.gpr[11] & 31u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08935BF4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 499u, 0x088DFA08u>(ctx, &aot_mem) && ctx.pc == 0x08935BF4u) goto L_08935BF4;
    return;
L_08935BF4:
    ctx.gpr[31] = (0x08935BFCu);
    ctx.gpr[4] = (0u | 0u);
    goto L_08934F28;
L_08935BFC:
    ctx.gpr[31] = (0x08935C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem) && ctx.pc == 0x08935C04u) goto L_08935C04;
    return;
L_08935C04:
    ctx.gpr[31] = (0x08935C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08935C0Cu) goto L_08935C0C;
    return;
L_08935C0C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935C24;
      }
      goto L_08935C14;
    }
L_08935C14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935C3C;
      }
      goto L_08935C1C;
    }
L_08935C1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935C3C;
      }
      goto L_08935C24;
    }
L_08935C24:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08935C34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem) && ctx.pc == 0x08935C34u) goto L_08935C34;
    return;
L_08935C34:
    ctx.gpr[31] = (0x08935C3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 91u, 0x08A1C8D0u>(ctx, &aot_mem) && ctx.pc == 0x08935C3Cu) goto L_08935C3C;
    return;
L_08935C3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935C54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935C5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935C70u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08935C70u) goto L_08935C70;
    return;
L_08935C70:
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
    goto L_08935C88;
L_08935C88:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[29] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08935C88;
      }
      goto L_08935CAC;
    }
L_08935CAC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (0u | 1u);
    goto L_08935CB4;
L_08935CB4:
    ctx.gpr[31] = (0x08935CBCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08935CBCu) goto L_08935CBC;
    return;
L_08935CBC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08935CDC;
      }
      goto L_08935CCC;
    }
L_08935CCC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08935CE0;
      }
      goto L_08935CD8;
    }
L_08935CD8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08935CDC;
L_08935CDC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08935CE0;
L_08935CE0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935D80;
      }
      goto L_08935CE8;
    }
L_08935CE8:
    ctx.gpr[31] = (0x08935CF0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08935CF0u) goto L_08935CF0;
    return;
L_08935CF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935D80;
      }
      goto L_08935CFC;
    }
L_08935CFC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935D10;
      }
      goto L_08935D04;
    }
L_08935D04:
    ctx.gpr[31] = (0x08935D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 127u, 0x08A11208u>(ctx, &aot_mem) && ctx.pc == 0x08935D0Cu) goto L_08935D0C;
    return;
L_08935D0C:
    ctx.gpr[16] = (0u | 0u);
    goto L_08935D10;
L_08935D10:
    ctx.gpr[31] = (0x08935D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 829u, 0x0898B448u>(ctx, &aot_mem) && ctx.pc == 0x08935D18u) goto L_08935D18;
    return;
L_08935D18:
    ctx.gpr[31] = (0x08935D20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 157u, 0x08890F48u>(ctx, &aot_mem) && ctx.pc == 0x08935D20u) goto L_08935D20;
    return;
L_08935D20:
    ctx.gpr[31] = (0x08935D28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 97u, 0x08890618u>(ctx, &aot_mem) && ctx.pc == 0x08935D28u) goto L_08935D28;
    return;
L_08935D28:
    ctx.gpr[31] = (0x08935D30u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08935D30u) goto L_08935D30;
    return;
L_08935D30:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08935D50;
      }
      goto L_08935D40;
    }
L_08935D40:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08935D54;
      }
      goto L_08935D4C;
    }
L_08935D4C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08935D50;
L_08935D50:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08935D54;
L_08935D54:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935D70;
      }
      goto L_08935D5C;
    }
L_08935D5C:
    ctx.gpr[31] = (0x08935D64u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08935D64u) goto L_08935D64;
    return;
L_08935D64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935D78;
      }
      goto L_08935D70;
    }
L_08935D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935D80;
      }
      goto L_08935D78;
    }
L_08935D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935CB4;
      }
      goto L_08935D80;
    }
L_08935D80:
    ctx.gpr[31] = (0x08935D88u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08935D88u) goto L_08935D88;
    return;
L_08935D88:
    ctx.gpr[9] = (ctx.gpr[2] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    goto L_08935DA0;
L_08935DA0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08935DA0;
      }
      goto L_08935DC4;
    }
L_08935DC4:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08935DD0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08935DD0u) goto L_08935DD0;
    return;
L_08935DD0:
    ctx.gpr[9] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    goto L_08935DE8;
L_08935DE8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08935DE8;
      }
      goto L_08935E0C;
    }
L_08935E0C:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935E20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935E28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935E4Cu);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 536u, 0x08AB5FCCu>(ctx, &aot_mem) && ctx.pc == 0x08935E4Cu) goto L_08935E4C;
    return;
L_08935E4C:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08935F3C;
      }
      goto L_08935E5C;
    }
L_08935E5C:
    ctx.gpr[31] = (0x08935E64u);
    ctx.gpr[4] = (0u | 2u);
    goto L_08935704;
L_08935E64:
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19432));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08935E7Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_0893570C;
L_08935E7C:
    ctx.gpr[31] = (0x08935E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 525u, 0x08AB5F30u>(ctx, &aot_mem) && ctx.pc == 0x08935E84u) goto L_08935E84;
    return;
L_08935E84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935EAC;
      }
      goto L_08935E90;
    }
L_08935E90:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4211), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (31u << 16u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08935EA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31616));
    ctx.pc = 0x08B7340Cu;
    return;
L_08935EA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F3C;
      }
      goto L_08935EAC;
    }
L_08935EAC:
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[31] = (0x08935EB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16960));
    ctx.pc = 0x08B7340Cu;
    return;
L_08935EB8:
    ctx.gpr[31] = (0x08935EC0u);
    ctx.gpr[4] = (0u | 3u);
    goto L_08935704;
L_08935EC0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08935ED4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0893570C;
L_08935ED4:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(6556));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19424)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08935EE8u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B73234u;
    return;
L_08935EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6560)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19424), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935F3C;
      }
      goto L_08935F04;
    }
L_08935F04:
    ctx.gpr[31] = (0x08935F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08935F0Cu) goto L_08935F0C;
    return;
L_08935F0C:
    ctx.gpr[31] = (0x08935F14u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08935F14:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08935F20u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B73234u;
    return;
L_08935F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6560)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19424), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F04;
      }
      goto L_08935F3C;
    }
L_08935F3C:
    ctx.gpr[31] = (0x08935F44u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08935704;
L_08935F44:
    ctx.gpr[31] = (0x08935F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 113u, 0x08A11120u>(ctx, &aot_mem) && ctx.pc == 0x08935F4Cu) goto L_08935F4C;
    return;
L_08935F4C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08935F58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11116));
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 1044u, 0x08AC3E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08935F58u) goto L_08935F58;
    return;
L_08935F58:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19420));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08935F6Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_0893570C;
L_08935F6C:
    ctx.gpr[31] = (0x08935F74u);
    // nop
    goto L_08935C54;
L_08935F74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F90;
      }
      goto L_08935F80;
    }
L_08935F80:
    ctx.gpr[31] = (0x08935F88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    goto L_08935474;
L_08935F88:
    ctx.gpr[31] = (0x08935F90u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0893509C;
L_08935F90:
    ctx.gpr[31] = (0x08935F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem) && ctx.pc == 0x08935F98u) goto L_08935F98;
    return;
L_08935F98:
    ctx.gpr[31] = (0x08935FA0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 405u, 0x08809E18u>(ctx, &aot_mem) && ctx.pc == 0x08935FA0u) goto L_08935FA0;
    return;
L_08935FA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    goto L_08935FA4;
L_08935FA4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935FBC;
      }
      goto L_08935FAC;
    }
L_08935FAC:
    ctx.gpr[31] = (0x08935FB4u);
    // nop
    goto L_089353A0;
L_08935FB4:
    ctx.gpr[31] = (0x08935FBCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0893509C;
L_08935FBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4212)));
    goto L_08935FC0;
L_08935FC0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08935FF4;
      }
      goto L_08935FC8;
    }
L_08935FC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2240)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08935FF4;
      }
      goto L_08935FD4;
    }
L_08935FD4:
    ctx.gpr[31] = (0x08935FDCu);
    // nop
    goto L_08937A28;
L_08935FDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935FEC;
      }
      goto L_08935FE4;
    }
L_08935FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935FF4;
      }
      goto L_08935FEC;
    }
L_08935FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4212)));
      if (branch_taken) {
          goto L_08935FC0;
      }
      goto L_08935FF4;
    }
L_08935FF4:
    ctx.gpr[31] = (0x08935FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 888u, 0x0898B7D8u>(ctx, &aot_mem) && ctx.pc == 0x08935FFCu) goto L_08935FFC;
    return;
L_08935FFC:
    ctx.gpr[31] = (0x08936004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 844u, 0x0898B4F0u>(ctx, &aot_mem) && ctx.pc == 0x08936004u) goto L_08936004;
    return;
L_08936004:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08936010u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem) && ctx.pc == 0x08936010u) goto L_08936010;
    return;
L_08936010:
    ctx.gpr[31] = (0x08936018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 746u, 0x08AC3168u>(ctx, &aot_mem) && ctx.pc == 0x08936018u) goto L_08936018;
    return;
L_08936018:
    ctx.gpr[31] = (0x08936020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 127u, 0x08A11208u>(ctx, &aot_mem) && ctx.pc == 0x08936020u) goto L_08936020;
    return;
L_08936020:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4212)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2240)));
      if (branch_taken) {
          goto L_08936034;
      }
      goto L_0893602C;
    }
L_0893602C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08936064;
      }
      goto L_08936034;
    }
L_08936034:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08936044;
      }
      goto L_0893603C;
    }
L_0893603C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4212), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4211), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08936044;
L_08936044:
    ctx.gpr[31] = (0x0893604Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 772u, 0x08AC327Cu>(ctx, &aot_mem) && ctx.pc == 0x0893604Cu) goto L_0893604C;
    return;
L_0893604C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4212), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893605Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem) && ctx.pc == 0x0893605Cu) goto L_0893605C;
    return;
L_0893605C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
      if (branch_taken) {
          goto L_08935FA4;
      }
      goto L_08936064;
    }
L_08936064:
    ctx.gpr[31] = (0x0893606Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 493u, 0x08A05EDCu>(ctx, &aot_mem) && ctx.pc == 0x0893606Cu) goto L_0893606C;
    return;
L_0893606C:
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
L_0893608C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893609Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 260u, 0x0888D05Cu>(ctx, &aot_mem) && ctx.pc == 0x0893609Cu) goto L_0893609C;
    return;
L_0893609C:
    ctx.gpr[31] = (0x089360A4u);
    // nop
    goto L_08934D94;
L_089360A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089360BC;
      }
      goto L_089360B0;
    }
L_089360B0:
    ctx.gpr[31] = (0x089360B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 399u, 0x08B65A54u>(ctx, &aot_mem) && ctx.pc == 0x089360B8u) goto L_089360B8;
    return;
L_089360B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    goto L_089360BC;
L_089360BC:
    ctx.gpr[31] = (0x089360C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 200u, 0x08805D18u>(ctx, &aot_mem) && ctx.pc == 0x089360C4u) goto L_089360C4;
    return;
L_089360C4:
    ctx.gpr[31] = (0x089360CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 158u, 0x08805310u>(ctx, &aot_mem) && ctx.pc == 0x089360CCu) goto L_089360CC;
    return;
L_089360CC:
    ctx.gpr[31] = (0x089360D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem) && ctx.pc == 0x089360D4u) goto L_089360D4;
    return;
L_089360D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089360EC;
      }
      goto L_089360E0;
    }
L_089360E0:
    ctx.gpr[31] = (0x089360E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 399u, 0x08B65A54u>(ctx, &aot_mem) && ctx.pc == 0x089360E8u) goto L_089360E8;
    return;
L_089360E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    goto L_089360EC;
L_089360EC:
    ctx.gpr[31] = (0x089360F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 199u, 0x08805630u>(ctx, &aot_mem) && ctx.pc == 0x089360F4u) goto L_089360F4;
    return;
L_089360F4:
    ctx.gpr[31] = (0x089360FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 450u, 0x08A7A300u>(ctx, &aot_mem) && ctx.pc == 0x089360FCu) goto L_089360FC;
    return;
L_089360FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936114;
      }
      goto L_08936108;
    }
L_08936108:
    ctx.gpr[31] = (0x08936110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 399u, 0x08B65A54u>(ctx, &aot_mem) && ctx.pc == 0x08936110u) goto L_08936110;
    return;
L_08936110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    goto L_08936114;
L_08936114:
    ctx.gpr[31] = (0x0893611Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 215u, 0x08805F04u>(ctx, &aot_mem) && ctx.pc == 0x0893611Cu) goto L_0893611C;
    return;
L_0893611C:
    ctx.gpr[31] = (0x08936124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 136u, 0x08944FE4u>(ctx, &aot_mem) && ctx.pc == 0x08936124u) goto L_08936124;
    return;
L_08936124:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936130:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08936148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 520u, 0x088277C8u>(ctx, &aot_mem) && ctx.pc == 0x08936148u) goto L_08936148;
    return;
L_08936148:
    ctx.gpr[31] = (0x08936150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 410u, 0x08A96B48u>(ctx, &aot_mem) && ctx.pc == 0x08936150u) goto L_08936150;
    return;
L_08936150:
    ctx.gpr[31] = (0x08936158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 793u, 0x08A7BB14u>(ctx, &aot_mem) && ctx.pc == 0x08936158u) goto L_08936158;
    return;
L_08936158:
    ctx.gpr[31] = (0x08936160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 35u, 0x08A98334u>(ctx, &aot_mem) && ctx.pc == 0x08936160u) goto L_08936160;
    return;
L_08936160:
    ctx.gpr[31] = (0x08936168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 29u, 0x08B201E4u>(ctx, &aot_mem) && ctx.pc == 0x08936168u) goto L_08936168;
    return;
L_08936168:
    ctx.gpr[31] = (0x08936170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 134u, 0x08A9100Cu>(ctx, &aot_mem) && ctx.pc == 0x08936170u) goto L_08936170;
    return;
L_08936170:
    ctx.gpr[31] = (0x08936178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 540u, 0x08A7A94Cu>(ctx, &aot_mem) && ctx.pc == 0x08936178u) goto L_08936178;
    return;
L_08936178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
        goto L_08936190;
    }
    goto L_08936184;
L_08936184:
    ctx.gpr[31] = (0x0893618Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x0893618Cu) goto L_0893618C;
    return;
L_0893618C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_08936190;
L_08936190:
    ctx.gpr[31] = (0x08936198u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 127u, 0x08958D28u>(ctx, &aot_mem) && ctx.pc == 0x08936198u) goto L_08936198;
    return;
L_08936198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089361AC;
      }
      goto L_089361A4;
    }
L_089361A4:
    ctx.gpr[31] = (0x089361ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 399u, 0x08B65A54u>(ctx, &aot_mem) && ctx.pc == 0x089361ACu) goto L_089361AC;
    return;
L_089361AC:
    ctx.gpr[31] = (0x089361B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 199u, 0x08805630u>(ctx, &aot_mem) && ctx.pc == 0x089361B4u) goto L_089361B4;
    return;
L_089361B4:
    ctx.gpr[31] = (0x089361BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 592u, 0x08A7ADA4u>(ctx, &aot_mem) && ctx.pc == 0x089361BCu) goto L_089361BC;
    return;
L_089361BC:
    ctx.gpr[31] = (0x089361C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 136u, 0x08944FE4u>(ctx, &aot_mem) && ctx.pc == 0x089361C4u) goto L_089361C4;
    return;
L_089361C4:
    ctx.gpr[31] = (0x089361CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 193u, 0x08AFD054u>(ctx, &aot_mem) && ctx.pc == 0x089361CCu) goto L_089361CC;
    return;
L_089361CC:
    ctx.gpr[31] = (0x089361D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 605u, 0x089832B0u>(ctx, &aot_mem) && ctx.pc == 0x089361D4u) goto L_089361D4;
    return;
L_089361D4:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (5888u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24632), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089361FCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 332u, 0x08A8626Cu>(ctx, &aot_mem) && ctx.pc == 0x089361FCu) goto L_089361FC;
    return;
L_089361FC:
    ctx.gpr[31] = (0x08936204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 567u, 0x089CF240u>(ctx, &aot_mem) && ctx.pc == 0x08936204u) goto L_08936204;
    return;
L_08936204:
    ctx.gpr[31] = (0x0893620Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 608u, 0x088ABE04u>(ctx, &aot_mem) && ctx.pc == 0x0893620Cu) goto L_0893620C;
    return;
L_0893620C:
    ctx.gpr[31] = (0x08936214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 823u, 0x0893FA34u>(ctx, &aot_mem) && ctx.pc == 0x08936214u) goto L_08936214;
    return;
L_08936214:
    ctx.gpr[31] = (0x0893621Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 470u, 0x0898231Cu>(ctx, &aot_mem) && ctx.pc == 0x0893621Cu) goto L_0893621C;
    return;
L_0893621C:
    ctx.gpr[31] = (0x08936224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 426u, 0x089023F4u>(ctx, &aot_mem) && ctx.pc == 0x08936224u) goto L_08936224;
    return;
L_08936224:
    ctx.gpr[31] = (0x0893622Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 607u, 0x08A17A18u>(ctx, &aot_mem) && ctx.pc == 0x0893622Cu) goto L_0893622C;
    return;
L_0893622C:
    ctx.gpr[31] = (0x08936234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 448u, 0x08B261A8u>(ctx, &aot_mem) && ctx.pc == 0x08936234u) goto L_08936234;
    return;
L_08936234:
    ctx.gpr[31] = (0x0893623Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 120u, 0x0895CF40u>(ctx, &aot_mem) && ctx.pc == 0x0893623Cu) goto L_0893623C;
    return;
L_0893623C:
    ctx.gpr[31] = (0x08936244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 484u, 0x08A7A5B8u>(ctx, &aot_mem) && ctx.pc == 0x08936244u) goto L_08936244;
    return;
L_08936244:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936250:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893627Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0893627Cu) goto L_0893627C;
    return;
L_0893627C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08936288u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08936288u) goto L_08936288;
    return;
L_08936288:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08936294u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08936294u) goto L_08936294;
    return;
L_08936294:
    ctx.gpr[17] = (0u | 8u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089362A4u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089362A4u) goto L_089362A4;
    return;
L_089362A4:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089362B0u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089362B0u) goto L_089362B0;
    return;
L_089362B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24904)));
    ctx.gpr[16] = (2236u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_089362C8;
      }
      goto L_089362C0;
    }
L_089362C0:
    ctx.gpr[31] = (0x089362C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 19u, 0x088B01E4u>(ctx, &aot_mem) && ctx.pc == 0x089362C8u) goto L_089362C8;
    return;
L_089362C8:
    ctx.gpr[31] = (0x089362D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 600u, 0x088F6E68u>(ctx, &aot_mem) && ctx.pc == 0x089362D0u) goto L_089362D0;
    return;
L_089362D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089362E4;
      }
      goto L_089362DC;
    }
L_089362DC:
    ctx.gpr[31] = (0x089362E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 616u, 0x08A1BF34u>(ctx, &aot_mem) && ctx.pc == 0x089362E4u) goto L_089362E4;
    return;
L_089362E4:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089362F0u);
    ctx.gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089362F0u) goto L_089362F0;
    return;
L_089362F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
      if (branch_taken) {
          goto L_08936338;
      }
      goto L_0893631C;
    }
L_0893631C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1396));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08936338;
L_08936338:
    ctx.gpr[6] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08936370;
      }
      goto L_08936344;
    }
L_08936344:
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08936370;
      }
      goto L_08936350;
    }
L_08936350:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[6] = (0u | 40u);
      if (branch_taken) {
          goto L_08936370;
      }
      goto L_08936358;
    }
L_08936358:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 46u);
      if (branch_taken) {
          goto L_08936370;
      }
      goto L_08936360;
    }
L_08936360:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 47u);
      if (branch_taken) {
          goto L_08936370;
      }
      goto L_08936368;
    }
L_08936368:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08936374;
      }
      goto L_08936370;
    }
L_08936370:
    ctx.gpr[5] = (0u | 1u);
    goto L_08936374;
L_08936374:
    ctx.gpr[4] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 18u);
      if (branch_taken) {
          goto L_08936390;
      }
      goto L_08936380;
    }
L_08936380:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 31u);
      if (branch_taken) {
          goto L_08936390;
      }
      goto L_08936388;
    }
L_08936388:
    if (ctx.gpr[16] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_0893639C;
    }
    goto L_08936390;
L_08936390:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089363BC;
      }
      goto L_08936398;
    }
L_08936398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0893639C;
L_0893639C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11244)));
        goto L_089363B4;
    }
    goto L_089363A4;
L_089363A4:
    ctx.gpr[31] = (0x089363ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x089363ACu) goto L_089363AC;
    return;
L_089363AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11244)));
    goto L_089363B4;
L_089363B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936510;
      }
      goto L_089363BC;
    }
L_089363BC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089363DCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089363DCu) goto L_089363DC;
    return;
L_089363DC:
    ctx.gpr[5] = (17392u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 18u);
    ctx.gpr[5] = (17288u << 16u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0893645C;
      }
      goto L_089363F8;
    }
L_089363F8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (49712u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08936418u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08936418u) goto L_08936418;
    return;
L_08936418:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08936428u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08936428u) goto L_08936428;
    return;
L_08936428:
    ctx.gpr[5] = (17305u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08936444u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08936444u) goto L_08936444;
    return;
L_08936444:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08936454u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08936454u) goto L_08936454;
    return;
L_08936454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089364B8;
      }
      goto L_0893645C;
    }
L_0893645C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (49812u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0893647Cu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0893647Cu) goto L_0893647C;
    return;
L_0893647C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893648Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x0893648Cu) goto L_0893648C;
    return;
L_0893648C:
    ctx.gpr[5] = (17325u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089364A8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089364A8u) goto L_089364A8;
    return;
L_089364A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089364B8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x089364B8u) goto L_089364B8;
    return;
L_089364B8:
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089364D4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089364D4u) goto L_089364D4;
    return;
L_089364D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089364E4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x089364E4u) goto L_089364E4;
    return;
L_089364E4:
    ctx.gpr[5] = (17377u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08936500u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08936500u) goto L_08936500;
    return;
L_08936500:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08936510u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08936510u) goto L_08936510;
    return;
L_08936510:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x0893651Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 748u, 0x0888AC84u>(ctx, &aot_mem) && ctx.pc == 0x0893651Cu) goto L_0893651C;
    return;
L_0893651C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5888)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936530;
      }
      goto L_08936528;
    }
L_08936528:
    ctx.gpr[31] = (0x08936530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 748u, 0x08B671D4u>(ctx, &aot_mem) && ctx.pc == 0x08936530u) goto L_08936530;
    return;
L_08936530:
    ctx.gpr[31] = (0x08936538u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5888)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 275u, 0x0886DADCu>(ctx, &aot_mem) && ctx.pc == 0x08936538u) goto L_08936538;
    return;
L_08936538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936550;
      }
      goto L_08936544;
    }
L_08936544:
    ctx.gpr[31] = (0x0893654Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0893654Cu) goto L_0893654C;
    return;
L_0893654C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08936550;
L_08936550:
    ctx.gpr[31] = (0x08936558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 480u, 0x089BA6ECu>(ctx, &aot_mem) && ctx.pc == 0x08936558u) goto L_08936558;
    return;
L_08936558:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893656C;
      }
      goto L_08936564;
    }
L_08936564:
    ctx.gpr[31] = (0x0893656Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 19u, 0x088B01E4u>(ctx, &aot_mem) && ctx.pc == 0x0893656Cu) goto L_0893656C;
    return;
L_0893656C:
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[31] = (0x08936578u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25888));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 891u, 0x08AA3A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08936578u) goto L_08936578;
    return;
L_08936578:
    ctx.gpr[31] = (0x08936580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 187u, 0x08AB8E04u>(ctx, &aot_mem) && ctx.pc == 0x08936580u) goto L_08936580;
    return;
L_08936580:
    ctx.gpr[31] = (0x08936588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 643u, 0x08A367F0u>(ctx, &aot_mem) && ctx.pc == 0x08936588u) goto L_08936588;
    return;
L_08936588:
    ctx.gpr[31] = (0x08936590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 294u, 0x0896D128u>(ctx, &aot_mem) && ctx.pc == 0x08936590u) goto L_08936590;
    return;
L_08936590:
    ctx.gpr[31] = (0x08936598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 845u, 0x0898B4F8u>(ctx, &aot_mem) && ctx.pc == 0x08936598u) goto L_08936598;
    return;
L_08936598:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089365BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_089365F0;
      }
      goto L_089365D8;
    }
L_089365D8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x089365E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x089365E8u) goto L_089365E8;
    return;
L_089365E8:
    ctx.gpr[31] = (0x089365F0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x089365F0u) goto L_089365F0;
    return;
L_089365F0:
    ctx.gpr[31] = (0x089365F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem) && ctx.pc == 0x089365F8u) goto L_089365F8;
    return;
L_089365F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089366C8;
      }
      goto L_08936600;
    }
L_08936600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08936620;
      }
      goto L_0893660C;
    }
L_0893660C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08936618u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08936618u) goto L_08936618;
    return;
L_08936618:
    ctx.gpr[31] = (0x08936620u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08936620u) goto L_08936620;
    return;
L_08936620:
    ctx.gpr[31] = (0x08936628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 524u, 0x0882E518u>(ctx, &aot_mem) && ctx.pc == 0x08936628u) goto L_08936628;
    return;
L_08936628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893663C;
      }
      goto L_08936634;
    }
L_08936634:
    ctx.gpr[31] = (0x0893663Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0893663Cu) goto L_0893663C;
    return;
L_0893663C:
    ctx.gpr[31] = (0x08936644u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6D78u>(ctx, &aot_mem) && ctx.pc == 0x08936644u) goto L_08936644;
    return;
L_08936644:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-128));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(127));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08936674;
      }
      goto L_08936660;
    }
L_08936660:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 255u);
        goto L_08936674;
    }
    goto L_08936674;
L_08936674:
    ctx.gpr[8] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08936690u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08936690u) goto L_08936690;
    return;
L_08936690:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x089366B8u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089366B8u) goto L_089366B8;
    return;
L_089366B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089366C8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x089366C8u) goto L_089366C8;
    return;
L_089366C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089366D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19682)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936708;
      }
      goto L_089366EC;
    }
L_089366EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936700;
      }
      goto L_089366F8;
    }
L_089366F8:
    ctx.gpr[31] = (0x08936700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08936700u) goto L_08936700;
    return;
L_08936700:
    ctx.gpr[31] = (0x08936708u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 403u, 0x089BDF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08936708u) goto L_08936708;
    return;
L_08936708:
    ctx.gpr[31] = (0x08936710u);
    // nop
    goto L_089372C0;
L_08936710:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893671C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(22) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936800;
      }
      goto L_08936730;
    }
L_08936730:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-11072)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936748:
    ctx.gpr[31] = (0x08936750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 708u, 0x08AC2FA4u>(ctx, &aot_mem) && ctx.pc == 0x08936750u) goto L_08936750;
    return;
L_08936750:
    ctx.gpr[31] = (0x08936758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 339u, 0x089E18E8u>(ctx, &aot_mem) && ctx.pc == 0x08936758u) goto L_08936758;
    return;
L_08936758:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936768;
      }
      goto L_08936760;
    }
L_08936760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_08936768;
    }
L_08936768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_08936770;
    }
L_08936770:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16976)));
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    ctx.gpr[6] = (16355u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 36409u);
    ctx.gpr[31] = (0x089367B8u);
    ctx.fpr[13] = get_effective_aspect_ratio(std::bit_cast<float>(ctx.gpr[6]));
    ctx.fpr[12] = widen_horizontal_extent(ctx.fpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 586u, 0x0893A7A4u>(ctx, &aot_mem) && ctx.pc == 0x089367B8u) goto L_089367B8;
    return;
L_089367B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_089367C0;
    }
L_089367C0:
    ctx.gpr[31] = (0x089367C8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_0893505C;
L_089367C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089367D8;
      }
      goto L_089367D0;
    }
L_089367D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_089367D8;
    }
L_089367D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_089367E0;
    }
L_089367E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_089367E8;
    }
L_089367E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_089367F0;
    }
L_089367F0:
    ctx.gpr[31] = (0x089367F8u);
    // nop
    goto L_08935054;
L_089367F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_08936800;
    }
L_08936800:
    ctx.gpr[2] = (0u | 2u);
    goto L_08936804;
L_08936804:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936810:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19660), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19681), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893681C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08936838;
      }
      goto L_08936834;
    }
L_08936834:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    goto L_08936838;
L_08936838:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08936850u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 80u, 0x08B64728u>(ctx, &aot_mem) && ctx.pc == 0x08936850u) goto L_08936850;
    return;
L_08936850:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893685C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936864:
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[0];
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-784));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), ctx.gpr[31]);
    ctx.gpr[31] = (0x08936898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 815u, 0x08B3AE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08936898u) goto L_08936898;
    return;
L_08936898:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(3688), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (ctx.fcr31);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-3969));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    ctx.fcr31 = ctx.gpr[8] & 0x0181FFFFu;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4164)));
    ctx.gpr[31] = (0x089368B8u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08B73664u;
    return;
L_089368B8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19388));
    ctx.gpr[31] = (0x089368C4u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B73134u;
    return;
L_089368C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089368D4;
      }
      goto L_089368CC;
    }
L_089368CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089368CC;
      }
      goto L_089368D4;
    }
L_089368D4:
    ctx.gpr[31] = (0x089368DCu);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_089368DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089368E0;
L_089368E0:
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089368F8;
      }
      goto L_089368EC;
    }
L_089368EC:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936910;
      }
      goto L_089368F8;
    }
L_089368F8:
    ctx.gpr[31] = (0x08936900u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08936900:
    ctx.gpr[31] = (0x08936908u);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_08936908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089368E0;
      }
      goto L_08936910;
    }
L_08936910:
    ctx.gpr[31] = (0x08936918u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B7311Cu;
    return;
L_08936918:
    ctx.gpr[31] = (0x08936920u);
    // nop
    ctx.pc = 0x08B73104u;
    return;
L_08936920:
    ctx.gpr[31] = (0x08936928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 733u, 0x08B3AAE8u>(ctx, &aot_mem) && ctx.pc == 0x08936928u) goto L_08936928;
    return;
L_08936928:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936940;
      }
      goto L_08936930;
    }
L_08936930:
    ctx.gpr[31] = (0x08936938u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08936938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936920;
      }
      goto L_08936940;
    }
L_08936940:
    ctx.gpr[31] = (0x08936948u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B7311Cu;
    return;
L_08936948:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893695Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11096));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 186u, 0x088B5310u>(ctx, &aot_mem) && ctx.pc == 0x0893695Cu) goto L_0893695C;
    return;
L_0893695C:
    ctx.gpr[31] = (0x08936964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 733u, 0x08B3AAE8u>(ctx, &aot_mem) && ctx.pc == 0x08936964u) goto L_08936964;
    return;
L_08936964:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936920;
      }
      goto L_0893696C;
    }
L_0893696C:
    ctx.gpr[31] = (0x08936974u);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_08936974:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936920;
      }
      goto L_08936980;
    }
L_08936980:
    ctx.gpr[31] = (0x08936988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 761u, 0x08B1B36Cu>(ctx, &aot_mem) && ctx.pc == 0x08936988u) goto L_08936988;
    return;
L_08936988:
    ctx.gpr[31] = (0x08936990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 96u, 0x08B60838u>(ctx, &aot_mem) && ctx.pc == 0x08936990u) goto L_08936990;
    return;
L_08936990:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x089369A8u);
    ctx.gpr[6] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem) && ctx.pc == 0x089369A8u) goto L_089369A8;
    return;
L_089369A8:
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x089369BCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem) && ctx.pc == 0x089369BCu) goto L_089369BC;
    return;
L_089369BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[31] = (0x089369CCu);
    ctx.gpr[6] = (0u | 6144u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem) && ctx.pc == 0x089369CCu) goto L_089369CC;
    return;
L_089369CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x089369DCu);
    ctx.gpr[6] = (0u | 6144u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem) && ctx.pc == 0x089369DCu) goto L_089369DC;
    return;
L_089369DC:
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[31] = (0x089369F0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11264));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem) && ctx.pc == 0x089369F0u) goto L_089369F0;
    return;
L_089369F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[31] = (0x08936A00u);
    ctx.gpr[6] = (0u | 11264u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem) && ctx.pc == 0x08936A00u) goto L_08936A00;
    return;
L_08936A00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[31] = (0x08936A10u);
    ctx.gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem) && ctx.pc == 0x08936A10u) goto L_08936A10;
    return;
L_08936A10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[31] = (0x08936A20u);
    ctx.gpr[6] = (0u | 3072u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem) && ctx.pc == 0x08936A20u) goto L_08936A20;
    return;
L_08936A20:
    ctx.gpr[6] = (0u | 46080u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08936A30u);
    ctx.gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem) && ctx.pc == 0x08936A30u) goto L_08936A30;
    return;
L_08936A30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[31] = (0x08936A40u);
    ctx.gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem) && ctx.pc == 0x08936A40u) goto L_08936A40;
    return;
L_08936A40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[31] = (0x08936A50u);
    ctx.gpr[6] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem) && ctx.pc == 0x08936A50u) goto L_08936A50;
    return;
L_08936A50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[31] = (0x08936A60u);
    ctx.gpr[6] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem) && ctx.pc == 0x08936A60u) goto L_08936A60;
    return;
L_08936A60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 112u);
    ctx.gpr[31] = (0x08936A70u);
    ctx.gpr[6] = (0u | 30720u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem) && ctx.pc == 0x08936A70u) goto L_08936A70;
    return;
L_08936A70:
    ctx.gpr[6] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[31] = (0x08936A84u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8192));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem) && ctx.pc == 0x08936A84u) goto L_08936A84;
    return;
L_08936A84:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(29232));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08936A98u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem) && ctx.pc == 0x08936A98u) goto L_08936A98;
    return;
L_08936A98:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    ctx.gpr[31] = (0x08936AACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17596));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 690u, 0x08ABF324u>(ctx, &aot_mem) && ctx.pc == 0x08936AACu) goto L_08936AAC;
    return;
L_08936AAC:
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08936ABCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17744));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 690u, 0x08ABF324u>(ctx, &aot_mem) && ctx.pc == 0x08936ABCu) goto L_08936ABC;
    return;
L_08936ABC:
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08936ACCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 690u, 0x08ABF324u>(ctx, &aot_mem) && ctx.pc == 0x08936ACCu) goto L_08936ACC;
    return;
L_08936ACC:
    ctx.gpr[31] = (0x08936AD4u);
    // nop
    ctx.pc = 0x08B73494u;
    return;
L_08936AD4:
    ctx.gpr[31] = (0x08936ADCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 107u, 0x08B2090Cu>(ctx, &aot_mem) && ctx.pc == 0x08936ADCu) goto L_08936ADC;
    return;
L_08936ADC:
    ctx.gpr[31] = (0x08936AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 294u, 0x08939238u>(ctx, &aot_mem) && ctx.pc == 0x08936AE4u) goto L_08936AE4;
    return;
L_08936AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936AF8;
      }
      goto L_08936AF0;
    }
L_08936AF0:
    ctx.gpr[31] = (0x08936AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08936AF8u) goto L_08936AF8;
    return;
L_08936AF8:
    ctx.gpr[31] = (0x08936B00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 874u, 0x08953E60u>(ctx, &aot_mem) && ctx.pc == 0x08936B00u) goto L_08936B00;
    return;
L_08936B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936B14;
      }
      goto L_08936B0C;
    }
L_08936B0C:
    ctx.gpr[31] = (0x08936B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08936B14u) goto L_08936B14;
    return;
L_08936B14:
    ctx.gpr[31] = (0x08936B1Cu);
    // nop
    goto L_089343AC;
L_08936B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936B30;
      }
      goto L_08936B28;
    }
L_08936B28:
    ctx.gpr[31] = (0x08936B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08936B30u) goto L_08936B30;
    return;
L_08936B30:
    ctx.gpr[31] = (0x08936B38u);
    // nop
    goto L_089343D8;
L_08936B38:
    ctx.gpr[31] = (0x08936B40u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19661), static_cast<std::uint8_t>(0u));
    goto L_08934828;
L_08936B40:
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[31] = (0x08936B4Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 285u, 0x089E16B4u>(ctx, &aot_mem) && ctx.pc == 0x08936B4Cu) goto L_08936B4C;
    return;
L_08936B4C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936B5C;
      }
      goto L_08936B54;
    }
L_08936B54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08936F44;
      }
      goto L_08936B5C;
    }
L_08936B5C:
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[5] = (2247u << 16u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(8888));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[31] = (0x08936B78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 502u, 0x08AB5E04u>(ctx, &aot_mem) && ctx.pc == 0x08936B78u) goto L_08936B78;
    return;
L_08936B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8888)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936EA4;
      }
      goto L_08936B84;
    }
L_08936B84:
    ctx.gpr[31] = (0x08936B8Cu);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_08936B8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08936B90;
L_08936B90:
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08936BA8;
      }
      goto L_08936B9C;
    }
L_08936B9C:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936BC0;
      }
      goto L_08936BA8;
    }
L_08936BA8:
    ctx.gpr[31] = (0x08936BB0u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08936BB0:
    ctx.gpr[31] = (0x08936BB8u);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_08936BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08936B90;
      }
      goto L_08936BC0;
    }
L_08936BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936BF4;
      }
      goto L_08936BCC;
    }
L_08936BCC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08936BD8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08936BD8u) goto L_08936BD8;
    return;
L_08936BD8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936BF0;
      }
      goto L_08936BE4;
    }
L_08936BE4:
    ctx.gpr[31] = (0x08936BECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08936BECu) goto L_08936BEC;
    return;
L_08936BEC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08936BF0;
L_08936BF0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08936BF4;
L_08936BF4:
    ctx.gpr[31] = (0x08936BFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 447u, 0x089F656Cu>(ctx, &aot_mem) && ctx.pc == 0x08936BFCu) goto L_08936BFC;
    return;
L_08936BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8888)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08936CC8;
      }
      goto L_08936C0C;
    }
L_08936C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08936C44;
    }
    goto L_08936C18;
L_08936C18:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08936C24u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08936C24u) goto L_08936C24;
    return;
L_08936C24:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936C3C;
      }
      goto L_08936C30;
    }
L_08936C30:
    ctx.gpr[31] = (0x08936C38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08936C38u) goto L_08936C38;
    return;
L_08936C38:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08936C3C;
L_08936C3C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08936C44;
L_08936C44:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19380));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08936C54u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem) && ctx.pc == 0x08936C54u) goto L_08936C54;
    return;
L_08936C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_08936C8C;
      }
      goto L_08936C60;
    }
L_08936C60:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08936C6Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08936C6Cu) goto L_08936C6C;
    return;
L_08936C6C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936C84;
      }
      goto L_08936C78;
    }
L_08936C78:
    ctx.gpr[31] = (0x08936C80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08936C80u) goto L_08936C80;
    return;
L_08936C80:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08936C84;
L_08936C84:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    goto L_08936C8C;
L_08936C8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19372));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08936CA0u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem) && ctx.pc == 0x08936CA0u) goto L_08936CA0;
    return;
L_08936CA0:
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[7] = (2247u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19364));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-544));
    ctx.gpr[31] = (0x08936CC0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08936CC0u) goto L_08936CC0;
    return;
L_08936CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08936DA0;
      }
      goto L_08936CC8;
    }
L_08936CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8888)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08936D94;
      }
      goto L_08936CD8;
    }
L_08936CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08936D10;
    }
    goto L_08936CE4;
L_08936CE4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08936CF0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08936CF0u) goto L_08936CF0;
    return;
L_08936CF0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936D08;
      }
      goto L_08936CFC;
    }
L_08936CFC:
    ctx.gpr[31] = (0x08936D04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08936D04u) goto L_08936D04;
    return;
L_08936D04:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08936D08;
L_08936D08:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08936D10;
L_08936D10:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19352));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08936D20u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem) && ctx.pc == 0x08936D20u) goto L_08936D20;
    return;
L_08936D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_08936D58;
      }
      goto L_08936D2C;
    }
L_08936D2C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08936D38u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08936D38u) goto L_08936D38;
    return;
L_08936D38:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936D50;
      }
      goto L_08936D44;
    }
L_08936D44:
    ctx.gpr[31] = (0x08936D4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08936D4Cu) goto L_08936D4C;
    return;
L_08936D4C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08936D50;
L_08936D50:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    goto L_08936D58;
L_08936D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19344));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08936D6Cu);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem) && ctx.pc == 0x08936D6Cu) goto L_08936D6C;
    return;
L_08936D6C:
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[7] = (2247u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19364));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-544));
    ctx.gpr[31] = (0x08936D8Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08936D8Cu) goto L_08936D8C;
    return;
L_08936D8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08936DA0;
      }
      goto L_08936D94;
    }
L_08936D94:
    ctx.gpr[4] = (2247u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-544), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    goto L_08936DA0;
L_08936DA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936E68;
      }
      goto L_08936DA8;
    }
L_08936DA8:
    ctx.gpr[31] = (0x08936DB0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 149u, 0x08860C08u>(ctx, &aot_mem) && ctx.pc == 0x08936DB0u) goto L_08936DB0;
    return;
L_08936DB0:
    ctx.gpr[31] = (0x08936DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 704u, 0x08A06D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08936DB8u) goto L_08936DB8;
    return;
L_08936DB8:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29552));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08936DD8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem) && ctx.pc == 0x08936DD8u) goto L_08936DD8;
    return;
L_08936DD8:
    ctx.gpr[31] = (0x08936DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 723u, 0x08A06FE0u>(ctx, &aot_mem) && ctx.pc == 0x08936DE0u) goto L_08936DE0;
    return;
L_08936DE0:
    ctx.gpr[5] = (2247u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-544));
    ctx.gpr[31] = (0x08936DF0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 636u, 0x08AB650Cu>(ctx, &aot_mem) && ctx.pc == 0x08936DF0u) goto L_08936DF0;
    return;
L_08936DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936E60;
      }
      goto L_08936E04;
    }
L_08936E04:
    ctx.gpr[31] = (0x08936E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 704u, 0x08A06D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08936E0Cu) goto L_08936E0C;
    return;
L_08936E0C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29552));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08936E2Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem) && ctx.pc == 0x08936E2Cu) goto L_08936E2C;
    return;
L_08936E2C:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8728), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08936E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 723u, 0x08A06FE0u>(ctx, &aot_mem) && ctx.pc == 0x08936E44u) goto L_08936E44;
    return;
L_08936E44:
    ctx.gpr[31] = (0x08936E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem) && ctx.pc == 0x08936E4Cu) goto L_08936E4C;
    return;
L_08936E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936E04;
      }
      goto L_08936E60;
    }
L_08936E60:
    ctx.gpr[31] = (0x08936E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 691u, 0x08A06CBCu>(ctx, &aot_mem) && ctx.pc == 0x08936E68u) goto L_08936E68;
    return;
L_08936E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936E9C;
      }
      goto L_08936E74;
    }
L_08936E74:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08936E80u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08936E80u) goto L_08936E80;
    return;
L_08936E80:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936E98;
      }
      goto L_08936E8C;
    }
L_08936E8C:
    ctx.gpr[31] = (0x08936E94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08936E94u) goto L_08936E94;
    return;
L_08936E94:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08936E98;
L_08936E98:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08936E9C;
L_08936E9C:
    ctx.gpr[31] = (0x08936EA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 412u, 0x089F6324u>(ctx, &aot_mem) && ctx.pc == 0x08936EA4u) goto L_08936EA4;
    return;
L_08936EA4:
    ctx.gpr[16] = (0u | 0u);
    goto L_08936EA8;
L_08936EA8:
    ctx.gpr[31] = (0x08936EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 733u, 0x08B3AAE8u>(ctx, &aot_mem) && ctx.pc == 0x08936EB0u) goto L_08936EB0;
    return;
L_08936EB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936EC8;
      }
      goto L_08936EB8;
    }
L_08936EB8:
    ctx.gpr[31] = (0x08936EC0u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08936EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08936EA8;
      }
      goto L_08936EC8;
    }
L_08936EC8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936ED8;
      }
      goto L_08936ED0;
    }
L_08936ED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936B78;
      }
      goto L_08936ED8;
    }
L_08936ED8:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29232));
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936EFC;
      }
      goto L_08936EEC;
    }
L_08936EEC:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08936EFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29232));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 336u, 0x089B9BA0u>(ctx, &aot_mem) && ctx.pc == 0x08936EFCu) goto L_08936EFC;
    return;
L_08936EFC:
    ctx.gpr[31] = (0x08936F04u);
    // nop
    goto L_089349A8;
L_08936F04:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936F1C;
      }
      goto L_08936F0C;
    }
L_08936F0C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08936F1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29232));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem) && ctx.pc == 0x08936F1Cu) goto L_08936F1C;
    return;
L_08936F1C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08936F28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 659u, 0x0887F14Cu>(ctx, &aot_mem) && ctx.pc == 0x08936F28u) goto L_08936F28;
    return;
L_08936F28:
    ctx.gpr[31] = (0x08936F30u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089349C8;
L_08936F30:
    ctx.gpr[31] = (0x08936F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 731u, 0x08AC30B8u>(ctx, &aot_mem) && ctx.pc == 0x08936F38u) goto L_08936F38;
    return;
L_08936F38:
    ctx.gpr[31] = (0x08936F40u);
    // nop
    goto L_08935E28;
L_08936F40:
    ctx.gpr[2] = (0u | 0u);
    goto L_08936F44;
L_08936F44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936F58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.gpr[16] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08936FA8;
      }
      goto L_08936F90;
    }
L_08936F90:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08936FA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08936FA0u) goto L_08936FA0;
    return;
L_08936FA0:
    ctx.gpr[31] = (0x08936FA8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08936FA8u) goto L_08936FA8;
    return;
L_08936FA8:
    ctx.gpr[31] = (0x08936FB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem) && ctx.pc == 0x08936FB0u) goto L_08936FB0;
    return;
L_08936FB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936FE4;
      }
      goto L_08936FB8;
    }
L_08936FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08936FD8;
      }
      goto L_08936FC4;
    }
L_08936FC4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08936FD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08936FD0u) goto L_08936FD0;
    return;
L_08936FD0:
    ctx.gpr[31] = (0x08936FD8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08936FD8u) goto L_08936FD8;
    return;
L_08936FD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937000;
      }
      goto L_08936FE4;
    }
L_08936FE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19682)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16965)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937030;
      }
      goto L_08936FF8;
    }
L_08936FF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
      if (branch_taken) {
          goto L_08937008;
      }
      goto L_08937000;
    }
L_08937000:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19682), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08937294;
      }
      goto L_08937008;
    }
L_08937008:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893701C;
      }
      goto L_08937010;
    }
L_08937010:
    ctx.gpr[31] = (0x08937018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08937018u) goto L_08937018;
    return;
L_08937018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0893701C;
L_0893701C:
    ctx.gpr[31] = (0x08937024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6D78u>(ctx, &aot_mem) && ctx.pc == 0x08937024u) goto L_08937024;
    return;
L_08937024:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937294;
      }
      goto L_08937030;
    }
L_08937030:
    ctx.gpr[31] = (0x08937038u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0893509C;
L_08937038:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16965)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0893704Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 291u, 0x089D1AECu>(ctx, &aot_mem) && ctx.pc == 0x0893704Cu) goto L_0893704C;
    return;
L_0893704C:
    ctx.gpr[4] = (17392u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[4] = (17288u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32304));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08937080;
      }
      goto L_08937074;
    }
L_08937074:
    ctx.gpr[31] = (0x0893707Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0893707Cu) goto L_0893707C;
    return;
L_0893707C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08937080;
L_08937080:
    ctx.gpr[31] = (0x08937088u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6D78u>(ctx, &aot_mem) && ctx.pc == 0x08937088u) goto L_08937088;
    return;
L_08937088:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 256u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (0u | 256u);
        goto L_0893709C;
    }
    goto L_0893709C;
L_0893709C:
    ctx.gpr[4] = (0u | 50u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089370AC;
    }
    goto L_089370AC;
L_089370AC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1948)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089370BC;
      }
      goto L_089370B8;
    }
L_089370B8:
    ctx.gpr[17] = (0u | 0u);
    goto L_089370BC;
L_089370BC:
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16968)));
        goto L_089370E0;
    }
    goto L_089370CC;
L_089370CC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089371D0;
      }
      goto L_089370E0;
    }
L_089370E0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16967)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16966)));
    ctx.gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (0u | 256u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[17]);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] >> 24u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[17] = (ctx.gpr[9] - ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 0 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 0u);
        goto L_08937188;
    }
    goto L_08937188;
L_08937188:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    ctx.gpr[4] = (15232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 255u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 255u);
        goto L_089371CC;
    }
    goto L_089371CC;
L_089371CC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_089371D0;
L_089371D0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089371E8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089371E8u) goto L_089371E8;
    return;
L_089371E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08937228u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08937228u) goto L_08937228;
    return;
L_08937228:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16965)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937290;
      }
      goto L_08937234;
    }
L_08937234:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1948)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937290;
      }
      goto L_08937240;
    }
L_08937240:
    ctx.gpr[4] = (0u | 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x0893726Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0893726Cu) goto L_0893726C;
    return;
L_0893726C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08937288u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 76u, 0x08AF46A4u>(ctx, &aot_mem) && ctx.pc == 0x08937288u) goto L_08937288;
    return;
L_08937288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937294;
      }
      goto L_08937290;
    }
L_08937290:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19682), static_cast<std::uint8_t>(0u));
    goto L_08937294;
L_08937294:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089372C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937320;
      }
      goto L_089372F8;
    }
L_089372F8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08937304u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08937304u) goto L_08937304;
    return;
L_08937304:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893731C;
      }
      goto L_08937310;
    }
L_08937310:
    ctx.gpr[31] = (0x08937318u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08937318u) goto L_08937318;
    return;
L_08937318:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0893731C;
L_0893731C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08937320;
L_08937320:
    ctx.gpr[31] = (0x08937328u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 411u, 0x089F6318u>(ctx, &aot_mem) && ctx.pc == 0x08937328u) goto L_08937328;
    return;
L_08937328:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089373A8;
      }
      goto L_08937330;
    }
L_08937330:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19600));
      if (branch_taken) {
          goto L_08937364;
      }
      goto L_0893733C;
    }
L_0893733C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08937348u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08937348u) goto L_08937348;
    return;
L_08937348:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937360;
      }
      goto L_08937354;
    }
L_08937354:
    ctx.gpr[31] = (0x0893735Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0893735Cu) goto L_0893735C;
    return;
L_0893735C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08937360;
L_08937360:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08937364;
L_08937364:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08937370u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 441u, 0x089F64FCu>(ctx, &aot_mem) && ctx.pc == 0x08937370u) goto L_08937370;
    return;
L_08937370:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089373A8;
      }
      goto L_08937378;
    }
L_08937378:
    ctx.gpr[31] = (0x08937380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 302u, 0x08939298u>(ctx, &aot_mem) && ctx.pc == 0x08937380u) goto L_08937380;
    return;
L_08937380:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19332)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7713), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19332), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16968)));
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089373B0;
      }
      goto L_089373A0;
    }
L_089373A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089373CC;
      }
      goto L_089373A8;
    }
L_089373A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089379F8;
      }
      goto L_089373B0;
    }
L_089373B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16967)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089373CC;
      }
      goto L_089373BC;
    }
L_089373BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16966)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089373CC;
      }
      goto L_089373C8;
    }
L_089373C8:
    ctx.gpr[17] = (0u | 1u);
    goto L_089373CC;
L_089373CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08937570;
      }
      goto L_089373E0;
    }
L_089373E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[19] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08937408;
      }
      goto L_089373F0;
    }
L_089373F0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08937400u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08937400u) goto L_08937400;
    return;
L_08937400:
    ctx.gpr[31] = (0x08937408u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08937408u) goto L_08937408;
    return;
L_08937408:
    ctx.gpr[31] = (0x08937410u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem) && ctx.pc == 0x08937410u) goto L_08937410;
    return;
L_08937410:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937570;
      }
      goto L_08937418;
    }
L_08937418:
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08937494;
      }
      goto L_0893742C;
    }
L_0893742C:
    ctx.gpr[31] = (0x08937434u);
    ctx.gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08937434u) goto L_08937434;
    return;
L_08937434:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937494;
      }
      goto L_0893743C;
    }
L_0893743C:
    ctx.gpr[31] = (0x08937444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08937444u) goto L_08937444;
    return;
L_08937444:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08937490;
      }
      goto L_08937458;
    }
L_08937458:
    ctx.gpr[31] = (0x08937460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08937460u) goto L_08937460;
    return;
L_08937460:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08937490;
      }
      goto L_08937474;
    }
L_08937474:
    ctx.gpr[31] = (0x0893747Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0893747Cu) goto L_0893747C;
    return;
L_0893747C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08937494;
      }
      goto L_08937490;
    }
L_08937490:
    ctx.gpr[19] = (0u | 1u);
    goto L_08937494;
L_08937494:
    ctx.gpr[31] = (0x0893749Cu);
    // nop
    ctx.pc = 0x08B73514u;
    return;
L_0893749C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089374B0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_089374B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
      if (branch_taken) {
          goto L_08937570;
      }
      goto L_089374DC;
    }
L_089374DC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08937570;
      }
      goto L_089374F4;
    }
L_089374F4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19332), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08937544;
      }
      goto L_08937500;
    }
L_08937500:
    ctx.gpr[31] = (0x08937508u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.pc = 0x08B73514u;
    return;
L_08937508:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0893751Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_0893751C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08937544;
L_08937544:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08937558u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    goto L_08936864;
L_08937558:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08937570;
L_08937570:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089375B0;
      }
      goto L_0893757C;
    }
L_0893757C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19336)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089375B0;
      }
      goto L_08937590;
    }
L_08937590:
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089375B0;
      }
      goto L_089375AC;
    }
L_089375AC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19336), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089375B0;
L_089375B0:
    ctx.gpr[31] = (0x089375B8u);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 302u, 0x08939298u>(ctx, &aot_mem) && ctx.pc == 0x089375B8u) goto L_089375B8;
    return;
L_089375B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937680;
      }
      goto L_089375C0;
    }
L_089375C0:
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19328)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08937624;
      }
      goto L_089375E4;
    }
L_089375E4:
    ctx.gpr[31] = (0x089375ECu);
    // nop
    ctx.pc = 0x08B73514u;
    return;
L_089375EC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08937600u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_08937600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08937624;
L_08937624:
    ctx.gpr[31] = (0x0893762Cu);
    ctx.gpr[18] = (0u | 0u);
    ctx.pc = 0x08B73514u;
    return;
L_0893762C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08937640u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_08937640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19328)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08937678;
    }
    goto L_08937678;
L_08937678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08937684;
      }
      goto L_08937680;
    }
L_08937680:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19328), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08937684;
L_08937684:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089376A0;
      }
      goto L_0893768C;
    }
L_0893768C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19336)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08937900;
      }
      goto L_089376A0;
    }
L_089376A0:
    ctx.gpr[31] = (0x089376A8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x089376A8u) goto L_089376A8;
    return;
L_089376A8:
    ctx.gpr[31] = (0x089376B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x089376B0u) goto L_089376B0;
    return;
L_089376B0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937818;
      }
      goto L_089376B8;
    }
L_089376B8:
    ctx.gpr[20] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_089376F4;
      }
      goto L_089376C4;
    }
L_089376C4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x089376ECu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x089376ECu) goto L_089376EC;
    return;
L_089376EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893771C;
      }
      goto L_089376F4;
    }
L_089376F4:
    ctx.gpr[4] = (0u | 237u);
    ctx.gpr[5] = (0u | 130u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 180u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0893771Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x0893771Cu) goto L_0893771C;
    return;
L_0893771C:
    ctx.gpr[31] = (0x08937724u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x08937724u) goto L_08937724;
    return;
L_08937724:
    ctx.gpr[31] = (0x0893772Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 306u, 0x089392C8u>(ctx, &aot_mem) && ctx.pc == 0x0893772Cu) goto L_0893772C;
    return;
L_0893772C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937798;
      }
      goto L_08937734;
    }
L_08937734:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089377E8;
      }
      goto L_08937740;
    }
L_08937740:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19324));
      if (branch_taken) {
          goto L_08937774;
      }
      goto L_0893774C;
    }
L_0893774C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08937758u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08937758u) goto L_08937758;
    return;
L_08937758:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937770;
      }
      goto L_08937764;
    }
L_08937764:
    ctx.gpr[31] = (0x0893776Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0893776Cu) goto L_0893776C;
    return;
L_0893776C:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08937770;
L_08937770:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08937774;
L_08937774:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08937780u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08937780u) goto L_08937780;
    return;
L_08937780:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08937790u);
    ctx.gpr[6] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x08937790u) goto L_08937790;
    return;
L_08937790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089377E8;
      }
      goto L_08937798;
    }
L_08937798:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089377D0;
      }
      goto L_089377A4;
    }
L_089377A4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089377B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089377B0u) goto L_089377B0;
    return;
L_089377B0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089377C8;
      }
      goto L_089377BC;
    }
L_089377BC:
    ctx.gpr[31] = (0x089377C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089377C4u) goto L_089377C4;
    return;
L_089377C4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089377C8;
L_089377C8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089377D0;
L_089377D0:
    ctx.gpr[31] = (0x089377D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089377D8u) goto L_089377D8;
    return;
L_089377D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089377E8u);
    ctx.gpr[6] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089377E8u) goto L_089377E8;
    return;
L_089377E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08937810;
      }
      goto L_089377F4;
    }
L_089377F4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08937804u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08937804u) goto L_08937804;
    return;
L_08937804:
    ctx.gpr[31] = (0x0893780Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0893780Cu) goto L_0893780C;
    return;
L_0893780C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08937810;
L_08937810:
    ctx.gpr[31] = (0x08937818u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 615u, 0x0882E9D8u>(ctx, &aot_mem) && ctx.pc == 0x08937818u) goto L_08937818;
    return;
L_08937818:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19336)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089379F8;
      }
      goto L_0893782C;
    }
L_0893782C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08937838u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x08937838u) goto L_08937838;
    return;
L_08937838:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19336)));
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19324));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08937880;
      }
      goto L_08937850;
    }
L_08937850:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08937878u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x08937878u) goto L_08937878;
    return;
L_08937878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_089378AC;
      }
      goto L_08937880;
    }
L_08937880:
    ctx.gpr[5] = (0u | 237u);
    ctx.gpr[6] = (0u | 130u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 180u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089378A8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x089378A8u) goto L_089378A8;
    return;
L_089378A8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_089378AC;
L_089378AC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089378E0;
      }
      goto L_089378B4;
    }
L_089378B4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089378C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089378C0u) goto L_089378C0;
    return;
L_089378C0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089378D8;
      }
      goto L_089378CC;
    }
L_089378CC:
    ctx.gpr[31] = (0x089378D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089378D4u) goto L_089378D4;
    return;
L_089378D4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089378D8;
L_089378D8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089378E0;
L_089378E0:
    ctx.gpr[31] = (0x089378E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089378E8u) goto L_089378E8;
    return;
L_089378E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089378F8u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089378F8u) goto L_089378F8;
    return;
L_089378F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089379F8;
      }
      goto L_08937900;
    }
L_08937900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08937928;
      }
      goto L_08937910;
    }
L_08937910:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08937920u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08937920u) goto L_08937920;
    return;
L_08937920:
    ctx.gpr[31] = (0x08937928u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08937928u) goto L_08937928;
    return;
L_08937928:
    ctx.gpr[31] = (0x08937930u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem) && ctx.pc == 0x08937930u) goto L_08937930;
    return;
L_08937930:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089379F8;
      }
      goto L_08937938;
    }
L_08937938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08937958;
      }
      goto L_08937944;
    }
L_08937944:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08937950u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08937950u) goto L_08937950;
    return;
L_08937950:
    ctx.gpr[31] = (0x08937958u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08937958u) goto L_08937958;
    return;
L_08937958:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089379F8;
      }
      goto L_08937964;
    }
L_08937964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43)));
        goto L_08937990;
    }
    goto L_08937970;
L_08937970:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08937980u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08937980u) goto L_08937980;
    return;
L_08937980:
    ctx.gpr[31] = (0x08937988u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08937988u) goto L_08937988;
    return;
L_08937988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43)));
    goto L_08937990;
L_08937990:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089379CC;
      }
      goto L_08937998;
    }
L_08937998:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089379BC;
      }
      goto L_089379A0;
    }
L_089379A0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x089379B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x089379B0u) goto L_089379B0;
    return;
L_089379B0:
    ctx.gpr[31] = (0x089379B8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x089379B8u) goto L_089379B8;
    return;
L_089379B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089379BC;
L_089379BC:
    ctx.gpr[31] = (0x089379C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 615u, 0x0882E9D8u>(ctx, &aot_mem) && ctx.pc == 0x089379C4u) goto L_089379C4;
    return;
L_089379C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089379F8;
      }
      goto L_089379CC;
    }
L_089379CC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089379F0;
      }
      goto L_089379D4;
    }
L_089379D4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x089379E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x089379E4u) goto L_089379E4;
    return;
L_089379E4:
    ctx.gpr[31] = (0x089379ECu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x089379ECu) goto L_089379EC;
    return;
L_089379EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089379F0;
L_089379F0:
    ctx.gpr[31] = (0x089379F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 615u, 0x0882E9D8u>(ctx, &aot_mem) && ctx.pc == 0x089379F8u) goto L_089379F8;
    return;
L_089379F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937A28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08937A58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08937A58u) goto L_08937A58;
    return;
L_08937A58:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08937A64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08937A64u) goto L_08937A64;
    return;
L_08937A64:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29232));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(301)));
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32304));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (0u | 2u);
      if (branch_taken) {
          goto L_08937A8C;
      }
      goto L_08937A84;
    }
L_08937A84:
    ctx.gpr[31] = (0x08937A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08937A8Cu) goto L_08937A8C;
    return;
L_08937A8C:
    ctx.gpr[31] = (0x08937A94u);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_08937A94:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937B9C;
      }
      goto L_08937AA0;
    }
L_08937AA0:
    ctx.gpr[31] = (0x08937AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 298u, 0x08939268u>(ctx, &aot_mem) && ctx.pc == 0x08937AA8u) goto L_08937AA8;
    return;
L_08937AA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937B9C;
      }
      goto L_08937AB0;
    }
L_08937AB0:
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28320));
    goto L_08937AC4;
L_08937AC4:
    ctx.gpr[5] = (ctx.gpr[16] & 255u);
    ctx.gpr[31] = (0x08937AD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 425u, 0x088CA2F4u>(ctx, &aot_mem) && ctx.pc == 0x08937AD0u) goto L_08937AD0;
    return;
L_08937AD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AE4;
      }
      goto L_08937AD8;
    }
L_08937AD8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(22));
    ctx.gpr[31] = (0x08937AE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x08937AE4u) goto L_08937AE4;
    return;
L_08937AE4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937AC4;
      }
      goto L_08937AF4;
    }
L_08937AF4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08937B00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 528u, 0x08A0611Cu>(ctx, &aot_mem) && ctx.pc == 0x08937B00u) goto L_08937B00;
    return;
L_08937B00:
    ctx.gpr[31] = (0x08937B08u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A05EFCu>(ctx, &aot_mem) && ctx.pc == 0x08937B08u) goto L_08937B08;
    return;
L_08937B08:
    ctx.gpr[31] = (0x08937B10u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08935704;
L_08937B10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937B38;
      }
      goto L_08937B1C;
    }
L_08937B1C:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19520));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08937B30u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0893570C;
L_08937B30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937B4C;
      }
      goto L_08937B38;
    }
L_08937B38:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08937B4Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_0893570C;
L_08937B4C:
    ctx.gpr[16] = (0u | 0u);
    goto L_08937B50;
L_08937B50:
    ctx.gpr[31] = (0x08937B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08937B58u) goto L_08937B58;
    return;
L_08937B58:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08937B64u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.pc = 0x08B7310Cu;
    return;
L_08937B64:
    ctx.gpr[31] = (0x08937B6Cu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B73114u;
    return;
L_08937B6C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
      if (branch_taken) {
          goto L_08937B80;
      }
      goto L_08937B74;
    }
L_08937B74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937B80;
      }
      goto L_08937B7C;
    }
L_08937B7C:
    ctx.gpr[16] = (0u | 1u);
    goto L_08937B80;
L_08937B80:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937B50;
      }
      goto L_08937B88;
    }
L_08937B88:
    ctx.gpr[31] = (0x08937B90u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08935704;
L_08937B90:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08937B9Cu);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 528u, 0x08A0611Cu>(ctx, &aot_mem) && ctx.pc == 0x08937B9Cu) goto L_08937B9C;
    return;
L_08937B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
        goto L_08937BB4;
    }
    goto L_08937BA8;
L_08937BA8:
    ctx.gpr[31] = (0x08937BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem) && ctx.pc == 0x08937BB0u) goto L_08937BB0;
    return;
L_08937BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08937BB4;
L_08937BB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937BCC;
      }
      goto L_08937BC0;
    }
L_08937BC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937BD8;
      }
      goto L_08937BCC;
    }
L_08937BCC:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8752), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08937BE0;
      }
      goto L_08937BD8;
    }
L_08937BD8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8752), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937BE0;
L_08937BE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937BF4;
      }
      goto L_08937BEC;
    }
L_08937BEC:
    ctx.gpr[31] = (0x08937BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 65u, 0x08A30754u>(ctx, &aot_mem) && ctx.pc == 0x08937BF4u) goto L_08937BF4;
    return;
L_08937BF4:
    ctx.gpr[31] = (0x08937BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 36u, 0x08AF431Cu>(ctx, &aot_mem) && ctx.pc == 0x08937BFCu) goto L_08937BFC;
    return;
L_08937BFC:
    ctx.gpr[31] = (0x08937C04u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7908), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 71u, 0x08AC4318u>(ctx, &aot_mem) && ctx.pc == 0x08937C04u) goto L_08937C04;
    return;
L_08937C04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937C18;
      }
      goto L_08937C10;
    }
L_08937C10:
    ctx.gpr[31] = (0x08937C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 67u, 0x08A30774u>(ctx, &aot_mem) && ctx.pc == 0x08937C18u) goto L_08937C18;
    return;
L_08937C18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937C38;
      }
      goto L_08937C24;
    }
L_08937C24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937C38;
      }
      goto L_08937C30;
    }
L_08937C30:
    ctx.gpr[31] = (0x08937C38u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A05EFCu>(ctx, &aot_mem) && ctx.pc == 0x08937C38u) goto L_08937C38;
    return;
L_08937C38:
    ctx.gpr[31] = (0x08937C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 17u, 0x088B81D4u>(ctx, &aot_mem) && ctx.pc == 0x08937C40u) goto L_08937C40;
    return;
L_08937C40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19683)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937C7C;
      }
      goto L_08937C4C;
    }
L_08937C4C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08937C5Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem) && ctx.pc == 0x08937C5Cu) goto L_08937C5C;
    return;
L_08937C5C:
    ctx.gpr[31] = (0x08937C64u);
    // nop
    goto L_089353A0;
L_08937C64:
    ctx.gpr[31] = (0x08937C6Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0893509C;
L_08937C6C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19683), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1948), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16965), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937C7C;
L_08937C7C:
    ctx.gpr[31] = (0x08937C84u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 74u, 0x08A1C770u>(ctx, &aot_mem) && ctx.pc == 0x08937C84u) goto L_08937C84;
    return;
L_08937C84:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08937CAC;
      }
      goto L_08937C8C;
    }
L_08937C8C:
    ctx.gpr[31] = (0x08937C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 483u, 0x08ABAAD8u>(ctx, &aot_mem) && ctx.pc == 0x08937C94u) goto L_08937C94;
    return;
L_08937C94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937CAC;
      }
      goto L_08937CA0;
    }
L_08937CA0:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4211), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4212), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672), static_cast<std::uint8_t>(0u));
    goto L_08937CAC;
L_08937CAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4212)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937CD4;
      }
      goto L_08937CB8;
    }
L_08937CB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19660)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19681)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937D14;
      }
      goto L_08937CCC;
    }
L_08937CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937F34;
      }
      goto L_08937CD4;
    }
L_08937CD4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19681), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08937CECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem) && ctx.pc == 0x08937CECu) goto L_08937CEC;
    return;
L_08937CEC:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1948), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[31] = (0x08937CF8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 91u, 0x08A1C8D0u>(ctx, &aot_mem) && ctx.pc == 0x08937CF8u) goto L_08937CF8;
    return;
L_08937CF8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08937D0Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_0893570C;
L_08937D0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08937FA0;
      }
      goto L_08937D14;
    }
L_08937D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08937D3C;
      }
      goto L_08937D24;
    }
L_08937D24:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08937D34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08937D34u) goto L_08937D34;
    return;
L_08937D34:
    ctx.gpr[31] = (0x08937D3Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08937D3Cu) goto L_08937D3C;
    return;
L_08937D3C:
    ctx.gpr[31] = (0x08937D44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem) && ctx.pc == 0x08937D44u) goto L_08937D44;
    return;
L_08937D44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937E64;
      }
      goto L_08937D4C;
    }
L_08937D4C:
    ctx.gpr[31] = (0x08937D54u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 74u, 0x08A1C770u>(ctx, &aot_mem) && ctx.pc == 0x08937D54u) goto L_08937D54;
    return;
L_08937D54:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08937E64;
      }
      goto L_08937D5C;
    }
L_08937D5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_08937D78;
      }
      goto L_08937D68;
    }
L_08937D68:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937E64;
      }
      goto L_08937D78;
    }
L_08937D78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8592)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
        goto L_08937DBC;
    }
    goto L_08937D84;
L_08937D84:
    ctx.gpr[31] = (0x08937D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem) && ctx.pc == 0x08937D8Cu) goto L_08937D8C;
    return;
L_08937D8C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
        goto L_08937DBC;
    }
    goto L_08937D94;
L_08937D94:
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[31] = (0x08937DB4u);
    ctx.gpr[10] = (0u | 255u);
    goto L_08934B9C;
L_08937DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937E0C;
      }
      goto L_08937DBC;
    }
L_08937DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11068)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11072)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11076)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11080)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11084)));
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11088)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[9] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[9] = (ctx.gpr[10] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[31] = (0x08937E0Cu);
    ctx.gpr[10] = (0u | 255u);
    goto L_08934B9C;
L_08937E0C:
    ctx.gpr[31] = (0x08937E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem) && ctx.pc == 0x08937E14u) goto L_08937E14;
    return;
L_08937E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11148)));
    ctx.gpr[31] = (0x08937E24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 117u, 0x088907E8u>(ctx, &aot_mem) && ctx.pc == 0x08937E24u) goto L_08937E24;
    return;
L_08937E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11152)));
    ctx.gpr[31] = (0x08937E34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 137u, 0x08890970u>(ctx, &aot_mem) && ctx.pc == 0x08937E34u) goto L_08937E34;
    return;
L_08937E34:
    ctx.gpr[31] = (0x08937E3Cu);
    // nop
    goto L_0893608C;
L_08937E3C:
    ctx.gpr[31] = (0x08937E44u);
    // nop
    goto L_08936138;
L_08937E44:
    ctx.gpr[31] = (0x08937E4Cu);
    // nop
    goto L_08936130;
L_08937E4C:
    ctx.gpr[31] = (0x08937E54u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 107u, 0x08A1C9E4u>(ctx, &aot_mem) && ctx.pc == 0x08937E54u) goto L_08937E54;
    return;
L_08937E54:
    ctx.gpr[31] = (0x08937E5Cu);
    // nop
    goto L_08936250;
L_08937E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937ED8;
      }
      goto L_08937E64;
    }
L_08937E64:
    ctx.gpr[31] = (0x08937E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 438u, 0x08975D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08937E6Cu) goto L_08937E6C;
    return;
L_08937E6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16976)));
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    ctx.gpr[5] = (16355u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 36409u);
    ctx.fpr[13] = get_effective_aspect_ratio(std::bit_cast<float>(ctx.gpr[5]));
    ctx.fpr[12] = widen_horizontal_extent(ctx.fpr[12]);
    ctx.gpr[31] = (0x08937EB8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 586u, 0x0893A7A4u>(ctx, &aot_mem) && ctx.pc == 0x08937EB8u) goto L_08937EB8;
    return;
L_08937EB8:
    ctx.gpr[31] = (0x08937EC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 394u, 0x08946158u>(ctx, &aot_mem) && ctx.pc == 0x08937EC0u) goto L_08937EC0;
    return;
L_08937EC0:
    ctx.gpr[31] = (0x08937EC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 276u, 0x089E1640u>(ctx, &aot_mem) && ctx.pc == 0x08937EC8u) goto L_08937EC8;
    return;
L_08937EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8892));
    ctx.gpr[31] = (0x08937ED8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 130u, 0x088908D4u>(ctx, &aot_mem) && ctx.pc == 0x08937ED8u) goto L_08937ED8;
    return;
L_08937ED8:
    ctx.gpr[31] = (0x08937EE0u);
    // nop
    goto L_089365BC;
L_08937EE0:
    ctx.gpr[31] = (0x08937EE8u);
    // nop
    goto L_08936F58;
L_08937EE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19683)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937F04;
      }
      goto L_08937EF4;
    }
L_08937EF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08937F24;
      }
      goto L_08937F04;
    }
L_08937F04:
    ctx.gpr[31] = (0x08937F0Cu);
    // nop
    goto L_089366D8;
L_08937F0C:
    ctx.gpr[31] = (0x08937F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 747u, 0x0897EE30u>(ctx, &aot_mem) && ctx.pc == 0x08937F14u) goto L_08937F14;
    return;
L_08937F14:
    ctx.gpr[31] = (0x08937F1Cu);
    ctx.gpr[4] = (0u | 1u);
    goto L_08934F28;
L_08937F1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937F3C;
      }
      goto L_08937F24;
    }
L_08937F24:
    ctx.gpr[31] = (0x08937F2Cu);
    ctx.gpr[4] = (0u | 1u);
    goto L_08934F28;
L_08937F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08937FA0;
      }
      goto L_08937F34;
    }
L_08937F34:
    ctx.gpr[31] = (0x08937F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08937F3Cu) goto L_08937F3C;
    return;
L_08937F3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19683)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937F78;
      }
      goto L_08937F48;
    }
L_08937F48:
    ctx.gpr[31] = (0x08937F50u);
    // nop
    goto L_089353A0;
L_08937F50:
    ctx.gpr[31] = (0x08937F58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0893509C;
L_08937F58:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08937F68u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem) && ctx.pc == 0x08937F68u) goto L_08937F68;
    return;
L_08937F68:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19683), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1948), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16965), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937F78;
L_08937F78:
    ctx.gpr[31] = (0x08937F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem) && ctx.pc == 0x08937F80u) goto L_08937F80;
    return;
L_08937F80:
    ctx.gpr[31] = (0x08937F88u);
    // nop
    goto L_08935E20;
L_08937F88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937F9C;
      }
      goto L_08937F94;
    }
L_08937F94:
    ctx.gpr[31] = (0x08937F9Cu);
    // nop
    goto L_08935C5C;
L_08937F9C:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    goto L_08937FA0;
L_08937FA0:
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
L_08937FC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08937FD8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19652));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem) && ctx.pc == 0x08937FD8u) goto L_08937FD8;
    return;
L_08937FD8:
    ctx.gpr[31] = (0x08937FE0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19316));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08937FE0u) goto L_08937FE0;
    return;
L_08937FE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937FEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[7] = (ctx.gpr[6] ^ 13u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 15u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.pc = 0x08938000u; return;
}

void recomp_unit_0076(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0076_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_76(Runtime &runtime) {
    runtime.register_generated_unit(76u, 0x08934000u, 16384u, &recomp_unit_0076, &recomp_unit_0076_entry);
    runtime.register_function(0x08934000u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934024u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893402Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934048u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934084u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934090u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893409Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934108u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934114u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934124u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934134u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934138u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934140u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934144u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934158u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934164u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934174u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934184u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934188u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934190u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934194u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934220u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934240u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893424Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934260u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893428Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934290u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934310u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934334u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934348u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934354u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934378u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934384u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893438Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934390u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934404u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893440Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934414u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893441Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893442Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934438u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934444u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934458u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934468u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934470u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934478u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934480u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893448Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934494u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893449Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934500u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934508u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934510u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934518u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934520u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934530u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934538u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934540u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934550u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934580u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893458Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934598u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934608u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934614u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893461Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934624u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934630u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934638u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934654u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934668u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934680u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893468Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934698u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934704u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893470Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893472Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934734u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934748u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934768u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893477Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934784u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934794u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934808u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934810u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934814u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934828u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893483Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934844u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893484Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934854u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893485Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934864u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893486Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934878u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934888u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893491Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934928u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934930u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934934u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934950u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934968u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934970u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893497Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934984u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934990u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935000u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935008u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935010u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935024u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935034u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893503Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935044u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935054u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893505Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893506Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935074u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893507Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935084u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935088u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935094u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893509Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935104u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935108u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935110u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935124u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935128u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935130u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935144u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935150u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935164u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893516Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935174u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935178u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935180u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893518Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935194u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935210u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893521Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935230u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935238u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935240u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935254u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935260u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893526Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935278u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935284u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893528Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935298u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893530Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935314u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935328u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893532Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935334u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935348u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935354u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935368u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935370u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935378u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935384u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935390u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893540Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935444u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935448u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935460u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935474u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935484u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935490u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935528u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935548u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935558u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935638u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935654u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935664u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935704u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893570Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935744u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893574Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935760u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935768u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935770u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935778u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935784u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893578Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935790u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893579Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935804u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893580Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935814u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893582Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935848u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935854u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935864u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935870u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893587Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935884u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893588Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935898u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935904u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935910u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893591Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935924u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935928u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935930u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935938u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935948u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935950u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893595Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935968u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935974u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935980u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935988u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893598Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935994u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893599Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935ED4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936004u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936010u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936018u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936020u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893602Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936034u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893603Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936044u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893604Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893605Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936064u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893606Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893608Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893609Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936108u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936110u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936114u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893611Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936124u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936130u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936138u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936148u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936150u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936158u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936160u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936168u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936170u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936178u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936184u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893618Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936190u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936198u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936204u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893620Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936214u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893621Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936224u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893622Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936234u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893623Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936244u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936250u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893627Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936288u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936294u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893631Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936338u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936344u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936350u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936358u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936360u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936368u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936370u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936374u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936380u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936388u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936390u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936398u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893639Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936418u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936428u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936444u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936454u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893645Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893647Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893648Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089364A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089364B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089364D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089364E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936500u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936510u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893651Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936528u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936530u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936538u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936544u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893654Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936550u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936558u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936564u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893656Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936578u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936580u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936588u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936590u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936598u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936600u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893660Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936618u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936620u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936628u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936634u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893663Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936644u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936660u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936674u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936690u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936700u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936708u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936710u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893671Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936730u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936748u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936750u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936758u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936760u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936768u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936770u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936800u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936804u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936810u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893681Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936834u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936838u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936850u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893685Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936864u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936880u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936898u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936900u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936908u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936910u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936918u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936920u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936928u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936930u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936938u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936940u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936948u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893695Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936964u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893696Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936974u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936980u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936988u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936990u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936ABCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936ACCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936ADCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936ED0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936ED8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937000u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937008u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937010u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937018u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893701Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937024u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937030u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937038u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893704Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937074u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893707Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937080u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937088u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893709Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937188u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937228u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937234u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937240u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893726Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937288u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937290u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937294u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937304u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937310u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937318u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893731Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937320u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937328u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937330u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893733Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937348u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937354u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893735Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937360u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937364u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937370u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937378u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937380u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937400u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937408u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937410u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937418u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893742Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937434u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893743Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937444u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937458u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937460u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937474u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893747Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937490u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937494u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893749Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937500u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937508u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893751Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937544u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937558u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937570u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893757Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937590u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937600u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937624u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893762Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937640u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937678u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937680u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937684u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893768Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893771Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937724u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893772Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937734u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937740u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893774Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937758u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937764u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893776Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937770u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937774u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937780u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937790u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937798u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937804u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893780Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937810u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937818u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893782Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937838u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937850u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937878u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937880u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937900u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937910u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937920u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937928u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937930u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937938u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937944u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937950u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937958u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937964u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937970u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937980u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937988u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937990u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937998u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937ED8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FECu, &recomp_unit_0076, "recomp_unit_0076");
}
} // namespace psprecomp
