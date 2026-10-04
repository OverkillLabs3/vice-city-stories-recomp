import SwiftUI
import AppKit

// MARK: - INI document model
//
// Edits VCSNative.ini in place, line by line, rather than fully
// reserializing it -- the shipped file's comments are the only
// documentation some of these settings have (valid ranges, what each
// ResolutionMode value means), so a naive "parse into a dictionary and
// rewrite" approach would silently delete all of that on first save.

final class IniDocument: ObservableObject {
    @Published var lines: [String] = []
    @Published var loadError: String?
    let fileURL: URL

    init(fileURL: URL) {
        self.fileURL = fileURL
        reload()
    }

    func reload() {
        guard let text = try? String(contentsOf: fileURL, encoding: .utf8) else {
            loadError = "Could not read \(fileURL.lastPathComponent) at \(fileURL.path)."
            lines = []
            return
        }
        loadError = nil
        lines = text.components(separatedBy: "\n")
    }

    func save() throws {
        let text = lines.joined(separator: "\n")
        try text.write(to: fileURL, atomically: true, encoding: .utf8)
    }

    /// Reads `Key=Value` under `[Section]`, trimmed. Case-sensitive on the
    /// section/key spelling the shipped .ini actually uses.
    func get(_ section: String, _ key: String) -> String? {
        var inSection = false
        for line in lines {
            let trimmed = line.trimmingCharacters(in: .whitespaces)
            if trimmed.hasPrefix("[") && trimmed.hasSuffix("]") {
                inSection = trimmed.dropFirst().dropLast() == section
                continue
            }
            guard inSection, !trimmed.hasPrefix(";"), let eq = trimmed.firstIndex(of: "=") else { continue }
            let k = trimmed[trimmed.startIndex..<eq].trimmingCharacters(in: .whitespaces)
            if k == key {
                return trimmed[trimmed.index(after: eq)...].trimmingCharacters(in: .whitespaces)
            }
        }
        return nil
    }

    /// Rewrites the first `Key=...` line found under `[Section]` in place,
    /// keeping everything else (comments, blank lines, ordering) untouched.
    /// Appends a new line at the end of the section if the key is missing
    /// entirely (defensive -- every key this launcher exposes ships in the
    /// default .ini, so this path is not expected to run in practice).
    func set(_ section: String, _ key: String, _ value: String) {
        var inSection = false
        var sectionEndIndex: Int?
        for (index, line) in lines.enumerated() {
            let trimmed = line.trimmingCharacters(in: .whitespaces)
            if trimmed.hasPrefix("[") && trimmed.hasSuffix("]") {
                if inSection { sectionEndIndex = index; break }
                inSection = trimmed.dropFirst().dropLast() == section
                continue
            }
            guard inSection else { continue }
            if !trimmed.hasPrefix(";"), let eq = trimmed.firstIndex(of: "=") {
                let k = trimmed[trimmed.startIndex..<eq].trimmingCharacters(in: .whitespaces)
                if k == key {
                    lines[index] = "\(key)=\(value)"
                    return
                }
            }
            sectionEndIndex = index + 1
        }
        if let insertAt = sectionEndIndex {
            lines.insert("\(key)=\(value)", at: insertAt)
        }
    }

    func bool(_ section: String, _ key: String, default def: Bool = false) -> Bool {
        guard let raw = get(section, key)?.lowercased() else { return def }
        return raw == "1" || raw == "true" || raw == "yes" || raw == "on"
    }

    func setBool(_ section: String, _ key: String, _ value: Bool) {
        set(section, key, value ? "true" : "false")
    }

    func int(_ section: String, _ key: String, default def: Int) -> Int {
        guard let raw = get(section, key), let v = Int(raw) else { return def }
        return v
    }

    func setInt(_ section: String, _ key: String, _ value: Int) {
        set(section, key, String(value))
    }

    func float(_ section: String, _ key: String, default def: Double) -> Double {
        guard let raw = get(section, key), let v = Double(raw) else { return def }
        return v
    }

    func setFloat(_ section: String, _ key: String, _ value: Double) {
        set(section, key, String(format: "%.2f", value))
    }
}

// MARK: - Bindings between the form and the document

extension IniDocument {
    func binding(_ section: String, _ key: String, default def: Bool) -> Binding<Bool> {
        Binding(get: { self.bool(section, key, default: def) },
                set: { self.setBool(section, key, $0) })
    }
    func binding(_ section: String, _ key: String, default def: Int) -> Binding<Int> {
        Binding(get: { self.int(section, key, default: def) },
                set: { self.setInt(section, key, $0) })
    }
    func binding(_ section: String, _ key: String, default def: String) -> Binding<String> {
        Binding(get: { self.get(section, key) ?? def },
                set: { self.set(section, key, $0) })
    }
    func binding(_ section: String, _ key: String, default def: Double) -> Binding<Double> {
        Binding(get: { self.float(section, key, default: def) },
                set: { self.setFloat(section, key, $0) })
    }
}

// MARK: - App locations
//
// The launcher lives beside VCSNative.app and VCSNative.ini (the same
// bin/<config> directory CMake already drops all three into), so both are
// found relative to the launcher's own bundle rather than a hardcoded path.

enum GameLocation {
    /// A packaged app carries its default settings in Contents/Resources/Defaults. It is sealed (and macOS
    /// may run a freshly downloaded copy from a read-only location), so settings, saves and textures live in
    /// the per-user data folder and the game executable sits inside this same app. A development build has
    /// no Defaults folder and keeps the old layout: the game app beside the launcher.
    static var defaultsURL: URL? {
        guard let dir = Bundle.main.resourceURL?.appendingPathComponent("Defaults"),
              FileManager.default.fileExists(atPath: dir.path) else { return nil }
        return dir
    }
    static var packaged: Bool { defaultsURL != nil }
    static var dataURL: URL {
        FileManager.default.urls(for: .applicationSupportDirectory, in: .userDomainMask)[0]
            .appendingPathComponent("VCSNative")
    }
    /// Creates the data folder and copies any default file the user does not have yet.
    static func seedDataFolder() {
        guard let defaults = defaultsURL else { return }
        let fm = FileManager.default
        try? fm.createDirectory(at: dataURL, withIntermediateDirectories: true)
        for name in (try? fm.contentsOfDirectory(atPath: defaults.path)) ?? [] {
            let target = dataURL.appendingPathComponent(name)
            if !fm.fileExists(atPath: target.path) {
                try? fm.copyItem(at: defaults.appendingPathComponent(name), to: target)
            }
        }
    }
    /// The executable Play starts: inside this app when packaged.
    static var gameExecutableURL: URL {
        Bundle.main.bundleURL.appendingPathComponent("Contents/MacOS/VCSNative")
    }

    // MARK: Game folder (PSP_DATA)
    static let ebootRelative = "PSP_GAME/SYSDIR/EBOOT_DECRYPTED.ELF"
    static func hasGame(at folder: URL) -> Bool {
        FileManager.default.fileExists(atPath: folder.appendingPathComponent(ebootRelative).path)
    }
    /// Where the game will find PSP_DATA right now, if anywhere: the folder chosen in this launcher (a link
    /// in the data folder), then a PSP_DATA next to the app, then one inside the app.
    static var foundGameFolder: URL? {
        let candidates = [
            dataURL.appendingPathComponent("PSP_DATA"),
            Bundle.main.bundleURL.deletingLastPathComponent().appendingPathComponent("PSP_DATA"),
            Bundle.main.bundleURL.appendingPathComponent("Contents/MacOS/PSP_DATA"),
        ]
        return candidates.first { hasGame(at: $0) }
    }
    /// Accepts the PSP_DATA folder itself, or a folder that contains one, and links it into the data folder.
    static func chooseGameFolder(_ picked: URL) -> Result<URL, Error> {
        func fail(_ m: String) -> Result<URL, Error> {
            .failure(NSError(domain: "VCSLauncher", code: 2, userInfo: [NSLocalizedDescriptionKey: m]))
        }
        let root = [picked, picked.appendingPathComponent("PSP_DATA")].first { hasGame(at: $0) }
        guard let root else {
            return fail("That folder does not contain PSP_GAME/SYSDIR/EBOOT_DECRYPTED.ELF. Choose the folder that holds your extracted game (usually called PSP_DATA).")
        }
        let fm = FileManager.default
        try? fm.createDirectory(at: dataURL, withIntermediateDirectories: true)
        let link = dataURL.appendingPathComponent("PSP_DATA")
        if let attrs = try? fm.attributesOfItem(atPath: link.path), attrs[.type] as? FileAttributeType != .typeSymbolicLink {
            return fail("\(link.path) already exists as a real folder. Remove or rename it first.")
        }
        try? fm.removeItem(at: link)
        do { try fm.createSymbolicLink(at: link, withDestinationURL: root) } catch { return .failure(error) }
        return .success(root)
    }

    static var directory: URL {
        Bundle.main.bundleURL.deletingLastPathComponent()
    }
    static var appURL: URL { directory.appendingPathComponent("VCSNative.app") }
    // VCSNative reads its config relative to its OWN executable's directory
    // (see main.cpp's native_executable_directory()/initialize_vcs_
    // configuration() -- argv[0]-derived, not the launcher's location), which
    // for an app bundle is Contents/MacOS inside VCSNative.app, not a sibling
    // of it. This used to point at "<dir>/VCSNative.ini" next to the .app --
    // a file the game never reads at all. Every Save/Play from this launcher
    // was silently writing to that orphaned sibling file while the running
    // game kept reading its own bundled copy, untouched -- confirmed live:
    // toggling Fullscreen, ResolutionMode, ShowFPS through the launcher had
    // no effect on the actual game no matter what was picked, while editing
    // the bundled ini directly worked correctly every time.
    static var iniURL: URL {
        packaged ? dataURL.appendingPathComponent("VCSNative.ini")
                 : appURL.appendingPathComponent("Contents/MacOS/VCSNative.ini")
    }
    // CloudWorks/ProperShaders' own settings (see [VolumetricClouds] in the
    // ini) live in a separate file from VCSNative.ini, bundled alongside it
    // in the same Contents/MacOS directory -- a second IniDocument instance
    // below points at this one specifically, since IniDocument itself is
    // file-agnostic (just a section/key editor over whatever URL it's given).
    static var texturesURL: URL {
        packaged ? dataURL.appendingPathComponent("Textures")
                 : appURL.appendingPathComponent("Contents/MacOS/Textures")
    }
    static let packMarker = "VCSNative-TexturePack.txt"
    static let packManifest = ".installed-texture-pack"
    static var manifestURL: URL { texturesURL.appendingPathComponent(packManifest) }
    /// Number of textures installed through the launcher (0 when nothing was installed).
    static func texturePackCount() -> Int {
        guard let text = try? String(contentsOf: manifestURL, encoding: .utf8) else { return 0 }
        return text.split(separator: "\n").count
    }
    static func removeTexturePack() {
        let fm = FileManager.default
        if let text = try? String(contentsOf: manifestURL, encoding: .utf8) {
            for name in text.split(separator: "\n") where name.hasSuffix(".png") && !name.contains("/") {
                try? fm.removeItem(at: texturesURL.appendingPathComponent(String(name)))
            }
        }
        try? fm.removeItem(at: manifestURL)
    }
    private static func isPackTexture(_ name: String) -> Bool {
        let stem = name.dropLast(4)
        return name.hasSuffix(".png") && stem.count == 16 && stem.allSatisfy { $0.isHexDigit && !$0.isUppercase }
    }
    /// Installs only the official texture pack zip: it must contain the pack marker file and
    /// nothing but hash-named PNGs, so an unrelated zip is rejected without touching the game.
    static func installTexturePack(from source: URL) -> Result<Int, Error> {
        let fm = FileManager.default
        let t = fm.temporaryDirectory.appendingPathComponent("vcs_pack_\(UUID().uuidString)")
        func fail(_ m: String) -> Result<Int, Error> {
            .failure(NSError(domain: "VCSLauncher", code: 1, userInfo: [NSLocalizedDescriptionKey: m]))
        }
        do {
            guard source.pathExtension.lowercased() == "zip" else { return fail("Please choose the VCSNative texture pack .zip.") }
            try fm.createDirectory(at: t, withIntermediateDirectories: true)
            defer { try? fm.removeItem(at: t) }
            let p = Process()
            p.executableURL = URL(fileURLWithPath: "/usr/bin/ditto")
            p.arguments = ["-x", "-k", source.path, t.path]
            try p.run(); p.waitUntilExit()
            guard p.terminationStatus == 0 else { return fail("Could not open that zip.") }
            var files: [URL] = []
            var marker = false
            if let walker = fm.enumerator(at: t, includingPropertiesForKeys: [.isDirectoryKey]) {
                for case let f as URL in walker {
                    if f.path.contains("__MACOSX") || f.lastPathComponent == ".DS_Store" || f.lastPathComponent.hasPrefix("._") { continue }
                    if (try? f.resourceValues(forKeys: [.isDirectoryKey]).isDirectory) == true { continue }
                    if f.lastPathComponent == packMarker { marker = true; continue }
                    files.append(f)
                }
            }
            guard marker else { return fail("This is not a VCSNative texture pack.") }
            guard !files.isEmpty, files.allSatisfy({ isPackTexture($0.lastPathComponent) }) else {
                return fail("This is not a valid VCSNative texture pack.")
            }
            try fm.createDirectory(at: texturesURL, withIntermediateDirectories: true)
            removeTexturePack()
            var names: [String] = []
            for f in files {
                let dest = texturesURL.appendingPathComponent(f.lastPathComponent)
                try? fm.removeItem(at: dest)
                try fm.copyItem(at: f, to: dest)
                names.append(f.lastPathComponent)
            }
            try names.joined(separator: "\n").write(to: manifestURL, atomically: true, encoding: .utf8)
            return .success(names.count)
        } catch { return .failure(error) }
    }
    static var properShadersURL: URL {
        packaged ? dataURL.appendingPathComponent("ProperShaders.ini")
                 : appURL.appendingPathComponent("Contents/MacOS/ProperShaders.ini")
    }
}

// MARK: - Small shared row/note styles

/// A settings row inside a `Form`/`Section` using the native macOS 13+
/// LabeledContent look -- no hand-rolled card backgrounds or padding, just
/// the system's own grouped-list styling, which is what makes System
/// Settings.app read as "sleek" instead of a stack of boxes.
struct Note: View {
    let text: String
    var tint: Color = .secondary
    var body: some View {
        Text(text)
            .font(.caption)
            .foregroundStyle(tint)
            .fixedSize(horizontal: false, vertical: true)
    }
}

// MARK: - Sidebar categories

enum Category: String, CaseIterable, Identifiable {
    case window = "Window"
    case rendering = "Rendering"
    case quality = "Quality"
    case controls = "Controls"
    case addons = "Addons"
    case performance = "Performance"

    var id: String { rawValue }
    var icon: String {
        switch self {
        case .window: return "macwindow"
        case .rendering: return "square.resize"
        case .quality: return "sparkles"
        case .controls: return "keyboard"
        case .addons: return "wand.and.stars"
        case .performance: return "gauge.with.dots.needle.67percent"
        }
    }
}

// MARK: - Main view

struct ContentView: View {
    @ObservedObject var doc: IniDocument
    @ObservedObject var properShadersDoc: IniDocument
    @State private var selection: Category? = .window
    @State private var saveMessage: String?
    @State private var launching = false
    @State private var packCount = GameLocation.texturePackCount()
    @State private var gameFolder: URL? = GameLocation.foundGameFolder
    private var packStatus: String {
        packCount == 0 ? "" : "Installed (\(packCount) textures)"
    }


    // Launcher-only preference (not an .ini key -- this toggles Apple's own
    // built-in Metal HUD overlay via the MTL_HUD_ENABLED environment
    // variable at launch time, not anything this backend implements itself.
    // Works because MoltenVK is a real Metal client underneath Vulkan.
    @AppStorage("VCSShowMetalHUD") private var showMetalHUD: Bool = false

    // Display
    private var fullscreen: Binding<Bool> { doc.binding("Display", "Fullscreen", default: true) }
    private var resolutionMode: Binding<String> { doc.binding("Display", "ResolutionMode", default: "Desktop") }
    private var width: Binding<Int> { doc.binding("Display", "Width", default: 1920) }
    private var height: Binding<Int> { doc.binding("Display", "Height", default: 1080) }
    private var aspectRatio: Binding<String> { doc.binding("Display", "AspectRatio", default: "Stretch") }
    private var upscaleFilter: Binding<String> { doc.binding("Display", "UpscaleFilter", default: "Bilinear") }
    private var integerScale: Binding<Bool> { doc.binding("Display", "IntegerScale", default: false) }
    private var showFPS: Binding<Bool> { doc.binding("Display", "ShowFPS", default: false) }

    // Rendering (internal resolution + quality)
    private var internalMode: Binding<String> { doc.binding("Rendering", "InternalResolutionMode", default: "Desktop") }
    private var internalScale: Binding<Int> { doc.binding("Rendering", "InternalScale", default: 2) }
    private var internalWidth: Binding<Int> { doc.binding("Rendering", "InternalWidth", default: 1920) }
    private var internalHeight: Binding<Int> { doc.binding("Rendering", "InternalHeight", default: 1080) }
    private var hardwareTransform: Binding<Bool> { doc.binding("Rendering", "HardwareTransform", default: false) }
    private var anisotropic: Binding<Int> { doc.binding("Rendering", "AnisotropicFiltering", default: 1) }
    private var sharpen: Binding<Double> { doc.binding("Rendering", "Sharpen", default: 0.0) }
    private var depthPrecision: Binding<Int> { doc.binding("Rendering", "DepthPrecision", default: 24) }
    private var fxaaEnabled: Binding<Bool> { doc.binding("Rendering", "SMAA", default: false) }

    // Timing / widescreen / addons
    private var keyboardPrompts: Binding<Bool> { doc.binding("Controls", "KeyboardPrompts", default: true) }
    private var cameraStick: Binding<Bool> { doc.binding("Controls", "CameraStick", default: true) }
    private var invertCameraY: Binding<Bool> { doc.binding("Controls", "InvertCameraY", default: false) }
    private var mouseSensitivity: Binding<Int> { doc.binding("Controls", "MouseSensitivity", default: 50) }
    private var camUpLimit: Binding<Int> { doc.binding("Controls", "PedCameraUpLimitDegrees", default: 40) }
    private var widescreen: Binding<Bool> { doc.binding("Widescreen", "Enabled", default: true) }
    private var project2dfx: Binding<Bool> { doc.binding("Project2DFX", "Enabled", default: false) }

    // Bloom (Vulkan backend only -- see the [SimulateHDR] comment in the ini)
    private var bloomEnabled: Binding<Bool> { doc.binding("SimulateHDR", "Enabled", default: true) }
    private var bloomThreshold: Binding<Double> { doc.binding("SimulateHDR", "Threshold", default: 0.80) }
    private var bloomIntensity: Binding<Double> { doc.binding("SimulateHDR", "Intensity", default: 0.60) }

    // Volumetric clouds (CloudWorks/ProperShaders port, Vulkan backend only)
    // -- lives in ProperShaders.ini, not VCSNative.ini, hence the separate
    // properShadersDoc. Off by default: functional and visually verified
    // live, but the underlying temporal-reprojection system (the DX12-
    // equivalent design, which would let clouds march at a lower per-frame
    // cost) has an unresolved defect and stays disabled in code, so this
    // runs a full-resolution march every frame -- correct and stable, but a
    // real, measured ~2ms/frame GPU cost with no user-facing quality knob
    // for that tradeoff yet. Experimental until that's revisited.
    private var smaaEnabled: Binding<Bool> {
        properShadersDoc.binding("SMAA", "Enabled", default: true)
    }
    private var ditherEnabled: Binding<Bool> { properShadersDoc.binding("Dither", "Enabled", default: true) }
    private var casEnabled: Binding<Bool> { properShadersDoc.binding("CAS", "Enabled", default: true) }
    private var casSharpness: Binding<Double> { properShadersDoc.binding("CAS", "Sharpness", default: 0.5) }
    private var skyPaletteEnabled: Binding<Bool> { properShadersDoc.binding("SkyPalette", "Enabled", default: true) }
    private var todGradeEnabled: Binding<Bool> { properShadersDoc.binding("TimeOfDayGrade", "Enabled", default: true) }
    private var vhsEnabled: Binding<Bool> { properShadersDoc.binding("VHS", "Enabled", default: false) }
    private var cloudsEnabled: Binding<Bool> {
        properShadersDoc.binding("VolumetricClouds", "Enabled", default: true)
    }

    // Color grading ("Vice Neon" preset)
    private var gradingEnabled: Binding<Bool> { doc.binding("ColorGrading", "Enabled", default: true) }
    private var gradingSaturation: Binding<Double> { doc.binding("ColorGrading", "Saturation", default: 1.18) }
    private var gradingContrast: Binding<Double> { doc.binding("ColorGrading", "Contrast", default: 1.05) }
    private var gradingBrightness: Binding<Double> { doc.binding("ColorGrading", "Brightness", default: 0.0) }
    private var gradingTintR: Binding<Double> { doc.binding("ColorGrading", "TintR", default: 1.05) }
    private var gradingTintG: Binding<Double> { doc.binding("ColorGrading", "TintG", default: 0.98) }
    private var gradingTintB: Binding<Double> { doc.binding("ColorGrading", "TintB", default: 1.02) }

    // Draw distance
    private var drawDistanceEnabled: Binding<Bool> { doc.binding("DrawDistance", "Enabled", default: true) }
    private var drawDistanceWorld: Binding<Double> { doc.binding("DrawDistance", "World", default: 1.00) }
    private var drawDistanceLOD: Binding<Double> { doc.binding("DrawDistance", "LOD", default: 1.00) }

    var body: some View {
        Group {
            if let error = doc.loadError {
                errorView(error)
            } else {
                NavigationSplitView {
                    sidebar
                } detail: {
                    VStack(spacing: 0) {
                        ScrollView {
                            detail
                                .padding(.horizontal, 20)
                                .padding(.top, 20)
                                .padding(.bottom, 28)
                        }
                        .frame(maxWidth: .infinity, maxHeight: .infinity)
                        Divider()
                        bottomBar
                    }
                    .navigationSplitViewColumnWidth(min: 420, ideal: 460)
                }
                .navigationSplitViewStyle(.balanced)
            }
        }
        .frame(minWidth: 720, idealWidth: 760, minHeight: 520, idealHeight: 600)
    }

    // MARK: Sidebar

    private var sidebar: some View {
        List(selection: $selection) {
            Section {
                ForEach(Category.allCases) { category in
                    Label(category.rawValue, systemImage: category.icon).tag(category)
                }
            } header: {
                VStack(alignment: .leading, spacing: 2) {
                    Text("VCS Launcher")
                        .font(.system(.title3, design: .rounded, weight: .semibold))
                        .foregroundStyle(.primary)
                        .textCase(nil)
                    Text("Vice City Stories")
                        .font(.caption)
                        .foregroundStyle(.secondary)
                        .textCase(nil)
                }
                .padding(.bottom, 8)
            }
        }
        .listStyle(.sidebar)
        .navigationSplitViewColumnWidth(min: 190, ideal: 200, max: 240)
    }

    // MARK: Detail (per category)

    @ViewBuilder private var detail: some View {
        switch selection ?? .window {
        case .window: windowSection
        case .rendering: renderingSection
        case .quality: qualitySection
        case .controls: controlsSection
        case .addons: addonsSection
        case .performance: performanceSection
        }
    }

    private func header(_ title: String, _ subtitle: String? = nil) -> some View {
        VStack(alignment: .leading, spacing: 2) {
            Text(title).font(.system(.title2, design: .rounded, weight: .bold))
            if let subtitle {
                Text(subtitle).font(.callout).foregroundStyle(.secondary)
            }
        }
        .padding(.bottom, 4)
    }

    private var windowSection: some View {
        VStack(alignment: .leading, spacing: 18) {
            header("Window", "How VCSNative shows up on your display.")

            Form {
                Section("Game data") {
                    LabeledContent("Game folder") {
                        HStack(spacing: 10) {
                            Text(gameFolder?.path ?? "Not set")
                                .foregroundStyle(gameFolder == nil ? Color.orange : Color.secondary)
                                .lineLimit(1).truncationMode(.middle)
                            Button(gameFolder == nil ? "Choose…" : "Change…") { _ = chooseGameFolder() }
                        }
                    }
                    Note(text: "Choose the folder that holds your extracted game (the one with PSP_GAME inside it). Nothing is copied: VCSNative only remembers where it is, so it can live anywhere, including an external drive.")
                }

                Section {
                    Toggle("Fullscreen (borderless)", isOn: fullscreen)
                        .help("On: fills the entire display in a borderless window (alt-tab friendly, no real fullscreen switch). Off: runs in a regular titled window at the Resolution size below.")
                    Note(text: fullscreen.wrappedValue
                         ? "Fills the display in a borderless window."
                         : "Runs in a regular window at the size below.")
                }

                Section("Output") {
                    Picker("Resolution", selection: resolutionMode) {
                        Text("Match desktop").tag("Desktop")
                        Text("PSP native (480×272)").tag("PSP")
                        Text("Custom").tag("Custom")
                    }
                    .help("The size of the actual window/output surface. \"Match desktop\" fills your screen's native resolution; \"PSP native\" reproduces the original tiny 480×272 output; \"Custom\" lets you set an exact Width/Height below. This is separate from Internal Rendering resolution, which controls what the game actually renders at before it's scaled to this size.")
                    if resolutionMode.wrappedValue == "Custom" {
                        LabeledContent("Width") {
                            TextField("", value: width, formatter: NumberFormatter())
                                .frame(width: 90).multilineTextAlignment(.trailing)
                        }
                        .help("Output window width in pixels, used only when Resolution is set to Custom.")
                        LabeledContent("Height") {
                            TextField("", value: height, formatter: NumberFormatter())
                                .frame(width: 90).multilineTextAlignment(.trailing)
                        }
                        .help("Output window height in pixels, used only when Resolution is set to Custom.")
                    }
                    Picker("Aspect ratio", selection: aspectRatio) {
                        Text("Stretch").tag("Stretch")
                        Text("Preserve (letterbox)").tag("Preserve")
                    }
                    .help("Stretch: fills the whole window, distorting the image if the window's aspect ratio doesn't match the game's. Preserve: keeps the game's original proportions and adds black bars (letterbox/pillarbox) instead of distorting it.")
                    Picker("Upscale filter", selection: upscaleFilter) {
                        Text("Bilinear").tag("Bilinear")
                        Text("Nearest (pixelated)").tag("Nearest")
                    }
                    .help("How the rendered image is scaled up to fill the output size. Bilinear smooths the scaling (softer image). Nearest keeps hard pixel edges (a sharp, blocky look), which is most noticeable when the internal rendering resolution is well below the output size.")
                    Toggle("Integer scale", isOn: integerScale)
                        .help("Restricts upscaling to whole-number multiples (1×, 2×, 3×...) instead of any arbitrary size. Keeps pixels perfectly square and crisp, which matters mainly at or near PSP native resolution, at the cost of not always filling the window exactly.")
                }

                Section {
                    Toggle("Show FPS counter", isOn: showFPS)
                        .help("Shows the game's own on-screen frames-per-second counter (separate from the Metal HUD overlay macOS itself can show).")
                    Toggle("Show Metal HUD (FPS + GPU frame time)", isOn: $showMetalHUD)
                        .help("Apple's built-in Metal performance overlay (top-left corner): live FPS and GPU frame time, from the system rather than this game's counter. Works because MoltenVK, this build's Vulkan-on-Metal layer, is a real Metal client. A launcher preference, not an .ini setting.")
                }
            }
            .formStyle(.grouped)
            .scrollDisabled(true)
        }
    }

    private var renderingSection: some View {
        VStack(alignment: .leading, spacing: 18) {
            header("Internal Rendering", "What the game actually renders at, independent of window size.")

            Form {
                Section("Resolution") {
                    Picker("Internal resolution", selection: internalMode) {
                        Text("Match desktop").tag("Desktop")
                        Text("PSP native (480×272)").tag("PSP")
                        Text("Scale × PSP native").tag("Scale")
                        Text("Custom").tag("Custom")
                    }
                    .help("What the GE (graphics engine) actually renders the game at, before the Window section's Output resolution scales it to fill your screen. Higher internal resolution means sharper geometry and text, at a real GPU cost. \"Scale\" multiplies the PSP's native 480×272 by a whole number below.")
                    if internalMode.wrappedValue == "Scale" {
                        Stepper("Scale: \(internalScale.wrappedValue)×", value: internalScale, in: 1...8)
                            .help("Multiplies PSP-native 480×272 by this factor (1-8×) to get the internal render resolution; 4× gives 1920×1088.")
                    }
                    if internalMode.wrappedValue == "Custom" {
                        LabeledContent("Width") {
                            TextField("", value: internalWidth, formatter: NumberFormatter())
                                .frame(width: 90).multilineTextAlignment(.trailing)
                        }
                        .help("Internal render width in pixels, used only when Internal resolution is set to Custom.")
                        LabeledContent("Height") {
                            TextField("", value: internalHeight, formatter: NumberFormatter())
                                .frame(width: 90).multilineTextAlignment(.trailing)
                        }
                        .help("Internal render height in pixels, used only when Internal resolution is set to Custom.")
                    }
                }

                Section("Filtering") {
                    Picker("Anisotropic filtering", selection: anisotropic) {
                        Text("Off").tag(1)
                        Text("2×").tag(2)
                        Text("4×").tag(4)
                        Text("8×").tag(8)
                        Text("16×").tag(16)
                    }
                    .help("Sharpens textures viewed at a steep angle (roads, sidewalks stretching into the distance) instead of letting them blur. Higher values look better but cost a little GPU time; the PSP itself had no such thing, so this is a pure upgrade over the original.")
                    Picker("Depth precision", selection: depthPrecision) {
                        Text("16-bit").tag(16)
                        Text("24-bit").tag(24)
                        Text("32-bit").tag(32)
                    }
                    .help("Precision of the depth (Z) buffer used to decide which surface is in front of another. Higher precision reduces \"z-fighting\" flicker between overlapping surfaces, especially over VCS's long draw distances. 24-bit isn't natively available on Apple's Metal, so this automatically falls back to the closest format the GPU actually supports (usually 32-bit).")
                    Note(text: "Anisotropic filtering and depth precision both affect rendering on this Vulkan/MoltenVK build. Depth precision falls back automatically to the closest format Metal actually supports if the exact bit depth isn't available.")
                    LabeledContent("Texture sharpening") {
                        Slider(value: sharpen, in: 0.0...1.0, step: 0.05)
                            .frame(width: 160)
                        Text(String(format: "%.2f", sharpen.wrappedValue))
                            .foregroundStyle(.secondary).frame(width: 36, alignment: .trailing)
                    }
                    .help("Unsharp-mask sharpening of the final frame. 0 = off. PSP textures are low resolution and get magnified by the internal-resolution upscale, so this makes existing detail read as crisper; it does not invent detail. 0.3-0.6 is a reasonable range before halos become visible. Independent of Color Grading.")
                }

                Section {
                    Toggle("GPU hardware transform", isOn: hardwareTransform)
                        .help("Moves vertex transform and lighting from the CPU to the GPU. Faster in principle, but this implementation has a known rendering bug (distorted, textureless geometry). Leave off unless you are testing it.")
                    Note(text: "Experimental: known rendering corruption on this Vulkan build. Leave off unless you are testing it.", tint: .orange)
                }
            }
            .formStyle(.grouped)
            .scrollDisabled(true)
        }
    }

    private var qualitySection: some View {
        VStack(alignment: .leading, spacing: 18) {
            header("Quality")

            Form {
                Section {
                    Toggle("Widescreen (16:9)", isOn: widescreen)
                        .help("Widens the PSP's original 4:3-ish projection to 16:9 (matching a modern screen) instead of showing the original narrower field of view stretched or pillarboxed.")
                }

                Section("Bloom") {
                    Toggle("Bloom", isOn: bloomEnabled)
                        .help("Adds a soft glow around bright highlights (streetlights, headlights, neon signs, sun glare). Single-pass implementation, only on the Vulkan GE backend (this Mac build, or a Windows build configured with PSPRECOMP_VCS_GE_BACKEND=VULKAN). A DirectX 12 build ignores this toggle.")
                    if bloomEnabled.wrappedValue {
                        LabeledContent("Threshold") {
                            Slider(value: bloomThreshold, in: 0.0...1.0, step: 0.05)
                                .frame(width: 160)
                            Text(String(format: "%.2f", bloomThreshold.wrappedValue))
                                .foregroundStyle(.secondary).frame(width: 36, alignment: .trailing)
                        }
                        .help("Luminance (0-1) above which a pixel starts glowing. Lower = more of the scene blooms; higher = only the brightest highlights do.")
                        LabeledContent("Intensity") {
                            Slider(value: bloomIntensity, in: 0.0...2.0, step: 0.05)
                                .frame(width: 160)
                            Text(String(format: "%.2f", bloomIntensity.wrappedValue))
                                .foregroundStyle(.secondary).frame(width: 36, alignment: .trailing)
                        }
                        .help("How strongly the glow is added back over the scene. Light is added, so high values can blow highlights out to solid white.")
                    }
                }

                Section("Texture pack") {
                    if packCount > 0 {
                        LabeledContent("Status") {
                            Text(packStatus).foregroundStyle(.secondary)
                        }
                    }
                    HStack {
                        Button("Install…") { installTexturePack() }
                        Button("Uninstall") { uninstallTexturePack() }.disabled(packCount == 0)
                    }
                    Note(text: "Optional higher-quality replacement textures. Choose the official texture pack .zip to install it, then restart the game. Uninstall removes it.")
                }

                Section("Volumetric clouds") {
                    Toggle("Volumetric clouds", isOn: cloudsEnabled)
                        .help("A direct port of ProperShaders/CloudWorks' raymarched clouds. Vulkan GE backend only (this Mac build, or a Windows build configured with PSPRECOMP_VCS_GE_BACKEND=VULKAN); a DirectX 12 build ignores this toggle. On by default. Costs about 2 ms of GPU time per frame and holds 60 fps on an Apple M1.")
                    Note(text: "On by default. Costs about 2ms of GPU time per frame; turn it off if you need more frame rate.")
                }

                Section("Post effects (ProperShaders)") {
                    Toggle("Anti-banding dither", isOn: ditherEnabled)
                        .help("Adds a one-step noise pattern to break up color banding in gradients and dark areas. Off by default.")
                    Toggle("AMD CAS sharpening", isOn: casEnabled)
                        .help("FidelityFX Contrast Adaptive Sharpening. Sharpens detail without haloing hard edges. Off by default.")
                    if casEnabled.wrappedValue {
                        LabeledContent("CAS sharpness") {
                            Slider(value: casSharpness, in: 0.0...1.0, step: 0.05)
                                .frame(width: 160)
                            Text(String(format: "%.2f", casSharpness.wrappedValue))
                                .monospacedDigit()
                        }
                    }
                    Toggle("Vice City sky palette", isOn: skyPaletteEnabled)
                        .help("Replaces the game's flat sky and distance-fog color with a Vice City palette that follows the clock: pink-magenta dawn and dusk, teal-cyan days, violet nights. Weather is preserved (grey skies stay grey). Strength is in ProperShaders.ini [SkyPalette]. Off by default.")
                    Toggle("Time-of-day grade", isOn: todGradeEnabled)
                        .help("Warms and saturates the picture around sunrise and sunset and cools it at night, following the in-game clock. A color grade only; the game's own lighting is unchanged. Strength is in ProperShaders.ini [TimeOfDayGrade]. Off by default.")
                    Toggle("VHS filter", isOn: vhsEnabled)
                        .help("Optional stylistic VHS look: tape wiggle and horizontal color smear across the whole frame, HUD included. Off by default.")
                }

                Section("Color grading") {
                    Toggle("\"Vice Neon\" look", isOn: gradingEnabled)
                        .help("An approximation of the classic Miami neon look (boosted saturation, a warm sunset-leaning tint), tuned against community ENB and ReShade presets. Optional and off by default. It is one static grade, not the game's day/night color-cycle system, so it cannot push warm daytime and cool night tones separately.")
                    if gradingEnabled.wrappedValue {
                        LabeledContent("Saturation") {
                            Slider(value: gradingSaturation, in: 0.5...2.0, step: 0.05)
                                .frame(width: 160)
                            Text(String(format: "%.2f", gradingSaturation.wrappedValue))
                                .foregroundStyle(.secondary).frame(width: 36, alignment: .trailing)
                        }
                        .help("Color intensity. 1.0 = unchanged. The 1.15-1.30 range is the sweet spot before it starts looking oversaturated/cartoonish.")
                        LabeledContent("Contrast") {
                            Slider(value: gradingContrast, in: 0.5...1.5, step: 0.02)
                                .frame(width: 160)
                            Text(String(format: "%.2f", gradingContrast.wrappedValue))
                                .foregroundStyle(.secondary).frame(width: 36, alignment: .trailing)
                        }
                        .help("Contrast around mid-gray. 1.0 = unchanged. Higher values start crushing shadow detail.")
                        LabeledContent("Brightness") {
                            Slider(value: gradingBrightness, in: -0.3...0.3, step: 0.02)
                                .frame(width: 160)
                            Text(String(format: "%.2f", gradingBrightness.wrappedValue))
                                .foregroundStyle(.secondary).frame(width: 36, alignment: .trailing)
                        }
                        .help("Flat brightness offset. 0.0 = unchanged. Vice City's look relies on saturation and hue rather than raised black levels, so keep this near zero.")
                        LabeledContent("Warm tint (R/G/B)") {
                            Slider(value: gradingTintR, in: 0.8...1.3, step: 0.01)
                                .frame(width: 90)
                            Slider(value: gradingTintG, in: 0.8...1.3, step: 0.01)
                                .frame(width: 90)
                            Slider(value: gradingTintB, in: 0.8...1.3, step: 0.01)
                                .frame(width: 90)
                        }
                        .help("Multiplies red/green/blue independently. 1.0/1.0/1.0 = unchanged. The default (slightly up on red, slightly down on green, mildly up on blue) approximates sunset-neon warmth without a full day/night system.")
                    }
                }

                Section("Draw distance") {
                    Toggle("Extended draw distance", isOn: drawDistanceEnabled)
                        .help("Scales up how far away world objects, vehicles and pedestrians render before despawning, beyond the PSP's short pop-in range. Patches the game's own LOD and culling code.")
                    if drawDistanceEnabled.wrappedValue {
                        LabeledContent("World objects") {
                            Slider(value: drawDistanceWorld, in: 1.0...3.0, step: 0.25)
                                .frame(width: 160)
                            Text(String(format: "%.2f×", drawDistanceWorld.wrappedValue))
                                .foregroundStyle(.secondary).frame(width: 44, alignment: .trailing)
                        }
                        .help("Multiplies world/scenery draw distance and the game's far clip plane. 1.0 = original PSP distance, up to 3.0×.")
                        LabeledContent("Model detail switch") {
                            Slider(value: drawDistanceLOD, in: 1.0...3.0, step: 0.5)
                                .frame(width: 160)
                            Text(String(format: "%.2f×", drawDistanceLOD.wrappedValue))
                                .foregroundStyle(.secondary).frame(width: 44, alignment: .trailing)
                        }
                        .help("Distance at which a vehicle or pedestrian switches from its low-poly to its high-poly model. Visual only, with no population-density downside, so it can go higher safely. Fixes the low-poly blob snapping to a full model a few metres away. Up to 3.0×.")
                    }
                }

                Section("Anti-aliasing") {
                    Toggle("SMAA", isOn: smaaEnabled)
                        .help("Three-pass SMAA 1x (edge detection, blend weights, neighborhood blending) with the reference lookup textures. Sharper than FXAA, especially on the HUD. Takes priority over FXAA when both are on. On by default; lives in ProperShaders.ini.")
                    Toggle("FXAA", isOn: fxaaEnabled)
                        .help("Fast approximate anti-aliasing: smooths jagged polygon edges with a single post-process pass. This is not the SMAA algorithm (which needs precomputed lookup textures and three passes); it is kept under the historical \"SMAA\" .ini key for compatibility.")
                }

                Section("Not available on this build") {
                    LabeledContent("MSAA") { Text("Off").foregroundStyle(.tertiary) }
                        .help("Multisample anti-aliasing. Not supported by this build's Vulkan backend (a DirectX 12 feature), so editing the .ini value has no effect; the FXAA option above is the anti-aliasing choice here.")
                }
            }
            .formStyle(.grouped)
            .scrollDisabled(true)
        }
    }

    private func keyRow(_ action: String, _ keys: String) -> some View {
        LabeledContent(action) { Text(keys).foregroundStyle(.secondary).monospacedDigit() }
    }

    private var controlsSection: some View {
        VStack(alignment: .leading, spacing: 18) {
            header("Controls")

            Form {
                Section("On foot") {
                    keyRow("Move", "W A S D")
                    keyRow("Walk slowly", "Left Alt + move")
                    keyRow("Look / aim camera", "Mouse")
                    keyRow("Sprint", "Space")
                    keyRow("Jump", "Left Shift")
                    keyRow("Enter / exit vehicle", "F  or  Return")
                    keyRow("Fire / punch", "Left mouse")
                    keyRow("Target / aim", "Right mouse")
                    keyRow("Look behind", "Middle mouse")
                    keyRow("Previous / next weapon", "Q / E  or  mouse wheel")
                }

                Section("In a vehicle") {
                    keyRow("Steer", "A / D")
                    keyRow("Accelerate", "W  or  Up arrow")
                    keyRow("Brake / reverse", "S  or  Down arrow")
                    keyRow("Handbrake", "Space")
                    keyRow("Brake (alternate)", "Left Shift")
                    keyRow("Horn", "H")
                    keyRow("Fire vehicle weapon", "Left mouse")
                    keyRow("Change radio station", "Q / E  or  mouse wheel")
                    keyRow("Look around", "Mouse")
                }

                Section("Menus") {
                    keyRow("Navigate", "Arrow keys")
                    keyRow("Confirm", "Space")
                    keyRow("Back / cancel", "F")
                    keyRow("Pause", "Esc")
                    keyRow("Map / select", "Tab")
                }

                Section("Gamepad (Xbox layout)") {
                    keyRow("Move / look", "Left stick / Right stick")
                    keyRow("Sprint, handbrake, confirm", "A")
                    keyRow("Jump, brake / reverse", "X")
                    keyRow("Enter / exit vehicle", "Y")
                    keyRow("Fire / punch", "B")
                    keyRow("Horn / look behind", "Left bumper")
                    keyRow("Target / aim", "Right bumper")
                    keyRow("Weapon / radio", "D-pad left and right")
                    keyRow("Pause / map", "Start / Back")
                    Note(text: "In-game prompts switch automatically between these keyboard and mouse controls and the controller layout, depending on which you used last.")
                }

                Section("Camera") {
                    Toggle("Camera on right stick", isOn: cameraStick)
                        .help("Aim and look with the controller's right stick.")
                    Toggle("Invert camera Y", isOn: invertCameraY)
                        .help("Flips vertical camera movement.")
                    LabeledContent("Mouse sensitivity") {
                        Slider(value: Binding(get: { Double(mouseSensitivity.wrappedValue) },
                                              set: { mouseSensitivity.wrappedValue = Int($0.rounded()) }),
                               in: 1...100, step: 1)
                            .frame(width: 160)
                        Text("\(mouseSensitivity.wrappedValue)")
                            .foregroundStyle(.secondary).frame(width: 36, alignment: .trailing)
                    }
                    .help("Mouse look speed. Higher turns the camera further for the same movement.")
                    LabeledContent("Look-up limit") {
                        Slider(value: Binding(get: { Double(camUpLimit.wrappedValue) },
                                              set: { camUpLimit.wrappedValue = Int($0.rounded()) }),
                               in: 10...45, step: 1)
                            .frame(width: 160)
                        Text("\(camUpLimit.wrappedValue)°")
                            .foregroundStyle(.secondary).frame(width: 36, alignment: .trailing)
                    }
                    .help("How far the on-foot camera may tilt up, in degrees. The game itself stops at 45.")
                }

                Section("Prompts") {
                    Toggle("Show control names in prompts", isOn: keyboardPrompts)
                        .help("Rewrites the game's button prompts so they name your actual controls. They follow the device you used last: keyboard and mouse names while you play with keyboard and mouse, and controller (Xbox) names as soon as you touch the controller, switching back when you use the keyboard or mouse again. Turn off to see the original PSP button names.")
                    Note(text: "Gamepads also work. Mouse look speed and the camera options are in the Camera section above.")
                }
            }
            .formStyle(.grouped)
            .scrollDisabled(true)
        }
    }

    private var addonsSection: some View {
        VStack(alignment: .leading, spacing: 18) {
            header("Addons")

            Form {
                Section {
                    Toggle("Project2DFX", isOn: project2dfx)
                        .help("Night-time upgrade: glowing light coronas on streetlights, windows and signs, blinking and traffic-light glows, a procedural star field, and a raised helicopter ceiling. Cosmetic only, and it works on both platforms.")
                    Note(text: "Light coronas and LOD lights. Works on both platforms. Off by default.")
                }

            }
            .formStyle(.grouped)
            .scrollDisabled(true)
        }
    }

    private var performanceSection: some View {
        VStack(alignment: .leading, spacing: 18) {
            header("Performance")

            Form {
                Section {
                    LabeledContent("Target frame rate") { Text("60 fps").foregroundStyle(.secondary) }
                        .help("Locked to 60. The build is tuned against a 60 fps baseline (batch coalescing, GPU timestamp profiling, memoryless depth), so an uncapped or 120 fps mode is not offered.")
                    Note(text: "Fixed at 60 fps, the baseline this port is tuned against.")
                }
            }
            .formStyle(.grouped)
            .scrollDisabled(true)
        }
    }

    // MARK: Bottom bar

    private var bottomBar: some View {
        HStack(spacing: 12) {
            if let saveMessage {
                Text(saveMessage)
                    .font(.caption)
                    .foregroundStyle(.secondary)
                    .transition(.opacity)
            } else if gameFolder == nil {
                Text("Choose your game folder on the Window page to enable Play.")
                    .font(.caption)
                    .foregroundStyle(.orange)
            }
            Spacer()
            Button("Save") { save() }
                .keyboardShortcut("s", modifiers: .command)
                .buttonStyle(.bordered)
            Button {
                save()
                launch()
            } label: {
                Label(launching ? "Launching…" : "Play", systemImage: "play.fill")
                    .frame(minWidth: 76)
            }
            .keyboardShortcut(.defaultAction)
            .buttonStyle(.borderedProminent)
            .disabled(launching || gameFolder == nil)
            .help(gameFolder == nil ? "Choose your game folder first (Window page, Game data)." : "Start the game")
        }
        .onReceive(NotificationCenter.default.publisher(for: NSApplication.didBecomeActiveNotification)) { _ in
            gameFolder = GameLocation.foundGameFolder
        }
        .padding(.horizontal, 20)
        .padding(.vertical, 14)
        .background(.regularMaterial)
    }

    private func errorView(_ message: String) -> some View {
        VStack(spacing: 14) {
            Image(systemName: "exclamationmark.triangle.fill")
                .font(.system(size: 40))
                .foregroundStyle(.orange)
            Text(message)
                .multilineTextAlignment(.center)
                .foregroundStyle(.secondary)
            Button("Retry") { doc.reload() }
                .buttonStyle(.borderedProminent)
        }
        .padding(48)
        .frame(maxWidth: .infinity, maxHeight: .infinity)
    }

    // MARK: Actions

    private func save() {
        do {
            try doc.save()
            try properShadersDoc.save()
            withAnimation { saveMessage = "Saved" }
        } catch {
            withAnimation { saveMessage = "Could not save: \(error.localizedDescription)" }
        }
        DispatchQueue.main.asyncAfter(deadline: .now() + 2.0) {
            withAnimation { saveMessage = nil }
        }
    }

    private func installTexturePack() {
        let panel = NSOpenPanel()
        panel.title = "Choose the texture pack (.zip)"
        panel.canChooseFiles = true
        panel.canChooseDirectories = false
        panel.allowsMultipleSelection = false
        panel.allowedContentTypes = [.zip]
        guard panel.runModal() == .OK, let url = panel.url else { return }
        saveMessage = "Installing texture pack…"
        DispatchQueue.global(qos: .userInitiated).async {
            let result = GameLocation.installTexturePack(from: url)
            DispatchQueue.main.async {
                packCount = GameLocation.texturePackCount()
                withAnimation {
                    switch result {
                    case .success(let n): saveMessage = "Installed \(n) textures. Restart the game to use them."
                    case .failure(let e): saveMessage = "Install failed: \(e.localizedDescription)"
                    }
                }
                DispatchQueue.main.asyncAfter(deadline: .now() + 4.0) { withAnimation { saveMessage = nil } }
            }
        }
    }

    private func uninstallTexturePack() {
        let alert = NSAlert()
        alert.messageText = "Remove all installed replacement textures?"
        alert.informativeText = "Deletes the PNG files in the game's Textures folder. The game itself is not touched."
        alert.addButton(withTitle: "Remove"); alert.addButton(withTitle: "Cancel")
        guard alert.runModal() == .alertFirstButtonReturn else { return }
        GameLocation.removeTexturePack()
        packCount = GameLocation.texturePackCount()
        withAnimation { saveMessage = "Texture pack removed." }
        DispatchQueue.main.asyncAfter(deadline: .now() + 2.0) { withAnimation { saveMessage = nil } }
    }

    /// Shows a folder picker and remembers the choice. Returns true when a valid game folder is set.
    @discardableResult
    private func chooseGameFolder() -> Bool {
        let panel = NSOpenPanel()
        panel.title = "Choose your game folder"
        panel.message = "Select the folder that holds your extracted Vice City Stories game (it contains PSP_GAME)."
        panel.prompt = "Choose"
        panel.canChooseDirectories = true
        panel.canChooseFiles = false
        panel.allowsMultipleSelection = false
        guard panel.runModal() == .OK, let url = panel.url else { return false }
        switch GameLocation.chooseGameFolder(url) {
        case .success(let root):
            gameFolder = root
            withAnimation { saveMessage = "Game folder set." }
            DispatchQueue.main.asyncAfter(deadline: .now() + 2.0) { withAnimation { saveMessage = nil } }
            return true
        case .failure(let error):
            let alert = NSAlert()
            alert.messageText = "That is not the game folder"
            alert.informativeText = error.localizedDescription
            alert.runModal()
            return false
        }
    }

    private func launch() {
        if GameLocation.foundGameFolder == nil, !chooseGameFolder() {
            withAnimation { saveMessage = "Choose your game folder to play." }
            return
        }
        gameFolder = GameLocation.foundGameFolder
        launching = true
        let configuration = NSWorkspace.OpenConfiguration()
        configuration.createsNewApplicationInstance = true
        // Defensive hygiene: Metal shader validation and MoltenVK's own
        // per-frame activity/performance logging both have a real per-frame
        // CPU cost and are meant for debug builds, not play sessions. Not
        // needed for a Finder double-click (a fresh process inherits no
        // shell environment at all), but launching through here can
        // otherwise inherit whatever the parent shell/IDE happened to have
        // exported (e.g. a Terminal session with MTL_SHADER_VALIDATION=1
        // set globally for other Metal work) -- forcing them off here means
        // a Play from this launcher is never accidentally slower than a
        // real double-click launch would be.
        var environment: [String: String] = [
            "MTL_SHADER_VALIDATION": "0",
            "MTL_DEBUG_LAYER": "0",
            "MVK_CONFIG_PERFORMANCE_TRACKING": "0",
        ]
        if showMetalHUD {
            environment["MTL_HUD_ENABLED"] = "1"
        }
        configuration.environment = environment
        if GameLocation.packaged {
            // The game executable lives inside this same app, so it is found wherever the app was put.
            let process = Process()
            process.executableURL = GameLocation.gameExecutableURL
            process.currentDirectoryURL = GameLocation.dataURL
            process.environment = ProcessInfo.processInfo.environment.merging(environment) { _, new in new }
            do {
                try process.run()
                DispatchQueue.main.asyncAfter(deadline: .now() + 1.0) { NSApp.terminate(nil) }
            } catch {
                launching = false
                saveMessage = "Could not launch VCSNative: \(error.localizedDescription)"
            }
            return
        }
        NSWorkspace.shared.openApplication(at: GameLocation.appURL, configuration: configuration) { _, error in
            DispatchQueue.main.async {
                launching = false
                if let error {
                    saveMessage = "Could not launch VCSNative: \(error.localizedDescription)"
                } else {
                    NSApp.terminate(nil)
                }
            }
        }
    }
}

@main
struct VCSLauncherApp: App {
    init() { GameLocation.seedDataFolder() }
    @StateObject private var doc = IniDocument(fileURL: GameLocation.iniURL)
    @StateObject private var properShadersDoc = IniDocument(fileURL: GameLocation.properShadersURL)
    var body: some Scene {
        WindowGroup {
            ContentView(doc: doc, properShadersDoc: properShadersDoc)
        }
        .windowResizability(.contentSize)
        .windowToolbarStyle(.unifiedCompact)
    }
}
