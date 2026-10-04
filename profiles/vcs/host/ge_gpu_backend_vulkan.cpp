// MoltenVK/Vulkan GE backend.
//
// Real hardware rasterization of VCS geometry on macOS, standing in for
// ge_gpu_backend_dx12.cpp behind the same ge_gpu_backend.hpp interface.
//
// Scope of this revision: the screen-space submission path
// (ge_gpu_backend_accumulate_color_triangles). ge_renderer.cpp has already
// done transform, lighting, clipping and primitive assembly on the CPU and
// hands over finished screen-space triangles with all PSP pixel state packed
// per vertex. That is the tractable, verifiable half of the port, and it is
// where the actual per-pixel rasterization cost lives.
//
// The hardware-transform paths (accumulate_hardware_triangles /
// accumulate_hardware_packed_0115) are NOT implemented here yet and report
// "not accepted", so run with PSPRECOMP_GE_GPU_HW_TRANSFORM=0 (or
// Rendering.HardwareTransform=false) to keep geometry on the route this
// backend serves.
//
// Pixel semantics -- blend variants, depth compare, texture function, fog,
// alpha test, framebuffer quantization -- are ported from the validated DX12
// backend and its HLSL so the two are diffable when output disagrees. See
// shaders/psp_ge.{vert,frag}.
//
// Requires: brew install vulkan-headers vulkan-loader molten-vk shaderc
// (shaderc supplies glslc, used at build time to produce the SPIR-V headers).

#include "ge_gpu_backend.hpp"
#include "ge_cloud_camera_math.hpp"
#include "vcs_config.hpp"
#include "vcs_env.hpp"
#include "vcs_game_clock.hpp"
#include "vcs_sky_palette.hpp"
#include "vcs_texture_replace.hpp"
#include "vcs_runtime_log.hpp"
#include "vulkan_platform.hpp"

#include <vulkan/vulkan.h>

#include "psp_ge_vert_spv.h"
#include "psp_ge_frag_spv.h"
#include "psp_ge_hw_vert_spv.h"
#include "psp_ge_hw_packed0115_vert_spv.h"
#include "bloom_vert_spv.h"
#include "bloom_frag_spv.h"
#include "present_frag_spv.h"
#include "fxaa_frag_spv.h"
#include "smaa_edge_frag_spv.h"
#include "smaa_weights_frag_spv.h"
#include "smaa_blend_frag_spv.h"
#include "sky_palette_frag_spv.h"
#include "../third_party/smaa/AreaTex.h"
#include "../third_party/smaa/SearchTex.h"
#include "color_grade_frag_spv.h"
#include "cloud_march_frag_spv.h"
#include "cloud_resolve_frag_spv.h"
#include "cloud_composite_frag_spv.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <array>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <unordered_set>
#include <cctype>
#include <cstdlib>
#include <filesystem>
#include <cstring>
#include <mutex>
#include <span>
#include <string>
#include <unordered_map>
#include <vector>

namespace vcs {

namespace {

constexpr VkFormat kColorFormat = VK_FORMAT_R8G8B8A8_UNORM;

// Picks the highest-precision depth format the device actually supports for
// an optimal-tiling depth attachment, matching what ge_gpu_backend_dx12.cpp
// defaults to (DXGI_FORMAT_D32_FLOAT) instead of this backend's own
// previous hardcoded 16-bit choice. 16-bit depth was precise enough near
// the camera but not across VCS's actual depth range (a nearby character
// against a distant skyline in the same frame), which showed up as visible
// Z-fighting/incorrect occlusion -- a roof polygon rendering in front of
// things behind it, a character's face losing detail against whatever was
// mis-ordered just behind it. The Vulkan spec only guarantees D16_UNORM
// support unconditionally, so this still needs a real fallback chain, not
// just switching the hardcoded constant.
// `requested_bits` is Rendering.DepthPrecision from the .ini (16, 24 or 32).
// Previously this always picked the highest-precision format the device
// supported regardless of that setting -- silently ignoring it, the same way
// MSAA, SMAA and anisotropic filtering are no-ops on this backend.
// The requested precision is tried first and only falls back (to the
// next-best, then the mandatory D16) if the device cannot do it.
[[nodiscard]] VkFormat select_depth_format(VkPhysicalDevice physical_device,
                                           std::uint32_t requested_bits) noexcept {
    const auto supports = [&](VkFormat candidate) {
        VkFormatProperties properties{};
        vkGetPhysicalDeviceFormatProperties(physical_device, candidate, &properties);
        return (properties.optimalTilingFeatures & VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT) != 0u;
    };
    VkFormat preferred = VK_FORMAT_D32_SFLOAT;
    if (requested_bits <= 16u) preferred = VK_FORMAT_D16_UNORM;
    else if (requested_bits == 24u) preferred = VK_FORMAT_D24_UNORM_S8_UINT;
    if (supports(preferred)) return preferred;
    for (const VkFormat candidate : {VK_FORMAT_D32_SFLOAT, VK_FORMAT_D24_UNORM_S8_UINT,
                                     VK_FORMAT_D16_UNORM}) {
        if (supports(candidate)) return candidate;
    }
    return VK_FORMAT_D16_UNORM;  // Mandatory support; always reachable as a last resort.
}
// PSP screen space. Vertices arrive in these coordinates; the viewport scales
// them to the internal render target, which is how the internal-resolution
// setting turns into actual extra pixels for free.
constexpr float kPspWidth = 480.0f;
constexpr float kPspHeight = 272.0f;

// The guest composes each frame into a 512 x 320 area (the display's 512-pixel stride and the rows
// below it) and its world and interface geometry is positioned in that space, the top-left 480 x 272
// of it being what a PSP's screen shows. The original DirectX 12 renderer presents the whole frame
// (it tracks the logical extent of the target it presents), so the world and the interface both sit
// inside the picture. Mapping only 480 x 272 of it to the output crops the frame and magnifies it by
// 512/480 horizontally and 320/272 vertically: the interface ran off the right and bottom edges and
// the field of view came out narrower. Every conversion between guest screen space and the render
// target therefore uses this size. PSPRECOMP_VULKAN_FRAME=480x272 restores the cropped mapping.
struct FrameExtent {
    float width;
    float height;
};
FrameExtent frame_extent() noexcept {
    static const FrameExtent extent = [] {
        FrameExtent value{512.0f, 320.0f};
        if (const char *text = VCS_ENV("PSPRECOMP_VULKAN_FRAME"); text != nullptr && *text != '\0') {
            unsigned w = 0u;
            unsigned h = 0u;
            if (std::sscanf(text, "%ux%u", &w, &h) == 2 && w >= 240u && w <= 2048u && h >= 136u && h <= 2048u)
                value = {static_cast<float>(w), static_cast<float>(h)};
        }
        return value;
    }();
    return extent;
}
constexpr VkDeviceSize kInitialVertexBytes = 8u * 1024u * 1024u;

// Vice City time-of-day palette weights from the in-game clock: `golden` peaks
// just after sunrise and before sunset (pink/orange light), `night` ramps in
// once the sun is down (violet-blue, neon-friendly). Follows the real game
// clock.
struct VicePalette {
    float golden{0.0f};
    float night{0.0f};
    bool valid{false};
};

[[nodiscard]] VicePalette vice_palette() noexcept {
    const float hours = vcs::game_clock_hours();
    if (hours < 0.0f) return {};
    // Windows measured against the game's own timecycle: dawn glow around
    // 6:30, full day until about 19:00, dusk 19:00-20:30, dark from ~21:00.
    const auto bump = [&](float center, float width) {
        const float x = (hours - center) / width;
        return std::exp(-x * x);
    };
    const auto smooth = [](float a, float b, float x) {
        const float u = std::clamp((x - a) / (b - a), 0.0f, 1.0f);
        return u * u * (3.0f - 2.0f * u);
    };
    const float golden = std::max(bump(6.6f, 0.9f), bump(19.7f, 0.9f));
    const float night = std::max(smooth(20.0f, 21.5f, hours), 1.0f - smooth(4.5f, 6.0f, hours));
    return {golden, night, true};
}

// How the clouds are lit by hour. Real clouds keep glowing orange-pink while
// they still catch light from below the horizon after sunset, then fade fast
// through magenta to a dark violet-grey, and stay dim at night. Mirrored at dawn.
struct CloudLightKey {
    float hour;
    std::array<float, 3> color;  // cloud body color (0..1)
    float brightness;            // multiplier on cloud brightness
};

inline constexpr std::array<CloudLightKey, 14> kCloudLight{{
    {0.0f, {0.30f, 0.30f, 0.52f}, 0.12f},
    {4.8f, {0.30f, 0.30f, 0.52f}, 0.12f},
    {5.6f, {0.80f, 0.50f, 0.70f}, 0.45f},
    {6.3f, {1.00f, 0.68f, 0.68f}, 1.00f},
    {7.3f, {0.92f, 0.86f, 0.94f}, 1.00f},
    {9.0f, {0.90f, 0.88f, 0.94f}, 1.00f},
    {17.5f, {0.90f, 0.88f, 0.94f}, 1.00f},
    {18.6f, {0.98f, 0.84f, 0.80f}, 1.00f},
    {19.3f, {1.00f, 0.66f, 0.52f}, 1.00f},
    {19.9f, {0.98f, 0.52f, 0.62f}, 0.80f},
    {20.4f, {0.66f, 0.36f, 0.62f}, 0.36f},
    {21.0f, {0.36f, 0.30f, 0.56f}, 0.16f},
    {22.0f, {0.30f, 0.30f, 0.52f}, 0.12f},
    {24.0f, {0.30f, 0.30f, 0.52f}, 0.12f},
}};

[[nodiscard]] CloudLightKey cloud_light(float hours) noexcept {
    for (std::size_t i = 1u; i < kCloudLight.size(); ++i) {
        if (hours <= kCloudLight[i].hour) {
            const CloudLightKey &a = kCloudLight[i - 1u];
            const CloudLightKey &b = kCloudLight[i];
            const float x = (hours - a.hour) / std::max(b.hour - a.hour, 1.0e-4f);
            const float s = x * x * (3.0f - 2.0f * x);
            CloudLightKey out{hours, {}, a.brightness + (b.brightness - a.brightness) * s};
            for (std::size_t c = 0u; c < 3u; ++c) out.color[c] = a.color[c] + (b.color[c] - a.color[c]) * s;
            return out;
        }
    }
    return kCloudLight.back();
}

struct PushConstants {
    float inverse_viewport[2];
    std::uint32_t framebuffer_format;
};

// Matches shaders/bloom.frag's push_constant block exactly.
struct BloomPushConstants {
    float texel_size[2];
    float threshold;
    float intensity;
};

// Matches shaders/fxaa.frag's push_constant block exactly.
struct FxaaPushConstants {
    float texel_size[2];
};

// Matches shaders/color_grade.frag's push_constant block exactly.
struct ColorGradePushConstants {
    float saturation;
    float contrast;
    float brightness;
    float tint_r;
    float tint_g;
    float tint_b;
    float sharpen_strength;
    float texel_x;
    float texel_y;
    float dither_strength;
    float cas_sharpness;
    float vhs_wiggle;
    float vhs_smear;
    float vhs_enabled;
    float time_seconds;
};

// One observed GE draw camera, tracked so the cloud march can pick the same
// world camera VCS' native geometry actually rasterized with. Direct port of
// ge_gpu_backend_dx12.cpp's CloudCameraCandidate; unlike DX12, this backend
// only ever has one render target (s.color_image), so `target` is kept for
// parity/diagnostics but selection no longer needs DX12's framebuffer-
// feedback ancestor graph.
struct CloudCameraCandidate {
    std::array<float, 12> view{};
    std::array<float, 16> projection{};
    std::array<float, 6> viewport{};
    std::array<float, 3> camera_position{};
    std::uint32_t target{};
    std::uint64_t weight{};
    std::uint64_t occluding_weight{};
};

// Matches shaders/cloud_march.frag / cloud_resolve.frag / cloud_composite.frag's
// `CloudUBO` std140 block exactly -- 15 vec4s, direct port of DX12's
// CloudShaderConstants (10 vec4s) + CloudTemporalConstants (5 vec4s) merged
// into one buffer since Vulkan has no root-constant equivalent large enough
// (240 bytes exceeds the guaranteed-minimum 128-byte push-constant budget).
struct CloudUniforms {
    std::array<float, 4> ray_right_time{};
    std::array<float, 4> ray_up_seed{};
    std::array<float, 4> ray_forward_opacity{};
    std::array<float, 4> camera_settings{};
    std::array<float, 4> coverage_speed{};
    std::array<float, 4> sun_direction_day{};
    std::array<float, 4> sun_color_atmosphere{};
    std::array<float, 4> cloud_color_mist{};
    std::array<float, 4> fog_color_start{};
    std::array<float, 4> brightness_padding{};
    std::array<float, 4> previous_right_history{};
    std::array<float, 4> previous_up_blend{};
    std::array<float, 4> previous_forward_spatial{};
    std::array<float, 4> texel_subpixel{};
    std::array<float, 4> control{};
};
static_assert(sizeof(CloudUniforms) == 15u * 4u * sizeof(float));

// Matches psp_ge_hw.vert/psp_ge_hw_packed0115.vert's push_constant block
// layout exactly (both shaders share one struct/pipeline layout; the
// generic hw-transform shader simply ignores draw_control, which only the
// packed-0115 shader reads, since its per-draw alpha/texture/env/fog state
// doesn't otherwise fit in that shader's per-vertex attributes -- see
// psp_ge_hw_packed0115.vert's header comment). Ported from DX12's
// Dx12TransformConstants/DrawTransform cbuffer (ge_gpu_backend_dx12.cpp).
struct HwTransformPushConstants {
    float row0[4];
    float row1[4];
    float row2[4];
    float row3[4];
    float model_to_view_z[4];
    float uv_scale_offset[4];
    float fog_parameters[4];
    std::uint32_t transform_control[4];
    float vertex_color_mul[4];
    float vertex_color_add[4];
    std::uint32_t draw_control[4];
};

// Raw PSP 0x0115 vertex bytes (u8 UV + 5551 colour + s16 XYZ, 10-byte
// stride) as psp_ge_hw_packed0115.vert's vertex attributes expect them.
// #pragma pack keeps this exactly 10 bytes with no compiler-inserted
// padding, matching the PSP's own byte layout bit for bit.
#pragma pack(push, 1)
struct Packed0115Vertex {
    std::uint8_t u;
    std::uint8_t v;
    std::uint16_t color5551;
    std::int16_t x;
    std::int16_t y;
    std::int16_t z;
};
#pragma pack(pop)
static_assert(sizeof(Packed0115Vertex) == 10u, "PSP 0x0115 vertex must be exactly 10 bytes");

// One hardware-transform draw: like Batch above, but the CPU has not
// transformed these vertices at all (screen-space Batch's whole premise),
// so each one carries its own per-draw transform (baked into push constants
// at draw time) alongside the pipeline/blend/scissor state Batch already
// tracks.
struct HwTransformBatch {
    std::uint32_t first_vertex{};
    std::uint32_t vertex_count{};
    std::uint32_t first_index{};
    std::uint32_t index_count{};  // 0 means non-indexed
    bool packed_0115{};
    VkPipeline pipeline{VK_NULL_HANDLE};
    VkDescriptorSet descriptor{VK_NULL_HANDLE};
    std::array<float, 4> blend_constants{};
    std::array<std::int32_t, 4> scissor{};
    HwTransformPushConstants constants{};
    bool cull_enabled{};
    bool accept_counter_clockwise{};
};

// ---------------------------------------------------------------------------
// PSP state -> pipeline state. Ported from ge_gpu_backend_dx12.cpp so the two
// backends classify identically; see blend_variant()/depth_compare() there.
// ---------------------------------------------------------------------------

[[nodiscard]] VkCompareOp depth_compare(std::uint32_t function) noexcept {
    switch (function & 7u) {
    case 0u: return VK_COMPARE_OP_NEVER;
    case 1u: return VK_COMPARE_OP_ALWAYS;
    case 2u: return VK_COMPARE_OP_EQUAL;
    case 3u: return VK_COMPARE_OP_NOT_EQUAL;
    case 4u: return VK_COMPARE_OP_LESS;
    case 5u: return VK_COMPARE_OP_LESS_OR_EQUAL;
    case 6u: return VK_COMPARE_OP_GREATER;
    case 7u: return VK_COMPARE_OP_GREATER_OR_EQUAL;
    }
    return VK_COMPARE_OP_ALWAYS;
}

[[nodiscard]] std::uint32_t blend_variant(const GeGpuDrawDescriptor &draw) noexcept {
    if (!draw.blend_enabled || draw.clear_mode) return 0u;
    const std::uint32_t equation = draw.blend_equation & 7u;
    const std::uint32_t source = draw.blend_source_factor & 0xFu;
    const std::uint32_t destination = draw.blend_dest_factor & 0xFu;
    if (equation == 0u && source == 2u && destination == 3u) return 1u; // src alpha / inv src alpha
    if (equation == 0u && source == 10u && destination == 10u) {
        const std::uint32_t fixed_source = draw.blend_fix_source & 0x00FFFFFFu;
        const std::uint32_t fixed_destination = draw.blend_fix_dest & 0x00FFFFFFu;
        if (fixed_source == 0x00FFFFFFu && fixed_destination == 0u) return 2u;          // replace
        if (fixed_source == 0x00FFFFFFu && fixed_destination == 0x00FFFFFFu) return 3u; // additive
        bool complements = true;
        for (std::uint32_t shift = 0u; shift < 24u; shift += 8u)
            complements &= (((fixed_source >> shift) & 0xFFu) +
                            ((fixed_destination >> shift) & 0xFFu)) == 0xFFu;
        if (complements) return 4u; // blend factor / inverse blend factor
    }
    if (equation == 0u && source == 2u && destination == 10u &&
        (draw.blend_fix_dest & 0x00FFFFFFu) == 0x00FFFFFFu) return 5u;
    return 0u;
}

// PSP's mask byte is 0xFF for "do not write this channel"; Vulkan's mask bit
// means "do write". Same inversion the DX12 backend performs.
[[nodiscard]] VkColorComponentFlags color_write_mask(const GeGpuDrawDescriptor &draw) noexcept {
    VkColorComponentFlags mask = 0u;
    constexpr std::array<VkColorComponentFlagBits, 4> bits{
        VK_COLOR_COMPONENT_R_BIT, VK_COLOR_COMPONENT_G_BIT, VK_COLOR_COMPONENT_B_BIT,
        VK_COLOR_COMPONENT_A_BIT};
    for (std::uint32_t channel = 0u; channel < 4u; ++channel) {
        const std::uint32_t byte = (draw.color_write_mask >> (channel * 8u)) & 0xFFu;
        if (byte != 0xFFu) mask |= bits[channel];
    }
    return mask;
}

[[nodiscard]] std::uint64_t pipeline_key(const GeGpuDrawDescriptor &draw) noexcept {
    std::uint64_t key = static_cast<std::uint64_t>(draw.depth_test_enabled ? 1u : 0u);
    key |= static_cast<std::uint64_t>(draw.depth_write_enabled ? 1u : 0u) << 1u;
    key |= static_cast<std::uint64_t>(draw.depth_function & 7u) << 2u;
    key |= static_cast<std::uint64_t>(blend_variant(draw) & 7u) << 5u;
    key |= static_cast<std::uint64_t>(color_write_mask(draw) & 0xFu) << 8u;
    return key;
}

[[nodiscard]] std::uint64_t texture_key(const GeGpuDrawDescriptor &draw) noexcept {
    if (draw.texture_cache_key_hint != 0u) return draw.texture_cache_key_hint;
    // Fallback when the renderer did not precompute a key: hash the state that
    // identifies the decoded image. clut_checksum matters -- VCS recolours
    // vehicles by rewriting the palette at the same address, so keying on the
    // CLUT address alone makes two differently coloured cars collide.
    std::uint64_t hash = 1469598103934665603ull;
    const auto mix = [&hash](std::uint64_t value) {
        hash ^= value;
        hash *= 1099511628211ull;
    };
    mix(draw.texture_address);
    mix(draw.texture_format);
    mix(draw.texture_buffer_width);
    mix(draw.texture_width);
    mix(draw.texture_height);
    mix(draw.clut_address);
    mix(draw.clut_checksum);
    mix(draw.texture_swizzled ? 1u : 0u);
    return hash;
}

[[nodiscard]] std::uint64_t sampler_key(const GeGpuDrawDescriptor &draw) noexcept {
    return (draw.texture_min_linear ? 1ull : 0ull) | (draw.texture_mag_linear ? 2ull : 0ull) |
           (draw.texture_clamp_u ? 4ull : 0ull) | (draw.texture_clamp_v ? 8ull : 0ull);
}

struct TextureEntry {
    VkImage image{VK_NULL_HANDLE};
    VkDeviceMemory memory{VK_NULL_HANDLE};
    VkImageView view{VK_NULL_HANDLE};
    VkDescriptorSet descriptor{VK_NULL_HANDLE};
    std::uint32_t width{};
    std::uint32_t height{};
    // log2 of how much larger this texture is than the game's own (replacement or
    // upscale); the shader divides it back out of the size it normalizes UVs by.
    std::uint8_t scale_shift{0u};
    // vcs::texture_signature() of the pixels this entry was uploaded from.
    std::uint64_t source_signature{0u};
    VkSampler sampler{VK_NULL_HANDLE};
    // Stamped with VulkanGeState::frame_epoch every time this entry is
    // uploaded or looked up by a draw. Lets upload() evict the least
    // recently used entry instead of refusing every texture past whatever
    // count happened to be resident when the cache first filled up -- see
    // the eviction loop there for why that refusal was the actual cause of
    // textures "breaking" progressively during a long play session (DX12's
    // backend already evicts by this same recency rule; this one never did).
    std::uint64_t last_used_epoch{0u};
};

// One recorded draw: a contiguous run of vertices plus the state they need.
struct Batch {
    std::uint32_t first_vertex{};
    std::uint32_t vertex_count{};
    VkPipeline pipeline{VK_NULL_HANDLE};
    std::uint32_t framebuffer_format{};
    VkDescriptorSet descriptor{VK_NULL_HANDLE};
    std::array<float, 4> blend_constants{};
    std::array<std::int32_t, 4> scissor{};
    // GE framebuffer stride (draw.framebuffer_stride) for whichever target
    // this batch renders into. PSP VRAM buffers are routinely allocated
    // wider than the visible 480px (512 is the common stride, for
    // alignment) -- the extra columns exist but are never meant to be seen.
    // finish_color_frame() used to map every batch's vertices as though its
    // target were exactly kPspWidth (480) wide regardless of this, which
    // stretches a 512-wide target's content by 512/480 (~6.7%) end to end:
    // confirmed live via the F9-adjacent edge-diag capture as the direct
    // cause of interface elements (money counter among them) rendering
    // partly off the true screen edge, at every internal resolution and
    // every real display aspect alike (DX12 never had this: it already
    // tracks this per-target width -- see ge_gpu_backend_dx12.cpp's
    // logical_width). 0 means "not yet known" / "use kPspWidth".
    std::uint32_t framebuffer_stride{};
    // Cloud FadingEntities-boundary detection only (see the batch loop in
    // ge_gpu_backend_finish_color_frame): the GE state, not baked into
    // `pipeline`'s VkPipeline handle the way blend/format/depth-compare-op
    // are, so it has to ride along on the batch itself.
    bool clear_mode{};
    bool depth_test_enabled{};
    bool depth_write_enabled{};
};

struct VulkanGeState {
    GeGpuBackendReport report{};
    // Also read by ge_renderer.cpp's skip_owned/skip_displayed CPU-raster-
    // skip logic (see ge_gpu_backend_owned_framebuffer()'s comment below for
    // why it reports report.presented_framebuffer_target here instead of
    // this raw sceDisplaySetFrameBuf() value, which is one frame stale).
    // Address-history-based bucket selection was tried and reverted (see
    // finish_color_frame()'s selection comment) -- this field itself is
    // still real and used, just not for that.
    std::uint32_t display_framebuffer{};
    bool enabled{false};
    bool anisotropy_supported{false};
    float max_supported_anisotropy{1.0f};

    VkInstance instance{VK_NULL_HANDLE};
    VkPhysicalDevice physical_device{VK_NULL_HANDLE};
    VkDevice device{VK_NULL_HANDLE};
    VkQueue graphics_queue{VK_NULL_HANDLE};
    std::uint32_t graphics_queue_family{0xFFFFFFFFu};
    VkCommandPool command_pool{VK_NULL_HANDLE};
    VkCommandBuffer command_buffer{VK_NULL_HANDLE};
    VkFence fence{VK_NULL_HANDLE};

    // GPU-side timestamp queries (see PSPRECOMP_GE_GPU_TIMESTAMP_DIAG),
    // separate from the CPU wall-clock timer around command recording --
    // together they split a slow frame into "the CPU spent a long time
    // recording/submitting" vs "the GPU itself took a long time executing",
    // which a single frame_us/ge_us number (already measured elsewhere)
    // cannot distinguish. Index 0 is written at TOP_OF_PIPE right after
    // vkBeginCommandBuffer, index 1 at BOTTOM_OF_PIPE right before
    // vkEndCommandBuffer, so their difference times the whole submission
    // (main GE pass + bloom pass, when active) on the GPU's own clock.
    bool timestamps_supported{false};
    float timestamp_period_ns{1.0f};
    VkQueryPool timestamp_pool{VK_NULL_HANDLE};

    // Step 2 of the native-swapchain present-path migration (see the
    // scoping plan): a real VkSurfaceKHR created from the game window's
    // actual CAMetalLayer, gated behind PSPRECOMP_VULKAN_SWAPCHAIN=1. Purely
    // additive and diagnostic at this stage -- nothing yet reads from or
    // presents through this surface; the existing CPU-readback/SDL present
    // path (display_window_present_rgba) still does 100% of real
    // presentation regardless of whether this surface exists. Kept
    // completely separate from every other Vulkan resource above so this
    // step can be reverted by deleting only this block plus
    // ge_gpu_backend_set_native_window's body, with zero risk to anything
    // already working.
    bool swapchain_migration_enabled{false};
    VkSurfaceKHR diagnostic_surface{VK_NULL_HANDLE};
    void *diagnostic_native_window{nullptr};

    // Real swapchain + present pipeline. Only ever touched when
    // swapchain_migration_enabled; every field here stays VK_NULL_HANDLE/
    // default and completely unused otherwise. Bloom is force-disabled
    // whenever this path is active (bloom's glow composite is CPU-side
    // only -- see ge_gpu_backend_finish_color_frame -- and would silently
    // never show up if the CPU readback that composite depends on is
    // skipped, which this path does).
    VkSwapchainKHR swapchain{VK_NULL_HANDLE};
    VkPresentModeKHR swapchain_present_mode{VK_PRESENT_MODE_FIFO_KHR};
    bool swapchain_needs_recreate{false};
    std::uint32_t swapchain_recreations{0u};
    VkFormat swapchain_format{VK_FORMAT_UNDEFINED};
    VkExtent2D swapchain_extent{};
    std::vector<VkImage> swapchain_images;
    std::vector<VkImageView> swapchain_views;
    std::vector<VkFramebuffer> swapchain_framebuffers;
    VkRenderPass present_render_pass{VK_NULL_HANDLE};
    VkSampler present_sampler{VK_NULL_HANDLE};
    VkDescriptorSetLayout present_descriptor_layout{VK_NULL_HANDLE};
    VkDescriptorPool present_descriptor_pool{VK_NULL_HANDLE};
    VkDescriptorSet present_descriptor_set{VK_NULL_HANDLE};
    VkPipelineLayout present_pipeline_layout{VK_NULL_HANDLE};
    VkPipeline present_pipeline{VK_NULL_HANDLE};
    VkShaderModule present_vertex_shader{VK_NULL_HANDLE};
    VkShaderModule present_fragment_shader{VK_NULL_HANDLE};
    VkCommandBuffer present_command_buffer{VK_NULL_HANDLE};
    VkSemaphore present_image_acquired{VK_NULL_HANDLE};
    VkSemaphore present_render_finished{VK_NULL_HANDLE};
    // Signaled alongside present_render_finished, but consumed by the NEXT
    // frame's main render submission instead of vkQueuePresentKHR -- lets
    // that submission wait only until the present pass's READ of
    // color_image is done (a real dependency, satisfied on the GPU timeline)
    // instead of the coarse vkQueueWaitIdle() this replaced, which stalled
    // the CPU until the ENTIRE queue drained.
    VkSemaphore present_color_read_done{VK_NULL_HANDLE};
    bool present_just_ran{false};
    // Set true only when this specific finish_color_frame() call actually
    // blitted a new frame into the swapchain and presented it -- NOT the
    // same thing as "swapchain mode is configured." Distinguishing these
    // matters because a vblank with nothing new to render (no GE draws
    // submitted this frame -- e.g. during intro-video playback, where the
    // game issues no 3D draws at all) still calls finish_color_frame(), but
    // s.submission_pending is false so the swapchain branch never runs.
    // ge_gpu_backend_presents_directly() used to report "yes, handled" for
    // every such vblank purely because swapchain mode was on, which made
    // vcs_profile.cpp skip its software/video present path even though
    // nothing was actually shown that vblank -- confirmed live as the
    // actual cause of missing intro videos in swapchain mode (a CAMetalLayer
    // ownership conflict with the SDL renderer was a *second*, real bug
    // fixed separately in display_window.cpp, but did not fully explain the
    // missing videos on its own).
    bool swapchain_presented_this_call{false};
    // Frames the GPU backend did not render (intro videos, screens drawn straight into guest RAM)
    // are shown through the same swapchain: uploaded to sw_image and drawn by the present pass.
    VkImage sw_image{VK_NULL_HANDLE};
    VkDeviceMemory sw_image_memory{VK_NULL_HANDLE};
    VkImageView sw_view{VK_NULL_HANDLE};
    VkDescriptorSet sw_descriptor_set{VK_NULL_HANDLE};
    std::uint32_t sw_width{0u};
    std::uint32_t sw_height{0u};
    bool sw_image_in_use{false};  // has been through a layout transition (contents defined)
    VkBuffer sw_staging{VK_NULL_HANDLE};
    VkDeviceMemory sw_staging_memory{VK_NULL_HANDLE};
    void *sw_staging_mapped{nullptr};
    VkDeviceSize sw_staging_capacity{0u};
    VkFence present_fence{VK_NULL_HANDLE};
    bool present_fence_pending{false};

    std::uint32_t width{480u};
    std::uint32_t height{272u};
    VkImage color_image{VK_NULL_HANDLE};
    VkDeviceMemory color_memory{VK_NULL_HANDLE};
    VkImageView color_view{VK_NULL_HANDLE};
    VkImage depth_image{VK_NULL_HANDLE};
    VkDeviceMemory depth_memory{VK_NULL_HANDLE};
    VkImageView depth_view{VK_NULL_HANDLE};
    VkRenderPass render_pass{VK_NULL_HANDLE};
    VkFramebuffer framebuffer{VK_NULL_HANDLE};

    VkShaderModule vertex_shader{VK_NULL_HANDLE};
    VkShaderModule fragment_shader{VK_NULL_HANDLE};
    VkDescriptorSetLayout descriptor_layout{VK_NULL_HANDLE};
    VkDescriptorPool descriptor_pool{VK_NULL_HANDLE};
    VkPipelineLayout pipeline_layout{VK_NULL_HANDLE};
    std::unordered_map<std::uint64_t, VkPipeline> pipelines;

    VkBuffer vertex_buffer{VK_NULL_HANDLE};
    VkDeviceMemory vertex_memory{VK_NULL_HANDLE};
    VkDeviceSize vertex_capacity{};
    void *vertex_mapped{nullptr};

    // Hardware-transform pipeline state: a separate pipeline layout (the
    // push-constant block is much larger than the screen-space path's) and
    // shader modules for psp_ge_hw.vert (generic) and
    // psp_ge_hw_packed0115.vert (dominant-format fast path). Both share the
    // existing fragment shader (s.fragment_shader) unchanged. Pipelines are
    // cached the same way as the screen-space path's s.pipelines, keyed
    // separately since the key space (which now includes packed-vs-generic
    // and CPU-side cull state) does not overlap.
    VkShaderModule hw_vertex_shader{VK_NULL_HANDLE};
    VkShaderModule hw_packed_vertex_shader{VK_NULL_HANDLE};
    VkPipelineLayout hw_pipeline_layout{VK_NULL_HANDLE};
    std::unordered_map<std::uint64_t, VkPipeline> hw_pipelines;

    // Separate GPU-visible buffers for hardware-transform data: the generic
    // path's vertex format (GeGpuVertex, model-space) differs from the
    // screen-space path's (also GeGpuVertex, but already-transformed) only
    // in what the shader does with it, so it could in principle share
    // s.vertex_buffer -- kept separate instead so growing one buffer's
    // capacity independently of the other never has to reason about which
    // frame's data is currently resident in a shared allocation.
    VkBuffer hw_vertex_buffer{VK_NULL_HANDLE};
    VkDeviceMemory hw_vertex_memory{VK_NULL_HANDLE};
    VkDeviceSize hw_vertex_capacity{};
    void *hw_vertex_mapped{nullptr};

    VkBuffer hw_packed_vertex_buffer{VK_NULL_HANDLE};
    VkDeviceMemory hw_packed_vertex_memory{VK_NULL_HANDLE};
    VkDeviceSize hw_packed_vertex_capacity{};
    void *hw_packed_vertex_mapped{nullptr};

    VkBuffer hw_index_buffer{VK_NULL_HANDLE};
    VkDeviceMemory hw_index_memory{VK_NULL_HANDLE};
    VkDeviceSize hw_index_capacity{};
    void *hw_index_mapped{nullptr};

    VkBuffer readback_buffer{VK_NULL_HANDLE};
    VkDeviceMemory readback_memory{VK_NULL_HANDLE};
    VkDeviceSize readback_capacity{};

    // Experimental bloom pass (see [SimulateHDR] in the .ini). One extra
    // same-size image the bright-pass/blur fullscreen shader writes into,
    // read back to CPU through its own buffer exactly like s.color_image is
    // -- kept as a strictly one-directional GPU pass (sample color_image,
    // write bloom_image) so the existing color_image readback path is never
    // touched or reordered. The actual per-pixel additive composite happens
    // on the CPU, in finish_color_frame()'s existing readback-collection
    // step, not in Vulkan; see bloom_enabled's use there. That keeps the
    // composite, the only new pixel logic here, in ordinary C++ instead of
    // another render pass with its own load/store-op and layout-transition
    // surface to get wrong.
    bool bloom_enabled{false};
    float bloom_threshold{0.8f};
    float bloom_intensity{0.6f};
    VkImage bloom_image{VK_NULL_HANDLE};
    VkDeviceMemory bloom_memory{VK_NULL_HANDLE};
    VkImageView bloom_view{VK_NULL_HANDLE};
    VkRenderPass bloom_render_pass{VK_NULL_HANDLE};
    VkFramebuffer bloom_framebuffer{VK_NULL_HANDLE};
    VkSampler bloom_sampler{VK_NULL_HANDLE};
    VkDescriptorSetLayout bloom_descriptor_layout{VK_NULL_HANDLE};
    VkDescriptorPool bloom_descriptor_pool{VK_NULL_HANDLE};
    VkDescriptorSet bloom_descriptor_set{VK_NULL_HANDLE};
    VkPipelineLayout bloom_pipeline_layout{VK_NULL_HANDLE};
    VkPipeline bloom_pipeline{VK_NULL_HANDLE};
    VkShaderModule bloom_vertex_shader{VK_NULL_HANDLE};
    VkShaderModule bloom_fragment_shader{VK_NULL_HANDLE};
    VkBuffer bloom_readback_buffer{VK_NULL_HANDLE};
    VkDeviceMemory bloom_readback_memory{VK_NULL_HANDLE};
    VkDeviceSize bloom_readback_capacity{};
    std::vector<std::byte> bloom_rgba;

    // Single-pass FXAA (Rendering.SMAA/AntiAliasing -- see the field comment
    // in vcs_config.hpp). A same-size image the FXAA shader writes into,
    // reading s.color_image; when enabled, the existing readback copy (and
    // the swapchain present pass's sample) reads FROM fxaa_image instead of
    // color_image, so this is the one thing that actually reaches the
    // screen/CPU frame -- unlike bloom's CPU-composited glow, this fully
    // replaces the source pixels with their anti-aliased version on the GPU.
    bool fxaa_enabled{false};
    VkImage fxaa_image{VK_NULL_HANDLE};
    VkDeviceMemory fxaa_memory{VK_NULL_HANDLE};
    VkImageView fxaa_view{VK_NULL_HANDLE};
    VkRenderPass fxaa_render_pass{VK_NULL_HANDLE};
    VkFramebuffer fxaa_framebuffer{VK_NULL_HANDLE};
    VkSampler fxaa_sampler{VK_NULL_HANDLE};
    VkDescriptorSetLayout fxaa_descriptor_layout{VK_NULL_HANDLE};
    VkDescriptorPool fxaa_descriptor_pool{VK_NULL_HANDLE};
    VkDescriptorSet fxaa_descriptor_set{VK_NULL_HANDLE};
    VkPipelineLayout fxaa_pipeline_layout{VK_NULL_HANDLE};
    VkPipeline fxaa_pipeline{VK_NULL_HANDLE};
    VkShaderModule fxaa_vertex_shader{VK_NULL_HANDLE};
    VkShaderModule fxaa_fragment_shader{VK_NULL_HANDLE};

    // Real SMAA 1x (Jimenez et al.), replacing the FXAA pass's shader when
    // ProperShaders.ini [SMAA] Enabled is set and setup succeeds. It writes fxaa_image, so
    // everything downstream of FXAA is unchanged.
    bool smaa_ready{false};
    std::array<VkImage, 4> smaa_image{};       // edges, blend, area, search
    std::array<VkDeviceMemory, 4> smaa_memory{};
    std::array<VkImageView, 4> smaa_view{};
    std::array<VkRenderPass, 2> smaa_pass{};    // edges (RG8), blend (RGBA8)
    std::array<VkFramebuffer, 2> smaa_framebuffer{};
    VkSampler smaa_linear_sampler{VK_NULL_HANDLE};
    VkSampler smaa_point_sampler{VK_NULL_HANDLE};
    std::array<VkDescriptorSetLayout, 3> smaa_set_layout{};
    VkDescriptorPool smaa_pool{VK_NULL_HANDLE};
    std::array<VkDescriptorSet, 3> smaa_set{};
    std::array<VkPipelineLayout, 3> smaa_pipeline_layout{};
    std::array<VkPipeline, 3> smaa_pipeline{};
    std::array<VkShaderModule, 3> smaa_module{};

    // Parametric color grading ([ColorGrading] -- see vcs_config.hpp).
    // Reads whichever image is "current" at this point in the pass chain
    // (fxaa_image if FXAA ran, else color_image -- see the descriptor
    // written in create_backend and the pass ordering in
    // finish_color_frame), writes grading_image, and becomes the new final
    // source for the CPU readback / swapchain present when enabled.
    bool color_grading_enabled{false};
    float color_grading_saturation{1.0f};
    float color_grading_contrast{1.0f};
    float color_grading_brightness{0.0f};
    float color_grading_tint[3]{1.0f, 1.0f, 1.0f};
    float color_grading_sharpen{0.0f};
    PostFxConfiguration postfx{};
    // Vice City sky fill (see shaders/sky_palette.frag).
    bool sky_palette_ready{false};
    VkShaderModule sky_vertex_module{VK_NULL_HANDLE};
    VkShaderModule sky_fragment_module{VK_NULL_HANDLE};
    VkPipelineLayout sky_pipeline_layout{VK_NULL_HANDLE};
    VkPipeline sky_pipeline{VK_NULL_HANDLE};
    std::chrono::steady_clock::time_point postfx_epoch{std::chrono::steady_clock::now()};
    VkImage grading_image{VK_NULL_HANDLE};
    VkDeviceMemory grading_memory{VK_NULL_HANDLE};
    VkImageView grading_view{VK_NULL_HANDLE};
    VkRenderPass grading_render_pass{VK_NULL_HANDLE};
    VkFramebuffer grading_framebuffer{VK_NULL_HANDLE};
    VkSampler grading_sampler{VK_NULL_HANDLE};
    VkDescriptorSetLayout grading_descriptor_layout{VK_NULL_HANDLE};
    VkDescriptorPool grading_descriptor_pool{VK_NULL_HANDLE};
    VkDescriptorSet grading_descriptor_set{VK_NULL_HANDLE};
    VkPipelineLayout grading_pipeline_layout{VK_NULL_HANDLE};
    VkPipeline grading_pipeline{VK_NULL_HANDLE};
    VkShaderModule grading_vertex_shader{VK_NULL_HANDLE};
    VkShaderModule grading_fragment_shader{VK_NULL_HANDLE};

    // Volumetric clouds ([VolumetricClouds] in ProperShaders.ini; see
    // ge_cloudworks_present_shader.hpp / ge_cloud_camera_math.hpp).
    // Direct port of the DirectX 12
    // backend's CloudWorks temporal-reprojection renderer: a sparse march
    // pass, a temporal-resolve pass reprojecting into a ping-ponged history
    // pair, and a composite drawn inline (no render-pass split -- see the
    // struct comment on `cloud_history` below for why) into the still-open
    // main GE render pass at the FadingEntities boundary.
    bool cloud_enabled{false};
    std::vector<CloudCameraCandidate> cloud_cameras;
    // History targets are R16G16B16A16_SFLOAT, downscaled from the world
    // target by [VolumetricClouds].DownscaleDiv; cloud_march is half that
    // again (one texel per 2x2 sparse-march block). Unlike s.depth_image,
    // these are ordinary sampled color attachments -- ge_gpu_backend_dx12.cpp
    // proved this exact temporal-history/ping-pong shape works; the only
    // real platform risk here was ever needing to sample s.depth_image
    // later, which this feature does not do (the composite pass only needs
    // depth as a same-subpass EQUAL-test attachment, already supported).
    struct CloudTarget {
        VkImage image{VK_NULL_HANDLE};
        VkDeviceMemory memory{VK_NULL_HANDLE};
        VkImageView view{VK_NULL_HANDLE};
        VkFramebuffer framebuffer{VK_NULL_HANDLE};
        std::uint32_t width{};
        std::uint32_t height{};
    };
    std::array<CloudTarget, 2> cloud_history{};
    CloudTarget cloud_march{};
    VkRenderPass cloud_target_render_pass{VK_NULL_HANDLE};
    VkSampler cloud_sampler{VK_NULL_HANDLE};
    // March has no texture inputs (CloudMarchPS only reads the UBO); resolve
    // and composite both sample two textures, so they share a layout.
    VkDescriptorSetLayout cloud_ubo_only_layout{VK_NULL_HANDLE};
    VkDescriptorSetLayout cloud_dual_texture_layout{VK_NULL_HANDLE};
    VkDescriptorPool cloud_descriptor_pool{VK_NULL_HANDLE};
    // One fixed descriptor set (and one fixed, persistently-mapped UBO
    // buffer) per cloud draw *slot*, not per draw call: up to three cloud
    // draws happen per frame (target-or-march, resolve, composite), each
    // needing its own constants live at submit time, so each gets its own
    // buffer/set written once per frame rather than one set/buffer reused
    // and overwritten between draws (which would race: a VkDescriptorSet
    // update or a memcpy into its bound buffer takes effect at *execution*
    // time, not at the vkCmdBindDescriptorSets call site, so reusing one set
    // across draws in the same command buffer recording would leave every
    // earlier draw seeing the last draw's constants once the GPU actually
    // runs it).
    VkDescriptorSet cloud_set_target{VK_NULL_HANDLE};
    VkDescriptorSet cloud_set_resolve{VK_NULL_HANDLE};
    VkDescriptorSet cloud_set_composite{VK_NULL_HANDLE};
    VkBuffer cloud_ubo_target{VK_NULL_HANDLE};
    VkDeviceMemory cloud_ubo_target_memory{VK_NULL_HANDLE};
    void *cloud_ubo_target_mapped{};
    VkBuffer cloud_ubo_resolve{VK_NULL_HANDLE};
    VkDeviceMemory cloud_ubo_resolve_memory{VK_NULL_HANDLE};
    void *cloud_ubo_resolve_mapped{};
    VkBuffer cloud_ubo_composite{VK_NULL_HANDLE};
    VkDeviceMemory cloud_ubo_composite_memory{VK_NULL_HANDLE};
    void *cloud_ubo_composite_mapped{};
    VkShaderModule cloud_vertex_shader{VK_NULL_HANDLE};
    VkPipelineLayout cloud_target_pipeline_layout{VK_NULL_HANDLE};
    VkPipelineLayout cloud_dual_pipeline_layout{VK_NULL_HANDLE};
    VkPipeline cloud_target_pipeline{VK_NULL_HANDLE};
    VkPipeline cloud_resolve_pipeline{VK_NULL_HANDLE};
    VkPipeline cloud_composite_pipeline{VK_NULL_HANDLE};
    VkShaderModule cloud_march_fragment_shader{VK_NULL_HANDLE};
    VkShaderModule cloud_resolve_fragment_shader{VK_NULL_HANDLE};
    VkShaderModule cloud_composite_fragment_shader{VK_NULL_HANDLE};
    std::uint32_t cloud_history_index{};
    std::uint32_t cloud_temporal_frame{};
    std::array<float, 3> cloud_previous_camera{};
    std::array<float, 9> cloud_previous_ray_basis{};
    bool cloud_history_valid{};

    VkBuffer staging_buffer{VK_NULL_HANDLE};
    VkDeviceMemory staging_memory{VK_NULL_HANDLE};
    VkDeviceSize staging_capacity{};

    std::unordered_map<std::uint64_t, TextureEntry> textures;
    // Cache keys are address + format + palette checksum, not pixels, so a texture whose palette is
    // rewritten every frame produces a new key each frame even when the decoded pixels do not
    // change. Those extra keys are aliased to the one entry holding the same pixels instead of each
    // getting an image of their own (with the texture pack each copy was a multi-megabyte
    // replacement image: gigabytes within two minutes).
    std::unordered_map<std::uint64_t, std::uint64_t> texture_alias;    // key -> key of the entry that holds its pixels
    std::unordered_map<std::uint64_t, std::uint64_t> texture_content;  // pixel content -> key of the entry holding it
    // Estimated GPU bytes held by replacement (texture pack / upscaled) images. A safety net: past the
    // budget in apply_texture_replacements() further replacements are skipped and the original,
    // small texture stays, so unexpected content can never exhaust the machine's memory.
    std::uint64_t replaced_bytes{0};
    // Most video memory the replacement textures may hold (set from the GPU at start-up).
    std::uint64_t replacement_budget{3ull << 30};
    std::unordered_map<std::uint64_t, VkSampler> samplers;
    TextureEntry dummy_texture{};
    // Cache capacity actually enforced at runtime -- sized from
    // Rendering.TextureCacheEntries at create_backend() time (see there),
    // not the old hardcoded 4096 the descriptor pool alone still bounds.
    std::uint32_t texture_capacity{4096u};
    // Bumped once per finish_color_frame() call; texture last_used_epoch
    // stamps against this let upload() tell "still in use this frame" (never
    // evict) apart from "just hasn't been drawn in a while" (evict first).
    std::uint64_t frame_epoch{0u};

    // All draws this vblank, grouped by their actual target address. VCS
    // renders several passes a frame into different targets (prelight,
    // reflection, composition, the real scene, ...); at finish_color_frame()
    // time the bucket with the most vertices is treated as "the" frame.
    // A full bucket dump (see finish_color_frame()'s selection comment)
    // confirmed this is reliably correct: the real scene always dwarfed
    // every competing HUD-sized bucket by two to three orders of magnitude
    // in every sample taken. This needs no address history and no
    // assumption about swap-chain flip timing.
    struct FrameBucket {
        std::uint32_t address{};
        std::vector<GeGpuVertex> vertices;
        std::vector<Batch> batches;
        // Hardware-transform geometry for this bucket: unlike `vertices`
        // above (already screen-space by the time it gets here), these are
        // untouched model-space vertices -- the whole point is the GPU does
        // the transform, not ge_renderer.cpp's CPU loop. hw_vertices holds
        // the generic path's GeGpuVertex-format data (see
        // ge_gpu_backend_accumulate_hardware_triangles); hw_packed holds the
        // dominant-format raw PSP bytes (see
        // ge_gpu_backend_accumulate_hardware_packed_0115). Both share one
        // index buffer's worth of storage, hw_indices.
        std::vector<GeGpuVertex> hw_vertices;
        std::vector<Packed0115Vertex> hw_packed;
        std::vector<std::uint32_t> hw_indices;
        std::vector<HwTransformBatch> hw_batches;
    };
    std::vector<FrameBucket> frame_buckets;

    // GPU work for one frame is submitted here and only waited on at the
    // start of the *next* finish_color_frame() call (by which point a full
    // vblank of guest CPU work has elapsed, so the wait is normally
    // instant) rather than immediately after submitting it. That overlap is
    // the difference between the CPU sitting idle for an entire frame's
    // render time every single vblank and not -- previously the single
    // biggest cost in this backend. This adds exactly one vblank of output
    // latency, which is imperceptible and is the standard trade-off double-
    // buffered renderers make everywhere.
    bool submission_pending{false};
    std::uint64_t pending_vblank{};
    std::uint32_t pending_target_address{};
    // Wall-clock time this vblank's vkBeginCommandBuffer..vkEndCommandBuffer
    // recording took on the CPU (batch loop, push constants, descriptor
    // binds) -- paired with the GPU timestamp query above so a slow frame
    // can be attributed to CPU recording overhead vs actual GPU execution
    // time, instead of one combined number.
    double pending_cpu_record_us{0.0};

    // The winning bucket's address from the last frame, so selection can
    // stick with it rather than re-picking the single largest bucket fresh
    // every vblank. Two (or more) targets whose vertex counts happen to be
    // close and fluctuate frame to frame -- observed in practice -- would
    // otherwise make the winner flip between them, alternating two
    // different-looking renders and reading as flicker/corruption even
    // though any one captured frame looks correct. Only switches away when
    // some other bucket is decisively larger, not just momentarily ahead.
    std::uint32_t last_winner_address{};
    bool has_last_winner{false};

    std::vector<std::byte> frame_rgba;
    bool frame_valid{false};
};

VulkanGeState &state() {
    static VulkanGeState s;
    return s;
}

// See ge_gpu_backend_lock()/unlock()'s comment in ge_gpu_backend.hpp: this
// file has no internal synchronization of its own, so callers serialize
// against each other with this.
std::recursive_mutex &backend_mutex() {
    static std::recursive_mutex m;
    return m;
}

[[nodiscard]] bool find_memory_type(VkPhysicalDevice physical_device, std::uint32_t type_bits,
                                    VkMemoryPropertyFlags required, std::uint32_t &out_index) {
    VkPhysicalDeviceMemoryProperties properties{};
    vkGetPhysicalDeviceMemoryProperties(physical_device, &properties);
    for (std::uint32_t index = 0u; index < properties.memoryTypeCount; ++index) {
        if ((type_bits & (1u << index)) == 0u) continue;
        if ((properties.memoryTypes[index].propertyFlags & required) == required) {
            out_index = index;
            return true;
        }
    }
    return false;
}

[[nodiscard]] bool create_buffer(VulkanGeState &s, VkDeviceSize size, VkBufferUsageFlags usage,
                                 VkMemoryPropertyFlags properties, VkBuffer &buffer,
                                 VkDeviceMemory &memory) {
    VkBufferCreateInfo info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
    info.size = size;
    info.usage = usage;
    info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    if (vkCreateBuffer(s.device, &info, nullptr, &buffer) != VK_SUCCESS) return false;
    VkMemoryRequirements requirements{};
    vkGetBufferMemoryRequirements(s.device, buffer, &requirements);
    std::uint32_t type_index = 0u;
    if (!find_memory_type(s.physical_device, requirements.memoryTypeBits, properties, type_index))
        return false;
    VkMemoryAllocateInfo allocate{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    allocate.allocationSize = requirements.size;
    allocate.memoryTypeIndex = type_index;
    if (vkAllocateMemory(s.device, &allocate, nullptr, &memory) != VK_SUCCESS) return false;
    return vkBindBufferMemory(s.device, buffer, memory, 0) == VK_SUCCESS;
}

[[nodiscard]] bool instance_extension_supported(const char *name) {
    std::uint32_t count = 0u;
    if (vkEnumerateInstanceExtensionProperties(nullptr, &count, nullptr) != VK_SUCCESS) return false;
    std::vector<VkExtensionProperties> extensions(count);
    if (count != 0u &&
        vkEnumerateInstanceExtensionProperties(nullptr, &count, extensions.data()) != VK_SUCCESS)
        return false;
    for (const VkExtensionProperties &extension : extensions)
        if (std::strcmp(extension.extensionName, name) == 0) return true;
    return false;
}

[[nodiscard]] bool device_extension_supported(VkPhysicalDevice device, const char *name) {
    std::uint32_t count = 0u;
    if (vkEnumerateDeviceExtensionProperties(device, nullptr, &count, nullptr) != VK_SUCCESS)
        return false;
    std::vector<VkExtensionProperties> extensions(count);
    if (count != 0u && vkEnumerateDeviceExtensionProperties(device, nullptr, &count,
                                                            extensions.data()) != VK_SUCCESS)
        return false;
    for (const VkExtensionProperties &extension : extensions)
        if (std::strcmp(extension.extensionName, name) == 0) return true;
    return false;
}

[[nodiscard]] VkCommandBuffer begin_one_shot(VulkanGeState &s) {
    VkCommandBufferAllocateInfo allocate{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
    allocate.commandPool = s.command_pool;
    allocate.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    allocate.commandBufferCount = 1u;
    VkCommandBuffer cmd = VK_NULL_HANDLE;
    if (vkAllocateCommandBuffers(s.device, &allocate, &cmd) != VK_SUCCESS) return VK_NULL_HANDLE;
    VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    if (vkBeginCommandBuffer(cmd, &begin) != VK_SUCCESS) return VK_NULL_HANDLE;
    return cmd;
}

[[nodiscard]] bool end_one_shot(VulkanGeState &s, VkCommandBuffer cmd) {
    if (cmd == VK_NULL_HANDLE) return false;
    if (vkEndCommandBuffer(cmd) != VK_SUCCESS) return false;
    VkSubmitInfo submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};
    submit.commandBufferCount = 1u;
    submit.pCommandBuffers = &cmd;
    vkResetFences(s.device, 1, &s.fence);
    if (vkQueueSubmit(s.graphics_queue, 1, &submit, s.fence) != VK_SUCCESS) return false;
    const bool ok = vkWaitForFences(s.device, 1, &s.fence, VK_TRUE, 5000000000ull) == VK_SUCCESS;
    vkFreeCommandBuffers(s.device, s.command_pool, 1, &cmd);
    return ok;
}

void transition_image(VkCommandBuffer cmd, VkImage image, VkImageLayout from, VkImageLayout to,
                      VkAccessFlags source_access, VkAccessFlags destination_access,
                      VkPipelineStageFlags source_stage, VkPipelineStageFlags destination_stage) {
    VkImageMemoryBarrier barrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    barrier.oldLayout = from;
    barrier.newLayout = to;
    barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.image = image;
    barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    barrier.subresourceRange.levelCount = 1u;
    barrier.subresourceRange.layerCount = 1u;
    barrier.srcAccessMask = source_access;
    barrier.dstAccessMask = destination_access;
    vkCmdPipelineBarrier(cmd, source_stage, destination_stage, 0, 0, nullptr, 0, nullptr, 1,
                         &barrier);
}

[[nodiscard]] VkSampler get_sampler(VulkanGeState &s, const GeGpuDrawDescriptor &draw) {
    const std::uint64_t key = sampler_key(draw);
    if (const auto found = s.samplers.find(key); found != s.samplers.end()) return found->second;
    VkSamplerCreateInfo info{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
    info.magFilter = draw.texture_mag_linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    info.minFilter = draw.texture_min_linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    info.mipmapMode = VK_SAMPLER_MIPMAP_MODE_LINEAR;
    info.minLod = 0.0f;
    info.maxLod = VK_LOD_CLAMP_NONE;
    info.addressModeU = draw.texture_clamp_u ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE
                                             : VK_SAMPLER_ADDRESS_MODE_REPEAT;
    info.addressModeV = draw.texture_clamp_v ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE
                                             : VK_SAMPLER_ADDRESS_MODE_REPEAT;
    info.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    // PSP sampling is itself isotropic (the hardware had no anisotropic
    // filtering), but this backend previously left the feature hardcoded off
    // entirely rather than making it available as a real upscale-quality
    // option -- confirmed a silent no-op, same as MSAA/SMAA/DepthPrecision.
    // Rendering.AnisotropicFiltering (1-16) now actually reaches the
    // sampler, clamped to what the device really supports.
    const std::uint32_t requested_anisotropy =
        std::clamp(vcs_configuration().rendering.anisotropic_filtering, 1u, 16u);
    if (s.anisotropy_supported && requested_anisotropy > 1u) {
        info.anisotropyEnable = VK_TRUE;
        info.maxAnisotropy = std::min(static_cast<float>(requested_anisotropy), s.max_supported_anisotropy);
    } else {
        info.anisotropyEnable = VK_FALSE;
        info.maxAnisotropy = 1.0f;
    }
    info.borderColor = VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK;
    VkSampler sampler = VK_NULL_HANDLE;
    if (vkCreateSampler(s.device, &info, nullptr, &sampler) != VK_SUCCESS) return VK_NULL_HANDLE;
    s.samplers.emplace(key, sampler);
    ++s.report.texture_samplers_created;
    return sampler;
}

// Reverses create_texture()'s allocations exactly, in reverse order. Safe to
// call between frames: this backend submits and vkWaitForFences's on every
// finish_color_frame() (see s.fence there), so by the time upload_decoded_
// texture() (and therefore this) runs, the GPU is never still reading a
// previous frame's descriptor -- no multi-frame-in-flight retirement list
// like DX12's is needed here.
void destroy_texture_entry(VulkanGeState &s, TextureEntry &entry) noexcept {
    if (entry.scale_shift != 0u && entry.image != VK_NULL_HANDLE) {
        const std::uint64_t bytes = std::uint64_t{entry.width} * entry.height * 4u * 4u / 3u;
        s.replaced_bytes -= std::min(s.replaced_bytes, bytes);
    }
    if (entry.descriptor != VK_NULL_HANDLE) {
        vkFreeDescriptorSets(s.device, s.descriptor_pool, 1, &entry.descriptor);
    }
    if (entry.view != VK_NULL_HANDLE) vkDestroyImageView(s.device, entry.view, nullptr);
    if (entry.image != VK_NULL_HANDLE) vkDestroyImage(s.device, entry.image, nullptr);
    if (entry.memory != VK_NULL_HANDLE) vkFreeMemory(s.device, entry.memory, nullptr);
    entry = TextureEntry{};
}

// Non-blocking texture uploads. GPU queue order already guarantees an upload has finished before
// any later draw samples it (the upload ends in a pipeline barrier to the fragment stage), so the
// CPU never has to wait for it -- only the shared staging buffer must not be rewritten while the
// previous upload is still reading it.
struct AsyncUpload {
    VkFence fence{VK_NULL_HANDLE};
    VkCommandBuffer submitted_cmd{VK_NULL_HANDLE};  // in flight, released once `fence` signals
    bool pending{false};
    // Uploads of the game's own textures within one frame share this arena and this one open
    // command buffer, which is submitted once just before the frame's own submit.
    VkBuffer arena{VK_NULL_HANDLE};
    VkDeviceMemory arena_memory{VK_NULL_HANDLE};
    std::byte *arena_ptr{nullptr};
    VkDeviceSize arena_used{0};
    VkCommandBuffer open_cmd{VK_NULL_HANDLE};
};
constexpr VkDeviceSize kUploadArenaBytes = 48ull * 1024ull * 1024ull;
AsyncUpload &async_upload() {
    static AsyncUpload u;
    return u;
}
void record_texture_upload(VkCommandBuffer cmd, VkImage image, VkBuffer staging, VkDeviceSize offset,
                           std::uint32_t width, std::uint32_t height, std::uint32_t mip_levels) noexcept;
// Release the previously submitted batch once the GPU is done with it.
void wait_previous_upload(VulkanGeState &s) noexcept {
    AsyncUpload &u = async_upload();
    if (!u.pending) return;
    vkWaitForFences(s.device, 1, &u.fence, VK_TRUE, 5000000000ull);
    if (u.submitted_cmd != VK_NULL_HANDLE) vkFreeCommandBuffers(s.device, s.command_pool, 1, &u.submitted_cmd);
    u.submitted_cmd = VK_NULL_HANDLE;
    u.pending = false;
}
// Submit the open command buffer (if any). Never waits.
void flush_uploads(VulkanGeState &s) noexcept {
    AsyncUpload &u = async_upload();
    if (u.open_cmd == VK_NULL_HANDLE) return;
    VkCommandBuffer cmd = u.open_cmd;
    u.open_cmd = VK_NULL_HANDLE;
    if (vkEndCommandBuffer(cmd) != VK_SUCCESS) { vkFreeCommandBuffers(s.device, s.command_pool, 1, &cmd); return; }
    VkSubmitInfo submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};
    submit.commandBufferCount = 1u;
    submit.pCommandBuffers = &cmd;
    vkResetFences(s.device, 1, &u.fence);
    if (vkQueueSubmit(s.graphics_queue, 1, &submit, u.fence) != VK_SUCCESS) {
        vkFreeCommandBuffers(s.device, s.command_pool, 1, &cmd);
        return;
    }
    u.submitted_cmd = cmd;
    u.pending = true;
}
void flush_uploads_and_wait(VulkanGeState &s) noexcept {
    flush_uploads(s);
    wait_previous_upload(s);
    async_upload().arena_used = 0u;
}
// Reserve `bytes` in the arena and make sure a command buffer is open. Returns false on failure.
[[nodiscard]] bool acquire_upload_slot(VulkanGeState &s, VkDeviceSize bytes, VkCommandBuffer &cmd,
                                       VkDeviceSize &offset) noexcept {
    AsyncUpload &u = async_upload();
    if (u.arena == VK_NULL_HANDLE) {
        VkFenceCreateInfo info{VK_STRUCTURE_TYPE_FENCE_CREATE_INFO};
        if (vkCreateFence(s.device, &info, nullptr, &u.fence) != VK_SUCCESS) return false;
        if (!create_buffer(s, kUploadArenaBytes, VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
                           VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                           u.arena, u.arena_memory))
            return false;
        void *mapped = nullptr;
        if (vkMapMemory(s.device, u.arena_memory, 0, kUploadArenaBytes, 0, &mapped) != VK_SUCCESS) return false;
        u.arena_ptr = static_cast<std::byte *>(mapped);
    }
    if (bytes > kUploadArenaBytes) return false;
    if (u.open_cmd == VK_NULL_HANDLE) {
        // A new frame's worth of uploads: the previous batch is normally long finished by now.
        wait_previous_upload(s);
        u.arena_used = 0u;
    } else if (u.arena_used + bytes > kUploadArenaBytes) {
        flush_uploads_and_wait(s);  // arena full within one frame: rare, drain it
    }
    if (u.open_cmd == VK_NULL_HANDLE) {
        u.open_cmd = begin_one_shot(s);
        if (u.open_cmd == VK_NULL_HANDLE) return false;
    }
    cmd = u.open_cmd;
    offset = u.arena_used;
    u.arena_used += (bytes + 255u) & ~VkDeviceSize{255u};
    return true;
}

[[nodiscard]] bool create_texture(VulkanGeState &s, std::uint32_t width, std::uint32_t height,
                                  std::span<const std::byte> pixels, VkSampler sampler,
                                  TextureEntry &out) {
    if (width == 0u || height == 0u) return false;
    const VkDeviceSize byte_size = VkDeviceSize{width} * height * 4u;
    if (pixels.size() < static_cast<std::size_t>(byte_size)) return false;

    VkImageCreateInfo image_info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
    image_info.imageType = VK_IMAGE_TYPE_2D;
    image_info.format = kColorFormat;
    image_info.extent = {width, height, 1u};
    // Full mip chain (generated below by blitting), so distant and grazing-angle
    // surfaces stay stable and sharp and anisotropic filtering has levels to use.
    std::uint32_t mip_levels = 1u;
    for (std::uint32_t largest = std::max(width, height); largest > 1u; largest >>= 1u) ++mip_levels;
    mip_levels = vcs_configuration().textures.mipmaps ? std::min(mip_levels, 12u) : 1u;
    image_info.mipLevels = mip_levels;
    image_info.arrayLayers = 1u;
    image_info.samples = VK_SAMPLE_COUNT_1_BIT;
    image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
    image_info.usage = VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT |
                       VK_IMAGE_USAGE_SAMPLED_BIT;
    image_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    if (vkCreateImage(s.device, &image_info, nullptr, &out.image) != VK_SUCCESS) return false;

    VkMemoryRequirements requirements{};
    vkGetImageMemoryRequirements(s.device, out.image, &requirements);
    std::uint32_t type_index = 0u;
    if (!find_memory_type(s.physical_device, requirements.memoryTypeBits,
                          VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, type_index))
        return false;
    VkMemoryAllocateInfo allocate{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    allocate.allocationSize = requirements.size;
    allocate.memoryTypeIndex = type_index;
    if (vkAllocateMemory(s.device, &allocate, nullptr, &out.memory) != VK_SUCCESS) return false;
    if (vkBindImageMemory(s.device, out.image, out.memory, 0) != VK_SUCCESS) return false;

    VkCommandBuffer cmd = VK_NULL_HANDLE;
    VkDeviceSize upload_offset = 0u;
    if (!acquire_upload_slot(s, byte_size, cmd, upload_offset)) return false;
    std::memcpy(async_upload().arena_ptr + upload_offset, pixels.data(), static_cast<std::size_t>(byte_size));
    transition_image(cmd, out.image, VK_IMAGE_LAYOUT_UNDEFINED,
                     VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 0, VK_ACCESS_TRANSFER_WRITE_BIT,
                     VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT);
    VkBufferImageCopy region{};
    region.bufferOffset = upload_offset;
    region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    region.imageSubresource.layerCount = 1u;
    // Full extent. A zero-extent copy silently transfers nothing.
    region.imageExtent = {width, height, 1u};
    vkCmdCopyBufferToImage(cmd, async_upload().arena, out.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                           1, &region);
    // Build the mip chain: each level is blitted (linear) from the previous one.
    const auto mip_barrier = [&](std::uint32_t level, VkImageLayout from, VkImageLayout to,
                                 VkAccessFlags src_access, VkAccessFlags dst_access,
                                 VkPipelineStageFlags src_stage, VkPipelineStageFlags dst_stage) {
        VkImageMemoryBarrier barrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
        barrier.oldLayout = from;
        barrier.newLayout = to;
        barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        barrier.image = out.image;
        barrier.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, level, 1u, 0u, 1u};
        barrier.srcAccessMask = src_access;
        barrier.dstAccessMask = dst_access;
        vkCmdPipelineBarrier(cmd, src_stage, dst_stage, 0, 0, nullptr, 0, nullptr, 1, &barrier);
    };
    std::int32_t mip_w = static_cast<std::int32_t>(width);
    std::int32_t mip_h = static_cast<std::int32_t>(height);
    for (std::uint32_t level = 1u; level < mip_levels; ++level) {
        mip_barrier(level - 1u, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                    VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_TRANSFER_READ_BIT,
                    VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT);
        const std::int32_t next_w = std::max(1, mip_w / 2);
        const std::int32_t next_h = std::max(1, mip_h / 2);
        VkImageBlit blit{};
        blit.srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, level - 1u, 0u, 1u};
        blit.srcOffsets[1] = {mip_w, mip_h, 1};
        blit.dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, level, 0u, 1u};
        blit.dstOffsets[1] = {next_w, next_h, 1};
        vkCmdBlitImage(cmd, out.image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, out.image,
                       VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &blit, VK_FILTER_LINEAR);
        mip_barrier(level - 1u, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                    VK_ACCESS_TRANSFER_READ_BIT, VK_ACCESS_SHADER_READ_BIT,
                    VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);
        mip_w = next_w;
        mip_h = next_h;
    }
    mip_barrier(mip_levels - 1u, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_SHADER_READ_BIT,
                VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);

    VkImageViewCreateInfo view_info{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
    view_info.image = out.image;
    view_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
    view_info.format = kColorFormat;
    view_info.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    view_info.subresourceRange.levelCount = mip_levels;
    view_info.subresourceRange.layerCount = 1u;
    if (vkCreateImageView(s.device, &view_info, nullptr, &out.view) != VK_SUCCESS) { flush_uploads_and_wait(s); return false; }

    VkDescriptorSetAllocateInfo descriptor_allocate{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
    descriptor_allocate.descriptorPool = s.descriptor_pool;
    descriptor_allocate.descriptorSetCount = 1u;
    descriptor_allocate.pSetLayouts = &s.descriptor_layout;
    if (vkAllocateDescriptorSets(s.device, &descriptor_allocate, &out.descriptor) != VK_SUCCESS) {
        flush_uploads_and_wait(s);
        return false;
    }

    VkDescriptorImageInfo image_descriptor{};
    image_descriptor.sampler = sampler;
    image_descriptor.imageView = out.view;
    image_descriptor.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    VkWriteDescriptorSet write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
    write.dstSet = out.descriptor;
    write.descriptorCount = 1u;
    write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    write.pImageInfo = &image_descriptor;
    vkUpdateDescriptorSets(s.device, 1, &write, 0, nullptr);

    out.width = width;
    out.height = height;
    ++s.report.texture_descriptor_sets_allocated;
    return true;
}

[[nodiscard]] VkPipeline get_pipeline(VulkanGeState &s, const GeGpuDrawDescriptor &draw) {
    const std::uint64_t key = pipeline_key(draw);
    if (const auto found = s.pipelines.find(key); found != s.pipelines.end()) return found->second;

    std::array<VkPipelineShaderStageCreateInfo, 2> stages{};
    stages[0] = VkPipelineShaderStageCreateInfo{
        VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
    stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    stages[0].module = s.vertex_shader;
    stages[0].pName = "main";
    stages[1] = VkPipelineShaderStageCreateInfo{
        VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
    stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    stages[1].module = s.fragment_shader;
    stages[1].pName = "main";

    VkVertexInputBindingDescription binding{};
    binding.binding = 0u;
    binding.stride = sizeof(GeGpuVertex);
    binding.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;

    // Must match shaders/psp_ge.vert's input locations exactly.
    const std::array<VkVertexInputAttributeDescription, 9> attributes{{
        {0u, 0u, VK_FORMAT_R32G32B32A32_SFLOAT, offsetof(GeGpuVertex, x)},
        {1u, 0u, VK_FORMAT_R8G8B8A8_UINT, offsetof(GeGpuVertex, rgba)},
        {2u, 0u, VK_FORMAT_R32G32_SFLOAT, offsetof(GeGpuVertex, u)},
        {3u, 0u, VK_FORMAT_R32_UINT, offsetof(GeGpuVertex, alpha_control)},
        {4u, 0u, VK_FORMAT_R32_UINT, offsetof(GeGpuVertex, texture_control)},
        {5u, 0u, VK_FORMAT_R32_UINT, offsetof(GeGpuVertex, texture_env)},
        {6u, 0u, VK_FORMAT_R32_SFLOAT, offsetof(GeGpuVertex, fog_factor)},
        {7u, 0u, VK_FORMAT_R32_UINT, offsetof(GeGpuVertex, fog_control)},
        {8u, 0u, VK_FORMAT_R32_SFLOAT, offsetof(GeGpuVertex, q)},
    }};

    VkPipelineVertexInputStateCreateInfo vertex_input{
        VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
    vertex_input.vertexBindingDescriptionCount = 1u;
    vertex_input.pVertexBindingDescriptions = &binding;
    vertex_input.vertexAttributeDescriptionCount = static_cast<std::uint32_t>(attributes.size());
    vertex_input.pVertexAttributeDescriptions = attributes.data();

    VkPipelineInputAssemblyStateCreateInfo input_assembly{
        VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
    input_assembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;

    VkPipelineViewportStateCreateInfo viewport_state{
        VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
    viewport_state.viewportCount = 1u;
    viewport_state.scissorCount = 1u;

    VkPipelineRasterizationStateCreateInfo rasterization{
        VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
    rasterization.polygonMode = VK_POLYGON_MODE_FILL;
    // ge_renderer.cpp already culled on the CPU for this path; culling again
    // here would drop the faces it deliberately kept.
    rasterization.cullMode = VK_CULL_MODE_NONE;
    rasterization.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
    rasterization.lineWidth = 1.0f;

    VkPipelineMultisampleStateCreateInfo multisample{
        VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
    multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;

    VkPipelineDepthStencilStateCreateInfo depth_stencil{
        VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
    depth_stencil.depthTestEnable = draw.depth_test_enabled ? VK_TRUE : VK_FALSE;
    depth_stencil.depthWriteEnable = draw.depth_write_enabled ? VK_TRUE : VK_FALSE;
    depth_stencil.depthCompareOp =
        draw.depth_test_enabled ? depth_compare(draw.depth_function) : VK_COMPARE_OP_ALWAYS;
    depth_stencil.maxDepthBounds = 1.0f;

    VkPipelineColorBlendAttachmentState blend{};
    blend.colorWriteMask = color_write_mask(draw);
    blend.srcColorBlendFactor = VK_BLEND_FACTOR_ONE;
    blend.dstColorBlendFactor = VK_BLEND_FACTOR_ZERO;
    blend.colorBlendOp = VK_BLEND_OP_ADD;
    blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
    blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
    blend.alphaBlendOp = VK_BLEND_OP_ADD;
    const std::uint32_t variant = blend_variant(draw);
    if (variant != 0u && variant != 2u) blend.blendEnable = VK_TRUE;
    switch (variant) {
    case 1u:
        blend.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
        blend.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        break;
    case 3u:
        blend.srcColorBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.dstColorBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        break;
    case 4u:
        blend.srcColorBlendFactor = VK_BLEND_FACTOR_CONSTANT_COLOR;
        blend.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR;
        blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
        break;
    case 5u:
        blend.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
        blend.dstColorBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        break;
    default:
        break;
    }

    VkPipelineColorBlendStateCreateInfo color_blend{
        VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
    color_blend.attachmentCount = 1u;
    color_blend.pAttachments = &blend;

    const std::array<VkDynamicState, 3> dynamic_states{
        VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR, VK_DYNAMIC_STATE_BLEND_CONSTANTS};
    VkPipelineDynamicStateCreateInfo dynamic{VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
    dynamic.dynamicStateCount = static_cast<std::uint32_t>(dynamic_states.size());
    dynamic.pDynamicStates = dynamic_states.data();

    VkGraphicsPipelineCreateInfo info{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
    info.stageCount = static_cast<std::uint32_t>(stages.size());
    info.pStages = stages.data();
    info.pVertexInputState = &vertex_input;
    info.pInputAssemblyState = &input_assembly;
    info.pViewportState = &viewport_state;
    info.pRasterizationState = &rasterization;
    info.pMultisampleState = &multisample;
    info.pDepthStencilState = &depth_stencil;
    info.pColorBlendState = &color_blend;
    info.pDynamicState = &dynamic;
    info.layout = s.pipeline_layout;
    info.renderPass = s.render_pass;
    info.subpass = 0u;

    VkPipeline pipeline = VK_NULL_HANDLE;
    if (vkCreateGraphicsPipelines(s.device, VK_NULL_HANDLE, 1, &info, nullptr, &pipeline) !=
        VK_SUCCESS)
        return VK_NULL_HANDLE;
    s.pipelines.emplace(key, pipeline);
    s.report.unique_pipeline_keys = s.pipelines.size();
    ++s.report.depth_pipeline_variants_created;
    return pipeline;
}

// Hardware-transform pipeline variant. Mirrors get_pipeline() above almost
// exactly -- same blend/depth/color-write state classification -- with three
// differences: a different vertex shader/input layout (this draw's
// untransformed vertices, generic-format or packed-0115), the larger
// hw-transform pipeline layout, and real GPU-side face culling. The
// screen-space path (get_pipeline) hardcodes VK_CULL_MODE_NONE because
// ge_renderer.cpp has already culled on the CPU by the time vertices get
// there; this path skips that CPU step entirely (the whole point), so the
// GPU must do the culling ge_renderer.cpp would otherwise have done, using
// the same cull_enabled/accept_counter_clockwise state DX12's PSO
// (D3D12_CULL_MODE_BACK, ge_gpu_backend_dx12.cpp) already keys on.
[[nodiscard]] VkPipeline get_hw_pipeline(VulkanGeState &s, const GeGpuDrawDescriptor &draw,
                                         bool packed_0115, bool cull_enabled,
                                         bool accept_counter_clockwise) {
    std::uint64_t key = pipeline_key(draw);
    key |= static_cast<std::uint64_t>(packed_0115 ? 1u : 0u) << 12u;
    key |= static_cast<std::uint64_t>(cull_enabled ? 1u : 0u) << 13u;
    key |= static_cast<std::uint64_t>(accept_counter_clockwise ? 1u : 0u) << 14u;
    if (const auto found = s.hw_pipelines.find(key); found != s.hw_pipelines.end())
        return found->second;

    std::array<VkPipelineShaderStageCreateInfo, 2> stages{};
    stages[0] = VkPipelineShaderStageCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
    stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    stages[0].module = packed_0115 ? s.hw_packed_vertex_shader : s.hw_vertex_shader;
    stages[0].pName = "main";
    stages[1] = VkPipelineShaderStageCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
    stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    stages[1].module = s.fragment_shader;
    stages[1].pName = "main";

    VkVertexInputBindingDescription binding{};
    binding.binding = 0u;
    binding.stride = packed_0115 ? sizeof(Packed0115Vertex) : sizeof(GeGpuVertex);
    binding.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;

    // Must match shaders/psp_ge_hw.vert or psp_ge_hw_packed0115.vert's input
    // locations exactly, depending on which is bound above.
    std::array<VkVertexInputAttributeDescription, 9> generic_attributes{{
        {0u, 0u, VK_FORMAT_R32G32B32A32_SFLOAT, offsetof(GeGpuVertex, x)},
        {1u, 0u, VK_FORMAT_R8G8B8A8_UINT, offsetof(GeGpuVertex, rgba)},
        {2u, 0u, VK_FORMAT_R32G32_SFLOAT, offsetof(GeGpuVertex, u)},
        {3u, 0u, VK_FORMAT_R32_UINT, offsetof(GeGpuVertex, alpha_control)},
        {4u, 0u, VK_FORMAT_R32_UINT, offsetof(GeGpuVertex, texture_control)},
        {5u, 0u, VK_FORMAT_R32_UINT, offsetof(GeGpuVertex, texture_env)},
        {6u, 0u, VK_FORMAT_R32_SFLOAT, offsetof(GeGpuVertex, fog_factor)},
        {7u, 0u, VK_FORMAT_R32_UINT, offsetof(GeGpuVertex, fog_control)},
        {8u, 0u, VK_FORMAT_R32_SFLOAT, offsetof(GeGpuVertex, q)},
    }};
    std::array<VkVertexInputAttributeDescription, 4> packed_attributes{{
        {0u, 0u, VK_FORMAT_R8G8_UINT, offsetof(Packed0115Vertex, u)},
        {1u, 0u, VK_FORMAT_R16_UINT, offsetof(Packed0115Vertex, color5551)},
        {2u, 0u, VK_FORMAT_R16G16_SINT, offsetof(Packed0115Vertex, x)},
        {3u, 0u, VK_FORMAT_R16_SINT, offsetof(Packed0115Vertex, z)},
    }};

    VkPipelineVertexInputStateCreateInfo vertex_input{
        VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
    vertex_input.vertexBindingDescriptionCount = 1u;
    vertex_input.pVertexBindingDescriptions = &binding;
    if (packed_0115) {
        vertex_input.vertexAttributeDescriptionCount =
            static_cast<std::uint32_t>(packed_attributes.size());
        vertex_input.pVertexAttributeDescriptions = packed_attributes.data();
    } else {
        vertex_input.vertexAttributeDescriptionCount =
            static_cast<std::uint32_t>(generic_attributes.size());
        vertex_input.pVertexAttributeDescriptions = generic_attributes.data();
    }

    VkPipelineInputAssemblyStateCreateInfo input_assembly{
        VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
    input_assembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;

    VkPipelineViewportStateCreateInfo viewport_state{
        VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
    viewport_state.viewportCount = 1u;
    viewport_state.scissorCount = 1u;

    VkPipelineRasterizationStateCreateInfo rasterization{
        VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
    rasterization.polygonMode = VK_POLYGON_MODE_FILL;
    rasterization.cullMode = cull_enabled ? VK_CULL_MODE_BACK_BIT : VK_CULL_MODE_NONE;
    // PSP winding matches DX12's D3D12_CULL_MODE_BACK setup, which treats
    // clockwise as front-facing by D3D convention; accept_counter_clockwise
    // flips which winding this draw's geometry actually uses.
    rasterization.frontFace = accept_counter_clockwise
        ? VK_FRONT_FACE_COUNTER_CLOCKWISE : VK_FRONT_FACE_CLOCKWISE;
    rasterization.lineWidth = 1.0f;

    VkPipelineMultisampleStateCreateInfo multisample{
        VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
    multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;

    VkPipelineDepthStencilStateCreateInfo depth_stencil{
        VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
    depth_stencil.depthTestEnable = draw.depth_test_enabled ? VK_TRUE : VK_FALSE;
    depth_stencil.depthWriteEnable = draw.depth_write_enabled ? VK_TRUE : VK_FALSE;
    depth_stencil.depthCompareOp =
        draw.depth_test_enabled ? depth_compare(draw.depth_function) : VK_COMPARE_OP_ALWAYS;
    depth_stencil.maxDepthBounds = 1.0f;

    VkPipelineColorBlendAttachmentState blend{};
    blend.colorWriteMask = color_write_mask(draw);
    blend.srcColorBlendFactor = VK_BLEND_FACTOR_ONE;
    blend.dstColorBlendFactor = VK_BLEND_FACTOR_ZERO;
    blend.colorBlendOp = VK_BLEND_OP_ADD;
    blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
    blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
    blend.alphaBlendOp = VK_BLEND_OP_ADD;
    const std::uint32_t variant = blend_variant(draw);
    if (variant != 0u && variant != 2u) blend.blendEnable = VK_TRUE;
    switch (variant) {
    case 1u:
        blend.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
        blend.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        break;
    case 3u:
        blend.srcColorBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.dstColorBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        break;
    case 4u:
        blend.srcColorBlendFactor = VK_BLEND_FACTOR_CONSTANT_COLOR;
        blend.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR;
        blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
        break;
    case 5u:
        blend.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
        blend.dstColorBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        break;
    default:
        break;
    }

    VkPipelineColorBlendStateCreateInfo color_blend{
        VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
    color_blend.attachmentCount = 1u;
    color_blend.pAttachments = &blend;

    const std::array<VkDynamicState, 3> dynamic_states{
        VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR, VK_DYNAMIC_STATE_BLEND_CONSTANTS};
    VkPipelineDynamicStateCreateInfo dynamic{VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
    dynamic.dynamicStateCount = static_cast<std::uint32_t>(dynamic_states.size());
    dynamic.pDynamicStates = dynamic_states.data();

    VkGraphicsPipelineCreateInfo info{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
    info.stageCount = static_cast<std::uint32_t>(stages.size());
    info.pStages = stages.data();
    info.pVertexInputState = &vertex_input;
    info.pInputAssemblyState = &input_assembly;
    info.pViewportState = &viewport_state;
    info.pRasterizationState = &rasterization;
    info.pMultisampleState = &multisample;
    info.pDepthStencilState = &depth_stencil;
    info.pColorBlendState = &color_blend;
    info.pDynamicState = &dynamic;
    info.layout = s.hw_pipeline_layout;
    info.renderPass = s.render_pass;
    info.subpass = 0u;

    VkPipeline pipeline = VK_NULL_HANDLE;
    if (vkCreateGraphicsPipelines(s.device, VK_NULL_HANDLE, 1, &info, nullptr, &pipeline) !=
        VK_SUCCESS)
        return VK_NULL_HANDLE;
    s.hw_pipelines.emplace(key, pipeline);
    return pipeline;
}

void destroy_backend(VulkanGeState &s) noexcept {
    if (s.device != VK_NULL_HANDLE) {
        vkDeviceWaitIdle(s.device);
        for (auto &entry : s.pipelines) vkDestroyPipeline(s.device, entry.second, nullptr);
        s.pipelines.clear();
        for (auto &entry : s.hw_pipelines) vkDestroyPipeline(s.device, entry.second, nullptr);
        s.hw_pipelines.clear();
        for (auto &entry : s.samplers) vkDestroySampler(s.device, entry.second, nullptr);
        s.samplers.clear();
        const auto destroy_texture = [&s](TextureEntry &entry) {
            if (entry.view != VK_NULL_HANDLE) vkDestroyImageView(s.device, entry.view, nullptr);
            if (entry.image != VK_NULL_HANDLE) vkDestroyImage(s.device, entry.image, nullptr);
            if (entry.memory != VK_NULL_HANDLE) vkFreeMemory(s.device, entry.memory, nullptr);
            entry = TextureEntry{};
        };
        for (auto &entry : s.textures) destroy_texture(entry.second);
        s.textures.clear();
        destroy_texture(s.dummy_texture);
        if (s.vertex_mapped != nullptr) vkUnmapMemory(s.device, s.vertex_memory);
        s.vertex_mapped = nullptr;
        if (s.hw_vertex_mapped != nullptr) vkUnmapMemory(s.device, s.hw_vertex_memory);
        s.hw_vertex_mapped = nullptr;
        if (s.hw_packed_vertex_mapped != nullptr)
            vkUnmapMemory(s.device, s.hw_packed_vertex_memory);
        s.hw_packed_vertex_mapped = nullptr;
        if (s.hw_index_mapped != nullptr) vkUnmapMemory(s.device, s.hw_index_memory);
        s.hw_index_mapped = nullptr;
        const auto destroy_buffer = [&s](VkBuffer &buffer, VkDeviceMemory &memory) {
            if (buffer != VK_NULL_HANDLE) vkDestroyBuffer(s.device, buffer, nullptr);
            if (memory != VK_NULL_HANDLE) vkFreeMemory(s.device, memory, nullptr);
            buffer = VK_NULL_HANDLE;
            memory = VK_NULL_HANDLE;
        };
        destroy_buffer(s.vertex_buffer, s.vertex_memory);
        destroy_buffer(s.readback_buffer, s.readback_memory);
        destroy_buffer(s.staging_buffer, s.staging_memory);
        destroy_buffer(s.hw_vertex_buffer, s.hw_vertex_memory);
        destroy_buffer(s.hw_packed_vertex_buffer, s.hw_packed_vertex_memory);
        destroy_buffer(s.hw_index_buffer, s.hw_index_memory);
        destroy_buffer(s.bloom_readback_buffer, s.bloom_readback_memory);
        if (s.bloom_pipeline != VK_NULL_HANDLE)
            vkDestroyPipeline(s.device, s.bloom_pipeline, nullptr);
        if (s.bloom_pipeline_layout != VK_NULL_HANDLE)
            vkDestroyPipelineLayout(s.device, s.bloom_pipeline_layout, nullptr);
        if (s.bloom_descriptor_pool != VK_NULL_HANDLE)
            vkDestroyDescriptorPool(s.device, s.bloom_descriptor_pool, nullptr);
        if (s.bloom_descriptor_layout != VK_NULL_HANDLE)
            vkDestroyDescriptorSetLayout(s.device, s.bloom_descriptor_layout, nullptr);
        if (s.bloom_sampler != VK_NULL_HANDLE) vkDestroySampler(s.device, s.bloom_sampler, nullptr);
        if (s.bloom_vertex_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.bloom_vertex_shader, nullptr);
        if (s.bloom_fragment_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.bloom_fragment_shader, nullptr);
        if (s.bloom_framebuffer != VK_NULL_HANDLE)
            vkDestroyFramebuffer(s.device, s.bloom_framebuffer, nullptr);
        if (s.bloom_render_pass != VK_NULL_HANDLE)
            vkDestroyRenderPass(s.device, s.bloom_render_pass, nullptr);
        if (s.bloom_view != VK_NULL_HANDLE) vkDestroyImageView(s.device, s.bloom_view, nullptr);
        if (s.bloom_image != VK_NULL_HANDLE) vkDestroyImage(s.device, s.bloom_image, nullptr);
        if (s.bloom_memory != VK_NULL_HANDLE) vkFreeMemory(s.device, s.bloom_memory, nullptr);
        if (s.sky_pipeline != VK_NULL_HANDLE) vkDestroyPipeline(s.device, s.sky_pipeline, nullptr);
        if (s.sky_pipeline_layout != VK_NULL_HANDLE)
            vkDestroyPipelineLayout(s.device, s.sky_pipeline_layout, nullptr);
        if (s.sky_fragment_module != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.sky_fragment_module, nullptr);
        if (s.sky_vertex_module != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.sky_vertex_module, nullptr);
        for (std::size_t i = 0u; i < 3u; ++i) {
            if (s.smaa_pipeline[i] != VK_NULL_HANDLE) vkDestroyPipeline(s.device, s.smaa_pipeline[i], nullptr);
            if (s.smaa_pipeline_layout[i] != VK_NULL_HANDLE)
                vkDestroyPipelineLayout(s.device, s.smaa_pipeline_layout[i], nullptr);
            if (s.smaa_set_layout[i] != VK_NULL_HANDLE)
                vkDestroyDescriptorSetLayout(s.device, s.smaa_set_layout[i], nullptr);
            if (s.smaa_module[i] != VK_NULL_HANDLE) vkDestroyShaderModule(s.device, s.smaa_module[i], nullptr);
        }
        if (s.smaa_pool != VK_NULL_HANDLE) vkDestroyDescriptorPool(s.device, s.smaa_pool, nullptr);
        if (s.smaa_linear_sampler != VK_NULL_HANDLE) vkDestroySampler(s.device, s.smaa_linear_sampler, nullptr);
        if (s.smaa_point_sampler != VK_NULL_HANDLE) vkDestroySampler(s.device, s.smaa_point_sampler, nullptr);
        for (std::size_t i = 0u; i < 2u; ++i) {
            if (s.smaa_framebuffer[i] != VK_NULL_HANDLE) vkDestroyFramebuffer(s.device, s.smaa_framebuffer[i], nullptr);
            if (s.smaa_pass[i] != VK_NULL_HANDLE) vkDestroyRenderPass(s.device, s.smaa_pass[i], nullptr);
        }
        for (std::size_t i = 0u; i < 4u; ++i) {
            if (s.smaa_view[i] != VK_NULL_HANDLE) vkDestroyImageView(s.device, s.smaa_view[i], nullptr);
            if (s.smaa_image[i] != VK_NULL_HANDLE) vkDestroyImage(s.device, s.smaa_image[i], nullptr);
            if (s.smaa_memory[i] != VK_NULL_HANDLE) vkFreeMemory(s.device, s.smaa_memory[i], nullptr);
        }
        if (s.fxaa_pipeline != VK_NULL_HANDLE) vkDestroyPipeline(s.device, s.fxaa_pipeline, nullptr);
        if (s.fxaa_pipeline_layout != VK_NULL_HANDLE)
            vkDestroyPipelineLayout(s.device, s.fxaa_pipeline_layout, nullptr);
        if (s.fxaa_descriptor_pool != VK_NULL_HANDLE)
            vkDestroyDescriptorPool(s.device, s.fxaa_descriptor_pool, nullptr);
        if (s.fxaa_descriptor_layout != VK_NULL_HANDLE)
            vkDestroyDescriptorSetLayout(s.device, s.fxaa_descriptor_layout, nullptr);
        if (s.fxaa_sampler != VK_NULL_HANDLE) vkDestroySampler(s.device, s.fxaa_sampler, nullptr);
        if (s.fxaa_vertex_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.fxaa_vertex_shader, nullptr);
        if (s.fxaa_fragment_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.fxaa_fragment_shader, nullptr);
        if (s.fxaa_framebuffer != VK_NULL_HANDLE)
            vkDestroyFramebuffer(s.device, s.fxaa_framebuffer, nullptr);
        if (s.fxaa_render_pass != VK_NULL_HANDLE)
            vkDestroyRenderPass(s.device, s.fxaa_render_pass, nullptr);
        if (s.fxaa_view != VK_NULL_HANDLE) vkDestroyImageView(s.device, s.fxaa_view, nullptr);
        if (s.fxaa_image != VK_NULL_HANDLE) vkDestroyImage(s.device, s.fxaa_image, nullptr);
        if (s.fxaa_memory != VK_NULL_HANDLE) vkFreeMemory(s.device, s.fxaa_memory, nullptr);
        if (s.grading_pipeline != VK_NULL_HANDLE)
            vkDestroyPipeline(s.device, s.grading_pipeline, nullptr);
        if (s.grading_pipeline_layout != VK_NULL_HANDLE)
            vkDestroyPipelineLayout(s.device, s.grading_pipeline_layout, nullptr);
        if (s.grading_descriptor_pool != VK_NULL_HANDLE)
            vkDestroyDescriptorPool(s.device, s.grading_descriptor_pool, nullptr);
        if (s.grading_descriptor_layout != VK_NULL_HANDLE)
            vkDestroyDescriptorSetLayout(s.device, s.grading_descriptor_layout, nullptr);
        if (s.grading_sampler != VK_NULL_HANDLE)
            vkDestroySampler(s.device, s.grading_sampler, nullptr);
        if (s.grading_vertex_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.grading_vertex_shader, nullptr);
        if (s.grading_fragment_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.grading_fragment_shader, nullptr);
        if (s.grading_framebuffer != VK_NULL_HANDLE)
            vkDestroyFramebuffer(s.device, s.grading_framebuffer, nullptr);
        if (s.grading_render_pass != VK_NULL_HANDLE)
            vkDestroyRenderPass(s.device, s.grading_render_pass, nullptr);
        if (s.grading_view != VK_NULL_HANDLE) vkDestroyImageView(s.device, s.grading_view, nullptr);
        if (s.grading_image != VK_NULL_HANDLE) vkDestroyImage(s.device, s.grading_image, nullptr);
        if (s.grading_memory != VK_NULL_HANDLE) vkFreeMemory(s.device, s.grading_memory, nullptr);
        destroy_buffer(s.cloud_ubo_target, s.cloud_ubo_target_memory);
        destroy_buffer(s.cloud_ubo_resolve, s.cloud_ubo_resolve_memory);
        destroy_buffer(s.cloud_ubo_composite, s.cloud_ubo_composite_memory);
        if (s.cloud_target_pipeline != VK_NULL_HANDLE)
            vkDestroyPipeline(s.device, s.cloud_target_pipeline, nullptr);
        if (s.cloud_resolve_pipeline != VK_NULL_HANDLE)
            vkDestroyPipeline(s.device, s.cloud_resolve_pipeline, nullptr);
        if (s.cloud_composite_pipeline != VK_NULL_HANDLE)
            vkDestroyPipeline(s.device, s.cloud_composite_pipeline, nullptr);
        if (s.cloud_target_pipeline_layout != VK_NULL_HANDLE)
            vkDestroyPipelineLayout(s.device, s.cloud_target_pipeline_layout, nullptr);
        if (s.cloud_dual_pipeline_layout != VK_NULL_HANDLE)
            vkDestroyPipelineLayout(s.device, s.cloud_dual_pipeline_layout, nullptr);
        if (s.cloud_descriptor_pool != VK_NULL_HANDLE)
            vkDestroyDescriptorPool(s.device, s.cloud_descriptor_pool, nullptr);
        if (s.cloud_ubo_only_layout != VK_NULL_HANDLE)
            vkDestroyDescriptorSetLayout(s.device, s.cloud_ubo_only_layout, nullptr);
        if (s.cloud_dual_texture_layout != VK_NULL_HANDLE)
            vkDestroyDescriptorSetLayout(s.device, s.cloud_dual_texture_layout, nullptr);
        if (s.cloud_sampler != VK_NULL_HANDLE) vkDestroySampler(s.device, s.cloud_sampler, nullptr);
        if (s.cloud_vertex_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.cloud_vertex_shader, nullptr);
        if (s.cloud_march_fragment_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.cloud_march_fragment_shader, nullptr);
        if (s.cloud_resolve_fragment_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.cloud_resolve_fragment_shader, nullptr);
        if (s.cloud_composite_fragment_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.cloud_composite_fragment_shader, nullptr);
        if (s.cloud_target_render_pass != VK_NULL_HANDLE)
            vkDestroyRenderPass(s.device, s.cloud_target_render_pass, nullptr);
        for (VulkanGeState::CloudTarget *target : {&s.cloud_history[0], &s.cloud_history[1], &s.cloud_march}) {
            if (target->framebuffer != VK_NULL_HANDLE)
                vkDestroyFramebuffer(s.device, target->framebuffer, nullptr);
            if (target->view != VK_NULL_HANDLE) vkDestroyImageView(s.device, target->view, nullptr);
            if (target->image != VK_NULL_HANDLE) vkDestroyImage(s.device, target->image, nullptr);
            if (target->memory != VK_NULL_HANDLE) vkFreeMemory(s.device, target->memory, nullptr);
        }
        if (s.framebuffer != VK_NULL_HANDLE) vkDestroyFramebuffer(s.device, s.framebuffer, nullptr);
        if (s.render_pass != VK_NULL_HANDLE) vkDestroyRenderPass(s.device, s.render_pass, nullptr);
        if (s.color_view != VK_NULL_HANDLE) vkDestroyImageView(s.device, s.color_view, nullptr);
        if (s.color_image != VK_NULL_HANDLE) vkDestroyImage(s.device, s.color_image, nullptr);
        if (s.color_memory != VK_NULL_HANDLE) vkFreeMemory(s.device, s.color_memory, nullptr);
        if (s.depth_view != VK_NULL_HANDLE) vkDestroyImageView(s.device, s.depth_view, nullptr);
        if (s.depth_image != VK_NULL_HANDLE) vkDestroyImage(s.device, s.depth_image, nullptr);
        if (s.depth_memory != VK_NULL_HANDLE) vkFreeMemory(s.device, s.depth_memory, nullptr);
        if (s.pipeline_layout != VK_NULL_HANDLE)
            vkDestroyPipelineLayout(s.device, s.pipeline_layout, nullptr);
        if (s.hw_pipeline_layout != VK_NULL_HANDLE)
            vkDestroyPipelineLayout(s.device, s.hw_pipeline_layout, nullptr);
        if (s.descriptor_pool != VK_NULL_HANDLE)
            vkDestroyDescriptorPool(s.device, s.descriptor_pool, nullptr);
        if (s.descriptor_layout != VK_NULL_HANDLE)
            vkDestroyDescriptorSetLayout(s.device, s.descriptor_layout, nullptr);
        if (s.vertex_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.vertex_shader, nullptr);
        if (s.fragment_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.fragment_shader, nullptr);
        if (s.hw_vertex_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.hw_vertex_shader, nullptr);
        if (s.hw_packed_vertex_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.hw_packed_vertex_shader, nullptr);
        if (s.timestamp_pool != VK_NULL_HANDLE)
            vkDestroyQueryPool(s.device, s.timestamp_pool, nullptr);
        if (s.fence != VK_NULL_HANDLE) vkDestroyFence(s.device, s.fence, nullptr);
        if (s.command_pool != VK_NULL_HANDLE)
            vkDestroyCommandPool(s.device, s.command_pool, nullptr);
        vkDestroyDevice(s.device, nullptr);
    }
    if (s.instance != VK_NULL_HANDLE) vkDestroyInstance(s.instance, nullptr);

    const GeGpuBackendReport preserved = s.report;
    s = VulkanGeState{};
    s.report = preserved;
    s.enabled = false;
}

[[nodiscard]] bool create_shader_module(VulkanGeState &s, const std::uint32_t *code,
                                        std::size_t byte_size, VkShaderModule &out) {
    VkShaderModuleCreateInfo info{VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO};
    info.codeSize = byte_size;
    info.pCode = code;
    return vkCreateShaderModule(s.device, &info, nullptr, &out) == VK_SUCCESS;
}

[[nodiscard]] std::uint32_t environment_dimension(const char *name, std::uint32_t fallback) {
    const char *text = std::getenv(name);
    if (text == nullptr || *text == '\0') return fallback;
    const long value = std::strtol(text, nullptr, 10);
    if (value < 1 || value > 16384) return fallback;
    return static_cast<std::uint32_t>(value);
}

// Chooses which GPU renders. A laptop with an integrated and a discrete GPU lists both, and the
// first entry is often the weak integrated one, so prefer discrete > integrated > virtual > other.
// PSPRECOMP_VULKAN_DEVICE overrides: a number is an index into the loader's list, anything else
// is matched as a case-insensitive part of the GPU name. Only devices with a graphics queue count.
[[nodiscard]] VkPhysicalDevice pick_physical_device(const std::vector<VkPhysicalDevice> &devices) {
    const auto has_graphics_queue = [](VkPhysicalDevice device) {
        std::uint32_t count = 0u;
        vkGetPhysicalDeviceQueueFamilyProperties(device, &count, nullptr);
        std::vector<VkQueueFamilyProperties> families(count);
        vkGetPhysicalDeviceQueueFamilyProperties(device, &count, families.data());
        for (const VkQueueFamilyProperties &family : families)
            if (family.queueFlags & VK_QUEUE_GRAPHICS_BIT) return true;
        return false;
    };
    const auto lowered = [](std::string text) {
        for (char &c : text) c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
        return text;
    };

    VkPhysicalDevice chosen = VK_NULL_HANDLE;
    int chosen_score = -1;
    const char *override_text = VCS_ENV("PSPRECOMP_VULKAN_DEVICE");
    for (std::size_t index = 0u; index < devices.size(); ++index) {
        if (!has_graphics_queue(devices[index])) continue;
        VkPhysicalDeviceProperties properties{};
        vkGetPhysicalDeviceProperties(devices[index], &properties);
        int score = 0;
        switch (properties.deviceType) {
        case VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU: score = 3; break;
        case VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU: score = 2; break;
        case VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU: score = 1; break;
        default: score = 0; break;
        }
        // Same type, more device-local memory wins: on a machine with two discrete GPUs the
        // bigger one is the faster one in practice (the type still dominates the ordering).
        {
            VkPhysicalDeviceMemoryProperties memory{};
            vkGetPhysicalDeviceMemoryProperties(devices[index], &memory);
            VkDeviceSize best_heap = 0u;
            for (std::uint32_t heap = 0u; heap < memory.memoryHeapCount; ++heap)
                if ((memory.memoryHeaps[heap].flags & VK_MEMORY_HEAP_DEVICE_LOCAL_BIT) != 0u)
                    best_heap = std::max(best_heap, memory.memoryHeaps[heap].size);
            score = score * 1000 + static_cast<int>(std::min<VkDeviceSize>(best_heap >> 30u, 500u));
        }
        if (override_text != nullptr && *override_text != '\0') {
            char *end = nullptr;
            const unsigned long wanted_index = std::strtoul(override_text, &end, 10);
            // A number is an index only when it names a device that exists; otherwise it is part of
            // the GPU's name ("2070", "5070 Ti").
            const bool by_index = end != override_text && *end == '\0' && wanted_index < devices.size();
            const bool matches = by_index
                ? wanted_index == index
                : lowered(properties.deviceName).find(lowered(override_text)) != std::string::npos;
            if (matches) score = 1'000'000;
        }
        if (score > chosen_score) {
            chosen_score = score;
            chosen = devices[index];
        }
    }
    if (chosen == VK_NULL_HANDLE) chosen = devices.front();
    VkPhysicalDeviceProperties properties{};
    vkGetPhysicalDeviceProperties(chosen, &properties);
    std::fprintf(stderr, "[vulkan] GPU: %s (%s), %zu device(s) available\n", properties.deviceName,
                 properties.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU ? "discrete"
                 : properties.deviceType == VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU ? "integrated"
                 : properties.deviceType == VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU ? "virtual" : "other",
                 devices.size());
    return chosen;
}

[[nodiscard]] bool create_backend(VulkanGeState &s, std::string &error) {
    // --- Instance / device -------------------------------------------------
    VkApplicationInfo app_info{VK_STRUCTURE_TYPE_APPLICATION_INFO};
    app_info.pApplicationName = "VCSNative";
    app_info.pEngineName = "psprecomp-vcs";
    app_info.apiVersion = VK_API_VERSION_1_1;

    std::vector<const char *> instance_extensions;
    VkInstanceCreateFlags instance_flags = 0;
#if defined(VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME)
    if (instance_extension_supported(VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME)) {
        instance_extensions.push_back(VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME);
        instance_flags |= VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR;
    }
#endif
    // Step 1 of the native-swapchain present-path migration (see the scoping
    // plan): add the surface extensions only, nothing else changes yet. This
    // backend still only ever renders offscreen (create_backend never calls
    // vkCreateSwapchainKHR) -- these two lines exist so later steps can
    // create a VkSurfaceKHR without a second instance-creation pass. Missing
    // support (an older MoltenVK) must not fail the whole instance, so both
    // are added conditionally, exactly like the portability extension above.
    bool surface_extensions_supported = false;
    {
        // What a presentable surface needs is a per-platform answer (platform/<os>/).
        const std::vector<const char *> surface_extensions = vkplat::surface_instance_extensions();
        bool all_supported = !surface_extensions.empty();
        for (const char *extension : surface_extensions)
            if (!instance_extension_supported(extension)) all_supported = false;
        if (all_supported) {
            instance_extensions.insert(instance_extensions.end(), surface_extensions.begin(),
                                       surface_extensions.end());
            surface_extensions_supported = true;
        }
    }
    (void)surface_extensions_supported;
    VkInstanceCreateInfo instance_info{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO};
    instance_info.pApplicationInfo = &app_info;
    instance_info.enabledExtensionCount = static_cast<std::uint32_t>(instance_extensions.size());
    instance_info.ppEnabledExtensionNames = instance_extensions.data();
    instance_info.flags = instance_flags;
    if (const VkResult result = vkCreateInstance(&instance_info, nullptr, &s.instance);
        result != VK_SUCCESS) {
        error = "vkCreateInstance failed (VkResult " + std::to_string(static_cast<int>(result)) +
                "); install the Vulkan loader (macOS: brew install vulkan-loader molten-vk; Windows: a current "
                "GPU driver ships vulkan-1.dll)";
        return false;
    }
    s.report.instance_created = true;
    s.report.loader_opened = true;

    std::uint32_t device_count = 0u;
    vkEnumeratePhysicalDevices(s.instance, &device_count, nullptr);
    if (device_count == 0u) {
        error = "no Vulkan physical devices; the loader found no driver (macOS: MoltenVK's ICD, "
                "Windows: update the GPU driver)";
        return false;
    }
    std::vector<VkPhysicalDevice> devices(device_count);
    vkEnumeratePhysicalDevices(s.instance, &device_count, devices.data());
    s.physical_device = pick_physical_device(devices);
    // Size the replacement-texture budget from the GPU instead of assuming 3 GiB fits. On a 4 GB card
    // 3 GiB of replacements plus the render targets overcommits video memory, which Windows answers by
    // paging to system RAM (stutter) or the driver by failing allocations. A discrete GPU may use 40% of
    // its device-local heap, an integrated one (whose "video memory" is system RAM) 25% and at most 1 GiB.
    // Apple's unified-memory GPUs keep the fixed 3 GiB they have always had: this only refines Windows
    // and other platforms.
    if (std::strcmp(vkplat::platform_name(), "macos") != 0) {
        VkPhysicalDeviceMemoryProperties memory{};
        vkGetPhysicalDeviceMemoryProperties(s.physical_device, &memory);
        VkDeviceSize local_heap = 0u;
        for (std::uint32_t heap = 0u; heap < memory.memoryHeapCount; ++heap)
            if ((memory.memoryHeaps[heap].flags & VK_MEMORY_HEAP_DEVICE_LOCAL_BIT) != 0u)
                local_heap = std::max(local_heap, memory.memoryHeaps[heap].size);
        VkPhysicalDeviceProperties budget_properties{};
        vkGetPhysicalDeviceProperties(s.physical_device, &budget_properties);
        constexpr std::uint64_t kMiB = 1ull << 20;
        const bool integrated = budget_properties.deviceType == VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU;
        if (local_heap != 0u) {
            std::uint64_t budget = integrated ? local_heap / 4u : local_heap / 5u * 2u;
            budget = std::clamp<std::uint64_t>(budget, integrated ? 256u * kMiB : 512u * kMiB,
                                               integrated ? 1024u * kMiB : 3072u * kMiB);
            s.replacement_budget = budget;
            std::fprintf(stderr, "[vulkan] video memory %llu MB (%s), texture replacement budget %llu MB\n",
                         static_cast<unsigned long long>(local_heap / kMiB),
                         integrated ? "integrated" : "discrete",
                         static_cast<unsigned long long>(budget / kMiB));
        }
    }
    s.report.physical_device_count = device_count;

    std::uint32_t family_count = 0u;
    vkGetPhysicalDeviceQueueFamilyProperties(s.physical_device, &family_count, nullptr);
    std::vector<VkQueueFamilyProperties> families(family_count);
    vkGetPhysicalDeviceQueueFamilyProperties(s.physical_device, &family_count, families.data());
    for (std::uint32_t index = 0u; index < family_count; ++index) {
        if (families[index].queueFlags & VK_QUEUE_GRAPHICS_BIT) {
            s.graphics_queue_family = index;
            break;
        }
    }
    if (s.graphics_queue_family == 0xFFFFFFFFu) {
        error = "no graphics-capable Vulkan queue family";
        return false;
    }
    s.report.graphics_queue_family = s.graphics_queue_family;

    const float priority = 1.0f;
    VkDeviceQueueCreateInfo queue_info{VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO};
    queue_info.queueFamilyIndex = s.graphics_queue_family;
    queue_info.queueCount = 1u;
    queue_info.pQueuePriorities = &priority;

    std::vector<const char *> device_extensions;
#if defined(VK_KHR_PORTABILITY_SUBSET_EXTENSION_NAME)
    if (device_extension_supported(s.physical_device, VK_KHR_PORTABILITY_SUBSET_EXTENSION_NAME))
        device_extensions.push_back(VK_KHR_PORTABILITY_SUBSET_EXTENSION_NAME);
#endif
    // VK_KHR_swapchain is a DEVICE extension (separate from the VK_KHR_surface/
    // VK_EXT_metal_surface INSTANCE extensions added earlier for the native-
    // swapchain present-path migration) -- without this, vkCreateSwapchainKHR
    // silently "succeeds" through a null driver function pointer (confirmed
    // live: the Vulkan loader logs "Driver's function pointer was NULL,
    // returning VK_SUCCESS" and the process then crashes the first time any
    // real swapchain function is actually called). Requested unconditionally
    // when supported; harmless for the default offscreen-only path since
    // nothing else in this backend ever references it unless
    // PSPRECOMP_VULKAN_SWAPCHAIN=1 also set the native window.
    if (surface_extensions_supported &&
        device_extension_supported(s.physical_device, VK_KHR_SWAPCHAIN_EXTENSION_NAME)) {
        device_extensions.push_back(VK_KHR_SWAPCHAIN_EXTENSION_NAME);
    }
    // Rendering.AnisotropicFiltering was confirmed a silent no-op previously:
    // every sampler hardcoded maxAnisotropy=1.0f and this device was never
    // asked to enable the feature at all, so even setting anisotropyEnable
    // on a sampler would have gone nowhere. samplerAnisotropy must be
    // requested here, at device creation, before any sampler can use it.
    VkPhysicalDeviceFeatures supported_features{};
    vkGetPhysicalDeviceFeatures(s.physical_device, &supported_features);
    s.anisotropy_supported = supported_features.samplerAnisotropy == VK_TRUE;
    VkPhysicalDeviceFeatures enabled_features{};
    enabled_features.samplerAnisotropy = s.anisotropy_supported ? VK_TRUE : VK_FALSE;

    VkDeviceCreateInfo device_info{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO};
    device_info.queueCreateInfoCount = 1u;
    device_info.pQueueCreateInfos = &queue_info;
    device_info.enabledExtensionCount = static_cast<std::uint32_t>(device_extensions.size());
    device_info.ppEnabledExtensionNames = device_extensions.data();
    device_info.pEnabledFeatures = &enabled_features;
    if (vkCreateDevice(s.physical_device, &device_info, nullptr, &s.device) != VK_SUCCESS) {
        error = "vkCreateDevice failed";
        return false;
    }
    s.report.device_created = true;
    vkGetDeviceQueue(s.device, s.graphics_queue_family, 0u, &s.graphics_queue);
    if (s.anisotropy_supported) {
        VkPhysicalDeviceProperties device_properties{};
        vkGetPhysicalDeviceProperties(s.physical_device, &device_properties);
        s.max_supported_anisotropy = device_properties.limits.maxSamplerAnisotropy;
    }

    VkCommandPoolCreateInfo pool_info{VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO};
    pool_info.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    pool_info.queueFamilyIndex = s.graphics_queue_family;
    if (vkCreateCommandPool(s.device, &pool_info, nullptr, &s.command_pool) != VK_SUCCESS) {
        error = "vkCreateCommandPool failed";
        return false;
    }
    s.report.command_pool_created = true;

    VkCommandBufferAllocateInfo command_allocate{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
    command_allocate.commandPool = s.command_pool;
    command_allocate.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    command_allocate.commandBufferCount = 1u;
    if (vkAllocateCommandBuffers(s.device, &command_allocate, &s.command_buffer) != VK_SUCCESS) {
        error = "vkAllocateCommandBuffers failed";
        return false;
    }
    VkFenceCreateInfo fence_info{VK_STRUCTURE_TYPE_FENCE_CREATE_INFO};
    if (vkCreateFence(s.device, &fence_info, nullptr, &s.fence) != VK_SUCCESS) {
        error = "vkCreateFence failed";
        return false;
    }

    // Optional: GPU timestamp queries for PSPRECOMP_GE_GPU_TIMESTAMP_DIAG.
    // Not every Vulkan implementation (or queue family) supports timestamps;
    // failing to set this up must not fail the whole backend, it just leaves
    // s.timestamps_supported false and that diagnostic prints nothing.
    {
        VkPhysicalDeviceProperties device_properties{};
        vkGetPhysicalDeviceProperties(s.physical_device, &device_properties);
        std::uint32_t queue_family_count = 0u;
        vkGetPhysicalDeviceQueueFamilyProperties(s.physical_device, &queue_family_count, nullptr);
        std::vector<VkQueueFamilyProperties> queue_families(queue_family_count);
        vkGetPhysicalDeviceQueueFamilyProperties(s.physical_device, &queue_family_count,
                                                 queue_families.data());
        const bool family_supports_timestamps =
            s.graphics_queue_family < queue_families.size() &&
            queue_families[s.graphics_queue_family].timestampValidBits > 0u;
        if (device_properties.limits.timestampComputeAndGraphics && family_supports_timestamps) {
            VkQueryPoolCreateInfo query_pool_info{VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO};
            query_pool_info.queryType = VK_QUERY_TYPE_TIMESTAMP;
            query_pool_info.queryCount = 2u;
            if (vkCreateQueryPool(s.device, &query_pool_info, nullptr, &s.timestamp_pool) ==
                VK_SUCCESS) {
                s.timestamps_supported = true;
                s.timestamp_period_ns = device_properties.limits.timestampPeriod;
            }
        }
    }

    // --- Render target ----------------------------------------------------
    s.width = environment_dimension("PSPRECOMP_INTERNAL_WIDTH", 480u);
    s.height = environment_dimension("PSPRECOMP_INTERNAL_HEIGHT", 272u);
    s.report.offscreen_width = s.width;
    s.report.offscreen_height = s.height;

    const auto create_attachment = [&](VkFormat format, VkImageUsageFlags usage,
                                       VkImageAspectFlags aspect, VkImage &image,
                                       VkDeviceMemory &memory, VkImageView &view,
                                       std::uint32_t width = 0u, std::uint32_t height = 0u,
                                       bool prefer_transient = false) -> bool {
        if (width == 0u) width = s.width;
        if (height == 0u) height = s.height;
        // prefer_transient: for an attachment this backend never samples,
        // copies, or reads back (the depth buffer below -- confirmed no
        // other code in this file references s.depth_view except as a
        // render-pass attachment), Apple's tile-based GPU can keep the data
        // entirely in on-chip tile memory and never write it to system
        // memory at all if the image is marked TRANSIENT_ATTACHMENT and
        // allocated from a LAZILY_ALLOCATED memory type (MoltenVK maps this
        // to Metal's memoryless storage mode on Apple Silicon). Real
        // bandwidth saved, not just a hint -- but not every Vulkan
        // implementation exposes a lazily-allocated memory type, so this
        // always has a normal device-local fallback and is never load-
        // bearing for correctness.
        VkImageUsageFlags final_usage = usage;
        if (prefer_transient) final_usage |= VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT;
        VkImageCreateInfo image_info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
        image_info.imageType = VK_IMAGE_TYPE_2D;
        image_info.format = format;
        image_info.extent = {width, height, 1u};
        image_info.mipLevels = 1u;
        image_info.arrayLayers = 1u;
        image_info.samples = VK_SAMPLE_COUNT_1_BIT;
        image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
        image_info.usage = final_usage;
        image_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        if (vkCreateImage(s.device, &image_info, nullptr, &image) != VK_SUCCESS) return false;
        VkMemoryRequirements requirements{};
        vkGetImageMemoryRequirements(s.device, image, &requirements);
        std::uint32_t type_index = 0u;
        bool found_type = false;
        if (prefer_transient) {
            found_type = find_memory_type(
                s.physical_device, requirements.memoryTypeBits,
                VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT | VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT,
                type_index);
        }
        if (!found_type &&
            !find_memory_type(s.physical_device, requirements.memoryTypeBits,
                              VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, type_index)) {
            return false;
        }
        if (prefer_transient) {
            VkPhysicalDeviceMemoryProperties memory_properties{};
            vkGetPhysicalDeviceMemoryProperties(s.physical_device, &memory_properties);
            const bool actually_lazy =
                (memory_properties.memoryTypes[type_index].propertyFlags &
                 VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT) != 0u;
            std::fprintf(stderr, "[transient-attachment] lazily_allocated=%s\n",
                        actually_lazy ? "yes" : "no (device fallback to device-local)");
        }
        VkMemoryAllocateInfo allocate{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
        allocate.allocationSize = requirements.size;
        allocate.memoryTypeIndex = type_index;
        if (vkAllocateMemory(s.device, &allocate, nullptr, &memory) != VK_SUCCESS) return false;
        if (vkBindImageMemory(s.device, image, memory, 0) != VK_SUCCESS) return false;
        VkImageViewCreateInfo view_info{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
        view_info.image = image;
        view_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
        view_info.format = format;
        view_info.subresourceRange.aspectMask = aspect;
        view_info.subresourceRange.levelCount = 1u;
        view_info.subresourceRange.layerCount = 1u;
        return vkCreateImageView(s.device, &view_info, nullptr, &view) == VK_SUCCESS;
    };

    if (!create_attachment(kColorFormat,
                           VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT |
                               VK_IMAGE_USAGE_SAMPLED_BIT,
                           VK_IMAGE_ASPECT_COLOR_BIT, s.color_image, s.color_memory,
                           s.color_view)) {
        error = "failed to create the color render target";
        return false;
    }
    s.report.offscreen_image_created = true;
    s.report.offscreen_image_memory_bound = true;
    s.report.offscreen_image_view_created = true;

    const VkFormat depth_format =
        select_depth_format(s.physical_device, vcs_configuration().rendering.depth_precision);
    if (!create_attachment(depth_format, VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT,
                           VK_IMAGE_ASPECT_DEPTH_BIT, s.depth_image, s.depth_memory,
                           s.depth_view, 0u, 0u, /*prefer_transient=*/true)) {
        error = "failed to create the depth attachment";
        return false;
    }
    s.report.depth_image_created = true;
    s.report.depth_image_memory_bound = true;
    s.report.depth_image_view_created = true;
    s.report.depth_attachment_active = true;
    s.report.depth_bits = depth_format == VK_FORMAT_D32_SFLOAT ? 32u
                         : depth_format == VK_FORMAT_D24_UNORM_S8_UINT ? 24u
                         : 16u;

    std::array<VkAttachmentDescription, 2> attachments{};
    attachments[0].format = kColorFormat;
    attachments[0].samples = VK_SAMPLE_COUNT_1_BIT;
    attachments[0].loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    attachments[0].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    attachments[0].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    attachments[0].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachments[0].initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    // Ends the pass ready for the readback copy, so no extra barrier is needed.
    attachments[0].finalLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    attachments[1].format = depth_format;
    attachments[1].samples = VK_SAMPLE_COUNT_1_BIT;
    attachments[1].loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    attachments[1].storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachments[1].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    attachments[1].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachments[1].initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    attachments[1].finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

    VkAttachmentReference color_reference{0u, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL};
    VkAttachmentReference depth_reference{1u, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL};
    VkSubpassDescription subpass{};
    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.colorAttachmentCount = 1u;
    subpass.pColorAttachments = &color_reference;
    subpass.pDepthStencilAttachment = &depth_reference;

    VkRenderPassCreateInfo render_pass_info{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
    render_pass_info.attachmentCount = static_cast<std::uint32_t>(attachments.size());
    render_pass_info.pAttachments = attachments.data();
    render_pass_info.subpassCount = 1u;
    render_pass_info.pSubpasses = &subpass;
    if (vkCreateRenderPass(s.device, &render_pass_info, nullptr, &s.render_pass) != VK_SUCCESS) {
        error = "vkCreateRenderPass failed";
        return false;
    }
    s.report.render_pass_created = true;

    const std::array<VkImageView, 2> views{s.color_view, s.depth_view};
    VkFramebufferCreateInfo framebuffer_info{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
    framebuffer_info.renderPass = s.render_pass;
    framebuffer_info.attachmentCount = static_cast<std::uint32_t>(views.size());
    framebuffer_info.pAttachments = views.data();
    framebuffer_info.width = s.width;
    framebuffer_info.height = s.height;
    framebuffer_info.layers = 1u;
    if (vkCreateFramebuffer(s.device, &framebuffer_info, nullptr, &s.framebuffer) != VK_SUCCESS) {
        error = "vkCreateFramebuffer failed";
        return false;
    }
    s.report.framebuffer_created = true;

    // --- Shaders / descriptors / layout ------------------------------------
    if (!create_shader_module(s, kPspGeVertSpv, sizeof(kPspGeVertSpv), s.vertex_shader) ||
        !create_shader_module(s, kPspGeFragSpv, sizeof(kPspGeFragSpv), s.fragment_shader)) {
        error = "vkCreateShaderModule failed for the GE shaders";
        return false;
    }
    if (!create_shader_module(s, kPspGeHwVertSpv, sizeof(kPspGeHwVertSpv), s.hw_vertex_shader) ||
        !create_shader_module(s, kPspGeHwPacked0115VertSpv, sizeof(kPspGeHwPacked0115VertSpv),
                              s.hw_packed_vertex_shader)) {
        error = "vkCreateShaderModule failed for the hardware-transform GE shaders";
        return false;
    }
    s.report.shader_modules_created = true;
    s.report.textured_shader_modules_created = true;

    VkDescriptorSetLayoutBinding binding{};
    binding.binding = 0u;
    binding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    binding.descriptorCount = 1u;
    binding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
    VkDescriptorSetLayoutCreateInfo layout_info{
        VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
    layout_info.bindingCount = 1u;
    layout_info.pBindings = &binding;
    if (vkCreateDescriptorSetLayout(s.device, &layout_info, nullptr, &s.descriptor_layout) !=
        VK_SUCCESS) {
        error = "vkCreateDescriptorSetLayout failed";
        return false;
    }
    s.report.texture_descriptor_layout_created = true;

    // Was a hardcoded 4096, unlike DX12's cache (Rendering.TextureCacheEntries,
    // 8192 in the shipped .ini) -- and with no eviction at all (see the old
    // unconditional "cache full, refuse" in upload_decoded_texture below),
    // VCS's texture variety across a real play session walks straight past
    // 4096 unique textures after a minute or two, after which every further
    // unique texture silently fails to upload for the rest of the run and
    // that geometry is left showing whatever stale/CPU-composited result was
    // already there -- confirmed live via the F9 GPU frame dump (textures=
    // tex_uploads=4096 exactly, 0 rejected, at the point corruption was
    // reported starting). Sized from the same config DX12 reads, floored so
    // a pathological config value still leaves useful headroom.
    s.texture_capacity =
        std::max<std::uint32_t>(512u, vcs_configuration().rendering.texture_cache_entries);
    const VkDescriptorPoolSize pool_size{VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER,
                                         s.texture_capacity + 1u};
    VkDescriptorPoolCreateInfo descriptor_pool_info{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
    // FREE_DESCRIPTOR_SET_BIT: eviction below frees one entry's descriptor
    // set individually to reuse the slot, rather than only ever growing
    // until the pool (sized once, up front) runs out.
    descriptor_pool_info.flags = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
    descriptor_pool_info.maxSets = s.texture_capacity + 1u;
    descriptor_pool_info.poolSizeCount = 1u;
    descriptor_pool_info.pPoolSizes = &pool_size;
    if (vkCreateDescriptorPool(s.device, &descriptor_pool_info, nullptr, &s.descriptor_pool) !=
        VK_SUCCESS) {
        error = "vkCreateDescriptorPool failed";
        return false;
    }
    s.report.texture_descriptor_pool_created = true;

    VkPushConstantRange push_range{};
    push_range.stageFlags = VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT;
    push_range.size = sizeof(PushConstants);
    VkPipelineLayoutCreateInfo pipeline_layout_info{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
    pipeline_layout_info.setLayoutCount = 1u;
    pipeline_layout_info.pSetLayouts = &s.descriptor_layout;
    pipeline_layout_info.pushConstantRangeCount = 1u;
    pipeline_layout_info.pPushConstantRanges = &push_range;
    if (vkCreatePipelineLayout(s.device, &pipeline_layout_info, nullptr, &s.pipeline_layout) !=
        VK_SUCCESS) {
        error = "vkCreatePipelineLayout failed";
        return false;
    }

    // Second pipeline layout for the hardware-transform shaders: their
    // push-constant block (HwTransformPushConstants, ~176 bytes) is well
    // over the screen-space path's, and over the Vulkan spec's guaranteed
    // minimum (128 bytes) -- but this backend only ever runs on Apple
    // Silicon via MoltenVK, which reports a much larger limit in practice.
    // Checked explicitly rather than assumed, so a future non-Apple Vulkan
    // target fails loudly here instead of silently corrupting geometry.
    VkPhysicalDeviceProperties device_properties{};
    vkGetPhysicalDeviceProperties(s.physical_device, &device_properties);
    if (device_properties.limits.maxPushConstantsSize < sizeof(HwTransformPushConstants)) {
        error = "device's maxPushConstantsSize is too small for the hardware-transform shaders";
        return false;
    }
    VkPushConstantRange hw_push_range{};
    hw_push_range.stageFlags = VK_SHADER_STAGE_VERTEX_BIT;
    hw_push_range.size = sizeof(HwTransformPushConstants);
    VkPipelineLayoutCreateInfo hw_pipeline_layout_info{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
    hw_pipeline_layout_info.setLayoutCount = 1u;
    hw_pipeline_layout_info.pSetLayouts = &s.descriptor_layout;
    hw_pipeline_layout_info.pushConstantRangeCount = 1u;
    hw_pipeline_layout_info.pPushConstantRanges = &hw_push_range;
    if (vkCreatePipelineLayout(s.device, &hw_pipeline_layout_info, nullptr, &s.hw_pipeline_layout) !=
        VK_SUCCESS) {
        error = "vkCreatePipelineLayout failed for the hardware-transform layout";
        return false;
    }

    // --- Buffers ----------------------------------------------------------
    if (!create_buffer(s, kInitialVertexBytes, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,
                       VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                       s.vertex_buffer, s.vertex_memory)) {
        error = "failed to create the vertex buffer";
        return false;
    }
    s.vertex_capacity = kInitialVertexBytes;
    if (vkMapMemory(s.device, s.vertex_memory, 0, kInitialVertexBytes, 0, &s.vertex_mapped) !=
        VK_SUCCESS) {
        error = "vkMapMemory failed for the vertex buffer";
        return false;
    }
    s.report.upload_capacity_bytes = kInitialVertexBytes;

    // Hardware-transform buffers, sized the same as the screen-space vertex
    // buffer to start; finish_color_frame() grows each on demand exactly
    // like the screen-space path already does for s.vertex_buffer.
    if (!create_buffer(s, kInitialVertexBytes, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,
                       VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                       s.hw_vertex_buffer, s.hw_vertex_memory) ||
        vkMapMemory(s.device, s.hw_vertex_memory, 0, kInitialVertexBytes, 0, &s.hw_vertex_mapped) !=
            VK_SUCCESS) {
        error = "failed to create the hardware-transform vertex buffer";
        return false;
    }
    s.hw_vertex_capacity = kInitialVertexBytes;

    if (!create_buffer(s, kInitialVertexBytes, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,
                       VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                       s.hw_packed_vertex_buffer, s.hw_packed_vertex_memory) ||
        vkMapMemory(s.device, s.hw_packed_vertex_memory, 0, kInitialVertexBytes, 0,
                   &s.hw_packed_vertex_mapped) != VK_SUCCESS) {
        error = "failed to create the packed-0115 hardware-transform vertex buffer";
        return false;
    }
    s.hw_packed_vertex_capacity = kInitialVertexBytes;

    if (!create_buffer(s, kInitialVertexBytes, VK_BUFFER_USAGE_INDEX_BUFFER_BIT,
                       VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                       s.hw_index_buffer, s.hw_index_memory) ||
        vkMapMemory(s.device, s.hw_index_memory, 0, kInitialVertexBytes, 0, &s.hw_index_mapped) !=
            VK_SUCCESS) {
        error = "failed to create the hardware-transform index buffer";
        return false;
    }
    s.hw_index_capacity = kInitialVertexBytes;

    const VkDeviceSize readback_bytes = VkDeviceSize{s.width} * s.height * 4u;
    if (!create_buffer(s, readback_bytes, VK_BUFFER_USAGE_TRANSFER_DST_BIT,
                       VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                       s.readback_buffer, s.readback_memory)) {
        error = "failed to create the readback buffer";
        return false;
    }
    s.readback_capacity = readback_bytes;
    s.report.transfer_buffer_created = true;
    s.report.transfer_memory_mapped = true;

    // --- Experimental bloom (see [SimulateHDR] in the .ini) ----------------
    // Off by default; failing to set any of this up must not fail the whole
    // backend -- it just leaves s.bloom_enabled false, same as if the .ini
    // had it disabled.
    s.bloom_enabled = false;
    const VcsConfiguration &bloom_config = vcs_configuration();
    if (bloom_config.initialized && bloom_config.bloom.enabled) {
        bool bloom_ok = true;
        if (!create_attachment(kColorFormat,
                               VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT |
                                   VK_IMAGE_USAGE_TRANSFER_SRC_BIT,
                               VK_IMAGE_ASPECT_COLOR_BIT, s.bloom_image, s.bloom_memory,
                               s.bloom_view)) {
            bloom_ok = false;
        }

        if (bloom_ok) {
            VkAttachmentDescription bloom_attachment{};
            bloom_attachment.format = kColorFormat;
            bloom_attachment.samples = VK_SAMPLE_COUNT_1_BIT;
            bloom_attachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
            bloom_attachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
            bloom_attachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
            bloom_attachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
            bloom_attachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            bloom_attachment.finalLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
            VkAttachmentReference bloom_color_ref{0u, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL};
            VkSubpassDescription bloom_subpass{};
            bloom_subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
            bloom_subpass.colorAttachmentCount = 1u;
            bloom_subpass.pColorAttachments = &bloom_color_ref;
            VkRenderPassCreateInfo bloom_render_pass_info{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
            bloom_render_pass_info.attachmentCount = 1u;
            bloom_render_pass_info.pAttachments = &bloom_attachment;
            bloom_render_pass_info.subpassCount = 1u;
            bloom_render_pass_info.pSubpasses = &bloom_subpass;
            if (vkCreateRenderPass(s.device, &bloom_render_pass_info, nullptr,
                                   &s.bloom_render_pass) != VK_SUCCESS) {
                bloom_ok = false;
            }
        }

        if (bloom_ok) {
            VkFramebufferCreateInfo bloom_framebuffer_info{
                VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
            bloom_framebuffer_info.renderPass = s.bloom_render_pass;
            bloom_framebuffer_info.attachmentCount = 1u;
            bloom_framebuffer_info.pAttachments = &s.bloom_view;
            bloom_framebuffer_info.width = s.width;
            bloom_framebuffer_info.height = s.height;
            bloom_framebuffer_info.layers = 1u;
            if (vkCreateFramebuffer(s.device, &bloom_framebuffer_info, nullptr,
                                    &s.bloom_framebuffer) != VK_SUCCESS) {
                bloom_ok = false;
            }
        }

        if (bloom_ok && (!create_shader_module(s, kBloomVertSpv, sizeof(kBloomVertSpv),
                                               s.bloom_vertex_shader) ||
                        !create_shader_module(s, kBloomFragSpv, sizeof(kBloomFragSpv),
                                              s.bloom_fragment_shader))) {
            bloom_ok = false;
        }

        // Dedicated sampler/descriptor layout/pool/set, separate from the
        // per-texture ones above -- this samples a fixed image (s.color_view)
        // for the life of the backend, never evicted/reallocated, so it does
        // not need to share their eviction-capable pool.
        if (bloom_ok) {
            VkSamplerCreateInfo sampler_info{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
            sampler_info.magFilter = VK_FILTER_LINEAR;
            sampler_info.minFilter = VK_FILTER_LINEAR;
            sampler_info.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            sampler_info.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            sampler_info.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            sampler_info.maxAnisotropy = 1.0f;
            sampler_info.maxLod = 0.0f;
            if (vkCreateSampler(s.device, &sampler_info, nullptr, &s.bloom_sampler) != VK_SUCCESS)
                bloom_ok = false;
        }

        if (bloom_ok) {
            VkDescriptorSetLayoutBinding bloom_binding{};
            bloom_binding.binding = 0u;
            bloom_binding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            bloom_binding.descriptorCount = 1u;
            bloom_binding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
            VkDescriptorSetLayoutCreateInfo bloom_layout_info{
                VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
            bloom_layout_info.bindingCount = 1u;
            bloom_layout_info.pBindings = &bloom_binding;
            if (vkCreateDescriptorSetLayout(s.device, &bloom_layout_info, nullptr,
                                            &s.bloom_descriptor_layout) != VK_SUCCESS) {
                bloom_ok = false;
            }
        }

        if (bloom_ok) {
            const VkDescriptorPoolSize bloom_pool_size{VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER,
                                                       1u};
            VkDescriptorPoolCreateInfo bloom_pool_info{
                VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
            bloom_pool_info.maxSets = 1u;
            bloom_pool_info.poolSizeCount = 1u;
            bloom_pool_info.pPoolSizes = &bloom_pool_size;
            if (vkCreateDescriptorPool(s.device, &bloom_pool_info, nullptr,
                                       &s.bloom_descriptor_pool) != VK_SUCCESS) {
                bloom_ok = false;
            }
        }

        if (bloom_ok) {
            VkDescriptorSetAllocateInfo bloom_allocate{
                VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
            bloom_allocate.descriptorPool = s.bloom_descriptor_pool;
            bloom_allocate.descriptorSetCount = 1u;
            bloom_allocate.pSetLayouts = &s.bloom_descriptor_layout;
            if (vkAllocateDescriptorSets(s.device, &bloom_allocate, &s.bloom_descriptor_set) !=
                VK_SUCCESS) {
                bloom_ok = false;
            } else {
                // s.color_view never changes address for the life of the
                // backend (only recreated on a full resize teardown, which
                // also tears this down), so this descriptor is written once,
                // not refreshed per frame.
                VkDescriptorImageInfo bloom_image_info{};
                bloom_image_info.sampler = s.bloom_sampler;
                bloom_image_info.imageView = s.color_view;
                bloom_image_info.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
                VkWriteDescriptorSet bloom_write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
                bloom_write.dstSet = s.bloom_descriptor_set;
                bloom_write.descriptorCount = 1u;
                bloom_write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
                bloom_write.pImageInfo = &bloom_image_info;
                vkUpdateDescriptorSets(s.device, 1, &bloom_write, 0, nullptr);
            }
        }

        if (bloom_ok) {
            VkPushConstantRange bloom_push_range{};
            bloom_push_range.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
            bloom_push_range.size = sizeof(BloomPushConstants);
            VkPipelineLayoutCreateInfo bloom_pipeline_layout_info{
                VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
            bloom_pipeline_layout_info.setLayoutCount = 1u;
            bloom_pipeline_layout_info.pSetLayouts = &s.bloom_descriptor_layout;
            bloom_pipeline_layout_info.pushConstantRangeCount = 1u;
            bloom_pipeline_layout_info.pPushConstantRanges = &bloom_push_range;
            if (vkCreatePipelineLayout(s.device, &bloom_pipeline_layout_info, nullptr,
                                       &s.bloom_pipeline_layout) != VK_SUCCESS) {
                bloom_ok = false;
            }
        }

        if (bloom_ok) {
            std::array<VkPipelineShaderStageCreateInfo, 2> bloom_stages{};
            bloom_stages[0] = VkPipelineShaderStageCreateInfo{
                VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
            bloom_stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
            bloom_stages[0].module = s.bloom_vertex_shader;
            bloom_stages[0].pName = "main";
            bloom_stages[1] = VkPipelineShaderStageCreateInfo{
                VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
            bloom_stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
            bloom_stages[1].module = s.bloom_fragment_shader;
            bloom_stages[1].pName = "main";

            // No vertex buffer: shaders/bloom.vert derives all 3 vertices of
            // a fullscreen triangle from gl_VertexIndex alone.
            VkPipelineVertexInputStateCreateInfo bloom_vertex_input{
                VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};

            VkPipelineInputAssemblyStateCreateInfo bloom_input_assembly{
                VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
            bloom_input_assembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;

            VkPipelineViewportStateCreateInfo bloom_viewport_state{
                VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
            bloom_viewport_state.viewportCount = 1u;
            bloom_viewport_state.scissorCount = 1u;

            VkPipelineRasterizationStateCreateInfo bloom_rasterization{
                VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
            bloom_rasterization.polygonMode = VK_POLYGON_MODE_FILL;
            bloom_rasterization.cullMode = VK_CULL_MODE_NONE;
            bloom_rasterization.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
            bloom_rasterization.lineWidth = 1.0f;

            VkPipelineMultisampleStateCreateInfo bloom_multisample{
                VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
            bloom_multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;

            VkPipelineDepthStencilStateCreateInfo bloom_depth_stencil{
                VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};

            VkPipelineColorBlendAttachmentState bloom_blend{};
            bloom_blend.colorWriteMask =
                VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT | VK_COLOR_COMPONENT_B_BIT |
                VK_COLOR_COMPONENT_A_BIT;
            VkPipelineColorBlendStateCreateInfo bloom_color_blend{
                VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
            bloom_color_blend.attachmentCount = 1u;
            bloom_color_blend.pAttachments = &bloom_blend;

            const std::array<VkDynamicState, 2> bloom_dynamic_states{
                VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR};
            VkPipelineDynamicStateCreateInfo bloom_dynamic{
                VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
            bloom_dynamic.dynamicStateCount =
                static_cast<std::uint32_t>(bloom_dynamic_states.size());
            bloom_dynamic.pDynamicStates = bloom_dynamic_states.data();

            VkGraphicsPipelineCreateInfo bloom_info{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
            bloom_info.stageCount = static_cast<std::uint32_t>(bloom_stages.size());
            bloom_info.pStages = bloom_stages.data();
            bloom_info.pVertexInputState = &bloom_vertex_input;
            bloom_info.pInputAssemblyState = &bloom_input_assembly;
            bloom_info.pViewportState = &bloom_viewport_state;
            bloom_info.pRasterizationState = &bloom_rasterization;
            bloom_info.pMultisampleState = &bloom_multisample;
            bloom_info.pDepthStencilState = &bloom_depth_stencil;
            bloom_info.pColorBlendState = &bloom_color_blend;
            bloom_info.pDynamicState = &bloom_dynamic;
            bloom_info.layout = s.bloom_pipeline_layout;
            bloom_info.renderPass = s.bloom_render_pass;
            bloom_info.subpass = 0u;
            if (vkCreateGraphicsPipelines(s.device, VK_NULL_HANDLE, 1, &bloom_info, nullptr,
                                          &s.bloom_pipeline) != VK_SUCCESS) {
                bloom_ok = false;
            }
        }

        if (bloom_ok &&
            !create_buffer(s, readback_bytes, VK_BUFFER_USAGE_TRANSFER_DST_BIT,
                           VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                           s.bloom_readback_buffer, s.bloom_readback_memory)) {
            bloom_ok = false;
        }
        if (bloom_ok) s.bloom_readback_capacity = readback_bytes;

        s.bloom_enabled = bloom_ok;
        s.bloom_threshold = bloom_config.bloom.threshold;
        s.bloom_intensity = bloom_config.bloom.intensity;
        std::fprintf(stderr, "[bloom] setup %s threshold=%.2f intensity=%.2f\n",
                    bloom_ok ? "OK" : "FAILED (feature left disabled)", s.bloom_threshold,
                    s.bloom_intensity);
    }

    // --- FXAA (Rendering.SMAA/AntiAliasing) ---------------------------------
    s.fxaa_enabled = false;
    if (bloom_config.initialized && (bloom_config.rendering.smaa || bloom_config.smaa_1x)) {
        bool fxaa_ok = true;
        if (!create_attachment(kColorFormat,
                               VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT |
                                   VK_IMAGE_USAGE_TRANSFER_SRC_BIT,
                               VK_IMAGE_ASPECT_COLOR_BIT, s.fxaa_image, s.fxaa_memory,
                               s.fxaa_view)) {
            fxaa_ok = false;
        }
        if (fxaa_ok) {
            VkAttachmentDescription fxaa_attachment{};
            fxaa_attachment.format = kColorFormat;
            fxaa_attachment.samples = VK_SAMPLE_COUNT_1_BIT;
            fxaa_attachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
            fxaa_attachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
            fxaa_attachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
            fxaa_attachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
            fxaa_attachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            fxaa_attachment.finalLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
            VkAttachmentReference fxaa_color_ref{0u, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL};
            VkSubpassDescription fxaa_subpass{};
            fxaa_subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
            fxaa_subpass.colorAttachmentCount = 1u;
            fxaa_subpass.pColorAttachments = &fxaa_color_ref;
            VkRenderPassCreateInfo fxaa_render_pass_info{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
            fxaa_render_pass_info.attachmentCount = 1u;
            fxaa_render_pass_info.pAttachments = &fxaa_attachment;
            fxaa_render_pass_info.subpassCount = 1u;
            fxaa_render_pass_info.pSubpasses = &fxaa_subpass;
            if (vkCreateRenderPass(s.device, &fxaa_render_pass_info, nullptr,
                                   &s.fxaa_render_pass) != VK_SUCCESS) {
                fxaa_ok = false;
            }
        }
        if (fxaa_ok) {
            VkFramebufferCreateInfo fxaa_framebuffer_info{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
            fxaa_framebuffer_info.renderPass = s.fxaa_render_pass;
            fxaa_framebuffer_info.attachmentCount = 1u;
            fxaa_framebuffer_info.pAttachments = &s.fxaa_view;
            fxaa_framebuffer_info.width = s.width;
            fxaa_framebuffer_info.height = s.height;
            fxaa_framebuffer_info.layers = 1u;
            if (vkCreateFramebuffer(s.device, &fxaa_framebuffer_info, nullptr,
                                    &s.fxaa_framebuffer) != VK_SUCCESS) {
                fxaa_ok = false;
            }
        }
        if (fxaa_ok && (!create_shader_module(s, kBloomVertSpv, sizeof(kBloomVertSpv),
                                              s.fxaa_vertex_shader) ||
                       !create_shader_module(s, kFxaaFragSpv, sizeof(kFxaaFragSpv),
                                             s.fxaa_fragment_shader))) {
            fxaa_ok = false;
        }
        if (fxaa_ok) {
            VkSamplerCreateInfo fxaa_sampler_info{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
            fxaa_sampler_info.magFilter = VK_FILTER_LINEAR;
            fxaa_sampler_info.minFilter = VK_FILTER_LINEAR;
            fxaa_sampler_info.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            fxaa_sampler_info.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            fxaa_sampler_info.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            fxaa_sampler_info.maxAnisotropy = 1.0f;
            if (vkCreateSampler(s.device, &fxaa_sampler_info, nullptr, &s.fxaa_sampler) !=
                VK_SUCCESS) {
                fxaa_ok = false;
            }
        }
        if (fxaa_ok) {
            VkDescriptorSetLayoutBinding fxaa_binding{};
            fxaa_binding.binding = 0u;
            fxaa_binding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            fxaa_binding.descriptorCount = 1u;
            fxaa_binding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
            VkDescriptorSetLayoutCreateInfo fxaa_layout_info{
                VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
            fxaa_layout_info.bindingCount = 1u;
            fxaa_layout_info.pBindings = &fxaa_binding;
            if (vkCreateDescriptorSetLayout(s.device, &fxaa_layout_info, nullptr,
                                            &s.fxaa_descriptor_layout) != VK_SUCCESS) {
                fxaa_ok = false;
            }
        }
        if (fxaa_ok) {
            const VkDescriptorPoolSize fxaa_pool_size{VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER,
                                                      1u};
            VkDescriptorPoolCreateInfo fxaa_pool_info{
                VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
            fxaa_pool_info.maxSets = 1u;
            fxaa_pool_info.poolSizeCount = 1u;
            fxaa_pool_info.pPoolSizes = &fxaa_pool_size;
            if (vkCreateDescriptorPool(s.device, &fxaa_pool_info, nullptr,
                                       &s.fxaa_descriptor_pool) != VK_SUCCESS) {
                fxaa_ok = false;
            }
        }
        if (fxaa_ok) {
            VkDescriptorSetAllocateInfo fxaa_allocate{
                VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
            fxaa_allocate.descriptorPool = s.fxaa_descriptor_pool;
            fxaa_allocate.descriptorSetCount = 1u;
            fxaa_allocate.pSetLayouts = &s.fxaa_descriptor_layout;
            if (vkAllocateDescriptorSets(s.device, &fxaa_allocate, &s.fxaa_descriptor_set) !=
                VK_SUCCESS) {
                fxaa_ok = false;
            } else {
                VkDescriptorImageInfo fxaa_image_info{};
                fxaa_image_info.sampler = s.fxaa_sampler;
                fxaa_image_info.imageView = s.color_view;
                fxaa_image_info.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
                VkWriteDescriptorSet fxaa_write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
                fxaa_write.dstSet = s.fxaa_descriptor_set;
                fxaa_write.descriptorCount = 1u;
                fxaa_write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
                fxaa_write.pImageInfo = &fxaa_image_info;
                vkUpdateDescriptorSets(s.device, 1, &fxaa_write, 0, nullptr);
            }
        }
        if (fxaa_ok) {
            VkPushConstantRange fxaa_push_range{};
            fxaa_push_range.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
            fxaa_push_range.size = sizeof(FxaaPushConstants);
            VkPipelineLayoutCreateInfo fxaa_pipeline_layout_info{
                VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
            fxaa_pipeline_layout_info.setLayoutCount = 1u;
            fxaa_pipeline_layout_info.pSetLayouts = &s.fxaa_descriptor_layout;
            fxaa_pipeline_layout_info.pushConstantRangeCount = 1u;
            fxaa_pipeline_layout_info.pPushConstantRanges = &fxaa_push_range;
            if (vkCreatePipelineLayout(s.device, &fxaa_pipeline_layout_info, nullptr,
                                       &s.fxaa_pipeline_layout) != VK_SUCCESS) {
                fxaa_ok = false;
            }
        }
        if (fxaa_ok) {
            std::array<VkPipelineShaderStageCreateInfo, 2> fxaa_stages{};
            fxaa_stages[0] = VkPipelineShaderStageCreateInfo{
                VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
            fxaa_stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
            fxaa_stages[0].module = s.fxaa_vertex_shader;
            fxaa_stages[0].pName = "main";
            fxaa_stages[1] = VkPipelineShaderStageCreateInfo{
                VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
            fxaa_stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
            fxaa_stages[1].module = s.fxaa_fragment_shader;
            fxaa_stages[1].pName = "main";

            VkPipelineVertexInputStateCreateInfo fxaa_vertex_input{
                VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
            VkPipelineInputAssemblyStateCreateInfo fxaa_input_assembly{
                VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
            fxaa_input_assembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
            VkPipelineViewportStateCreateInfo fxaa_viewport_state{
                VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
            fxaa_viewport_state.viewportCount = 1u;
            fxaa_viewport_state.scissorCount = 1u;
            VkPipelineRasterizationStateCreateInfo fxaa_rasterization{
                VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
            fxaa_rasterization.polygonMode = VK_POLYGON_MODE_FILL;
            fxaa_rasterization.cullMode = VK_CULL_MODE_NONE;
            fxaa_rasterization.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
            fxaa_rasterization.lineWidth = 1.0f;
            VkPipelineMultisampleStateCreateInfo fxaa_multisample{
                VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
            fxaa_multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
            VkPipelineDepthStencilStateCreateInfo fxaa_depth_stencil{
                VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
            VkPipelineColorBlendAttachmentState fxaa_blend{};
            fxaa_blend.colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT |
                VK_COLOR_COMPONENT_B_BIT | VK_COLOR_COMPONENT_A_BIT;
            VkPipelineColorBlendStateCreateInfo fxaa_color_blend{
                VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
            fxaa_color_blend.attachmentCount = 1u;
            fxaa_color_blend.pAttachments = &fxaa_blend;
            const std::array<VkDynamicState, 2> fxaa_dynamic_states{
                VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR};
            VkPipelineDynamicStateCreateInfo fxaa_dynamic{
                VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
            fxaa_dynamic.dynamicStateCount =
                static_cast<std::uint32_t>(fxaa_dynamic_states.size());
            fxaa_dynamic.pDynamicStates = fxaa_dynamic_states.data();

            VkGraphicsPipelineCreateInfo fxaa_info{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
            fxaa_info.stageCount = static_cast<std::uint32_t>(fxaa_stages.size());
            fxaa_info.pStages = fxaa_stages.data();
            fxaa_info.pVertexInputState = &fxaa_vertex_input;
            fxaa_info.pInputAssemblyState = &fxaa_input_assembly;
            fxaa_info.pViewportState = &fxaa_viewport_state;
            fxaa_info.pRasterizationState = &fxaa_rasterization;
            fxaa_info.pMultisampleState = &fxaa_multisample;
            fxaa_info.pDepthStencilState = &fxaa_depth_stencil;
            fxaa_info.pColorBlendState = &fxaa_color_blend;
            fxaa_info.pDynamicState = &fxaa_dynamic;
            fxaa_info.layout = s.fxaa_pipeline_layout;
            fxaa_info.renderPass = s.fxaa_render_pass;
            fxaa_info.subpass = 0u;
            if (vkCreateGraphicsPipelines(s.device, VK_NULL_HANDLE, 1, &fxaa_info, nullptr,
                                          &s.fxaa_pipeline) != VK_SUCCESS) {
                fxaa_ok = false;
            }
        }
        s.fxaa_enabled = fxaa_ok;
        std::fprintf(stderr, "[fxaa] setup %s\n", fxaa_ok ? "OK" : "FAILED (feature left disabled)");
    }

    // --- SMAA 1x (ProperShaders.ini [SMAA] Enabled; replaces the FXAA shader) -------
    s.smaa_ready = false;
    if (s.fxaa_enabled && bloom_config.smaa_1x) {
        bool ok = true;
        const VkImageUsageFlags target_usage =
            VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
        ok = ok && create_attachment(VK_FORMAT_R8G8_UNORM, target_usage, VK_IMAGE_ASPECT_COLOR_BIT,
                                     s.smaa_image[0], s.smaa_memory[0], s.smaa_view[0]);
        ok = ok && create_attachment(VK_FORMAT_R8G8B8A8_UNORM, target_usage, VK_IMAGE_ASPECT_COLOR_BIT,
                                     s.smaa_image[1], s.smaa_memory[1], s.smaa_view[1]);
        ok = ok && create_attachment(VK_FORMAT_R8G8_UNORM,
                                     VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                                     VK_IMAGE_ASPECT_COLOR_BIT, s.smaa_image[2], s.smaa_memory[2],
                                     s.smaa_view[2], AREATEX_WIDTH, AREATEX_HEIGHT);
        ok = ok && create_attachment(VK_FORMAT_R8_UNORM,
                                     VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                                     VK_IMAGE_ASPECT_COLOR_BIT, s.smaa_image[3], s.smaa_memory[3],
                                     s.smaa_view[3], SEARCHTEX_WIDTH, SEARCHTEX_HEIGHT);

        const auto upload_lookup = [&](VkImage image, const unsigned char *data, std::size_t bytes,
                                       std::uint32_t width, std::uint32_t height) -> bool {
            VkBuffer staging = VK_NULL_HANDLE;
            VkDeviceMemory staging_memory = VK_NULL_HANDLE;
            bool done = false;
            if (create_buffer(s, bytes, VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
                              VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                              staging, staging_memory)) {
                void *mapped = nullptr;
                if (vkMapMemory(s.device, staging_memory, 0, bytes, 0, &mapped) == VK_SUCCESS) {
                    std::memcpy(mapped, data, bytes);
                    vkUnmapMemory(s.device, staging_memory);
                    VkCommandBuffer cmd = begin_one_shot(s);
                    if (cmd != VK_NULL_HANDLE) {
                        transition_image(cmd, image, VK_IMAGE_LAYOUT_UNDEFINED,
                                         VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 0,
                                         VK_ACCESS_TRANSFER_WRITE_BIT, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                                         VK_PIPELINE_STAGE_TRANSFER_BIT);
                        VkBufferImageCopy region{};
                        region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
                        region.imageSubresource.layerCount = 1u;
                        region.imageExtent = {width, height, 1u};
                        vkCmdCopyBufferToImage(cmd, staging, image,
                                               VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &region);
                        transition_image(cmd, image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                                         VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                                         VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_SHADER_READ_BIT,
                                         VK_PIPELINE_STAGE_TRANSFER_BIT,
                                         VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);
                        done = end_one_shot(s, cmd);
                    }
                }
            }
            if (staging != VK_NULL_HANDLE) vkDestroyBuffer(s.device, staging, nullptr);
            if (staging_memory != VK_NULL_HANDLE) vkFreeMemory(s.device, staging_memory, nullptr);
            return done;
        };
        ok = ok && upload_lookup(s.smaa_image[2], areaTexBytes, AREATEX_SIZE, AREATEX_WIDTH,
                                 AREATEX_HEIGHT);
        ok = ok && upload_lookup(s.smaa_image[3], searchTexBytes, SEARCHTEX_SIZE, SEARCHTEX_WIDTH,
                                 SEARCHTEX_HEIGHT);

        const auto make_pass = [&](VkFormat format, VkRenderPass &pass) -> bool {
            VkAttachmentDescription attachment{};
            attachment.format = format;
            attachment.samples = VK_SAMPLE_COUNT_1_BIT;
            attachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
            attachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
            attachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
            attachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
            attachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            attachment.finalLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            VkAttachmentReference reference{0u, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL};
            VkSubpassDescription subpass{};
            subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
            subpass.colorAttachmentCount = 1u;
            subpass.pColorAttachments = &reference;
            VkRenderPassCreateInfo info{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
            info.attachmentCount = 1u;
            info.pAttachments = &attachment;
            info.subpassCount = 1u;
            info.pSubpasses = &subpass;
            return vkCreateRenderPass(s.device, &info, nullptr, &pass) == VK_SUCCESS;
        };
        ok = ok && make_pass(VK_FORMAT_R8G8_UNORM, s.smaa_pass[0]);
        ok = ok && make_pass(VK_FORMAT_R8G8B8A8_UNORM, s.smaa_pass[1]);
        for (std::size_t i = 0u; ok && i < 2u; ++i) {
            VkFramebufferCreateInfo info{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
            info.renderPass = s.smaa_pass[i];
            info.attachmentCount = 1u;
            info.pAttachments = &s.smaa_view[i];
            info.width = s.width;
            info.height = s.height;
            info.layers = 1u;
            ok = vkCreateFramebuffer(s.device, &info, nullptr, &s.smaa_framebuffer[i]) == VK_SUCCESS;
        }

        for (const auto sampler_filter : {VK_FILTER_LINEAR, VK_FILTER_NEAREST}) {
            VkSamplerCreateInfo info{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
            info.magFilter = sampler_filter;
            info.minFilter = sampler_filter;
            info.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            info.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            info.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            info.maxAnisotropy = 1.0f;
            VkSampler &target = sampler_filter == VK_FILTER_LINEAR ? s.smaa_linear_sampler
                                                                   : s.smaa_point_sampler;
            ok = ok && vkCreateSampler(s.device, &info, nullptr, &target) == VK_SUCCESS;
        }

        // Per-pass sampler bindings: edge {color}, weights {edges, area, search},
        // blend {color, blend weights}. Area/search are read with point sampling.
        const std::array<std::uint32_t, 3> binding_counts{1u, 3u, 2u};
        const std::array<const std::uint32_t *, 3> spv_code{kSmaaEdgeFragSpv, kSmaaWeightsFragSpv,
                                                            kSmaaBlendFragSpv};
        const std::array<std::size_t, 3> spv_size{sizeof(kSmaaEdgeFragSpv), sizeof(kSmaaWeightsFragSpv),
                                                  sizeof(kSmaaBlendFragSpv)};
        for (std::size_t i = 0u; ok && i < 3u; ++i) {
            std::array<VkDescriptorSetLayoutBinding, 3> bindings{};
            for (std::uint32_t b = 0u; b < binding_counts[i]; ++b) {
                bindings[b].binding = b;
                bindings[b].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
                bindings[b].descriptorCount = 1u;
                bindings[b].stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
            }
            VkDescriptorSetLayoutCreateInfo layout_info{
                VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
            layout_info.bindingCount = binding_counts[i];
            layout_info.pBindings = bindings.data();
            ok = vkCreateDescriptorSetLayout(s.device, &layout_info, nullptr,
                                             &s.smaa_set_layout[i]) == VK_SUCCESS;
            VkPushConstantRange push_range{VK_SHADER_STAGE_FRAGMENT_BIT, 0u, 16u};
            VkPipelineLayoutCreateInfo pipeline_layout_info{
                VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
            pipeline_layout_info.setLayoutCount = 1u;
            pipeline_layout_info.pSetLayouts = &s.smaa_set_layout[i];
            pipeline_layout_info.pushConstantRangeCount = 1u;
            pipeline_layout_info.pPushConstantRanges = &push_range;
            ok = ok && vkCreatePipelineLayout(s.device, &pipeline_layout_info, nullptr,
                                              &s.smaa_pipeline_layout[i]) == VK_SUCCESS;
            ok = ok && create_shader_module(s, spv_code[i], spv_size[i], s.smaa_module[i]);
        }
        if (ok) {
            const std::array<VkDescriptorPoolSize, 1> pool_size{
                VkDescriptorPoolSize{VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 6u}};
            VkDescriptorPoolCreateInfo pool_info{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
            pool_info.maxSets = 3u;
            pool_info.poolSizeCount = 1u;
            pool_info.pPoolSizes = pool_size.data();
            ok = vkCreateDescriptorPool(s.device, &pool_info, nullptr, &s.smaa_pool) == VK_SUCCESS;
        }
        for (std::size_t i = 0u; ok && i < 3u; ++i) {
            VkDescriptorSetAllocateInfo allocate{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
            allocate.descriptorPool = s.smaa_pool;
            allocate.descriptorSetCount = 1u;
            allocate.pSetLayouts = &s.smaa_set_layout[i];
            ok = vkAllocateDescriptorSets(s.device, &allocate, &s.smaa_set[i]) == VK_SUCCESS;
        }
        if (ok) {
            // set0: color | set1: edges, area, search | set2: color, blend weights
            struct Binding { std::size_t set; std::uint32_t slot; VkImageView view; VkSampler sampler; };
            const std::array<Binding, 6> writes{{
                {0u, 0u, s.color_view, s.smaa_linear_sampler},
                {1u, 0u, s.smaa_view[0], s.smaa_linear_sampler},
                {1u, 1u, s.smaa_view[2], s.smaa_point_sampler},
                {1u, 2u, s.smaa_view[3], s.smaa_point_sampler},
                {2u, 0u, s.color_view, s.smaa_linear_sampler},
                {2u, 1u, s.smaa_view[1], s.smaa_linear_sampler},
            }};
            for (const Binding &w : writes) {
                VkDescriptorImageInfo image_info{w.sampler, w.view,
                                                 VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL};
                VkWriteDescriptorSet write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
                write.dstSet = s.smaa_set[w.set];
                write.dstBinding = w.slot;
                write.descriptorCount = 1u;
                write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
                write.pImageInfo = &image_info;
                vkUpdateDescriptorSets(s.device, 1, &write, 0, nullptr);
            }
        }
        const std::array<VkRenderPass, 3> pass_for{s.smaa_pass[0], s.smaa_pass[1], s.fxaa_render_pass};
        for (std::size_t i = 0u; ok && i < 3u; ++i) {
            std::array<VkPipelineShaderStageCreateInfo, 2> stages{};
            stages[0] = VkPipelineShaderStageCreateInfo{
                VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
            stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
            stages[0].module = s.fxaa_vertex_shader;
            stages[0].pName = "main";
            stages[1] = VkPipelineShaderStageCreateInfo{
                VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
            stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
            stages[1].module = s.smaa_module[i];
            stages[1].pName = "main";
            VkPipelineVertexInputStateCreateInfo vertex_input{
                VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
            VkPipelineInputAssemblyStateCreateInfo input_assembly{
                VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
            input_assembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
            VkPipelineViewportStateCreateInfo viewport_state{
                VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
            viewport_state.viewportCount = 1u;
            viewport_state.scissorCount = 1u;
            VkPipelineRasterizationStateCreateInfo rasterization{
                VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
            rasterization.polygonMode = VK_POLYGON_MODE_FILL;
            rasterization.cullMode = VK_CULL_MODE_NONE;
            rasterization.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
            rasterization.lineWidth = 1.0f;
            VkPipelineMultisampleStateCreateInfo multisample{
                VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
            multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
            VkPipelineDepthStencilStateCreateInfo depth_stencil{
                VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
            VkPipelineColorBlendAttachmentState blend{};
            blend.colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT |
                                   VK_COLOR_COMPONENT_B_BIT | VK_COLOR_COMPONENT_A_BIT;
            VkPipelineColorBlendStateCreateInfo color_blend{
                VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
            color_blend.attachmentCount = 1u;
            color_blend.pAttachments = &blend;
            const std::array<VkDynamicState, 2> dynamic_states{VK_DYNAMIC_STATE_VIEWPORT,
                                                               VK_DYNAMIC_STATE_SCISSOR};
            VkPipelineDynamicStateCreateInfo dynamic{
                VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
            dynamic.dynamicStateCount = static_cast<std::uint32_t>(dynamic_states.size());
            dynamic.pDynamicStates = dynamic_states.data();
            VkGraphicsPipelineCreateInfo info{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
            info.stageCount = 2u;
            info.pStages = stages.data();
            info.pVertexInputState = &vertex_input;
            info.pInputAssemblyState = &input_assembly;
            info.pViewportState = &viewport_state;
            info.pRasterizationState = &rasterization;
            info.pMultisampleState = &multisample;
            info.pDepthStencilState = &depth_stencil;
            info.pColorBlendState = &color_blend;
            info.pDynamicState = &dynamic;
            info.layout = s.smaa_pipeline_layout[i];
            info.renderPass = pass_for[i];
            ok = vkCreateGraphicsPipelines(s.device, VK_NULL_HANDLE, 1, &info, nullptr,
                                           &s.smaa_pipeline[i]) == VK_SUCCESS;
        }
        s.smaa_ready = ok;
        std::fprintf(stderr, "[smaa] setup %s\n", ok ? "OK" : "FAILED (FXAA stays)");
    }

    // --- Color grading ([ColorGrading]) -------------------------------------
    s.color_grading_enabled = false;
    // Sharpen shares this same pass/shader with color grading (see
    // shaders/color_grade.frag) -- either one alone is enough to create it,
    // and each applies independently of whether the other is on (grading
    // params fall back to identity below when ColorGrading.Enabled is
    // false, so a sharpen-only setup doesn't also apply the neon grade).
    const PostFxConfiguration &postfx_config = bloom_config.postfx;
    const bool postfx_wanted = postfx_config.dither_enabled ||
                               postfx_config.cas_enabled || postfx_config.vhs_enabled ||
                               postfx_config.time_of_day_enabled;
    if (bloom_config.initialized &&
        (bloom_config.color_grading.enabled || bloom_config.rendering.sharpen > 0.0f ||
         postfx_wanted)) {
        bool grading_ok = true;
        if (!create_attachment(kColorFormat,
                               VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT |
                                   VK_IMAGE_USAGE_TRANSFER_SRC_BIT,
                               VK_IMAGE_ASPECT_COLOR_BIT, s.grading_image, s.grading_memory,
                               s.grading_view)) {
            grading_ok = false;
        }
        if (grading_ok) {
            VkAttachmentDescription grading_attachment{};
            grading_attachment.format = kColorFormat;
            grading_attachment.samples = VK_SAMPLE_COUNT_1_BIT;
            grading_attachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
            grading_attachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
            grading_attachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
            grading_attachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
            grading_attachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            grading_attachment.finalLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
            VkAttachmentReference grading_color_ref{0u, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL};
            VkSubpassDescription grading_subpass{};
            grading_subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
            grading_subpass.colorAttachmentCount = 1u;
            grading_subpass.pColorAttachments = &grading_color_ref;
            VkRenderPassCreateInfo grading_render_pass_info{
                VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
            grading_render_pass_info.attachmentCount = 1u;
            grading_render_pass_info.pAttachments = &grading_attachment;
            grading_render_pass_info.subpassCount = 1u;
            grading_render_pass_info.pSubpasses = &grading_subpass;
            if (vkCreateRenderPass(s.device, &grading_render_pass_info, nullptr,
                                   &s.grading_render_pass) != VK_SUCCESS) {
                grading_ok = false;
            }
        }
        if (grading_ok) {
            VkFramebufferCreateInfo grading_framebuffer_info{
                VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
            grading_framebuffer_info.renderPass = s.grading_render_pass;
            grading_framebuffer_info.attachmentCount = 1u;
            grading_framebuffer_info.pAttachments = &s.grading_view;
            grading_framebuffer_info.width = s.width;
            grading_framebuffer_info.height = s.height;
            grading_framebuffer_info.layers = 1u;
            if (vkCreateFramebuffer(s.device, &grading_framebuffer_info, nullptr,
                                    &s.grading_framebuffer) != VK_SUCCESS) {
                grading_ok = false;
            }
        }
        if (grading_ok && (!create_shader_module(s, kBloomVertSpv, sizeof(kBloomVertSpv),
                                                 s.grading_vertex_shader) ||
                          !create_shader_module(s, kColorGradeFragSpv, sizeof(kColorGradeFragSpv),
                                                s.grading_fragment_shader))) {
            grading_ok = false;
        }
        if (grading_ok) {
            VkSamplerCreateInfo grading_sampler_info{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
            grading_sampler_info.magFilter = VK_FILTER_LINEAR;
            grading_sampler_info.minFilter = VK_FILTER_LINEAR;
            grading_sampler_info.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            grading_sampler_info.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            grading_sampler_info.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            grading_sampler_info.maxAnisotropy = 1.0f;
            if (vkCreateSampler(s.device, &grading_sampler_info, nullptr, &s.grading_sampler) !=
                VK_SUCCESS) {
                grading_ok = false;
            }
        }
        if (grading_ok) {
            VkDescriptorSetLayoutBinding grading_binding{};
            grading_binding.binding = 0u;
            grading_binding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            grading_binding.descriptorCount = 1u;
            grading_binding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
            VkDescriptorSetLayoutCreateInfo grading_layout_info{
                VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
            grading_layout_info.bindingCount = 1u;
            grading_layout_info.pBindings = &grading_binding;
            if (vkCreateDescriptorSetLayout(s.device, &grading_layout_info, nullptr,
                                            &s.grading_descriptor_layout) != VK_SUCCESS) {
                grading_ok = false;
            }
        }
        if (grading_ok) {
            const VkDescriptorPoolSize grading_pool_size{
                VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1u};
            VkDescriptorPoolCreateInfo grading_pool_info{
                VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
            grading_pool_info.maxSets = 1u;
            grading_pool_info.poolSizeCount = 1u;
            grading_pool_info.pPoolSizes = &grading_pool_size;
            if (vkCreateDescriptorPool(s.device, &grading_pool_info, nullptr,
                                       &s.grading_descriptor_pool) != VK_SUCCESS) {
                grading_ok = false;
            }
        }
        if (grading_ok) {
            VkDescriptorSetAllocateInfo grading_allocate{
                VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
            grading_allocate.descriptorPool = s.grading_descriptor_pool;
            grading_allocate.descriptorSetCount = 1u;
            grading_allocate.pSetLayouts = &s.grading_descriptor_layout;
            if (vkAllocateDescriptorSets(s.device, &grading_allocate, &s.grading_descriptor_set) !=
                VK_SUCCESS) {
                grading_ok = false;
            } else {
                // Reads whichever image is "current" at this stage of the
                // pass chain -- fxaa_image if FXAA is active (grading runs
                // after it), else color_image directly. s.fxaa_enabled is
                // already finalized above by this point.
                VkDescriptorImageInfo grading_image_info{};
                grading_image_info.sampler = s.grading_sampler;
                grading_image_info.imageView = s.fxaa_enabled ? s.fxaa_view : s.color_view;
                grading_image_info.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
                VkWriteDescriptorSet grading_write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
                grading_write.dstSet = s.grading_descriptor_set;
                grading_write.descriptorCount = 1u;
                grading_write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
                grading_write.pImageInfo = &grading_image_info;
                vkUpdateDescriptorSets(s.device, 1, &grading_write, 0, nullptr);
            }
        }
        if (grading_ok) {
            VkPushConstantRange grading_push_range{};
            grading_push_range.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
            grading_push_range.size = sizeof(ColorGradePushConstants);
            VkPipelineLayoutCreateInfo grading_pipeline_layout_info{
                VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
            grading_pipeline_layout_info.setLayoutCount = 1u;
            grading_pipeline_layout_info.pSetLayouts = &s.grading_descriptor_layout;
            grading_pipeline_layout_info.pushConstantRangeCount = 1u;
            grading_pipeline_layout_info.pPushConstantRanges = &grading_push_range;
            if (vkCreatePipelineLayout(s.device, &grading_pipeline_layout_info, nullptr,
                                       &s.grading_pipeline_layout) != VK_SUCCESS) {
                grading_ok = false;
            }
        }
        if (grading_ok) {
            std::array<VkPipelineShaderStageCreateInfo, 2> grading_stages{};
            grading_stages[0] = VkPipelineShaderStageCreateInfo{
                VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
            grading_stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
            grading_stages[0].module = s.grading_vertex_shader;
            grading_stages[0].pName = "main";
            grading_stages[1] = VkPipelineShaderStageCreateInfo{
                VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
            grading_stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
            grading_stages[1].module = s.grading_fragment_shader;
            grading_stages[1].pName = "main";

            VkPipelineVertexInputStateCreateInfo grading_vertex_input{
                VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
            VkPipelineInputAssemblyStateCreateInfo grading_input_assembly{
                VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
            grading_input_assembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
            VkPipelineViewportStateCreateInfo grading_viewport_state{
                VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
            grading_viewport_state.viewportCount = 1u;
            grading_viewport_state.scissorCount = 1u;
            VkPipelineRasterizationStateCreateInfo grading_rasterization{
                VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
            grading_rasterization.polygonMode = VK_POLYGON_MODE_FILL;
            grading_rasterization.cullMode = VK_CULL_MODE_NONE;
            grading_rasterization.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
            grading_rasterization.lineWidth = 1.0f;
            VkPipelineMultisampleStateCreateInfo grading_multisample{
                VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
            grading_multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
            VkPipelineDepthStencilStateCreateInfo grading_depth_stencil{
                VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
            VkPipelineColorBlendAttachmentState grading_blend{};
            grading_blend.colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT |
                VK_COLOR_COMPONENT_B_BIT | VK_COLOR_COMPONENT_A_BIT;
            VkPipelineColorBlendStateCreateInfo grading_color_blend{
                VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
            grading_color_blend.attachmentCount = 1u;
            grading_color_blend.pAttachments = &grading_blend;
            const std::array<VkDynamicState, 2> grading_dynamic_states{
                VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR};
            VkPipelineDynamicStateCreateInfo grading_dynamic{
                VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
            grading_dynamic.dynamicStateCount =
                static_cast<std::uint32_t>(grading_dynamic_states.size());
            grading_dynamic.pDynamicStates = grading_dynamic_states.data();

            VkGraphicsPipelineCreateInfo grading_info{
                VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
            grading_info.stageCount = static_cast<std::uint32_t>(grading_stages.size());
            grading_info.pStages = grading_stages.data();
            grading_info.pVertexInputState = &grading_vertex_input;
            grading_info.pInputAssemblyState = &grading_input_assembly;
            grading_info.pViewportState = &grading_viewport_state;
            grading_info.pRasterizationState = &grading_rasterization;
            grading_info.pMultisampleState = &grading_multisample;
            grading_info.pDepthStencilState = &grading_depth_stencil;
            grading_info.pColorBlendState = &grading_color_blend;
            grading_info.pDynamicState = &grading_dynamic;
            grading_info.layout = s.grading_pipeline_layout;
            grading_info.renderPass = s.grading_render_pass;
            grading_info.subpass = 0u;
            if (vkCreateGraphicsPipelines(s.device, VK_NULL_HANDLE, 1, &grading_info, nullptr,
                                          &s.grading_pipeline) != VK_SUCCESS) {
                grading_ok = false;
            }
        }
        s.color_grading_enabled = grading_ok;
        // Grading params fall back to identity when the grade itself is
        // off (a sharpen-only setup) -- otherwise a sharpen-only config
        // would silently also pick up whatever's in [ColorGrading]'s
        // saturation/contrast/tint fields even with Enabled=false.
        if (bloom_config.color_grading.enabled) {
            s.color_grading_saturation = bloom_config.color_grading.saturation;
            s.color_grading_contrast = bloom_config.color_grading.contrast;
            s.color_grading_brightness = bloom_config.color_grading.brightness;
            s.color_grading_tint[0] = bloom_config.color_grading.tint_r;
            s.color_grading_tint[1] = bloom_config.color_grading.tint_g;
            s.color_grading_tint[2] = bloom_config.color_grading.tint_b;
        } else {
            s.color_grading_saturation = 1.0f;
            s.color_grading_contrast = 1.0f;
            s.color_grading_brightness = 0.0f;
            s.color_grading_tint[0] = 1.0f;
            s.color_grading_tint[1] = 1.0f;
            s.color_grading_tint[2] = 1.0f;
        }
        s.color_grading_sharpen = bloom_config.rendering.sharpen;
        s.postfx = postfx_config;
        std::fprintf(stderr,
                    "[color-grading] setup %s grading_enabled=%d saturation=%.2f contrast=%.2f "
                    "sharpen=%.2f\n",
                    grading_ok ? "OK" : "FAILED (feature left disabled)",
                    bloom_config.color_grading.enabled ? 1 : 0, s.color_grading_saturation,
                    s.color_grading_contrast, s.color_grading_sharpen);
    }

    // --- Vice City sky fill ([SkyPalette]) ----------------------------------
    s.sky_palette_ready = false;
    if (bloom_config.initialized && bloom_config.postfx.sky_palette_enabled) {
        bool ok = create_shader_module(s, kBloomVertSpv, sizeof(kBloomVertSpv), s.sky_vertex_module) &&
                  create_shader_module(s, kSkyPaletteFragSpv, sizeof(kSkyPaletteFragSpv),
                                       s.sky_fragment_module);
        if (ok) {
            VkPushConstantRange push_range{VK_SHADER_STAGE_FRAGMENT_BIT, 0u, 32u};
            VkPipelineLayoutCreateInfo layout{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
            layout.pushConstantRangeCount = 1u;
            layout.pPushConstantRanges = &push_range;
            ok = vkCreatePipelineLayout(s.device, &layout, nullptr, &s.sky_pipeline_layout) == VK_SUCCESS;
        }
        if (ok) {
            std::array<VkPipelineShaderStageCreateInfo, 2> stages{};
            stages[0] = VkPipelineShaderStageCreateInfo{
                VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
            stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
            stages[0].module = s.sky_vertex_module;
            stages[0].pName = "main";
            stages[1] = VkPipelineShaderStageCreateInfo{
                VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
            stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
            stages[1].module = s.sky_fragment_module;
            stages[1].pName = "main";
            VkPipelineVertexInputStateCreateInfo vertex_input{
                VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
            VkPipelineInputAssemblyStateCreateInfo input_assembly{
                VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
            input_assembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
            VkPipelineViewportStateCreateInfo viewport_state{
                VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
            viewport_state.viewportCount = 1u;
            viewport_state.scissorCount = 1u;
            VkPipelineRasterizationStateCreateInfo rasterization{
                VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
            rasterization.polygonMode = VK_POLYGON_MODE_FILL;
            rasterization.cullMode = VK_CULL_MODE_NONE;
            rasterization.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
            rasterization.lineWidth = 1.0f;
            VkPipelineMultisampleStateCreateInfo multisample{
                VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
            multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
            // Sky pixels only: depth EQUAL against the reverse-Z far clear, no
            // depth write, premultiplied blend over what the game drew there.
            VkPipelineDepthStencilStateCreateInfo depth_stencil{
                VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
            depth_stencil.depthTestEnable = VK_TRUE;
            depth_stencil.depthWriteEnable = VK_FALSE;
            depth_stencil.depthCompareOp = VK_COMPARE_OP_EQUAL;
            VkPipelineColorBlendAttachmentState blend{};
            blend.blendEnable = VK_TRUE;
            blend.srcColorBlendFactor = VK_BLEND_FACTOR_ONE;
            blend.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
            blend.colorBlendOp = VK_BLEND_OP_ADD;
            blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
            blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
            blend.alphaBlendOp = VK_BLEND_OP_ADD;
            blend.colorWriteMask =
                VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT | VK_COLOR_COMPONENT_B_BIT;
            VkPipelineColorBlendStateCreateInfo color_blend{
                VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
            color_blend.attachmentCount = 1u;
            color_blend.pAttachments = &blend;
            const std::array<VkDynamicState, 2> dynamic_states{VK_DYNAMIC_STATE_VIEWPORT,
                                                               VK_DYNAMIC_STATE_SCISSOR};
            VkPipelineDynamicStateCreateInfo dynamic{
                VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
            dynamic.dynamicStateCount = static_cast<std::uint32_t>(dynamic_states.size());
            dynamic.pDynamicStates = dynamic_states.data();
            VkGraphicsPipelineCreateInfo info{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
            info.stageCount = 2u;
            info.pStages = stages.data();
            info.pVertexInputState = &vertex_input;
            info.pInputAssemblyState = &input_assembly;
            info.pViewportState = &viewport_state;
            info.pRasterizationState = &rasterization;
            info.pMultisampleState = &multisample;
            info.pDepthStencilState = &depth_stencil;
            info.pColorBlendState = &color_blend;
            info.pDynamicState = &dynamic;
            info.layout = s.sky_pipeline_layout;
            info.renderPass = s.render_pass;
            info.subpass = 0u;
            ok = vkCreateGraphicsPipelines(s.device, VK_NULL_HANDLE, 1, &info, nullptr,
                                           &s.sky_pipeline) == VK_SUCCESS;
        }
        s.sky_palette_ready = ok;
        std::fprintf(stderr, "[sky-palette] setup %s\n", ok ? "OK" : "FAILED (feature left disabled)");
    }

    // --- Volumetric clouds ([VolumetricClouds]) -----------------------------
    // Direct port of ge_gpu_backend_dx12.cpp's CloudWorks renderer; see the
    // VulkanGeState::cloud_* field comments above for the overall design.
    s.cloud_enabled = false;
    constexpr VkFormat kCloudFormat = VK_FORMAT_R16G16B16A16_SFLOAT;
    if (bloom_config.initialized && bloom_config.volumetric_clouds.enabled) {
        bool cloud_ok = true;
        const std::uint32_t divisor =
            std::clamp<std::uint32_t>(bloom_config.volumetric_clouds.downscale_div, 1u, 8u);
        std::uint32_t cloud_width = std::max(2u, (s.width + divisor - 1u) / divisor);
        std::uint32_t cloud_height = std::max(2u, (s.height + divisor - 1u) / divisor);
        cloud_width = (cloud_width + 1u) & ~1u;
        cloud_height = (cloud_height + 1u) & ~1u;
        const std::uint32_t march_width = std::max(1u, cloud_width / 2u);
        const std::uint32_t march_height = std::max(1u, cloud_height / 2u);

        s.cloud_history[0].width = s.cloud_history[1].width = cloud_width;
        s.cloud_history[0].height = s.cloud_history[1].height = cloud_height;
        s.cloud_march.width = march_width;
        s.cloud_march.height = march_height;

        if (!create_attachment(kCloudFormat,
                               VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT |
                                   VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                               VK_IMAGE_ASPECT_COLOR_BIT, s.cloud_history[0].image,
                               s.cloud_history[0].memory, s.cloud_history[0].view, cloud_width,
                               cloud_height) ||
            !create_attachment(kCloudFormat,
                               VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT |
                                   VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                               VK_IMAGE_ASPECT_COLOR_BIT, s.cloud_history[1].image,
                               s.cloud_history[1].memory, s.cloud_history[1].view, cloud_width,
                               cloud_height) ||
            !create_attachment(kCloudFormat,
                               VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT,
                               VK_IMAGE_ASPECT_COLOR_BIT, s.cloud_march.image, s.cloud_march.memory,
                               s.cloud_march.view, march_width, march_height)) {
            cloud_ok = false;
        }

        // Both history slots start life with genuinely undefined GPU memory
        // (VK_IMAGE_LAYOUT_UNDEFINED, never rendered into yet) until their
        // first turn as "current" in the march ping-pong. Whichever slot is
        // "previous" on the very first frame gets sampled by resolve before
        // that ever happens -- confirmed live as a real bug: even with its
        // contribution weighted to 0 (via the `valid` flag), IEEE 754
        // mix(a, b, 0) is `a + 0*(b-a)`, which is NaN (not a clean `a`) if
        // `b` happens to contain a NaN/Inf bit pattern from uninitialized
        // memory. Clearing both slots to a known "clear sky" value (0,0,0,1
        // -- zero light, full transmittance) up front removes this failure
        // mode at the source instead of relying on every downstream sample
        // site to defend against it.
        if (cloud_ok) {
            VkCommandBuffer clear_cmd = begin_one_shot(s);
            if (clear_cmd == VK_NULL_HANDLE) {
                cloud_ok = false;
            } else {
                const VkClearColorValue clear_sky{{0.0f, 0.0f, 0.0f, 1.0f}};
                VkImageSubresourceRange range{VK_IMAGE_ASPECT_COLOR_BIT, 0u, 1u, 0u, 1u};
                for (VkImage image : {s.cloud_history[0].image, s.cloud_history[1].image}) {
                    transition_image(clear_cmd, image, VK_IMAGE_LAYOUT_UNDEFINED,
                                     VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 0u,
                                     VK_ACCESS_TRANSFER_WRITE_BIT, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                                     VK_PIPELINE_STAGE_TRANSFER_BIT);
                    vkCmdClearColorImage(clear_cmd, image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                                         &clear_sky, 1u, &range);
                    transition_image(clear_cmd, image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                                     VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                                     VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_SHADER_READ_BIT,
                                     VK_PIPELINE_STAGE_TRANSFER_BIT,
                                     VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);
                }
                if (!end_one_shot(s, clear_cmd)) cloud_ok = false;
            }
        }

        if (cloud_ok) {
            VkAttachmentDescription cloud_attachment{};
            cloud_attachment.format = kCloudFormat;
            cloud_attachment.samples = VK_SAMPLE_COUNT_1_BIT;
            cloud_attachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
            cloud_attachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
            cloud_attachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
            cloud_attachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
            cloud_attachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            // Implicit layout transition to SHADER_READ_ONLY_OPTIMAL at
            // render-pass end -- every consumer (resolve reading march/
            // previous history, composite reading current history) only ever
            // samples these images, never anything else, so no explicit
            // barrier is needed between writing one of these targets and
            // reading it later, mirroring how bloom/fxaa/grading already do
            // this in this same function.
            cloud_attachment.finalLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            VkAttachmentReference cloud_color_ref{0u, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL};
            VkSubpassDescription cloud_subpass{};
            cloud_subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
            cloud_subpass.colorAttachmentCount = 1u;
            cloud_subpass.pColorAttachments = &cloud_color_ref;
            VkRenderPassCreateInfo cloud_render_pass_info{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
            cloud_render_pass_info.attachmentCount = 1u;
            cloud_render_pass_info.pAttachments = &cloud_attachment;
            cloud_render_pass_info.subpassCount = 1u;
            cloud_render_pass_info.pSubpasses = &cloud_subpass;
            if (vkCreateRenderPass(s.device, &cloud_render_pass_info, nullptr,
                                   &s.cloud_target_render_pass) != VK_SUCCESS) {
                cloud_ok = false;
            }
        }

        if (cloud_ok) {
            const auto make_cloud_framebuffer = [&](VulkanGeState::CloudTarget &target) {
                VkFramebufferCreateInfo info{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
                info.renderPass = s.cloud_target_render_pass;
                info.attachmentCount = 1u;
                info.pAttachments = &target.view;
                info.width = target.width;
                info.height = target.height;
                info.layers = 1u;
                return vkCreateFramebuffer(s.device, &info, nullptr, &target.framebuffer) ==
                       VK_SUCCESS;
            };
            if (!make_cloud_framebuffer(s.cloud_history[0]) ||
                !make_cloud_framebuffer(s.cloud_history[1]) || !make_cloud_framebuffer(s.cloud_march))
                cloud_ok = false;
        }

        if (cloud_ok && (!create_shader_module(s, kBloomVertSpv, sizeof(kBloomVertSpv),
                                               s.cloud_vertex_shader) ||
                        !create_shader_module(s, kCloudMarchFragSpv, sizeof(kCloudMarchFragSpv),
                                              s.cloud_march_fragment_shader) ||
                        !create_shader_module(s, kCloudResolveFragSpv, sizeof(kCloudResolveFragSpv),
                                              s.cloud_resolve_fragment_shader) ||
                        !create_shader_module(s, kCloudCompositeFragSpv,
                                              sizeof(kCloudCompositeFragSpv),
                                              s.cloud_composite_fragment_shader))) {
            cloud_ok = false;
        }

        if (cloud_ok) {
            VkSamplerCreateInfo cloud_sampler_info{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
            cloud_sampler_info.magFilter = VK_FILTER_LINEAR;
            cloud_sampler_info.minFilter = VK_FILTER_LINEAR;
            cloud_sampler_info.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            cloud_sampler_info.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            cloud_sampler_info.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            cloud_sampler_info.maxAnisotropy = 1.0f;
            if (vkCreateSampler(s.device, &cloud_sampler_info, nullptr, &s.cloud_sampler) !=
                VK_SUCCESS)
                cloud_ok = false;
        }

        if (cloud_ok) {
            VkDescriptorSetLayoutBinding ubo_binding{};
            ubo_binding.binding = 0u;
            ubo_binding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            ubo_binding.descriptorCount = 1u;
            ubo_binding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
            VkDescriptorSetLayoutCreateInfo ubo_layout_info{
                VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
            ubo_layout_info.bindingCount = 1u;
            ubo_layout_info.pBindings = &ubo_binding;
            if (vkCreateDescriptorSetLayout(s.device, &ubo_layout_info, nullptr,
                                            &s.cloud_ubo_only_layout) != VK_SUCCESS) {
                cloud_ok = false;
            }
        }
        if (cloud_ok) {
            std::array<VkDescriptorSetLayoutBinding, 3> dual_bindings{};
            dual_bindings[0].binding = 0u;
            dual_bindings[0].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            dual_bindings[0].descriptorCount = 1u;
            dual_bindings[0].stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
            dual_bindings[1].binding = 1u;
            dual_bindings[1].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            dual_bindings[1].descriptorCount = 1u;
            dual_bindings[1].stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
            dual_bindings[2].binding = 2u;
            dual_bindings[2].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            dual_bindings[2].descriptorCount = 1u;
            dual_bindings[2].stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
            VkDescriptorSetLayoutCreateInfo dual_layout_info{
                VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
            dual_layout_info.bindingCount = static_cast<std::uint32_t>(dual_bindings.size());
            dual_layout_info.pBindings = dual_bindings.data();
            if (vkCreateDescriptorSetLayout(s.device, &dual_layout_info, nullptr,
                                            &s.cloud_dual_texture_layout) != VK_SUCCESS) {
                cloud_ok = false;
            }
        }
        if (cloud_ok) {
            std::array<VkDescriptorPoolSize, 2> cloud_pool_sizes{
                VkDescriptorPoolSize{VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 3u},
                VkDescriptorPoolSize{VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 4u}};
            VkDescriptorPoolCreateInfo cloud_pool_info{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
            cloud_pool_info.maxSets = 3u;
            cloud_pool_info.poolSizeCount = static_cast<std::uint32_t>(cloud_pool_sizes.size());
            cloud_pool_info.pPoolSizes = cloud_pool_sizes.data();
            if (vkCreateDescriptorPool(s.device, &cloud_pool_info, nullptr,
                                       &s.cloud_descriptor_pool) != VK_SUCCESS) {
                cloud_ok = false;
            }
        }
        if (cloud_ok) {
            VkDescriptorSetAllocateInfo target_allocate{
                VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
            target_allocate.descriptorPool = s.cloud_descriptor_pool;
            target_allocate.descriptorSetCount = 1u;
            target_allocate.pSetLayouts = &s.cloud_ubo_only_layout;
            std::array<VkDescriptorSetLayout, 2> dual_layouts{s.cloud_dual_texture_layout,
                                                              s.cloud_dual_texture_layout};
            VkDescriptorSetAllocateInfo dual_allocate{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
            dual_allocate.descriptorPool = s.cloud_descriptor_pool;
            dual_allocate.descriptorSetCount = 2u;
            dual_allocate.pSetLayouts = dual_layouts.data();
            std::array<VkDescriptorSet, 2> dual_sets{};
            if (vkAllocateDescriptorSets(s.device, &target_allocate, &s.cloud_set_target) !=
                    VK_SUCCESS ||
                vkAllocateDescriptorSets(s.device, &dual_allocate, dual_sets.data()) != VK_SUCCESS) {
                cloud_ok = false;
            } else {
                s.cloud_set_resolve = dual_sets[0];
                s.cloud_set_composite = dual_sets[1];
            }
        }
        if (cloud_ok) {
            const auto make_ubo = [&](VkBuffer &buffer, VkDeviceMemory &memory, void *&mapped) {
                if (!create_buffer(s, sizeof(CloudUniforms), VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT,
                                   VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                                       VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                                   buffer, memory))
                    return false;
                return vkMapMemory(s.device, memory, 0, sizeof(CloudUniforms), 0, &mapped) ==
                       VK_SUCCESS;
            };
            if (!make_ubo(s.cloud_ubo_target, s.cloud_ubo_target_memory, s.cloud_ubo_target_mapped) ||
                !make_ubo(s.cloud_ubo_resolve, s.cloud_ubo_resolve_memory,
                         s.cloud_ubo_resolve_mapped) ||
                !make_ubo(s.cloud_ubo_composite, s.cloud_ubo_composite_memory,
                         s.cloud_ubo_composite_mapped)) {
                cloud_ok = false;
            }
        }
        if (cloud_ok) {
            // Write each set's fixed UBO binding once; the image bindings on
            // the two dual-texture sets change every frame (which history
            // buffer is "current" vs "previous" ping-pongs) and are updated
            // in record_clouds_into_world_target() instead.
            VkDescriptorBufferInfo target_buffer_info{s.cloud_ubo_target, 0, sizeof(CloudUniforms)};
            VkWriteDescriptorSet target_write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
            target_write.dstSet = s.cloud_set_target;
            target_write.dstBinding = 0u;
            target_write.descriptorCount = 1u;
            target_write.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            target_write.pBufferInfo = &target_buffer_info;

            VkDescriptorBufferInfo resolve_buffer_info{s.cloud_ubo_resolve, 0, sizeof(CloudUniforms)};
            VkWriteDescriptorSet resolve_write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
            resolve_write.dstSet = s.cloud_set_resolve;
            resolve_write.dstBinding = 2u;
            resolve_write.descriptorCount = 1u;
            resolve_write.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            resolve_write.pBufferInfo = &resolve_buffer_info;

            VkDescriptorBufferInfo composite_buffer_info{s.cloud_ubo_composite, 0,
                                                          sizeof(CloudUniforms)};
            VkWriteDescriptorSet composite_write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
            composite_write.dstSet = s.cloud_set_composite;
            composite_write.dstBinding = 2u;
            composite_write.descriptorCount = 1u;
            composite_write.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            composite_write.pBufferInfo = &composite_buffer_info;

            std::array<VkWriteDescriptorSet, 3> writes{target_write, resolve_write, composite_write};
            vkUpdateDescriptorSets(s.device, static_cast<std::uint32_t>(writes.size()), writes.data(),
                                   0, nullptr);
        }
        if (cloud_ok) {
            VkPipelineLayoutCreateInfo target_layout_info{
                VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
            target_layout_info.setLayoutCount = 1u;
            target_layout_info.pSetLayouts = &s.cloud_ubo_only_layout;
            VkPipelineLayoutCreateInfo dual_layout_info{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
            dual_layout_info.setLayoutCount = 1u;
            dual_layout_info.pSetLayouts = &s.cloud_dual_texture_layout;
            if (vkCreatePipelineLayout(s.device, &target_layout_info, nullptr,
                                       &s.cloud_target_pipeline_layout) != VK_SUCCESS ||
                vkCreatePipelineLayout(s.device, &dual_layout_info, nullptr,
                                       &s.cloud_dual_pipeline_layout) != VK_SUCCESS) {
                cloud_ok = false;
            }
        }
        if (cloud_ok) {
            const auto make_pipeline = [&](VkShaderModule fragment_shader, VkPipelineLayout layout,
                                           VkRenderPass render_pass, bool blend_and_depth_equal,
                                           VkPipeline &pipeline) {
                std::array<VkPipelineShaderStageCreateInfo, 2> stages{};
                stages[0] = VkPipelineShaderStageCreateInfo{
                    VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
                stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
                stages[0].module = s.cloud_vertex_shader;
                stages[0].pName = "main";
                stages[1] = VkPipelineShaderStageCreateInfo{
                    VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
                stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
                stages[1].module = fragment_shader;
                stages[1].pName = "main";

                VkPipelineVertexInputStateCreateInfo vertex_input{
                    VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
                VkPipelineInputAssemblyStateCreateInfo input_assembly{
                    VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
                input_assembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
                VkPipelineViewportStateCreateInfo viewport_state{
                    VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
                viewport_state.viewportCount = 1u;
                viewport_state.scissorCount = 1u;
                VkPipelineRasterizationStateCreateInfo rasterization{
                    VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
                rasterization.polygonMode = VK_POLYGON_MODE_FILL;
                rasterization.cullMode = VK_CULL_MODE_NONE;
                rasterization.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
                rasterization.lineWidth = 1.0f;
                VkPipelineMultisampleStateCreateInfo multisample{
                    VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
                multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;

                VkPipelineDepthStencilStateCreateInfo depth_stencil{
                    VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
                VkPipelineColorBlendAttachmentState blend{};
                if (blend_and_depth_equal) {
                    // Composite only: blend the premultiplied cloud result
                    // over the world target (ONE / INV_SRC_ALPHA on RGB,
                    // ZERO / ONE on alpha -- alpha here is composition
                    // metadata, not written back) and depth-test EQUAL
                    // against the reverse-Z clear (0.0) with no depth write,
                    // so clouds only fill sky pixels behind opaques, drawn
                    // inline into the still-open main GE render pass.
                    depth_stencil.depthTestEnable = VK_TRUE;
                    depth_stencil.depthWriteEnable = VK_FALSE;
                    depth_stencil.depthCompareOp = VK_COMPARE_OP_EQUAL;
                    blend.blendEnable = VK_TRUE;
                    blend.srcColorBlendFactor = VK_BLEND_FACTOR_ONE;
                    blend.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
                    blend.colorBlendOp = VK_BLEND_OP_ADD;
                    blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
                    blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
                    blend.alphaBlendOp = VK_BLEND_OP_ADD;
                    blend.colorWriteMask =
                        VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT | VK_COLOR_COMPONENT_B_BIT;
                } else {
                    blend.colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT |
                        VK_COLOR_COMPONENT_B_BIT | VK_COLOR_COMPONENT_A_BIT;
                }
                VkPipelineColorBlendStateCreateInfo color_blend{
                    VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
                color_blend.attachmentCount = 1u;
                color_blend.pAttachments = &blend;
                const std::array<VkDynamicState, 2> dynamic_states{VK_DYNAMIC_STATE_VIEWPORT,
                                                                    VK_DYNAMIC_STATE_SCISSOR};
                VkPipelineDynamicStateCreateInfo dynamic{
                    VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
                dynamic.dynamicStateCount = static_cast<std::uint32_t>(dynamic_states.size());
                dynamic.pDynamicStates = dynamic_states.data();

                VkGraphicsPipelineCreateInfo info{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
                info.stageCount = static_cast<std::uint32_t>(stages.size());
                info.pStages = stages.data();
                info.pVertexInputState = &vertex_input;
                info.pInputAssemblyState = &input_assembly;
                info.pViewportState = &viewport_state;
                info.pRasterizationState = &rasterization;
                info.pMultisampleState = &multisample;
                info.pDepthStencilState = &depth_stencil;
                info.pColorBlendState = &color_blend;
                info.pDynamicState = &dynamic;
                info.layout = layout;
                info.renderPass = render_pass;
                info.subpass = 0u;
                return vkCreateGraphicsPipelines(s.device, VK_NULL_HANDLE, 1, &info, nullptr,
                                                 &pipeline) == VK_SUCCESS;
            };
            if (!make_pipeline(s.cloud_march_fragment_shader, s.cloud_target_pipeline_layout,
                               s.cloud_target_render_pass, false, s.cloud_target_pipeline) ||
                !make_pipeline(s.cloud_resolve_fragment_shader, s.cloud_dual_pipeline_layout,
                               s.cloud_target_render_pass, false, s.cloud_resolve_pipeline) ||
                !make_pipeline(s.cloud_composite_fragment_shader, s.cloud_dual_pipeline_layout,
                               s.render_pass, true, s.cloud_composite_pipeline)) {
                cloud_ok = false;
            }
        }

        s.cloud_enabled = cloud_ok;
        std::fprintf(stderr,
                    "[clouds] setup %s history=%ux%u march=%ux%u downscale_div=%u\n",
                    cloud_ok ? "OK" : "FAILED (feature left disabled)", cloud_width, cloud_height,
                    march_width, march_height, divisor);
    }

    // 1x1 white texture, bound for untextured draws so one pipeline layout and
    // one descriptor slot serve every batch.
    const std::array<std::byte, 4> white{std::byte{0xFF}, std::byte{0xFF}, std::byte{0xFF},
                                         std::byte{0xFF}};
    VkSamplerCreateInfo dummy_sampler_info{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
    dummy_sampler_info.maxAnisotropy = 1.0f;
    VkSampler dummy_sampler = VK_NULL_HANDLE;
    if (vkCreateSampler(s.device, &dummy_sampler_info, nullptr, &dummy_sampler) != VK_SUCCESS) {
        error = "vkCreateSampler failed for the dummy texture";
        return false;
    }
    s.samplers.emplace(~0ull, dummy_sampler);
    if (!create_texture(s, 1u, 1u, std::span<const std::byte>(white.data(), white.size()),
                        dummy_sampler, s.dummy_texture)) {
        error = "failed to create the 1x1 dummy texture";
        return false;
    }

    s.report.graphics_pipeline_created = true;
    s.report.textured_pipeline_created = true;
    s.report.alpha_test_shader_active = true;
    s.report.fog_shader_active = true;
    s.report.complete_texture_function_shader_active = true;
    s.report.standard_alpha_blend_pipeline_active = true;
    s.report.observed_blend_modes_pipeline_active = true;
    s.report.color_write_mask_pipeline_active = true;
    s.report.base_texture_formats_active = true;
    s.report.frames_in_flight_capacity = 1u;
    return true;
}

// Native-swapchain present-path migration: builds a real VkSwapchainKHR
// against the surface ge_gpu_backend_set_native_window() just created, plus
// a minimal fullscreen-triangle blit pipeline that samples the already-
// rendered s.color_image and writes it straight into the acquired swapchain
// image -- replacing every CPU copy the existing readback/SDL path does
// (GPU->readback buffer, readback->swizzle buffer, swizzle->SDL texture)
// with a single GPU-side sample. Only ever called once per process (no
// resize/recreate handling yet -- a real limitation, not an oversight: this
// is still the experimental, opt-in (PSPRECOMP_VULKAN_SWAPCHAIN=1) path).
// Frees what depends on the swapchain images. The swapchain itself is replaced by the caller.
void destroy_swapchain_targets(VulkanGeState &s) noexcept {
    for (VkFramebuffer framebuffer : s.swapchain_framebuffers)
        if (framebuffer != VK_NULL_HANDLE) vkDestroyFramebuffer(s.device, framebuffer, nullptr);
    s.swapchain_framebuffers.clear();
    for (VkImageView view : s.swapchain_views)
        if (view != VK_NULL_HANDLE) vkDestroyImageView(s.device, view, nullptr);
    s.swapchain_views.clear();
    s.swapchain_images.clear();
}

// The part of the present setup that follows the window size: swapchain, its image views and
// one framebuffer per image. The render pass is created once and reused, since only the extent
// changes on a resize, never the format.
[[nodiscard]] bool create_swapchain_targets(VulkanGeState &s, VkSurfaceKHR surface,
                                            VkSwapchainKHR old_swapchain, std::string &error) {
    VkSurfaceCapabilitiesKHR capabilities{};
    vkGetPhysicalDeviceSurfaceCapabilitiesKHR(s.physical_device, surface, &capabilities);

    std::uint32_t format_count = 0u;
    vkGetPhysicalDeviceSurfaceFormatsKHR(s.physical_device, surface, &format_count, nullptr);
    std::vector<VkSurfaceFormatKHR> formats(format_count);
    vkGetPhysicalDeviceSurfaceFormatsKHR(s.physical_device, surface, &format_count, formats.data());
    VkSurfaceFormatKHR chosen_format = formats.empty()
        ? VkSurfaceFormatKHR{VK_FORMAT_B8G8R8A8_UNORM, VK_COLOR_SPACE_SRGB_NONLINEAR_KHR}
        : formats.front();
    // The game's frame is already gamma-encoded, so the surface must be a plain UNORM format: an
    // sRGB one would apply a second curve and wash every colour out. Drivers list formats in
    // different orders (Windows drivers often put an sRGB one first), so rank rather than trust
    // the first entry. macOS offers only B8G8R8A8_UNORM, so it still gets that one.
    const auto format_rank = [](VkFormat format) {
        if (format == kColorFormat) return 0;
        if (format == VK_FORMAT_B8G8R8A8_UNORM) return 1;
        if (format == VK_FORMAT_A8B8G8R8_UNORM_PACK32) return 2;
        return 9;
    };
    int best_rank = 9;
    for (const VkSurfaceFormatKHR &candidate : formats) {
        if (candidate.colorSpace != VK_COLOR_SPACE_SRGB_NONLINEAR_KHR) continue;
        if (format_rank(candidate.format) < best_rank) {
            best_rank = format_rank(candidate.format);
            chosen_format = candidate;
        }
    }

    std::uint32_t present_mode_count = 0u;
    vkGetPhysicalDeviceSurfacePresentModesKHR(s.physical_device, surface, &present_mode_count,
                                              nullptr);
    std::vector<VkPresentModeKHR> present_modes(present_mode_count);
    vkGetPhysicalDeviceSurfacePresentModesKHR(s.physical_device, surface, &present_mode_count,
                                              present_modes.data());
    // FIFO is the one present mode every Vulkan implementation must support
    // and is exactly what "flawless 60fps, no tearing/stutter" wants: vsync-
    // paced, no frame skipped or torn.
    VkPresentModeKHR present_mode = VK_PRESENT_MODE_FIFO_KHR;
    // PSPRECOMP_VULKAN_PRESENT_MODE = fifo (default) | mailbox | immediate | relaxed. FIFO is the
    // safe vsync mode; the others exist for high-refresh or variable-refresh displays, where
    // pacing a 60 Hz game against a fixed vblank can judder. Falls back to FIFO if unsupported.
    if (const char *wanted = VCS_ENV("PSPRECOMP_VULKAN_PRESENT_MODE"); wanted != nullptr && *wanted != '\0') {
        VkPresentModeKHR requested = VK_PRESENT_MODE_FIFO_KHR;
        if (std::strcmp(wanted, "mailbox") == 0) requested = VK_PRESENT_MODE_MAILBOX_KHR;
        else if (std::strcmp(wanted, "immediate") == 0) requested = VK_PRESENT_MODE_IMMEDIATE_KHR;
        else if (std::strcmp(wanted, "relaxed") == 0) requested = VK_PRESENT_MODE_FIFO_RELAXED_KHR;
        for (const VkPresentModeKHR mode : present_modes)
            if (mode == requested) present_mode = requested;
    }
    s.swapchain_present_mode = present_mode;

    VkExtent2D extent = capabilities.currentExtent;
    if (extent.width == 0u || extent.height == 0u) {
        error = "surface extent is zero (window minimised)";
        return false;
    }
    if (extent.width == 0xFFFFFFFFu) {
        extent.width = std::clamp(capabilities.minImageExtent.width, 1u, 16384u);
        extent.height = std::clamp(capabilities.minImageExtent.height, 1u, 16384u);
    }
    s.swapchain_extent = extent;
    s.swapchain_format = chosen_format.format;

    const std::uint32_t image_count = capabilities.maxImageCount == 0u
        ? std::max(3u, capabilities.minImageCount)
        : std::min(std::max(3u, capabilities.minImageCount), capabilities.maxImageCount);

    VkSwapchainCreateInfoKHR swapchain_info{VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR};
    swapchain_info.surface = surface;
    swapchain_info.minImageCount = image_count;
    swapchain_info.imageFormat = chosen_format.format;
    swapchain_info.imageColorSpace = chosen_format.colorSpace;
    swapchain_info.imageExtent = extent;
    swapchain_info.imageArrayLayers = 1u;
    swapchain_info.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
    swapchain_info.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
    swapchain_info.preTransform = capabilities.currentTransform;
    swapchain_info.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    swapchain_info.presentMode = present_mode;
    swapchain_info.clipped = VK_TRUE;
    swapchain_info.oldSwapchain = old_swapchain;
    if (vkCreateSwapchainKHR(s.device, &swapchain_info, nullptr, &s.swapchain) != VK_SUCCESS) {
        error = "vkCreateSwapchainKHR failed";
        return false;
    }

    std::uint32_t real_image_count = 0u;
    vkGetSwapchainImagesKHR(s.device, s.swapchain, &real_image_count, nullptr);
    s.swapchain_images.resize(real_image_count);
    vkGetSwapchainImagesKHR(s.device, s.swapchain, &real_image_count, s.swapchain_images.data());

    s.swapchain_views.resize(real_image_count);
    for (std::uint32_t i = 0u; i < real_image_count; ++i) {
        VkImageViewCreateInfo view_info{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
        view_info.image = s.swapchain_images[i];
        view_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
        view_info.format = s.swapchain_format;
        view_info.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        view_info.subresourceRange.levelCount = 1u;
        view_info.subresourceRange.layerCount = 1u;
        if (vkCreateImageView(s.device, &view_info, nullptr, &s.swapchain_views[i]) != VK_SUCCESS) {
            error = "vkCreateImageView failed for a swapchain image";
            return false;
        }
    }

    if (s.present_render_pass == VK_NULL_HANDLE) {
    VkAttachmentDescription present_attachment{};
    present_attachment.format = s.swapchain_format;
    present_attachment.samples = VK_SAMPLE_COUNT_1_BIT;
    present_attachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    present_attachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    present_attachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    present_attachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    present_attachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    present_attachment.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    VkAttachmentReference present_color_ref{0u, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL};
    VkSubpassDescription present_subpass{};
    present_subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    present_subpass.colorAttachmentCount = 1u;
    present_subpass.pColorAttachments = &present_color_ref;
    VkRenderPassCreateInfo present_render_pass_info{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
    present_render_pass_info.attachmentCount = 1u;
    present_render_pass_info.pAttachments = &present_attachment;
    present_render_pass_info.subpassCount = 1u;
    present_render_pass_info.pSubpasses = &present_subpass;
    if (vkCreateRenderPass(s.device, &present_render_pass_info, nullptr, &s.present_render_pass) !=
        VK_SUCCESS) {
        error = "vkCreateRenderPass failed for the present pass";
        return false;
    }
    }

    s.swapchain_framebuffers.resize(real_image_count);
    for (std::uint32_t i = 0u; i < real_image_count; ++i) {
        VkFramebufferCreateInfo framebuffer_info{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
        framebuffer_info.renderPass = s.present_render_pass;
        framebuffer_info.attachmentCount = 1u;
        framebuffer_info.pAttachments = &s.swapchain_views[i];
        framebuffer_info.width = extent.width;
        framebuffer_info.height = extent.height;
        framebuffer_info.layers = 1u;
        if (vkCreateFramebuffer(s.device, &framebuffer_info, nullptr,
                                &s.swapchain_framebuffers[i]) != VK_SUCCESS) {
            error = "vkCreateFramebuffer failed for a swapchain image";
            return false;
        }
    }

    return true;
}

[[nodiscard]] bool create_present_swapchain(VulkanGeState &s, VkSurfaceKHR surface,
                                            std::string &error) {
    if (!create_swapchain_targets(s, surface, VK_NULL_HANDLE, error)) return false;
    const bool bilinear =
        vcs_configuration().display.upscale_filter == DisplayUpscaleFilter::Bilinear;
    if (!create_shader_module(s, kBloomVertSpv, sizeof(kBloomVertSpv), s.present_vertex_shader) ||
        !create_shader_module(s, kPresentFragSpv, sizeof(kPresentFragSpv),
                              s.present_fragment_shader)) {
        error = "vkCreateShaderModule failed for the present shaders";
        return false;
    }

    VkSamplerCreateInfo sampler_info{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
    sampler_info.magFilter = bilinear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    sampler_info.minFilter = sampler_info.magFilter;
    sampler_info.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    sampler_info.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    sampler_info.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    sampler_info.maxAnisotropy = 1.0f;
    if (vkCreateSampler(s.device, &sampler_info, nullptr, &s.present_sampler) != VK_SUCCESS) {
        error = "vkCreateSampler failed for the present pass";
        return false;
    }

    VkDescriptorSetLayoutBinding present_binding{};
    present_binding.binding = 0u;
    present_binding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    present_binding.descriptorCount = 1u;
    present_binding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
    VkDescriptorSetLayoutCreateInfo present_layout_info{
        VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
    present_layout_info.bindingCount = 1u;
    present_layout_info.pBindings = &present_binding;
    if (vkCreateDescriptorSetLayout(s.device, &present_layout_info, nullptr,
                                    &s.present_descriptor_layout) != VK_SUCCESS) {
        error = "vkCreateDescriptorSetLayout failed for the present pass";
        return false;
    }

    // Two sets: one for the GPU frame, one for software-rendered frames (see present_software_frame).
    const VkDescriptorPoolSize present_pool_size{VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 2u};
    VkDescriptorPoolCreateInfo present_pool_info{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
    present_pool_info.maxSets = 2u;
    present_pool_info.poolSizeCount = 1u;
    present_pool_info.pPoolSizes = &present_pool_size;
    if (vkCreateDescriptorPool(s.device, &present_pool_info, nullptr,
                               &s.present_descriptor_pool) != VK_SUCCESS) {
        error = "vkCreateDescriptorPool failed for the present pass";
        return false;
    }

    VkDescriptorSetAllocateInfo present_allocate{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
    present_allocate.descriptorPool = s.present_descriptor_pool;
    present_allocate.descriptorSetCount = 1u;
    present_allocate.pSetLayouts = &s.present_descriptor_layout;
    if (vkAllocateDescriptorSets(s.device, &present_allocate, &s.present_descriptor_set) !=
        VK_SUCCESS) {
        error = "vkAllocateDescriptorSets failed for the present pass";
        return false;
    }
    if (vkAllocateDescriptorSets(s.device, &present_allocate, &s.sw_descriptor_set) != VK_SUCCESS) {
        error = "vkAllocateDescriptorSets failed for the software-frame present set";
        return false;
    }
    // s.color_view never changes address for the life of the backend (no
    // resize-recreate yet, matching this feature's current scope), so this
    // descriptor is written once here, not refreshed per frame.
    VkDescriptorImageInfo present_image_info{};
    present_image_info.sampler = s.present_sampler;
    // Same "current final image" selection finish_color_frame's readback
    // copy uses -- by the time this runs (triggered from window creation,
    // after create_backend has already finalized bloom/fxaa/grading), those
    // flags are already known.
    present_image_info.imageView = s.color_grading_enabled ? s.grading_view
        : (s.fxaa_enabled ? s.fxaa_view : s.color_view);
    present_image_info.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    VkWriteDescriptorSet present_write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
    present_write.dstSet = s.present_descriptor_set;
    present_write.descriptorCount = 1u;
    present_write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    present_write.pImageInfo = &present_image_info;
    vkUpdateDescriptorSets(s.device, 1, &present_write, 0, nullptr);

    VkPipelineLayoutCreateInfo present_pipeline_layout_info{
        VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
    present_pipeline_layout_info.setLayoutCount = 1u;
    present_pipeline_layout_info.pSetLayouts = &s.present_descriptor_layout;
    if (vkCreatePipelineLayout(s.device, &present_pipeline_layout_info, nullptr,
                               &s.present_pipeline_layout) != VK_SUCCESS) {
        error = "vkCreatePipelineLayout failed for the present pass";
        return false;
    }

    std::array<VkPipelineShaderStageCreateInfo, 2> present_stages{};
    present_stages[0] = VkPipelineShaderStageCreateInfo{
        VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
    present_stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    present_stages[0].module = s.present_vertex_shader;
    present_stages[0].pName = "main";
    present_stages[1] = VkPipelineShaderStageCreateInfo{
        VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO};
    present_stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    present_stages[1].module = s.present_fragment_shader;
    present_stages[1].pName = "main";

    VkPipelineVertexInputStateCreateInfo present_vertex_input{
        VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
    VkPipelineInputAssemblyStateCreateInfo present_input_assembly{
        VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
    present_input_assembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    VkPipelineViewportStateCreateInfo present_viewport_state{
        VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
    present_viewport_state.viewportCount = 1u;
    present_viewport_state.scissorCount = 1u;
    VkPipelineRasterizationStateCreateInfo present_rasterization{
        VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
    present_rasterization.polygonMode = VK_POLYGON_MODE_FILL;
    present_rasterization.cullMode = VK_CULL_MODE_NONE;
    present_rasterization.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
    present_rasterization.lineWidth = 1.0f;
    VkPipelineMultisampleStateCreateInfo present_multisample{
        VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
    present_multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
    VkPipelineDepthStencilStateCreateInfo present_depth_stencil{
        VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
    VkPipelineColorBlendAttachmentState present_blend{};
    present_blend.colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT |
        VK_COLOR_COMPONENT_B_BIT | VK_COLOR_COMPONENT_A_BIT;
    VkPipelineColorBlendStateCreateInfo present_color_blend{
        VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
    present_color_blend.attachmentCount = 1u;
    present_color_blend.pAttachments = &present_blend;
    const std::array<VkDynamicState, 2> present_dynamic_states{VK_DYNAMIC_STATE_VIEWPORT,
                                                               VK_DYNAMIC_STATE_SCISSOR};
    VkPipelineDynamicStateCreateInfo present_dynamic{
        VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
    present_dynamic.dynamicStateCount = static_cast<std::uint32_t>(present_dynamic_states.size());
    present_dynamic.pDynamicStates = present_dynamic_states.data();

    VkGraphicsPipelineCreateInfo present_pipeline_info{
        VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
    present_pipeline_info.stageCount = static_cast<std::uint32_t>(present_stages.size());
    present_pipeline_info.pStages = present_stages.data();
    present_pipeline_info.pVertexInputState = &present_vertex_input;
    present_pipeline_info.pInputAssemblyState = &present_input_assembly;
    present_pipeline_info.pViewportState = &present_viewport_state;
    present_pipeline_info.pRasterizationState = &present_rasterization;
    present_pipeline_info.pMultisampleState = &present_multisample;
    present_pipeline_info.pDepthStencilState = &present_depth_stencil;
    present_pipeline_info.pColorBlendState = &present_color_blend;
    present_pipeline_info.pDynamicState = &present_dynamic;
    present_pipeline_info.layout = s.present_pipeline_layout;
    present_pipeline_info.renderPass = s.present_render_pass;
    present_pipeline_info.subpass = 0u;
    if (vkCreateGraphicsPipelines(s.device, VK_NULL_HANDLE, 1, &present_pipeline_info, nullptr,
                                  &s.present_pipeline) != VK_SUCCESS) {
        error = "vkCreateGraphicsPipelines failed for the present pass";
        return false;
    }

    VkCommandBufferAllocateInfo present_cmd_allocate{
        VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
    present_cmd_allocate.commandPool = s.command_pool;
    present_cmd_allocate.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    present_cmd_allocate.commandBufferCount = 1u;
    if (vkAllocateCommandBuffers(s.device, &present_cmd_allocate, &s.present_command_buffer) !=
        VK_SUCCESS) {
        error = "vkAllocateCommandBuffers failed for the present pass";
        return false;
    }

    VkSemaphoreCreateInfo semaphore_info{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
    if (vkCreateSemaphore(s.device, &semaphore_info, nullptr, &s.present_image_acquired) !=
            VK_SUCCESS ||
        vkCreateSemaphore(s.device, &semaphore_info, nullptr, &s.present_render_finished) !=
            VK_SUCCESS ||
        vkCreateSemaphore(s.device, &semaphore_info, nullptr, &s.present_color_read_done) !=
            VK_SUCCESS) {
        error = "vkCreateSemaphore failed for the present pass";
        return false;
    }
    VkFenceCreateInfo present_fence_info{VK_STRUCTURE_TYPE_FENCE_CREATE_INFO};
    present_fence_info.flags = VK_FENCE_CREATE_SIGNALED_BIT;
    if (vkCreateFence(s.device, &present_fence_info, nullptr, &s.present_fence) != VK_SUCCESS) {
        error = "vkCreateFence failed for the present pass";
        return false;
    }

    // Bloom's glow composite is CPU-side only (finish_color_frame additively
    // blends bloom_rgba into frame_rgba after the CPU readback) -- this path
    // skips that readback entirely, so bloom would silently do nothing if
    // left on. Force it off rather than leave a feature that quietly stops
    // working.
    if (s.bloom_enabled) {
        s.bloom_enabled = false;
        std::fprintf(stderr,
            "[swapchain-migration] bloom disabled: its composite is CPU-side only and this path "
            "skips the CPU readback bloom depends on\n");
    }

    std::fprintf(stderr,
        "[swapchain-migration] real swapchain + present pipeline created: %ux%u format=%d "
        "images=%u present_mode=%d upscale=%s\n",
        s.swapchain_extent.width, s.swapchain_extent.height, static_cast<int>(s.swapchain_format),
        static_cast<std::uint32_t>(s.swapchain_images.size()), static_cast<int>(s.swapchain_present_mode), bilinear ? "bilinear" : "nearest");
    return true;
}

// Rebuilds the swapchain after a resize, a mode change or VK_ERROR_OUT_OF_DATE_KHR. Returns false
// while the window has no drawable area (minimised); the caller just skips presenting until it does.
[[nodiscard]] bool recreate_present_swapchain(VulkanGeState &s) {
    if (s.diagnostic_surface == VK_NULL_HANDLE || s.swapchain == VK_NULL_HANDLE) return false;
    VkSurfaceCapabilitiesKHR capabilities{};
    if (vkGetPhysicalDeviceSurfaceCapabilitiesKHR(s.physical_device, s.diagnostic_surface,
                                                   &capabilities) != VK_SUCCESS)
        return false;
    if (capabilities.currentExtent.width == 0u || capabilities.currentExtent.height == 0u)
        return false;
    vkDeviceWaitIdle(s.device);
    destroy_swapchain_targets(s);
    // The frame semaphores may be left signalled by a present that failed; nothing is in flight
    // after the wait above, so replace them and clear the dependency the next render would wait on.
    for (VkSemaphore *semaphore : {&s.present_image_acquired, &s.present_render_finished,
                                   &s.present_color_read_done}) {
        vkDestroySemaphore(s.device, *semaphore, nullptr);
        VkSemaphoreCreateInfo semaphore_info{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
        vkCreateSemaphore(s.device, &semaphore_info, nullptr, semaphore);
    }
    s.present_just_ran = false;
    const VkSwapchainKHR old_swapchain = s.swapchain;
    std::string error;
    const bool ok = create_swapchain_targets(s, s.diagnostic_surface, old_swapchain, error);
    vkDestroySwapchainKHR(s.device, old_swapchain, nullptr);
    if (!ok) {
        s.swapchain = VK_NULL_HANDLE;  // present falls back to the CPU readback path
        std::fprintf(stderr, "[swapchain] recreate failed (%s) -- falling back to readback present\n",
                     error.c_str());
        return false;
    }
    s.swapchain_needs_recreate = false;
    ++s.swapchain_recreations;
    std::fprintf(stderr, "[swapchain] recreated for %ux%u (recreation %u)\n", s.swapchain_extent.width,
                 s.swapchain_extent.height, s.swapchain_recreations);
    return true;
}

// Packed as R8G8B8A8_UINT and consumed by psp_ge.frag as texture_control:
// byte0 = GE texture function (MODULATE/DECAL/BLEND/REPLACE/ADD), byte1 =
// use-alpha, byte2 = double-color, byte3 = whether texturing is enabled for
// this draw at all -- the shader's sole gate on sampling source_texture.
// Mirrors ge_gpu_backend_dx12.cpp's packed_texture_control() exactly. Every
// GeGpuVertex arrives from ge_renderer.cpp with this field zeroed (see its
// finalize_vertex(), "backend fills current texture function"); leaving it
// zero here means texture_control.w is always 0, the shader's texture
// branch never runs, and every draw shows its raw (often white/unused,
// since REPLACE-mode geometry doesn't care about vertex color) vertex color
// instead -- which is exactly the flat white screen this was chasing.
// Resolves a cache key to the entry that holds its pixels, following an alias if there is one.
[[nodiscard]] auto find_texture(VulkanGeState &s, std::uint64_t key) noexcept {
    auto found = s.textures.find(key);
    if (found != s.textures.end()) return found;
    if (const auto alias = s.texture_alias.find(key); alias != s.texture_alias.end()) {
        found = s.textures.find(alias->second);
        if (found != s.textures.end()) return found;
        s.texture_alias.erase(alias);  // the entry it pointed at was evicted
    }
    return s.textures.end();
}
[[nodiscard]] auto find_texture(const VulkanGeState &s, std::uint64_t key) noexcept {
    auto found = s.textures.find(key);
    if (found != s.textures.end()) return found;
    if (const auto alias = s.texture_alias.find(key); alias != s.texture_alias.end())
        return s.textures.find(alias->second);
    return s.textures.end();
}

[[nodiscard]] std::uint64_t texture_content_key(std::uint64_t signature, std::uint32_t width,
                                                std::uint32_t height, VkSampler sampler) noexcept {
    std::uint64_t hash = 1469598103934665603ull;
    for (const std::uint64_t v : {signature, std::uint64_t{width}, std::uint64_t{height},
                                  static_cast<std::uint64_t>(reinterpret_cast<std::uintptr_t>(sampler))}) {
        hash ^= v;
        hash *= 1099511628211ull;
    }
    return hash;
}

[[nodiscard]] std::uint32_t texture_scale_shift(const GeGpuDrawDescriptor &draw) noexcept {
    if (!draw.texture_enabled) return 0u;
    const VulkanGeState &s = state();
    const auto found = find_texture(s, texture_key(draw));
    return found == s.textures.end() ? 0u : found->second.scale_shift;
}

[[nodiscard]] std::uint32_t packed_texture_control(const GeGpuDrawDescriptor &draw,
                                                   bool enabled) noexcept {
    return (draw.texture_function & 0xFFu) |
           ((static_cast<std::uint32_t>(draw.texture_use_alpha ? 1u : 0u) |
             (texture_scale_shift(draw) << 4u) |
             ((!draw.through && vcs_configuration().textures.detail) ? 0x40u : 0u)) << 8u) |
           (static_cast<std::uint32_t>(draw.texture_double_color ? 1u : 0u) << 16u) |
           (static_cast<std::uint32_t>(enabled ? 1u : 0u) << 24u);
}

// Direct port of ge_gpu_backend_dx12.cpp's invert_cloud_matrix(): Gauss-Jordan
// in double precision. GE projection matrices are small, but the far plane
// can still make a float-only inverse needlessly fragile.
bool invert_cloud_matrix(const std::array<float, 16> &matrix,
                         std::array<double, 16> &inverse) noexcept {
    double rows[4][8]{};
    double scale = 0.0;
    for (std::size_t row = 0u; row < 4u; ++row) {
        for (std::size_t column = 0u; column < 4u; ++column) {
            const double value = matrix[column * 4u + row];
            if (!std::isfinite(value)) return false;
            rows[row][column] = value;
            scale = std::max(scale, std::abs(value));
        }
        rows[row][4u + row] = 1.0;
    }
    if (!(scale > 0.0)) return false;
    const double epsilon = scale * 1.0e-12;
    for (std::size_t column = 0u; column < 4u; ++column) {
        std::size_t pivot = column;
        for (std::size_t row = column + 1u; row < 4u; ++row) {
            if (std::abs(rows[row][column]) > std::abs(rows[pivot][column])) pivot = row;
        }
        if (std::abs(rows[pivot][column]) <= epsilon) return false;
        if (pivot != column) {
            for (std::size_t entry = 0u; entry < 8u; ++entry)
                std::swap(rows[pivot][entry], rows[column][entry]);
        }
        const double divisor = rows[column][column];
        for (double &entry : rows[column]) entry /= divisor;
        for (std::size_t row = 0u; row < 4u; ++row) {
            if (row == column) continue;
            const double factor = rows[row][column];
            for (std::size_t entry = 0u; entry < 8u; ++entry) rows[row][entry] -= factor * rows[column][entry];
        }
    }
    std::array<double, 16> result{};
    for (std::size_t row = 0u; row < 4u; ++row) {
        for (std::size_t column = 0u; column < 4u; ++column) {
            const double value = rows[row][4u + column];
            if (!std::isfinite(value)) return false;
            result[column * 4u + row] = value;
        }
    }
    inverse = result;
    return true;
}

// Picks the camera the cloud march should use. ge_gpu_backend_observe_camera
// is called for every draw during accumulation, regardless of which
// framebuffer-address bucket ends up "winning" the frame (see
// VulkanGeState::FrameBucket) -- so s.cloud_cameras can hold candidates from
// targets that never make it to the screen (reflections, minimap, scratch
// render targets), not just the real 3D world camera. An earlier version of
// this function picked the globally highest-occluding-weight candidate with
// no target filter at all; that let a non-rotating (or differently-rotating)
// camera from one of those other targets win, which is exactly what made the
// composited cloud layer look pinned to the screen/mouse instead of the
// world -- confirmed live by bypassing temporal resolve entirely (forcing a
// fresh full-resolution march every frame) and the symptom persisting, which
// ruled out reprojection and pointed back at camera selection. Filtering to
// `target_address` (the actual winning bucket for this frame) is the fix,
// mirroring ge_gpu_backend_dx12.cpp's kVcsWorldFramebuffer filter -- DX12
// needs a full framebuffer-feedback ancestor graph to compute the equivalent
// filter because it has to track many live render targets at once; this
// backend already knows the single target that won this frame outright.
const CloudCameraCandidate *select_cloud_camera(const VulkanGeState &s,
                                                 std::uint32_t target_address) noexcept {
    const CloudCameraCandidate *best = nullptr;
    for (const CloudCameraCandidate &candidate : s.cloud_cameras) {
        if (candidate.occluding_weight == 0u || candidate.target != target_address) continue;
        if (best == nullptr || candidate.occluding_weight > best->occluding_weight ||
            (candidate.occluding_weight == best->occluding_weight && candidate.weight > best->weight))
            best = &candidate;
    }
    return best;
}

// Direct port of ge_gpu_backend_dx12.cpp's cloud_present_constants(): folds
// the GE viewport into the camera's projection exactly as the transform
// constants do for native geometry, inverts it to recover view-space ray
// directions for the screen corners, and rotates those into world space
// using the GE view matrix's exact (unnormalized) inverse. See
// ge_cloud_camera_math.hpp for why that inverse is exact for every
// nonsingular GE view.
CloudUniforms cloud_present_constants(const VulkanGeState &s, std::uint32_t target_address) noexcept {
    CloudUniforms out{};
    const auto &config = vcs_configuration().volumetric_clouds;
    if (!config.enabled || s.cloud_cameras.empty()) return out;
    const CloudCameraCandidate *camera = select_cloud_camera(s, target_address);
    if (camera == nullptr) return out;

    GeCloudCameraFrame frame{};
    if (!ge_cloud_camera_frame_from_view(camera->view, frame)) return out;
    const float logical_width = frame_extent().width;
    const float logical_height = frame_extent().height;
    const float x_a = camera->viewport[0] * (2.0f / logical_width);
    const float y_a = camera->viewport[1] * (2.0f / logical_height);
    const float x_b =
        (camera->viewport[2] - camera->viewport[4]) * (2.0f / logical_width) - 1.0f;
    const float y_b =
        (camera->viewport[3] - camera->viewport[5]) * (2.0f / logical_height) - 1.0f;
    if (!std::isfinite(x_a) || !std::isfinite(y_a) || std::abs(x_a) < 1.0e-6f ||
        std::abs(y_a) < 1.0e-6f)
        return out;

    std::array<float, 16> effective_projection{};
    for (std::size_t column = 0u; column < 4u; ++column) {
        const std::size_t base = column * 4u;
        effective_projection[base + 0u] =
            x_a * camera->projection[base + 0u] + x_b * camera->projection[base + 3u];
        effective_projection[base + 1u] =
            -y_a * camera->projection[base + 1u] - y_b * camera->projection[base + 3u];
        effective_projection[base + 2u] = camera->projection[base + 2u];
        effective_projection[base + 3u] = camera->projection[base + 3u];
    }
    std::array<double, 16> inverse_projection{};
    if (!invert_cloud_matrix(effective_projection, inverse_projection)) return out;

    const auto view_direction = [&](double ndc_x, double ndc_y, std::array<double, 3> &direction) {
        constexpr double clip_z = 0.5;
        const std::array<double, 4> clip{ndc_x, ndc_y, clip_z, 1.0};
        std::array<double, 4> point{};
        for (std::size_t row = 0u; row < 4u; ++row)
            for (std::size_t column = 0u; column < 4u; ++column)
                point[row] += inverse_projection[column * 4u + row] * clip[column];
        if (!std::isfinite(point[3]) || std::abs(point[3]) < 1.0e-12) return false;
        for (std::size_t axis = 0u; axis < 3u; ++axis) {
            direction[axis] = point[axis] / point[3];
            if (!std::isfinite(direction[axis])) return false;
        }
        return true;
    };
    std::array<double, 3> center_view{}, right_view{}, up_view{};
    if (!view_direction(0.0, 0.0, center_view) || !view_direction(1.0, 0.0, right_view) ||
        !view_direction(0.0, 1.0, up_view))
        return out;
    const auto to_world = [&](const std::array<double, 3> &value) {
        return std::array<double, 3>{
            frame.view_to_world[0] * value[0] + frame.view_to_world[1] * value[1] +
                frame.view_to_world[2] * value[2],
            frame.view_to_world[3] * value[0] + frame.view_to_world[4] * value[1] +
                frame.view_to_world[5] * value[2],
            frame.view_to_world[6] * value[0] + frame.view_to_world[7] * value[1] +
                frame.view_to_world[8] * value[2]};
    };
    const std::array<double, 3> center_world = to_world(center_view);
    const std::array<double, 3> right_world = to_world(right_view);
    const std::array<double, 3> up_world = to_world(up_view);
    for (std::size_t axis = 0u; axis < 3u; ++axis) {
        const double ray_right = right_world[axis] - center_world[axis];
        const double ray_up = up_world[axis] - center_world[axis];
        if (!std::isfinite(ray_right) || !std::isfinite(ray_up) || !std::isfinite(center_world[axis]))
            return CloudUniforms{};
        out.ray_right_time[axis] = static_cast<float>(ray_right);
        out.ray_up_seed[axis] = static_cast<float>(ray_up);
        out.ray_forward_opacity[axis] = static_cast<float>(center_world[axis]);
        out.camera_settings[axis] = camera->camera_position[axis];
    }
    // NOTE: camera-input smoothing used to live here as a hard
    // round-to-grid quantization. Reverted: confirmed live to trade
    // continuous idle jitter for discrete jumps whenever a value crossed a
    // grid boundary, which only happens while the camera is moving --
    // exactly reproducing "flickers only when moving". Replaced with a
    // continuous exponential low-pass filter applied in
    // record_cloud_offscreen_passes (the caller, which can hold persistent
    // state across frames; this function is call-by-const-ref and cannot).
    out.ray_right_time[3] = static_cast<float>(s.frame_epoch) * (1.0f / 60.0f);
    out.ray_up_seed[3] = config.random_seed;
    out.ray_forward_opacity[3] = config.opacity;
    const std::uint32_t settings = std::clamp<std::uint32_t>(config.layers, 1u, 3u) |
        (std::clamp<std::uint32_t>(config.shadow_steps, 2u, 8u) << 8u) | 0x10000u;
    out.camera_settings[3] = std::bit_cast<float>(settings);
    out.coverage_speed = {config.coverage_low, config.coverage_mid, config.coverage_high, config.speed};
    out.sun_direction_day = {config.sun_direction_x, config.sun_direction_y, config.sun_direction_z,
                             config.day_progression};
    out.sun_color_atmosphere = {config.sun_color_r, config.sun_color_g, config.sun_color_b,
                                config.atmosphere_density};
    out.cloud_color_mist = {config.cloud_base_color_r, config.cloud_base_color_g,
                            config.cloud_base_color_b, config.mist};
    out.fog_color_start = {config.fog_color_r, config.fog_color_g, config.fog_color_b,
                           config.fog_start};
    out.brightness_padding[0] = config.brightness;
    // Vice City sky palette: cloud light shifts pink/peach toward dusk and dawn
    // and violet at night, on top of the soft pastel ini defaults.
    const VicePalette palette = vice_palette();
    if (palette.valid) {
        const auto tint = [&](std::array<float, 4> &color, const std::array<float, 3> &dusk,
                              const std::array<float, 3> &dark, float dusk_amount, float dark_amount) {
            for (std::size_t c = 0u; c < 3u; ++c) {
                color[c] += (dusk[c] - color[c]) * palette.golden * dusk_amount;
                color[c] += (dark[c] - color[c]) * palette.night * dark_amount;
            }
        };
        // The cloud pass fills the whole sky with its fog and sun colors, so
        // these stay gentle and pastel: only the cloud bodies pick up a soft
        // pink at dusk; the fog color is left alone.
        // Light the cloud sun a little warm toward sunset; the cloud body
        // color and brightness follow the hour-by-hour light table.
        const CloudLightKey light = cloud_light(vcs::game_clock_hours());
        // The cloud sun takes the same hue as the cloud light, so dim twilight
        // clouds stay violet instead of going muddy olive.
        for (std::size_t c = 0u; c < 3u; ++c)
            out.sun_color_atmosphere[c] += (light.color[c] - out.sun_color_atmosphere[c]) * 0.7f;
        out.cloud_color_mist[0] = light.color[0];
        out.cloud_color_mist[1] = light.color[1];
        out.cloud_color_mist[2] = light.color[2];
        out.brightness_padding[0] *= light.brightness;
        // Weather: each type has its own Vice City look (see WeatherLook): rain is
        // a blue-violet slate, fog pale and milky, cloudy soft lavender-grey. Dusk
        // keeps some pink through the weather, and overcast nights glow faintly
        // violet from the city instead of going black.
        const vcs::WeatherBlend weather = vcs::weather_look();
        if (weather.known && weather.look.overcast > 0.0f) {
            const vcs::WeatherLook &wx = weather.look;
            // Overcast decks stay soft: take the dawn/dusk pink down to a pastel
            // peach-grey before the weather color mixes in, so a cloudy sunrise is
            // not a uniform rose slab.
            const float table_luma = 0.299f * out.cloud_color_mist[0] + 0.587f * out.cloud_color_mist[1] +
                                     0.114f * out.cloud_color_mist[2];
            for (std::size_t c = 0u; c < 3u; ++c)
                out.cloud_color_mist[c] += (table_luma - out.cloud_color_mist[c]) * 0.55f * wx.overcast;
            const float amount = std::clamp(wx.overcast * (1.0f - 0.2f * palette.golden), 0.0f, 1.0f);
            for (std::size_t c = 0u; c < 3u; ++c) {
                out.cloud_color_mist[c] += (wx.cloud_color[c] - out.cloud_color_mist[c]) * amount;
                out.sun_color_atmosphere[c] += (wx.cloud_color[c] - out.sun_color_atmosphere[c]) * 0.6f * amount;
            }
            out.brightness_padding[0] *= 1.0f + (wx.cloud_brightness - 1.0f) * (1.0f - palette.night);
            if (palette.night > 0.0f) {
                const std::array<float, 3> glow{0.42f, 0.32f, 0.58f};
                for (std::size_t c = 0u; c < 3u; ++c)
                    out.cloud_color_mist[c] += (glow[c] - out.cloud_color_mist[c]) * 0.6f * palette.night * wx.overcast;
                out.brightness_padding[0] = std::max(out.brightness_padding[0],
                                                     (0.10f + 0.28f * palette.night * wx.overcast) * config.brightness);
            }
            for (std::size_t c = 0u; c < 3u; ++c)
                out.coverage_speed[c] = std::min(out.coverage_speed[c] * (1.0f + 1.2f * wx.coverage_boost), 0.92f);
        }
    }
    return out;
}

// Direct port of ge_gpu_backend_dx12.cpp's record_clouds_into_world_target(),
// restructured for Vulkan: the march/resolve passes are independent offscreen
// render passes (see s.cloud_target_render_pass), and the composite draw is
// issued by the caller as an ordinary batch inline in the still-open main GE
// render pass -- this function only fills in per-draw UBO contents, updates
// the two dual-texture descriptor sets' image bindings for this frame, and
// records the march/resolve passes. It does not touch s.color_image/
// s.depth_image or any render pass targeting them.
struct CloudFrameDraws {
    // False whenever no composite draw should happen this frame: clouds
    // disabled/unavailable, no camera candidate, or cloud_present_constants
    // rejected the camera (non-finite/singular matrix). Gates the caller's
    // FadingEntities-boundary composite draw so it never samples a
    // cloud_set_composite descriptor that record_cloud_offscreen_passes
    // never actually wrote for this frame (stale data from an earlier frame,
    // or fully uninitialized on the very first attempt).
    bool ready{};
    bool full_current_frame{};
    std::uint32_t current_history_index{};
};

CloudFrameDraws record_cloud_offscreen_passes(VulkanGeState &s, const CloudUniforms &clouds) noexcept {
    CloudFrameDraws result{};
    if (!s.cloud_enabled) return result;
    CloudUniforms base = clouds;
    const std::uint32_t settings = std::bit_cast<std::uint32_t>(base.camera_settings[3]);
    if ((settings & 0x10000u) == 0u) return result;

    const std::uint32_t previous_index = s.cloud_history_index & 1u;
    const std::uint32_t current_index = 1u - previous_index;
    VulkanGeState::CloudTarget &previous = s.cloud_history[previous_index];
    VulkanGeState::CloudTarget &current = s.cloud_history[current_index];
    const auto &config = vcs_configuration().volumetric_clouds;

    float camera_delta_squared = 0.0f;
    if (s.cloud_history_valid) {
        for (std::size_t axis = 0u; axis < 3u; ++axis) {
            const float delta = base.camera_settings[axis] - s.cloud_previous_camera[axis];
            camera_delta_squared += delta * delta;
        }
    }
    // VCS' third-person camera translates while orbiting the player.
    // Reproject ordinary translation against the physical cloud slabs in the
    // shader and reset only for an actual cut/teleport (50 world units in
    // one frame).
    const bool camera_cut = s.cloud_history_valid && camera_delta_squared > 2500.0f;

    // Camera-input smoothing (first a round-to-grid quantization, then a
    // low-pass filter) was tried here to damp standing-still flicker.
    // Reverted: standing-still flicker was actually fully fixed by removing
    // the g_Time offset from the march step dither (see CloudAtRay's step
    // computation below) -- this smoothing was solving an already-solved
    // problem, and its side effects (discrete snapping with quantization,
    // then visible lag/drag under fast rotation with the low-pass filter,
    // reported live as clouds "moving with my mouse" again) were net
    // negative. Camera inputs are used raw.
    // Sparse temporal march + resolve (the DX12-equivalent path) produces
    // severe blocky artifacts under real, continuous camera rotation on this
    // backend -- confirmed live, and not yet root-caused (the reprojection
    // math in cloud_resolve.frag's PreviousCloudNdc/PreviousCloudDirection
    // was never independently validated this session, unlike the march
    // path). Forcing a full-resolution march every frame bypasses resolve
    // and its reprojection entirely, trading some GPU cost (mitigated by
    // DownscaleDiv already halving the march target) for a known-clean
    // result. Revisit if the reprojection bug gets root-caused later.
    // Sparse temporal march + resolve (the DX12-equivalent path): two real
    // bugs in it were found and fixed this session (an ineffective safety-
    // rail floor, and an uninitialized-history NaN leak -- see
    // cloud_resolve.frag and the history-slot clear in this function's
    // cloud setup block), but live testing after both fixes still showed
    // severe blocky corruption, worse than before. There is at least one
    // more defect in this path that further inline fixes did not reach in
    // the time available. Given the zero-artifact requirement, forcing a
    // full-resolution march every frame is the only configuration verified
    // clean end-to-end; flicker (a separate, much smaller problem) is
    // addressed directly at its own root cause instead -- see
    // cloud_march.frag's smoothed density gate.
    const bool full_current_frame = true;
    (void)camera_cut;
    for (std::size_t axis = 0u; axis < 3u; ++axis)
        base.brightness_padding[1u + axis] =
            s.cloud_history_valid ? s.cloud_previous_camera[axis] : base.camera_settings[axis];
    constexpr std::array<std::array<float, 2>, 4> kBayerSlots{
        {{{0.0f, 0.0f}}, {{1.0f, 1.0f}}, {{1.0f, 0.0f}}, {{0.0f, 1.0f}}}};
    const auto &subpixel = kBayerSlots[s.cloud_temporal_frame & 3u];

    const auto copy_previous_basis = [&](std::array<float, 4> &destination, int which) {
        for (std::size_t axis = 0u; axis < 3u; ++axis)
            destination[axis] = s.cloud_history_valid
                ? s.cloud_previous_ray_basis[static_cast<std::size_t>(which) * 3u + axis]
                : (which == 0 ? base.ray_right_time[axis]
                   : which == 1 ? base.ray_up_seed[axis]
                                : base.ray_forward_opacity[axis]);
    };
    copy_previous_basis(base.previous_right_history, 0);
    copy_previous_basis(base.previous_up_blend, 1);
    copy_previous_basis(base.previous_forward_spatial, 2);
    base.previous_right_history[3] = s.cloud_history_valid && !camera_cut ? 1.0f : 0.0f;
    base.previous_up_blend[3] = std::clamp(config.temporal_blend, 0.0f, 0.95f);
    base.previous_forward_spatial[3] = std::clamp(config.temporal_denoise * 0.012f, 0.0f, 0.25f);
    base.texel_subpixel = {1.0f / static_cast<float>(current.width),
                           1.0f / static_cast<float>(current.height), subpixel[0], subpixel[1]};
    base.control = {full_current_frame ? 1.0f : 0.0f,
                    config.temporal_clamp <= 0.0f
                        ? 1000.0f
                        : std::clamp(config.temporal_clamp * 2.0f, 0.5f, 16.0f),
                    0.0f, 0.0f};

    VkCommandBuffer cmd = s.command_buffer;
    const auto draw_into = [&](VulkanGeState::CloudTarget &destination, VkPipeline pipeline,
                               VkPipelineLayout layout, VkDescriptorSet set) {
        VkClearValue clear{};
        clear.color = VkClearColorValue{{0.0f, 0.0f, 0.0f, 1.0f}};
        VkRenderPassBeginInfo begin{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
        begin.renderPass = s.cloud_target_render_pass;
        begin.framebuffer = destination.framebuffer;
        begin.renderArea.extent = {destination.width, destination.height};
        begin.clearValueCount = 1u;
        begin.pClearValues = &clear;
        vkCmdBeginRenderPass(cmd, &begin, VK_SUBPASS_CONTENTS_INLINE);
        VkViewport viewport{0.0f, 0.0f, static_cast<float>(destination.width),
                           static_cast<float>(destination.height), 0.0f, 1.0f};
        vkCmdSetViewport(cmd, 0, 1, &viewport);
        VkRect2D scissor{{0, 0}, {destination.width, destination.height}};
        vkCmdSetScissor(cmd, 0, 1, &scissor);
        vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline);
        vkCmdBindDescriptorSets(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, layout, 0, 1, &set, 0, nullptr);
        vkCmdDraw(cmd, 3u, 1u, 0u, 0u);
        vkCmdEndRenderPass(cmd);
        // The render pass's finalLayout (SHADER_READ_ONLY_OPTIMAL) performs
        // the image LAYOUT transition, but Vulkan's implicit external
        // subpass dependency (used because this render pass declares no
        // explicit VkSubpassDependency) carries no access-mask guarantee
        // beyond that -- it does not, on its own, guarantee this pass's
        // fragment-shader color writes are actually visible to a later
        // fragment-shader read of the same image as a sampled texture. An
        // explicit barrier is the only thing that actually makes that
        // promise. Every consumer of a cloud target (resolve reading march,
        // composite reading the resolved/direct history) samples it inside
        // the same command buffer shortly after this, so this is a real,
        // always-relevant gap, not a theoretical one -- added while
        // investigating a persistent, hard-to-reproduce garbage-block
        // artifact that survived every purely shader-side fix attempted.
        VkImageMemoryBarrier barrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
        barrier.oldLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        barrier.newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        barrier.image = destination.image;
        barrier.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0u, 1u, 0u, 1u};
        barrier.srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
        barrier.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
        vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
                             VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0, 0, nullptr, 0, nullptr, 1,
                             &barrier);
    };

    if (full_current_frame) {
        std::memcpy(s.cloud_ubo_target_mapped, &base, sizeof(CloudUniforms));
        draw_into(current, s.cloud_target_pipeline, s.cloud_target_pipeline_layout,
                 s.cloud_set_target);
    } else {
        CloudUniforms march_constants = base;
        march_constants.control[0] = 0.0f;
        std::memcpy(s.cloud_ubo_target_mapped, &march_constants, sizeof(CloudUniforms));
        draw_into(s.cloud_march, s.cloud_target_pipeline, s.cloud_target_pipeline_layout,
                 s.cloud_set_target);

        VkDescriptorImageInfo resolve_tex0{s.cloud_sampler, s.cloud_march.view,
                                           VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL};
        VkDescriptorImageInfo resolve_tex1{s.cloud_sampler, previous.view,
                                           VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL};
        std::array<VkWriteDescriptorSet, 2> resolve_writes{};
        resolve_writes[0] = VkWriteDescriptorSet{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
        resolve_writes[0].dstSet = s.cloud_set_resolve;
        resolve_writes[0].dstBinding = 0u;
        resolve_writes[0].descriptorCount = 1u;
        resolve_writes[0].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        resolve_writes[0].pImageInfo = &resolve_tex0;
        resolve_writes[1] = VkWriteDescriptorSet{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
        resolve_writes[1].dstSet = s.cloud_set_resolve;
        resolve_writes[1].dstBinding = 1u;
        resolve_writes[1].descriptorCount = 1u;
        resolve_writes[1].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        resolve_writes[1].pImageInfo = &resolve_tex1;
        vkUpdateDescriptorSets(s.device, static_cast<std::uint32_t>(resolve_writes.size()),
                               resolve_writes.data(), 0, nullptr);

        std::memcpy(s.cloud_ubo_resolve_mapped, &base, sizeof(CloudUniforms));
        draw_into(current, s.cloud_resolve_pipeline, s.cloud_dual_pipeline_layout,
                 s.cloud_set_resolve);
    }

    s.cloud_history_index = current_index;
    ++s.cloud_temporal_frame;
    for (std::size_t axis = 0u; axis < 3u; ++axis) {
        s.cloud_previous_camera[axis] = base.camera_settings[axis];
        s.cloud_previous_ray_basis[axis] = base.ray_right_time[axis];
        s.cloud_previous_ray_basis[3u + axis] = base.ray_up_seed[axis];
        s.cloud_previous_ray_basis[6u + axis] = base.ray_forward_opacity[axis];
    }
    s.cloud_history_valid = true;

    // Composite's UBO/descriptor set is prepared here (current history +
    // output resolution) but the draw itself is issued by the caller inline
    // in the main GE render pass, since that render pass is not open yet at
    // this point in frame recording.
    CloudUniforms composite_constants = base;
    composite_constants.control[0] = 0.0f;
    composite_constants.control[2] = static_cast<float>(s.width);
    composite_constants.control[3] = static_cast<float>(s.height);
    std::memcpy(s.cloud_ubo_composite_mapped, &composite_constants, sizeof(CloudUniforms));
    // binding1 is declared but unread by cloud_composite.frag (a screen-
    // space temporal blend that used to read it here was tried and reverted
    // -- see cloud_composite.frag's comment); still bound to a real,
    // known-initialized image rather than left stale so the descriptor
    // itself is never in an undefined state.
    VkDescriptorImageInfo composite_tex0{s.cloud_sampler, current.view,
                                         VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL};
    VkDescriptorImageInfo composite_tex1{s.cloud_sampler, current.view,
                                         VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL};
    std::array<VkWriteDescriptorSet, 2> composite_writes{};
    composite_writes[0] = VkWriteDescriptorSet{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
    composite_writes[0].dstSet = s.cloud_set_composite;
    composite_writes[0].dstBinding = 0u;
    composite_writes[0].descriptorCount = 1u;
    composite_writes[0].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    composite_writes[0].pImageInfo = &composite_tex0;
    composite_writes[1] = VkWriteDescriptorSet{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
    composite_writes[1].dstSet = s.cloud_set_composite;
    composite_writes[1].dstBinding = 1u;
    composite_writes[1].descriptorCount = 1u;
    composite_writes[1].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    composite_writes[1].pImageInfo = &composite_tex1;
    vkUpdateDescriptorSets(s.device, static_cast<std::uint32_t>(composite_writes.size()),
                           composite_writes.data(), 0, nullptr);

    result.ready = true;
    result.full_current_frame = full_current_frame;
    result.current_history_index = current_index;
    return result;
}

} // namespace

// ---------------------------------------------------------------------------
// Interface
// ---------------------------------------------------------------------------

bool initialize_ge_gpu_backend(std::string &error) {
    VulkanGeState &s = state();
    destroy_backend(s);
    s.report = GeGpuBackendReport{};
    s.display_framebuffer = 0u;
    s.frame_buckets.clear();
    s.submission_pending = false;
    s.frame_valid = false;
    s.has_last_winner = false;

    {
        const TexturesConfiguration &tx = vcs_configuration().textures;
        std::filesystem::path texture_directory = tx.directory;
        if (texture_directory.is_relative())
            texture_directory = vcs_configuration().executable_directory / texture_directory;
        vcs::texture_pipeline_configure(texture_directory.string(), tx.replacement, tx.dump_originals,
                                        tx.upscale, tx.upscale_scale, tx.upscale_sharpen);
    }
    const RenderingConfiguration &rendering = vcs_configuration().rendering;
    s.report.requested = rendering.backend == RenderingBackend::DirectX12
        ? GeGpuBackendKind::Vulkan : GeGpuBackendKind::Software;
    s.report.active = GeGpuBackendKind::Software;
    if (rendering.backend != RenderingBackend::DirectX12) {
        s.report.message = "Software GE backend active";
        error.clear();
        return true;
    }
    if (!rendering.dx12_ge_color) {
        s.report.message = "Native Vulkan GE available but DX12GEColor=false";
        error.clear();
        return true;
    }

    if (!create_backend(s, error)) {
        const std::string native_error = error;
        runtime_log_error("vulkan ge initialize", native_error);
        destroy_backend(s);
        const char *strict = VCS_ENV("PSPRECOMP_VULKAN_GE_STRICT");
        const bool strict_mode = strict != nullptr && *strict != '\0' && *strict != '0';
        s.report.requested = GeGpuBackendKind::Vulkan;
        s.report.active = GeGpuBackendKind::Software;
        s.report.message = "Native Vulkan/MoltenVK GE failed; using software GE: " + native_error;
        error = native_error;
        return !strict_mode;
    }

    s.enabled = true;
    s.report.active = GeGpuBackendKind::Vulkan;
    s.report.message = "Native Vulkan/MoltenVK GE active (screen-space path; requires "
                       "PSPRECOMP_GE_GPU_HW_TRANSFORM=0)";
    error.clear();
    return true;
}

void shutdown_ge_gpu_backend() noexcept {
    vcs::texture_pipeline_shutdown();
    destroy_backend(state());
}

void ge_gpu_backend_lock() noexcept { backend_mutex().lock(); }
void ge_gpu_backend_unlock() noexcept { backend_mutex().unlock(); }

bool ge_gpu_backend_active() noexcept { return state().enabled; }
bool ge_gpu_backend_transfer_ready() noexcept { return state().enabled; }
bool ge_gpu_backend_graphics_ready() noexcept { return state().enabled; }

void ge_gpu_backend_record_draw(const GeGpuDrawDescriptor &draw) noexcept {
    VulkanGeState &s = state();
    if (!s.enabled) return;
    ++s.report.captured_draws;
    if (draw.framebuffer_address != 0u) ++s.report.framebuffer_targets_observed;
}

void ge_gpu_backend_observe_camera(const std::array<float, 12> &view,
                                   const std::array<float, 16> &projection,
                                   const std::array<float, 6> &viewport,
                                   const std::array<float, 3> &camera_position,
                                   const GeGpuDrawDescriptor &draw,
                                   std::uint32_t vertex_weight) noexcept {
    VulkanGeState &s = state();
    if (!s.enabled || !vcs_configuration().volumetric_clouds.enabled || vertex_weight == 0u ||
        !draw.depth_test_enabled)
        return;
    if (!std::all_of(view.begin(), view.end(), [](float value) { return std::isfinite(value); }) ||
        !std::all_of(projection.begin(), projection.end(),
                     [](float value) { return std::isfinite(value); }) ||
        !std::all_of(viewport.begin(), viewport.end(),
                     [](float value) { return std::isfinite(value); }) ||
        !std::all_of(camera_position.begin(), camera_position.end(),
                     [](float value) { return std::isfinite(value); }))
        return;
    const std::uint32_t target = draw.framebuffer_address & 0x001FFFF0u;
    const auto found = std::find_if(
        s.cloud_cameras.begin(), s.cloud_cameras.end(),
        [&](const CloudCameraCandidate &candidate) {
            return candidate.target == target && candidate.view == view &&
                   candidate.projection == projection && candidate.viewport == viewport;
        });
    if (found != s.cloud_cameras.end()) {
        found->weight += vertex_weight;
        found->camera_position = camera_position;
        if ((draw.depth_function & 7u) >= 2u) found->occluding_weight += vertex_weight;
        return;
    }
    // Normal gameplay has only a handful of camera variants per frame. A hard
    // cap prevents malformed guest state from growing this host-only observer.
    if (s.cloud_cameras.size() >= 16u) return;
    const std::uint64_t occluding_weight = (draw.depth_function & 7u) >= 2u ? vertex_weight : 0u;
    s.cloud_cameras.push_back({view, projection, viewport, camera_position, target, vertex_weight,
                               occluding_weight});
}

bool ge_gpu_backend_stage_vertices(const GeGpuDrawDescriptor &,
                                   std::span<const GeGpuVertex>) noexcept {
    return false;
}

bool ge_gpu_backend_texture_needed(const GeGpuDrawDescriptor &draw) noexcept {
    VulkanGeState &s = state();
    if (!s.enabled || !draw.texture_enabled) return false;
    return find_texture(s, texture_key(draw)) == s.textures.end();
}

void ge_gpu_backend_prepare_texture_keys(GeGpuDrawDescriptor &draw) noexcept {
    if (draw.texture_cache_key_hint == 0u) draw.texture_cache_key_hint = texture_key(draw);
    if (draw.texture_image_key_hint == 0u)
        draw.texture_image_key_hint = draw.texture_cache_key_hint;
}

bool ge_gpu_backend_texture_signature_needed(const GeGpuDrawDescriptor &draw) noexcept {
    return ge_gpu_backend_texture_needed(draw);
}

bool ge_gpu_backend_is_framebuffer_feedback_texture(const GeGpuDrawDescriptor &) noexcept {
    // Framebuffer feedback (draws sampling a render target) is not implemented
    // in this revision; false keeps the renderer on its CPU path for those
    // draws rather than sampling an image this backend never produced.
    return false;
}

// Was a complete no-op stub (always returned shrink=1.0, i.e. "no
// correction"), unlike DX12's real implementation -- confirmed the direct
// cause of HUD elements (money counter, health bar) running off the edge of
// the screen on this Vulkan build specifically at a non-16:9 internal
// resolution (a MacBook's actual display is very often not 16:9 -- e.g.
// 1.6:1 on this machine -- once InternalResolutionMode::Desktop started
// querying the real display instead of silently defaulting to 1920x1080).
// The 2D HUD is authored in a fixed 480-wide screen space that has no idea
// the 3D view was widened to fill a wider-than-4:3 output; without shrinking
// HUD X coordinates back down by the same factor the view was stretched by,
// elements anchored near the original 480-wide right edge land past the
// actual (wider) output's right edge instead. Ported from DX12's
// implementation (ge_gpu_backend_dx12.cpp) using the same shared, portable
// widescreen_stretch_factor()/resolve_display_surface_dimensions() helpers
// (vcs_config.cpp) DX12 uses -- this math was never backend-specific, only
// never called from here. One difference: DX12 looks up a per-target
// logical_width (oversized offscreen render targets can use a wider space
// than the standard 480), which this backend does not currently track per
// target; falling back to the standard 480 reference width covers the
// reported bug (the ordinary display HUD) without needing that extra
// tracking machinery.
GeGpuWidescreenHud ge_gpu_backend_widescreen_hud(const GeGpuDrawDescriptor &) noexcept {
    GeGpuWidescreenHud hud{};
    VulkanGeState &s = state();
    if (!s.enabled) return hud;

    const VcsConfiguration &config = vcs_configuration();
    if (!config.initialized || !config.widescreen.enabled) return hud;

    const DisplaySurfaceDimensions output = resolve_display_surface_dimensions(config.display);
    const float shrink = widescreen_hud_factor(config, output.width, output.height);
    if (!std::isfinite(shrink) || shrink <= 0.0f || std::abs(shrink - 1.0f) < 1.0e-5f)
        return hud;

    const float kReferenceWidth = frame_extent().width;  // the logical frame, see frame_extent().
    hud.shrink = shrink;
    hud.display_scale_x = 1.0f;  // logical_width == kReferenceWidth with no per-target override.
    hud.source_center = kReferenceWidth * 0.5f;
    return hud;
}

void ge_gpu_backend_note_through_extent(const GeGpuDrawDescriptor &, float, float) noexcept {}

bool ge_gpu_backend_adopt_shared_texture(const GeGpuDrawDescriptor &) noexcept { return false; }

bool ge_gpu_backend_texture_available(const GeGpuDrawDescriptor &draw) noexcept {
    VulkanGeState &s = state();
    if (!s.enabled) return false;
    if (!draw.texture_enabled) return true;
    // This is the per-draw "is it cached" check ge_renderer.cpp makes every
    // frame for every textured draw, cached or not -- upload_decoded_texture
    // only runs again once a texture falls OUT of the cache, so a still-
    // resident texture that is drawn every frame would otherwise never
    // refresh its LRU stamp here and could be evicted out from under active
    // geometry the moment the cache fills. Stamping on the lookup itself
    // (not just on upload) is what makes "least recently *drawn*" true.
    const auto found = find_texture(s, texture_key(draw));
    if (found == s.textures.end()) return false;
    found->second.last_used_epoch = s.frame_epoch;
    return true;
}

bool ge_gpu_backend_upload_decoded_texture(const GeGpuDrawDescriptor &draw, std::uint32_t width,
                                           std::uint32_t height,
                                           std::span<const std::byte> rgba8) noexcept {
    VulkanGeState &s = state();
    if (!s.enabled || width == 0u || height == 0u || rgba8.empty()) return false;
    const std::uint64_t key = texture_key(draw);
    if (const auto found = find_texture(s, key); found != s.textures.end()) {
        found->second.last_used_epoch = s.frame_epoch;
        ++s.report.texture_cache_hits;
        return true;
    }
    // A new key whose pixels (and sampler) match an entry already resident shares that entry.
    const VkSampler sampler = get_sampler(s, draw);
    if (sampler == VK_NULL_HANDLE) return false;
    const std::uint64_t signature = vcs::texture_signature(rgba8);
    const std::uint64_t content = texture_content_key(signature, width, height, sampler);
    if (const auto known = s.texture_content.find(content); known != s.texture_content.end()) {
        const auto canonical = s.textures.find(known->second);
        if (canonical != s.textures.end() && canonical->second.source_signature == signature &&
            canonical->second.sampler == sampler) {
            s.texture_alias[key] = known->second;
            canonical->second.last_used_epoch = s.frame_epoch;
            ++s.report.texture_cache_hits;
            if (s.texture_alias.size() > 262144u) s.texture_alias.clear();  // they re-resolve on next upload
            return true;
        }
    }
    if (s.textures.size() >= s.texture_capacity) {
        // Evict the least-recently-used entry not touched this frame (same
        // rule DX12's cache uses). If everything resident happens to be in
        // use this very frame, there is nothing safe to evict; fail the
        // upload rather than fight this frame's own draws for a slot.
        auto victim = s.textures.end();
        for (auto it = s.textures.begin(); it != s.textures.end(); ++it) {
            if (it->second.last_used_epoch == s.frame_epoch) continue;
            if (victim == s.textures.end() ||
                it->second.last_used_epoch < victim->second.last_used_epoch)
                victim = it;
        }
        if (victim == s.textures.end()) {
            ++s.report.rejected_texture_decodes;
            return false;
        }
        flush_uploads_and_wait(s);  // the victim may be referenced by an unsubmitted upload
        destroy_texture_entry(s, victim->second);
        s.textures.erase(victim);
        ++s.report.texture_cache_evictions;
    }
    TextureEntry entry{};
    if (!create_texture(s, width, height, rgba8, sampler, entry)) {
        ++s.report.rejected_texture_decodes;
        return false;
    }
    entry.sampler = sampler;
    entry.source_signature = signature;
    // Hand the decoded texture to the background pipeline (dump / replacement /
    // upscale); a finished result is swapped in at a later frame boundary.
    std::uint32_t usage = 0u;
    if (draw.through) usage |= vcs::kUsageThrough;
    if (draw.hud_candidate) usage |= vcs::kUsageHudCandidate;
    if (draw.alpha_test_enabled) usage |= vcs::kUsageAlphaTest;
    if (draw.blend_enabled) usage |= vcs::kUsageBlend;
    if (draw.depth_write_enabled) usage |= vcs::kUsageDepthWrite;
    if ((draw.texture_function & 7u) == 3u) usage |= vcs::kUsageReplace;
    if ((draw.texture_function & 7u) == 4u) usage |= vcs::kUsageAdd;
    vcs::texture_pipeline_submit(key, rgba8, width, height, usage);
    entry.last_used_epoch = s.frame_epoch;
    s.textures.emplace(key, entry);
    if (s.texture_content.size() > 100000u) s.texture_content.clear();
    s.texture_content[content] = key;
    ++s.report.texture_images_created;
    ++s.report.decoded_texture_uploads;
    s.report.decoded_texture_bytes += static_cast<std::uint64_t>(width) * height * 4u;
    s.report.unique_texture_keys = s.textures.size();
    s.report.unique_texture_image_keys = s.textures.size();
    s.report.last_texture_key = key;
    s.report.last_texture_width = width;
    s.report.last_texture_height = height;
    s.report.last_texture_format = draw.texture_format;
    return true;
}

bool ge_gpu_backend_upload_decoded_texture_chain(
    const GeGpuDrawDescriptor &draw, std::span<const GeGpuDecodedMipLevel> levels) noexcept {
    // Mip chains upload as their base level in this revision: sampling uses a
    // single level, so the rest would never be read.
    if (levels.empty()) return false;
    const GeGpuDecodedMipLevel &base = levels.front();
    return ge_gpu_backend_upload_decoded_texture(draw, base.width, base.height, base.rgba8);
}

bool ge_gpu_backend_upload_decoded_texture_chain_packed(const GeGpuDrawDescriptor &draw,
                                                        std::uint32_t base_width,
                                                        std::uint32_t base_height, std::uint32_t,
                                                        std::vector<std::byte> rgba8) noexcept {
    return ge_gpu_backend_upload_decoded_texture(
        draw, base_width, base_height, std::span<const std::byte>(rgba8.data(), rgba8.size()));
}

bool ge_gpu_backend_copy_last_texture_rgba(std::span<std::byte>) noexcept { return false; }

void ge_gpu_backend_accumulate_color_triangles(
    const GeGpuDrawDescriptor &draw, std::span<const GeGpuVertex> triangle_vertices) noexcept {
    VulkanGeState &s = state();
    if (!s.enabled || triangle_vertices.size() < 3u) return;
    // An empty scissor rectangle means the batch contributes nothing.
    if (draw.scissor_x1 < draw.scissor_x0 || draw.scissor_y1 < draw.scissor_y0) return;

    VkDescriptorSet descriptor = s.dummy_texture.descriptor;
    if (draw.texture_enabled) {
        const auto found = find_texture(s, texture_key(draw));
        if (found == s.textures.end()) {
            // The renderer has not decoded this texture yet. Drawing it with
            // the white dummy would paint untextured geometry over the frame,
            // which is worse than leaving the software result in place.
            ++s.report.game_textured_draws_without_texture;
            return;
        }
        descriptor = found->second.descriptor;
        ++s.report.textured_game_draw_calls;
    }

    const VkPipeline pipeline = get_pipeline(s, draw);
    if (pipeline == VK_NULL_HANDLE) {
        ++s.report.rejected_gpu_draws;
        return;
    }

    // Experimental HUD-at-output-resolution feature: this counts, per frame,
    // how many draws the classifier (gpu_draw.hud_candidate, ge_renderer.cpp)
    // would route to a separate HUD target, versus through-mode draws it
    // excludes as world effects, versus ordinary 3D draws -- proof the
    // classifier fires on real, sane numbers before any pixel is actually
    // rerouted. No rendering behavior changes here.
    if (VCS_ENV("PSPRECOMP_HUD_DIAG") != nullptr) {
        static std::uint64_t frame_marker = 0u;
        static std::uint64_t hud_candidate_draws = 0u;
        static std::uint64_t through_excluded_draws = 0u;
        static std::uint64_t world_draws = 0u;
        if (frame_marker != s.frame_epoch) {
            if (frame_marker != 0u) {
                std::fprintf(stderr,
                    "[hud-diag] frame=%llu hud_candidate=%llu through_excluded=%llu world=%llu\n",
                    static_cast<unsigned long long>(frame_marker),
                    static_cast<unsigned long long>(hud_candidate_draws),
                    static_cast<unsigned long long>(through_excluded_draws),
                    static_cast<unsigned long long>(world_draws));
            }
            frame_marker = s.frame_epoch;
            hud_candidate_draws = 0u;
            through_excluded_draws = 0u;
            world_draws = 0u;
        }
        if (draw.hud_candidate) ++hud_candidate_draws;
        else if (draw.through) ++through_excluded_draws;
        else ++world_draws;
    }

    if (VCS_ENV("PSPRECOMP_GE_GPU_DRAW_DIAG") != nullptr) {
        float min_y = triangle_vertices[0].y, max_y = triangle_vertices[0].y;
        float min_x = triangle_vertices[0].x, max_x = triangle_vertices[0].x;
        for (const GeGpuVertex &v : triangle_vertices) {
            min_y = std::min(min_y, v.y); max_y = std::max(max_y, v.y);
            min_x = std::min(min_x, v.x); max_x = std::max(max_x, v.x);
        }
        // Broadened: any draw spanning a large vertical range, regardless of
        // depth-test state (the depth_test==false filter caught nothing but
        // two harmless boot-time VRAM clears -- the real culprit apparently
        // does have depth testing on, so it's not a simple undepth-tested
        // overlay).
        if ((max_y - min_y) > 100.0f) {
            static std::unordered_set<std::uint64_t> seen;
            const std::uint64_t sig =
                (static_cast<std::uint64_t>(draw.framebuffer_address) << 32u) ^
                (static_cast<std::uint64_t>(draw.texture_address) << 16u) ^
                (static_cast<std::uint64_t>(draw.scissor_y0) << 8u) ^
                static_cast<std::uint64_t>(draw.scissor_y1);
            if (seen.insert(sig).second) {
                std::fprintf(stderr,
                    "[diag-draw] fb=0x%08X tex=0x%08X clear_mode=%d depth_test=%d "
                    "depth_write=%d depth_fn=%u blend=%d texture=%d texfunc=%u "
                    "scissor=[%d,%d,%d,%d] x=[%.1f,%.1f] y=[%.1f,%.1f] verts=%zu\n",
                    draw.framebuffer_address, draw.texture_address, draw.clear_mode ? 1 : 0,
                    draw.depth_test_enabled ? 1 : 0, draw.depth_write_enabled ? 1 : 0,
                    draw.depth_function, draw.blend_enabled ? 1 : 0, draw.texture_enabled ? 1 : 0,
                    draw.texture_function,
                    draw.scissor_x0, draw.scissor_y0, draw.scissor_x1, draw.scissor_y1,
                    min_x, max_x, min_y, max_y, triangle_vertices.size());
            }
        }
    }

    // Every draw goes into the bucket for its own target address; which
    // bucket actually becomes "the frame" is decided once, at
    // finish_color_frame() time, by comparing accumulated geometry across
    // all of them (see VulkanGeState::frame_buckets).
    const std::uint32_t address = draw.framebuffer_address & 0x001FFFF0u;
    VulkanGeState::FrameBucket *bucket = nullptr;
    for (VulkanGeState::FrameBucket &candidate : s.frame_buckets) {
        if (candidate.address == address) { bucket = &candidate; break; }
    }
    if (bucket == nullptr) {
        s.frame_buckets.push_back(VulkanGeState::FrameBucket{address, {}, {}});
        bucket = &s.frame_buckets.back();
    }

    Batch batch{};
    batch.first_vertex = static_cast<std::uint32_t>(bucket->vertices.size());
    batch.vertex_count =
        static_cast<std::uint32_t>(triangle_vertices.size() - triangle_vertices.size() % 3u);
    if (batch.vertex_count == 0u) return;
    batch.pipeline = pipeline;
    batch.framebuffer_format = draw.framebuffer_format;
    batch.descriptor = descriptor;
    batch.scissor = {draw.scissor_x0, draw.scissor_y0, draw.scissor_x1, draw.scissor_y1};
    batch.framebuffer_stride = draw.framebuffer_stride;
    batch.clear_mode = draw.clear_mode;
    batch.depth_test_enabled = draw.depth_test_enabled;
    batch.depth_write_enabled = draw.depth_write_enabled;
    if (blend_variant(draw) == 4u) {
        const std::uint32_t fixed = draw.blend_fix_source;
        batch.blend_constants = {static_cast<float>(fixed & 0xFFu) / 255.0f,
                                 static_cast<float>((fixed >> 8u) & 0xFFu) / 255.0f,
                                 static_cast<float>((fixed >> 16u) & 0xFFu) / 255.0f, 1.0f};
    }

    const std::uint32_t texture_control =
        packed_texture_control(draw, draw.texture_enabled);
    const std::size_t insert_offset = bucket->vertices.size();
    bucket->vertices.insert(bucket->vertices.end(), triangle_vertices.begin(),
                            triangle_vertices.begin() +
                                static_cast<std::ptrdiff_t>(batch.vertex_count));
    for (std::size_t i = insert_offset; i < bucket->vertices.size(); ++i)
        bucket->vertices[i].texture_control = texture_control;
    bucket->batches.push_back(batch);
    ++s.report.game_draw_calls;
    s.report.game_vertices += batch.vertex_count;
    s.report.game_triangles += batch.vertex_count / 3u;
    if (draw.depth_test_enabled) ++s.report.depth_tested_game_draw_calls;
    if (draw.depth_write_enabled) ++s.report.depth_writing_game_draw_calls;
    if (draw.alpha_test_enabled) ++s.report.alpha_tested_game_draw_calls;
    if (draw.fog_enabled) ++s.report.fogged_game_draw_calls;
}

// Builds the push-constant block for one hardware-transform draw, folding
// the viewport scale/offset directly into row0/1/2 exactly the way DX12's
// build_transform_constants() does (ge_gpu_backend_dx12.cpp) -- so this
// shader can stay a plain dot(row, p) per component, like DX12's VSMain,
// instead of carrying separate viewport constants. The one deliberate
// difference: DX12 negates the y terms there for D3D's y-up NDC; this does
// NOT, matching psp_ge.vert's existing y-down handling for Vulkan (see that
// shader's header comment).
[[nodiscard]] HwTransformPushConstants build_hw_transform_push_constants(
    const GeGpuHardwareTransform &hw) noexcept {
    HwTransformPushConstants pc{};
    const auto row = [&](std::size_t r) {
        return std::array<float, 4>{hw.model_to_clip[r], hw.model_to_clip[4u + r],
                                    hw.model_to_clip[8u + r], hw.model_to_clip[12u + r]};
    };
    const auto add_scaled = [](const std::array<float, 4> &a, float sa,
                               const std::array<float, 4> &b, float sb) {
        return std::array<float, 4>{a[0] * sa + b[0] * sb, a[1] * sa + b[1] * sb,
                                    a[2] * sa + b[2] * sb, a[3] * sa + b[3] * sb};
    };
    const auto clip_x = row(0u);
    const auto clip_y = row(1u);
    const auto clip_z = row(2u);
    const auto clip_w = row(3u);
    const float x_a = hw.viewport_scale_x * (2.0f / frame_extent().width);
    const float x_b = (hw.viewport_center_x - hw.viewport_offset_x) * (2.0f / frame_extent().width) - 1.0f;
    // No negation here (see header comment) -- Vulkan's y-down NDC wants the
    // natural sign, unlike D3D's y-up.
    const float y_a = hw.viewport_scale_y * (2.0f / frame_extent().height);
    const float y_b = (hw.viewport_center_y - hw.viewport_offset_y) * (2.0f / frame_extent().height) - 1.0f;
    constexpr float inv_depth = 1.0f / 65535.0f;
    const float z_a = hw.viewport_scale_z * inv_depth;
    const float z_b = hw.viewport_center_z * inv_depth;
    const auto store = [](float *dst, const std::array<float, 4> &src) {
        dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2]; dst[3] = src[3];
    };
    store(pc.row0, add_scaled(clip_x, x_a, clip_w, x_b));
    store(pc.row1, add_scaled(clip_y, y_a, clip_w, y_b));
    store(pc.row2, add_scaled(clip_z, z_a, clip_w, z_b));
    store(pc.row3, clip_w);
    pc.model_to_view_z[0] = hw.model_to_view_z[0];
    pc.model_to_view_z[1] = hw.model_to_view_z[1];
    pc.model_to_view_z[2] = hw.model_to_view_z[2];
    pc.model_to_view_z[3] = hw.model_to_view_z[3];
    pc.uv_scale_offset[0] = hw.uv_scale_u;
    pc.uv_scale_offset[1] = hw.uv_scale_v;
    pc.uv_scale_offset[2] = hw.uv_offset_u;
    pc.uv_scale_offset[3] = hw.uv_offset_v;
    pc.fog_parameters[0] = hw.fog_end;
    pc.fog_parameters[1] = hw.fog_slope;
    pc.transform_control[0] = 1u;
    pc.transform_control[1] = hw.depth_clip_enabled ? 1u : 0u;
    pc.transform_control[2] = hw.vertex_color_affine ? 1u : 0u;
    pc.vertex_color_mul[0] = hw.vertex_color_mul[0];
    pc.vertex_color_mul[1] = hw.vertex_color_mul[1];
    pc.vertex_color_mul[2] = hw.vertex_color_mul[2];
    pc.vertex_color_mul[3] = hw.vertex_color_mul[3];
    pc.vertex_color_add[0] = hw.vertex_color_add[0];
    pc.vertex_color_add[1] = hw.vertex_color_add[1];
    pc.vertex_color_add[2] = hw.vertex_color_add[2];
    pc.vertex_color_add[3] = hw.vertex_color_add[3];
    return pc;
}

// Shared by both accumulate_hardware_* entry points below: resolves this
// draw's texture descriptor (or bails the same way accumulate_color_triangles
// does when the renderer hasn't decoded it yet) and finds/creates this
// vblank's bucket for the draw's target address.
[[nodiscard]] bool prepare_hw_batch_target(VulkanGeState &s, const GeGpuDrawDescriptor &draw,
                                           VkDescriptorSet &descriptor,
                                           VulkanGeState::FrameBucket *&bucket) noexcept {
    if (!s.enabled) return false;
    if (draw.scissor_x1 < draw.scissor_x0 || draw.scissor_y1 < draw.scissor_y0) return false;
    descriptor = s.dummy_texture.descriptor;
    if (draw.texture_enabled) {
        const auto found = find_texture(s, texture_key(draw));
        if (found == s.textures.end()) {
            ++s.report.game_textured_draws_without_texture;
            return false;
        }
        descriptor = found->second.descriptor;
        ++s.report.textured_game_draw_calls;
    }
    const std::uint32_t address = draw.framebuffer_address & 0x001FFFF0u;
    bucket = nullptr;
    for (VulkanGeState::FrameBucket &candidate : s.frame_buckets) {
        if (candidate.address == address) { bucket = &candidate; break; }
    }
    if (bucket == nullptr) {
        s.frame_buckets.push_back(VulkanGeState::FrameBucket{address, {}, {}, {}, {}, {}, {}});
        bucket = &s.frame_buckets.back();
    }
    return true;
}

void ge_gpu_backend_accumulate_hardware_triangles(
    const GeGpuDrawDescriptor &draw, const GeGpuHardwareTransform &transform,
    std::span<const GeGpuVertex> vertices, std::span<const std::uint32_t> triangle_indices) noexcept {
    VulkanGeState &s = state();
    if (vertices.empty()) return;
    const std::size_t emitted_count = triangle_indices.empty() ? vertices.size()
                                                               : triangle_indices.size();
    if (emitted_count == 0u ||
        (transform.primitive == 4u ? emitted_count < 3u : (emitted_count % 3u) != 0u)) return;

    VkDescriptorSet descriptor{};
    VulkanGeState::FrameBucket *bucket = nullptr;
    if (!prepare_hw_batch_target(s, draw, descriptor, bucket)) return;

    const VkPipeline pipeline = get_hw_pipeline(s, draw, /*packed_0115=*/false,
                                                transform.cull_enabled,
                                                transform.accept_counter_clockwise);
    if (pipeline == VK_NULL_HANDLE) {
        ++s.report.rejected_gpu_draws;
        return;
    }

    HwTransformBatch batch{};
    batch.first_vertex = static_cast<std::uint32_t>(bucket->hw_vertices.size());
    batch.vertex_count = static_cast<std::uint32_t>(vertices.size());
    batch.first_index = static_cast<std::uint32_t>(bucket->hw_indices.size());
    batch.index_count = static_cast<std::uint32_t>(triangle_indices.size());
    batch.packed_0115 = false;
    batch.pipeline = pipeline;
    batch.descriptor = descriptor;
    batch.scissor = {draw.scissor_x0, draw.scissor_y0, draw.scissor_x1, draw.scissor_y1};
    if (blend_variant(draw) == 4u) {
        const std::uint32_t fixed = draw.blend_fix_source;
        batch.blend_constants = {static_cast<float>(fixed & 0xFFu) / 255.0f,
                                 static_cast<float>((fixed >> 8u) & 0xFFu) / 255.0f,
                                 static_cast<float>((fixed >> 16u) & 0xFFu) / 255.0f, 1.0f};
    }
    batch.constants = build_hw_transform_push_constants(transform);
    const std::uint32_t texture_control = packed_texture_control(draw, draw.texture_enabled);

    bucket->hw_vertices.insert(bucket->hw_vertices.end(), vertices.begin(), vertices.end());
    for (std::size_t i = batch.first_vertex; i < bucket->hw_vertices.size(); ++i)
        bucket->hw_vertices[i].texture_control = texture_control;
    if (!triangle_indices.empty())
        bucket->hw_indices.insert(bucket->hw_indices.end(), triangle_indices.begin(),
                                  triangle_indices.end());
    bucket->hw_batches.push_back(batch);

    const std::uint32_t logical = std::max<std::uint32_t>(1u, transform.logical_prim_batches);
    s.report.game_draw_calls += logical;
    s.report.game_triangles += transform.primitive == 4u
        ? (emitted_count > 2u ? emitted_count - 2u : 0u) : emitted_count / 3u;
    s.report.game_vertices += emitted_count;
    s.report.hw_transform_draw_calls += logical;
    s.report.hw_transform_vertices += vertices.size();
    s.report.hw_transform_prim_batches += logical;
    s.report.hw_transform_unique_vertices_decoded += transform.unique_vertices_decoded;
    s.report.hw_transform_index_reuses += transform.index_reuses;
    if (draw.depth_test_enabled) ++s.report.depth_tested_game_draw_calls;
    if (draw.depth_write_enabled) ++s.report.depth_writing_game_draw_calls;
    if (draw.alpha_test_enabled) ++s.report.alpha_tested_game_draw_calls;
    if (draw.fog_enabled) ++s.report.fogged_game_draw_calls;
}

bool ge_gpu_backend_accumulate_hardware_packed_0115(
    const GeGpuDrawDescriptor &draw, const GeGpuHardwareTransform &transform,
    std::span<const std::byte> packed_vertices, std::uint32_t vertex_count,
    std::span<const std::uint32_t> triangle_indices) noexcept {
    VulkanGeState &s = state();
    constexpr std::size_t kPackedStride = sizeof(Packed0115Vertex);
    if (vertex_count == 0u ||
        packed_vertices.size() != static_cast<std::size_t>(vertex_count) * kPackedStride)
        return false;
    const std::size_t emitted_count = triangle_indices.empty()
        ? static_cast<std::size_t>(vertex_count) : triangle_indices.size();
    if (emitted_count == 0u ||
        (transform.primitive == 4u ? emitted_count < 3u : (emitted_count % 3u) != 0u)) return false;

    VkDescriptorSet descriptor{};
    VulkanGeState::FrameBucket *bucket = nullptr;
    if (!prepare_hw_batch_target(s, draw, descriptor, bucket)) return false;

    const VkPipeline pipeline = get_hw_pipeline(s, draw, /*packed_0115=*/true,
                                                transform.cull_enabled,
                                                transform.accept_counter_clockwise);
    if (pipeline == VK_NULL_HANDLE) {
        ++s.report.rejected_gpu_draws;
        return false;
    }

    HwTransformBatch batch{};
    batch.first_vertex = static_cast<std::uint32_t>(bucket->hw_packed.size());
    batch.vertex_count = vertex_count;
    batch.first_index = static_cast<std::uint32_t>(bucket->hw_indices.size());
    batch.index_count = static_cast<std::uint32_t>(triangle_indices.size());
    batch.packed_0115 = true;
    batch.pipeline = pipeline;
    batch.descriptor = descriptor;
    batch.scissor = {draw.scissor_x0, draw.scissor_y0, draw.scissor_x1, draw.scissor_y1};
    if (blend_variant(draw) == 4u) {
        const std::uint32_t fixed = draw.blend_fix_source;
        batch.blend_constants = {static_cast<float>(fixed & 0xFFu) / 255.0f,
                                 static_cast<float>((fixed >> 8u) & 0xFFu) / 255.0f,
                                 static_cast<float>((fixed >> 16u) & 0xFFu) / 255.0f, 1.0f};
    }
    batch.constants = build_hw_transform_push_constants(transform);
    // Per-draw control words the packed-0115 shader can't carry per-vertex
    // (see psp_ge_hw_packed0115.vert's header comment). Bit layout matches
    // ge_renderer.cpp's pack_gpu_alpha_control()/pack_gpu_fog_control()
    // exactly (those are anonymous-namespace-local to that file, so this
    // mirrors rather than calls them) -- psp_ge.frag decodes alpha/fog
    // control words with this exact layout, shared by every GE path.
    batch.constants.draw_control[0] =
        (draw.alpha_test_enabled ? 1u : 0u) |
        ((draw.alpha_function & 7u) << 8u) |
        ((draw.alpha_reference & 0xFFu) << 16u) |
        ((draw.alpha_mask & 0xFFu) << 24u);
    batch.constants.draw_control[1] = packed_texture_control(draw, draw.texture_enabled);
    batch.constants.draw_control[2] = draw.texture_env;
    batch.constants.draw_control[3] =
        (vcs::remap_sky_color(draw.fog_color) & 0x00FFFFFFu) |
        (static_cast<std::uint32_t>(draw.fog_enabled ? 0xFFu : 0u) << 24u);

    bucket->hw_packed.resize(bucket->hw_packed.size() + vertex_count);
    std::memcpy(bucket->hw_packed.data() + batch.first_vertex, packed_vertices.data(),
               packed_vertices.size());
    if (!triangle_indices.empty())
        bucket->hw_indices.insert(bucket->hw_indices.end(), triangle_indices.begin(),
                                  triangle_indices.end());
    bucket->hw_batches.push_back(batch);

    const std::uint32_t logical = std::max<std::uint32_t>(1u, transform.logical_prim_batches);
    s.report.game_draw_calls += logical;
    s.report.game_triangles += transform.primitive == 4u
        ? (emitted_count > 2u ? emitted_count - 2u : 0u) : emitted_count / 3u;
    s.report.game_vertices += emitted_count;
    s.report.hw_transform_draw_calls += logical;
    s.report.hw_transform_vertices += vertex_count;
    s.report.hw_transform_prim_batches += logical;
    s.report.hw_transform_unique_vertices_decoded += transform.unique_vertices_decoded;
    s.report.hw_transform_index_reuses += transform.index_reuses;
    if (draw.depth_test_enabled) ++s.report.depth_tested_game_draw_calls;
    if (draw.depth_write_enabled) ++s.report.depth_writing_game_draw_calls;
    if (draw.alpha_test_enabled) ++s.report.alpha_tested_game_draw_calls;
    if (draw.fog_enabled) ++s.report.fogged_game_draw_calls;
    return true;
}

void ge_gpu_backend_set_native_window(void *native_window) noexcept {
    VulkanGeState &s = state();
    if (!s.enabled || native_window == nullptr) return;
    // Whether the swapchain present is used at all is a per-platform default
    // (platform/<os>/vulkan_platform_*.cpp); PSPRECOMP_VULKAN_SWAPCHAIN=1/0 forces it either way.
    static const bool migration_flag = [] {
        const char *value = VCS_ENV("PSPRECOMP_VULKAN_SWAPCHAIN");
        if (value == nullptr || *value == '\0') return vkplat::swapchain_default_enabled();
        return std::strcmp(value, "0") != 0;
    }();
    if (!migration_flag) return;
    if (vkplat::surface_instance_extensions().empty()) return;  // no surface path on this platform
    s.swapchain_migration_enabled = true;
    if (s.diagnostic_native_window == native_window && s.diagnostic_surface != VK_NULL_HANDLE) return;

    VkSurfaceKHR surface = VK_NULL_HANDLE;
    if (vkplat::create_surface(s.instance, native_window, surface) != VK_SUCCESS) {
        std::fprintf(stderr,
            "[swapchain] could not create a %s surface -- staying on the CPU readback present "
            "path\n", vkplat::platform_name());
        s.swapchain_migration_enabled = false;
        return;
    }
    s.diagnostic_surface = surface;
    s.diagnostic_native_window = native_window;

    VkBool32 supported = VK_FALSE;
    vkGetPhysicalDeviceSurfaceSupportKHR(s.physical_device, s.graphics_queue_family, surface,
                                        &supported);
    if (supported != VK_TRUE) {
        // The graphics queue must be able to present to this window; on the rare machine where it
        // cannot (a GPU that does not drive the display), keep the readback path.
        std::fprintf(stderr,
            "[swapchain] the graphics queue cannot present to this window -- staying on the CPU "
            "readback present path\n");
        s.swapchain_migration_enabled = false;
        return;
    }
    VkSurfaceCapabilitiesKHR capabilities{};
    vkGetPhysicalDeviceSurfaceCapabilitiesKHR(s.physical_device, surface, &capabilities);
    std::fprintf(stderr,
        "[swapchain] %s surface created: current_extent=%ux%u min_extent=%ux%u max_extent=%ux%u "
        "min_image_count=%u max_image_count=%u\n", vkplat::platform_name(),
        capabilities.currentExtent.width, capabilities.currentExtent.height,
        capabilities.minImageExtent.width, capabilities.minImageExtent.height,
        capabilities.maxImageExtent.width, capabilities.maxImageExtent.height,
        capabilities.minImageCount, capabilities.maxImageCount);

    std::string swapchain_error;
    if (!create_present_swapchain(s, surface, swapchain_error)) {
        std::fprintf(stderr,
            "[swapchain] swapchain/present pipeline creation failed (%s) -- staying on the CPU "
            "readback present path\n", swapchain_error.c_str());
        s.swapchain_migration_enabled = false;
    }
}

bool ge_gpu_backend_is_vulkan() noexcept { return true; }

void ge_gpu_backend_set_display_framebuffer(std::uint32_t address) noexcept {
    VulkanGeState &s = state();
    s.display_framebuffer = address & 0x001FFFF0u;
}

// Apple Silicon's GPU is tile-based (TBDR): unlike a desktop immediate-mode
// GPU, a scissor-rectangle or pipeline change mid-renderpass is not free --
// it can force extra tile-binning/visibility work, and VCS's screen-space
// path emits well over a thousand small batches a frame, each rebinding its
// own scissor/blend/descriptor even when several batches in a row share
// identical state (adjacent triangles of the same textured surface, split
// into separate PSP GE draw calls by the game itself, not by anything this
// backend does). Batches are appended to a bucket in strict draw order and
// their vertex ranges are always contiguous by construction (see
// ge_gpu_backend_accumulate_color_triangles), so merging an adjacent run
// that also shares pipeline/scissor/blend/descriptor/format into one wider
// vkCmdDraw is lossless -- same vertices, same order, same GPU state, just
// fewer state-change commands recorded and executed. Confirmed via
// PSPRECOMP_GE_GPU_TIMESTAMP_DIAG that GPU execution time itself (not CPU
// recording, which was already negligible) was the real cost driving
// airport-area frame drops, with draw/triangle counts too modest to explain
// it by raw fill/vertex work alone -- exactly the shape TBDR state-change
// overhead produces.
void coalesce_batches(std::vector<Batch> &batches, std::uint64_t &merged_away) noexcept {
    if (batches.size() < 2u) return;
    std::vector<Batch> merged;
    merged.reserve(batches.size());
    merged.push_back(batches.front());
    for (std::size_t i = 1u; i < batches.size(); ++i) {
        Batch &prev = merged.back();
        const Batch &cur = batches[i];
        const bool contiguous = prev.first_vertex + prev.vertex_count == cur.first_vertex;
        const bool same_state =
            prev.pipeline == cur.pipeline && prev.descriptor == cur.descriptor &&
            prev.framebuffer_format == cur.framebuffer_format &&
            prev.framebuffer_stride == cur.framebuffer_stride && prev.scissor == cur.scissor &&
            prev.blend_constants == cur.blend_constants;
        if (contiguous && same_state) {
            prev.vertex_count += cur.vertex_count;
            ++merged_away;
        } else {
            merged.push_back(cur);
        }
    }
    batches.swap(merged);
}

// Swaps in finished replacement / upscaled textures. Runs at a frame boundary
// (after the fence wait), so no in-flight draw still references the old image.
//
// Uploads are batched into one command buffer per frame and submitted WITHOUT
// waiting: on MoltenVK a submit-and-wait costs milliseconds however little it
// does, and doing that once per texture stalled the render thread for hundreds
// of milliseconds a second while streaming. The old image stays in use until the
// batch's own fence signals on a later frame, then the new one is swapped in.
struct PendingUploadItem {
    std::uint64_t key{};
    TextureEntry fresh{};
    std::uint32_t mip_levels{1u};
    VkSampler sampler{VK_NULL_HANDLE};
};
struct UploadBatch {
    VkFence fence{VK_NULL_HANDLE};
    VkBuffer staging{VK_NULL_HANDLE};
    VkDeviceMemory staging_memory{VK_NULL_HANDLE};
    std::byte *staging_ptr{nullptr};
    VkCommandBuffer cmd{VK_NULL_HANDLE};
    std::vector<PendingUploadItem> items;
    bool in_flight{false};
    bool broken{false};
    // Replaced images. The frame submitted just before a swap may still be reading the old one;
    // finish_color_frame_impl() waits for that frame at the start of the next call, so they
    // are destroyed one apply call later.
    std::vector<TextureEntry> retired;
    bool has_carry{false};
    vcs::TextureResult carry;  // finished but did not fit the previous batch
};
constexpr VkDeviceSize kUploadBatchBytes = 12ull * 1024ull * 1024ull;
constexpr std::size_t kUploadBatchMaxItems = 24u;

UploadBatch &upload_batch() {
    static UploadBatch batch;
    return batch;
}

namespace {
void record_texture_upload(VkCommandBuffer cmd, VkImage image, VkBuffer staging, VkDeviceSize offset,
                           std::uint32_t width, std::uint32_t height, std::uint32_t mip_levels) noexcept {
    const auto barrier = [&](std::uint32_t level, VkImageLayout from, VkImageLayout to,
                             VkAccessFlags src_access, VkAccessFlags dst_access,
                             VkPipelineStageFlags src_stage, VkPipelineStageFlags dst_stage) {
        VkImageMemoryBarrier b{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
        b.oldLayout = from;
        b.newLayout = to;
        b.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        b.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        b.image = image;
        b.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, level, 1u, 0u, 1u};
        b.srcAccessMask = src_access;
        b.dstAccessMask = dst_access;
        vkCmdPipelineBarrier(cmd, src_stage, dst_stage, 0, 0, nullptr, 0, nullptr, 1, &b);
    };
    // Whole chain to TRANSFER_DST in one barrier, then the copy into level 0.
    VkImageMemoryBarrier all{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    all.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    all.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    all.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    all.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    all.image = image;
    all.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0u, mip_levels, 0u, 1u};
    all.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0,
                         nullptr, 0, nullptr, 1, &all);
    VkBufferImageCopy region{};
    region.bufferOffset = offset;
    region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    region.imageSubresource.layerCount = 1u;
    region.imageExtent = {width, height, 1u};
    vkCmdCopyBufferToImage(cmd, staging, image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &region);
    std::int32_t mip_w = static_cast<std::int32_t>(width);
    std::int32_t mip_h = static_cast<std::int32_t>(height);
    for (std::uint32_t level = 1u; level < mip_levels; ++level) {
        barrier(level - 1u, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_TRANSFER_READ_BIT,
                VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT);
        const std::int32_t next_w = std::max(1, mip_w / 2);
        const std::int32_t next_h = std::max(1, mip_h / 2);
        VkImageBlit blit{};
        blit.srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, level - 1u, 0u, 1u};
        blit.srcOffsets[1] = {mip_w, mip_h, 1};
        blit.dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, level, 0u, 1u};
        blit.dstOffsets[1] = {next_w, next_h, 1};
        vkCmdBlitImage(cmd, image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, image,
                       VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &blit, VK_FILTER_LINEAR);
        barrier(level - 1u, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                VK_ACCESS_TRANSFER_READ_BIT, VK_ACCESS_SHADER_READ_BIT,
                VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);
        mip_w = next_w;
        mip_h = next_h;
    }
    barrier(mip_levels - 1u, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
            VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_SHADER_READ_BIT,
            VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);
}

} // namespace

// View + descriptor for an image whose contents are already uploaded.
[[nodiscard]] bool finish_texture_entry(VulkanGeState &s, TextureEntry &e, VkSampler sampler,
                                        std::uint32_t mip_levels) noexcept {
    VkImageViewCreateInfo view_info{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
    view_info.image = e.image;
    view_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
    view_info.format = kColorFormat;
    view_info.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    view_info.subresourceRange.levelCount = mip_levels;
    view_info.subresourceRange.layerCount = 1u;
    if (vkCreateImageView(s.device, &view_info, nullptr, &e.view) != VK_SUCCESS) return false;
    VkDescriptorSetAllocateInfo allocate{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
    allocate.descriptorPool = s.descriptor_pool;
    allocate.descriptorSetCount = 1u;
    allocate.pSetLayouts = &s.descriptor_layout;
    if (vkAllocateDescriptorSets(s.device, &allocate, &e.descriptor) != VK_SUCCESS) return false;
    VkDescriptorImageInfo image_descriptor{};
    image_descriptor.sampler = sampler;
    image_descriptor.imageView = e.view;
    image_descriptor.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    VkWriteDescriptorSet write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
    write.dstSet = e.descriptor;
    write.descriptorCount = 1u;
    write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    write.pImageInfo = &image_descriptor;
    vkUpdateDescriptorSets(s.device, 1, &write, 0, nullptr);
    e.sampler = sampler;
    ++s.report.texture_descriptor_sets_allocated;
    return true;
}

// The batch's GPU work is done: swap each finished image in (or discard it).
void finalize_upload_batch(VulkanGeState &s, UploadBatch &b, bool gpu_ok) noexcept {
    for (PendingUploadItem &item : b.items) {
        TextureEntry &fresh = item.fresh;
        const auto found = s.textures.find(item.key);
        bool swapped = false;
        if (gpu_ok && found != s.textures.end() && found->second.scale_shift == 0u &&
            finish_texture_entry(s, fresh, item.sampler, item.mip_levels)) {
            fresh.last_used_epoch = found->second.last_used_epoch;
            fresh.source_signature = found->second.source_signature;  // still the same pixels
            b.retired.push_back(found->second);
            found->second = fresh;
            swapped = true;
        }
        if (!swapped) destroy_texture_entry(s, fresh);
    }
    b.items.clear();
    if (b.cmd != VK_NULL_HANDLE) vkFreeCommandBuffers(s.device, s.command_pool, 1, &b.cmd);
    b.cmd = VK_NULL_HANDLE;
    b.in_flight = false;
}

void apply_texture_replacements(VulkanGeState &s) noexcept {
    UploadBatch &b = upload_batch();
    for (TextureEntry &old : b.retired) destroy_texture_entry(s, old);
    b.retired.clear();
    if (b.broken) return;
    if (b.in_flight) {
        if (vkGetFenceStatus(s.device, b.fence) == VK_NOT_READY) return;
        finalize_upload_batch(s, b, true);
    }
    if (b.fence == VK_NULL_HANDLE) {
        VkFenceCreateInfo fence_info{VK_STRUCTURE_TYPE_FENCE_CREATE_INFO};
        if (vkCreateFence(s.device, &fence_info, nullptr, &b.fence) != VK_SUCCESS) { b.broken = true; return; }
        if (!create_buffer(s, kUploadBatchBytes, VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
                           VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                           b.staging, b.staging_memory)) { b.broken = true; return; }
        void *mapped = nullptr;
        if (vkMapMemory(s.device, b.staging_memory, 0, kUploadBatchBytes, 0, &mapped) != VK_SUCCESS) {
            b.broken = true;
            return;
        }
        b.staging_ptr = static_cast<std::byte *>(mapped);
    }

    static thread_local std::vector<vcs::TextureResult> finished;
    VkDeviceSize used = 0u;
    while (b.items.size() < kUploadBatchMaxItems) {
        vcs::TextureResult r;
        if (b.has_carry) {
            r = std::move(b.carry);
            b.has_carry = false;
        } else {
            finished.clear();
            vcs::texture_pipeline_poll(finished, 1u);
            if (finished.empty()) break;
            r = std::move(finished.front());
        }
        const auto found = s.textures.find(r.key);
        if (found == s.textures.end()) continue;
        TextureEntry &old = found->second;
        if (old.scale_shift != 0u || old.width != r.original_width || old.height != r.original_height) continue;
        // The cache slot may have been evicted and refilled with a different texture of the same
        // size while this result was being made; never put it onto the wrong image.
        if (old.source_signature != r.source_signature) continue;
        const VkDeviceSize byte_size = VkDeviceSize{r.texture.width} * r.texture.height * 4u;
        if (byte_size > kUploadBatchBytes || r.texture.rgba.size() < byte_size) continue;
        if (used + byte_size > kUploadBatchBytes) {
            b.carry = std::move(r);  // goes first in the next batch
            b.has_carry = true;
            break;
        }
        // Safety net: leave the original texture in place once replacements hold this much. The limit
        // follows the GPU's memory (see the budget set next to device selection).
        const std::uint64_t estimated_bytes = byte_size * 4u / 3u;
        if (s.replaced_bytes + estimated_bytes > s.replacement_budget) continue;
        PendingUploadItem item;
        item.key = r.key;
        item.sampler = old.sampler;
        std::uint32_t mips = 1u;
        for (std::uint32_t largest = std::max(r.texture.width, r.texture.height); largest > 1u; largest >>= 1u) ++mips;
        item.mip_levels = vcs_configuration().textures.mipmaps ? std::min(mips, 12u) : 1u;
        VkImageCreateInfo image_info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
        image_info.imageType = VK_IMAGE_TYPE_2D;
        image_info.format = kColorFormat;
        image_info.extent = {r.texture.width, r.texture.height, 1u};
        image_info.mipLevels = item.mip_levels;
        image_info.arrayLayers = 1u;
        image_info.samples = VK_SAMPLE_COUNT_1_BIT;
        image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
        image_info.usage = VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT |
                           VK_IMAGE_USAGE_SAMPLED_BIT;
        image_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        TextureEntry &fresh = item.fresh;
        bool ok = vkCreateImage(s.device, &image_info, nullptr, &fresh.image) == VK_SUCCESS;
        if (ok) {
            VkMemoryRequirements requirements{};
            vkGetImageMemoryRequirements(s.device, fresh.image, &requirements);
            std::uint32_t type_index = 0u;
            ok = find_memory_type(s.physical_device, requirements.memoryTypeBits,
                                  VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, type_index);
            if (ok) {
                VkMemoryAllocateInfo allocate{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
                allocate.allocationSize = requirements.size;
                allocate.memoryTypeIndex = type_index;
                ok = vkAllocateMemory(s.device, &allocate, nullptr, &fresh.memory) == VK_SUCCESS &&
                     vkBindImageMemory(s.device, fresh.image, fresh.memory, 0) == VK_SUCCESS;
            }
        }
        if (!ok) { destroy_texture_entry(s, fresh); continue; }
        fresh.width = r.texture.width;
        fresh.height = r.texture.height;
        fresh.scale_shift = r.texture.scale_shift;
        s.replaced_bytes += estimated_bytes;
        if (b.cmd == VK_NULL_HANDLE) {
            b.cmd = begin_one_shot(s);
            if (b.cmd == VK_NULL_HANDLE) { destroy_texture_entry(s, fresh); break; }
        }
        std::memcpy(b.staging_ptr + used, r.texture.rgba.data(), static_cast<std::size_t>(byte_size));
        record_texture_upload(b.cmd, fresh.image, b.staging, used, r.texture.width, r.texture.height,
                              item.mip_levels);
        used += (byte_size + 15u) & ~VkDeviceSize{15u};
        b.items.push_back(std::move(item));
    }
    if (!b.items.empty() && b.cmd != VK_NULL_HANDLE) {
        bool submitted = vkEndCommandBuffer(b.cmd) == VK_SUCCESS;
        if (submitted) {
            VkSubmitInfo submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};
            submit.commandBufferCount = 1u;
            submit.pCommandBuffers = &b.cmd;
            vkResetFences(s.device, 1, &b.fence);
            submitted = vkQueueSubmit(s.graphics_queue, 1, &submit, b.fence) == VK_SUCCESS;
        }
        if (submitted) b.in_flight = true;
        else finalize_upload_batch(s, b, false);
    }
}

static bool finish_color_frame_impl(std::uint64_t vblank) noexcept {
    VulkanGeState &s = state();
    if (!s.enabled) return false;

    // Texture LRU epoch for this frame's worth of accumulated draws (see
    // upload_decoded_texture()'s eviction loop). vblank is already a
    // monotonically increasing per-frame counter, so it doubles as the
    // epoch directly -- no separate counter needed.
    s.frame_epoch = vblank;
    s.swapchain_presented_this_call = false;

    bool produced_frame = false;

    // Step 1: collect whatever the *previous* call submitted, if anything.
    // This wait is normally instant -- a full vblank of guest CPU work
    // (game logic, CPU rasterization elsewhere, audio, present) has
    // elapsed since that submission went in, so the GPU has almost
    // certainly finished already. Overlapping this frame's GPU work with
    // the guest's own next vblank of CPU work is the entire point: this
    // function used to submit and then block on the fence immediately
    // afterward, every single vblank, so the CPU sat completely idle for
    // the GPU's whole render+readback time on top of the guest's own
    // per-vblank cost. That was the single biggest cost in this backend.
    if (s.submission_pending) {
        s.submission_pending = false;
        if (vkWaitForFences(s.device, 1, &s.fence, VK_TRUE, 5'000'000'000ull) == VK_SUCCESS) {
            // Native-swapchain present path: color_image from the
            // submission just fence-waited above is now guaranteed
            // GPU-complete (same guarantee the CPU readback below relies
            // on) -- blit it straight into the swapchain instead of the
            // CPU readback/memcpy/swizzle/SDL-texture chain. Skips the CPU
            // side of presentation entirely; the GPU-side copy-to-buffer in
            // this frame's already-recorded command buffer still runs
            // (harmless, unused bytes) rather than touch that recording
            // path too, keeping this migration's risk surface smaller.
            if (s.swapchain_migration_enabled && s.swapchain != VK_NULL_HANDLE) {
                // A resized or minimised window: when the drawable extent is not fixed for the
                // process (Windows), compare it with the swapchain's every frame.
                if (vkplat::surface_extent_can_change() && !s.swapchain_needs_recreate) {
                    VkSurfaceCapabilitiesKHR surface_caps{};
                    if (vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
                            s.physical_device, s.diagnostic_surface, &surface_caps) == VK_SUCCESS &&
                        surface_caps.currentExtent.width != 0xFFFFFFFFu &&
                        (surface_caps.currentExtent.width != s.swapchain_extent.width ||
                         surface_caps.currentExtent.height != s.swapchain_extent.height))
                        s.swapchain_needs_recreate = true;
                }
                bool swapchain_ready = true;
                if (s.swapchain_needs_recreate) swapchain_ready = recreate_present_swapchain(s);
                std::uint32_t image_index = 0u;
                VkResult acquire_result = VK_NOT_READY;
                if (swapchain_ready && s.swapchain != VK_NULL_HANDLE) {
                    vkWaitForFences(s.device, 1, &s.present_fence, VK_TRUE, 5'000'000'000ull);
                    acquire_result = vkAcquireNextImageKHR(
                        s.device, s.swapchain, 5'000'000'000ull, s.present_image_acquired,
                        VK_NULL_HANDLE, &image_index);
                    if (acquire_result == VK_ERROR_OUT_OF_DATE_KHR) s.swapchain_needs_recreate = true;
                    // Only after a successful acquire: this fence is signalled by the present
                    // submit below, so resetting it earlier would strand it on a failed acquire.
                    if (acquire_result == VK_SUCCESS || acquire_result == VK_SUBOPTIMAL_KHR)
                        vkResetFences(s.device, 1, &s.present_fence);
                }
                if (acquire_result == VK_SUCCESS || acquire_result == VK_SUBOPTIMAL_KHR) {
                    vkResetCommandBuffer(s.present_command_buffer, 0);
                    VkCommandBufferBeginInfo present_begin{
                        VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
                    present_begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
                    if (vkBeginCommandBuffer(s.present_command_buffer, &present_begin) ==
                        VK_SUCCESS) {
                        // Must match the same "current final image"
                        // finish_color_frame's readback copy and the present
                        // descriptor (create_present_swapchain) both use.
                        const VkImage present_source = s.color_grading_enabled
                            ? s.grading_image
                            : (s.fxaa_enabled ? s.fxaa_image : s.color_image);
                        transition_image(s.present_command_buffer, present_source,
                                         VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                                         VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                                         VK_ACCESS_TRANSFER_READ_BIT, VK_ACCESS_SHADER_READ_BIT,
                                         VK_PIPELINE_STAGE_TRANSFER_BIT,
                                         VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);

                        VkClearValue present_clear{};
                        present_clear.color = VkClearColorValue{{0.0f, 0.0f, 0.0f, 1.0f}};
                        VkRenderPassBeginInfo present_render_begin{
                            VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
                        present_render_begin.renderPass = s.present_render_pass;
                        present_render_begin.framebuffer =
                            s.swapchain_framebuffers[image_index];
                        present_render_begin.renderArea.extent = s.swapchain_extent;
                        present_render_begin.clearValueCount = 1u;
                        present_render_begin.pClearValues = &present_clear;
                        vkCmdBeginRenderPass(s.present_command_buffer, &present_render_begin,
                                             VK_SUBPASS_CONTENTS_INLINE);
                        // Stretch fills the window; Preserve / IntegerScale letterbox the picture
                        // (the render pass clear paints the bars). The same rectangle is what the
                        // platform layer publishes for the widescreen correction.
                        const DisplayConfiguration &present_display = vcs_configuration().display;
                        const PresentationRectangle present_rect = calculate_presentation_rectangle(
                            s.swapchain_extent.width, s.swapchain_extent.height, s.width, s.height,
                            present_display.aspect_mode, present_display.integer_scale);
                        VkViewport present_viewport{};
                        present_viewport.x = static_cast<float>(present_rect.x);
                        present_viewport.y = static_cast<float>(present_rect.y);
                        present_viewport.width = static_cast<float>(std::max(1, present_rect.width));
                        present_viewport.height = static_cast<float>(std::max(1, present_rect.height));
                        present_viewport.maxDepth = 1.0f;
                        vkCmdSetViewport(s.present_command_buffer, 0, 1, &present_viewport);
                        VkRect2D present_scissor{{0, 0}, s.swapchain_extent};
                        vkCmdSetScissor(s.present_command_buffer, 0, 1, &present_scissor);
                        vkCmdBindPipeline(s.present_command_buffer,
                                          VK_PIPELINE_BIND_POINT_GRAPHICS, s.present_pipeline);
                        vkCmdBindDescriptorSets(s.present_command_buffer,
                                                VK_PIPELINE_BIND_POINT_GRAPHICS,
                                                s.present_pipeline_layout, 0, 1,
                                                &s.present_descriptor_set, 0, nullptr);
                        vkCmdDraw(s.present_command_buffer, 3u, 1u, 0u, 0u);
                        vkCmdEndRenderPass(s.present_command_buffer);

                        if (vkEndCommandBuffer(s.present_command_buffer) == VK_SUCCESS) {
                            const VkPipelineStageFlags wait_stage =
                                VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
                            const std::array<VkSemaphore, 2> present_signal_semaphores{
                                s.present_render_finished, s.present_color_read_done};
                            VkSubmitInfo present_submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};
                            present_submit.waitSemaphoreCount = 1u;
                            present_submit.pWaitSemaphores = &s.present_image_acquired;
                            present_submit.pWaitDstStageMask = &wait_stage;
                            present_submit.commandBufferCount = 1u;
                            present_submit.pCommandBuffers = &s.present_command_buffer;
                            present_submit.signalSemaphoreCount =
                                static_cast<std::uint32_t>(present_signal_semaphores.size());
                            present_submit.pSignalSemaphores = present_signal_semaphores.data();
                            if (vkQueueSubmit(s.graphics_queue, 1, &present_submit,
                                              s.present_fence) == VK_SUCCESS) {
                                VkPresentInfoKHR present_info{VK_STRUCTURE_TYPE_PRESENT_INFO_KHR};
                                present_info.waitSemaphoreCount = 1u;
                                present_info.pWaitSemaphores = &s.present_render_finished;
                                present_info.swapchainCount = 1u;
                                present_info.pSwapchains = &s.swapchain;
                                present_info.pImageIndices = &image_index;
                                const VkResult present_result =
                                    vkQueuePresentKHR(s.graphics_queue, &present_info);
                                if (present_result == VK_ERROR_OUT_OF_DATE_KHR ||
                                    present_result == VK_SUBOPTIMAL_KHR)
                                    s.swapchain_needs_recreate = true;
                                // Step 2 below (the next frame's main render,
                                // later in this same function call) waits on
                                // present_color_read_done before it starts
                                // writing color_image again -- a real,
                                // GPU-timeline dependency instead of the
                                // vkQueueWaitIdle() this replaced (which
                                // blocked the CPU until the whole queue
                                // drained, undoing most of the point of
                                // this migration).
                                s.present_just_ran = true;
                                s.swapchain_presented_this_call = true;
                            }
                        }
                    }
                }
                s.frame_valid = false;
                ++s.report.game_frames;
                s.report.game_frame_vblank = s.pending_vblank;
                s.report.presented_framebuffer_target = s.pending_target_address;
                produced_frame = true;
            }
            if (!(s.swapchain_migration_enabled && s.swapchain != VK_NULL_HANDLE)) {
            void *mapped = nullptr;
            if (vkMapMemory(s.device, s.readback_memory, 0, s.readback_capacity, 0, &mapped) ==
                VK_SUCCESS) {
                s.frame_rgba.resize(static_cast<std::size_t>(s.readback_capacity));
                std::memcpy(s.frame_rgba.data(), mapped, s.frame_rgba.size());
                vkUnmapMemory(s.device, s.readback_memory);
                s.frame_valid = true;
                ++s.report.game_frames;
                s.report.game_frame_vblank = s.pending_vblank;
                s.report.game_frame_readback_bytes += s.frame_rgba.size();
                s.report.presented_framebuffer_target = s.pending_target_address;
                produced_frame = true;

                // GPU timestamp readback for the submission just waited on
                // (see PSPRECOMP_GE_GPU_TIMESTAMP_DIAG). Safe to read without
                // VK_QUERY_RESULT_WAIT_BIT here -- the fence wait above
                // already proves this submission's GPU work, timestamps
                // included, is finished.
                if (s.timestamps_supported && VCS_ENV("PSPRECOMP_GE_GPU_TIMESTAMP_DIAG") != nullptr) {
                    std::array<std::uint64_t, 2> timestamps{};
                    if (vkGetQueryPoolResults(s.device, s.timestamp_pool, 0u, 2u,
                                              sizeof(timestamps), timestamps.data(),
                                              sizeof(std::uint64_t),
                                              VK_QUERY_RESULT_64_BIT) == VK_SUCCESS) {
                        const double gpu_execute_us =
                            static_cast<double>(timestamps[1] - timestamps[0]) *
                            static_cast<double>(s.timestamp_period_ns) / 1000.0;
                        std::fprintf(stderr,
                            "[gpu-timestamp] vblank=%llu cpu_record_us=%.1f gpu_execute_us=%.1f\n",
                            static_cast<unsigned long long>(s.pending_vblank), s.pending_cpu_record_us,
                            gpu_execute_us);
                    }
                }

                // Bloom composite: additive-blend the extracted/blurred
                // highlight image (rendered this same submission, see the
                // bloom render pass below) onto the frame just read back.
                // Deliberately plain CPU math, not another Vulkan pass: the
                // only new pixel logic stays easy to read and to disable
                // without touching the GPU side at all.
                if (s.bloom_enabled) {
                    void *bloom_mapped = nullptr;
                    if (vkMapMemory(s.device, s.bloom_readback_memory, 0,
                                    s.bloom_readback_capacity, 0, &bloom_mapped) == VK_SUCCESS) {
                        s.bloom_rgba.resize(static_cast<std::size_t>(s.bloom_readback_capacity));
                        std::memcpy(s.bloom_rgba.data(), bloom_mapped, s.bloom_rgba.size());
                        vkUnmapMemory(s.device, s.bloom_readback_memory);

                        std::uint64_t sum_brightness = 0u;
                        std::uint8_t max_brightness = 0u;
                        const std::size_t pixel_count =
                            std::min(s.frame_rgba.size(), s.bloom_rgba.size());
                        for (std::size_t i = 0; i + 3u < pixel_count; i += 4u) {
                            for (std::size_t c = 0; c < 3u; ++c) {
                                const auto base = static_cast<std::uint8_t>(s.frame_rgba[i + c]);
                                const auto glow = static_cast<std::uint8_t>(s.bloom_rgba[i + c]);
                                const int sum = static_cast<int>(base) + static_cast<int>(glow);
                                s.frame_rgba[i + c] =
                                    static_cast<std::byte>(std::min(sum, 255));
                                sum_brightness += glow;
                                max_brightness = std::max(max_brightness, glow);
                            }
                        }
                        if (VCS_ENV("PSPRECOMP_BLOOM_DIAG") != nullptr) {
                            static std::uint64_t frames = 0u;
                            ++frames;
                            const double avg = pixel_count > 0u
                                ? static_cast<double>(sum_brightness) /
                                      static_cast<double>(pixel_count / 4u * 3u)
                                : 0.0;
                            std::fprintf(stderr,
                                "[bloom-diag] frame=%llu avg_glow=%.3f max_glow=%u\n",
                                static_cast<unsigned long long>(frames), avg,
                                static_cast<unsigned>(max_brightness));
                        }
                    }
                }
            }
            }
        }
    }

    // Step 2: pick this vblank's frame -- the bucket with the most geometry,
    // with hysteresis toward last frame's winner (see last_winner_address)
    // -- and submit it, to be collected by the *next* call.
    //
    // Address-based selection and a scissor-height filter were both tried
    // here and reverted. A full bucket dump (PSPRECOMP_GE_GPU_BUCKET_DIAG)
    // confirmed plain vertex count reliably identifies the real scene
    // (tens of thousands of vertices vs. a few hundred for every competing
    // HUD-sized bucket) -- but with no memory between frames, two targets
    // whose vertex counts happen to be close and fluctuate frame to frame
    // made the pick flip between them, alternating two different renders
    // and reading as flicker/corruption in motion even though any single
    // captured frame looked correct.
    if (s.frame_buckets.empty()) return produced_frame;

    // Total geometry a bucket contributed, screen-space and
    // hardware-transform combined -- a bucket whose scene is drawn entirely
    // through the hardware-transform path would otherwise show 0 in
    // `vertices` (that field is screen-space-only) and never win the
    // largest-bucket comparison below, no matter how much real geometry it
    // has. hw_packed vertices count too: those are the dominant format for
    // real scene geometry, so a bucket using only that fast path is the
    // single most important case this must not undercount.
    const auto bucket_geometry = [](const VulkanGeState::FrameBucket &bucket) {
        return bucket.vertices.size() + bucket.hw_vertices.size() + bucket.hw_packed.size();
    };

    VulkanGeState::FrameBucket *largest = nullptr;
    VulkanGeState::FrameBucket *sticky = nullptr;
    for (VulkanGeState::FrameBucket &bucket : s.frame_buckets) {
        if (largest == nullptr || bucket_geometry(bucket) > bucket_geometry(*largest)) largest = &bucket;
        if (s.has_last_winner && bucket.address == s.last_winner_address) sticky = &bucket;
    }
    // Only give up the sticky target when something else is decisively
    // ahead (not just momentarily larger), so two close, fluctuating
    // candidates don't flip the pick every vblank.
    constexpr std::size_t kSwitchNumerator = 3, kSwitchDenominator = 2;  // 1.5x
    VulkanGeState::FrameBucket *winner =
        (sticky != nullptr &&
         bucket_geometry(*largest) * kSwitchDenominator < bucket_geometry(*sticky) * kSwitchNumerator)
            ? sticky
            : largest;

    std::size_t rejected_vertices = 0;
    for (const VulkanGeState::FrameBucket &bucket : s.frame_buckets)
        if (&bucket != winner) rejected_vertices += bucket_geometry(bucket);
    s.report.frames_without_displayed_target += rejected_vertices;
    if (winner == nullptr || (winner->batches.empty() && winner->hw_batches.empty())) {
        s.frame_buckets.clear();
        s.cloud_cameras.clear();
        return produced_frame;
    }
    s.last_winner_address = winner->address;
    s.has_last_winner = true;

    const VkDeviceSize needed =
        static_cast<VkDeviceSize>(winner->vertices.size()) * sizeof(GeGpuVertex);
    if (needed > s.vertex_capacity) {
        // Grow and drop this frame; the software path still has the image.
        // Safe to touch the vertex buffer here regardless of the wait
        // above: if nothing was pending, nothing could still be reading
        // from it either.
        vkDeviceWaitIdle(s.device);
        if (s.vertex_mapped != nullptr) vkUnmapMemory(s.device, s.vertex_memory);
        s.vertex_mapped = nullptr;
        vkDestroyBuffer(s.device, s.vertex_buffer, nullptr);
        vkFreeMemory(s.device, s.vertex_memory, nullptr);
        s.vertex_buffer = VK_NULL_HANDLE;
        s.vertex_memory = VK_NULL_HANDLE;
        const VkDeviceSize capacity = needed * 2u;
        if (!create_buffer(s, capacity, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,
                           VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                               VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                           s.vertex_buffer, s.vertex_memory) ||
            vkMapMemory(s.device, s.vertex_memory, 0, capacity, 0, &s.vertex_mapped) !=
                VK_SUCCESS) {
            s.enabled = false;
            s.report.message = "vertex buffer growth failed; reverted to software GE";
            s.frame_buckets.clear();
        s.cloud_cameras.clear();
            return produced_frame;
        }
        s.vertex_capacity = capacity;
        s.report.upload_capacity_bytes = capacity;
        ++s.report.game_vertex_overflows;
        s.frame_buckets.clear();
        s.cloud_cameras.clear();
        return produced_frame;
    }

    std::memcpy(s.vertex_mapped, winner->vertices.data(), static_cast<std::size_t>(needed));
    s.report.staged_bytes += needed;
    s.report.staged_vertices += winner->vertices.size();
    s.report.staged_draw_calls += winner->batches.size();

    // Hardware-transform buffers. Unlike the screen-space vertex buffer
    // above, overflow here does not drop the whole frame -- it only skips
    // this frame's hardware-transform draws (hw_draws_ready = false below),
    // leaving whatever screen-space geometry exists to present as before.
    // Regular play never approaches kInitialVertexBytes per frame for any
    // one of these, so this is a defensive fallback, not an expected path.
    bool hw_draws_ready = true;
    const VkDeviceSize hw_vertex_needed =
        static_cast<VkDeviceSize>(winner->hw_vertices.size()) * sizeof(GeGpuVertex);
    const VkDeviceSize hw_packed_needed =
        static_cast<VkDeviceSize>(winner->hw_packed.size()) * sizeof(Packed0115Vertex);
    const VkDeviceSize hw_index_needed =
        static_cast<VkDeviceSize>(winner->hw_indices.size()) * sizeof(std::uint32_t);
    if (hw_vertex_needed > s.hw_vertex_capacity || hw_packed_needed > s.hw_packed_vertex_capacity ||
        hw_index_needed > s.hw_index_capacity) {
        hw_draws_ready = false;
        ++s.report.game_vertex_overflows;
    } else {
        if (hw_vertex_needed > 0u)
            std::memcpy(s.hw_vertex_mapped, winner->hw_vertices.data(),
                       static_cast<std::size_t>(hw_vertex_needed));
        if (hw_packed_needed > 0u)
            std::memcpy(s.hw_packed_vertex_mapped, winner->hw_packed.data(),
                       static_cast<std::size_t>(hw_packed_needed));
        if (hw_index_needed > 0u)
            std::memcpy(s.hw_index_mapped, winner->hw_indices.data(),
                       static_cast<std::size_t>(hw_index_needed));
    }

    const auto record_start_time = std::chrono::steady_clock::now();

    vkResetCommandBuffer(s.command_buffer, 0);
    VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    if (vkBeginCommandBuffer(s.command_buffer, &begin) != VK_SUCCESS) {
        s.frame_buckets.clear();
        s.cloud_cameras.clear();
        return produced_frame;
    }

    if (s.timestamps_supported) {
        vkCmdResetQueryPool(s.command_buffer, s.timestamp_pool, 0u, 2u);
        vkCmdWriteTimestamp(s.command_buffer, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, s.timestamp_pool,
                            0u);
    }

    // Volumetric clouds: the march/temporal-resolve passes are independent
    // offscreen render passes (their own small history/march targets, never
    // touching s.color_image/s.depth_image), so they run here, before the
    // main GE render pass opens. select_cloud_camera filters to
    // winner->address (this frame's actual displayed target) since
    // s.cloud_cameras can otherwise hold candidates from targets that never
    // make it to the screen -- see that function's comment. The composite
    // draw itself is issued later, inline in the main render pass
    // loop below, at the FadingEntities boundary (see cloud_camera use
    // there) -- it needs s.depth_image live for its EQUAL depth test, which
    // this backend only keeps valid while that render pass is still open
    // (see VulkanGeState::cloud_history's comment for why).
    const CloudCameraCandidate *cloud_camera = select_cloud_camera(s, winner->address);
    const CloudUniforms clouds = cloud_present_constants(s, winner->address);
    const CloudFrameDraws cloud_draws =
        cloud_camera != nullptr ? record_cloud_offscreen_passes(s, clouds) : CloudFrameDraws{};
    if (VCS_ENV("PSPRECOMP_CLOUD_DIAG") != nullptr) {
        static std::uint64_t cloud_diag_frame = 0u;
        if (!s.cloud_cameras.empty() && (cloud_diag_frame % 15u) == 0u) {
            std::fprintf(stderr,
                "[cloud-diag] frame=%llu cameras=%zu right=(%.3f,%.3f,%.3f) "
                "up=(%.3f,%.3f,%.3f) fwd=(%.3f,%.3f,%.3f) camerapos=(%.1f,%.1f,%.1f)\n",
                static_cast<unsigned long long>(cloud_diag_frame), s.cloud_cameras.size(),
                clouds.ray_right_time[0], clouds.ray_right_time[1], clouds.ray_right_time[2],
                clouds.ray_up_seed[0], clouds.ray_up_seed[1], clouds.ray_up_seed[2],
                clouds.ray_forward_opacity[0], clouds.ray_forward_opacity[1],
                clouds.ray_forward_opacity[2], clouds.camera_settings[0], clouds.camera_settings[1],
                clouds.camera_settings[2]);
        }
        ++cloud_diag_frame;
    }

    std::array<VkClearValue, 2> clears{};
    clears[0].color = VkClearColorValue{{0.0f, 0.0f, 0.0f, 1.0f}};
    // PSP depth: 0 is farthest, so the depth buffer clears to 0.0, not 1.0.
    clears[1].depthStencil = VkClearDepthStencilValue{0.0f, 0u};

    VkRenderPassBeginInfo render_begin{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
    render_begin.renderPass = s.render_pass;
    render_begin.framebuffer = s.framebuffer;
    render_begin.renderArea.extent = {s.width, s.height};
    render_begin.clearValueCount = static_cast<std::uint32_t>(clears.size());
    render_begin.pClearValues = clears.data();
    vkCmdBeginRenderPass(s.command_buffer, &render_begin, VK_SUBPASS_CONTENTS_INLINE);

    VkViewport viewport{};
    viewport.width = static_cast<float>(s.width);
    viewport.height = static_cast<float>(s.height);
    viewport.maxDepth = 1.0f;
    vkCmdSetViewport(s.command_buffer, 0, 1, &viewport);

    const VkDeviceSize vertex_offset = 0u;
    vkCmdBindVertexBuffers(s.command_buffer, 0, 1, &s.vertex_buffer, &vertex_offset);

    // PSP screen space -> internal target. Vertex positions scale through the
    // viewport automatically; only the scissor rectangle needs converting.
    const float scale_x = static_cast<float>(s.width) / frame_extent().width;
    const float scale_y = static_cast<float>(s.height) / frame_extent().height;

    const std::size_t batches_before_coalesce = winner->batches.size();
    std::uint64_t batches_merged_away = 0u;
    coalesce_batches(winner->batches, batches_merged_away);
    if (VCS_ENV("PSPRECOMP_GE_BATCH_COALESCE_DIAG") != nullptr) {
        std::fprintf(stderr,
            "[batch-coalesce] vblank=%llu before=%zu after=%zu merged=%llu\n",
            static_cast<unsigned long long>(vblank), batches_before_coalesce,
            winner->batches.size(), static_cast<unsigned long long>(batches_merged_away));
    }

    // FadingEntities boundary detection for the cloud composite draw: the
    // run of opaque, depth-writing world geometry ends and the first
    // depth-tested-but-not-depth-writing draw begins. Direct port of
    // ge_gpu_backend_dx12.cpp's cloud_depth_writing_world_seen /
    // fading_entities_boundary heuristic. This heuristic (rather than a
    // game-side marker, which the PSP GE does not expose) is the
    // insertion point because the cloud composite is a late,
    // depth-tested-but-not-depth-writing draw.
    bool cloud_depth_writing_world_seen = false;
    bool clouds_composited = false;
    bool sky_filled = false;

    VkPipeline bound = VK_NULL_HANDLE;
    for (const Batch &batch : winner->batches) {
        if (!batch.clear_mode && batch.depth_test_enabled && batch.depth_write_enabled)
            cloud_depth_writing_world_seen = true;
        const bool fading_entities_boundary = cloud_depth_writing_world_seen && !batch.clear_mode &&
            batch.depth_test_enabled && !batch.depth_write_enabled;
        if (!sky_filled && s.sky_palette_ready && fading_entities_boundary) {
            sky_filled = true;
            const float sky_hours = vcs::game_clock_hours();
            if (sky_hours >= 0.0f) {
                vcs::SkyColors sky = vcs::sky_palette_colors(sky_hours);
                // Weather pulls the sky toward that weather's grey-out colors (a soft
                // slate, not a neutral grey), strongest in daylight.
                const vcs::WeatherBlend sky_weather = vcs::weather_look();
                if (sky_weather.known && sky_weather.look.sky_grey > 0.0f) {
                    const vcs::WeatherLook &wx = sky_weather.look;
                    const float daylight = std::clamp(1.0f - vice_palette().night, 0.0f, 1.0f);
                    const float pull = wx.sky_grey * daylight;
                    for (std::size_t c = 0u; c < 3u; ++c) {
                        sky.horizon[c] += (wx.horizon[c] - sky.horizon[c]) * pull;
                        sky.zenith[c] += (wx.zenith[c] - sky.zenith[c]) * pull;
                    }
                }
                const float sky_alpha = std::clamp(s.postfx.sky_palette_strength, 0.0f, 1.0f);
                const std::array<float, 8> sky_push{
                    sky.zenith[0] / 255.0f, sky.zenith[1] / 255.0f, sky.zenith[2] / 255.0f, sky_alpha,
                    sky.horizon[0] / 255.0f, sky.horizon[1] / 255.0f, sky.horizon[2] / 255.0f, 0.62f};
                VkRect2D sky_scissor{{0, 0}, {s.width, s.height}};
                vkCmdSetScissor(s.command_buffer, 0, 1, &sky_scissor);
                vkCmdBindPipeline(s.command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS, s.sky_pipeline);
                vkCmdPushConstants(s.command_buffer, s.sky_pipeline_layout,
                                   VK_SHADER_STAGE_FRAGMENT_BIT, 0, sizeof(sky_push), sky_push.data());
                vkCmdDraw(s.command_buffer, 3u, 1u, 0u, 0u);
                bound = VK_NULL_HANDLE;
            }
        }
        if (!clouds_composited && cloud_draws.ready && fading_entities_boundary) {
            clouds_composited = true;
            if (VCS_ENV("PSPRECOMP_CLOUD_DIAG") != nullptr) {
                static std::uint64_t composite_diag_count = 0u;
                if (composite_diag_count < 60u) {
                    std::fprintf(stderr, "[cloud-diag] composite draw issued, batch_clear=%d\n",
                                batch.clear_mode ? 1 : 0);
                    ++composite_diag_count;
                }
            }
            VkRect2D composite_scissor{{0, 0}, {s.width, s.height}};
            vkCmdSetScissor(s.command_buffer, 0, 1, &composite_scissor);
            const std::array<float, 4> no_blend_constants{1.0f, 1.0f, 1.0f, 1.0f};
            vkCmdSetBlendConstants(s.command_buffer, no_blend_constants.data());
            vkCmdBindPipeline(s.command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS,
                              s.cloud_composite_pipeline);
            vkCmdBindDescriptorSets(s.command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS,
                                    s.cloud_dual_pipeline_layout, 0, 1, &s.cloud_set_composite, 0,
                                    nullptr);
            vkCmdDraw(s.command_buffer, 3u, 1u, 0u, 0u);
            // Every piece of bound state below is pipeline-layout-specific
            // (cloud draws use their own descriptor set layout, distinct
            // from the GE pipeline layout) or was simply overwritten above
            // (scissor/blend constants) -- force every batch after this one
            // to rebind everything rather than trust stale "already bound"
            // tracking across the cloud draw.
            bound = VK_NULL_HANDLE;
        }

        if (batch.pipeline != bound) {
            vkCmdBindPipeline(s.command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS, batch.pipeline);
            bound = batch.pipeline;
        }

        const std::int32_t x0 = std::max<std::int32_t>(0, batch.scissor[0]);
        const std::int32_t y0 = std::max<std::int32_t>(0, batch.scissor[1]);
        const std::int32_t x1 =
            std::min<std::int32_t>(static_cast<std::int32_t>(frame_extent().width) - 1, batch.scissor[2]);
        const std::int32_t y1 =
            std::min<std::int32_t>(static_cast<std::int32_t>(frame_extent().height) - 1, batch.scissor[3]);
        if (x1 < x0 || y1 < y0) continue;
        VkRect2D scissor{};
        // GE scissor bounds are inclusive on both ends.
        scissor.offset = {static_cast<std::int32_t>(static_cast<float>(x0) * scale_x),
                          static_cast<std::int32_t>(static_cast<float>(y0) * scale_y)};
        scissor.extent = {
            static_cast<std::uint32_t>(static_cast<float>(x1 - x0 + 1) * scale_x),
            static_cast<std::uint32_t>(static_cast<float>(y1 - y0 + 1) * scale_y)};
        scissor.extent.width =
            std::min(scissor.extent.width, s.width - static_cast<std::uint32_t>(scissor.offset.x));
        scissor.extent.height = std::min(scissor.extent.height,
                                         s.height - static_cast<std::uint32_t>(scissor.offset.y));
        vkCmdSetScissor(s.command_buffer, 0, 1, &scissor);
        vkCmdSetBlendConstants(s.command_buffer, batch.blend_constants.data());

        PushConstants push{};
        push.inverse_viewport[0] = 2.0f / frame_extent().width;
        push.inverse_viewport[1] = 2.0f / frame_extent().height;
        push.framebuffer_format = batch.framebuffer_format;
        vkCmdPushConstants(s.command_buffer, s.pipeline_layout,
                           VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT, 0,
                           sizeof(push), &push);

        vkCmdBindDescriptorSets(s.command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS,
                                s.pipeline_layout, 0, 1, &batch.descriptor, 0, nullptr);
        vkCmdDraw(s.command_buffer, batch.vertex_count, 1u, batch.first_vertex, 0u);
    }

    // Hardware-transform draws: each batch carries its own model->clip
    // transform (baked into push constants at accumulate time -- see
    // build_hw_transform_push_constants()), so unlike the screen-space loop
    // above, the vertex buffer bind and push-constant update both happen
    // per-batch here, not once for the whole draw.
    if (hw_draws_ready && !winner->hw_batches.empty()) {
        VkPipeline hw_bound = VK_NULL_HANDLE;
        for (const HwTransformBatch &batch : winner->hw_batches) {
            if (batch.pipeline != hw_bound) {
                vkCmdBindPipeline(s.command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS, batch.pipeline);
                hw_bound = batch.pipeline;
            }
            // The vertex buffer bind depends on which of the two hw buffers
            // this batch's format uses, not on which pipeline is bound, so
            // it is always re-bound here rather than tracked as separate
            // "already correct" state alongside hw_bound.
            const VkBuffer hw_vb = batch.packed_0115 ? s.hw_packed_vertex_buffer : s.hw_vertex_buffer;
            const VkDeviceSize hw_vertex_offset = 0u;
            vkCmdBindVertexBuffers(s.command_buffer, 0, 1, &hw_vb, &hw_vertex_offset);

            const std::int32_t x0 = std::max<std::int32_t>(0, batch.scissor[0]);
            const std::int32_t y0 = std::max<std::int32_t>(0, batch.scissor[1]);
            const std::int32_t x1 =
                std::min<std::int32_t>(static_cast<std::int32_t>(frame_extent().width) - 1, batch.scissor[2]);
            const std::int32_t y1 =
                std::min<std::int32_t>(static_cast<std::int32_t>(frame_extent().height) - 1, batch.scissor[3]);
            if (x1 < x0 || y1 < y0) continue;
            VkRect2D scissor{};
            scissor.offset = {static_cast<std::int32_t>(static_cast<float>(x0) * scale_x),
                              static_cast<std::int32_t>(static_cast<float>(y0) * scale_y)};
            scissor.extent = {
                static_cast<std::uint32_t>(static_cast<float>(x1 - x0 + 1) * scale_x),
                static_cast<std::uint32_t>(static_cast<float>(y1 - y0 + 1) * scale_y)};
            scissor.extent.width = std::min(scissor.extent.width,
                s.width - static_cast<std::uint32_t>(scissor.offset.x));
            scissor.extent.height = std::min(scissor.extent.height,
                s.height - static_cast<std::uint32_t>(scissor.offset.y));
            vkCmdSetScissor(s.command_buffer, 0, 1, &scissor);
            vkCmdSetBlendConstants(s.command_buffer, batch.blend_constants.data());

            vkCmdPushConstants(s.command_buffer, s.hw_pipeline_layout, VK_SHADER_STAGE_VERTEX_BIT, 0,
                               sizeof(batch.constants), &batch.constants);
            vkCmdBindDescriptorSets(s.command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS,
                                    s.hw_pipeline_layout, 0, 1, &batch.descriptor, 0, nullptr);

            if (batch.index_count != 0u) {
                vkCmdBindIndexBuffer(s.command_buffer, s.hw_index_buffer, 0, VK_INDEX_TYPE_UINT32);
                vkCmdDrawIndexed(s.command_buffer, batch.index_count, 1u, batch.first_index,
                                 static_cast<std::int32_t>(batch.first_vertex), 0u);
            } else {
                vkCmdDraw(s.command_buffer, batch.vertex_count, 1u, batch.first_vertex, 0u);
            }
        }
    }
    vkCmdEndRenderPass(s.command_buffer);

    // Experimental bloom: one fullscreen pass reading the frame just
    // rendered (world + HUD, screen-space, already composited) and writing
    // a same-size bright-pass/blur image, read back separately and additive-
    // composited on the CPU in Step 1 above. See BloomPushConstants /
    // shaders/bloom.frag. This never writes back into s.color_image itself
    // -- it only reads it -- so the existing copy-to-buffer below is
    // completely unmodified by this being on or off.
    if (s.bloom_enabled) {
        // s.render_pass's color attachment already lands in
        // TRANSFER_SRC_OPTIMAL when the subpass above ends (that's its
        // declared finalLayout); make it shader-readable for this pass, then
        // put it back before the existing readback copy relies on it again.
        transition_image(s.command_buffer, s.color_image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                         VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, VK_ACCESS_TRANSFER_READ_BIT,
                         VK_ACCESS_SHADER_READ_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT,
                         VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);

        VkClearValue bloom_clear{};
        bloom_clear.color = VkClearColorValue{{0.0f, 0.0f, 0.0f, 1.0f}};
        VkRenderPassBeginInfo bloom_begin{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
        bloom_begin.renderPass = s.bloom_render_pass;
        bloom_begin.framebuffer = s.bloom_framebuffer;
        bloom_begin.renderArea.extent = {s.width, s.height};
        bloom_begin.clearValueCount = 1u;
        bloom_begin.pClearValues = &bloom_clear;
        vkCmdBeginRenderPass(s.command_buffer, &bloom_begin, VK_SUBPASS_CONTENTS_INLINE);

        VkViewport bloom_viewport{};
        bloom_viewport.width = static_cast<float>(s.width);
        bloom_viewport.height = static_cast<float>(s.height);
        bloom_viewport.maxDepth = 1.0f;
        vkCmdSetViewport(s.command_buffer, 0, 1, &bloom_viewport);
        VkRect2D bloom_scissor{{0, 0}, {s.width, s.height}};
        vkCmdSetScissor(s.command_buffer, 0, 1, &bloom_scissor);

        vkCmdBindPipeline(s.command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS, s.bloom_pipeline);
        vkCmdBindDescriptorSets(s.command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS,
                                s.bloom_pipeline_layout, 0, 1, &s.bloom_descriptor_set, 0, nullptr);
        BloomPushConstants bloom_push{};
        bloom_push.texel_size[0] = 1.0f / static_cast<float>(s.width);
        bloom_push.texel_size[1] = 1.0f / static_cast<float>(s.height);
        bloom_push.threshold = s.bloom_threshold;
        bloom_push.intensity = s.bloom_intensity;
        vkCmdPushConstants(s.command_buffer, s.bloom_pipeline_layout, VK_SHADER_STAGE_FRAGMENT_BIT,
                           0, sizeof(bloom_push), &bloom_push);
        vkCmdDraw(s.command_buffer, 3u, 1u, 0u, 0u);

        vkCmdEndRenderPass(s.command_buffer);

        transition_image(s.command_buffer, s.color_image, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                         VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, VK_ACCESS_SHADER_READ_BIT,
                         VK_ACCESS_TRANSFER_READ_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
                         VK_PIPELINE_STAGE_TRANSFER_BIT);

        VkBufferImageCopy bloom_region{};
        bloom_region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        bloom_region.imageSubresource.layerCount = 1u;
        bloom_region.imageExtent = {s.width, s.height, 1u};
        vkCmdCopyImageToBuffer(s.command_buffer, s.bloom_image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                               s.bloom_readback_buffer, 1, &bloom_region);
    }

    // FXAA: one fullscreen pass reading color_image (world + HUD, already
    // composited) and writing the anti-aliased result into fxaa_image. This
    // one, unlike bloom, becomes the actual frame everything downstream
    // reads (the CPU readback below, and the swapchain present pass) --
    // color_image itself is left untouched, only ever read from here.
    if (s.fxaa_enabled) {
        transition_image(s.command_buffer, s.color_image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                         VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, VK_ACCESS_TRANSFER_READ_BIT,
                         VK_ACCESS_SHADER_READ_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT,
                         VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);

        if (s.smaa_ready) {
            const std::array<VkRenderPass, 3> passes{s.smaa_pass[0], s.smaa_pass[1], s.fxaa_render_pass};
            const std::array<VkFramebuffer, 3> targets{s.smaa_framebuffer[0], s.smaa_framebuffer[1],
                                                        s.fxaa_framebuffer};
            const std::array<float, 4> metrics{1.0f / static_cast<float>(s.width),
                                               1.0f / static_cast<float>(s.height),
                                               static_cast<float>(s.width),
                                               static_cast<float>(s.height)};
            for (std::size_t i = 0u; i < 3u; ++i) {
                VkClearValue smaa_clear{};
                smaa_clear.color = VkClearColorValue{{0.0f, 0.0f, 0.0f, 0.0f}};
                VkRenderPassBeginInfo smaa_begin{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
                smaa_begin.renderPass = passes[i];
                smaa_begin.framebuffer = targets[i];
                smaa_begin.renderArea.extent = {s.width, s.height};
                smaa_begin.clearValueCount = 1u;
                smaa_begin.pClearValues = &smaa_clear;
                vkCmdBeginRenderPass(s.command_buffer, &smaa_begin, VK_SUBPASS_CONTENTS_INLINE);
                VkViewport smaa_viewport{};
                smaa_viewport.width = static_cast<float>(s.width);
                smaa_viewport.height = static_cast<float>(s.height);
                smaa_viewport.maxDepth = 1.0f;
                vkCmdSetViewport(s.command_buffer, 0, 1, &smaa_viewport);
                VkRect2D smaa_scissor{{0, 0}, {s.width, s.height}};
                vkCmdSetScissor(s.command_buffer, 0, 1, &smaa_scissor);
                vkCmdBindPipeline(s.command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS, s.smaa_pipeline[i]);
                vkCmdBindDescriptorSets(s.command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS,
                                        s.smaa_pipeline_layout[i], 0, 1, &s.smaa_set[i], 0, nullptr);
                vkCmdPushConstants(s.command_buffer, s.smaa_pipeline_layout[i],
                                   VK_SHADER_STAGE_FRAGMENT_BIT, 0, sizeof(metrics), metrics.data());
                vkCmdDraw(s.command_buffer, 3u, 1u, 0u, 0u);
                vkCmdEndRenderPass(s.command_buffer);
                if (i < 2u) {
                    VkMemoryBarrier smaa_barrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER};
                    smaa_barrier.srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
                    smaa_barrier.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
                    vkCmdPipelineBarrier(s.command_buffer,
                                         VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
                                         VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0, 1, &smaa_barrier,
                                         0, nullptr, 0, nullptr);
                }
            }
        } else {
        VkClearValue fxaa_clear{};
        fxaa_clear.color = VkClearColorValue{{0.0f, 0.0f, 0.0f, 1.0f}};
        VkRenderPassBeginInfo fxaa_begin{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
        fxaa_begin.renderPass = s.fxaa_render_pass;
        fxaa_begin.framebuffer = s.fxaa_framebuffer;
        fxaa_begin.renderArea.extent = {s.width, s.height};
        fxaa_begin.clearValueCount = 1u;
        fxaa_begin.pClearValues = &fxaa_clear;
        vkCmdBeginRenderPass(s.command_buffer, &fxaa_begin, VK_SUBPASS_CONTENTS_INLINE);

        VkViewport fxaa_viewport{};
        fxaa_viewport.width = static_cast<float>(s.width);
        fxaa_viewport.height = static_cast<float>(s.height);
        fxaa_viewport.maxDepth = 1.0f;
        vkCmdSetViewport(s.command_buffer, 0, 1, &fxaa_viewport);
        VkRect2D fxaa_scissor{{0, 0}, {s.width, s.height}};
        vkCmdSetScissor(s.command_buffer, 0, 1, &fxaa_scissor);

        vkCmdBindPipeline(s.command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS, s.fxaa_pipeline);
        vkCmdBindDescriptorSets(s.command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS,
                                s.fxaa_pipeline_layout, 0, 1, &s.fxaa_descriptor_set, 0, nullptr);
        FxaaPushConstants fxaa_push{};
        fxaa_push.texel_size[0] = 1.0f / static_cast<float>(s.width);
        fxaa_push.texel_size[1] = 1.0f / static_cast<float>(s.height);
        vkCmdPushConstants(s.command_buffer, s.fxaa_pipeline_layout, VK_SHADER_STAGE_FRAGMENT_BIT,
                           0, sizeof(fxaa_push), &fxaa_push);
        vkCmdDraw(s.command_buffer, 3u, 1u, 0u, 0u);

        vkCmdEndRenderPass(s.command_buffer);
        }
    }

    // Color grading: one more fullscreen pass, reading whichever image is
    // "current" (fxaa_image if FXAA ran, else color_image) and writing
    // grading_image -- the last stop before this frame becomes the CPU
    // readback / swapchain present source.
    if (s.color_grading_enabled) {
        const VkImage grading_source = s.fxaa_enabled ? s.fxaa_image : s.color_image;
        transition_image(s.command_buffer, grading_source, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                         VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, VK_ACCESS_TRANSFER_READ_BIT,
                         VK_ACCESS_SHADER_READ_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT,
                         VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);

        VkClearValue grading_clear{};
        grading_clear.color = VkClearColorValue{{0.0f, 0.0f, 0.0f, 1.0f}};
        VkRenderPassBeginInfo grading_begin{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
        grading_begin.renderPass = s.grading_render_pass;
        grading_begin.framebuffer = s.grading_framebuffer;
        grading_begin.renderArea.extent = {s.width, s.height};
        grading_begin.clearValueCount = 1u;
        grading_begin.pClearValues = &grading_clear;
        vkCmdBeginRenderPass(s.command_buffer, &grading_begin, VK_SUBPASS_CONTENTS_INLINE);

        VkViewport grading_viewport{};
        grading_viewport.width = static_cast<float>(s.width);
        grading_viewport.height = static_cast<float>(s.height);
        grading_viewport.maxDepth = 1.0f;
        vkCmdSetViewport(s.command_buffer, 0, 1, &grading_viewport);
        VkRect2D grading_scissor{{0, 0}, {s.width, s.height}};
        vkCmdSetScissor(s.command_buffer, 0, 1, &grading_scissor);

        vkCmdBindPipeline(s.command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS, s.grading_pipeline);
        vkCmdBindDescriptorSets(s.command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS,
                                s.grading_pipeline_layout, 0, 1, &s.grading_descriptor_set, 0,
                                nullptr);
        ColorGradePushConstants grading_push{};
        float tod_saturation = 1.0f, tod_contrast = 1.0f, tod_lift = 0.0f;
        std::array<float, 3> tod_tint{1.0f, 1.0f, 1.0f};
        if (s.postfx.time_of_day_enabled) {
            const VicePalette palette = vice_palette();
            if (palette.valid) {
                const float golden = palette.golden;
                const float night = palette.night;
                const float k = s.postfx.time_of_day_strength;
                // Dawn/dusk lean pink-magenta (not plain orange); nights lean
                // violet-blue with extra saturation so neon reads.
                const std::array<float, 3> warm{1.06f, 0.94f, 1.08f};
                const std::array<float, 3> cool{0.90f, 0.93f, 1.16f};
                for (std::size_t c = 0u; c < 3u; ++c) {
                    tod_tint[c] = 1.0f + (warm[c] - 1.0f) * golden * k + (cool[c] - 1.0f) * night * k;
                }
                tod_saturation = 1.0f + 0.08f * golden * k + 0.12f * night * k;
                // Moonlit lift: keeps nights from going flat black.
                tod_lift = 0.07f * night * k;
            }
        }
        grading_push.saturation = s.color_grading_saturation * tod_saturation;
        grading_push.contrast = s.color_grading_contrast * tod_contrast;
        grading_push.brightness = s.color_grading_brightness + tod_lift;
        grading_push.tint_r = s.color_grading_tint[0] * tod_tint[0];
        grading_push.tint_g = s.color_grading_tint[1] * tod_tint[1];
        grading_push.tint_b = s.color_grading_tint[2] * tod_tint[2];
        grading_push.sharpen_strength = s.color_grading_sharpen;
        grading_push.texel_x = 1.0f / static_cast<float>(s.width);
        grading_push.texel_y = 1.0f / static_cast<float>(s.height);
        grading_push.dither_strength = s.postfx.dither_enabled ? s.postfx.dither_strength : 0.0f;
        grading_push.cas_sharpness = s.postfx.cas_enabled ? std::max(s.postfx.cas_sharpness, 0.001f) : 0.0f;
        grading_push.vhs_enabled = s.postfx.vhs_enabled ? 1.0f : 0.0f;
        grading_push.vhs_wiggle = s.postfx.vhs_wiggle;
        grading_push.vhs_smear = s.postfx.vhs_smear;
        grading_push.time_seconds = std::chrono::duration<float>(
            std::chrono::steady_clock::now() - s.postfx_epoch).count() * s.postfx.vhs_speed * 0.04f;
        vkCmdPushConstants(s.command_buffer, s.grading_pipeline_layout,
                           VK_SHADER_STAGE_FRAGMENT_BIT, 0, sizeof(grading_push), &grading_push);
        vkCmdDraw(s.command_buffer, 3u, 1u, 0u, 0u);

        vkCmdEndRenderPass(s.command_buffer);
    }

    VkBufferImageCopy region{};
    region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    region.imageSubresource.layerCount = 1u;
    region.imageExtent = {s.width, s.height, 1u};
    const VkImage final_source = s.color_grading_enabled
        ? s.grading_image
        : (s.fxaa_enabled ? s.fxaa_image : s.color_image);
    vkCmdCopyImageToBuffer(s.command_buffer, final_source, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                           s.readback_buffer, 1, &region);

    if (s.timestamps_supported) {
        vkCmdWriteTimestamp(s.command_buffer, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
                            s.timestamp_pool, 1u);
    }

    if (vkEndCommandBuffer(s.command_buffer) != VK_SUCCESS) {
        s.frame_buckets.clear();
        s.cloud_cameras.clear();
        return produced_frame;
    }

    s.pending_cpu_record_us =
        std::chrono::duration<double, std::micro>(std::chrono::steady_clock::now() -
                                                   record_start_time)
            .count();

    VkSubmitInfo submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};
    submit.commandBufferCount = 1u;
    submit.pCommandBuffers = &s.command_buffer;
    VkPipelineStageFlags present_read_wait_stage = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    if (s.present_just_ran) {
        submit.waitSemaphoreCount = 1u;
        submit.pWaitSemaphores = &s.present_color_read_done;
        submit.pWaitDstStageMask = &present_read_wait_stage;
        s.present_just_ran = false;
    }
    flush_uploads(s);  // this frame's new textures must be on the queue ahead of its draws
    vkResetFences(s.device, 1, &s.fence);
    if (vkQueueSubmit(s.graphics_queue, 1, &submit, s.fence) == VK_SUCCESS) {
        ++s.report.perf_queue_submit_calls;
        s.submission_pending = true;
        s.pending_vblank = vblank;
        s.pending_target_address = winner->address;
    }

    s.frame_buckets.clear();
    s.cloud_cameras.clear();
    return produced_frame;
}

bool ge_gpu_backend_finish_color_frame(std::uint64_t vblank) noexcept {
    const bool produced = finish_color_frame_impl(vblank);
    // The frame is submitted and its fence waited on: safe to swap textures now.
    if (state().enabled) apply_texture_replacements(state());
    return produced;
}

bool ge_gpu_backend_copy_game_frame_rgba(std::span<std::byte> destination) noexcept {
    const VulkanGeState &s = state();
    if (!s.frame_valid || destination.size() < s.frame_rgba.size()) return false;
    std::memcpy(destination.data(), s.frame_rgba.data(), s.frame_rgba.size());
    return true;
}

// Shows one CPU-rendered frame through the swapchain. Called from the platform's present functions
// (display_window_present*) on the vblank thread. Mirrors the swapchain branch of
// finish_color_frame_impl(), but samples a small upload texture instead of the GPU's own frame and
// never touches present_color_read_done (no GPU render target is read, so the next render has no
// dependency on this present).
static bool present_software_frame(VulkanGeState &s, std::span<const std::byte> rgba,
                                   std::uint32_t width, std::uint32_t height,
                                   bool aspect_locked) noexcept {
    const std::size_t bytes = static_cast<std::size_t>(width) * height * 4u;
    if (width == 0u || height == 0u || rgba.size() < bytes) return false;

    // Everything below shares present_command_buffer / present_fence with the GPU-frame present.
    vkWaitForFences(s.device, 1, &s.present_fence, VK_TRUE, 5'000'000'000ull);

    if (vkplat::surface_extent_can_change() && !s.swapchain_needs_recreate) {
        VkSurfaceCapabilitiesKHR surface_caps{};
        if (vkGetPhysicalDeviceSurfaceCapabilitiesKHR(s.physical_device, s.diagnostic_surface,
                                                       &surface_caps) == VK_SUCCESS &&
            surface_caps.currentExtent.width != 0xFFFFFFFFu &&
            (surface_caps.currentExtent.width != s.swapchain_extent.width ||
             surface_caps.currentExtent.height != s.swapchain_extent.height))
            s.swapchain_needs_recreate = true;
    }
    if (s.swapchain_needs_recreate && !recreate_present_swapchain(s)) {
        // Minimised (nothing to draw into): handled, the frame is simply not shown. If the swapchain
        // itself is gone the caller has to present another way.
        return s.swapchain != VK_NULL_HANDLE;
    }

    // Upload staging buffer, grown on demand.
    if (s.sw_staging == VK_NULL_HANDLE || s.sw_staging_capacity < bytes) {
        if (s.sw_staging_mapped != nullptr) vkUnmapMemory(s.device, s.sw_staging_memory);
        if (s.sw_staging != VK_NULL_HANDLE) vkDestroyBuffer(s.device, s.sw_staging, nullptr);
        if (s.sw_staging_memory != VK_NULL_HANDLE) vkFreeMemory(s.device, s.sw_staging_memory, nullptr);
        s.sw_staging = VK_NULL_HANDLE;
        s.sw_staging_memory = VK_NULL_HANDLE;
        s.sw_staging_mapped = nullptr;
        s.sw_staging_capacity = 0u;
        const VkDeviceSize capacity = std::max<VkDeviceSize>(bytes, 1024u * 1024u);
        if (!create_buffer(s, capacity, VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
                           VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                           s.sw_staging, s.sw_staging_memory) ||
            vkMapMemory(s.device, s.sw_staging_memory, 0, capacity, 0, &s.sw_staging_mapped) != VK_SUCCESS)
            return false;
        s.sw_staging_capacity = capacity;
    }

    // Upload image, replaced when the source size changes.
    if (s.sw_image == VK_NULL_HANDLE || s.sw_width != width || s.sw_height != height) {
        if (s.sw_view != VK_NULL_HANDLE) vkDestroyImageView(s.device, s.sw_view, nullptr);
        if (s.sw_image != VK_NULL_HANDLE) vkDestroyImage(s.device, s.sw_image, nullptr);
        if (s.sw_image_memory != VK_NULL_HANDLE) vkFreeMemory(s.device, s.sw_image_memory, nullptr);
        s.sw_view = VK_NULL_HANDLE;
        s.sw_image = VK_NULL_HANDLE;
        s.sw_image_memory = VK_NULL_HANDLE;
        s.sw_image_in_use = false;
        VkImageCreateInfo image_info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
        image_info.imageType = VK_IMAGE_TYPE_2D;
        image_info.format = VK_FORMAT_R8G8B8A8_UNORM;
        image_info.extent = {width, height, 1u};
        image_info.mipLevels = 1u;
        image_info.arrayLayers = 1u;
        image_info.samples = VK_SAMPLE_COUNT_1_BIT;
        image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
        image_info.usage = VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
        image_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        if (vkCreateImage(s.device, &image_info, nullptr, &s.sw_image) != VK_SUCCESS) return false;
        VkMemoryRequirements requirements{};
        vkGetImageMemoryRequirements(s.device, s.sw_image, &requirements);
        std::uint32_t type_index = 0u;
        if (!find_memory_type(s.physical_device, requirements.memoryTypeBits,
                              VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, type_index))
            return false;
        VkMemoryAllocateInfo allocate{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
        allocate.allocationSize = requirements.size;
        allocate.memoryTypeIndex = type_index;
        if (vkAllocateMemory(s.device, &allocate, nullptr, &s.sw_image_memory) != VK_SUCCESS ||
            vkBindImageMemory(s.device, s.sw_image, s.sw_image_memory, 0) != VK_SUCCESS)
            return false;
        VkImageViewCreateInfo view_info{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
        view_info.image = s.sw_image;
        view_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
        view_info.format = VK_FORMAT_R8G8B8A8_UNORM;
        view_info.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        view_info.subresourceRange.levelCount = 1u;
        view_info.subresourceRange.layerCount = 1u;
        if (vkCreateImageView(s.device, &view_info, nullptr, &s.sw_view) != VK_SUCCESS) return false;
        s.sw_width = width;
        s.sw_height = height;
        VkDescriptorImageInfo image_descriptor{};
        image_descriptor.sampler = s.present_sampler;
        image_descriptor.imageView = s.sw_view;
        image_descriptor.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        VkWriteDescriptorSet write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
        write.dstSet = s.sw_descriptor_set;
        write.descriptorCount = 1u;
        write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        write.pImageInfo = &image_descriptor;
        vkUpdateDescriptorSets(s.device, 1, &write, 0, nullptr);
    }

    std::uint32_t image_index = 0u;
    const VkResult acquired = vkAcquireNextImageKHR(s.device, s.swapchain, 5'000'000'000ull,
                                                    s.present_image_acquired, VK_NULL_HANDLE,
                                                    &image_index);
    if (acquired == VK_ERROR_OUT_OF_DATE_KHR) {
        s.swapchain_needs_recreate = true;
        return true;  // the next frame recreates the swapchain; one skipped frame is invisible
    }
    if (acquired != VK_SUCCESS && acquired != VK_SUBOPTIMAL_KHR) return false;
    vkResetFences(s.device, 1, &s.present_fence);

    std::memcpy(s.sw_staging_mapped, rgba.data(), bytes);
    vkResetCommandBuffer(s.present_command_buffer, 0);
    VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    if (vkBeginCommandBuffer(s.present_command_buffer, &begin) != VK_SUCCESS) return false;
    transition_image(s.present_command_buffer, s.sw_image,
                     s.sw_image_in_use ? VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL
                                       : VK_IMAGE_LAYOUT_UNDEFINED,
                     VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 0u, VK_ACCESS_TRANSFER_WRITE_BIT,
                     VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT);
    VkBufferImageCopy region{};
    region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    region.imageSubresource.layerCount = 1u;
    region.imageExtent = {width, height, 1u};
    vkCmdCopyBufferToImage(s.present_command_buffer, s.sw_staging, s.sw_image,
                           VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &region);
    transition_image(s.present_command_buffer, s.sw_image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                     VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, VK_ACCESS_TRANSFER_WRITE_BIT,
                     VK_ACCESS_SHADER_READ_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT,
                     VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);
    s.sw_image_in_use = true;

    VkClearValue clear{};
    clear.color = VkClearColorValue{{0.0f, 0.0f, 0.0f, 1.0f}};
    VkRenderPassBeginInfo pass{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
    pass.renderPass = s.present_render_pass;
    pass.framebuffer = s.swapchain_framebuffers[image_index];
    pass.renderArea.extent = s.swapchain_extent;
    pass.clearValueCount = 1u;
    pass.pClearValues = &clear;  // the clear paints the letterbox bars
    vkCmdBeginRenderPass(s.present_command_buffer, &pass, VK_SUBPASS_CONTENTS_INLINE);
    const DisplayConfiguration &display = vcs_configuration().display;
    const PresentationRectangle rect = calculate_presentation_rectangle(
        s.swapchain_extent.width, s.swapchain_extent.height, width, height,
        aspect_locked ? DisplayAspectMode::Preserve : display.aspect_mode, display.integer_scale);
    VkViewport viewport{};
    viewport.x = static_cast<float>(rect.x);
    viewport.y = static_cast<float>(rect.y);
    viewport.width = static_cast<float>(std::max(1, rect.width));
    viewport.height = static_cast<float>(std::max(1, rect.height));
    viewport.maxDepth = 1.0f;
    vkCmdSetViewport(s.present_command_buffer, 0, 1, &viewport);
    const VkRect2D scissor{{0, 0}, s.swapchain_extent};
    vkCmdSetScissor(s.present_command_buffer, 0, 1, &scissor);
    vkCmdBindPipeline(s.present_command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS, s.present_pipeline);
    vkCmdBindDescriptorSets(s.present_command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS,
                            s.present_pipeline_layout, 0, 1, &s.sw_descriptor_set, 0, nullptr);
    vkCmdDraw(s.present_command_buffer, 3u, 1u, 0u, 0u);
    vkCmdEndRenderPass(s.present_command_buffer);
    if (vkEndCommandBuffer(s.present_command_buffer) != VK_SUCCESS) return false;

    const VkPipelineStageFlags wait_stage = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    VkSubmitInfo submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};
    submit.waitSemaphoreCount = 1u;
    submit.pWaitSemaphores = &s.present_image_acquired;
    submit.pWaitDstStageMask = &wait_stage;
    submit.commandBufferCount = 1u;
    submit.pCommandBuffers = &s.present_command_buffer;
    submit.signalSemaphoreCount = 1u;
    submit.pSignalSemaphores = &s.present_render_finished;
    if (vkQueueSubmit(s.graphics_queue, 1, &submit, s.present_fence) != VK_SUCCESS) return false;
    VkPresentInfoKHR present_info{VK_STRUCTURE_TYPE_PRESENT_INFO_KHR};
    present_info.waitSemaphoreCount = 1u;
    present_info.pWaitSemaphores = &s.present_render_finished;
    present_info.swapchainCount = 1u;
    present_info.pSwapchains = &s.swapchain;
    present_info.pImageIndices = &image_index;
    const VkResult presented = vkQueuePresentKHR(s.graphics_queue, &present_info);
    if (presented == VK_ERROR_OUT_OF_DATE_KHR || presented == VK_SUBOPTIMAL_KHR)
        s.swapchain_needs_recreate = true;
    return true;
}

bool ge_gpu_backend_owns_window() noexcept {
    const VulkanGeState &s = state();
    return s.enabled && s.swapchain_migration_enabled && s.swapchain != VK_NULL_HANDLE;
}

bool ge_gpu_backend_present_rgba(std::span<const std::byte> rgba, std::uint32_t width,
                                 std::uint32_t height, bool aspect_locked) noexcept {
    VulkanGeState &s = state();
    if (!ge_gpu_backend_owns_window()) return false;
    // Serialised with the GE worker and finish_color_frame (the lock is recursive).
    std::lock_guard<std::recursive_mutex> guard(backend_mutex());
    if (!ge_gpu_backend_owns_window()) return false;
    return present_software_frame(s, rgba, width, height, aspect_locked);
}

bool ge_gpu_backend_presents_directly() noexcept {
    const VulkanGeState &s = state();
    // Must reflect "did this specific vblank actually get shown via the
    // swapchain," not just "is swapchain mode configured" -- see
    // swapchain_presented_this_call's comment. A vblank with nothing new
    // to render (e.g. during intro-video playback) needs this to report
    // false so vcs_profile.cpp's software/video present path still runs.
    return s.swapchain_migration_enabled && s.swapchain != VK_NULL_HANDLE &&
        s.swapchain_presented_this_call;
}

std::uint32_t ge_gpu_backend_owned_framebuffer() noexcept {
    const VulkanGeState &s = state();
    // report.presented_framebuffer_target is the bucket that actually won and
    // got rendered as of the last completed GPU frame (see
    // finish_color_frame()'s bucket selection) -- not display_framebuffer,
    // which only reflects the guest's last sceDisplaySetFrameBuf() call and
    // is provably one frame stale relative to whatever is being drawn right
    // now (see the comment on VulkanGeState::display_framebuffer). Callers
    // use this to decide which draws' CPU rasterization is safe to skip as
    // redundant with the GPU output; using the stale value here skipped
    // essentially nothing (target rarely matched it), while unconditionally
    // skipping everything for Vulkan (tried and reverted) skipped composition/
    // feedback passes too and broke water/reflection effects that read their
    // own guest-RAM pixels back as a texture. This is scoped to only the one
    // address actually confirmed rendered, leaving every other target's CPU
    // rasterization untouched.
    return s.frame_valid ? s.report.presented_framebuffer_target : 0u;
}

std::uint32_t ge_gpu_backend_display_framebuffer() noexcept { return state().display_framebuffer; }

std::uint32_t ge_gpu_backend_last_winner_target() noexcept {
    const VulkanGeState &s = state();
    return s.has_last_winner ? s.last_winner_address : 0u;
}

std::span<const std::byte> ge_gpu_backend_game_frame_rgba() noexcept {
    const VulkanGeState &s = state();
    if (!s.frame_valid) return {};
    return std::span<const std::byte>(s.frame_rgba.data(), s.frame_rgba.size());
}

bool ge_gpu_backend_copy_offscreen_rgba(std::span<std::byte> destination) noexcept {
    return ge_gpu_backend_copy_game_frame_rgba(destination);
}

void ge_gpu_backend_mark_window_presented() noexcept {
    state().report.gpu_frame_presented_to_window = true;
}

GeGpuBackendReport ge_gpu_backend_report() { return state().report; }

const char *ge_gpu_backend_name(GeGpuBackendKind kind) noexcept {
    switch (kind) {
    case GeGpuBackendKind::Software: return "software";
    case GeGpuBackendKind::DirectX12: return "directx12";
    case GeGpuBackendKind::Vulkan: return "vulkan";
    }
    return "unknown";
}

} // namespace vcs
