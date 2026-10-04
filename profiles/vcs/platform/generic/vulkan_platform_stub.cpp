// Any platform without a surface implementation yet (Linux, etc.): the Vulkan backend keeps to
// the CPU readback present path.
#include "vulkan_platform.hpp"

namespace vcs::vkplat {

const char *platform_name() noexcept { return "generic"; }
std::vector<const char *> surface_instance_extensions() { return {}; }
VkResult create_surface(VkInstance, void *, VkSurfaceKHR &) { return VK_ERROR_EXTENSION_NOT_PRESENT; }
bool swapchain_default_enabled() noexcept { return false; }
bool surface_extent_can_change() noexcept { return false; }

} // namespace vcs::vkplat
