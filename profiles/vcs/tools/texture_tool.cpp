// Offline texture tool: runs the same classify/upscale code the game uses over a
// folder of PNGs (with optional <name>.usage sidecars), for evaluation and pack building.
//   texture_tool <in_dir> <out_dir> <mode: clean|modern> [strength]
#include "vcs_texture_replace.hpp"

#include "../third_party/stb/stb_image.h"
#include "../third_party/stb/stb_image_write.h"

#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>

int main(int argc, char **argv) {
    if (argc < 4) { std::fprintf(stderr, "usage: texture_tool <in> <out> <clean|modern> [strength]\n"); return 2; }
    namespace fs = std::filesystem;
    const fs::path in = argv[1], out = argv[2];
    const std::string mode = argv[3];
    const float strength = argc > 4 ? static_cast<float>(std::atof(argv[4])) : 1.0f;
    fs::create_directories(out);
    std::ofstream classes(out / "classes.tsv");
    int done = 0;
    for (const auto &entry : fs::directory_iterator(in)) {
        if (entry.path().extension() != ".png") continue;
        int w = 0, h = 0, c = 0;
        unsigned char *px = stbi_load(entry.path().string().c_str(), &w, &h, &c, 4);
        if (px == nullptr) continue;
        std::uint32_t usage = 0u;
        if (std::ifstream meta(entry.path().string() + ".usage"); meta) meta >> usage;
        const std::span<const std::byte> pixels(reinterpret_cast<const std::byte *>(px), static_cast<std::size_t>(w) * h * 4u);
        const vcs::TextureClass cls = vcs::texture_classify(pixels, static_cast<std::uint32_t>(w), static_cast<std::uint32_t>(h), usage);
        const std::uint32_t largest = static_cast<std::uint32_t>(std::max(w, h));
        const std::uint32_t shift = largest <= 64u ? 2u : largest <= 256u ? 1u : 0u;
        vcs::ReplacementTexture up;
        if (shift != 0u && cls != vcs::TextureClass::Ui) {
            up = mode == "modern" ? vcs::texture_upscale_modern(pixels, static_cast<std::uint32_t>(w), static_cast<std::uint32_t>(h), shift, cls, strength)
                                  : vcs::texture_upscale_clean(pixels, static_cast<std::uint32_t>(w), static_cast<std::uint32_t>(h), shift, 0.25f);
        }
        classes << entry.path().filename().string() << '\t' << vcs::texture_class_name(cls) << '\t' << w << 'x' << h << '\n';
        if (!up.rgba.empty())
            stbi_write_png((out / entry.path().filename()).string().c_str(), static_cast<int>(up.width), static_cast<int>(up.height), 4, up.rgba.data(), static_cast<int>(up.width) * 4);
        stbi_image_free(px);
        ++done;
    }
    std::printf("processed %d textures\n", done);
    return 0;
}
