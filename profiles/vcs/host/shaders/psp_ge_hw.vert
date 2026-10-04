#version 450

// Hardware-transform GE path: unlike psp_ge.vert (screen-space, CPU already
// did transform/lighting/clipping), this vertex arrives in PSP MODEL space
// and this shader does the full model->clip transform, fog and optional
// affine vertex-color lighting -- moving that work off the CPU (where it was
// measured costing 12-22ms of a single cutscene frame, colliding with audio
// submission on the same interpreter thread) onto the GPU.
//
// Ported directly from the DX12 backend's VSMain/TransformControl.x==1
// branch (ge_gpu_backend_dx12.cpp) so the two stay comparable. The one
// deliberate difference is the same one psp_ge.vert already documents: D3D
// NDC is y-up, Vulkan's is y-down. There the CPU (build_transform_constants)
// bakes a y negation into the row constants for D3D; the Vulkan CPU-side
// equivalent (build_hw_transform_push_constants in
// ge_gpu_backend_vulkan.cpp) does NOT negate, so transform_row1 here already
// carries the correct sign for Vulkan's convention -- this shader applies it
// exactly like transform_row0/2/3, with no y-flip of its own.
//
// The viewport scale/offset is pre-folded into transform_row0/1/2 by the CPU
// (mirroring DX12's build_transform_constants) specifically so this shader
// can stay a plain dot(row, p) like DX12's, instead of carrying separate
// viewport constants and a second transform step.

layout(push_constant) uniform PushConstants {
    vec4 transform_row0;
    vec4 transform_row1;
    vec4 transform_row2;
    vec4 transform_row3;
    vec4 model_to_view_z;
    vec4 uv_scale_offset;    // xy = scale, zw = offset
    vec4 fog_parameters;     // x = fog_end, y = fog_slope
    uvec4 transform_control; // x = mode (unused here, always hw), y = depth_clip_enabled, z = vertex_color_affine
    vec4 vertex_color_mul;
    vec4 vertex_color_add;
} pc;

// Same attribute layout as psp_ge.vert/GeGpuVertex -- in_position here is
// MODEL space (x,y,z; w is always 1) rather than already-clipped screen
// space, everything else is identical and passed through unchanged so the
// existing fragment shader needs no changes at all.
layout(location = 0) in vec4 in_position;
layout(location = 1) in uvec4 in_color_packed;
layout(location = 2) in vec2 in_uv;
layout(location = 3) in uint in_alpha_control;
layout(location = 4) in uint in_texture_control;
layout(location = 5) in uint in_texture_env;
layout(location = 6) in float in_fog_factor;  // unused in this mode; fog is computed below
layout(location = 7) in uint in_fog_control;
layout(location = 8) in float in_q;           // unused in this mode; set to 1.0 like DX12's VSMain

layout(location = 0) out vec4 v_color;
layout(location = 1) out vec2 v_uv;
layout(location = 2) out float v_q;
layout(location = 3) out float v_fog_factor;
layout(location = 4) flat out uint v_alpha_control;
layout(location = 5) flat out uint v_texture_control;
layout(location = 6) flat out uint v_texture_env;
layout(location = 7) flat out uint v_fog_control;

void main() {
    vec4 p = vec4(in_position.xyz, 1.0);

    float clip_w = dot(pc.transform_row3, p);
    if (abs(clip_w) < 1.0e-12) clip_w = 1.0;
    float clip_z = dot(pc.transform_row2, p);
    // Matches DX12's VSMain exactly: TransformControl.y == 0 means depth
    // clip is NOT enabled, so the raw clip_z is clamped into [0, clip_w]
    // here instead of relying on the hardware depth-clip test.
    if (pc.transform_control.y == 0u) clip_z = clamp(clip_z, 0.0, clip_w);

    gl_Position = vec4(dot(pc.transform_row0, p), dot(pc.transform_row1, p), clip_z, clip_w);

    v_uv = in_uv * pc.uv_scale_offset.xy + pc.uv_scale_offset.zw;

    float view_z = dot(pc.model_to_view_z, p);
    v_fog_factor = clamp((view_z + pc.fog_parameters.x) * pc.fog_parameters.y, 0.0, 1.0);

    v_color = vec4(in_color_packed) * (1.0 / 255.0);
    if (pc.transform_control.z != 0u) {
        // Directional-only lighting is affine in vertex colour (see
        // GeGpuHardwareTransform::vertex_color_affine's comment in
        // ge_gpu_backend.hpp) -- match the CPU path's per-channel RGBA8
        // clamp/truncation boundary exactly, same as DX12's VSMain.
        vec4 lit = clamp(v_color * pc.vertex_color_mul + pc.vertex_color_add, 0.0, 1.0);
        v_color = floor(lit * 255.0) * (1.0 / 255.0);
    }

    v_q = 1.0;
    v_alpha_control = in_alpha_control;
    v_texture_control = in_texture_control;
    v_texture_env = in_texture_env;
    v_fog_control = in_fog_control;
}
