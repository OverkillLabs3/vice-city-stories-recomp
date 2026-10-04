#!/usr/bin/env python3
"""Assemble the distributable, self-contained VCSNative.app (macOS, Apple Silicon).

The result is ONE app that a player can download, unzip and double-click with nothing installed:

  * the launcher (SwiftUI) is the app's main executable; the game executable sits beside it inside the app
  * every non-system library the game needs (FFmpeg, SDL2 and the SDL3 it loads, the Vulkan loader,
    MoltenVK and its driver manifest) is copied into Contents/Frameworks and repointed at the bundle
  * default settings live in Contents/Resources/Defaults; at run time settings, saves and textures live in
    ~/Library/Application Support/VCSNative (the app itself stays sealed and read-only)
  * licence texts are included, and the whole bundle is ad-hoc signed with a valid resource seal

    macos_bundle.py --game VCSNative.app --launcher VCSLauncher.app --out dist/VCSNative.app \
                    --ffmpeg-prefix <LGPL FFmpeg install prefix>

Use an LGPL FFmpeg (configure --disable-gpl --disable-nonfree, see scripts/build_ffmpeg_macos.sh) for anything
you distribute. Homebrew's FFmpeg is a GPL build and must not be redistributed.
"""
import argparse
import os
import plistlib
import shutil
import subprocess
import sys
import tempfile

BREW = "/opt/homebrew/opt"


def run(*args, check=True):
    return subprocess.run(args, check=check, capture_output=True, text=True)


def deps(path):
    """Non-system libraries a Mach-O file links against (install-name paths as recorded)."""
    out = run("otool", "-L", path).stdout.splitlines()[1:]
    result = []
    for line in out:
        name = line.strip().split(" (")[0]
        if name.startswith(("/usr/lib/", "/System/", "@")):
            continue
        result.append(name)
    return result


def strip_absolute_rpaths(path):
    """Drop search paths that point outside the bundle (CMake leaves the Homebrew/FFmpeg build dirs there,
    and they would win over the bundled copies on any Mac that happens to have them installed)."""
    lines = run("otool", "-l", path).stdout.splitlines()
    for i, line in enumerate(lines):
        if line.strip() == "cmd LC_RPATH":
            rp = lines[i + 2].strip().split(" (offset")[0].replace("path ", "", 1)
            if not rp.startswith("@"):
                run("install_name_tool", "-delete_rpath", rp, path)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--game", required=True, help="built VCSNative.app")
    ap.add_argument("--launcher", required=True, help="built VCSLauncher.app")
    ap.add_argument("--out", required=True, help="distributable app to create")
    ap.add_argument("--ffmpeg-prefix", required=True)
    args = ap.parse_args()

    out_app = os.path.abspath(args.out)
    # Assemble and sign in a scratch folder: inside an iCloud-synced folder (Documents/Desktop) the sync
    # daemon keeps adding metadata that codesign refuses. The finished app is copied out at the end.
    work = tempfile.mkdtemp(prefix="vcsbundle")
    app = os.path.join(work, "VCSNative.app")
    shutil.copytree(args.game, app, symlinks=True)

    macos = os.path.join(app, "Contents", "MacOS")
    exe = os.path.join(macos, "VCSNative")
    launcher_exe = os.path.join(macos, "VCSLauncher")
    fw = os.path.join(app, "Contents", "Frameworks")
    res = os.path.join(app, "Contents", "Resources")
    icd_dir = os.path.join(res, "vulkan", "icd.d")
    defaults = os.path.join(res, "Defaults")
    lic = os.path.join(res, "Licenses")
    for d in (fw, icd_dir, defaults, lic):
        shutil.rmtree(d, ignore_errors=True)
        os.makedirs(d)

    # 0. The launcher becomes the app's main executable.
    shutil.copy2(os.path.join(args.launcher, "Contents", "MacOS", "VCSLauncher"), launcher_exe)
    with open(os.path.join(app, "Contents", "Info.plist"), "rb") as f:
        info = plistlib.load(f)
    info["CFBundleExecutable"] = "VCSLauncher"
    info["CFBundleName"] = info["CFBundleDisplayName"] = "VCSNative"
    info["LSMinimumSystemVersion"] = "13.0"
    with open(os.path.join(app, "Contents", "Info.plist"), "wb") as f:
        plistlib.dump(info, f)

    # 0b. Nothing but executables may stay in Contents/MacOS in a sealed app: move the shipped default
    #     settings and data files to Resources/Defaults (copied to the user's data folder on first run) and
    #     the notices to Resources/Licenses. Local state from a dev run (saves, logs, textures, game link)
    #     is dropped.
    for name in sorted(os.listdir(macos)):
        path = os.path.join(macos, name)
        if name in ("VCSNative", "VCSLauncher"):
            continue
        if name in ("VCSNative.ini", "ProperShaders.ini") or name.endswith(".bin"):
            shutil.move(path, os.path.join(defaults, name))
        elif name.endswith((".md", ".txt")):
            shutil.move(path, os.path.join(lic, name))
        else:
            if os.path.islink(path) or os.path.isfile(path):
                os.remove(path)
            else:
                shutil.rmtree(path)

    # 1. Collect libraries: everything the executable links, plus what is loaded at run time
    #    (SDL3 under sdl2-compat, MoltenVK under the Vulkan loader).
    queue = list(deps(exe))
    queue += [f"{BREW}/sdl3/lib/libSDL3.dylib", f"{BREW}/molten-vk/lib/libMoltenVK.dylib"]
    ffmpeg_real = os.path.realpath(args.ffmpeg_prefix)
    copied = {}
    while queue:
        src = queue.pop()
        if src in copied:
            continue
        src_real = os.path.realpath(src)
        if "/opt/homebrew/" not in src_real and not src_real.startswith(ffmpeg_real):
            sys.exit(f"refusing to bundle unexpected library: {src} -> {src_real}")
        name = os.path.basename(src)
        dest = os.path.join(fw, name)  # keep the soname the executable asks for
        shutil.copy2(src_real, dest)
        os.chmod(dest, 0o755)
        copied[src] = name
        queue += deps(dest)
    names = sorted(set(copied.values()))

    # 2. Repoint install names at the bundle.
    for name in names:
        path = os.path.join(fw, name)
        run("install_name_tool", "-id", f"@rpath/{name}", path)
        for dep in deps(path):
            base = os.path.basename(dep)
            if base in names:
                run("install_name_tool", "-change", dep, f"@rpath/{base}", path)
        strip_absolute_rpaths(path)
        run("install_name_tool", "-add_rpath", "@loader_path", path, check=False)  # SDL2 finds SDL3 beside itself
    for dep in deps(exe):
        base = os.path.basename(dep)
        if base in names:
            run("install_name_tool", "-change", dep, f"@rpath/{base}", exe)
    strip_absolute_rpaths(exe)
    run("install_name_tool", "-add_rpath", "@executable_path/../Frameworks", exe, check=False)

    # 3. Vulkan driver manifest where the loader looks inside an app bundle (Resources/vulkan/icd.d).
    with open(os.path.join(icd_dir, "MoltenVK_icd.json"), "w") as f:
        f.write('{\n    "file_format_version" : "1.0.0",\n    "ICD": {\n'
                '        "library_path": "../../../Frameworks/libMoltenVK.dylib",\n'
                '        "api_version" : "1.4.0",\n        "is_portability_driver" : true\n    }\n}\n')

    # 4. Licence files for everything that is redistributed.
    notices = {
        "SDL2-compat-zlib": f"{BREW}/sdl2-compat/LICENSE.txt",
        "SDL3-zlib": f"{BREW}/sdl3/LICENSE.txt",
        "Vulkan-Loader-Apache-2.0": f"{BREW}/vulkan-loader/LICENSE.txt",
        "MoltenVK-Apache-2.0": f"{BREW}/molten-vk/LICENSE",
    }
    for label, path in notices.items():
        if os.path.exists(path):
            shutil.copy2(path, os.path.join(lic, f"{label}.txt"))
    here = os.path.dirname(os.path.abspath(__file__))
    ffl = os.path.join(here, "..", "third_party", "ffmpeg", "COPYING.LGPLv2.1")
    if os.path.exists(ffl):
        shutil.copy2(ffl, os.path.join(lic, "FFmpeg-COPYING.LGPLv2.1"))
    with open(os.path.join(lic, "FFmpeg-SOURCE.txt"), "w") as f:
        f.write("The FFmpeg libraries in this app (libav*, libsw*) are FFmpeg 7.1.2 built as LGPL 2.1 or later\n"
                "with --disable-gpl --disable-nonfree --disable-autodetect and no external codec libraries.\n"
                "Source code: https://ffmpeg.org/releases/ffmpeg-7.1.2.tar.xz\n"
                "Build script: profiles/vcs/scripts/build_ffmpeg_macos.sh\n"
                "You may replace these libraries with your own build of the same version.\n")

    # 5. Sign. Editing the binaries invalidated their signatures and arm64 will not run unsigned code; the
    #    bundle itself is sealed last so downloaded copies pass the integrity check (an unsealed bundle is
    #    reported by macOS as "damaged"). Extended attributes are not allowed in signed code.
    run("xattr", "-cr", app)
    for name in names:
        run("codesign", "--force", "--sign", "-", os.path.join(fw, name))
    run("codesign", "--force", "--sign", "-", "--identifier", "com.pspreco.vcsnative.game", exe)
    run("codesign", "--force", "--sign", "-", "--identifier", "com.pspreco.vcsnative", launcher_exe)
    run("codesign", "--force", "--sign", "-", "--identifier", "com.pspreco.vcsnative", app)
    check = run("codesign", "--verify", "--strict", "--deep", app, check=False)
    if check.returncode != 0:
        sys.exit("signature verification failed:\n" + check.stderr)

    left = sorted({d for f in [exe] + [os.path.join(fw, n) for n in names] for d in deps(f) if not d.startswith("@")})
    if left:
        sys.exit("still linked outside the bundle:\n" + "\n".join(left))
    shutil.rmtree(out_app, ignore_errors=True)
    os.makedirs(os.path.dirname(out_app), exist_ok=True)
    run("ditto", "--noextattr", "--noacl", "--norsrc", app, out_app)
    shutil.rmtree(work, ignore_errors=True)
    print(f"built {out_app}: {len(names)} bundled libraries, sealed signature ok")


if __name__ == "__main__":
    main()
