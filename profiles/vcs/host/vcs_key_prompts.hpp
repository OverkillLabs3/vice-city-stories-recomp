#pragma once

#include <filesystem>
#include <optional>
#include <string>
#include <vector>
#include <cstdint>

namespace vcs {

// Returns a copy of the game's ENGLISH.GXT in which every PSP button name and
// button glyph token is replaced by the keyboard/mouse control that is bound
// to that PSP button (see kKeyBindings/kMouseBindings in display_window.cpp).
// Returns nothing when the file cannot be parsed or written, in which case the
// caller keeps the original file untouched.
[[nodiscard]] std::optional<std::filesystem::path> vcs_keyboard_prompt_gxt(
    const std::filesystem::path &original);

// Live switching between keyboard/mouse and controller wording. The generated
// file is laid out so that both wordings occupy the same bytes; once the game
// has loaded it, the strings can be swapped in place in guest memory.
struct PromptPatch {
    std::uint32_t file_offset{};  // byte offset of the string's slot in the generated file
    std::u16string keyboard;
    std::u16string pad;
    std::uint32_t slot_units{};   // code units available, including the terminator
};

// Notes which kind of device produced the latest input (thread safe).
void vcs_prompt_note_input(bool controller) noexcept;
[[nodiscard]] bool vcs_prompt_controller_active() noexcept;
[[nodiscard]] const std::vector<PromptPatch> &vcs_prompt_patches() noexcept;
// Byte offset in the generated file of the first patch's slot; 0 if none.
[[nodiscard]] std::vector<std::uint8_t> vcs_prompt_signature() noexcept;

}  // namespace vcs
