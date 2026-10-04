// Platforms without a window implementation (no window, no input).

#include "display_window.hpp"
#include "dx12_presenter.hpp"
#include "ge_gpu_backend.hpp"
#include "vcs_config.hpp"
#include "vcs_env.hpp"
#include "vcs_key_prompts.hpp"
#include "vcs_runtime_log.hpp"
#include "vcs_vehicle_input.hpp"

#include <algorithm>
#include <atomic>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>


namespace vcs {

bool display_window_enabled() { return false; }
void display_window_start() {}
void display_window_set_status(const char *) {}
void display_window_set_aspect_lock(bool) noexcept {}
void display_window_present(const psprecomp::GuestMemory &, const FramebufferDescription &) {}
void display_window_present_rgba(std::span<const std::byte>, std::uint32_t, std::uint32_t) {}
DisplayWindowSurface display_window_surface() { return {}; }
std::uint32_t display_window_buttons() { return 0u; }
void display_window_analog(std::uint8_t &x, std::uint8_t &y) { x = 128u; y = 128u; }
HostInputState display_window_input() { return {}; }
bool display_window_close_requested() { return false; }
bool display_window_debug_dump_requested() { return false; }
void display_window_shutdown() {}

} // namespace vcs
