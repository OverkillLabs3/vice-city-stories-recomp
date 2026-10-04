#include "vcs_key_prompts.hpp"

#include <algorithm>
#include <atomic>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <iterator>
#include <string>
#include <utility>
#include <vector>

namespace vcs {
namespace {

using Bytes = std::vector<std::uint8_t>;

std::uint32_t read32(const Bytes &b, std::size_t at) {
    return static_cast<std::uint32_t>(b[at]) | (static_cast<std::uint32_t>(b[at + 1]) << 8u) |
           (static_cast<std::uint32_t>(b[at + 2]) << 16u) | (static_cast<std::uint32_t>(b[at + 3]) << 24u);
}

void write32(Bytes &b, std::uint32_t v) {
    for (int i = 0; i < 4; ++i) b.push_back(static_cast<std::uint8_t>((v >> (8 * i)) & 0xFFu));
}

struct Entry {
    std::uint32_t offset{};
    std::string key;  // 8 bytes on disk
};

struct Table {
    std::string name;
    std::size_t begin{};
    std::size_t end{};
    std::vector<Entry> entries;
    std::u16string data;  // the whole TDAT, code units
    bool has_name_header{false};
    bool parsed{false};
};

// What each PSP button is on our keyboard and mouse. Longest phrase first so that
// "analog stick left and analog stick right" wins over "analog stick".
const std::vector<std::pair<std::u16string, std::u16string>> &phrases() {
    static const std::vector<std::pair<std::u16string, std::u16string>> table = {
        {u"L button + analog stick down", u"Middle mouse + S"},
        {u"L button + analog stick left", u"Middle mouse + A"},
        {u"L button + analog stick right", u"Middle mouse + D"},
        {u"L button + down button", u"Middle mouse + Down arrow"},
        {u"L button + left button", u"Middle mouse + Q"},
        {u"L button + right button", u"Middle mouse + E"},
        {u"L button + R button", u"Middle mouse + Right mouse"},
        {u"R button + L button", u"Right mouse + Middle mouse"},
        {u"L button and R button", u"Middle mouse and Right mouse"},
        {u"analog stick left and analog stick right", u"A and D"},
        {u"analog stick up and analog stick down", u"W and S"},
        {u"left button and right button", u"Q and E"},
        {u"up button and down button", u"Up and Down arrows"},
        {u"analog stick left", u"A"},
        {u"analog stick right", u"D"},
        {u"analog stick up", u"W"},
        {u"analog stick down", u"S"},
        {u"analog stick", u"WASD"},
        {u"directional buttons", u"arrow keys"},
        {u"the down button", u"the Down arrow"},
        {u"the up button", u"the Up arrow"},
        {u"down button", u"Down arrow"},
        {u"up button", u"Up arrow"},
        {u"left button", u"Q"},
        {u"right button", u"E"},
        {u"SELECT button", u"Tab"},
        {u"L button", u"Middle mouse"},
        {u"R button", u"Right mouse"},
        {u"D-PAD LEFT/RIGHT", u"Q/E"},
        {u"CROSS", u"Space"},
        {u"CIRCLE", u"Left mouse"},
        {u"SQUARE", u"Left Shift"},
        {u"TRIANGLE", u"F"},
    };
    return table;
}

// Button glyph tokens the game draws as PSP face-button icons.
const std::vector<std::pair<std::u16string, std::u16string>> &glyphs() {
    static const std::vector<std::pair<std::u16string, std::u16string>> table = {
        {u"~X~", u"Space"},
        {u"~O~", u"Left mouse"},
        {u"~S~", u"Left Shift"},
        {u"~T~", u"F"},
    };
    return table;
}

const std::vector<std::pair<std::u16string, std::u16string>> &pad_phrases() {
    static const std::vector<std::pair<std::u16string, std::u16string>> table = {
        {u"L button + analog stick down", u"LB + Left stick down"},
        {u"L button + analog stick left", u"LB + Left stick left"},
        {u"L button + analog stick right", u"LB + Left stick right"},
        {u"L button + down button", u"LB + D-pad down"},
        {u"L button + left button", u"LB + D-pad left"},
        {u"L button + right button", u"LB + D-pad right"},
        {u"L button + R button", u"LB + RB"},
        {u"R button + L button", u"RB + LB"},
        {u"L button and R button", u"LB and RB"},
        {u"analog stick left and analog stick right", u"Left stick left and right"},
        {u"analog stick up and analog stick down", u"Left stick up and down"},
        {u"left button and right button", u"D-pad left and right"},
        {u"up button and down button", u"D-pad up and down"},
        {u"analog stick left", u"Left stick left"},
        {u"analog stick right", u"Left stick right"},
        {u"analog stick up", u"Left stick up"},
        {u"analog stick down", u"Left stick down"},
        {u"analog stick", u"Left stick"},
        {u"directional buttons", u"D-pad"},
        {u"the down button", u"D-pad down"},
        {u"the up button", u"D-pad up"},
        {u"down button", u"D-pad down"},
        {u"up button", u"D-pad up"},
        {u"left button", u"D-pad left"},
        {u"right button", u"D-pad right"},
        {u"SELECT button", u"Back"},
        {u"L button", u"LB"},
        {u"R button", u"RB"},
        {u"D-PAD LEFT/RIGHT", u"D-pad left/right"},
        {u"CROSS", u"A"},
        {u"CIRCLE", u"B"},
        {u"SQUARE", u"X"},
        {u"TRIANGLE", u"Y"},
    };
    return table;
}

const std::vector<std::pair<std::u16string, std::u16string>> &pad_glyphs() {
    static const std::vector<std::pair<std::u16string, std::u16string>> table = {
        {u"~X~", u"A"}, {u"~O~", u"B"}, {u"~S~", u"X"}, {u"~T~", u"Y"},
    };
    return table;
}

bool replace_all(std::u16string &text, const std::u16string &from, const std::u16string &to) {
    bool changed = false;
    for (std::size_t at = text.find(from); at != std::u16string::npos;
         at = text.find(from, at + to.size())) {
        text.replace(at, from.size(), to);
        changed = true;
    }
    return changed;
}

bool is_control_key(const std::string &key) {
    return key.size() > 2 && key[0] == 'C' && key[1] >= '0' && key[1] <= '3';
}

bool translate(const std::string &key, std::u16string &text, bool controller = false) {
    bool changed = false;
    const auto &glyph_table = controller ? pad_glyphs() : glyphs();
    const auto &phrase_table = controller ? pad_phrases() : phrases();
    for (const auto &[from, to] : glyph_table) changed |= replace_all(text, from, to);
    if (is_control_key(key)) {
        // The control-name strings are phrases like "L button" or "analog stick";
        // the phrase table only ever applies to them and a few help legends, so
        // ordinary dialogue that merely contains the word "button" is not touched.
        for (const auto &[from, to] : phrase_table) changed |= replace_all(text, from, to);
    } else if (key.rfind("EMHELP", 0) == 0 || key == "DBGHELP" || key == "DBGQUIT" || key == "DBGSEL") {
        for (const auto &[from, to] : phrase_table) changed |= replace_all(text, from, to);
    }
    return changed;
}

bool parse(const Bytes &file, std::vector<Table> &tables) {
    if (file.size() < 16 || std::memcmp(file.data(), "TABL", 4) != 0) return false;
    const std::uint32_t list_size = read32(file, 4);
    if (list_size % 12u != 0u || 8u + list_size > file.size()) return false;
    std::vector<std::pair<std::uint32_t, std::size_t>> order;
    for (std::uint32_t i = 0; i < list_size / 12u; ++i) {
        Table t;
        const std::size_t at = 8u + static_cast<std::size_t>(i) * 12u;
        char name[9] = {};
        std::memcpy(name, file.data() + at, 8);
        t.name = name;
        t.begin = read32(file, at + 8);
        tables.push_back(std::move(t));
    }
    for (std::size_t i = 0; i < tables.size(); ++i) {
        std::size_t end = file.size();
        for (const Table &o : tables)
            if (o.begin > tables[i].begin && o.begin < end) end = o.begin;
        tables[i].end = end;
        std::size_t p = tables[i].begin;
        tables[i].has_name_header = tables[i].name != "MAIN";
        if (tables[i].has_name_header) p += 8;
        if (p + 8 > end || std::memcmp(file.data() + p, "TKEY", 4) != 0) continue;
        const std::uint32_t key_bytes = read32(file, p + 4);
        if (key_bytes % 12u != 0u || p + 8u + key_bytes + 8u > end) continue;
        for (std::uint32_t k = 0; k < key_bytes / 12u; ++k) {
            const std::size_t e = p + 8u + static_cast<std::size_t>(k) * 12u;
            Entry entry;
            entry.offset = read32(file, e);
            char key[9] = {};
            std::memcpy(key, file.data() + e + 4, 8);
            entry.key = key;
            tables[i].entries.push_back(std::move(entry));
        }
        const std::size_t d = p + 8u + key_bytes;
        if (std::memcmp(file.data() + d, "TDAT", 4) != 0) { tables[i].entries.clear(); continue; }
        const std::uint32_t data_bytes = read32(file, d + 4);
        if (d + 8u + data_bytes > end) { tables[i].entries.clear(); continue; }
        for (std::uint32_t c = 0; c + 1u < data_bytes; c += 2u)
            tables[i].data.push_back(static_cast<char16_t>(file[d + 8 + c] | (file[d + 9 + c] << 8)));
        tables[i].parsed = true;
    }
    return true;
}

// Re-emits one table with the strings run through translate(); returns the raw bytes.
std::vector<PromptPatch> g_patches;
std::atomic<bool> g_controller{false};

bool rebuild(Table &t, Bytes &out, std::size_t table_start) {
    std::u16string data;
    std::vector<Entry> entries = t.entries;
    std::vector<PromptPatch> local;
    bool changed = false;
    for (Entry &e : entries) {
        const std::size_t start = e.offset / 2u;
        if (start > t.data.size()) return false;
        std::size_t stop = start;
        while (stop < t.data.size() && t.data[stop] != u'\0') ++stop;
        const std::u16string original = t.data.substr(start, stop - start);
        std::u16string keyboard = original;
        const bool did = translate(e.key, keyboard, false);
        std::u16string pad = original;
        translate(e.key, pad, true);
        e.offset = static_cast<std::uint32_t>(data.size() * 2u);
        // Both wordings share one slot, sized for the longer, so the strings can
        // be swapped in place once the game has loaded them.
        const std::size_t slot = std::max(keyboard.size(), pad.size()) + 1u;
        if (did) {
            changed = true;
            if (t.name == "MAIN") {
                PromptPatch patch;
                patch.file_offset = static_cast<std::uint32_t>(e.offset);  // made absolute below
                patch.keyboard = keyboard;
                patch.pad = pad;
                patch.slot_units = static_cast<std::uint32_t>(slot);
                local.push_back(std::move(patch));
            }
        }
        data += keyboard;
        data.append(slot - keyboard.size(), u'\0');
    }
    if (!changed) return false;
    while ((data.size() * 2u) % 4u != 0u) data.push_back(u'\0');
    if (t.has_name_header) {
        char name[8] = {};
        std::memcpy(name, t.name.data(), std::min<std::size_t>(t.name.size(), 8));
        out.insert(out.end(), name, name + 8);
    }
    out.insert(out.end(), {'T', 'K', 'E', 'Y'});
    write32(out, static_cast<std::uint32_t>(entries.size() * 12u));
    for (const Entry &e : entries) {
        write32(out, e.offset);
        char key[8] = {};
        std::memcpy(key, e.key.data(), std::min<std::size_t>(e.key.size(), 8));
        out.insert(out.end(), key, key + 8);
    }
    out.insert(out.end(), {'T', 'D', 'A', 'T'});
    write32(out, static_cast<std::uint32_t>(data.size() * 2u));
    const std::size_t data_start = table_start + (out.size() - table_start);
    for (PromptPatch &p : local) p.file_offset += static_cast<std::uint32_t>(data_start);
    for (char16_t c : data) {
        out.push_back(static_cast<std::uint8_t>(c & 0xFFu));
        out.push_back(static_cast<std::uint8_t>((c >> 8u) & 0xFFu));
    }
    for (PromptPatch &p : local) g_patches.push_back(std::move(p));
    return true;
}

}  // namespace

std::optional<std::filesystem::path> vcs_keyboard_prompt_gxt(const std::filesystem::path &original) {
    g_patches.clear();
    try {
        std::ifstream in(original, std::ios::binary);
        if (!in) return std::nullopt;
        Bytes file((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
        std::vector<Table> tables;
        if (!parse(file, tables)) return std::nullopt;

        // New layout: the table list is unchanged in size, so tables keep their
        // order and only their offsets move when an earlier table changes size.
        std::vector<std::size_t> order(tables.size());
        for (std::size_t i = 0; i < order.size(); ++i) order[i] = i;
        std::sort(order.begin(), order.end(),
                  [&](std::size_t a, std::size_t b) { return tables[a].begin < tables[b].begin; });

        Bytes out(file.begin(), file.begin() + static_cast<std::ptrdiff_t>(8u + tables.size() * 12u));
        // Anything between the table list and the first table (none in practice) is kept.
        if (!order.empty() && tables[order[0]].begin > out.size())
            out.insert(out.end(), file.begin() + static_cast<std::ptrdiff_t>(out.size()),
                       file.begin() + static_cast<std::ptrdiff_t>(tables[order[0]].begin));
        std::vector<std::uint32_t> new_begin(tables.size());
        std::size_t changed_tables = 0u;
        for (std::size_t idx : order) {
            new_begin[idx] = static_cast<std::uint32_t>(out.size());
            Bytes rebuilt;
            if (tables[idx].parsed && rebuild(tables[idx], rebuilt, out.size())) {
                out.insert(out.end(), rebuilt.begin(), rebuilt.end());
                ++changed_tables;
            } else {
                out.insert(out.end(), file.begin() + static_cast<std::ptrdiff_t>(tables[idx].begin),
                           file.begin() + static_cast<std::ptrdiff_t>(tables[idx].end));
            }
        }
        for (std::size_t i = 0; i < tables.size(); ++i) {
            const std::size_t at = 8u + i * 12u + 8u;
            for (int b = 0; b < 4; ++b)
                out[at + static_cast<std::size_t>(b)] = static_cast<std::uint8_t>((new_begin[i] >> (8 * b)) & 0xFFu);
        }
        if (changed_tables == 0u) return std::nullopt;

        std::error_code ec;
        const std::filesystem::path dir = std::filesystem::temp_directory_path(ec) / "VCSNative_prompts";
        std::filesystem::create_directories(dir, ec);
        const std::filesystem::path path = dir / "ENGLISH.GXT";
        std::ofstream o(path, std::ios::binary | std::ios::trunc);
        o.write(reinterpret_cast<const char *>(out.data()), static_cast<std::streamsize>(out.size()));
        if (!o) return std::nullopt;
        return path;
    } catch (...) {
        return std::nullopt;
    }
}

void vcs_prompt_note_input(bool controller) noexcept { g_controller.store(controller, std::memory_order_relaxed); }
bool vcs_prompt_controller_active() noexcept { return g_controller.load(std::memory_order_relaxed); }
const std::vector<PromptPatch> &vcs_prompt_patches() noexcept { return g_patches; }

std::vector<std::uint8_t> vcs_prompt_signature() noexcept {
    // The bytes of the first patch's keyboard string plus its terminator: distinctive
    // enough to find the loaded table in guest RAM.
    std::vector<std::uint8_t> sig;
    for (const PromptPatch &p : g_patches) {
        if (p.keyboard.size() < 12u) continue;
        for (char16_t c : p.keyboard) { sig.push_back(static_cast<std::uint8_t>(c & 0xFFu)); sig.push_back(static_cast<std::uint8_t>(c >> 8u)); }
        sig.push_back(0u); sig.push_back(0u);
        break;
    }
    return sig;
}

}  // namespace vcs
