#version 450

// Plain passthrough blit: samples the already-finished game frame
// (s.color_image, internal resolution) and writes it into the swapchain
// image (real display drawable resolution), letting the sampler's own
// filtering do the upscale -- linear or nearest chosen by which sampler the
// present descriptor set was built with (see UpscaleFilter in the .ini).
layout(set = 0, binding = 0) uniform sampler2D scene_color;

layout(location = 0) in vec2 v_uv;
layout(location = 0) out vec4 out_color;

void main() {
    out_color = vec4(texture(scene_color, v_uv).rgb, 1.0);
}
