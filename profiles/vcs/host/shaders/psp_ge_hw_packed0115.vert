#version 450

// Packed-0x0115 fast path: VCS's dominant 10-byte PSP world vertex format
// (u8 UV + 5551 colour + s16 XYZ). The CPU hands over the untouched PSP
// bytes (see ge_gpu_backend_accumulate_hardware_packed_0115 in
// ge_gpu_backend.hpp); this shader decodes them AND does the full
// model->clip hardware transform, exactly like psp_ge_hw.vert but starting
// from raw bytes instead of an already-expanded GeGpuVertex. Ported directly
// from DX12's VSMainPacked0115 (ge_gpu_backend_dx12.cpp) -- see that
// function and psp_ge_hw.vert's header comment for the shared push-constant
// layout and the y-sign/viewport-folding notes (identical here).
//
// texture/alpha/env/fog control words are per-draw state on the PSP (they
// don't vary per vertex), so unlike the generic hw-transform path they are
// NOT part of the packed 10-byte vertex -- they come from push constants
// (see DrawPixelState in DX12's HLSL) or, here, are read as one more
// unpacked field the C++ side stores per batch just like the generic path
// does today, keeping this shader's push-constant block identical to
// psp_ge_hw.vert's for one shared pipeline-building code path on the CPU
// side.

layout(push_constant) uniform PushConstants {
    vec4 transform_row0;
    vec4 transform_row1;
    vec4 transform_row2;
    vec4 transform_row3;
    vec4 model_to_view_z;
    vec4 uv_scale_offset;
    vec4 fog_parameters;
    uvec4 transform_control;
    vec4 vertex_color_mul;
    vec4 vertex_color_add;
    // Packed-0115 draws carry no per-vertex control words (see header
    // comment) -- the whole draw's alpha/texture/env/fog state rides here
    // instead, appended after the fields shared with psp_ge_hw.vert.
    uvec4 draw_control; // x=alpha_control, y=texture_control, z=texture_env, w=fog_control
} pc;

// Raw PSP 0x0115 vertex bytes, 10-byte stride:
//   u8 u, u8 v, u16 color5551, s16 x, s16 y, s16 z
layout(location = 0) in uvec2 in_uv8;          // VK_FORMAT_R8G8_UINT
layout(location = 1) in uint in_color5551;     // VK_FORMAT_R16_UINT
layout(location = 2) in ivec2 in_position_xy;  // VK_FORMAT_R16G16_SINT
layout(location = 3) in int in_position_z;     // VK_FORMAT_R16_SINT

layout(location = 0) out vec4 v_color;
layout(location = 1) out vec2 v_uv;
layout(location = 2) out float v_q;
layout(location = 3) out float v_fog_factor;
layout(location = 4) flat out uint v_alpha_control;
layout(location = 5) flat out uint v_texture_control;
layout(location = 6) flat out uint v_texture_env;
layout(location = 7) flat out uint v_fog_control;

// Matches DX12's Expand5ToFloat: a 5-bit channel expanded to 8-bit range
// (bit-replicate the top 3 bits into the low 3, exactly like real PSP/PS2-
// era 5551 unpacking hardware) and normalized to [0,1].
float expand5_to_float(uint value) {
    value &= 31u;
    uint expanded = (value << 3u) | (value >> 2u);
    return float(expanded) * (1.0 / 255.0);
}

void main() {
    vec3 model = vec3(vec2(in_position_xy), float(in_position_z)) * (1.0 / 32768.0);
    vec4 p = vec4(model, 1.0);

    float clip_w = dot(pc.transform_row3, p);
    if (abs(clip_w) < 1.0e-12) clip_w = 1.0;
    float clip_z = dot(pc.transform_row2, p);
    if (pc.transform_control.y == 0u) clip_z = clamp(clip_z, 0.0, clip_w);

    gl_Position = vec4(dot(pc.transform_row0, p), dot(pc.transform_row1, p), clip_z, clip_w);

    vec2 raw_uv = vec2(in_uv8) * (1.0 / 128.0);
    v_uv = raw_uv * pc.uv_scale_offset.xy + pc.uv_scale_offset.zw;

    float view_z = dot(pc.model_to_view_z, p);
    v_fog_factor = clamp((view_z + pc.fog_parameters.x) * pc.fog_parameters.y, 0.0, 1.0);

    uint packed = in_color5551;
    v_color = vec4(
        expand5_to_float(packed),
        expand5_to_float(packed >> 5u),
        expand5_to_float(packed >> 10u),
        (packed & 0x8000u) != 0u ? 1.0 : 0.0);
    if (pc.transform_control.z != 0u) {
        vec4 lit = clamp(v_color * pc.vertex_color_mul + pc.vertex_color_add, 0.0, 1.0);
        v_color = floor(lit * 255.0) * (1.0 / 255.0);
    }

    v_q = 1.0;
    v_alpha_control = pc.draw_control.x;
    v_texture_control = pc.draw_control.y;
    v_texture_env = pc.draw_control.z;
    v_fog_control = pc.draw_control.w;
}
