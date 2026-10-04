#pragma once

#include <filesystem>
#include <vector>

namespace vcs {

struct BootstrapPaths {
    std::filesystem::path psp_executable;
    std::filesystem::path game_root;
    bool discovered_from_psp_data{};
};

// Explicit command-line paths retain the old behavior. With no arguments,
// discover both the decrypted EBOOT and assets below <exe_dir>/PSP_DATA, then below
// <dir>/PSP_DATA for each of extra_search_roots in order (macOS: the per-user data folder and the
// folder holding the .app).
[[nodiscard]] BootstrapPaths resolve_bootstrap_paths(
    int argc, const char *const *argv,
    const std::filesystem::path &executable_directory,
    const std::vector<std::filesystem::path> &extra_search_roots = {});

} // namespace vcs
