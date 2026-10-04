#include "audio_output.hpp"
#include "audio_resampler.hpp"
#include "vcs_config.hpp"

#include <algorithm>
#include <array>
#include <atomic>
#include <chrono>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>
#include <limits>
#include <sstream>
#include <string>
#include <vector>

#if defined(_WIN32)

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <mmsystem.h>

#include <mutex>

namespace vcs {
namespace {

constexpr std::uint32_t kSampleRate = StreamingLinearResampler::kOutputRate;
constexpr std::uint32_t kOutputChannels = 2u;
// Smaller blocks reduce the time between vblank-driven queue refills.  A group
// of four is queued while waveOut is paused, then playback starts with ~46 ms
// already buffered.  That removes the periodic starvation clicks the old
// submit-driven sink produced when the guest had a long CPU frame.
constexpr std::size_t kBlockFrames = 512u;
constexpr std::size_t kBlockCount = 24u;
constexpr std::size_t kDefaultPrebufferBlocks = 6u;
// Do not seal the newest ~23 ms of the guest timeline.  Other PSP channels can
// still submit samples for that region before it is irreversibly handed to the
// device.  This replaces the old "furthest channel + four blocks" heuristic.
constexpr std::uint64_t kMixSafetyFrames = 1024u;
// Two seconds is enough to absorb a temporarily blocked host device without a
// channel lapping the ring during normal realtime play.
constexpr std::size_t kRingFrames = kSampleRate * 2u;
constexpr std::size_t kGuestChannels = 9u;
// Sealed audio further behind the guest timeline than this (about 140 ms) is dropped; see advance_locked.
constexpr std::uint64_t kMaxLagFrames = 6144u;
// A genuine discontinuity (a new track starting, a station change, a seek)
// moves a channel's schedule by a whole buffer or more. 64 frames (1.45 ms)
// is tighter than the ~2048-frame block the guest submits at a time, so
// ordinary submission jitter -- a couple of milliseconds of scheduling
// variance from the CPU-recompiled game's own frame pacing, not a real
// timeline break -- was tripping this on nearly every block. Each trip does a
// hard resampler reset (a phase jump in the waveform, i.e. an audible click),
// so at a few dozen resets per second this was continuous crackling with
// nothing to show for it in the late/overrun counters, since no audio was
// actually being dropped. Measured over an 18 s play session, the real
// output advanced within 65 frames of the ideal 44.1 kHz count -- the
// timeline itself does not drift -- so the fix is tolerance, not a resync
// mechanism.
constexpr std::uint64_t kChannelDiscontinuityFrames = 8192u;
// A channel that has fallen this far (about 23 ms) behind its own schedule is moved up to it.
constexpr std::uint64_t kGapSnapFrames = 1024u;

struct Block {
    WAVEHDR header{};
    std::vector<std::int16_t> samples;
};

struct ChannelStream {
    StreamingLinearResampler resampler;
    std::uint64_t cursor{};
    std::uint64_t last_guest_time_us{};
    std::uint32_t source_rate{kSampleRate};
    bool stereo{true};
    bool active{};
};

struct AudioState {
    std::mutex mutex;
    HWAVEOUT device{nullptr};
    std::vector<Block> blocks;
    std::size_t next_block{};
    std::vector<std::int32_t> ring;
    // First frame not yet handed to waveOut.
    std::uint64_t output_frame{};
    // Guest virtual-time -> output-frame anchor.
    std::uint64_t guest_anchor_us{};
    bool timeline_anchored{};
    std::array<ChannelStream, kGuestChannels> channels{};
    std::uint64_t late_frames_dropped{};
    std::uint64_t overrun_frames_dropped{};
    std::uint64_t queued_blocks{};
    std::uint64_t underrun_rebuffers{};
    std::uint64_t timeline_resyncs{};
    std::uint64_t lag_resyncs{};
    std::uint64_t submit_calls{};
    std::uint64_t submit_cpu_ns{};
    std::uint64_t submit_cpu_max_ns{};
    std::uint64_t last_summary_guest_us{};
    std::ofstream wav_capture;
    std::ofstream diagnostics_log;
    std::uint64_t wav_frames{};
    std::size_t prebuffer_blocks{kDefaultPrebufferBlocks};
    std::size_t recovery_prebuffer_blocks{kDefaultPrebufferBlocks * 2u};
    bool playback_started{};
    bool recovering_from_underrun{};
    bool opened{};
    bool failed{};
};

AudioState &audio_state() {
    static AudioState state;
    return state;
}

bool diagnostics_enabled() {
    static const bool enabled = std::getenv("PSPRECOMP_AUDIO_DIAG") != nullptr;
    return enabled;
}

bool summary_diagnostics_enabled() {
    static const bool enabled = [] {
        const char *text = std::getenv("PSPRECOMP_AUDIO_SUMMARY");
        if (text != nullptr)
            return *text != '\0' && std::strcmp(text, "0") != 0;
        return vcs_configuration().audio.diagnostics;
    }();
    return enabled;
}

std::size_t configured_prebuffer_blocks() {
    const char *text = std::getenv("PSPRECOMP_AUDIO_PREBUFFER_BLOCKS");
    if (text == nullptr || *text == '\0')
        return std::clamp<std::size_t>(vcs_configuration().audio.prebuffer_blocks,
                                      2u, kBlockCount - 2u);
    char *end = nullptr;
    const unsigned long value = std::strtoul(text, &end, 0);
    if (end == text || *end != '\0') return kDefaultPrebufferBlocks;
    return std::clamp<std::size_t>(static_cast<std::size_t>(value), 2u, kBlockCount - 2u);
}

std::size_t outstanding_blocks(const AudioState &state) {
    return static_cast<std::size_t>(std::count_if(
        state.blocks.begin(), state.blocks.end(), [](const Block &block) {
            return (block.header.dwFlags & WHDR_PREPARED) != 0u &&
                (block.header.dwFlags & WHDR_DONE) == 0u;
        }));
}

void wav_write_u16(std::ostream &out, std::uint16_t value) {
    const std::array<char, 2> bytes{
        static_cast<char>(value & 0xFFu), static_cast<char>((value >> 8u) & 0xFFu)};
    out.write(bytes.data(), static_cast<std::streamsize>(bytes.size()));
}

void wav_write_u32(std::ostream &out, std::uint32_t value) {
    const std::array<char, 4> bytes{
        static_cast<char>(value & 0xFFu), static_cast<char>((value >> 8u) & 0xFFu),
        static_cast<char>((value >> 16u) & 0xFFu), static_cast<char>((value >> 24u) & 0xFFu)};
    out.write(bytes.data(), static_cast<std::streamsize>(bytes.size()));
}

void wav_write_header(std::ostream &out, std::uint64_t frames) {
    const std::uint64_t payload64 = frames * kOutputChannels * sizeof(std::int16_t);
    const std::uint32_t payload = static_cast<std::uint32_t>(
        std::min<std::uint64_t>(payload64, 0xFFFFFFFFull - 44u));
    out.write("RIFF", 4); wav_write_u32(out, 36u + payload);
    out.write("WAVEfmt ", 8); wav_write_u32(out, 16u);
    wav_write_u16(out, 1u); wav_write_u16(out, static_cast<std::uint16_t>(kOutputChannels));
    wav_write_u32(out, kSampleRate);
    wav_write_u32(out, kSampleRate * kOutputChannels * sizeof(std::int16_t));
    wav_write_u16(out, static_cast<std::uint16_t>(kOutputChannels * sizeof(std::int16_t)));
    wav_write_u16(out, 16u);
    out.write("data", 4); wav_write_u32(out, payload);
}

void open_wav_capture(AudioState &state) {
    const char *path = std::getenv("PSPRECOMP_AUDIO_WAV");
    if (path == nullptr || *path == '\0') return;
    state.wav_capture.open(path, std::ios::binary | std::ios::trunc);
    if (!state.wav_capture) {
        if (diagnostics_enabled())
            std::cerr << "[audio-host] unable to create WAV capture: " << path << "\n";
        return;
    }
    wav_write_header(state.wav_capture, 0u);
    state.wav_frames = 0u;
    if (diagnostics_enabled())
        std::cerr << "[audio-host] WAV capture: " << path << "\n";
}

void close_wav_capture(AudioState &state) {
    if (!state.wav_capture.is_open()) return;
    state.wav_capture.flush();
    state.wav_capture.seekp(0, std::ios::beg);
    wav_write_header(state.wav_capture, state.wav_frames);
    state.wav_capture.close();
}

bool ensure_device(AudioState &state) {
    if (state.opened) return true;
    if (state.failed) return false;

    WAVEFORMATEX format{};
    format.wFormatTag = WAVE_FORMAT_PCM;
    format.nChannels = static_cast<WORD>(kOutputChannels);
    format.nSamplesPerSec = kSampleRate;
    format.wBitsPerSample = 16u;
    format.nBlockAlign = static_cast<WORD>(kOutputChannels * sizeof(std::int16_t));
    format.nAvgBytesPerSec = kSampleRate * format.nBlockAlign;

    const MMRESULT open_result =
        waveOutOpen(&state.device, WAVE_MAPPER, &format, 0, 0, CALLBACK_NULL);
    if (open_result != MMSYSERR_NOERROR) {
        if (diagnostics_enabled())
            std::cerr << "[audio-host] waveOutOpen failed code=" << open_result << "\n";
        state.failed = true;
        state.device = nullptr;
        return false;
    }

    // Pause before the first write so playback starts with a real prebuffer,
    // not one tiny buffer followed by an immediate underrun.
    (void)waveOutPause(state.device);
    state.blocks.resize(kBlockCount);
    state.ring.assign(kRingFrames * kOutputChannels, 0);
    state.next_block = 0u;
    state.output_frame = 0u;
    state.queued_blocks = 0u;
    state.prebuffer_blocks = configured_prebuffer_blocks();
    state.recovery_prebuffer_blocks = std::clamp<std::size_t>(
        vcs_configuration().audio.recovery_prebuffer_blocks,
        state.prebuffer_blocks, kBlockCount - 2u);
    state.playback_started = false;
    state.recovering_from_underrun = false;
    if (summary_diagnostics_enabled()) {
        const auto path = vcs_configuration().executable_directory / "VCSAudio.log";
        state.diagnostics_log.open(path, std::ios::out | std::ios::trunc);
        if (state.diagnostics_log)
            state.diagnostics_log << "[audio-log] block_frames=" << kBlockFrames
                                  << " startup_blocks=" << state.prebuffer_blocks
                                  << " recovery_blocks=" << state.recovery_prebuffer_blocks
                                  << "\n";
    }
    open_wav_capture(state);
    if (diagnostics_enabled())
        std::cerr << "[audio-host] waveOut 44100Hz stereo block_frames=" << kBlockFrames
                  << " blocks=" << kBlockCount
                  << " prebuffer_blocks=" << state.prebuffer_blocks
                  << " prebuffer_ms="
                  << (state.prebuffer_blocks * kBlockFrames * 1000u / kSampleRate) << "\n";
    state.opened = true;
    return true;
}

std::uint64_t guest_frame_for(const AudioState &state, std::uint64_t guest_time_us) {
    if (!state.timeline_anchored || guest_time_us <= state.guest_anchor_us) return 0u;
    const std::uint64_t delta = guest_time_us - state.guest_anchor_us;
    // Rounded to nearest output frame.  This keeps repeated ceil-rounded PSP
    // blocking durations from accumulating a frame of drift every few buffers.
    return (delta * kSampleRate + 500000u) / 1000000u;
}

bool queue_one_block(AudioState &state) {
    Block &block = state.blocks[state.next_block];
    if ((block.header.dwFlags & WHDR_PREPARED) != 0u) {
        if ((block.header.dwFlags & WHDR_DONE) == 0u) return false;
        (void)waveOutUnprepareHeader(state.device, &block.header, sizeof(WAVEHDR));
    }

    block.samples.resize(kBlockFrames * kOutputChannels);
    for (std::size_t frame = 0u; frame < kBlockFrames; ++frame) {
        const std::size_t slot =
            static_cast<std::size_t>((state.output_frame + frame) % kRingFrames) * kOutputChannels;
        for (std::size_t channel = 0u; channel < kOutputChannels; ++channel) {
            block.samples[frame * kOutputChannels + channel] = static_cast<std::int16_t>(
                std::clamp(state.ring[slot + channel], -32768, 32767));
            state.ring[slot + channel] = 0;
        }
    }

    if (state.wav_capture.is_open()) {
        state.wav_capture.write(reinterpret_cast<const char *>(block.samples.data()),
                                static_cast<std::streamsize>(block.samples.size() * sizeof(std::int16_t)));
        if (state.wav_capture) state.wav_frames += kBlockFrames;
    }

    block.header = WAVEHDR{};
    block.header.lpData = reinterpret_cast<LPSTR>(block.samples.data());
    block.header.dwBufferLength = static_cast<DWORD>(block.samples.size() * sizeof(std::int16_t));
    const MMRESULT prepare_result =
        waveOutPrepareHeader(state.device, &block.header, sizeof(WAVEHDR));
    if (prepare_result != MMSYSERR_NOERROR) {
        if (diagnostics_enabled())
            std::cerr << "[audio-host] waveOutPrepareHeader failed code="
                      << prepare_result << "\n";
        return false;
    }
    const MMRESULT write_result = waveOutWrite(state.device, &block.header, sizeof(WAVEHDR));
    if (write_result != MMSYSERR_NOERROR) {
        if (diagnostics_enabled())
            std::cerr << "[audio-host] waveOutWrite failed code=" << write_result << "\n";
        (void)waveOutUnprepareHeader(state.device, &block.header, sizeof(WAVEHDR));
        return false;
    }

    state.output_frame += kBlockFrames;
    state.next_block = (state.next_block + 1u) % state.blocks.size();
    ++state.queued_blocks;

    const std::size_t target_blocks = state.recovering_from_underrun
        ? state.recovery_prebuffer_blocks : state.prebuffer_blocks;
    if (!state.playback_started && outstanding_blocks(state) >= target_blocks) {
        if (waveOutRestart(state.device) == MMSYSERR_NOERROR) {
            state.playback_started = true;
            state.recovering_from_underrun = false;
            if (diagnostics_enabled())
                std::cerr << "[audio-host] waveOut started with " << state.queued_blocks
                          << " prebuffered blocks\n";
        }
    }
    return true;
}

void advance_locked(AudioState &state, std::uint64_t guest_time_us) {
    if (!state.timeline_anchored || !state.opened) return;
    std::size_t outstanding = outstanding_blocks(state);
    if (state.playback_started) {
        if (outstanding == 0u) {
            // Once waveOut drains completely, immediately writing one block at
            // a time leaves a permanent train of audible gaps. Pause the empty
            // device, build a deeper reserve, then resume continuous playback.
            (void)waveOutPause(state.device);
            ++state.underrun_rebuffers;
            state.playback_started = false;
            state.recovering_from_underrun = true;
        }
    }
    const std::uint64_t guest_frame = guest_frame_for(state, guest_time_us);
    // When only two native blocks remain, waiting another full 23 ms for every
    // PSP channel to contribute is more damaging than sealing the already
    // mixed samples. This emergency margin recovers up to two blocks before an
    // audible underrun without changing the normal multi-channel mix path.
    const std::uint64_t safety_frames = state.playback_started && outstanding <= 2u
        ? 0u : kMixSafetyFrames;
    const std::uint64_t sealed_frame = guest_frame > safety_frames
        ? guest_frame - safety_frames : 0u;
    // Keep the sound on the picture. While waveOut is paused for a rebuffer (or the guest hitches) the
    // guest timeline keeps moving but nothing is played, and once playback resumes it continues from
    // where it stopped, so the gap becomes a permanent delay: seconds after a few stalls. When the
    // audio has fallen further behind than a few blocks, throw the stale part away and restart from
    // the present with a fresh prebuffer; a short dropout is far better than sound that is late.
    if (sealed_frame > state.output_frame + kMaxLagFrames) {
        (void)waveOutReset(state.device);  // hands every queued block back
        const std::uint64_t skipped = sealed_frame - state.output_frame;
        if (skipped >= kRingFrames) {
            std::fill(state.ring.begin(), state.ring.end(), 0);
        } else {
            for (std::uint64_t f = state.output_frame; f < sealed_frame; ++f) {
                const std::size_t slot = static_cast<std::size_t>(f % kRingFrames) * kOutputChannels;
                state.ring[slot] = 0;
                state.ring[slot + 1u] = 0;
            }
        }
        state.output_frame = sealed_frame;
        (void)waveOutPause(state.device);
        state.playback_started = false;
        state.recovering_from_underrun = false;
        ++state.lag_resyncs;
        outstanding = 0u;
    }
    while (sealed_frame >= state.output_frame + kBlockFrames) {
        if (!queue_one_block(state)) break;
    }
}

void reset_channel_locked(AudioState &state, std::uint32_t channel) {
    if (channel >= state.channels.size()) return;
    state.channels[channel] = ChannelStream{};
}

} // namespace

bool audio_output_enabled() {
    static const bool enabled = [] {
        if (const char *text = std::getenv("PSPRECOMP_AUDIO"))
            return *text != '\0' && std::string(text) != "0";
        const VcsConfiguration &configuration = vcs_configuration();
        return !configuration.initialized || configuration.audio.enabled;
    }();
    return enabled;
}

void audio_output_submit(std::span<const std::int16_t> pcm, std::uint32_t frames,
                         bool stereo, std::uint32_t left, std::uint32_t right,
                         std::uint32_t source_rate, std::uint32_t channel,
                         std::uint64_t guest_time_us) {
    if (!audio_output_enabled() || frames == 0u || channel >= kGuestChannels) return;
    if (source_rate == 0u) source_rate = kSampleRate;
    const std::size_t needed = static_cast<std::size_t>(frames) * (stereo ? 2u : 1u);
    if (pcm.size() < needed) return;
    const bool measure_submit = summary_diagnostics_enabled();
    const auto submit_started = measure_submit
        ? std::chrono::steady_clock::now() : std::chrono::steady_clock::time_point{};

    AudioState &state = audio_state();
    std::lock_guard<std::mutex> guard(state.mutex);
    if (!ensure_device(state)) return;

    if (!state.timeline_anchored) {
        state.guest_anchor_us = guest_time_us;
        state.timeline_anchored = true;
        state.output_frame = 0u;
    }

    // Seal old timeline regions before adding the new buffer.  Once virtual
    // time has advanced past them no later PSP thread can legitimately submit
    // audio into those frames.
    advance_locked(state, guest_time_us);

    ChannelStream &stream = state.channels[channel];
    const std::uint64_t scheduled = guest_frame_for(state, guest_time_us);
    const auto distance = [](std::uint64_t a, std::uint64_t b) {
        return a > b ? a - b : b - a;
    };
    const bool format_changed = stream.active &&
        (stream.source_rate != source_rate || stream.stereo != stereo);
    const bool discontinuity = stream.active &&
        distance(stream.cursor, scheduled) > kChannelDiscontinuityFrames;
    const std::uint64_t previous_cursor = stream.cursor;
    if (!stream.active || format_changed || discontinuity) {
        stream = ChannelStream{};
        stream.active = true;
        stream.source_rate = source_rate;
        stream.stereo = stereo;
        stream.resampler.reset(source_rate, stereo);
        stream.cursor = std::max(scheduled, state.output_frame);
        if (discontinuity) ++state.timeline_resyncs;
        if (diagnostics_enabled() && discontinuity)
            std::cerr << "[audio-host] channel " << channel << " timeline resync old="
                      << previous_cursor << " scheduled=" << scheduled << "\n";
    }

    // A stream that is contiguous from one buffer to the next but whose schedule has moved on (the guest
    // thread ran late, so the buffer really started later than the previous one ended) must follow the
    // schedule: on the hardware that is a gap of silence. Ignoring it left the cursor drifting further
    // and further behind the timeline until the mixer had already sealed the region the next buffer was
    // written to, and those buffers were thrown away as late -- audible as stuttering that got worse
    // over time. Moving the cursor forward inserts the gap instead. No resampler reset, so no click.
    if (stream.active && scheduled > stream.cursor + kGapSnapFrames) stream.cursor = scheduled;
    if (stream.cursor < state.output_frame) {
        state.late_frames_dropped += state.output_frame - stream.cursor;
        stream.cursor = state.output_frame;
        stream.resampler.reset(source_rate, stereo);
    }

    const std::uint32_t master = vcs_configuration().audio.volume;
    const std::int64_t left_gain = (static_cast<std::int64_t>(left) * master) / 100;
    const std::int64_t right_gain = (static_cast<std::int64_t>(right) * master) / 100;
    const std::uint64_t ring_limit = state.output_frame + kRingFrames - kBlockFrames;

    stream.resampler.process(pcm, frames, stereo, source_rate,
        [&](std::int16_t source_left, std::int16_t source_right) {
            if (stream.cursor >= ring_limit) {
                ++state.overrun_frames_dropped;
                ++stream.cursor;
                return;
            }
            const std::size_t slot =
                static_cast<std::size_t>(stream.cursor % kRingFrames) * kOutputChannels;
            const std::int64_t mixed_left =
                (static_cast<std::int64_t>(source_left) * left_gain) >> 15;
            const std::int64_t mixed_right =
                (static_cast<std::int64_t>(source_right) * right_gain) >> 15;
            state.ring[slot] += static_cast<std::int32_t>(std::clamp<std::int64_t>(
                mixed_left, std::numeric_limits<std::int32_t>::min(),
                std::numeric_limits<std::int32_t>::max()));
            state.ring[slot + 1u] += static_cast<std::int32_t>(std::clamp<std::int64_t>(
                mixed_right, std::numeric_limits<std::int32_t>::min(),
                std::numeric_limits<std::int32_t>::max()));
            ++stream.cursor;
        });

    static const bool submit_diag = std::getenv("PSPRECOMP_AUDIO_SUBMIT_DIAG") != nullptr;
    if (submit_diag) {
        int peak = 0;
        for (std::size_t i = 0u; i < needed; ++i) peak = std::max(peak, std::abs(static_cast<int>(pcm[i])));
        std::cerr << "[audio-submit] ch=" << channel << " frames=" << frames << " rate=" << source_rate
                  << " peak=" << peak << " scheduled=" << scheduled << " cursor_before=" << previous_cursor
                  << " cursor_after=" << stream.cursor << " output_frame=" << state.output_frame
                  << " late=" << state.late_frames_dropped << " real_ms="
                  << std::chrono::duration_cast<std::chrono::milliseconds>(
                         std::chrono::steady_clock::now().time_since_epoch()).count() << "\n";
    }
    stream.last_guest_time_us = guest_time_us;
    // A submission can make enough older samples complete to fill another
    // device block, so try once more after mixing it.
    advance_locked(state, guest_time_us);
    if (measure_submit) {
        const std::uint64_t submit_ns = static_cast<std::uint64_t>(
            std::chrono::duration_cast<std::chrono::nanoseconds>(
                std::chrono::steady_clock::now() - submit_started).count());
        ++state.submit_calls;
        state.submit_cpu_ns += submit_ns;
        state.submit_cpu_max_ns = std::max(state.submit_cpu_max_ns, submit_ns);
    }
}

void audio_output_advance(std::uint64_t guest_time_us) {
    if (!audio_output_enabled()) return;
    AudioState &state = audio_state();
    std::lock_guard<std::mutex> guard(state.mutex);
    if (!state.opened) return;
    advance_locked(state, guest_time_us);
    if (summary_diagnostics_enabled() &&
        (state.last_summary_guest_us == 0u ||
         guest_time_us - state.last_summary_guest_us >= 2'000'000u)) {
        const std::uint64_t guest_frame = guest_frame_for(state, guest_time_us);
        const std::size_t outstanding = outstanding_blocks(state);
        const std::uint64_t average_submit_us = state.submit_calls == 0u ? 0u
            : state.submit_cpu_ns / state.submit_calls / 1000u;
        std::ostringstream line;
        line << "[audio-summary] guest_us=" << guest_time_us
             << " guest_frame=" << guest_frame
             << " output_frame=" << state.output_frame
             << " outstanding_blocks=" << outstanding
             << " playback=" << state.playback_started
             << " recovering=" << state.recovering_from_underrun
             << " underrun_rebuffers=" << state.underrun_rebuffers
             << " resyncs=" << state.timeline_resyncs
             << " lag_resyncs=" << state.lag_resyncs
             << " late_frames=" << state.late_frames_dropped
             << " overrun_frames=" << state.overrun_frames_dropped
             << " submit_calls=" << state.submit_calls
             << " submit_avg_us=" << average_submit_us
             << " submit_max_us=" << state.submit_cpu_max_ns / 1000u << "\n";
        std::cerr << line.str();
        if (state.diagnostics_log) {
            state.diagnostics_log << line.str();
            state.diagnostics_log.flush();
        }
        state.last_summary_guest_us = guest_time_us;
    }
}

void audio_output_reset_channel(std::uint32_t channel) {
    AudioState &state = audio_state();
    std::lock_guard<std::mutex> guard(state.mutex);
    reset_channel_locked(state, channel);
}

void audio_output_shutdown() {
    AudioState &state = audio_state();
    std::lock_guard<std::mutex> guard(state.mutex);
    if (!state.opened || state.device == nullptr) return;

    // Start a paused device before reset on drivers that otherwise leave queued
    // WAVEHDRs in an indeterminate state during teardown.
    if (!state.playback_started) (void)waveOutRestart(state.device);
    (void)waveOutReset(state.device);
    for (Block &block : state.blocks) {
        if ((block.header.dwFlags & WHDR_PREPARED) != 0u)
            (void)waveOutUnprepareHeader(state.device, &block.header, sizeof(WAVEHDR));
    }
    (void)waveOutClose(state.device);
    close_wav_capture(state);
    if (state.diagnostics_log.is_open()) state.diagnostics_log.close();

    state.device = nullptr;
    state.opened = false;
    state.blocks.clear();
    state.ring.clear();
    state.timeline_anchored = false;
    state.playback_started = false;
    state.recovering_from_underrun = false;
    state.queued_blocks = 0u;
    state.output_frame = 0u;
    state.last_summary_guest_us = 0u;
    for (std::uint32_t channel = 0u; channel < kGuestChannels; ++channel)
        reset_channel_locked(state, channel);

    if (diagnostics_enabled() && (state.late_frames_dropped != 0u || state.overrun_frames_dropped != 0u)) {
        std::cerr << "[audio-host] shutdown late_frames=" << state.late_frames_dropped
                  << " overrun_frames=" << state.overrun_frames_dropped << "\n";
    }
    state.late_frames_dropped = 0u;
    state.overrun_frames_dropped = 0u;
}

std::uint64_t audio_output_frames_played() {
    AudioState &state = audio_state();
    std::lock_guard<std::mutex> guard(state.mutex);
    return state.output_frame;
}

} // namespace vcs

#elif defined(__APPLE__)

// macOS audio backend using SDL2.
//
// This used to be a guest-time-anchored ring buffer: every channel's samples
// were written to an absolute sample position computed from the guest's
// virtual clock, and a family of heuristics (a "discontinuity" distance
// threshold, a "late" catch-up that snapped a channel's position forward,
// assorted cushions) tried to keep that position aligned with where the SDL
// callback was really reading. Three rounds of tuning those heuristics each
// fixed one symptom and produced a different one -- clicking, then silently
// eaten dialogue, then clicking again, then both at once -- because the model
// itself was wrong: it required guest virtual time and the real device clock
// to be aligned to within a handful of milliseconds at all times, which does
// not hold when the guest's own decode work (a codec open, a disk read, a
// cutscene's video decoder sharing the same thread) is bursty.
//
// This is a plain per-channel FIFO instead. audio_output_submit resamples
// incoming PCM to 44.1 kHz stereo, applies gain, and appends it to that
// channel's queue -- no absolute time position involved. The SDL callback
// pulls whatever is at the front of each channel's queue, in submission
// order. A channel that has not decoded far enough ahead yet simply
// contributes silence for that instant and picks back up the moment its next
// buffer arrives; nothing is ever computed to be "late" and thrown away, so
// there is no content to go missing and no forced resync to click. A track
// change is not a special case either: the old track's tail plays out, the
// new track's samples queue up right behind it, in order, exactly as
// submitted. The only bookkeeping left is a generous cap on how far a
// channel's queue may grow, so a channel that is (for whatever reason)
// decoding far ahead of real time cannot accumulate unbounded latency.
#include <SDL.h>

#include <condition_variable>
#include <deque>
#include <mutex>
#include <thread>

namespace vcs {
namespace {

constexpr std::uint32_t kSampleRate = StreamingLinearResampler::kOutputRate;
constexpr std::uint32_t kOutputChannels = 2u;
constexpr std::size_t kGuestChannels = 9u;
// A channel that is allowed to queue arbitrarily far ahead of real time would
// turn a transient decode burst into permanent, growing latency. This used
// to be a full second, on the theory that nothing should ever need more than
// that -- but a full second is also far more than enough room for a
// dialogue-heavy cutscene's audio/video sync to visibly compound line over
// line without this cap ever actually engaging to correct it: each line's
// own small decode-ahead lead adds into the same persistent queue, and nothing
// forces the backlog back down until it is nearly a second deep, by which
// point it is long since audible ("mouths moving when they're not speaking",
// getting steadily worse across a scene). A much smaller cap means any lead
// that does build up gets trimmed back down within a fraction of a second
// instead of accumulating for the length of an entire cutscene -- trading an
// occasional few milliseconds of the oldest, stalest queued audio (never
// anything about to be heard next) for a hard ceiling on how far this
// channel's audio can ever drift ahead of the picture.
constexpr std::size_t kMaxQueuedFrames = kSampleRate / 5u;  // 200 ms

// Each channel gets its own mutex rather than sharing one AudioState-wide
// lock. The real-time SDL callback has to visit every channel each time it
// runs, but with a per-channel lock it only ever contends with a producer
// that is submitting to that SAME channel at that SAME instant -- a much
// rarer, much shorter window than "any of the 9 channels' worth of guest
// submissions, including whatever resampling work they're doing, all funnel
// through one lock the real-time thread also needs." A CoreAudio glitch from
// that contention would not show up in this file's own queued/underrun
// counters at all, since those are only ever read after the lock is already
// held -- it would just be an inexplicable gap despite "healthy" diagnostics,
// which is exactly what was observed.
struct ChannelQueue {
    std::mutex mutex;
    StreamingLinearResampler resampler;
    std::deque<std::int16_t> samples;  // interleaved stereo, already at kSampleRate
    std::uint32_t source_rate{kSampleRate};
    bool stereo{true};
    bool active{};
    std::uint64_t underrun_frames{};   // callback wanted a frame this channel didn't have yet
    std::uint64_t trimmed_frames{};    // real data discarded for exceeding kMaxQueuedFrames
    std::uint64_t pushed_frames{};     // total frames the resampler has ever emitted into samples
    std::uint64_t pulled_frames{};     // total frames the callback has ever consumed from samples
};

struct AudioState {
    std::mutex device_mutex;  // guards only device open/close lifecycle
    SDL_AudioDeviceID device{0};
    std::array<ChannelQueue, kGuestChannels> channels{};
    std::atomic<std::uint64_t> frames_played{0u};
    std::uint64_t last_summary_frames_played{};
    bool opened{};
    bool failed{};
    bool closed{};
};

AudioState &audio_state() {
    static AudioState state;
    return state;
}

// Isolated submission worker: the interpreter thread that calls
// audio_output_submit() is the same single thread that also runs GE
// rendering and every other PSP HLE call -- measured directly, a real,
// growing (then permanently unrecovered) gap between this channel's actual
// submission cadence and true wall-clock time, reaching 1.6+ real seconds
// behind by late in one cutscene, coinciding with a genuine ~36-44ms
// synchronous GE rendering stall on that same thread. The interpreter has no
// spare real time to give back once it falls behind like that.
//
// This worker thread takes the one part of a submission that is real,
// non-trivial CPU work -- linear resampling plus the int64 gain/clamp mix
// loop -- off the interpreter thread entirely, so a call to
// audio_output_submit() costs the interpreter only a data copy, not the
// resampling itself. It is deliberately narrow and touches nothing
// GE/Vulkan related: two attempts to fix this same problem by moving GE
// rendering to its own thread (PSPRECOMP_GE_ASYNC) both caused full
// application hangs live-tested this same session -- the Vulkan backend had
// no synchronization of its own, and even after adding some, a second,
// different hang appeared from the changed thread interleaving. This worker
// never touches the GE backend, the display window, or virtual_time_us, so
// it cannot reintroduce that class of bug; its blast radius is limited to
// this file's own queue and each ChannelQueue's own pre-existing per-channel
// mutex.
struct SubmitJob {
    std::vector<std::int16_t> pcm;  // owned copy -- the caller's span does not outlive the call
    std::uint32_t frames{};
    bool stereo{};
    std::uint32_t left{};
    std::uint32_t right{};
    std::uint32_t source_rate{};
    std::uint32_t channel{};
};

struct SubmitWorker {
    std::mutex mutex;
    std::condition_variable cv;
    std::deque<SubmitJob> jobs;
    bool stop_requested{};
    bool started{};
    std::thread thread;
};

SubmitWorker &submit_worker() {
    static SubmitWorker w;
    return w;
}

// Defined after audio_output_submit, which contains the shared resample/mix
// body -- see the call site below for why it is factored this way.
void perform_submit(const SubmitJob &job);

void submit_worker_main() {
    SubmitWorker &w = submit_worker();
    for (;;) {
        SubmitJob job;
        {
            std::unique_lock lock(w.mutex);
            w.cv.wait(lock, [&w] { return w.stop_requested || !w.jobs.empty(); });
            if (w.stop_requested && w.jobs.empty()) return;
            job = std::move(w.jobs.front());
            w.jobs.pop_front();
        }
        perform_submit(job);
    }
}

void ensure_submit_worker_started(SubmitWorker &w) {
    if (w.started) return;
    w.started = true;
    w.thread = std::thread(&submit_worker_main);
}

bool diagnostics_enabled() {
    static const bool enabled = std::getenv("PSPRECOMP_AUDIO_DIAG") != nullptr;
    return enabled;
}

bool summary_diagnostics_enabled() {
    static const bool enabled = [] {
        const char *text = std::getenv("PSPRECOMP_AUDIO_SUMMARY");
        if (text != nullptr) return *text != '\0' && std::strcmp(text, "0") != 0;
        return vcs_configuration().audio.diagnostics;
    }();
    return enabled;
}

// Called on SDL's own audio thread whenever the device wants more frames.
// Pulls each channel's queue independently at the hardware's own real-time
// pace; a channel that is momentarily empty just contributes silence.
void SDLCALL audio_callback(void *userdata, Uint8 *stream, int len) {
    AudioState &state = *static_cast<AudioState *>(userdata);
    const std::size_t frame_count = static_cast<std::size_t>(len) / (kOutputChannels * sizeof(std::int16_t));
    auto *out = reinterpret_cast<std::int16_t *>(stream);
    // Accumulate every channel's contribution at full int32 precision and
    // clamp to int16 exactly once, after all channels are summed -- not
    // after each one. Clamping per-channel truncated a loud channel (say,
    // music sitting near +/-32767) before a second channel's sample (say,
    // dialogue) was added, which could move the true combined sum back into
    // range but instead produced garbage built on the already-discarded
    // truncation. That is audible as crackling/distortion specifically when
    // multiple channels are loud at once -- a cutscene layering dialogue,
    // music and ambience simultaneously is exactly that case -- and explains
    // an audio-only glitch that tracks with content, not with anything in
    // the queue/underrun bookkeeping, which only ever measured starvation.
    thread_local std::vector<std::int32_t> mix;
    mix.assign(frame_count * kOutputChannels, 0);
    for (ChannelQueue &channel : state.channels) {
        std::lock_guard<std::mutex> guard(channel.mutex);
        if (!channel.active) continue;
        std::size_t frame = 0u;
        for (; frame < frame_count && channel.samples.size() >= kOutputChannels; ++frame) {
            for (std::size_t sample = 0u; sample < kOutputChannels; ++sample) {
                mix[frame * kOutputChannels + sample] += static_cast<std::int32_t>(channel.samples.front());
                channel.samples.pop_front();
            }
        }
        channel.underrun_frames += frame_count - frame;
        channel.pulled_frames += frame;
    }
    for (std::size_t i = 0u; i < mix.size(); ++i)
        out[i] = static_cast<std::int16_t>(std::clamp(mix[i], -32768, 32767));
    state.frames_played += frame_count;

    // PSPRECOMP_AUDIO_RAWDUMP=<path>: append the exact S16LE stereo samples
    // just handed to the device, with nothing else in the loop. This is the
    // final word on whether real audio is reaching the hardware at all --
    // everything else in this file can look perfectly healthy (queued,
    // underrun) while still being silent if the actual samples are zero.
    static const char *const raw_dump_path = std::getenv("PSPRECOMP_AUDIO_RAWDUMP");
    if (raw_dump_path != nullptr) {
        static std::ofstream raw_dump(raw_dump_path, std::ios::binary | std::ios::trunc);
        if (raw_dump)
            raw_dump.write(reinterpret_cast<const char *>(out),
                           static_cast<std::streamsize>(mix.size() * sizeof(std::int16_t)));
    }
}

// Guarded by state.device_mutex, separate from the per-channel mutexes, so
// device open/close stays serialized without forcing every channel's data
// operations through one shared lock.
bool ensure_device_locked(AudioState &state) {
    if (state.opened) return true;
    if (state.failed || state.closed) return false;

    if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0) {
        if (diagnostics_enabled()) std::cerr << "[audio-host] SDL_InitSubSystem(AUDIO) failed: " << SDL_GetError() << "\n";
        state.failed = true;
        return false;
    }

    SDL_AudioSpec desired{};
    desired.freq = static_cast<int>(kSampleRate);
    desired.format = AUDIO_S16SYS;
    desired.channels = static_cast<Uint8>(kOutputChannels);
    // Every frame in this buffer is fixed, mandatory output latency: the
    // device will not start playing a submitted block until a full period
    // has elapsed, no matter how ready the data is. 2048 frames (~46 ms) was
    // chosen for contention headroom back when the callback could still get
    // stuck behind a producer holding the same lock during resampling; that
    // lock is gone (each channel has its own, and resampling itself now runs
    // fully unlocked -- see the channel-mutex comment below), so this was
    // pure latency with nothing left to buy. 512 frames (~11.6 ms) is a
    // conservative, still-safe reduction.
    desired.samples = 512u;
    desired.callback = &audio_callback;
    desired.userdata = &state;

    SDL_AudioSpec obtained{};
    const SDL_AudioDeviceID device = SDL_OpenAudioDevice(nullptr, 0, &desired, &obtained, 0);
    if (device == 0) {
        if (diagnostics_enabled())
            std::cerr << "[audio-host] SDL_OpenAudioDevice failed: " << SDL_GetError() << "\n";
        state.failed = true;
        return false;
    }
    state.device = device;
    state.opened = true;
    SDL_PauseAudioDevice(state.device, 0);
    return true;
}

bool ensure_device(AudioState &state) {
    std::lock_guard<std::mutex> guard(state.device_mutex);
    return ensure_device_locked(state);
}

// The actual resample/gain/mix/splice work, run on the dedicated submit
// worker thread (see SubmitWorker/perform_submit's declaration and the big
// comment by audio_state() for why this is split out). Never called from the
// interpreter thread directly.
void perform_submit(const SubmitJob &job) {
    AudioState &state = audio_state();
    ChannelQueue &q = state.channels[job.channel];
    {
        // Brief, cheap: only the format-change check and (rare) resampler
        // reset happen under the lock. A format change (source rate or
        // channel count) needs a fresh resampler -- its internal history is
        // meaningless across the switch -- but the queue itself is already
        // uniform 44.1 kHz stereo regardless of source format, so leaving it
        // alone just means the old content finishes playing before the new
        // content starts, which is exactly correct.
        std::lock_guard<std::mutex> guard(q.mutex);
        if (!q.active || q.source_rate != job.source_rate || q.stereo != job.stereo) {
            q.active = true;
            q.source_rate = job.source_rate;
            q.stereo = job.stereo;
            q.resampler.reset(job.source_rate, job.stereo);
        }
    }

    const std::uint32_t master = vcs_configuration().audio.volume;
    const std::int64_t left_gain = (static_cast<std::int64_t>(job.left) * master) / 100;
    const std::int64_t right_gain = (static_cast<std::int64_t>(job.right) * master) / 100;

    // The actual resampling work happens with the lock released: the
    // resampler instance is only ever touched by this channel's own producer
    // -- this worker thread, one job at a time, in submission order, taking
    // the PSP audio API's inherent single-caller-per-channel property with
    // it -- never by the real-time callback, so it needs no lock at all.
    // Results land in a local buffer first so the real-time callback -- which
    // the lock IS shared with -- is never kept waiting on however long
    // resampling takes.
    std::vector<std::int16_t> mixed;
    mixed.reserve(static_cast<std::size_t>(job.frames) * kOutputChannels);
    q.resampler.process(job.pcm, job.frames, job.stereo, job.source_rate,
        [&](std::int16_t source_left, std::int16_t source_right) {
            const std::int64_t mixed_left = (static_cast<std::int64_t>(source_left) * left_gain) >> 15;
            const std::int64_t mixed_right = (static_cast<std::int64_t>(source_right) * right_gain) >> 15;
            mixed.push_back(static_cast<std::int16_t>(std::clamp<std::int64_t>(mixed_left, -32768, 32767)));
            mixed.push_back(static_cast<std::int16_t>(std::clamp<std::int64_t>(mixed_right, -32768, 32767)));
        });

    // Splice the finished samples in and trim from the front (oldest) if
    // this channel has decoded far enough ahead of real time to build up
    // more than kMaxQueuedFrames of backlog -- only stale lead time, never
    // the samples about to be played. Both are quick, lock-held operations.
    std::lock_guard<std::mutex> guard(q.mutex);
    q.samples.insert(q.samples.end(), mixed.begin(), mixed.end());
    q.pushed_frames += mixed.size() / kOutputChannels;
    const std::size_t cap_samples = kMaxQueuedFrames * kOutputChannels;
    if (q.samples.size() > cap_samples) {
        const std::size_t excess = q.samples.size() - cap_samples;
        q.trimmed_frames += excess / kOutputChannels;
        q.samples.erase(q.samples.begin(), q.samples.begin() + static_cast<std::ptrdiff_t>(excess));
    }
}

} // namespace

bool audio_output_enabled() {
    static const bool enabled = [] {
        if (const char *text = std::getenv("PSPRECOMP_AUDIO"))
            return *text != '\0' && std::string(text) != "0";
        const VcsConfiguration &configuration = vcs_configuration();
        return !configuration.initialized || configuration.audio.enabled;
    }();
    return enabled;
}

void audio_output_submit(std::span<const std::int16_t> pcm, std::uint32_t frames, bool stereo,
                         std::uint32_t left, std::uint32_t right, std::uint32_t source_rate,
                         std::uint32_t channel, std::uint64_t guest_time_us) {
    (void)guest_time_us;  // No absolute timeline left to schedule against -- see the file comment above.
    if (!audio_output_enabled() || frames == 0u || channel >= kGuestChannels) return;
    if (source_rate == 0u) source_rate = kSampleRate;
    const std::size_t needed = static_cast<std::size_t>(frames) * (stereo ? 2u : 1u);
    if (pcm.size() < needed) return;

    AudioState &state = audio_state();
    if (!ensure_device(state)) return;

    // Everything expensive (resampling, gain/mix, queue splice+trim) happens
    // on the dedicated submit worker thread instead of here -- see
    // perform_submit() and the comment by audio_state(). This call's only
    // cost is copying the PCM the caller decoded (its span does not outlive
    // this call) into a queued job and waking the worker.
    SubmitWorker &worker = submit_worker();
    std::lock_guard<std::mutex> guard(worker.mutex);
    ensure_submit_worker_started(worker);
    SubmitJob job;
    job.pcm.assign(pcm.begin(), pcm.begin() + static_cast<std::ptrdiff_t>(needed));
    job.frames = frames;
    job.stereo = stereo;
    job.left = left;
    job.right = right;
    job.source_rate = source_rate;
    job.channel = channel;
    worker.jobs.push_back(std::move(job));
    worker.cv.notify_one();
}

void audio_output_advance(std::uint64_t guest_time_us) {
    if (!audio_output_enabled()) return;
    AudioState &state = audio_state();
    if (!state.opened) return;
    if (!summary_diagnostics_enabled()) return;
    // audio_output_advance is called from guest code with the guest's virtual
    // clock, purely to pace how often this prints; frames_played (a real,
    // device-driven counter) is what actually gates it now.
    const std::uint64_t frames_played = state.frames_played;
    constexpr std::uint64_t kSummaryPeriodFrames = kSampleRate * 2u;  // ~2 s of real playback
    if (state.last_summary_frames_played != 0u &&
        frames_played - state.last_summary_frames_played < kSummaryPeriodFrames) {
        return;
    }
    std::cerr << "[audio-summary] guest_us=" << guest_time_us
              << " frames_played=" << frames_played;
    for (std::size_t channel = 0u; channel < kGuestChannels; ++channel) {
        ChannelQueue &q = state.channels[channel];
        std::lock_guard<std::mutex> guard(q.mutex);
        if (q.underrun_frames != 0u || q.trimmed_frames != 0u || !q.samples.empty() ||
            q.pushed_frames != 0u) {
            std::cerr << " ch" << channel << "[queued=" << q.samples.size() / kOutputChannels
                      << " underrun=" << q.underrun_frames << " trimmed=" << q.trimmed_frames
                      << " pushed=" << q.pushed_frames << " pulled=" << q.pulled_frames
                      << " balance=" << (static_cast<std::int64_t>(q.pushed_frames) -
                                         static_cast<std::int64_t>(q.pulled_frames) -
                                         static_cast<std::int64_t>(q.trimmed_frames) -
                                         static_cast<std::int64_t>(q.samples.size() / kOutputChannels))
                      << "]";
        }
    }
    std::cerr << "\n";
    state.last_summary_frames_played = frames_played;
}

void audio_output_reset_channel(std::uint32_t channel) {
    AudioState &state = audio_state();
    if (channel >= state.channels.size()) return;
    ChannelQueue &q = state.channels[channel];
    std::lock_guard<std::mutex> guard(q.mutex);
    q.samples.clear();
    q.resampler.reset();
    q.source_rate = kSampleRate;
    q.stereo = true;
    q.active = false;
    q.underrun_frames = 0u;
    q.trimmed_frames = 0u;
}

void audio_output_shutdown() {
    AudioState &state = audio_state();
    SDL_AudioDeviceID device = 0;
    {
        std::lock_guard<std::mutex> guard(state.device_mutex);
        if (!state.opened) return;
        device = state.device;
        state.device = 0;
        state.opened = false;
        // Latched: ensure_device() must not reopen the device while or after the close runs.
        state.closed = true;
    }
    // Close OUTSIDE the lock. SDL's CoreAudio driver stops the render queue with
    // AudioQueueStop(queue, immediate=0), which blocks until in-flight render
    // callbacks have returned -- and our callback takes each channel's mutex.
    // Holding device_mutex across SDL_CloseAudioDevice would be fine on its
    // own now (the callback no longer needs device_mutex), but there is no
    // reason to hold it across a call that can block.
    SDL_CloseAudioDevice(device);
    state.frames_played = 0u;
    state.last_summary_frames_played = 0u;
    for (std::uint32_t channel = 0u; channel < kGuestChannels; ++channel) {
        ChannelQueue &q = state.channels[channel];
        std::lock_guard<std::mutex> guard(q.mutex);
        if (diagnostics_enabled() && (q.underrun_frames != 0u || q.trimmed_frames != 0u))
            std::cerr << "[audio-host] shutdown ch" << channel << " underrun=" << q.underrun_frames
                      << " trimmed=" << q.trimmed_frames << "\n";
        q.samples.clear();
        q.resampler.reset();
        q.source_rate = kSampleRate;
        q.stereo = true;
        q.active = false;
        q.underrun_frames = 0u;
        q.trimmed_frames = 0u;
    }
}

std::uint64_t audio_output_frames_played() {
    return audio_state().frames_played;
}

} // namespace vcs

#else

namespace vcs {

bool audio_output_enabled() { return false; }
void audio_output_submit(std::span<const std::int16_t>, std::uint32_t, bool,
                         std::uint32_t, std::uint32_t, std::uint32_t, std::uint32_t,
                         std::uint64_t) {}
void audio_output_advance(std::uint64_t) {}
void audio_output_reset_channel(std::uint32_t) {}
void audio_output_shutdown() {}
std::uint64_t audio_output_frames_played() { return 0u; }

} // namespace vcs

#endif
