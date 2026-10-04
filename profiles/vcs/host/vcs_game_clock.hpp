#pragma once

#include <atomic>
#include <cstdint>

namespace vcs {

// In-game clock (hour*60+minute), published once per frame from guest memory
// and read by native post effects that follow the time of day. UINT32_MAX means
// "not published yet".
inline std::atomic<std::uint32_t> g_game_clock_minutes{0xFFFFFFFFu};

inline void publish_game_clock(std::uint32_t hour, std::uint32_t minute) noexcept {
    g_game_clock_minutes.store(hour * 60u + minute, std::memory_order_relaxed);
}

// Decimal hour 0..24, or a negative number when the clock is not known yet.
[[nodiscard]] inline float game_clock_hours() noexcept {
    const std::uint32_t minutes = g_game_clock_minutes.load(std::memory_order_relaxed);
    return minutes == 0xFFFFFFFFu ? -1.0f : static_cast<float>(minutes) / 60.0f;
}

// Weather from the game's own state: previous type (gp+0x2098), next type
// (gp+0x20A0) and the blend between them (gp+0x21D8). IDs follow Vice City's
// order: 0 sunny, 1 cloudy, 2 rain, 3 fog, 4 extra sunny, 5 heavy rain,
// 6 darker/extra colors, 7 extra sunny variant.
inline std::atomic<std::int32_t> g_weather_old{-1};
inline std::atomic<std::int32_t> g_weather_new{-1};
inline std::atomic<float> g_weather_blend{0.0f};

inline void publish_game_weather(std::int32_t old_type, std::int32_t new_type, float blend) noexcept {
    g_weather_old.store(old_type, std::memory_order_relaxed);
    g_weather_new.store(new_type, std::memory_order_relaxed);
    g_weather_blend.store(blend, std::memory_order_relaxed);
}

// Per-weather look, tuned for Vice City rather than gritty realism: rain is a
// blue-violet slate, fog is pale and milky, cloudy is soft lavender-grey.
struct WeatherLook {
    float coverage_boost;             // extra cloud thickness (0 = clear)
    float cloud_color[3];             // cloud body color
    float cloud_brightness;           // multiplier on cloud brightness
    float sky_grey;                   // how far the sky palette is pulled toward grey
    float horizon[3];                 // grey-out horizon color (0..255)
    float zenith[3];                  // grey-out zenith color (0..255)
    float overcast;                   // 0..1 overall, also drives night glow
};

[[nodiscard]] inline WeatherLook weather_look_of(std::int32_t type) noexcept {
    switch (type) {
    case 1:  // cloudy
        return {0.55f, {0.88f, 0.86f, 0.95f}, 0.84f, 0.35f, {176.0f, 188.0f, 218.0f}, {124.0f, 152.0f, 208.0f}, 0.45f};
    case 2:  // rain
        return {0.90f, {0.58f, 0.62f, 0.78f}, 0.72f, 0.75f, {150.0f, 160.0f, 190.0f}, {98.0f, 108.0f, 146.0f}, 0.80f};
    case 3:  // fog
        return {0.70f, {0.92f, 0.86f, 0.94f}, 0.86f, 0.90f, {214.0f, 202.0f, 220.0f}, {176.0f, 172.0f, 206.0f}, 0.65f};
    case 5:  // heavy rain
        return {1.00f, {0.42f, 0.45f, 0.64f}, 0.55f, 0.90f, {112.0f, 118.0f, 152.0f}, {72.0f, 78.0f, 114.0f}, 1.00f};
    case 6:  // high bright overcast
        return {0.65f, {0.94f, 0.92f, 0.98f}, 0.88f, 0.25f, {186.0f, 196.0f, 226.0f}, {130.0f, 158.0f, 214.0f}, 0.35f};
    default:
        return {0.0f, {1.0f, 1.0f, 1.0f}, 1.0f, 0.0f, {0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}, 0.0f};
    }
}

// Current weather look, blending the previous and next weather by the game's
// own blend value. `known` is false until the weather has been published.
struct WeatherBlend {
    WeatherLook look;
    bool known;
};

[[nodiscard]] inline WeatherBlend weather_look() noexcept {
    const std::int32_t a = g_weather_old.load(std::memory_order_relaxed);
    const std::int32_t b = g_weather_new.load(std::memory_order_relaxed);
    if (a < 0 && b < 0) return {weather_look_of(-1), false};
    const float f = g_weather_blend.load(std::memory_order_relaxed);
    const float t = f < 0.0f ? 0.0f : (f > 1.0f ? 1.0f : f);
    const WeatherLook la = weather_look_of(a);
    const WeatherLook lb = weather_look_of(b);
    const auto mix = [t](float x, float y) { return x + (y - x) * t; };
    WeatherLook out{};
    out.coverage_boost = mix(la.coverage_boost, lb.coverage_boost);
    out.cloud_brightness = mix(la.cloud_brightness, lb.cloud_brightness);
    out.sky_grey = mix(la.sky_grey, lb.sky_grey);
    out.overcast = mix(la.overcast, lb.overcast);
    for (int c = 0; c < 3; ++c) {
        out.cloud_color[c] = mix(la.cloud_color[c], lb.cloud_color[c]);
        out.horizon[c] = mix(la.horizon[c], lb.horizon[c]);
        out.zenith[c] = mix(la.zenith[c], lb.zenith[c]);
    }
    return {out, true};
}

} // namespace vcs
