#version 450

// Parametric color grading: brightness (additive), contrast (around 0.5
// pivot), saturation (luma-lerp), and a multiplicative RGB tint -- applied
// in that order, the standard grading pipeline shape. Not a real 3D-LUT
// lookup (no .cube/strip texture asset exists in this project to sample);
// this reaches the same practical goal -- adjustable color/mood -- without
// needing a LUT asset pipeline. Runs after FXAA when both are enabled (see
// ge_gpu_backend_vulkan.cpp's pass ordering), so grading is the last thing
// touching pixels before they're read back/presented.
//
// Also carries an optional final unsharp-mask sharpen pass (Rendering.Sharpen
// in the .ini) -- PSP-era textures are low-res (many well under 128x128) and
// get magnified a lot by the internal-resolution upscale plus bilinear
// filtering, which reads as soft/blurry. This doesn't reconstruct real
// detail that was never captured (that needs per-texture AI upscaling, well
// out of scope here) -- it's the standard, cheap "boost local contrast at
// edges" trick that makes the existing detail read as crisper.
layout(push_constant) uniform ColorGradePushConstants {
    float saturation;
    float contrast;
    float brightness;
    float tint_r;
    float tint_g;
    float tint_b;
    float sharpen_strength;
    // Scalars only (no vec2): a vec2 after 7 floats would be aligned to 8
    // bytes by std430 and miss the C++ struct's packing.
    float texel_x;
    float texel_y;
    float dither_strength;
    float cas_sharpness;   // 0 = CAS off
    float vhs_wiggle;
    float vhs_smear;
    float vhs_enabled;
    float time_seconds;
} pc;

layout(set = 0, binding = 0) uniform sampler2D scene_color;

layout(location = 0) in vec2 v_uv;
layout(location = 0) out vec4 out_color;

float luma(vec3 c) { return dot(c, vec3(0.2126, 0.7152, 0.0722)); }

float hash12(vec2 p) {
    vec3 p3 = fract(vec3(p.xyx) * 0.1031);
    p3 += dot(p3, p3.yzx + 33.33);
    return fract((p3.x + p3.y) * p3.z);
}

// FidelityFX CAS, 3x3 cross+corners, per-channel adaptive weight.
vec3 cas(vec2 uv, vec2 texel, float sharpness) {
    vec3 a = texture(scene_color, uv + vec2(-texel.x, -texel.y)).rgb;
    vec3 b = texture(scene_color, uv + vec2(0.0, -texel.y)).rgb;
    vec3 c = texture(scene_color, uv + vec2(texel.x, -texel.y)).rgb;
    vec3 d = texture(scene_color, uv + vec2(-texel.x, 0.0)).rgb;
    vec3 e = texture(scene_color, uv).rgb;
    vec3 f = texture(scene_color, uv + vec2(texel.x, 0.0)).rgb;
    vec3 g = texture(scene_color, uv + vec2(-texel.x, texel.y)).rgb;
    vec3 h = texture(scene_color, uv + vec2(0.0, texel.y)).rgb;
    vec3 i = texture(scene_color, uv + vec2(texel.x, texel.y)).rgb;
    vec3 mn = min(min(min(d, e), min(f, b)), h);
    vec3 mn2 = min(min(min(mn, a), min(c, g)), i);
    mn = mn + mn2;
    vec3 mx = max(max(max(d, e), max(f, b)), h);
    vec3 mx2 = max(max(max(mx, a), max(c, g)), i);
    mx = mx + mx2;
    vec3 amp = clamp(min(mn, 2.0 - mx) / max(mx, vec3(1e-4)), 0.0, 1.0);
    amp = sqrt(amp);
    float peak = -1.0 / mix(8.0, 5.0, sharpness);
    vec3 w = amp * peak;
    vec3 rcp_weight = 1.0 / (1.0 + 4.0 * w);
    return clamp((b * w + d * w + f * w + h * w + e) * rcp_weight, 0.0, 1.0);
}

void main() {
    vec2 texel = vec2(pc.texel_x, pc.texel_y);
    vec2 uv = v_uv;
    if (pc.vhs_enabled > 0.5) {
        float line = floor(uv.y / texel.y);
        float wob = sin(uv.y * 40.0 + pc.time_seconds * 2.0) * 0.5 +
                    (hash12(vec2(line, floor(pc.time_seconds * 12.0))) - 0.5);
        uv.x += wob * pc.vhs_wiggle * 0.1;
    }
    vec3 color = pc.cas_sharpness > 0.0 ? cas(uv, texel, pc.cas_sharpness)
                                        : texture(scene_color, uv).rgb;

    if (pc.vhs_enabled > 0.5 && pc.vhs_smear > 0.0) {
        // Smear chroma horizontally while keeping luma sharp.
        vec3 acc = vec3(0.0);
        for (int k = -4; k <= 4; ++k)
            acc += texture(scene_color, uv + vec2(float(k) * 2.0 * texel.x * pc.vhs_smear, 0.0)).rgb;
        acc /= 9.0;
        color = vec3(luma(texture(scene_color, uv).rgb)) + (acc - vec3(luma(acc)));
    }

    if (pc.sharpen_strength > 0.0) {
        // Classic 4-neighbor unsharp mask: subtract a cheap box blur from
        // the center sample and add the difference back, scaled by
        // strength. Cheap (4 extra taps), no separate blur pass needed.
        vec3 n = texture(scene_color, v_uv + vec2(0.0, -texel.y)).rgb;
        vec3 s = texture(scene_color, v_uv + vec2(0.0, texel.y)).rgb;
        vec3 e = texture(scene_color, v_uv + vec2(texel.x, 0.0)).rgb;
        vec3 w = texture(scene_color, v_uv + vec2(-texel.x, 0.0)).rgb;
        vec3 blur = (n + s + e + w) * 0.25;
        color += (color - blur) * pc.sharpen_strength;
    }

    color += pc.brightness;
    color = (color - 0.5) * pc.contrast + 0.5;
    color = mix(vec3(luma(color)), color, pc.saturation);
    color *= vec3(pc.tint_r, pc.tint_g, pc.tint_b);

    if (pc.dither_strength > 0.0) {
        // Triangular-PDF noise, one 8-bit step wide, from a fixed pattern so
        // it does not shimmer between frames.
        float n = hash12(gl_FragCoord.xy) + hash12(gl_FragCoord.xy + 17.0) - 1.0;
        color += vec3(n * pc.dither_strength / 255.0);
    }
    out_color = vec4(clamp(color, 0.0, 1.0), 1.0);
}
