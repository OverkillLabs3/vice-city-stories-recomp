#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0220[2427] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 39, 0, 0, 0, 0, 0, 40, 0, 41,
    0, 42, 43, 44, 0, 45, 0, 46, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50,
};
void recomp_unit_0220_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B74000u;
        entry_id = (entry_delta < 9708u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0220[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B74000;
    case 2u: goto L_08B7400C;
    case 3u: goto L_08B74044;
    case 4u: goto L_08B74060;
    case 5u: goto L_08B7406C;
    case 6u: goto L_08B74074;
    case 7u: goto L_08B740C4;
    case 8u: goto L_08B740E8;
    case 9u: goto L_08B74100;
    case 10u: goto L_08B741D0;
    case 11u: goto L_08B74200;
    case 12u: goto L_08B7422C;
    case 13u: goto L_08B74240;
    case 14u: goto L_08B74258;
    case 15u: goto L_08B7427C;
    case 16u: goto L_08B74298;
    case 17u: goto L_08B742CC;
    case 18u: goto L_08B742FC;
    case 19u: goto L_08B74334;
    case 20u: goto L_08B74348;
    case 21u: goto L_08B74360;
    case 22u: goto L_08B7437C;
    case 23u: goto L_08B743A0;
    case 24u: goto L_08B743BC;
    case 25u: goto L_08B743E8;
    case 26u: goto L_08B74408;
    case 27u: goto L_08B74428;
    case 28u: goto L_08B74444;
    case 29u: goto L_08B74458;
    case 30u: goto L_08B74498;
    case 31u: goto L_08B744B8;
    case 32u: goto L_08B744CC;
    case 33u: goto L_08B74650;
    case 34u: goto L_08B74658;
    case 35u: goto L_08B74664;
    case 36u: goto L_08B7466C;
    case 37u: goto L_08B746C8;
    case 38u: goto L_08B746D8;
    case 39u: goto L_08B746DC;
    case 40u: goto L_08B746F4;
    case 41u: goto L_08B746FC;
    case 42u: goto L_08B74704;
    case 43u: goto L_08B74708;
    case 44u: goto L_08B7470C;
    case 45u: goto L_08B74714;
    case 46u: goto L_08B7471C;
    case 47u: goto L_08B74728;
    case 48u: goto L_08B74730;
    case 49u: goto L_08B7473C;
    case 50u: goto L_08B765E8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B74000:
    ctx.execute_vfpu_vhdp(32u, 105u, 110u, 1u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8303 ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    goto L_08B7400C;
L_08B7400C:
    rt.unsupported(0x08B7400Cu, 0x20746573u, "unknown not lowered yet"); return;
L_08B74044:
    rt.unsupported(0x08B74044u, 0x20746573u, "unknown not lowered yet"); return;
L_08B74060:
    rt.unsupported(0x08B74060u, 0x2064253Du, "unknown not lowered yet"); return;
L_08B7406C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<61u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    if (0u == 0u) (void)(0u);
    goto L_08B74074;
L_08B74074:
    rt.unsupported(0x08B74074u, 0x20746573u, "unknown not lowered yet"); return;
L_08B740C4:
    rt.unsupported(0x08B740C4u, 0x75736572u, "unknown not lowered yet"); return;
L_08B740E8:
    rt.unsupported(0x08B740E8u, 0x2079656Bu, "unknown not lowered yet"); return;
L_08B74100:
    rt.unsupported(0x08B74104u, 0x0880B208u, "control flow in delay slot"); return;
L_08B741D0:
    rt.unsupported(0x08B741D4u, 0x0880C720u, "control flow in delay slot"); return;
L_08B74200:
    rt.unsupported(0x08B74200u, 0x736F7460u, "unknown not lowered yet"); return;
L_08B7422C:
    ctx.execute_vfpu_vscl_ct<98u, 97u, 115u, 1u>();
    rt.unsupported(0x08B74230u, 0x74756F20u, "unknown not lowered yet"); return;
L_08B74240:
    rt.unsupported(0x08B74240u, 0x206C696Eu, "unknown not lowered yet"); return;
L_08B74258:
    rt.unsupported(0x08B74258u, 0x6E6E6163u, "vfpu3 not lowered yet"); return;
L_08B7427C:
    ctx.execute_vfpu_vscl_ct<108u, 101u, 118u, 1u>();
    rt.unsupported(0x08B74280u, 0x756D206Cu, "unknown not lowered yet"); return;
L_08B74298:
    ctx.execute_vfpu_vhdp(110u, 111u, 32u, 1u);
    rt.unsupported(0x08B7429Cu, 0x74636E75u, "unknown not lowered yet"); return;
L_08B742CC:
    rt.unsupported(0x08B742CCu, 0x74657360u, "unknown not lowered yet"); return;
L_08B742FC:
    rt.unsupported(0x08B742FCu, 0x74657360u, "unknown not lowered yet"); return;
L_08B74334:
    ctx.execute_vfpu_vscl_ct<97u, 115u, 115u, 1u>();
    ctx.execute_vfpu_compare3(114u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08B7433Cu, 0x6166206Eu, "vfpu0 not lowered yet"); return;
L_08B74348:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    ctx.execute_vfpu_compare3(101u, 32u, 116u, 1u, 6u);
    rt.unsupported(0x08B74350u, 0x6962206Fu, "unknown not lowered yet"); return;
L_08B74360:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 2u>();
    rt.unsupported(0x08B74364u, 0x206E6165u, "unknown not lowered yet"); return;
L_08B7437C:
    rt.unsupported(0x08B7437Cu, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B743A0:
    rt.unsupported(0x08B743A0u, 0x4F4C5F60u, "unknown not lowered yet"); return;
L_08B743BC:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    ctx.execute_vfpu_compare3(100u, 32u, 110u, 1u, 6u);
    ctx.execute_vfpu_compare3(116u, 32u, 108u, 1u, 6u);
    rt.unsupported(0x08B743C8u, 0x70206461u, "unknown not lowered yet"); return;
L_08B743E8:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 32u, 108u, 1u, 6u);
    rt.unsupported(0x08B743F0u, 0x6E696461u, "vfpu3 not lowered yet"); return;
L_08B74408:
    rt.unsupported(0x08B74408u, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B74428:
    rt.unsupported(0x08B74428u, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B74444:
    ctx.execute_vfpu_compare3(99u, 111u, 114u, 1u, 6u);
    rt.unsupported(0x08B74448u, 0x6E697475u, "vfpu3 not lowered yet"); return;
L_08B74458:
    rt.unsupported(0x08B74458u, 0x2061754Cu, "unknown not lowered yet"); return;
L_08B74498:
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    // nop
    goto L_08B744B8;
L_08B744B8:
    rt.unsupported(0x08B744B8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B744CC:
    rt.unsupported(0x08B744CCu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B74650:
    if (ctx.gpr[2] == ctx.gpr[20]) {
    rt.unsupported(0x08B74654u, 0x4559414Cu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0224_entry, 224u, 43u, 0x08B85BA0u>(ctx, &aot_mem); return;
    }
    goto L_08B74658;
L_08B74658:
    rt.unsupported(0x08B74658u, 0x494C4252u, "cop2/vfpu not lowered yet"); return;
L_08B74664:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B74668u, 0x00000045u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 193u, 0x08B897B4u>(ctx, &aot_mem); return;
    }
    goto L_08B7466C;
L_08B7466C:
    // nop
    rt.unsupported(0x08B74674u, 0x08827518u, "control flow in delay slot"); return;
L_08B746C8:
    rt.unsupported(0x08B746C8u, 0x746C754Du, "unknown not lowered yet"); return;
L_08B746D8:
    (void)(0u | 0u);
    goto L_08B746DC;
L_08B746DC:
    rt.unsupported(0x08B746DCu, 0x746C754Du, "unknown not lowered yet"); return;
L_08B746F4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B746F8u, 0x43455053u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 194u, 0x08B89800u>(ctx, &aot_mem); return;
    }
    goto L_08B746FC;
L_08B746FC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B74700u, 0x464E4F43u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0224_entry, 224u, 40u, 0x08B84C24u>(ctx, &aot_mem); return;
    }
    goto L_08B74704;
L_08B74704:
    jump_target = ctx.gpr[2];
    ctx.gpr[10] = (0x08B7470Cu);
    rt.unsupported(0x08B74708u, 0x464E4F43u, "cop1? not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B7470Cu) goto L_08B7470C;
    return;
L_08B74708:
    rt.unsupported(0x08B74708u, 0x464E4F43u, "cop1? not lowered yet"); return;
L_08B7470C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B74710u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 124u, 0x08B89034u>(ctx, &aot_mem); return;
    }
    goto L_08B74714;
L_08B74714:
    rt.unsupported(0x08B74714u, 0x4741505Fu, "cop1? not lowered yet"); return;
L_08B7471C:
    rt.unsupported(0x08B7471Cu, 0x464E4F43u, "cop1? not lowered yet"); return;
L_08B74728:
    rt.unsupported(0x08B74728u, 0x45474150u, "cop1? not lowered yet"); return;
L_08B74730:
    rt.unsupported(0x08B74730u, 0x464E4F43u, "cop1? not lowered yet"); return;
L_08B7473C:
    rt.unsupported(0x08B7473Cu, 0x41505F54u, "unknown not lowered yet"); return;
L_08B765E8:
    rt.unsupported(0x08B765ECu, 0x08854D1Cu, "control flow in delay slot"); return;
}

void recomp_unit_0220(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0220_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_220(Runtime &runtime) {
    runtime.register_generated_unit(220u, 0x08B74000u, 16384u, &recomp_unit_0220, &recomp_unit_0220_entry);
    runtime.register_function(0x08B74000u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7400Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74044u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74060u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7406Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74074u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B740C4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B740E8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74100u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B741D0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74200u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7422Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74240u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74258u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7427Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74298u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B742CCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B742FCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74334u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74348u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74360u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7437Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B743A0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B743BCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B743E8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74408u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74428u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74444u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74458u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74498u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B744B8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B744CCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74650u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74658u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74664u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7466Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B746C8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B746D8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B746DCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B746F4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B746FCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74704u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74708u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7470Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74714u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7471Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74728u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74730u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7473Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B765E8u, &recomp_unit_0220, "recomp_unit_0220");
}
} // namespace psprecomp
