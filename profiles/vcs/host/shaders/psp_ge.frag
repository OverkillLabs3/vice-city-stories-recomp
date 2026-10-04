#version 450

// Direct port of PSMain from ge_gpu_backend_dx12.cpp: the complete PSP GE
// pixel path -- texture function 0..4 with the RGBA/double-color bits, fog,
// alpha test, and the destination framebuffer format quantization. Keeping
// this a line-for-line port of the validated DX12 shader is deliberate: the
// two backends should be diffable when output disagrees.

layout(push_constant) uniform PushConstants {
    vec2 inverse_viewport;
    uint framebuffer_format;
} pc;

layout(set = 0, binding = 0) uniform sampler2D source_texture;

layout(location = 0) in vec4 v_color;
layout(location = 1) in vec2 v_uv;
layout(location = 2) in float v_q;
layout(location = 3) in float v_fog_factor;
layout(location = 4) flat in uint v_alpha_control;
layout(location = 5) flat in uint v_texture_control;
layout(location = 6) flat in uint v_texture_env;
layout(location = 7) flat in uint v_fog_control;

layout(location = 0) out vec4 out_color;

bool alpha_pass(uint function_id, uint lhs, uint rhs) {
    switch (function_id & 7u) {
    case 0u: return false;
    case 1u: return true;
    case 2u: return lhs == rhs;
    case 3u: return lhs != rhs;
    case 4u: return lhs < rhs;
    case 5u: return lhs <= rhs;
    case 6u: return lhs > rhs;
    case 7u: return lhs >= rhs;
    }
    return true;
}

vec4 apply_texture_function(vec4 vertex, vec4 texture_value, uvec4 control, uvec3 env_bytes) {
    uint function_id = control.x & 7u;
    bool use_alpha = (control.y & 1u) != 0u;
    bool double_color = (control.z & 1u) != 0u;
    vec4 result = vertex;
    vec3 env = vec3(env_bytes) * (1.0 / 255.0);

    if (function_id == 0u) {            // MODULATE
        result.rgb = vertex.rgb * texture_value.rgb;
        result.a = use_alpha ? vertex.a * texture_value.a : vertex.a;
    } else if (function_id == 1u) {     // DECAL
        float a = use_alpha ? texture_value.a : 1.0;
        result.rgb = mix(vertex.rgb, texture_value.rgb, a);
        result.a = vertex.a;
    } else if (function_id == 2u) {     // BLEND
        result.rgb = mix(vertex.rgb, env, texture_value.rgb);
        result.a = use_alpha ? vertex.a * texture_value.a : vertex.a;
    } else if (function_id == 3u) {     // REPLACE
        result = texture_value;
        if (!use_alpha) result.a = vertex.a;
    } else if (function_id == 4u) {     // ADD
        result.rgb = clamp(vertex.rgb + texture_value.rgb, 0.0, 1.0);
        result.a = use_alpha ? vertex.a * texture_value.a : vertex.a;
    }

    if (double_color) result.rgb = clamp(result.rgb * 2.0, 0.0, 1.0);
    return result;
}

float quantize(float value, float levels) {
    return floor(clamp(value, 0.0, 1.0) * levels + 0.5) / levels;
}

vec4 quantize_framebuffer(vec4 color, uint format) {
    color = clamp(color, 0.0, 1.0);
    uint psm = format & 3u;
    if (psm == 0u) {          // GU_PSM_5650
        color.r = quantize(color.r, 31.0);
        color.g = quantize(color.g, 63.0);
        color.b = quantize(color.b, 31.0);
        color.a = 1.0;
    } else if (psm == 1u) {   // GU_PSM_5551
        color.rgb = vec3(quantize(color.r, 31.0), quantize(color.g, 31.0), quantize(color.b, 31.0));
        color.a = color.a >= 0.5 ? 1.0 : 0.0;
    } else if (psm == 2u) {   // GU_PSM_4444
        color = vec4(quantize(color.r, 15.0), quantize(color.g, 15.0),
                     quantize(color.b, 15.0), quantize(color.a, 15.0));
    }
    return color;
}

float detail_hash(vec2 p) {
    vec3 p3 = fract(vec3(p.xyx) * 0.1031);
    p3 += dot(p3, p3.yzx + 33.33);
    return fract((p3.x + p3.y) * p3.z);
}

float detail_noise(vec2 p) {
    vec2 i = floor(p);
    vec2 f = fract(p);
    f = f * f * (3.0 - 2.0 * f);
    return mix(mix(detail_hash(i), detail_hash(i + vec2(1.0, 0.0)), f.x),
               mix(detail_hash(i + vec2(0.0, 1.0)), detail_hash(i + vec2(1.0, 1.0)), f.x), f.y);
}

// Zero-mean luminance grit at 2x/4x/8x the texel frequency, anchored to texel
// space so it never swims. Each octave fades in only once its period spans a few
// pixels (no aliasing), and the whole layer only when the texture is really blown up.
float detail_modulation(vec2 uv_texels) {
    float texels_per_pixel = max(length(dFdx(uv_texels)), length(dFdy(uv_texels)));
    float pixels_per_texel = 1.0 / max(texels_per_pixel, 1.0e-4);
    float ramp = smoothstep(1.5, 5.0, pixels_per_texel);
    if (ramp <= 0.0) return 0.0;
    float sum = 0.0;
    float weight = 0.0;
    float freq = 2.0;
    for (int i = 0; i < 3; ++i) {
        float w = smoothstep(2.5, 6.0, pixels_per_texel / freq);
        sum += (detail_noise(uv_texels * freq + float(i) * 17.3) - 0.5) * w;
        weight += 1.0;
        freq *= 2.0;
    }
    return sum / weight * 2.0 * ramp;
}

void main() {
    uvec4 texture_control = uvec4(v_texture_control & 0xFFu,
                                  (v_texture_control >> 8u) & 0xFFu,
                                  (v_texture_control >> 16u) & 0xFFu,
                                  (v_texture_control >> 24u) & 0xFFu);
    uvec3 texture_env = uvec3(v_texture_env & 0xFFu,
                              (v_texture_env >> 8u) & 0xFFu,
                              (v_texture_env >> 16u) & 0xFFu);
    uvec4 fog_control = uvec4(v_fog_control & 0xFFu,
                              (v_fog_control >> 8u) & 0xFFu,
                              (v_fog_control >> 16u) & 0xFFu,
                              (v_fog_control >> 24u) & 0xFFu);
    uvec4 alpha_control = uvec4(v_alpha_control & 0xFFu,
                                (v_alpha_control >> 8u) & 0xFFu,
                                (v_alpha_control >> 16u) & 0xFFu,
                                (v_alpha_control >> 24u) & 0xFFu);

    vec4 color = clamp(v_color, 0.0, 1.0);

    if (texture_control.w != 0u) {
        // v_uv arrives in PSP-native texel space (u in [0, texture_width),
        // v in [0, texture_height); see ge_renderer.cpp's texture-coordinate
        // setup, which multiplies by texture_width/texture_height for the
        // software rasterizer's own texel indexing). The sampler is created
        // with normalized coordinates (Vulkan default), so normalize by the
        // bound texture's actual size here rather than requiring
        // unnormalizedCoordinates (which would forbid mipmapping/filtering).
        float q = abs(v_q) < 1.0e-20 ? 1.0 : v_q;
        vec2 uv_texels = v_uv / q;
        // A replacement texture can be 2x/4x/8x the game's: bits 4-5 of the
        // use-alpha byte carry log2 of that, so UVs keep the original scale.
        float texture_scale = float(1u << ((texture_control.y >> 4u) & 3u));
        vec2 uv_normalized = uv_texels / (vec2(textureSize(source_texture, 0)) / texture_scale);
        vec4 texel = texture(source_texture, uv_normalized);
        if ((texture_control.y & 0x40u) != 0u && texel.a > 0.99)
            texel.rgb *= 1.0 + detail_modulation(uv_texels) * 0.55;
        color = apply_texture_function(color, texel, texture_control, texture_env);
    }

    if (fog_control.w != 0u) {
        vec3 fog = vec3(fog_control.xyz) * (1.0 / 255.0);
        color.rgb = mix(fog, color.rgb, clamp(v_fog_factor, 0.0, 1.0));
    }

    if (alpha_control.x != 0u) {
        uint a = uint(floor(clamp(color.a, 0.0, 1.0) * 255.0 + 0.5));
        uint mask = alpha_control.w;
        if (!alpha_pass(alpha_control.y, a & mask, alpha_control.z & mask)) discard;
    }

    out_color = quantize_framebuffer(color, pc.framebuffer_format);
}
