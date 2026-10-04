#pragma once

#include "vcs_config.hpp"
#include "vcs_game_clock.hpp"

#include <algorithm>
#include <array>
#include <atomic>
#include <bit>
#include <cstdint>

namespace vcs {

// Vice City sky palette by in-game hour. VCS' own sky is a flat clear/fog
// color (gp+0x1EF4, confirmed by RAM diffing at pinned hours), so the palette
// replaces that one color: pink-magenta dawn and dusk, teal-cyan day, violet
// night. Weather is kept by scaling the replacement with how colorful the
// game's own color is (a grey rainy sky stays grey).
struct SkyKeyframe {
    float hour;
    std::array<float, 3> rgb;     // horizon / fog color
    std::array<float, 3> zenith;  // top of the sky
};

inline constexpr std::array<SkyKeyframe, 14> kSkyPalette{{
    {0.0f, {18.0f, 14.0f, 50.0f}, {7.0f, 7.0f, 30.0f}},
    {4.5f, {24.0f, 18.0f, 64.0f}, {9.0f, 9.0f, 36.0f}},
    {5.5f, {96.0f, 62.0f, 128.0f}, {28.0f, 24.0f, 82.0f}},
    {6.3f, {255.0f, 176.0f, 184.0f}, {132.0f, 112.0f, 198.0f}},
    {7.3f, {150.0f, 206.0f, 240.0f}, {74.0f, 150.0f, 236.0f}},
    {9.0f, {120.0f, 205.0f, 245.0f}, {66.0f, 154.0f, 240.0f}},
    {17.0f, {120.0f, 205.0f, 245.0f}, {66.0f, 154.0f, 240.0f}},
    {18.6f, {190.0f, 205.0f, 235.0f}, {90.0f, 140.0f, 224.0f}},
    {19.4f, {255.0f, 176.0f, 130.0f}, {132.0f, 84.0f, 176.0f}},
    {19.9f, {255.0f, 112.0f, 160.0f}, {110.0f, 52.0f, 156.0f}},
    {20.4f, {150.0f, 64.0f, 160.0f}, {52.0f, 28.0f, 110.0f}},
    {21.2f, {40.0f, 22.0f, 84.0f}, {14.0f, 10.0f, 52.0f}},
    {22.5f, {20.0f, 14.0f, 54.0f}, {7.0f, 7.0f, 32.0f}},
    {24.0f, {18.0f, 14.0f, 50.0f}, {7.0f, 7.0f, 30.0f}},
}};

struct SkyColors {
    std::array<float, 3> horizon;
    std::array<float, 3> zenith;
};

[[nodiscard]] inline SkyColors sky_palette_colors(float hours) noexcept {
    for (std::size_t i = 1u; i < kSkyPalette.size(); ++i) {
        if (hours <= kSkyPalette[i].hour) {
            const SkyKeyframe &a = kSkyPalette[i - 1u];
            const SkyKeyframe &b = kSkyPalette[i];
            const float t = (hours - a.hour) / std::max(b.hour - a.hour, 1.0e-4f);
            const float s = t * t * (3.0f - 2.0f * t);
            SkyColors out{};
            for (std::size_t c = 0u; c < 3u; ++c) {
                out.horizon[c] = a.rgb[c] + (b.rgb[c] - a.rgb[c]) * s;
                out.zenith[c] = a.zenith[c] + (b.zenith[c] - a.zenith[c]) * s;
            }
            return out;
        }
    }
    return {kSkyPalette.back().rgb, kSkyPalette.back().zenith};
}

[[nodiscard]] inline std::array<float, 3> sky_palette_rgb(float hours) noexcept {
    return sky_palette_colors(hours).horizon;
}

// The game's own sky/fog color as last seen on a fogged draw, used to tell a
// colorful sky from a grey (rain/cloud) one so weather survives the palette.
inline std::atomic<std::uint32_t> g_game_sky_abgr{0u};

inline void note_game_sky_color(std::uint32_t abgr) noexcept {
    g_game_sky_abgr.store(abgr & 0x00FFFFFFu, std::memory_order_relaxed);
}

// 0 (grey weather: keep the game's sky) .. 1 (clear colorful sky: use ours).
[[nodiscard]] inline float sky_weather_factor() noexcept {
    const std::uint32_t abgr = g_game_sky_abgr.load(std::memory_order_relaxed);
    if (abgr == 0u) return 1.0f;
    const float r = static_cast<float>(abgr & 0xFFu);
    const float g = static_cast<float>((abgr >> 8u) & 0xFFu);
    const float b = static_cast<float>((abgr >> 16u) & 0xFFu);
    const float peak = std::max({r, g, b});
    if (peak < 1.0f) return 1.0f;
    const float saturation = (peak - std::min({r, g, b})) / peak;
    const float u = std::clamp((saturation - 0.05f) / 0.09f, 0.0f, 1.0f);
    const float grey_weather = u * u * (3.0f - 2.0f * u);
    // Weather only matters in daylight: a dark, near-neutral night fog color
    // is not rain, so fade the check out below a mid brightness.
    const float d = std::clamp((peak - 30.0f) / 60.0f, 0.0f, 1.0f);
    const float daylight = d * d * (3.0f - 2.0f * d);
    return 1.0f + (grey_weather - 1.0f) * daylight;
}

// `rgb` is 0xBBGGRR (low 24 bits of a PSP ABGR word); the alpha byte, if
// present, is preserved. Returns the input unchanged when the feature is off
// or the game clock is not known yet.
[[nodiscard]] inline std::uint32_t remap_sky_color_uncached(std::uint32_t abgr, float hours, float strength) noexcept;

// Called for the fog and clear colour of every draw, thousands of times a frame in
// busy scenes, while its inputs (the colour, the in-game minute, the weather sample
// and the strength setting) change at most a few times a second. Remember the last
// answer per thread and only recompute when an input actually differs.
[[nodiscard]] inline std::uint32_t remap_sky_color(std::uint32_t abgr) noexcept {
    const PostFxConfiguration &fx = vcs_configuration().postfx;
    if (!fx.sky_palette_enabled) return abgr;
    const float hours = game_clock_hours();
    if (hours < 0.0f) return abgr;
    struct Memo {
        std::uint32_t abgr{}, sky{}, hours_bits{}, strength_bits{}, result{};
        bool valid{false};
    };
    static thread_local Memo memo;
    const std::uint32_t sky = g_game_sky_abgr.load(std::memory_order_relaxed);
    const std::uint32_t hours_bits = std::bit_cast<std::uint32_t>(hours);
    const std::uint32_t strength_bits = std::bit_cast<std::uint32_t>(fx.sky_palette_strength);
    if (memo.valid && memo.abgr == abgr && memo.sky == sky && memo.hours_bits == hours_bits &&
        memo.strength_bits == strength_bits)
        return memo.result;
    memo = {abgr, sky, hours_bits, strength_bits, remap_sky_color_uncached(abgr, hours, fx.sky_palette_strength), true};
    return memo.result;
}

[[nodiscard]] inline std::uint32_t remap_sky_color_uncached(std::uint32_t abgr, float hours, float strength) noexcept {
    const float r = static_cast<float>(abgr & 0xFFu);
    const float g = static_cast<float>((abgr >> 8u) & 0xFFu);
    const float b = static_cast<float>((abgr >> 16u) & 0xFFu);
    const float peak = std::max({r, g, b});
    if (peak < 1.0f) return abgr;
    const float saturation = (peak - std::min({r, g, b})) / peak;
    const float weather = sky_weather_factor();
    const float k = std::clamp(strength, 0.0f, 1.0f) * weather;
    const std::array<float, 3> target = sky_palette_rgb(hours);
    const auto mix = [k](float from, float to) {
        return static_cast<std::uint32_t>(std::clamp(from + (to - from) * k, 0.0f, 255.0f) + 0.5f);
    };
    return (abgr & 0xFF000000u) | (mix(b, target[2]) << 16u) | (mix(g, target[1]) << 8u) |
           mix(r, target[0]);
}

} // namespace vcs
