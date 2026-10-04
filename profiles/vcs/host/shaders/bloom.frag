#version 450

// Bright-pass extraction + a blur kernel, in one pass. Reads the
// already-composited scene (world + HUD, screen-space), keeps only pixels
// above `threshold` luminance, and blends a 25-tap 5x5 pattern around each
// texel with real Gaussian weights (sigma ~1.5, radius up to 2 texels) so
// the glow falls off smoothly instead of the uniform 13-tap box average
// this replaces, which read as a flat, slightly blocky halo rather than a
// soft glow. Still a single pass, one input image, one output image --
// wider/smoother separable multi-pass Gaussian bloom would look better
// still, but is a bigger, riskier change (new ping-pong attachment) for a
// later pass, not this one.
layout(push_constant) uniform BloomPushConstants {
    vec2 texel_size;
    float threshold;
    float intensity;
} pc;

layout(set = 0, binding = 0) uniform sampler2D scene_color;

layout(location = 0) in vec2 v_uv;
layout(location = 0) out vec4 out_color;

float luminance(vec3 c) { return dot(c, vec3(0.2126, 0.7152, 0.0722)); }

vec3 bright_pass(vec2 uv) {
    vec3 c = texture(scene_color, uv).rgb;
    float l = luminance(c);
    float weight = max(l - pc.threshold, 0.0) / max(1.0 - pc.threshold, 1.0e-4);
    return c * clamp(weight, 0.0, 1.0);
}

void main() {
    // 5x5 grid, offsets -2..2 texels in x and y; weights are a discretized
    // 2D Gaussian (sigma=1.5), precomputed and normalized to sum to 1 so
    // `intensity` alone controls overall brightness.
    const float w[5] = float[5](0.06136, 0.24477, 0.38774, 0.24477, 0.06136);
    vec3 sum = vec3(0.0);
    for (int y = -2; y <= 2; ++y) {
        for (int x = -2; x <= 2; ++x) {
            float weight = w[x + 2] * w[y + 2];
            sum += bright_pass(v_uv + vec2(float(x), float(y)) * pc.texel_size * 3.0) * weight;
        }
    }
    // Wider halo (taps spaced 3 texels apart) and a slight warm-pink cast:
    // Vice City glow is soft and dreamy, not a tight neutral halo.
    out_color = vec4(sum * pc.intensity * vec3(1.0, 0.93, 0.97), 1.0);
}
