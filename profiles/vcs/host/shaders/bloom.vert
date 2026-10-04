#version 450

// Fullscreen triangle, no vertex buffer: three vertices generated directly
// from gl_VertexIndex, covering the whole clip-space square (and a bit more,
// clipped away) with a single triangle -- standard trick, avoids a
// dedicated quad vertex/index buffer for a pass that only ever draws once.
layout(location = 0) out vec2 v_uv;

void main() {
    vec2 position = vec2((gl_VertexIndex << 1) & 2, gl_VertexIndex & 2);
    v_uv = position;
    gl_Position = vec4(position * 2.0 - 1.0, 0.0, 1.0);
}
