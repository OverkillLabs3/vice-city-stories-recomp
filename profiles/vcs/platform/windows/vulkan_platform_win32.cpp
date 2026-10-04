// Windows: the game window's HWND becomes the Vulkan surface (VK_KHR_win32_surface).
//
// This file is the only Windows-specific part of the Vulkan backend.

#ifndef NOMINMAX
#define NOMINMAX
#endif
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef VK_USE_PLATFORM_WIN32_KHR
#define VK_USE_PLATFORM_WIN32_KHR
#endif

#include "vulkan_platform.hpp"

#include <windows.h>
#include <vulkan/vulkan_win32.h>

#include <cstdio>

namespace vcs::vkplat {

const char *platform_name() noexcept { return "windows"; }

std::vector<const char *> surface_instance_extensions() {
    return {VK_KHR_SURFACE_EXTENSION_NAME, VK_KHR_WIN32_SURFACE_EXTENSION_NAME};
}

VkResult create_surface(VkInstance instance, void *native_window, VkSurfaceKHR &surface) {
    if (native_window == nullptr) return VK_ERROR_INITIALIZATION_FAILED;
    const auto create_win32_surface = reinterpret_cast<PFN_vkCreateWin32SurfaceKHR>(
        vkGetInstanceProcAddr(instance, "vkCreateWin32SurfaceKHR"));
    if (create_win32_surface == nullptr) {
        std::fprintf(stderr, "[swapchain] vkCreateWin32SurfaceKHR unavailable\n");
        return VK_ERROR_EXTENSION_NOT_PRESENT;
    }
    VkWin32SurfaceCreateInfoKHR surface_info{VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR};
    surface_info.hinstance = GetModuleHandleW(nullptr);
    surface_info.hwnd = static_cast<HWND>(native_window);
    return create_win32_surface(instance, &surface_info, nullptr, &surface);
}

// ON: verified on Windows 11 (RTX 2070 SUPER / RTX 5070 Ti). Present costs ~0.3 ms against ~150 ms
// for the CPU readback + GDI path at 4K; resize, maximise, minimise/restore, show-desktop and rapid
// resizes recreate the swapchain with no failures; intro videos and loading screens go through it
// via ge_gpu_backend_present_rgba(). PSPRECOMP_VULKAN_SWAPCHAIN=0 forces the readback path.
bool swapchain_default_enabled() noexcept { return true; }

// Windows users resize windows and toggle fullscreen, so the extent is re-checked every frame.
bool surface_extent_can_change() noexcept { return true; }

} // namespace vcs::vkplat
