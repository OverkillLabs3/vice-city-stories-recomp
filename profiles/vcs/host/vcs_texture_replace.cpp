#include "vcs_texture_replace.hpp"

#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#define STBI_ONLY_PNG
#define STBI_NO_STDIO_WARN
#include "../third_party/stb/stb_image.h"
#include "../third_party/stb/stb_image_write.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <array>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <condition_variable>
#include <deque>
#include <mutex>
#include <thread>
#include <unordered_set>

namespace vcs {
namespace {

struct PipelineState {
    std::string directory{"Textures"};
    bool replacement_enabled{true};
    bool dump_originals{false};
    bool upscale_enabled{false};
    std::uint32_t upscale_shift{0u};   // 0 = automatic by texture size
    float upscale_sharpen{0.25f};
    std::unordered_set<std::uint64_t> dumped;
    std::mutex mutex;
    // Worker queue
    struct Job {
        std::uint64_t key;
        std::vector<std::uint8_t> rgba;
        std::uint32_t width;
        std::uint32_t height;
        std::uint32_t usage;
    };
    std::deque<Job> jobs;
    std::deque<TextureResult> results;
    std::condition_variable wake;
    std::thread worker;
    bool stop{false};
    bool started{false};

    ~PipelineState() {
        // A joinable std::thread at static destruction would call std::terminate.
        {
            std::lock_guard<std::mutex> lock(mutex);
            stop = true;
        }
        wake.notify_all();
        if (worker.joinable()) worker.join();
    }
};

PipelineState &pipeline() {
    static PipelineState state;
    return state;
}

std::string hash_file_name(std::uint64_t hash) {
    char name[32];
    std::snprintf(name, sizeof(name), "%016llx.png", static_cast<unsigned long long>(hash));
    return name;
}

// Catmull-Rom weights for a fractional position t in [0,1).
std::array<float, 4> catmull_rom(float t) noexcept {
    const float t2 = t * t;
    const float t3 = t2 * t;
    return {-0.5f * t3 + t2 - 0.5f * t, 1.5f * t3 - 2.5f * t2 + 1.0f, -1.5f * t3 + 2.0f * t2 + 0.5f * t,
            0.5f * t3 - 0.5f * t2};
}

float luma(float r, float g, float b) noexcept { return 0.299f * r + 0.587f * g + 0.114f * b; }

} // namespace

void texture_pipeline_configure(const std::string &directory, bool replacement_enabled,
                                bool dump_originals, bool upscale_enabled,
                                std::uint32_t upscale_scale, float upscale_sharpen) noexcept {
    PipelineState &p = pipeline();
    std::lock_guard<std::mutex> lock(p.mutex);
    p.directory = directory;
    p.replacement_enabled = replacement_enabled;
    p.dump_originals = dump_originals;
    p.upscale_enabled = upscale_enabled;
    p.upscale_shift = upscale_scale == 0u ? 0u : upscale_scale >= 8u ? 3u : upscale_scale >= 4u ? 2u : 1u;
    p.upscale_sharpen = std::clamp(upscale_sharpen, 0.0f, 1.0f);
    if (dump_originals || replacement_enabled) {
        std::error_code ec;
        std::filesystem::create_directories(directory, ec);
    }
}

std::uint64_t texture_content_hash(std::span<const std::byte> rgba8, std::uint32_t width,
                                   std::uint32_t height) noexcept {
    std::uint64_t hash = 0xCBF29CE484222325ull;
    const auto mix = [&hash](std::uint64_t value) {
        hash ^= value;
        hash *= 0x100000001B3ull;
    };
    mix(width);
    mix(height);
    for (const std::byte b : rgba8) mix(static_cast<std::uint8_t>(b));
    return hash;
}

std::uint64_t texture_signature(std::span<const std::byte> rgba8) noexcept {
    std::uint64_t hash = 0xCBF29CE484222325ull ^ rgba8.size();
    const std::byte *p = rgba8.data();
    std::size_t n = rgba8.size();
    for (; n >= 8u; n -= 8u, p += 8) {
        std::uint64_t word;
        std::memcpy(&word, p, 8);
        hash = (hash ^ word) * 0x100000001B3ull;
        hash ^= hash >> 29;
    }
    for (; n > 0u; --n, ++p) hash = (hash ^ static_cast<std::uint8_t>(*p)) * 0x100000001B3ull;
    return hash;
}

const char *texture_class_name(TextureClass c) noexcept {
    switch (c) {
    case TextureClass::Ui: return "ui";
    case TextureClass::Graphic: return "graphic";
    case TextureClass::Structured: return "structured";
    case TextureClass::Organic: return "organic";
    case TextureClass::Smooth: return "smooth";
    case TextureClass::Cutout: return "cutout";
    case TextureClass::Translucent: return "translucent";
    }
    return "?";
}

TextureClass texture_classify(std::span<const std::byte> rgba8, std::uint32_t width,
                              std::uint32_t height, std::uint32_t usage) {
    if ((usage & (kUsageThrough | kUsageHudCandidate)) != 0u) return TextureClass::Ui;
    const auto *px = reinterpret_cast<const std::uint8_t *>(rgba8.data());
    const std::size_t count = static_cast<std::size_t>(width) * height;
    // Alpha profile
    std::size_t transparent = 0, opaque = 0, partial = 0;
    for (std::size_t i = 0; i < count; ++i) {
        const std::uint8_t a = px[i * 4u + 3u];
        if (a < 16u) ++transparent; else if (a > 239u) ++opaque; else ++partial;
    }
    const float t_frac = static_cast<float>(transparent) / static_cast<float>(count);
    const float p_frac = static_cast<float>(partial) / static_cast<float>(count);
    if ((usage & kUsageAlphaTest) != 0u || (t_frac > 0.04f && p_frac < 0.20f)) return TextureClass::Cutout;
    if ((usage & (kUsageBlend | kUsageAdd)) != 0u && (usage & kUsageDepthWrite) == 0u) return TextureClass::Translucent;
    if (p_frac > 0.30f) return TextureClass::Translucent;

    // Luma plane + statistics
    std::vector<float> lum(count);
    std::unordered_set<std::uint32_t> colors;
    double mean = 0.0;
    for (std::size_t i = 0; i < count; ++i) {
        lum[i] = luma(px[i * 4u] / 255.0f, px[i * 4u + 1u] / 255.0f, px[i * 4u + 2u] / 255.0f);
        mean += lum[i];
        colors.insert((static_cast<std::uint32_t>(px[i * 4u] >> 4) << 8) | (static_cast<std::uint32_t>(px[i * 4u + 1u] >> 4) << 4) |
                      static_cast<std::uint32_t>(px[i * 4u + 2u] >> 4));
    }
    mean /= static_cast<double>(count);
    double var = 0.0;
    for (float v : lum) var += (v - mean) * (v - mean);
    const float stddev = static_cast<float>(std::sqrt(var / static_cast<double>(count)));
    // Gradient energy split into axis-aligned (h/v) edges vs the rest.
    double gx_e = 0.0, gy_e = 0.0, g_all = 0.0, strong = 0.0;
    for (std::uint32_t y = 0u; y + 1u < height; ++y) {
        for (std::uint32_t x = 0u; x + 1u < width; ++x) {
            const float gx = lum[y * width + x + 1u] - lum[y * width + x];
            const float gy = lum[(y + 1u) * width + x] - lum[y * width + x];
            gx_e += std::fabs(gx); gy_e += std::fabs(gy);
            const float m = std::sqrt(gx * gx + gy * gy);
            g_all += m;
            if (m > 0.12f) strong += 1.0;
        }
    }
    const double norm = static_cast<double>(width - 1u) * static_cast<double>(height - 1u);
    const float mean_grad = static_cast<float>(g_all / std::max(norm, 1.0));
    const float strong_frac = static_cast<float>(strong / std::max(norm, 1.0));
    const float axis = static_cast<float>((std::max(gx_e, gy_e)) / std::max(gx_e + gy_e, 1.0e-6));

    if (colors.size() <= 20u && strong_frac > 0.04f) return TextureClass::Graphic;
    if (mean_grad < 0.012f && stddev < 0.06f) return TextureClass::Smooth;
    // Structured masonry/panel: clear strong edges arranged mostly along axes,
    // not just grain. Organic: lots of weak local variation, few strong edges.
    if (strong_frac > 0.10f && axis > 0.55f) return TextureClass::Structured;
    if (strong_frac < 0.06f) return TextureClass::Organic;
    return TextureClass::Structured;
}

ReplacementTexture texture_upscale_clean(std::span<const std::byte> rgba8, std::uint32_t width,
                                         std::uint32_t height, std::uint32_t scale_shift,
                                         float sharpen) {
    ReplacementTexture out;
    if (width == 0u || height == 0u || scale_shift == 0u || scale_shift > 3u ||
        rgba8.size() < static_cast<std::size_t>(width) * height * 4u)
        return out;
    const std::uint32_t factor = 1u << scale_shift;
    const std::uint32_t ow = width * factor;
    const std::uint32_t oh = height * factor;
    const auto *src = reinterpret_cast<const std::uint8_t *>(rgba8.data());

    // Premultiplied float source; detect a hard (binary) alpha cutout.
    std::vector<float> pm(static_cast<std::size_t>(width) * height * 4u);
    bool binary_alpha = true;
    bool any_alpha = false;
    for (std::size_t i = 0u; i < static_cast<std::size_t>(width) * height; ++i) {
        const float a = static_cast<float>(src[i * 4u + 3u]) / 255.0f;
        if (src[i * 4u + 3u] != 0u && src[i * 4u + 3u] != 255u) binary_alpha = false;
        if (src[i * 4u + 3u] != 255u) any_alpha = true;
        pm[i * 4u + 0u] = static_cast<float>(src[i * 4u + 0u]) / 255.0f * a;
        pm[i * 4u + 1u] = static_cast<float>(src[i * 4u + 1u]) / 255.0f * a;
        pm[i * 4u + 2u] = static_cast<float>(src[i * 4u + 2u]) / 255.0f * a;
        pm[i * 4u + 3u] = a;
    }
    const auto fetch = [&](std::int64_t x, std::int64_t y) -> const float * {
        // Textures wrap in the game; wrapping keeps seams matched when tiled.
        const std::int64_t wx = ((x % width) + width) % width;
        const std::int64_t wy = ((y % height) + height) % height;
        return &pm[(static_cast<std::size_t>(wy) * width + static_cast<std::size_t>(wx)) * 4u];
    };

    std::vector<float> up(static_cast<std::size_t>(ow) * oh * 4u);
    for (std::uint32_t oy = 0u; oy < oh; ++oy) {
        const float fy = (static_cast<float>(oy) + 0.5f) / static_cast<float>(factor) - 0.5f;
        const std::int64_t y0 = static_cast<std::int64_t>(std::floor(fy));
        const auto wy = catmull_rom(fy - static_cast<float>(y0));
        for (std::uint32_t ox = 0u; ox < ow; ++ox) {
            const float fx = (static_cast<float>(ox) + 0.5f) / static_cast<float>(factor) - 0.5f;
            const std::int64_t x0 = static_cast<std::int64_t>(std::floor(fx));
            const auto wx = catmull_rom(fx - static_cast<float>(x0));
            float acc[4] = {0.0f, 0.0f, 0.0f, 0.0f};
            for (int j = 0; j < 4; ++j) {
                for (int i = 0; i < 4; ++i) {
                    const float *p = fetch(x0 + i - 1, y0 + j - 1);
                    const float w = wx[static_cast<std::size_t>(i)] * wy[static_cast<std::size_t>(j)];
                    acc[0] += p[0] * w;
                    acc[1] += p[1] * w;
                    acc[2] += p[2] * w;
                    acc[3] += p[3] * w;
                }
            }
            float *dst = &up[(static_cast<std::size_t>(oy) * ow + ox) * 4u];
            dst[0] = acc[0]; dst[1] = acc[1]; dst[2] = acc[2]; dst[3] = acc[3];
        }
    }

    // Gentle luma-only unsharp on the (premultiplied) result; alpha untouched.
    std::vector<float> sharp = up;
    if (sharpen > 0.0f) {
        const auto at = [&](std::int64_t x, std::int64_t y) -> const float * {
            x = std::clamp<std::int64_t>(x, 0, ow - 1);
            y = std::clamp<std::int64_t>(y, 0, oh - 1);
            return &up[(static_cast<std::size_t>(y) * ow + static_cast<std::size_t>(x)) * 4u];
        };
        for (std::uint32_t y = 0u; y < oh; ++y) {
            for (std::uint32_t x = 0u; x < ow; ++x) {
                const float *c = at(x, y);
                float blur[3] = {0.0f, 0.0f, 0.0f};
                for (int j = -1; j <= 1; ++j)
                    for (int i = -1; i <= 1; ++i) {
                        const float *p = at(static_cast<std::int64_t>(x) + i, static_cast<std::int64_t>(y) + j);
                        const float w = (i == 0 && j == 0) ? 4.0f : (i == 0 || j == 0) ? 2.0f : 1.0f;
                        blur[0] += p[0] * w; blur[1] += p[1] * w; blur[2] += p[2] * w;
                    }
                blur[0] /= 16.0f; blur[1] /= 16.0f; blur[2] /= 16.0f;
                const float delta = luma(c[0], c[1], c[2]) - luma(blur[0], blur[1], blur[2]);
                float *dst = &sharp[(static_cast<std::size_t>(y) * ow + x) * 4u];
                const float boost = delta * sharpen;
                dst[0] = c[0] + boost * std::max(c[3], 0.0f);
                dst[1] = c[1] + boost * std::max(c[3], 0.0f);
                dst[2] = c[2] + boost * std::max(c[3], 0.0f);
            }
        }
    }

    out.width = ow;
    out.height = oh;
    out.scale_shift = static_cast<std::uint8_t>(scale_shift);
    out.rgba.resize(static_cast<std::size_t>(ow) * oh * 4u);
    for (std::size_t i = 0u; i < static_cast<std::size_t>(ow) * oh; ++i) {
        float a = std::clamp(sharp[i * 4u + 3u], 0.0f, 1.0f);
        if (any_alpha && binary_alpha) {
            // Keep hard cutouts (fences, foliage) hard instead of soft-edged.
            const float u = std::clamp((a - 0.35f) / 0.30f, 0.0f, 1.0f);
            a = u * u * (3.0f - 2.0f * u);
        }
        const float inv = a > 1.0e-4f ? 1.0f / std::max(sharp[i * 4u + 3u], 1.0e-4f) : 0.0f;
        for (int c = 0; c < 3; ++c) {
            const float v = std::clamp(sharp[i * 4u + static_cast<std::size_t>(c)] * inv, 0.0f, 1.0f);
            out.rgba[i * 4u + static_cast<std::size_t>(c)] = static_cast<std::uint8_t>(v * 255.0f + 0.5f);
        }
        out.rgba[i * 4u + 3u] = static_cast<std::uint8_t>(a * 255.0f + 0.5f);
    }
    return out;
}

ReplacementTexture texture_upscale_modern(std::span<const std::byte> rgba8, std::uint32_t width,
                                          std::uint32_t height, std::uint32_t scale_shift,
                                          TextureClass cls, float strength) {
    ReplacementTexture out = texture_upscale_clean(rgba8, width, height, scale_shift, 0.0f);
    if (out.rgba.empty() || strength <= 0.0f || cls == TextureClass::Ui || cls == TextureClass::Translucent)
        return out;
    const std::uint32_t ow = out.width, oh = out.height;
    const std::uint32_t factor = 1u << scale_shift;
    const std::size_t n = static_cast<std::size_t>(ow) * oh;

    struct Amounts { float clarity, clarity_radius, cavity, cavity_radius, detail; };
    Amounts a{};
    switch (cls) {
    case TextureClass::Graphic:    a = {0.35f, 1.0f, 0.00f, 0.0f, 0.00f}; break;
    case TextureClass::Structured: a = {0.45f, 1.5f, 0.55f, 3.0f, 0.10f}; break;
    case TextureClass::Organic:    a = {0.30f, 2.0f, 0.25f, 4.0f, 0.35f}; break;
    case TextureClass::Smooth:     a = {0.10f, 2.0f, 0.00f, 0.0f, 0.05f}; break;
    case TextureClass::Cutout:     a = {0.25f, 1.0f, 0.00f, 0.0f, 0.05f}; break;
    default: return out;
    }
    a.clarity *= strength; a.cavity *= strength; a.detail *= strength;

    std::vector<float> rgb(n * 3u), lum(n);
    for (std::size_t i = 0; i < n; ++i) {
        for (int c = 0; c < 3; ++c) rgb[i * 3u + static_cast<std::size_t>(c)] = out.rgba[i * 4u + static_cast<std::size_t>(c)] / 255.0f;
        lum[i] = luma(rgb[i * 3u], rgb[i * 3u + 1u], rgb[i * 3u + 2u]);
    }
    // Separable box blur (two passes ~ gaussian) of the luma plane, wrapping like the game's tiling.
    const auto blur_luma = [&](const std::vector<float> &src, int radius) {
        std::vector<float> tmp(n), dst(n);
        const int r = std::max(1, radius);
        for (int pass = 0; pass < 2; ++pass) {
            const std::vector<float> &in = pass == 0 ? src : dst;
            for (std::uint32_t y = 0; y < oh; ++y) {
                float acc = 0.0f;
                for (int k = -r; k <= r; ++k) acc += in[static_cast<std::size_t>(y) * ow + static_cast<std::uint32_t>(((k % static_cast<int>(ow)) + static_cast<int>(ow)) % static_cast<int>(ow))];
                for (std::uint32_t x = 0; x < ow; ++x) {
                    tmp[static_cast<std::size_t>(y) * ow + x] = acc / static_cast<float>(2 * r + 1);
                    const std::uint32_t add = static_cast<std::uint32_t>(((static_cast<int>(x) + r + 1) % static_cast<int>(ow) + static_cast<int>(ow)) % static_cast<int>(ow));
                    const std::uint32_t sub = static_cast<std::uint32_t>(((static_cast<int>(x) - r) % static_cast<int>(ow) + static_cast<int>(ow)) % static_cast<int>(ow));
                    acc += in[static_cast<std::size_t>(y) * ow + add] - in[static_cast<std::size_t>(y) * ow + sub];
                }
            }
            for (std::uint32_t x = 0; x < ow; ++x) {
                float acc = 0.0f;
                for (int k = -r; k <= r; ++k) acc += tmp[static_cast<std::size_t>(((k % static_cast<int>(oh)) + static_cast<int>(oh)) % static_cast<int>(oh)) * ow + x];
                for (std::uint32_t y = 0; y < oh; ++y) {
                    dst[static_cast<std::size_t>(y) * ow + x] = acc / static_cast<float>(2 * r + 1);
                    const std::uint32_t add = static_cast<std::uint32_t>(((static_cast<int>(y) + r + 1) % static_cast<int>(oh) + static_cast<int>(oh)) % static_cast<int>(oh));
                    const std::uint32_t sub = static_cast<std::uint32_t>(((static_cast<int>(y) - r) % static_cast<int>(oh) + static_cast<int>(oh)) % static_cast<int>(oh));
                    acc += tmp[static_cast<std::size_t>(add) * ow + x] - tmp[static_cast<std::size_t>(sub) * ow + x];
                }
            }
        }
        return dst;
    };
    const int clarity_r = std::max(1, static_cast<int>(a.clarity_radius * static_cast<float>(factor) * 0.5f + 0.5f));
    const int cavity_r = std::max(1, static_cast<int>(a.cavity_radius * static_cast<float>(factor) * 0.5f + 0.5f));
    const std::vector<float> blur_c = a.clarity > 0.0f ? blur_luma(lum, clarity_r) : std::vector<float>();
    const std::vector<float> blur_v = a.cavity > 0.0f ? blur_luma(lum, cavity_r) : std::vector<float>();

    // Local grain amplitude from the ORIGINAL texture (3x3 luma std, bilinear-upsampled by sampling),
    // so detail is added only where the source already had grain and never in flat areas.
    std::vector<float> grain(static_cast<std::size_t>(width) * height, 0.0f);
    if (a.detail > 0.0f) {
        const auto *src = reinterpret_cast<const std::uint8_t *>(rgba8.data());
        for (std::uint32_t y = 0; y < height; ++y)
            for (std::uint32_t x = 0; x < width; ++x) {
                float m = 0.0f, m2 = 0.0f;
                for (int j = -1; j <= 1; ++j)
                    for (int i = -1; i <= 1; ++i) {
                        const std::uint32_t xx = (x + width + static_cast<std::uint32_t>(i)) % width;
                        const std::uint32_t yy = (y + height + static_cast<std::uint32_t>(j)) % height;
                        const std::size_t k = (static_cast<std::size_t>(yy) * width + xx) * 4u;
                        const float l = luma(src[k] / 255.0f, src[k + 1u] / 255.0f, src[k + 2u] / 255.0f);
                        m += l; m2 += l * l;
                    }
                m /= 9.0f; m2 /= 9.0f;
                grain[static_cast<std::size_t>(y) * width + x] = std::sqrt(std::max(m2 - m * m, 0.0f));
            }
    }
    const auto hash01 = [](std::uint32_t x, std::uint32_t y) {
        std::uint32_t h = x * 374761393u + y * 668265263u;
        h = (h ^ (h >> 13)) * 1274126177u;
        return static_cast<float>((h ^ (h >> 16)) & 0xFFFFu) / 65535.0f;
    };

    for (std::uint32_t y = 0; y < oh; ++y) {
        for (std::uint32_t x = 0; x < ow; ++x) {
            const std::size_t i = static_cast<std::size_t>(y) * ow + x;
            const float alpha = out.rgba[i * 4u + 3u] / 255.0f;
            if (alpha < 0.02f) continue;
            float l = lum[i];
            float gain = 1.0f;  // multiplicative luminance change
            if (a.clarity > 0.0f) {
                // local contrast; halo-clamped to the neighborhood range so edges never ring
                float lo = 1.0f, hi = 0.0f;
                for (int j = -1; j <= 1; ++j)
                    for (int k = -1; k <= 1; ++k) {
                        const std::uint32_t xx = (x + ow + static_cast<std::uint32_t>(k)) % ow;
                        const std::uint32_t yy = (y + oh + static_cast<std::uint32_t>(j)) % oh;
                        const float v = lum[static_cast<std::size_t>(yy) * ow + xx];
                        lo = std::min(lo, v); hi = std::max(hi, v);
                    }
                const float target = std::clamp(l + a.clarity * (l - blur_c[i]), lo - 0.02f, hi + 0.02f);
                l = target;
            }
            float cavity = 0.0f;
            if (a.cavity > 0.0f) {
                cavity = std::clamp((blur_v[i] - lum[i]) / 0.14f, 0.0f, 1.0f);
                gain *= 1.0f - a.cavity * 0.45f * cavity;
            }
            float noise = 0.0f;
            if (a.detail > 0.0f) {
                const std::uint32_t sx = std::min(x / factor, width - 1u), sy = std::min(y / factor, height - 1u);
                const float amp = std::min(grain[static_cast<std::size_t>(sy) * width + sx], 0.12f);
                noise = (hash01(x % ow, y % oh) - 0.5f) * 2.0f * a.detail * amp * 0.9f;
            }
            const float base_l = std::max(lum[i], 1.0e-3f);
            const float new_l = std::clamp(l * gain + noise, 0.0f, 1.0f);
            const float ratio = new_l / base_l;
            for (int c = 0; c < 3; ++c) {
                const float v = std::clamp(rgb[i * 3u + static_cast<std::size_t>(c)] * ratio, 0.0f, 1.0f);
                out.rgba[i * 4u + static_cast<std::size_t>(c)] = static_cast<std::uint8_t>(v * 255.0f + 0.5f);
            }
        }
    }
    return out;
}

namespace {

// Round-trip fidelity of an upscale: box-downsample it back and compare to the
// original. A faithful upscaler stays high; anything that invented or destroyed
// detail drops.
double round_trip_psnr(const ReplacementTexture &up, std::span<const std::byte> src,
                       std::uint32_t width, std::uint32_t height) noexcept {
    const std::uint32_t factor = 1u << up.scale_shift;
    double sum_sq = 0.0;
    for (std::uint32_t y = 0u; y < height; ++y) {
        for (std::uint32_t x = 0u; x < width; ++x) {
            for (int c = 0; c < 4; ++c) {
                double acc = 0.0;
                for (std::uint32_t j = 0u; j < factor; ++j)
                    for (std::uint32_t i = 0u; i < factor; ++i)
                        acc += up.rgba[(static_cast<std::size_t>(y * factor + j) * up.width + (x * factor + i)) * 4u +
                                       static_cast<std::size_t>(c)];
                acc /= static_cast<double>(factor * factor);
                const double ref = static_cast<double>(static_cast<std::uint8_t>(
                    src[(static_cast<std::size_t>(y) * width + x) * 4u + static_cast<std::size_t>(c)]));
                sum_sq += (acc - ref) * (acc - ref);
            }
        }
    }
    const double mse = sum_sq / (static_cast<double>(width) * height * 4.0) / (255.0 * 255.0);
    return mse < 1.0e-10 ? 99.0 : 10.0 * std::log10(1.0 / mse);
}

// Mean absolute neighbour difference per colour channel. Real art tops out around 36;
// the game's non-image data buffers (which sample as RGB noise) start above 55.
bool looks_like_noise(std::span<const std::byte> rgba, std::uint32_t width, std::uint32_t height) noexcept {
    double sum = 0.0;
    std::size_t count = 0u;
    const auto px = [&](std::uint32_t x, std::uint32_t y, std::size_t c) {
        return static_cast<int>(static_cast<std::uint8_t>(rgba[(static_cast<std::size_t>(y) * width + x) * 4u + c]));
    };
    for (std::uint32_t y = 0u; y + 1u < height; ++y)
        for (std::uint32_t x = 0u; x + 1u < width; ++x)
            for (std::size_t c = 0u; c < 3u; ++c) {
                sum += std::abs(px(x, y, c) - px(x + 1u, y, c)) + std::abs(px(x, y, c) - px(x, y + 1u, c));
                count += 2u;
            }
    return count != 0u && sum / static_cast<double>(count) > 45.0;
}

std::uint32_t auto_scale_shift(std::uint32_t width, std::uint32_t height) noexcept {
    const std::uint32_t largest = std::max(width, height);
    if (largest <= 64u) return 2u;   // 4x
    if (largest <= 256u) return 1u;  // 2x
    return 0u;                       // big textures are left alone
}

// Full worker-side processing of one decoded texture; returns true and fills `out`
// when a replacement/upscale should be swapped in.
bool process_job(const PipelineState::Job &job, ReplacementTexture &out) noexcept {
    PipelineState &p = pipeline();
    std::string directory;
    bool replacement = false, dump = false, upscale = false;
    std::uint32_t shift = 0u;
    float sharpen = 0.25f;
    {
        std::lock_guard<std::mutex> lock(p.mutex);
        directory = p.directory;
        replacement = p.replacement_enabled;
        dump = p.dump_originals;
        upscale = p.upscale_enabled;
        shift = p.upscale_shift;
        sharpen = p.upscale_sharpen;
    }
    // Key and dump exactly width*height*4 bytes: the same bytes an offline tool can decode
    // straight from the game's archives, so replacement packs can be built without the game.
    const std::size_t exact_bytes = static_cast<std::size_t>(job.width) * job.height * 4u;
    const std::span<const std::byte> pixels(reinterpret_cast<const std::byte *>(job.rgba.data()),
                                            std::min(job.rgba.size(), exact_bytes));
    if (job.width < 4u || job.height < 4u) return false;  // palettes / gradients: leave alone
    const std::uint64_t hash = texture_content_hash(pixels, job.width, job.height);
    const std::string file = directory + "/" + hash_file_name(hash);

    if (dump) {
        bool first = false;
        {
            std::lock_guard<std::mutex> lock(p.mutex);
            first = p.dumped.insert(hash).second;
        }
        if (first) {
            std::error_code ec;
            std::filesystem::create_directories(directory + "/originals", ec);
            stbi_write_png((directory + "/originals/" + hash_file_name(hash)).c_str(),
                           static_cast<int>(job.width), static_cast<int>(job.height), 4, pixels.data(),
                           static_cast<int>(job.width) * 4);
            if (std::FILE *meta = std::fopen((directory + "/originals/" +
                                              hash_file_name(hash) + ".usage").c_str(), "w")) {
                std::fprintf(meta, "%u\n", job.usage);
                std::fclose(meta);
            }
        }
    }
    if (replacement && std::filesystem::exists(file)) {
        int w = 0, h = 0, channels = 0;
        if (unsigned char *loaded = stbi_load(file.c_str(), &w, &h, &channels, 4)) {
            std::uint32_t k = 0u;
            for (std::uint32_t s = 0u; s <= 3u; ++s)
                if (static_cast<std::uint32_t>(w) == (job.width << s) && static_cast<std::uint32_t>(h) == (job.height << s)) k = s;
            const bool exact_match = static_cast<std::uint32_t>(w) == (job.width << k) &&
                                     static_cast<std::uint32_t>(h) == (job.height << k);
            if (exact_match && w <= 8192 && h <= 8192) {
                out.width = static_cast<std::uint32_t>(w);
                out.height = static_cast<std::uint32_t>(h);
                out.scale_shift = static_cast<std::uint8_t>(k);
                out.rgba.assign(loaded, loaded + static_cast<std::size_t>(w) * h * 4u);
                stbi_image_free(loaded);
                return true;  // hand-made / external replacements are trusted as is
            }
            stbi_image_free(loaded);
        }
    }
    if (!upscale) return false;
    // 2D / HUD art is deliberately crisp pixel art: explicit replacement files
    // above may replace it, but the automatic upscaler never touches it.
    if ((job.usage & (kUsageThrough | kUsageHudCandidate)) != 0u) return false;
    if (looks_like_noise(pixels, job.width, job.height)) return false;
    const std::uint32_t use_shift = shift == 0u ? auto_scale_shift(job.width, job.height) : shift;
    if (use_shift == 0u || (job.width << use_shift) > 4096u || (job.height << use_shift) > 4096u) return false;

    // Quality gate: try the configured sharpen, then none; keep only faithful results.
    for (const float s : {sharpen, 0.0f}) {
        ReplacementTexture candidate = texture_upscale_clean(pixels, job.width, job.height, use_shift, s);
        if (candidate.rgba.empty()) return false;
        if (round_trip_psnr(candidate, pixels, job.width, job.height) >= 32.0) {
            out = std::move(candidate);
            return true;
        }
        if (s == 0.0f) break;
    }
    return false;  // failed the gate: keep the original untouched
}

void worker_main() {
    PipelineState &p = pipeline();
    for (;;) {
        PipelineState::Job job;
        {
            std::unique_lock<std::mutex> lock(p.mutex);
            p.wake.wait(lock, [&] { return p.stop || !p.jobs.empty(); });
            if (p.stop) return;
            job = std::move(p.jobs.front());
            p.jobs.pop_front();
        }
        TextureResult result;
        result.key = job.key;
        result.source_signature = texture_signature(std::span<const std::byte>(
            reinterpret_cast<const std::byte *>(job.rgba.data()), job.rgba.size()));
        result.original_width = job.width;
        result.original_height = job.height;
        if (process_job(job, result.texture)) {
            std::lock_guard<std::mutex> lock(p.mutex);
            p.results.push_back(std::move(result));
        }
    }
}

} // namespace

bool texture_pipeline_active() noexcept {
    PipelineState &p = pipeline();
    std::lock_guard<std::mutex> lock(p.mutex);
    return p.replacement_enabled || p.dump_originals || p.upscale_enabled;
}

void texture_pipeline_submit(std::uint64_t key, std::span<const std::byte> rgba8, std::uint32_t width,
                             std::uint32_t height, std::uint32_t usage_flags) noexcept {
    PipelineState &p = pipeline();
    try {
        std::lock_guard<std::mutex> lock(p.mutex);
        if (!(p.replacement_enabled || p.dump_originals || p.upscale_enabled)) return;
        if (!p.started) {
            p.started = true;
            p.stop = false;
            p.worker = std::thread(worker_main);
        }
        PipelineState::Job job;
        job.key = key;
        job.width = width;
        job.height = height;
        job.usage = usage_flags;
        job.rgba.assign(reinterpret_cast<const std::uint8_t *>(rgba8.data()),
                        reinterpret_cast<const std::uint8_t *>(rgba8.data()) + rgba8.size());
        p.jobs.push_back(std::move(job));
        p.wake.notify_one();
    } catch (...) {
    }
}

void texture_pipeline_poll(std::vector<TextureResult> &out, std::size_t max_results) noexcept {
    PipelineState &p = pipeline();
    try {
        std::lock_guard<std::mutex> lock(p.mutex);
        while (!p.results.empty() && out.size() < max_results) {
            out.push_back(std::move(p.results.front()));
            p.results.pop_front();
        }
    } catch (...) {
    }
}

void texture_pipeline_shutdown() noexcept {
    PipelineState &p = pipeline();
    std::thread worker;
    {
        std::lock_guard<std::mutex> lock(p.mutex);
        if (!p.started) return;
        p.stop = true;
        p.started = false;
        worker = std::move(p.worker);
        p.jobs.clear();
        p.results.clear();
    }
    p.wake.notify_all();
    if (worker.joinable()) worker.join();
}

} // namespace vcs
