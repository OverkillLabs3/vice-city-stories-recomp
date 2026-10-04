// macOS: the game window's CAMetalLayer becomes the Vulkan surface (through MoltenVK).
#include "vulkan_platform.hpp"

#include <vulkan/vulkan_metal.h>

#include <cstdio>

namespace vcs::vkplat {

const char *platform_name() noexcept { return "macos"; }

std::vector<const char *> surface_instance_extensions() {
    return {VK_KHR_SURFACE_EXTENSION_NAME, VK_EXT_METAL_SURFACE_EXTENSION_NAME};
}

VkResult create_surface(VkInstance instance, void *native_window, VkSurfaceKHR &surface) {
    const auto create_metal_surface = reinterpret_cast<PFN_vkCreateMetalSurfaceEXT>(
        vkGetInstanceProcAddr(instance, "vkCreateMetalSurfaceEXT"));
    if (create_metal_surface == nullptr) {
        std::fprintf(stderr, "[swapchain] vkCreateMetalSurfaceEXT unavailable\n");
        return VK_ERROR_EXTENSION_NOT_PRESENT;
    }
    VkMetalSurfaceCreateInfoEXT surface_info{VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT};
    surface_info.pLayer = static_cast<const CAMetalLayer *>(native_window);
    return create_metal_surface(instance, &surface_info, nullptr, &surface);
}

// Proven on macOS: the swapchain present is the default there.
bool swapchain_default_enabled() noexcept { return true; }

bool surface_extent_can_change() noexcept { return false; }

} // namespace vcs::vkplat
