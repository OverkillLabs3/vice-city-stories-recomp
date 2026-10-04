#version 450

// Screen-space GE path. ge_renderer.cpp has already done transform, lighting
// and clipping on the CPU; vertices arrive in PSP 480x272 screen coordinates
// with a perspective w and the PSP projective texture denominator q.
//
// Ported from the DX12 pixel/vertex shader's TransformControl.x == 2 branch
// (ge_gpu_backend_dx12.cpp), with one deliberate difference: D3D NDC is y-up
// and Vulkan's is y-down, so the y term is NOT inverted here. Everything else
// -- the w multiply, the saturate on z, the per-vertex packed control words --
// matches the DX12 path exactly so the two backends stay comparable.

layout(push_constant) uniform PushConstants {
    vec2 inverse_viewport;   // (2/width, 2/height) in PSP screen coordinates
    uint framebuffer_format;
} pc;

layout(location = 0) in vec4 in_position;       // x,y in 480x272 screen space; z 0..1; w
layout(location = 1) in uvec4 in_color_packed;  // RGBA8 vertex color
layout(location = 2) in vec2 in_uv;
layout(location = 3) in uint in_alpha_control;
layout(location = 4) in uint in_texture_control;
layout(location = 5) in uint in_texture_env;
layout(location = 6) in float in_fog_factor;
layout(location = 7) in uint in_fog_control;
layout(location = 8) in float in_q;

layout(location = 0) out vec4 v_color;
layout(location = 1) out vec2 v_uv;
layout(location = 2) out float v_q;
layout(location = 3) out float v_fog_factor;
layout(location = 4) flat out uint v_alpha_control;
layout(location = 5) flat out uint v_texture_control;
layout(location = 6) flat out uint v_texture_env;
layout(location = 7) flat out uint v_fog_control;

void main() {
    float clip_w = in_position.w;
    if (abs(clip_w) < 1.0e-12) clip_w = 1.0;

    // PSP depth arrives as a raw 16-bit unit (0..65535), not pre-normalized;
    // the DX12 backend's screen_to_d3d() divides by 65535 before clamping
    // (ge_gpu_backend_dx12.cpp) -- that step was missing here, which clamped
    // almost all real geometry straight to the far plane (z=1) and destroyed
    // depth ordering.
    gl_Position = vec4(
        (in_position.x * pc.inverse_viewport.x - 1.0) * clip_w,
        (in_position.y * pc.inverse_viewport.y - 1.0) * clip_w,
        clamp(in_position.z / 65535.0, 0.0, 1.0) * clip_w,
        clip_w);

    v_color = vec4(in_color_packed) * (1.0 / 255.0);
    v_uv = in_uv;
    v_q = in_q;
    v_fog_factor = in_fog_factor;
    v_alpha_control = in_alpha_control;
    v_texture_control = in_texture_control;
    v_texture_env = in_texture_env;
    v_fog_control = in_fog_control;
}
