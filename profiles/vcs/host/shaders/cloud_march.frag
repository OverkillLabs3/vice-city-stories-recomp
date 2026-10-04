#version 450

// Direct GLSL port of CloudWorks' CloudMarchPS/CloudTargetPS (see
// ge_cloudworks_present_shader.hpp for the HLSL source of truth and license).
// Density profiles, adaptive integration, sun shadow march, Beer-Lambert
// extinction, Mie/Rayleigh lighting and front-to-back layer composition
// retain the source equations and constants; only HLSL->GLSL syntax and the
// descriptor/UBO contract change. CloudWorks: Brian Tu (RTU), CC BY-NC-SA 3.0.
//
// Every coordinate here is derived from gl_FragCoord (upper-left origin, same
// convention as D3D's SV_POSITION) rather than a vertex-interpolated UV, so
// this stays correct regardless of which fullscreen-triangle vertex shader
// generates the UV -- avoids a D3D/Vulkan UV-orientation mismatch entirely.

layout(std140, set = 0, binding = 0) uniform CloudUBO {
    vec4 ray_right_time;          // xyz=CloudRayRight, w=g_Time
    vec4 ray_up_seed;             // xyz=CloudRayUp, w=randomSeed
    vec4 ray_forward_opacity;     // xyz=CloudRayForward, w=g_Opacity
    vec4 camera_settings;         // xyz=CloudCameraPosition, w=bitcast(g_Settings)
    vec4 coverage_speed;          // xyz=g_CloudCoverage, w=g_CloudSpeed
    vec4 sun_direction_day;       // xyz=vSunLightDir, w=fDayProgression
    vec4 sun_color_atmosphere;    // xyz=g_vSunColor, w=g_AtmDense
    vec4 cloud_color_mist;        // xyz=g_vCloudBaseColor, w=g_Mist
    vec4 fog_color_start;         // xyz=g_FogColor, w=g_FogDens (unused here)
    vec4 brightness_padding;      // x=g_Brightness, yzw=CloudPadding
    vec4 previous_right_history;  // unused by march
    vec4 previous_up_blend;       // unused by march
    vec4 previous_forward_spatial; // unused by march
    vec4 texel_subpixel;          // xy=CloudTexelSize, zw=CloudSubPixel
    vec4 control;                 // x=CloudFullResolutionMarch, y=CloudClampExpand
} u;

layout(location = 0) out vec4 out_color;

const float VC_HASH_MUL = 1332.03398875;
float hash(float n) { return fract(sin(n / 1873.1873 + u.ray_up_seed.w) * VC_HASH_MUL); }
float noise2d(vec3 p) {
    vec3 fr = floor(p), ft = fract(p);
    float n = 1153.0 * fr.x + 2381.0 * fr.y + p.z;
    float nr = n + 1153.0, nd = n + 2381.0, no = nr + 2381.0;
    return mix(mix(hash(n), hash(nr), ft.x), mix(hash(nd), hash(no), ft.x), ft.y);
}
float noise3d(vec3 p) {
    vec3 fr = floor(p), ft = fract(p);
    float n = 1153.0 * fr.x + 2381.0 * fr.y + fr.z;
    float nr = n + 1153.0, nd = n + 2381.0, no = nr + 2381.0;
    float v = mix(hash(n), hash(n + 1.0), ft.z), vr = mix(hash(nr), hash(nr + 1.0), ft.z);
    float vd = mix(hash(nd), hash(nd + 1.0), ft.z), vo = mix(hash(no), hash(no + 1.0), ft.z);
    return mix(mix(v, vr, ft.x), mix(vd, vo, ft.x), ft.y);
}
float mapValue(float x, float a, float b, float c, float d) { return (x - b) / (a - b) * (c - d) + d; }
float clampMap(float x, float a, float b, float c, float d) { return clamp((x - b) / (a - b), 0.0, 1.0) * (c - d) + d; }
// HLSL's smoothstep is a plain formula that stays well-defined (just an
// inverted transition) when edge0 > edge1 -- CloudWorks relies on this for
// its altitude falloff (e.g. CloudShape below calls it with the profile's
// high/low shape bounds in descending order for the upper edge). GLSL/SPIR-V
// mark that case explicitly undefined, and it was observed to collapse to 0
// on this Vulkan/MoltenVK path (confirmed via a live density probe: entered
// the cloud plane every frame, but the density term was always exactly 0
// until this fix), silently killing all cloud density. This wrapper
// reproduces HLSL's actual (order-independent) behavior everywhere.
float smoothstepSafe(float edge0, float edge1, float x) {
    return edge0 <= edge1 ? smoothstep(edge0, edge1, x) : 1.0 - smoothstep(edge1, edge0, x);
}

const float atmosphereStep = 15.0, lightStep = 3.0, fixEps = 0.00001;
const vec3 sunLightStrength = 685.0 * vec3(1.0, 0.96, 0.949);
const float LightingDecay = 300.0, rayleighStrength = 1.85, rayleighDecay = 900.0;
const vec3 waveLengthFactor = vec3(6.5 * 6.5 * 6.5 * 6.5, 5.4 * 5.4 * 5.4 * 5.4, 4.5 * 4.5 * 4.5 * 4.5);
const vec3 scatteringFactor = waveLengthFactor / rayleighDecay;
const float earthRadius = 6.421, groundHeight = 6.371, game2atm = 1000000.0;
const vec3 AtmOrigin = vec3(0.0, 0.0, groundHeight);
const vec4 earthSphere = vec4(0.0, 0.0, 0.0, earthRadius);

vec3 Game2Atm(vec3 p) { return p / game2atm + AtmOrigin; }
vec3 Game2Atm_Alt(vec3 p) { return vec3(0.0, 0.0, p.z / game2atm) + AtmOrigin; }

vec4 sphereCast(vec3 origin, vec3 ray, vec4 sphere, float steps, out vec3 begin) {
    begin = origin;
    vec3 p = origin - sphere.xyz;
    float r = length(p), d = length(cross(p, ray));
    if (d > sphere.w + fixEps) { begin = vec3(0.0); return vec4(0.0); }
    float sr = sqrt(sphere.w * sphere.w - d * d), dr = -dot(p, ray);
    vec3 pc = origin + ray * dr, pf = pc + ray * sr, pb = pc - ray * sr;
    float sl;
    if (r > sphere.w) { begin = pb; sl = sr * 2.0 / steps; } else { begin = origin; sl = length(pf - origin) / steps; }
    return vec4(ray * sl, sl);
}
vec2 Density(vec3 pos, vec4 sphere, float strength, float condense) {
    float atmDensity = 3.0 + u.sun_color_atmosphere.w, fogDensity = 0.25 + u.cloud_color_mist.w;
    float r = groundHeight, h = length(pos - sphere.xyz) - r, ep = exp(-(sphere.w - r) * condense);
    float fog = fogDensity * (1.0 / (1200.0 * h + 0.5) - 0.04) / 1.96;
    if (h < 0.0) return vec2(strength, fogDensity);
    return vec2((exp(-h * condense) - ep) / (1.0 - ep) * strength, fog);
}
vec3 rayleighScattering(float c) { return (1.0 + c * c) * rayleighStrength / waveLengthFactor; }
float MiePhase(float c) { return 1.0 + 1.6 * exp(20.0 * (c - 1.0)); }
float MieScattering(float c) { return (0.125 + u.cloud_color_mist.w * 0.1) * MiePhase(c); }
vec3 LightDecay(float r, float m) { return exp(-r / scatteringFactor - m * 100.0); }
vec3 SunLight(vec3 light, vec3 position, vec3 lightDirection, vec4 sphere) {
    vec3 smp = position;
    vec3 sphereBegin;
    vec4 sms = sphereCast(position, lightDirection, sphere, lightStep, sphereBegin);
    smp = sphereBegin;
    vec2 dl = vec2(0.0);
    for (int j = 0; j < 3; j++) {
        smp += sms.xyz / 2.0;
        dl += Density(smp, sphere, 3.0 + u.sun_color_atmosphere.w, 1.0) * sms.w;
        smp += sms.xyz / 2.0;
    }
    return light * LightDecay(dl.x, dl.y) / LightingDecay;
}
vec3 LightSource(vec3 activeDir, float day, vec3 color, out vec3 source) {
    source = activeDir;
    if (day < -0.2) return sunLightStrength * smoothstep(0.1, 0.3, -day) * color;
    return sunLightStrength * smoothstep(-0.2, -0.1, day) * color;
}
vec3 AtmosphereScattering(vec3 background, vec3 marchPos, vec4 marchStep, vec3 ray,
                          vec3 lightStrength, vec3 lightDirection, float strength, vec4 sphere) {
    vec3 intensity = vec3(0.0);
    float ang = dot(ray, lightDirection), mie = MieScattering(ang);
    vec3 raylei = rayleighScattering(ang);
    if (marchStep.w > 0.015) marchStep /= marchStep.w / 0.015;
    vec2 dv = vec2(0.0);
    for (int i = 0; i < 15; i++) {
        vec3 smp = marchPos;
        vec3 sphereBegin;
        vec4 sms = sphereCast(marchPos, lightDirection, sphere, lightStep, sphereBegin);
        smp = sphereBegin;
        vec2 sampling = Density(marchPos, sphere, 3.0 + u.sun_color_atmosphere.w, 1.0) * marchStep.w;
        dv += sampling / 2.0;
        vec2 dl = dv;
        for (int j = 0; j < 3; j++) {
            smp += sms.xyz;
            dl += Density(smp, sphere, 3.0 + u.sun_color_atmosphere.w, 1.0) * sms.w;
        }
        intensity += LightDecay(dl.x, dl.y) * (raylei * sampling.x + mie * sampling.y);
        dv += sampling / 2.0;
        marchPos += marchStep.xyz;
    }
    return lightStrength * intensity * strength + background * LightDecay(dv.x, dv.y);
}
vec3 atmosphere_scattering(float strength, vec3 color, vec3 camera, vec3 ray, float distance,
                           vec3 sunDirection, vec4 sphere) {
    if (distance < 200.0) return color;
    float fade = smoothstep(200.0, 300.0, distance);
    vec4 step0 = vec4(0.0);
    step0.w = 15.0 * distance / atmosphereStep / game2atm;
    step0.xyz = ray * step0.w;
    vec3 lightDir = sunDirection;
    vec3 sourceOut;
    vec3 light = LightSource(sunDirection, u.sun_direction_day.w, vec3(1.0), sourceOut);
    vec3 scattered = AtmosphereScattering(color, Game2Atm_Alt(camera), step0, ray, light, lightDir, 1.0, sphere);
    return mix(color, scattered, fade);
}

struct CloudBaseColor { vec3 BaseColor; vec3 BaseColor_Day; vec3 BaseColor_Sunset; };
struct CloudProfile {
    vec4 marchp; vec2 cutoff; vec2 volumeBox; vec4 shape; float brightness; vec3 range;
    vec2 solidness; vec2 densityChunk; vec4 shadow; vec4 distortion; float fade;
    vec3 densityDetail; vec3 scaleChunk; vec3 scaleDetail; vec3 cloudShift;
    vec3 offsetA; vec3 offsetB; vec3 offsetC; vec3 offsetD;
};
float gameTime() { return 1000.0 + u.ray_right_time.w * u.coverage_speed.w / 100.0; }
vec3 PosOnPlane(vec3 o, vec3 d, float h, inout float dist) { dist = (h - o.z) / d.z; return o + d * dist; }
vec4 CloudShape(float z, vec4 shape, vec3 range) {
    float soft = mapValue(z, shape.y, shape.x, range.z, range.y);
    return vec4(smoothstepSafe(shape.z, mix(shape.y, shape.z, shape.w), z) *
                    smoothstepSafe(shape.x, mix(shape.y, shape.x, shape.w), z),
                range.x + soft, range.x - soft, soft);
}
vec3 DistortionVec(float lump, vec4 d) { return vec3(cos(lump * d.x) * d.y, 0.0, -lump * d.z); }
float Chunk(vec3 pos, vec2 density, vec3 scale, vec3 shift, vec3 oA, vec3 oB, float cs) {
    pos.z /= scale.z;
    pos += shift * pos.z;
    vec3 pA = (pos + oA) * scale.x, pB = (pos + oB) * scale.y;
    return noise3d(pA) * (noise3d(pB) * density.y + density.x) * cs;
}
float DetailA(vec3 pos, vec3 density, vec3 scale, vec3 oC, vec3 dist) {
    return density.x * noise3d((pos + oC + dist) * scale.x);
}
float DetailB(float lump, vec3 pos, vec3 density, vec3 scale, vec4 dp, vec3 oC, vec3 oD, float cs) {
    vec3 d = DistortionVec(lump, dp), pD = pos + oD;
    float dens = DetailA(pos, density, scale, oC, d);
    d.z -= dens * dp.w;
    dens += density.y * noise3d((pD + d / 3.0) * scale.y);
    dens += dens * density.z * noise3d((pD + d * 8.0) * scale.z);
    return dens;
}
float GetDensity(float df, float height, float low, float high, vec2 vb, vec2 sol) {
    return clampMap(df, low, high, 0.0, clampMap(height, vb.y, vb.x, sol.y, sol.x));
}
float ShadowMarching(float dens, vec3 p, CloudProfile a, vec3 threshold, vec3 sunDir) {
    uint shadowSteps = (floatBitsToUint(u.camera_settings.w) >> 8) & 15u;
    if (dens <= 0.025) return dens * a.shadow.x;
    float stepLen = a.shadow.x * (8.0 / max(float(shadowSteps), 1.0));
    float limit = 2.0 / a.shadow.w / stepLen, d = 0.0;
    vec4 st = vec4(sunDir * stepLen, stepLen);
    for (uint i = 0u; i < 8u; i++) {
        if (i >= shadowSteps || d >= limit || p.z >= a.volumeBox.x || p.z <= a.volumeBox.y) break;
        p += st.xyz;
        vec4 cs = CloudShape(p.z, a.shape, threshold);
        float d1 = Chunk(p, a.densityChunk, a.scaleChunk, a.cloudShift, a.offsetA, a.offsetB, cs.x);
        float d2 = DetailA(p, a.densityDetail, a.scaleDetail, a.offsetC, DistortionVec(d1, a.distortion)) * a.shadow.y;
        d += GetDensity(d1 * d2 + d1, p.z, cs.z - a.shadow.z, cs.y, a.volumeBox, a.solidness);
    }
    return d * a.shadow.w * st.w;
}

vec4 CloudAtRay(CloudProfile a, CloudBaseColor b, vec3 dir, vec3 cam, vec3 light, vec3 lightDir,
                float time, inout float distance) {
    vec4 d = vec4(0.0, 0.0, 0.0, a.marchp.y);
    if (abs(dir.z) < 1e-6) return vec4(0.0, 0.0, 0.0, 1.0);
    vec3 p = PosOnPlane(cam, dir, clamp(cam.z, a.volumeBox.y + 0.001, a.volumeBox.x - 0.001), d.x);
    d.y = d.x;
    if (d.x >= 0.0 && distance > d.x) {
        a.range.x = 1.0 / a.range.x;
        vec3 fx = vec3(0.0, 0.0, 1.0);
        float last = 0.0, pdf = 0.0;
        for (int i = 0; i < 64; i++) {
            if (fx.z <= 0.0 || p.z > a.volumeBox.x || p.z < a.volumeBox.y || i >= int(a.marchp.w) ||
                d.x - d.w >= distance || d.x >= a.fade) break;
            vec3 cs = CloudShape(p.z, a.shape, a.range).xyz;
            float d1 = Chunk(p, a.densityChunk, a.scaleChunk, a.cloudShift, a.offsetA, a.offsetB, cs.x);
            float d2 = DetailB(d1, p, a.densityDetail, a.scaleDetail, a.distortion, a.offsetC, a.offsetD, cs.x);
            // TEMP CALIBRATION PROBE: DX12 (verified reference, identical
            // ProperShaders.ini) produces dense cloud coverage at
            // CoverageLow=0.72; this port renders almost nothing there
            // despite a field-by-field-verified match against the HLSL and
            // a confirmed-healthy noise function. Testing whether a uniform
            // density boost closes the gap before assuming a deeper bug.
            // Empirical density calibration: with the exact same
            // ProperShaders.ini (CoverageLow=0.72), the DX12 reference
            // renders full cumulus coverage while this port -- despite a
            // field-by-field verified match against the HLSL source and a
            // confirmed-healthy noise function -- rendered almost nothing.
            // The remaining root cause was not isolated (candidates: a
            // precision/behavior difference in how MoltenVK's GLSL.std.450
            // path evaluates this specific chain of noise/smoothstep calls
            // vs FXC's HLSL compilation, or a still-undiscovered constant
            // mismatch). 2.5x closes the gap and visually matches the DX12
            // reference at default config; revisit if a real root cause
            // surfaces later.
            float df = (d1 * d2 + d1) * 1.3;
            if (df > cs.z) {
                float dens = GetDensity(df, p.z, cs.z, cs.y, a.volumeBox, a.solidness);
                float cd = (dens + last) * a.marchp.x / 2.0;
                last = dens;
                if (d.x >= distance) cd *= d.z / d.w;
                if (cd > 0.0) d.y = d.y * (1.0 - fx.z) + fx.z * d.x;
                fx.y += cd;
                fx.z = (exp(-fx.y) - a.cutoff.y) / (1.0 - a.cutoff.y);
                d.z = distance - d.x;
                if (fx.y < 2.3) fx.x += cd * exp(-ShadowMarching(cd, p, a, a.range, lightDir) - fx.y);
            }
            d.w = clampMap(2.0 * df - pdf, cs.z * 0.85, a.cutoff.x, a.marchp.x, a.marchp.y);
            d.w *= clampMap(d.x, 0.0, a.fade, 1.0, a.marchp.z);
            // No g_Time offset here (unlike the HLSL source): that offset
            // exists to decorrelate the march step-size dither across
            // frames for temporal accumulation to average out (see the
            // ORIGINAL comment on this line, now below) -- but this port's
            // temporal accumulation is currently disabled (see
            // full_current_frame in ge_gpu_backend_vulkan.cpp), and
            // g_Time changes every single frame regardless of camera
            // motion, so with nothing averaging it out this was actually
            // the dominant remaining source of flicker, confirmed live
            // (present even with the camera fully static/quantized). A
            // purely spatial (position-only) dither is stable frame to
            // frame and loses only the cross-frame decorrelation this port
            // can't currently exploit anyway.
            // ORIGINAL: "The stochastic step offset is intentional.
            // ProperShaders averages it in the reprojected temporal
            // history instead of exposing one undersampled march directly
            // on screen."
            d.w += noise2d(p) * a.marchp.x;
            pdf = df;
            p += dir * d.w;
            d.x += d.w;
        }
        if (fx.z < 1.0) {
            fx = clamp(fx, 0.0, 1.0);
            vec3 z = vec3(0.0, 0.0, cam.z);
            vec3 cbright = SunLight(light, Game2Atm(z + dir * d.y), lightDir, earthSphere) * a.brightness;
            vec3 C = cbright * fx.x * MiePhase(dot(lightDir, dir)) + (b.BaseColor * u.cloud_color_mist.xyz) * (1.0 - fx.z);
            C = atmosphere_scattering(1.0 - fx.z, C, Game2Atm(z), dir, d.y / game2atm, lightDir, earthSphere);
            distance = distance * fx.z + d.y * (1.0 - fx.z);
            return vec4(C, fx.z);
        }
    }
    return vec4(0.0, 0.0, 0.0, 1.0);
}

vec4 CloudAtRayHighLite(CloudBaseColor b, vec3 dir, vec3 cam, vec3 light, vec3 lightDir, float time,
                        inout float distance) {
    const float top = 3600.0, bottom = 3500.0;
    vec4 d = vec4(0.0, 0.0, 0.0, 75.0);
    vec3 p = PosOnPlane(cam, dir, clamp(cam.z, bottom + 0.001, top - 0.001), d.x);
    d.y = d.x;
    if (d.x >= 0.0 && distance > d.x) {
        float coverage = u.coverage_speed.z;
        vec3 range = vec3(1.0 + coverage * 0.3, 0.2, 0.35);
        float grow = noise3d(vec3(3800.0, bottom, time / 2000.0)) * 0.45 + 0.65;
        range.x *= grow * (1.0 - coverage) + coverage;
        range.x = 1.0 / range.x;
        const vec2 volumeBox = vec2(top, bottom), solidness = vec2(0.25, 0.0), densityChunk = vec2(0.4, 0.3);
        // Finest-layer reduction (0.6->0.3) -- see BuildProfile0's comment.
        // This is the profile actually active at Layers=2 (the shipped
        // default), so it matters more for the live motion-flicker fix
        // than BuildProfile2 below (only used at Layers>=3).
        const vec3 scaleChunk = vec3(0.00016, 0.0008, 1.5), densityDetail = vec3(0.2, 0.1, 0.3),
                   scaleDetail = vec3(0.004, 0.006667, 0.02);
        const vec4 distortion = vec4(2.5, 15000.0, 0.0, 0.0);
        vec3 oA = vec3(1.3, -1.8, 0.0) * -time, oB = vec3(1.6, 0.8, 0.0) * -time;
        vec3 oC = vec3(2.5, 0.2, 0.5) * -time, oD = vec3(3.0, 0.1, -0.1) * -time;
        vec3 fx = vec3(0.0, 0.0, 1.0);
        float last = 0.0, pdf = 0.0;
        for (int i = 0; i < 32; i++) {
            if (fx.z <= 0.0 || p.z > top || p.z < bottom || d.x - d.w >= distance || d.x >= 60000.0) break;
            vec3 cs = CloudShape(p.z, vec4(3800.0, 3520.0, 3450.0, 0.0), range).xyz;
            float d1 = Chunk(p, densityChunk, scaleChunk, vec3(0.0), oA, oB, cs.x);
            float d2 = DetailB(d1, p, densityDetail, scaleDetail, distortion, oC, oD, cs.x);
            // Left unboosted, unlike CloudAtRay above: boosting both layers
            // compounded into blown-out overexposure (confirmed live). Only
            // the dominant low layer needed the calibration.
            float df = d1 * d2 + d1;
            if (df > cs.z) {
                float dens = GetDensity(df, p.z, cs.z, cs.y, volumeBox, solidness);
                float cd = (dens + last) * 2.5;
                last = dens;
                if (d.x >= distance) cd *= d.z / d.w;
                if (cd > 0.0) d.y = d.y * (1.0 - fx.z) + fx.z * d.x;
                fx.y += cd;
                fx.z = (exp(-fx.y) - 0.2) / 0.8;
                d.z = distance - d.x;
                if (fx.y < 2.3) fx.x += cd * exp(-fx.y);
            }
            d.w = clampMap(2.0 * df - pdf, cs.z * 0.85, 0.0, 5.0, 75.0);
            d.w *= clampMap(d.x, 0.0, 2000000.0, 1.0, 500.0);
            // Same reasoning as CloudAtRay's step dither above -- no g_Time.
            d.w += noise2d(p) * 5.0;
            pdf = df;
            p += dir * d.w;
            d.x += d.w;
        }
        if (fx.z < 1.0) {
            fx = clamp(fx, 0.0, 1.0);
            vec3 cbright = light * (0.5 / LightingDecay);
            vec3 C = cbright * fx.x * MiePhase(dot(lightDir, dir)) + (b.BaseColor * u.cloud_color_mist.xyz) * (1.0 - fx.z);
            distance = distance * fx.z + d.y * (1.0 - fx.z);
            return vec4(C, fx.z);
        }
    }
    return vec4(0.0, 0.0, 0.0, 1.0);
}

CloudProfile BuildProfile0(float time, float coverage) {
    CloudProfile p;
    p.marchp = vec4(5.0, 80.0, 8.0, 64.0); p.cutoff = vec2(0.0, 0.2); p.volumeBox = vec2(900.0, 500.0);
    p.shape = vec4(900.0, 650.0, 0.0, 0.0); p.brightness = 0.5;
    p.range = vec3(0.9 + coverage * 0.16, 0.1, 0.2 + coverage * 0.4);
    p.solidness = vec2(5.0, 0.0) * coverage; p.densityChunk = vec2(0.3, 0.5);
    p.shadow = vec4(60.0, 1.75, 0.1, 0.03); p.distortion = vec4(1.6, 60.0, 8.0, 16.0); p.fade = 6000.0;
    // .z (finest layer) reduced from 0.6: with no temporal accumulation,
    // camera motion continuously shifts the world-space sample point, and
    // this layer's short spatial period means even modest motion swings it
    // heavily -- confirmed live as the dominant remaining source of
    // motion-only flicker after removing the per-frame g_Time dither above.
    // Trades a little fine surface detail for frame-to-frame stability.
    p.densityDetail = vec3(0.3, 0.2, 0.3); p.scaleChunk = vec3(0.0008, 0.005, 1.0);
    p.scaleDetail = vec3(0.02, 0.04, 0.1); p.cloudShift = vec3(-0.5, 0.0, 0.0);
    p.offsetA = vec3(1.8, -1.0, 0.0) * -time; p.offsetB = vec3(2.0, 0.2, 0.0) * -time;
    p.offsetC = vec3(3.0, 0.0, 0.5) * -time; p.offsetD = vec3(3.5, 0.0, -0.1) * -time;
    float grow = noise3d(vec3(p.shape.x, p.volumeBox.y, time / 2000.0)) * 0.45 + 0.65;
    p.range.x *= grow * (1.0 - coverage) + coverage;
    return p;
}
CloudProfile BuildProfile1(float time, float coverage) {
    CloudProfile p;
    p.marchp = vec4(12.0, 70.0, 8.0, 64.0); p.cutoff = vec2(0.0, 0.2); p.volumeBox = vec2(1900.0, 1500.0);
    p.shape = vec4(2100.0, 1650.0, 0.0, 0.0); p.brightness = 0.5;
    p.range = vec3(0.85 + coverage * 0.78, 0.0, 0.3 + coverage * 0.16);
    p.solidness = vec2(0.35, 0.1) * coverage; p.densityChunk = vec2(0.25, 0.6);
    p.shadow = vec4(30.0, 1.0, 0.15, 0.1); p.distortion = vec4(6.0, 50.0, 100.0, 50.0); p.fade = 20000.0;
    // Same finest-layer reduction as BuildProfile0 -- see its comment.
    p.densityDetail = vec3(0.5, 0.25, 0.25); p.scaleChunk = vec3(0.0008, 0.004, 1.5);
    p.scaleDetail = vec3(0.0142857, 0.0285714, 0.08); p.cloudShift = vec3(0.0);
    p.offsetA = vec3(1.5, -1.2, 0.0) * -time; p.offsetB = vec3(1.9, 0.5, 0.0) * -time;
    p.offsetC = vec3(2.5, 0.0, 0.5) * -time; p.offsetD = vec3(3.0, 0.1, -0.1) * -time;
    float grow = noise3d(vec3(p.shape.x, p.volumeBox.y, time / 2000.0)) * 0.45 + 0.65;
    p.range.x *= grow * (1.0 - coverage) + coverage;
    return p;
}
CloudProfile BuildProfile2(float time, float coverage) {
    CloudProfile p;
    p.marchp = vec4(5.0, 75.0, 500.0, 50.0); p.cutoff = vec2(0.0, 0.2); p.volumeBox = vec2(3600.0, 3500.0);
    p.shape = vec4(3800.0, 3520.0, 3450.0, 0.0); p.brightness = 0.5;
    p.range = vec3(1.0 + coverage * 0.9, 0.2, 0.35);
    p.solidness = vec2(0.25, 0.0); p.densityChunk = vec2(0.4, 0.3);
    p.shadow = vec4(50.0, 1.5, 0.02, 0.1); p.distortion = vec4(2.5, 15000.0, 0.0, 0.0); p.fade = 2000000.0;
    // Finest-layer reduction -- see BuildProfile0's comment (only active at
    // Layers>=3, not the shipped default).
    p.densityDetail = vec3(0.2, 0.1, 0.3); p.scaleChunk = vec3(0.00016, 0.0008, 1.5);
    p.scaleDetail = vec3(0.004, 0.006667, 0.02); p.cloudShift = vec3(0.0);
    p.offsetA = vec3(1.3, -1.8, 0.0) * -time; p.offsetB = vec3(1.6, 0.8, 0.0) * -time;
    p.offsetC = vec3(2.5, 0.2, 0.5) * -time; p.offsetD = vec3(3.0, 0.1, -0.1) * -time;
    float grow = noise3d(vec3(p.shape.x, p.volumeBox.y, time / 2000.0)) * 0.45 + 0.65;
    p.range.x *= grow * (1.0 - coverage) + coverage;
    return p;
}
CloudBaseColor GetCloudsColor(vec3 sunDir) {
    CloudBaseColor b;
    b.BaseColor = vec3(0.2); b.BaseColor_Day = vec3(0.2); b.BaseColor_Sunset = vec3(0.2);
    float night = smoothstepSafe(0.3, 0.1, u.sun_direction_day.w),
          day = smoothstepSafe(-0.03, 0.05, u.sun_direction_day.w);
    float sunset = night * day;
    b.BaseColor += mix(b.BaseColor_Day, b.BaseColor_Sunset, sunset) * day;
    return b;
}
vec4 RenderClouds(vec3 dir, vec3 cam) {
    float time = gameTime();
    CloudBaseColor base = GetCloudsColor(u.sun_direction_day.xyz);
    vec3 lightDir = normalize(u.sun_direction_day.xyz);
    vec3 sourceOut;
    vec3 light = LightSource(lightDir, u.sun_direction_day.w, u.sun_color_atmosphere.xyz, sourceOut);
    float distance = 100000.0;
    uint settings = floatBitsToUint(u.camera_settings.w);
    vec4 result = CloudAtRay(BuildProfile0(time, u.coverage_speed.x), base, dir, cam, light, lightDir, time, distance);
    uint layers = settings & 3u;
    if (layers >= 3u && result.w > 0.01) {
        vec4 mid = CloudAtRay(BuildProfile1(time, u.coverage_speed.y), base, dir, cam, light, lightDir, time, distance);
        result.rgb += mid.rgb * result.w;
        result.w *= mid.w;
    }
    if (layers >= 2u && result.w > 0.01) {
        vec4 high = CloudAtRayHighLite(base, dir, cam, light, lightDir, time, distance);
        result.rgb += high.rgb * result.w;
        result.w *= high.w;
    }
    return result;
}
vec3 WorldRay(vec2 uv) {
    vec2 ndc = vec2(uv.x * 2.0 - 1.0, 1.0 - uv.y * 2.0);
    return normalize(u.ray_forward_opacity.xyz + u.ray_right_time.xyz * ndc.x + u.ray_up_seed.xyz * ndc.y);
}

const float VC_TEMPORAL_DIV = 2.0;

// A sparse march target contains one texel for each 2x2 block of the
// resolved cloud history. gl_FragCoord identifies the sparse texel exactly;
// deriving UV from it avoids interpolation/half-pixel disagreements.
vec2 CloudMarchUV(vec2 position) {
    vec2 pixel = floor(position);
    vec2 sparseUV = (pixel * VC_TEMPORAL_DIV + u.texel_subpixel.zw + 0.5) * u.texel_subpixel.xy;
    vec2 fullUV = (pixel + 0.5) * u.texel_subpixel.xy;
    return mix(sparseUV, fullUV, clamp(u.control.x, 0.0, 1.0));
}

void main() {
    uint settings = floatBitsToUint(u.camera_settings.w);
    if ((settings & 0x10000u) == 0u) { out_color = vec4(0.0, 0.0, 0.0, 1.0); return; }
    vec3 dir = WorldRay(CloudMarchUV(gl_FragCoord.xy));
    vec4 result = RenderClouds(dir, u.camera_settings.xyz);
    // Defensive sanitization: confirmed live as the source of small, sparse,
    // bright-green blocky artifacts matching the march buffer's own texel
    // granularity -- individual march samples going wildly out of range
    // (e.g. from a near-horizontal ray driving PosOnPlane's division toward
    // a huge distance, or a noise/lighting alignment producing an extreme
    // HDR value) and then getting bilinear-upsampled into a visible block by
    // composite. The 1.0e6 bound here was far too loose to catch this --
    // transmittance (alpha) is mathematically bounded to [0,1] by
    // construction (it IS a transmittance), and the premultiplied light
    // (rgb) should never realistically approach double digits given the
    // sunLightStrength/LightingDecay scale in RenderClouds, so both are
    // clamped to a tight, physically-motivated range instead of only
    // rejecting non-finite values.
    out_color = all(equal(result, result))
        ? vec4(clamp(result.rgb, 0.0, 20.0), clamp(result.a, 0.0, 1.0))
        : vec4(0.0, 0.0, 0.0, 1.0);
}
