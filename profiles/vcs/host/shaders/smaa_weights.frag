#version 450
layout(push_constant) uniform SmaaPush { vec4 metrics; } pc;
#define SMAA_RT_METRICS pc.metrics
#define SMAA_GLSL_4 1
#define SMAA_PRESET_HIGH 1
#include "SMAA.h"
layout(location = 0) in vec2 v_uv;
layout(location = 0) out vec4 out_color;

layout(set = 0, binding = 0) uniform sampler2D edges_tex;
layout(set = 0, binding = 1) uniform sampler2D area_tex;
layout(set = 0, binding = 2) uniform sampler2D search_tex;
void main() {
    vec2 pixcoord;
    vec4 offset[3];
    SMAABlendingWeightCalculationVS(v_uv, pixcoord, offset);
    out_color = SMAABlendingWeightCalculationPS(v_uv, pixcoord, offset, edges_tex, area_tex,
                                                search_tex, vec4(0.0));
}
