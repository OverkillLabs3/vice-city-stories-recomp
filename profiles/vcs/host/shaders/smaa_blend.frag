#version 450
layout(push_constant) uniform SmaaPush { vec4 metrics; } pc;
#define SMAA_RT_METRICS pc.metrics
#define SMAA_GLSL_4 1
#define SMAA_PRESET_HIGH 1
#include "SMAA.h"
layout(location = 0) in vec2 v_uv;
layout(location = 0) out vec4 out_color;

layout(set = 0, binding = 0) uniform sampler2D scene_color;
layout(set = 0, binding = 1) uniform sampler2D blend_tex;
void main() {
    vec4 offset;
    SMAANeighborhoodBlendingVS(v_uv, offset);
    vec4 c = SMAANeighborhoodBlendingPS(v_uv, offset, scene_color, blend_tex);
    out_color = vec4(c.rgb, 1.0);
}
