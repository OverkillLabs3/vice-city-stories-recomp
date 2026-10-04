#version 450

// GLSL port of CloudWorks' CloudTemporalResolvePS (see
// ge_cloudworks_present_shader.hpp for the HLSL source of truth). The march
// fills one Bayer slot per 2x2 block; every other pixel keeps its own
// reprojected history and leaks slightly toward the smooth current-frame
// reconstruction. CloudWorks: Brian Tu (RTU), CC BY-NC-SA 3.0.
//
// Renders into the same resolution as the low-res cloud history buffer, so
// gl_FragCoord is already in that buffer's own pixel space -- no full-res
// conversion needed here (unlike the composite pass).

layout(std140, set = 0, binding = 2) uniform CloudUBO {
    vec4 ray_right_time;
    vec4 ray_up_seed;
    vec4 ray_forward_opacity;
    vec4 camera_settings;         // xyz=CloudCameraPosition, w=bitcast(g_Settings)
    vec4 coverage_speed;
    vec4 sun_direction_day;
    vec4 sun_color_atmosphere;
    vec4 cloud_color_mist;
    vec4 fog_color_start;
    vec4 brightness_padding;      // yzw=CloudPadding (previous camera position)
    vec4 previous_right_history;  // xyz=PrevCloudRayRight, w=CloudHistoryValid
    vec4 previous_up_blend;       // xyz=PrevCloudRayUp, w=CloudTemporalBlend
    vec4 previous_forward_spatial; // xyz=PrevCloudRayForward, w=CloudSpatialMix
    vec4 texel_subpixel;          // xy=CloudTexelSize, zw=CloudSubPixel
    vec4 control;                 // y=CloudClampExpand
} u;

// t0 = sparse march texture, t1 = previous resolved cloud history.
layout(set = 0, binding = 0) uniform sampler2D CloudTexture0;
layout(set = 0, binding = 1) uniform sampler2D CloudTexture1;

layout(location = 0) out vec4 out_color;

vec3 WorldRay(vec2 uv) {
    vec2 ndc = vec2(uv.x * 2.0 - 1.0, 1.0 - uv.y * 2.0);
    return normalize(u.ray_forward_opacity.xyz + u.ray_right_time.xyz * ndc.x + u.ray_up_seed.xyz * ndc.y);
}

// Reproject a current world direction into the previous camera's ray basis.
// If d = q.x*R + q.y*U + q.z*F, previous NDC is q.xy/q.z. Cramer's rule keeps
// this exact for asymmetric projections and avoids a separate 4x4 matrix.
vec3 PreviousCloudNdc(vec3 dir) {
    vec3 pr = u.previous_right_history.xyz, pu = u.previous_up_blend.xyz, pf = u.previous_forward_spatial.xyz;
    float det = dot(pr, cross(pu, pf));
    float safeDet = (abs(det) > 1e-8) ? det : ((det < 0.0) ? -1e-8 : 1e-8);
    vec3 q = vec3(dot(dir, cross(pu, pf)), dot(pr, cross(dir, pf)), dot(pr, cross(pu, dir))) / safeDet;
    return vec3(q.xy / max(q.z, 1e-8), q.z);
}

float CloudSlabEntry(float cameraZ, float rayZ, float bottom, float top) {
    if (abs(rayZ) < 1e-6) return 50000.0;
    if (cameraZ >= bottom && cameraZ <= top) return 0.0;
    float a = (bottom - cameraZ) / rayZ, b = (top - cameraZ) / rayZ;
    float entry = min(a, b), leave = max(a, b);
    return leave < 0.0 ? 50000.0 : max(entry, 0.0);
}

// Reproject translation as well as rotation. brightness_padding.yzw carries
// the previous camera position. A world point on the nearest enabled
// physical cloud slab is stable under the orbiting VCS third-person camera,
// unlike a direction-only reprojection that forces the history to reset
// whenever the camera moves.
vec3 PreviousCloudDirection(vec2 uv) {
    vec3 dir = WorldRay(uv);
    float distance = CloudSlabEntry(u.camera_settings.z, dir.z, 500.0, 900.0);
    uint settings = floatBitsToUint(u.camera_settings.w);
    uint layers = settings & 3u;
    if (layers >= 2u) distance = min(distance, CloudSlabEntry(u.camera_settings.z, dir.z, 3500.0, 3600.0));
    if (layers >= 3u) distance = min(distance, CloudSlabEntry(u.camera_settings.z, dir.z, 1500.0, 1900.0));
    distance = min(max(distance, 1.0), 50000.0);
    vec3 worldPoint = u.camera_settings.xyz + dir * distance;
    return normalize(worldPoint - u.brightness_padding.yzw);
}

void main() {
    vec2 pixel = floor(gl_FragCoord.xy);
    vec2 uv = (pixel + 0.5) * u.texel_subpixel.xy;
    vec2 marchTexel = u.texel_subpixel.xy * 2.0;

    vec2 block = floor(pixel * 0.5);
    vec2 slot = pixel - block * 2.0;
    vec2 blockUV = (block + 0.5) * marchTexel;
    vec4 c = textureLod(CloudTexture0, blockUV, 0.0);

    vec2 freshDelta = abs(slot - u.texel_subpixel.zw);
    float fresh = step(freshDelta.x + freshDelta.y, 0.5);

    vec2 spatialUV = uv - (u.texel_subpixel.zw - vec2(1.0) * 0.5) * u.texel_subpixel.xy;
    vec2 sp = spatialUV / marchTexel - 0.5;
    vec2 sf = fract(sp);
    vec2 sb = (floor(sp) + 0.5) * marchTexel;
    vec4 t00 = textureLod(CloudTexture0, sb, 0.0);
    vec4 t10 = textureLod(CloudTexture0, sb + vec2(marchTexel.x, 0.0), 0.0);
    vec4 t01 = textureLod(CloudTexture0, sb + vec2(0.0, marchTexel.y), 0.0);
    vec4 t11 = textureLod(CloudTexture0, sb + marchTexel, 0.0);
    vec4 spatial = mix(mix(t00, t10, sf.x), mix(t01, t11, sf.x), sf.y);

    vec3 previous = PreviousCloudNdc(PreviousCloudDirection(uv));
    vec2 prevUV = vec2(previous.x * 0.5 + 0.5, 0.5 - previous.y * 0.5);
    vec2 inside = step(vec2(0.0), prevUV) * step(prevUV, vec2(1.0));
    float valid = u.previous_right_history.w * inside.x * inside.y * step(1e-8, previous.z);
    vec4 histRaw = textureLod(CloudTexture1, prevUV, 0.0);
    // Sanitize immediately after sampling, before any use: both history
    // slots are cleared to a known value up front (see the C++ setup code),
    // but this is still the single point every future risk (a corrupted
    // write, a resize, a future change to that clear) would enter through.
    // Multiplying a NaN/Inf contribution by valid=0 later does NOT safely
    // zero it out -- IEEE 754 mix(a, b, 0) is `a + 0*(b-a)`, which is NaN
    // if `b` is non-finite, not a clean `a`. Confirmed live as a real bug
    // in the earlier screen-space temporal blend experiment; fixing it here
    // at the source protects every downstream use in this shader too (the
    // safety rail below reads `hist` before the final blend does).
    vec4 hist = all(equal(histRaw, histRaw)) ? histRaw : c;

    // Safety rail: reject a reprojected history sample that has drifted too
    // far from what this frame's own march data suggests is plausible,
    // falling back toward the current estimate instead. RGB and
    // transmittance must move as a single value; clamping channels
    // independently creates black pinholes. The floor here must be sized to
    // this shader's actual value range (premultiplied light in roughly
    // [0,~20] per cloud_march.frag's own output clamp, transmittance in
    // [0,1]) -- CloudWorks' original VC_RAIL_FLOOR=4.0 assumed a different
    // HDR range and, at this port's actual scale, made the floor larger
    // than most of the value range itself, so `over` was never positive and
    // this rail could never actually engage. Confirmed live as the real
    // cause of the sparse/temporal path's blocky corruption: once a bad
    // value entered history (e.g. from the first-ever frame's then-
    // uninitialized "previous" slot, now fixed above, but any other
    // transient source too), nothing could ever reject it again, and it
    // spread across the visible frame as the reprojection UV moved with the
    // camera -- matching "gets worse when I move" exactly.
    vec4 mn = min(min(min(t00, t10), min(t01, t11)), c);
    vec4 mx = max(max(max(t00, t10), max(t01, t11)), c);
    vec4 mid = (mn + mx) * 0.5;
    vec3 spanRGB = mx.rgb - mn.rgb;
    float span = max(max(spanRGB.r, spanRGB.g), max(spanRGB.b, mx.a - mn.a));
    float ext = max(span * u.control.y, 0.1);
    vec4 dev = abs(hist - mid) - vec4(ext);
    float over = max(max(dev.r, dev.g), max(dev.b, dev.a));
    hist = mix(hist, mid, clamp(over, 0.0, 1.0));

    vec4 src = mix(spatial, c, fresh);
    float w = mix(1.0 - u.previous_forward_spatial.w, u.previous_up_blend.w, fresh) * valid;
    vec4 result = mix(src, hist, w);
    // Defensive sanitization -- matches cloud_march.frag's main(): this
    // buffer becomes next frame's own history input, so an unsanitized
    // non-finite value would compound instead of self-correcting.
    out_color = all(equal(result, result))
        ? vec4(clamp(result.rgb, 0.0, 20.0), clamp(result.a, 0.0, 1.0))
        : vec4(0.0, 0.0, 0.0, 1.0);
}
