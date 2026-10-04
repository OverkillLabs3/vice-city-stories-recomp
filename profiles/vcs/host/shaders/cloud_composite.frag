#version 450

// GLSL port of CloudWorks' CloudCompositePS (see
// ge_cloudworks_present_shader.hpp for the HLSL source of truth). Manual
// four-tap bilinear upscale matches ProperShaders even if the bound sampler
// is point-filtered. The backend blends this premultiplied result over the
// world target with ONE / INV_SRC_ALPHA (see the composite pipeline's blend
// state in ge_gpu_backend_vulkan.cpp). CloudWorks: Brian Tu (RTU),
// CC BY-NC-SA 3.0.
//
// Draws into the full-resolution world target (not the low-res cloud
// buffer), so UV here is gl_FragCoord over the OUTPUT size (control.zw),
// while CloudTexelSize (texel_subpixel.xy) stays the low-res cloud buffer's
// texel size used for the 4-tap read positions.

layout(std140, set = 0, binding = 2) uniform CloudUBO {
    vec4 ray_right_time;
    vec4 ray_up_seed;
    vec4 ray_forward_opacity;     // w=g_Opacity
    vec4 camera_settings;
    vec4 coverage_speed;
    vec4 sun_direction_day;
    vec4 sun_color_atmosphere;
    vec4 cloud_color_mist;
    vec4 fog_color_start;
    vec4 brightness_padding;      // x=g_Brightness
    vec4 previous_right_history;
    vec4 previous_up_blend;
    vec4 previous_forward_spatial;
    vec4 texel_subpixel;          // xy=CloudTexelSize
    vec4 control;                 // zw=output resolution
} u;

layout(set = 0, binding = 0) uniform sampler2D CloudTexture0;
layout(set = 0, binding = 1) uniform sampler2D CloudTexture1;

layout(location = 0) out vec4 out_color;

vec4 sampleUpsampled(sampler2D tex, vec2 uv) {
    vec2 texelPos = uv / u.texel_subpixel.xy - 0.5;
    vec2 f = fract(texelPos);
    vec2 base = (floor(texelPos) + 0.5) * u.texel_subpixel.xy;
    vec4 c00 = textureLod(tex, base, 0.0);
    vec4 c10 = textureLod(tex, base + vec2(u.texel_subpixel.x, 0.0), 0.0);
    vec4 c01 = textureLod(tex, base + vec2(0.0, u.texel_subpixel.y), 0.0);
    vec4 c11 = textureLod(tex, base + u.texel_subpixel.xy, 0.0);
    return mix(mix(c00, c10, f.x), mix(c01, c11, f.x), f.y);
}

void main() {
    // A screen-space blend against last frame's result (CloudTexture1,
    // sampling the other ping-pong history slot with no world-space
    // reprojection) was tried here to damp per-frame density-threshold
    // flicker. Reverted: confirmed live to itself introduce sporadic
    // garbage-looking blocks, most likely uninitialized GPU memory in that
    // slot before its first real write leaking through the mix() even at a
    // gated zero blend weight (0 * Inf/NaN is NaN in IEEE 754, not 0). Given
    // the zero-artifact bar for this feature, a known minor flicker beats an
    // unpredictable garbage-read bug -- single fresh sample only.
    vec2 uv = gl_FragCoord.xy / u.control.zw;
    vec4 clouds = sampleUpsampled(CloudTexture0, uv);
    float alpha = clamp((1.0 - clouds.a) * u.ray_forward_opacity.w, 0.0, 1.0);
    out_color = vec4(clouds.rgb * u.ray_forward_opacity.w * u.brightness_padding.x, alpha);
}
