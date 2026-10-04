#version 450

// Vice City sky fill. Drawn inline in the main pass after the opaque world,
// depth-tested EQUAL against the far clear so it only touches sky pixels, and
// blended over whatever the game drew there. A vertical gradient from the
// zenith color (top of the screen) down to the horizon color, premultiplied by
// `alpha` so the blend can keep a little of the game's own sky.
layout(push_constant) uniform SkyPush {
    vec4 zenith_alpha;   // rgb zenith color, a = blend strength
    vec4 horizon_reach;  // rgb horizon color, a = screen fraction where the horizon color is reached
} pc;

layout(location = 0) in vec2 v_uv;
layout(location = 0) out vec4 out_color;

void main() {
    float t = smoothstep(0.0, pc.horizon_reach.a, v_uv.y);
    vec3 color = mix(pc.zenith_alpha.rgb, pc.horizon_reach.rgb, t);
    float alpha = pc.zenith_alpha.a;
    out_color = vec4(color * alpha, alpha);
}
