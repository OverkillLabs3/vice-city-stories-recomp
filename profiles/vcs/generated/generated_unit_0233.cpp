#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0233[1874] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0,
    0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0,
    0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90,
};
void recomp_unit_0233_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08BA8018u;
        entry_id = (entry_delta < 7496u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0233[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08BA8018;
    case 2u: goto L_08BA8090;
    case 3u: goto L_08BA8148;
    case 4u: goto L_08BA8190;
    case 5u: goto L_08BA81A0;
    case 6u: goto L_08BA8218;
    case 7u: goto L_08BA83C0;
    case 8u: goto L_08BA8420;
    case 9u: goto L_08BA8608;
    case 10u: goto L_08BA86E0;
    case 11u: goto L_08BA87A0;
    case 12u: goto L_08BA8850;
    case 13u: goto L_08BA88C8;
    case 14u: goto L_08BA89D0;
    case 15u: goto L_08BA8A40;
    case 16u: goto L_08BA8A68;
    case 17u: goto L_08BA8AE0;
    case 18u: goto L_08BA8BE0;
    case 19u: goto L_08BA8F9C;
    case 20u: goto L_08BA8FAC;
    case 21u: goto L_08BA8FBC;
    case 22u: goto L_08BA8FCC;
    case 23u: goto L_08BA8FDC;
    case 24u: goto L_08BA8FEC;
    case 25u: goto L_08BA8FFC;
    case 26u: goto L_08BA900C;
    case 27u: goto L_08BA901C;
    case 28u: goto L_08BA902C;
    case 29u: goto L_08BA903C;
    case 30u: goto L_08BA904C;
    case 31u: goto L_08BA905C;
    case 32u: goto L_08BA906C;
    case 33u: goto L_08BA907C;
    case 34u: goto L_08BA913C;
    case 35u: goto L_08BA914C;
    case 36u: goto L_08BA91F4;
    case 37u: goto L_08BA92B4;
    case 38u: goto L_08BA92C4;
    case 39u: goto L_08BA92D4;
    case 40u: goto L_08BA92E4;
    case 41u: goto L_08BA92F4;
    case 42u: goto L_08BA93B4;
    case 43u: goto L_08BA93C4;
    case 44u: goto L_08BA93D4;
    case 45u: goto L_08BA93E4;
    case 46u: goto L_08BA93F4;
    case 47u: goto L_08BA9404;
    case 48u: goto L_08BA9414;
    case 49u: goto L_08BA9424;
    case 50u: goto L_08BA945C;
    case 51u: goto L_08BA946C;
    case 52u: goto L_08BA947C;
    case 53u: goto L_08BA948C;
    case 54u: goto L_08BA949C;
    case 55u: goto L_08BA94FC;
    case 56u: goto L_08BA951C;
    case 57u: goto L_08BA952C;
    case 58u: goto L_08BA953C;
    case 59u: goto L_08BA954C;
    case 60u: goto L_08BA955C;
    case 61u: goto L_08BA956C;
    case 62u: goto L_08BA957C;
    case 63u: goto L_08BA958C;
    case 64u: goto L_08BA963C;
    case 65u: goto L_08BA964C;
    case 66u: goto L_08BA965C;
    case 67u: goto L_08BA966C;
    case 68u: goto L_08BA967C;
    case 69u: goto L_08BA968C;
    case 70u: goto L_08BA969C;
    case 71u: goto L_08BA975C;
    case 72u: goto L_08BA976C;
    case 73u: goto L_08BA977C;
    case 74u: goto L_08BA982C;
    case 75u: goto L_08BA983C;
    case 76u: goto L_08BA984C;
    case 77u: goto L_08BA990C;
    case 78u: goto L_08BA99B4;
    case 79u: goto L_08BA99C4;
    case 80u: goto L_08BA9A24;
    case 81u: goto L_08BA9ACC;
    case 82u: goto L_08BA9ADC;
    case 83u: goto L_08BA9AEC;
    case 84u: goto L_08BA9AFC;
    case 85u: goto L_08BA9B0C;
    case 86u: goto L_08BA9B1C;
    case 87u: goto L_08BA9BDC;
    case 88u: goto L_08BA9C9C;
    case 89u: goto L_08BA9CAC;
    case 90u: goto L_08BA9D5C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08BA8018:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02B16570u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8090:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02B44E30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8148:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02B65C60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8190:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DC2FC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA81A0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02B8CD60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8218:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA83C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DCA020u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8420:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8608:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA86E0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C6F0E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA87A0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C798F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8850:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C7E200u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA88C8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA89D0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C91AF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8A40:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02CF9370u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8A68:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02CFB690u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8AE0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D3FB60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8BE0:
    // nop
    ctx.pc = 0x020134F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8F9C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02010200u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8FAC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020102E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8FBC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D952B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8FCC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02010420u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8FDC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D95420u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8FEC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02018AE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8FFC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D96310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA900C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02032FC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA901C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02033100u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA902C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0206A890u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA903C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D986D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA904C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D98930u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA905C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D98BD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA906C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D98EB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA907C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0206BD60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA913C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D99940u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA914C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0208DC70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA91F4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02096F10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA92B4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D99A70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA92C4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D81FF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA92D4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02131FF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA92E4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02186220u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA92F4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021AED00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA93B4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D9BBF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA93C4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021BE400u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA93D4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D9C0A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA93E4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021D4160u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA93F4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D9CA30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9404:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022142F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9414:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DA07C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9424:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0221D950u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA945C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02279BD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA946C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022DCAE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA947C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DA1020u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA948C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02316500u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA949C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DA8D60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA94FC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023E1990u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA951C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D81FF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA952C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023F41A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA953C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x024E82F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA954C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DAD570u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA955C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0255D0D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA956C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DAEFB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA957C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DB2CF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA958C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02594DB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA963C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DB2E20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA964C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025D4270u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA965C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DB34D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA966C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x026E9470u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA967C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x026E95B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA968C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02718D80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA969C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x027387A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA975C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DB4DF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA976C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DB52E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA977C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02749D20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA982C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x027AEB60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA983C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DB5E50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA984C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x027DC800u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA990C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02827E10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA99B4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DB6610u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA99C4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DB6850u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9A24:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028FACD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9ACC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DB6D00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9ADC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02949B80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9AEC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0295A2C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9AFC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DB6FC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9B0C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DC1670u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9B1C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02A92630u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9BDC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C6F0E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9C9C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DCB230u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9CAC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C798F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9D5C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DCB820u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0233(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0233_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_233(Runtime &runtime) {
    runtime.register_generated_unit(233u, 0x08BA8000u, 16384u, &recomp_unit_0233, &recomp_unit_0233_entry);
    runtime.register_function(0x08BA8018u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8090u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8148u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8190u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA81A0u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8218u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA83C0u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8420u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8608u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA86E0u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA87A0u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8850u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA88C8u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA89D0u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8A40u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8A68u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8AE0u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8BE0u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8F9Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8FACu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8FBCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8FCCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8FDCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8FECu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8FFCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA900Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA901Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA902Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA903Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA904Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA905Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA906Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA907Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA913Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA914Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA91F4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA92B4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA92C4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA92D4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA92E4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA92F4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA93B4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA93C4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA93D4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA93E4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA93F4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9404u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9414u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9424u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA945Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA946Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA947Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA948Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA949Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA94FCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA951Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA952Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA953Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA954Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA955Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA956Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA957Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA958Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA963Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA964Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA965Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA966Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA967Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA968Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA969Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA975Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA976Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA977Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA982Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA983Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA984Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA990Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA99B4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA99C4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9A24u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9ACCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9ADCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9AECu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9AFCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9B0Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9B1Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9BDCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9C9Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9CACu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9D5Cu, &recomp_unit_0233, "recomp_unit_0233");
}
} // namespace psprecomp
