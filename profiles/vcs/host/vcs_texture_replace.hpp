#pragma once

#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace vcs {

// A texture ready to upload: RGBA8, plus how many power-of-two doublings it is
// larger than the game's own texture. The shader normalizes texture coordinates
// by the ORIGINAL size, so `scale_shift` must travel with the texture.
struct ReplacementTexture {
    std::uint32_t width{};
    std::uint32_t height{};
    std::uint8_t scale_shift{};
    std::vector<std::uint8_t> rgba;
};

// Reads the [Textures] settings once. `directory` is the folder holding
// `<hash>.png` replacements and (when dumping) receives the game's originals.
void texture_pipeline_configure(const std::string &directory, bool replacement_enabled,
                                bool dump_originals, bool upscale_enabled,
                                std::uint32_t upscale_scale, float upscale_sharpen) noexcept;
// upscale_scale: 0 = automatic (4x for textures up to 64 px, 2x up to 256 px), or 2/4/8.

// Stable identity of a decoded game texture: FNV-1a 64 over its RGBA bytes and
// dimensions. Recolored variants (CLUT paint) hash differently on purpose.
[[nodiscard]] std::uint64_t texture_content_hash(std::span<const std::byte> rgba8,
                                                 std::uint32_t width, std::uint32_t height) noexcept;

// Asynchronous use (what the renderer does): submit a decoded texture right after
// uploading the original, and poll for finished replacements at a frame boundary.
// A worker thread hashes, dumps, loads a replacement PNG or upscales, and runs a
// per-texture quality gate, so the render thread never stalls on it.
// What the game uses a texture for, gathered from the draw that first uploads it.
enum TextureUsage : std::uint32_t {
    kUsageThrough = 1u << 0,      // 2D / through-mode draw: HUD, menus, sprites
    kUsageHudCandidate = 1u << 1, // renderer classified it as HUD
    kUsageAlphaTest = 1u << 2,    // alpha-tested cutout: foliage, fences, signs
    kUsageBlend = 1u << 3,        // blended: glass, water, smoke, decals
    kUsageDepthWrite = 1u << 4,   // opaque world surface
    kUsageReplace = 1u << 5,      // REPLACE texture function
    kUsageAdd = 1u << 6,          // ADD texture function: glows, coronas
};

// Cheap word-wise fingerprint of a decoded texture. The renderer stamps it on the
// cache entry at upload and the worker stamps it on the result, so a finished
// replacement is only applied to the texture it was made from.
[[nodiscard]] std::uint64_t texture_signature(std::span<const std::byte> rgba8) noexcept;

struct TextureResult {
    std::uint64_t key{};
    std::uint64_t source_signature{};
    std::uint32_t original_width{};
    std::uint32_t original_height{};
    ReplacementTexture texture;
};
void texture_pipeline_submit(std::uint64_t key, std::span<const std::byte> rgba8,
                             std::uint32_t width, std::uint32_t height,
                             std::uint32_t usage_flags) noexcept;
void texture_pipeline_poll(std::vector<TextureResult> &out, std::size_t max_results) noexcept;
void texture_pipeline_shutdown() noexcept;
[[nodiscard]] bool texture_pipeline_active() noexcept;

// What a texture is, inferred from how the game uses it plus its own statistics.
// Each class gets its own treatment: a road is not a sign is not a palm frond.
enum class TextureClass : std::uint8_t {
    Ui,          // 2D / HUD art: left untouched
    Graphic,     // flat-color art with hard edges: signs, logos, decals
    Structured,  // regular masonry / tile / panel patterns: bricks, windows, cladding
    Organic,     // grainy natural or worn surfaces: asphalt, concrete, grass, dirt, sand
    Smooth,      // low-detail gradients: skin, paint, sky-like fills
    Cutout,      // alpha-tested foliage, fences: alpha must stay crisp
    Translucent, // blended glass, water, smoke, glows: no added detail
};

[[nodiscard]] TextureClass texture_classify(std::span<const std::byte> rgba8, std::uint32_t width,
                                            std::uint32_t height, std::uint32_t usage_flags);
[[nodiscard]] const char *texture_class_name(TextureClass texture_class) noexcept;

// Class-aware "modern" upscale: Catmull-Rom resampling, then halo-clamped local
// contrast, crevice (cavity) darkening and grain-preserving micro detail, with
// amounts chosen per class. `strength` scales all enhancements (0 = plain upscale).
[[nodiscard]] ReplacementTexture texture_upscale_modern(std::span<const std::byte> rgba8,
                                                        std::uint32_t width, std::uint32_t height,
                                                        std::uint32_t scale_shift,
                                                        TextureClass texture_class, float strength);

// The conservative upscaler on its own (used by the pipeline and by tools/tests):
// Catmull-Rom resampling in premultiplied alpha, then a gentle luma-only
// unsharp, with hard alpha cutouts kept hard. No detail is invented.
[[nodiscard]] ReplacementTexture texture_upscale_clean(std::span<const std::byte> rgba8,
                                                       std::uint32_t width, std::uint32_t height,
                                                       std::uint32_t scale_shift, float sharpen);

} // namespace vcs
