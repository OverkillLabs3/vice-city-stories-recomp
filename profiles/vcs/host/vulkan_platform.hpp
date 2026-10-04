#pragma once

// The only place the Vulkan backend touches an operating system. ge_gpu_backend_vulkan.cpp is
// platform-neutral and calls these; each OS has its own implementation file under platform/
// (macos, windows, generic) and CMake compiles exactly one of them. Changing how Windows presents
// therefore cannot change macOS, and the reverse.

#include <vulkan/vulkan.h>

#include <vector>

namespace vcs::vkplat {

// Which platform layer this build carries ("macos", "windows", "generic").
[[nodiscard]] const char *platform_name() noexcept;

// Instance extensions needed to create a presentable surface here. Empty when this platform has
// no native-swapchain support, in which case the backend keeps to the CPU readback present path.
[[nodiscard]] std::vector<const char *> surface_instance_extensions();

// Creates a VkSurfaceKHR for the native window handle given to ge_gpu_backend_set_native_window():
// a CAMetalLayer* on macOS, an HWND on Windows.
[[nodiscard]] VkResult create_surface(VkInstance instance, void *native_window,
                                      VkSurfaceKHR &surface);

// Whether the GPU-side swapchain present is used unless PSPRECOMP_VULKAN_SWAPCHAIN says otherwise.
[[nodiscard]] bool swapchain_default_enabled() noexcept;

// True when the window can be resized behind the swapchain's back, so the drawable extent has to
// be checked every frame (Windows). On macOS the layer size is fixed for the process.
[[nodiscard]] bool surface_extent_can_change() noexcept;

} // namespace vcs::vkplat
