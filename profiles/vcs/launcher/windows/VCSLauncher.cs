// VCS Launcher for Windows: the counterpart of launcher/VCSLauncher.swift (macOS).
//
// One self-contained exe with no dependencies beyond the .NET Framework that ships with Windows 10 and
// 11 (WPF, built entirely in code). It edits VCSNative.ini and ProperShaders.ini in place, line by line
// (comments and ordering are preserved: the comments are the only documentation some settings have),
// installs and removes the optional texture pack, keeps Windows/Vulkan-only choices in a small prefs
// file (GPU, present mode, swapchain, worker threads) and starts the game with them as environment
// variables. Build it with build_launcher.bat.

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.IO.Compression;
using System.Linq;
using System.Management;
using System.Runtime.InteropServices;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
using System.Windows.Interop;
using System.Windows.Markup;
using System.Windows.Media;

namespace VCSLauncher
{
    // ------------------------------------------------------------------------------------------
    // INI document: edits values in place and keeps every comment, blank line and the file's own
    // line endings.
    // ------------------------------------------------------------------------------------------
    sealed class IniDoc
    {
        public readonly string Path;
        public List<string> Lines = new List<string>();
        public string Error;
        bool crlf;

        public IniDoc(string path) { Path = path; Reload(); }

        public void Reload()
        {
            try
            {
                string text = File.ReadAllText(Path, Encoding.UTF8);
                crlf = text.Contains("\r\n");
                Lines = new List<string>(text.Replace("\r\n", "\n").Split('\n'));
                Error = null;
            }
            catch (Exception e)
            {
                Error = "Could not read " + System.IO.Path.GetFileName(Path) + " at " + Path + ".\n" + e.Message;
                Lines = new List<string>();
            }
        }

        public void Save()
        {
            string text = string.Join(crlf ? "\r\n" : "\n", Lines);
            string temp = Path + ".tmp";
            File.WriteAllText(temp, text, new UTF8Encoding(false));
            if (File.Exists(Path)) File.Replace(temp, Path, null);
            else File.Move(temp, Path);
        }

        static bool IsSection(string trimmed) { return trimmed.StartsWith("[") && trimmed.EndsWith("]"); }

        public string Get(string section, string key)
        {
            bool inSection = false;
            foreach (string line in Lines)
            {
                string t = line.Trim();
                if (IsSection(t)) { inSection = t.Substring(1, t.Length - 2) == section; continue; }
                if (!inSection || t.StartsWith(";")) continue;
                int eq = t.IndexOf('=');
                if (eq < 0) continue;
                if (t.Substring(0, eq).Trim() == key) return t.Substring(eq + 1).Trim();
            }
            return null;
        }

        public void Set(string section, string key, string value)
        {
            bool inSection = false;
            int insertAt = -1;
            for (int i = 0; i < Lines.Count; i++)
            {
                string t = Lines[i].Trim();
                if (IsSection(t))
                {
                    if (inSection) break;
                    inSection = t.Substring(1, t.Length - 2) == section;
                    if (inSection) insertAt = i + 1;
                    continue;
                }
                if (!inSection) continue;
                if (!t.StartsWith(";"))
                {
                    int eq = t.IndexOf('=');
                    if (eq >= 0 && t.Substring(0, eq).Trim() == key) { Lines[i] = key + "=" + value; return; }
                }
                if (t.Length != 0) insertAt = i + 1;
            }
            if (insertAt >= 0) { Lines.Insert(insertAt, key + "=" + value); return; }
            // Section missing entirely: append it (every key the launcher shows ships in the default files).
            if (Lines.Count > 0 && Lines[Lines.Count - 1].Trim().Length != 0) Lines.Add("");
            Lines.Add("[" + section + "]");
            Lines.Add(key + "=" + value);
        }

        public bool Bool(string s, string k, bool def)
        {
            string v = Get(s, k);
            if (v == null) return def;
            v = v.ToLowerInvariant();
            return v == "1" || v == "true" || v == "yes" || v == "on";
        }
        public void SetBool(string s, string k, bool v) { Set(s, k, v ? "true" : "false"); }
        public int Int(string s, string k, int def)
        {
            int r; string v = Get(s, k);
            return v != null && int.TryParse(v, NumberStyles.Integer, CultureInfo.InvariantCulture, out r) ? r : def;
        }
        public void SetInt(string s, string k, int v) { Set(s, k, v.ToString(CultureInfo.InvariantCulture)); }
        public double Dbl(string s, string k, double def)
        {
            double r; string v = Get(s, k);
            return v != null && double.TryParse(v, NumberStyles.Float, CultureInfo.InvariantCulture, out r) ? r : def;
        }
        public void SetDbl(string s, string k, double v) { Set(s, k, v.ToString("0.00", CultureInfo.InvariantCulture)); }
    }

    // ------------------------------------------------------------------------------------------
    // Launcher-only preferences (not ini keys): become environment variables at launch.
    // ------------------------------------------------------------------------------------------
    sealed class Prefs
    {
        readonly string path;
        readonly Dictionary<string, string> values = new Dictionary<string, string>();
        public Prefs(string p)
        {
            path = p;
            try
            {
                foreach (string line in File.ReadAllLines(path))
                {
                    int eq = line.IndexOf('=');
                    if (eq > 0) values[line.Substring(0, eq).Trim()] = line.Substring(eq + 1).Trim();
                }
            }
            catch { }
        }
        public string Get(string k, string def) { string v; return values.TryGetValue(k, out v) ? v : def; }
        public void Set(string k, string v) { values[k] = v; }
        public bool Bool(string k, bool def) { return Get(k, def ? "1" : "0") == "1"; }
        public void Save()
        {
            try { File.WriteAllLines(path, values.Select(kv => kv.Key + "=" + kv.Value).ToArray()); } catch { }
        }
    }

    // ------------------------------------------------------------------------------------------
    // Where things are. The launcher sits beside VCSNative.exe, VCSNative.ini and (normally) PSP_DATA.
    // ------------------------------------------------------------------------------------------
    static class Game
    {
        public static readonly string Dir = System.IO.Path.GetDirectoryName(Process.GetCurrentProcess().MainModule.FileName);
        public static string Exe { get { return System.IO.Path.Combine(Dir, "VCSNative.exe"); } }
        public static string Ini { get { return System.IO.Path.Combine(Dir, "VCSNative.ini"); } }
        public static string Shaders { get { return System.IO.Path.Combine(Dir, "ProperShaders.ini"); } }
        public static string PrefsFile { get { return System.IO.Path.Combine(Dir, "VCSLauncher.prefs"); } }
        public const string PackMarker = "VCSNative-TexturePack.txt";
        public const string PackManifest = ".installed-texture-pack";

        public static string TexturesDir(IniDoc ini)
        {
            string configured = ini == null ? null : ini.Get("Textures", "Directory");
            if (string.IsNullOrEmpty(configured)) configured = "Textures";
            return System.IO.Path.IsPathRooted(configured) ? configured : System.IO.Path.Combine(Dir, configured);
        }

        public static int PackCount(IniDoc ini)
        {
            try { return File.ReadAllLines(System.IO.Path.Combine(TexturesDir(ini), PackManifest)).Count(l => l.Trim().Length != 0); }
            catch { return 0; }
        }

        static bool IsPackTexture(string name) { return Regex.IsMatch(name, "^[0-9a-f]{16}\\.png$"); }

        public static void RemovePack(IniDoc ini)
        {
            string dir = TexturesDir(ini);
            string manifest = System.IO.Path.Combine(dir, PackManifest);
            try
            {
                foreach (string name in File.ReadAllLines(manifest))
                {
                    string n = name.Trim();
                    if (IsPackTexture(n) || n == PackMarker)
                        try { File.Delete(System.IO.Path.Combine(dir, n)); } catch { }
                }
                File.Delete(manifest);
            }
            catch { }
        }

        // Accepts only the official pack: the marker file plus nothing but hash-named PNGs, so an
        // unrelated zip is rejected before anything is written.
        public static int InstallPack(IniDoc ini, string zipPath, Action<int, int> progress)
        {
            using (ZipArchive zip = ZipFile.OpenRead(zipPath))
            {
                if (!zip.Entries.Any(e => e.FullName == PackMarker)) throw new InvalidOperationException("This is not a VCSNative texture pack.");
                var pngs = zip.Entries.Where(e => e.FullName != PackMarker && e.Length >= 0 && !e.FullName.EndsWith("/")).ToList();
                if (pngs.Count == 0 || pngs.Any(e => !IsPackTexture(e.FullName)))
                    throw new InvalidOperationException("This is not a valid VCSNative texture pack.");
                string dir = TexturesDir(ini);
                Directory.CreateDirectory(dir);
                RemovePack(ini);
                var names = new List<string>();
                int done = 0;
                foreach (ZipArchiveEntry entry in pngs)
                {
                    entry.ExtractToFile(System.IO.Path.Combine(dir, entry.FullName), true);
                    names.Add(entry.FullName);
                    if ((++done & 63) == 0 && progress != null) progress(done, pngs.Count);
                }
                ZipArchiveEntry marker = zip.Entries.First(e => e.FullName == PackMarker);
                marker.ExtractToFile(System.IO.Path.Combine(dir, PackMarker), true);
                names.Add(PackMarker);
                File.WriteAllLines(System.IO.Path.Combine(dir, PackManifest), names.ToArray());
                return pngs.Count;
            }
        }

        [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Ansi)]
        struct DevMode
        {
            [MarshalAs(UnmanagedType.ByValTStr, SizeConst = 32)] public string dmDeviceName;
            public short dmSpecVersion, dmDriverVersion, dmSize, dmDriverExtra;
            public int dmFields, dmPositionX, dmPositionY, dmDisplayOrientation, dmDisplayFixedOutput;
            public short dmColor, dmDuplex, dmYResolution, dmTTOption, dmCollate;
            [MarshalAs(UnmanagedType.ByValTStr, SizeConst = 32)] public string dmFormName;
            public short dmLogPixels;
            public int dmBitsPerPel, dmPelsWidth, dmPelsHeight, dmDisplayFlags, dmDisplayFrequency;
            public int dmICMMethod, dmICMIntent, dmMediaType, dmDitherType, dmReserved1, dmReserved2, dmPanningWidth, dmPanningHeight;
        }

        [DllImport("user32.dll", CharSet = CharSet.Ansi)]
        static extern bool EnumDisplaySettings(string deviceName, int modeNum, ref DevMode mode);

        // Current refresh rate of the primary display, in Hz, or 0 when it cannot be read. Asked of
        // Windows directly (as the game does): the WMI figure for a graphics controller can belong to a
        // monitor that is no longer connected.
        public static int DisplayRefreshHz()
        {
            try
            {
                var mode = new DevMode();
                mode.dmSize = (short)Marshal.SizeOf(typeof(DevMode));
                if (EnumDisplaySettings(null, -1, ref mode) && mode.dmDisplayFrequency > 1) return mode.dmDisplayFrequency;
            }
            catch { }
            return 0;
        }

        // GPU names for the picker. Purely informational: the game matches a name part or an index.
        public static List<string> GpuNames()
        {
            var names = new List<string>();
            try
            {
                using (var searcher = new ManagementObjectSearcher("SELECT Name FROM Win32_VideoController"))
                    foreach (ManagementBaseObject o in searcher.Get())
                    {
                        string n = (o["Name"] as string ?? "").Trim();
                        if (n.Length != 0 && !names.Contains(n) && !n.StartsWith("Microsoft Basic")) names.Add(n);
                    }
            }
            catch { }
            return names;
        }
    }

    // ------------------------------------------------------------------------------------------
    // Look: dark, Vice City neon accents.
    // ------------------------------------------------------------------------------------------
    static class Theme
    {
        public static Brush B(string hex) { var b = (SolidColorBrush)new BrushConverter().ConvertFromString(hex); b.Freeze(); return b; }
        public static readonly Brush Bg = B("#0E1014");
        public static readonly Brush Sidebar = B("#13161C");
        public static readonly Brush Card = B("#191D25");
        public static readonly Brush Field = B("#232832");
        public static readonly Brush Line = B("#262B35");
        public static readonly Brush Text = B("#E8EBF2");
        public static readonly Brush Muted = B("#8B93A5");
        public static readonly Brush Accent = B("#FF4FA3");
        public static readonly Brush Accent2 = B("#2BD4E0");
        public static readonly Brush Warn = B("#F0A24B");

        const string NS = "xmlns=\"http://schemas.microsoft.com/winfx/2006/xaml/presentation\" xmlns:x=\"http://schemas.microsoft.com/winfx/2006/xaml\"";

        public static ControlTemplate SwitchTemplate = (ControlTemplate)XamlReader.Parse(
            "<ControlTemplate " + NS + " TargetType=\"ToggleButton\"><Grid Width=\"44\" Height=\"24\" Background=\"Transparent\" Cursor=\"Hand\">" +
            "<Border x:Name=\"Track\" CornerRadius=\"12\" Background=\"#2B303A\" BorderBrush=\"#3A404C\" BorderThickness=\"1\"/>" +
            "<Ellipse x:Name=\"Knob\" Width=\"18\" Height=\"18\" HorizontalAlignment=\"Left\" Margin=\"3,0,0,0\" Fill=\"#C4CAD6\"/></Grid>" +
            "<ControlTemplate.Triggers><Trigger Property=\"IsChecked\" Value=\"True\">" +
            "<Setter TargetName=\"Track\" Property=\"Background\" Value=\"#FF4FA3\"/><Setter TargetName=\"Track\" Property=\"BorderBrush\" Value=\"#FF4FA3\"/>" +
            "<Setter TargetName=\"Knob\" Property=\"HorizontalAlignment\" Value=\"Right\"/><Setter TargetName=\"Knob\" Property=\"Margin\" Value=\"0,0,3,0\"/>" +
            "<Setter TargetName=\"Knob\" Property=\"Fill\" Value=\"White\"/></Trigger>" +
            "<Trigger Property=\"IsMouseOver\" Value=\"True\"><Setter TargetName=\"Track\" Property=\"BorderBrush\" Value=\"#8A93A6\"/></Trigger>" +
            "</ControlTemplate.Triggers></ControlTemplate>");

        public static ControlTemplate SliderTemplate = (ControlTemplate)XamlReader.Parse(
            "<ControlTemplate " + NS + " TargetType=\"Slider\"><Grid Height=\"24\" Background=\"Transparent\" Cursor=\"Hand\">" +
            "<Border Height=\"4\" CornerRadius=\"2\" Background=\"#2B303A\" VerticalAlignment=\"Center\"/>" +
            "<Track x:Name=\"PART_Track\">" +
            "<Track.DecreaseRepeatButton><RepeatButton Command=\"Slider.DecreaseLarge\"><RepeatButton.Template><ControlTemplate TargetType=\"RepeatButton\">" +
            "<Border Height=\"4\" CornerRadius=\"2\" Background=\"#FF4FA3\" VerticalAlignment=\"Center\"/></ControlTemplate></RepeatButton.Template></RepeatButton></Track.DecreaseRepeatButton>" +
            "<Track.IncreaseRepeatButton><RepeatButton Command=\"Slider.IncreaseLarge\"><RepeatButton.Template><ControlTemplate TargetType=\"RepeatButton\">" +
            "<Border Background=\"Transparent\"/></ControlTemplate></RepeatButton.Template></RepeatButton></Track.IncreaseRepeatButton>" +
            "<Track.Thumb><Thumb Width=\"16\" Height=\"16\"><Thumb.Template><ControlTemplate TargetType=\"Thumb\">" +
            "<Ellipse Fill=\"White\" Stroke=\"#FF4FA3\" StrokeThickness=\"2\"/></ControlTemplate></Thumb.Template></Thumb></Track.Thumb>" +
            "</Track></Grid></ControlTemplate>");

        public static Style ScrollBarStyle = (Style)XamlReader.Parse(
            "<Style " + NS + " TargetType=\"ScrollBar\"><Setter Property=\"Width\" Value=\"10\"/><Setter Property=\"Background\" Value=\"Transparent\"/>" +
            "<Setter Property=\"Template\"><Setter.Value><ControlTemplate TargetType=\"ScrollBar\"><Grid Background=\"Transparent\">" +
            "<Track x:Name=\"PART_Track\" IsDirectionReversed=\"True\">" +
            "<Track.DecreaseRepeatButton><RepeatButton Command=\"ScrollBar.PageUpCommand\"><RepeatButton.Template><ControlTemplate TargetType=\"RepeatButton\"><Border Background=\"Transparent\"/></ControlTemplate></RepeatButton.Template></RepeatButton></Track.DecreaseRepeatButton>" +
            "<Track.IncreaseRepeatButton><RepeatButton Command=\"ScrollBar.PageDownCommand\"><RepeatButton.Template><ControlTemplate TargetType=\"RepeatButton\"><Border Background=\"Transparent\"/></ControlTemplate></RepeatButton.Template></RepeatButton></Track.IncreaseRepeatButton>" +
            "<Track.Thumb><Thumb><Thumb.Template><ControlTemplate TargetType=\"Thumb\"><Border Margin=\"2,0\" CornerRadius=\"3\" Background=\"#3A404C\"/></ControlTemplate></Thumb.Template></Thumb></Track.Thumb>" +
            "</Track></Grid></ControlTemplate></Setter.Value></Setter></Style>");
    }

    // ------------------------------------------------------------------------------------------
    // Main window.
    // ------------------------------------------------------------------------------------------
    sealed class MainWindow : Window
    {
        readonly IniDoc ini;
        readonly IniDoc shaders;
        readonly Prefs prefs;
        readonly string[] pages = { "Window", "Rendering", "Quality", "Controls", "Addons", "Performance" };
        readonly Dictionary<string, TextBlock> navLabels = new Dictionary<string, TextBlock>();
        readonly Dictionary<string, Border> navBars = new Dictionary<string, Border>();
        string page = "Window";
        readonly StackPanel content = new StackPanel();
        readonly ScrollViewer scroller = new ScrollViewer();
        readonly TextBlock status = new TextBlock();
        Button playButton;
        System.Windows.Threading.DispatcherTimer statusTimer;
        readonly List<string> gpus;
        bool busy;

        [DllImport("dwmapi.dll")] static extern int DwmSetWindowAttribute(IntPtr hwnd, int attr, ref int value, int size);

        public MainWindow()
        {
            Title = "VCS Launcher - Vice City Stories";
            Width = 940; Height = 700; MinWidth = 820; MinHeight = 560;
            Background = Theme.Bg;
            FontFamily = new FontFamily("Segoe UI Variable Text, Segoe UI");
            Foreground = Theme.Text;
            WindowStartupLocation = WindowStartupLocation.CenterScreen;
            UseLayoutRounding = true;
            SourceInitialized += delegate
            {
                try
                {
                    int on = 1;
                    IntPtr h = new WindowInteropHelper(this).Handle;
                    if (DwmSetWindowAttribute(h, 20, ref on, 4) != 0) DwmSetWindowAttribute(h, 19, ref on, 4);
                }
                catch { }
            };
            Resources.Add(typeof(System.Windows.Controls.Primitives.ScrollBar), Theme.ScrollBarStyle);

            ini = new IniDoc(Game.Ini);
            shaders = new IniDoc(Game.Shaders);
            prefs = new Prefs(Game.PrefsFile);
            gpus = Game.GpuNames();
            Content = Build();
            Render();
        }

        // ---- shell -------------------------------------------------------------------------

        UIElement Build()
        {
            var root = new Grid();
            root.ColumnDefinitions.Add(new ColumnDefinition { Width = new GridLength(210) });
            root.ColumnDefinitions.Add(new ColumnDefinition { Width = new GridLength(1, GridUnitType.Star) });

            var side = new Border { Background = Theme.Sidebar, BorderBrush = Theme.Line, BorderThickness = new Thickness(0, 0, 1, 0) };
            var sideStack = new StackPanel { Margin = new Thickness(14, 22, 14, 14) };
            var title = new TextBlock { Text = "VCS Launcher", FontSize = 20, FontWeight = FontWeights.Bold, Margin = new Thickness(8, 0, 0, 0) };
            title.Foreground = new LinearGradientBrush(((SolidColorBrush)Theme.Accent).Color, ((SolidColorBrush)Theme.Accent2).Color, 0);
            sideStack.Children.Add(title);
            sideStack.Children.Add(new TextBlock { Text = "Vice City Stories  -  Windows / Vulkan", FontSize = 11, Foreground = Theme.Muted, Margin = new Thickness(8, 2, 0, 20), TextWrapping = TextWrapping.Wrap });
            foreach (string p in pages) sideStack.Children.Add(NavItem(p));
            side.Child = sideStack;
            Grid.SetColumn(side, 0);
            root.Children.Add(side);

            var right = new Grid();
            right.RowDefinitions.Add(new RowDefinition { Height = new GridLength(1, GridUnitType.Star) });
            right.RowDefinitions.Add(new RowDefinition { Height = GridLength.Auto });
            scroller.VerticalScrollBarVisibility = ScrollBarVisibility.Auto;
            scroller.Content = new Border { Padding = new Thickness(30, 24, 30, 30), Child = content };
            right.Children.Add(scroller);
            var bar = BottomBar();
            Grid.SetRow(bar, 1);
            right.Children.Add(bar);
            Grid.SetColumn(right, 1);
            root.Children.Add(right);
            return root;
        }

        UIElement NavItem(string name)
        {
            var bar = new Border { Width = 3, CornerRadius = new CornerRadius(2), Background = Brushes.Transparent, Margin = new Thickness(0, 6, 8, 6) };
            var label = new TextBlock { Text = name, FontSize = 14, VerticalAlignment = VerticalAlignment.Center, Foreground = Theme.Muted };
            var row = new DockPanel { Background = Brushes.Transparent, Cursor = Cursors.Hand, Height = 40 };
            DockPanel.SetDock(bar, Dock.Left);
            row.Children.Add(bar);
            row.Children.Add(label);
            var item = new Border { CornerRadius = new CornerRadius(8), Child = row, Margin = new Thickness(0, 1, 0, 1), Padding = new Thickness(6, 0, 6, 0), Background = Brushes.Transparent };
            item.MouseEnter += delegate { if (page != name) item.Background = Theme.Card; };
            item.MouseLeave += delegate { item.Background = Brushes.Transparent; };
            item.MouseLeftButtonDown += delegate { page = name; item.Background = Brushes.Transparent; Render(); scroller.ScrollToTop(); };
            navLabels[name] = label;
            navBars[name] = bar;
            return item;
        }

        UIElement BottomBar()
        {
            var border = new Border { Background = Theme.Sidebar, BorderBrush = Theme.Line, BorderThickness = new Thickness(0, 1, 0, 0), Padding = new Thickness(24, 14, 24, 14) };
            var dock = new DockPanel();
            playButton = ActionButton("Play", true);
            playButton.Click += delegate { Play(); };
            var save = ActionButton("Save", false);
            save.Click += delegate { if (SaveAll()) Flash("Saved."); };
            DockPanel.SetDock(playButton, Dock.Right);
            DockPanel.SetDock(save, Dock.Right);
            save.Margin = new Thickness(0, 0, 10, 0);
            dock.Children.Add(playButton);
            dock.Children.Add(save);
            status.Foreground = Theme.Muted; status.FontSize = 12; status.VerticalAlignment = VerticalAlignment.Center; status.TextWrapping = TextWrapping.Wrap;
            dock.Children.Add(status);
            border.Child = dock;
            return border;
        }

        static Button ActionButton(string text, bool primary)
        {
            var label = new TextBlock { Text = text, FontWeight = FontWeights.SemiBold, FontSize = 14, HorizontalAlignment = HorizontalAlignment.Center, VerticalAlignment = VerticalAlignment.Center, Foreground = Brushes.White };
            Brush normal = primary
                ? (Brush)new LinearGradientBrush(((SolidColorBrush)Theme.Accent).Color, (Color)ColorConverter.ConvertFromString("#C93A9B"), 90)
                : Theme.Field;
            var border = new Border { CornerRadius = new CornerRadius(9), Background = normal, Padding = new Thickness(26, 9, 26, 9), MinWidth = 96, Child = label, Cursor = Cursors.Hand };
            border.MouseEnter += delegate { border.Opacity = 0.88; };
            border.MouseLeave += delegate { border.Opacity = 1; };
            var button = new Button { Content = border, Background = Brushes.Transparent, BorderThickness = new Thickness(0), Padding = new Thickness(0), Focusable = false };
            button.Template = (ControlTemplate)XamlReader.Parse("<ControlTemplate xmlns=\"http://schemas.microsoft.com/winfx/2006/xaml/presentation\" TargetType=\"Button\"><ContentPresenter/></ControlTemplate>");
            return button;
        }

        void Flash(string message, bool warning = false, int millis = 3500)
        {
            status.Text = message;
            status.Foreground = warning ? Theme.Warn : Theme.Muted;
            if (statusTimer != null) statusTimer.Stop();
            statusTimer = new System.Windows.Threading.DispatcherTimer { Interval = TimeSpan.FromMilliseconds(millis) };
            statusTimer.Tick += delegate { status.Text = ""; statusTimer.Stop(); };
            statusTimer.Start();
        }

        // ---- building blocks -----------------------------------------------------------------

        TextBlock Head(string title, string subtitle)
        {
            var sp = new TextBlock { Text = title, FontSize = 26, FontWeight = FontWeights.Bold };
            content.Children.Add(sp);
            if (subtitle != null)
                content.Children.Add(new TextBlock { Text = subtitle, FontSize = 13, Foreground = Theme.Muted, Margin = new Thickness(0, 3, 0, 4), TextWrapping = TextWrapping.Wrap });
            content.Children.Add(new Border { Height = 12 });
            return sp;
        }

        StackPanel Section(string heading)
        {
            if (heading != null)
                content.Children.Add(new TextBlock { Text = heading.ToUpperInvariant(), FontSize = 11, FontWeight = FontWeights.SemiBold, Foreground = Theme.Accent2, Margin = new Thickness(4, 14, 0, 7) });
            else content.Children.Add(new Border { Height = 8 });
            var stack = new StackPanel();
            content.Children.Add(new Border { Background = Theme.Card, CornerRadius = new CornerRadius(12), BorderBrush = Theme.Line, BorderThickness = new Thickness(1), Child = stack });
            return stack;
        }

        static void AddRow(StackPanel card, string label, string description, UIElement control, string tooltip = null)
        {
            if (card.Children.Count > 0)
                card.Children.Add(new Border { Height = 1, Background = Theme.Line, Margin = new Thickness(16, 0, 16, 0) });
            var grid = new Grid { Margin = new Thickness(16, 12, 16, 12), Background = Brushes.Transparent };
            grid.ColumnDefinitions.Add(new ColumnDefinition { Width = new GridLength(1, GridUnitType.Star) });
            grid.ColumnDefinitions.Add(new ColumnDefinition { Width = GridLength.Auto });
            var left = new StackPanel { Margin = new Thickness(0, 0, 18, 0), VerticalAlignment = VerticalAlignment.Center };
            left.Children.Add(new TextBlock { Text = label, FontSize = 14, TextWrapping = TextWrapping.Wrap });
            if (!string.IsNullOrEmpty(description))
                left.Children.Add(new TextBlock { Text = description, FontSize = 12, Foreground = Theme.Muted, TextWrapping = TextWrapping.Wrap, Margin = new Thickness(0, 2, 0, 0) });
            grid.Children.Add(left);
            if (control != null)
            {
                var fe = (FrameworkElement)control;
                fe.VerticalAlignment = VerticalAlignment.Center;
                Grid.SetColumn(fe, 1);
                grid.Children.Add(fe);
            }
            if (tooltip != null) grid.ToolTip = new ToolTip { Content = new TextBlock { Text = tooltip, MaxWidth = 420, TextWrapping = TextWrapping.Wrap }, Background = Theme.Card, Foreground = Theme.Text, BorderBrush = Theme.Line };
            card.Children.Add(grid);
        }

        static void AddNote(StackPanel card, string text, bool warn = false)
        {
            if (card.Children.Count > 0)
                card.Children.Add(new Border { Height = 1, Background = Theme.Line, Margin = new Thickness(16, 0, 16, 0) });
            card.Children.Add(new TextBlock { Text = text, FontSize = 12, Foreground = warn ? Theme.Warn : Theme.Muted, TextWrapping = TextWrapping.Wrap, Margin = new Thickness(16, 10, 16, 10) });
        }

        UIElement Toggle(bool value, Action<bool> set, Action after = null)
        {
            var t = new System.Windows.Controls.Primitives.ToggleButton { Template = Theme.SwitchTemplate, IsChecked = value, Focusable = false };
            t.Click += delegate { set(t.IsChecked == true); if (after != null) after(); };
            return t;
        }

        // A pill selector for a handful of choices.
        UIElement Segmented(string[] labels, string[] values, string current, Action<string> set, Action after = null)
        {
            var outer = new Border { Background = Theme.Field, CornerRadius = new CornerRadius(9), Padding = new Thickness(3) };
            var row = new StackPanel { Orientation = Orientation.Horizontal };
            var cells = new List<Border>();
            var texts = new List<TextBlock>();
            Action<string> paint = delegate(string v)
            {
                for (int i = 0; i < cells.Count; i++)
                {
                    bool on = values[i] == v;
                    cells[i].Background = on ? Theme.Accent : Brushes.Transparent;
                    texts[i].Foreground = on ? Brushes.White : Theme.Muted;
                    texts[i].FontWeight = on ? FontWeights.SemiBold : FontWeights.Normal;
                }
            };
            for (int i = 0; i < labels.Length; i++)
            {
                string v = values[i];
                var tb = new TextBlock { Text = labels[i], FontSize = 12.5, HorizontalAlignment = HorizontalAlignment.Center, VerticalAlignment = VerticalAlignment.Center };
                var cell = new Border { CornerRadius = new CornerRadius(7), Padding = new Thickness(13, 6, 13, 6), Child = tb, Cursor = Cursors.Hand, Background = Brushes.Transparent };
                cell.MouseLeftButtonDown += delegate { paint(v); set(v); if (after != null) after(); };
                cells.Add(cell); texts.Add(tb); row.Children.Add(cell);
            }
            paint(current);
            outer.Child = row;
            return outer;
        }

        UIElement SliderRow(double min, double max, double step, double value, Func<double, string> format, Action<double> set)
        {
            var panel = new StackPanel { Orientation = Orientation.Horizontal };
            var slider = new Slider { Minimum = min, Maximum = max, Value = Math.Max(min, Math.Min(max, value)), Width = 190, Template = Theme.SliderTemplate, IsMoveToPointEnabled = true, Focusable = false };
            var readout = new TextBlock { Text = format(slider.Value), Width = 58, TextAlignment = TextAlignment.Right, Foreground = Theme.Muted, VerticalAlignment = VerticalAlignment.Center, Margin = new Thickness(10, 0, 0, 0) };
            slider.ValueChanged += delegate
            {
                double v = Math.Round(slider.Value / step) * step;
                v = Math.Max(min, Math.Min(max, v));
                readout.Text = format(v);
                set(v);
            };
            panel.Children.Add(slider); panel.Children.Add(readout);
            return panel;
        }

        UIElement NumberBox(int value, int min, int max, Action<int> set)
        {
            var box = new TextBox { Text = value.ToString(CultureInfo.InvariantCulture), Width = 88, TextAlignment = TextAlignment.Right, Background = Theme.Field, Foreground = Theme.Text, CaretBrush = Theme.Text, BorderBrush = Theme.Line, Padding = new Thickness(8, 5, 8, 5), FontSize = 13 };
            box.LostFocus += delegate
            {
                int v;
                if (!int.TryParse(box.Text, NumberStyles.Integer, CultureInfo.InvariantCulture, out v)) v = value;
                v = Math.Max(min, Math.Min(max, v));
                box.Text = v.ToString(CultureInfo.InvariantCulture);
                set(v);
            };
            return box;
        }

        UIElement SmallButton(string text, Action click, bool enabled = true)
        {
            var label = new TextBlock { Text = text, FontSize = 13, Foreground = enabled ? Theme.Text : Theme.Muted, HorizontalAlignment = HorizontalAlignment.Center };
            var b = new Border { Background = Theme.Field, CornerRadius = new CornerRadius(8), Padding = new Thickness(16, 7, 16, 7), Child = label, Cursor = enabled ? Cursors.Hand : Cursors.Arrow, Opacity = enabled ? 1 : 0.5, BorderBrush = Theme.Line, BorderThickness = new Thickness(1) };
            if (enabled)
            {
                b.MouseEnter += delegate { b.BorderBrush = Theme.Accent; };
                b.MouseLeave += delegate { b.BorderBrush = Theme.Line; };
                b.MouseLeftButtonDown += delegate { click(); };
            }
            return b;
        }

        // ---- ini shortcuts ---------------------------------------------------------------------

        UIElement IniToggle(StackPanel c, string label, string desc, string sec, string key, bool def, IniDoc doc = null, string tip = null, bool rerender = false)
        {
            IniDoc d = doc ?? ini;
            var t = Toggle(d.Bool(sec, key, def), v => d.SetBool(sec, key, v), rerender ? (Action)Render : null);
            AddRow(c, label, desc, t, tip);
            return t;
        }

        void IniChoice(StackPanel c, string label, string desc, string sec, string key, string def, string[] labels, string[] values, IniDoc doc = null, string tip = null, bool rerender = false)
        {
            IniDoc d = doc ?? ini;
            string cur = d.Get(sec, key) ?? def;
            AddRow(c, label, desc, Segmented(labels, values, cur, v => d.Set(sec, key, v), rerender ? (Action)Render : null), tip);
        }

        void IniSlider(StackPanel c, string label, string desc, string sec, string key, double def, double min, double max, double step, string suffix = "", IniDoc doc = null, string tip = null)
        {
            IniDoc d = doc ?? ini;
            AddRow(c, label, desc, SliderRow(min, max, step, d.Dbl(sec, key, def), v => v.ToString("0.00", CultureInfo.InvariantCulture) + suffix, v => d.SetDbl(sec, key, v)), tip);
        }

        // For keys the game reads as whole numbers (a value such as 12.00 would be rejected by its parser).
        void IniIntSlider(StackPanel c, string label, string desc, string sec, string key, int def, int min, int max, string suffix = "", IniDoc doc = null, string tip = null)
        {
            IniDoc d = doc ?? ini;
            AddRow(c, label, desc, SliderRow(min, max, 1, d.Int(sec, key, def), v => ((int)Math.Round(v)).ToString(CultureInfo.InvariantCulture) + suffix, v => d.SetInt(sec, key, (int)Math.Round(v))), tip);
        }

        // ---- pages -----------------------------------------------------------------------------

        void Render()
        {
            foreach (string p in pages)
            {
                bool on = p == page;
                navLabels[p].Foreground = on ? Theme.Text : Theme.Muted;
                navLabels[p].FontWeight = on ? FontWeights.SemiBold : FontWeights.Normal;
                navBars[p].Background = on ? Theme.Accent : Brushes.Transparent;
            }
            content.Children.Clear();
            string error = ini.Error ?? shaders.Error;
            if (!File.Exists(Game.Exe)) error = "VCSNative.exe was not found next to the launcher.\nPut VCSLauncher.exe in the same folder as VCSNative.exe.";
            if (error != null) { ErrorView(error); playButton.IsEnabled = false; return; }
            playButton.IsEnabled = true;
            switch (page)
            {
                case "Window": PageWindow(); break;
                case "Rendering": PageRendering(); break;
                case "Quality": PageQuality(); break;
                case "Controls": PageControls(); break;
                case "Addons": PageAddons(); break;
                case "Performance": PagePerformance(); break;
            }
        }

        void ErrorView(string message)
        {
            content.Children.Add(new TextBlock { Text = "Something is missing", FontSize = 24, FontWeight = FontWeights.Bold, Margin = new Thickness(0, 30, 0, 8) });
            content.Children.Add(new TextBlock { Text = message, Foreground = Theme.Warn, TextWrapping = TextWrapping.Wrap, FontSize = 14 });
            content.Children.Add(new Border { Height = 16 });
            content.Children.Add(new StackPanel { Children = { SmallButton("Retry", delegate { ini.Reload(); shaders.Reload(); Render(); }) }, HorizontalAlignment = HorizontalAlignment.Left });
        }

        void PageWindow()
        {
            Head("Window", "How VCSNative shows up on your display.");
            var s = Section(null);
            IniToggle(s, "Fullscreen (borderless)", "Fills the whole display without a real mode switch, so alt-tab stays instant. Off runs in a normal window.", "Display", "Fullscreen", true);

            s = Section("Output");
            IniChoice(s, "Resolution", "The size of the output surface. Separate from Internal Rendering, which is what the game draws at before scaling to this.",
                "Display", "ResolutionMode", "Desktop", new[] { "Match desktop", "PSP native", "Custom" }, new[] { "Desktop", "PSP", "Custom" }, null,
                "Match desktop fills your screen at native resolution. PSP native reproduces the original 480x272 window. Custom lets you set an exact size.", true);
            if ((ini.Get("Display", "ResolutionMode") ?? "Desktop") == "Custom")
            {
                AddRow(s, "Width", "Output window width in pixels.", NumberBox(ini.Int("Display", "Width", 1920), 320, 16384, v => ini.SetInt("Display", "Width", v)));
                AddRow(s, "Height", "Output window height in pixels.", NumberBox(ini.Int("Display", "Height", 1080), 180, 16384, v => ini.SetInt("Display", "Height", v)));
            }
            IniChoice(s, "Aspect ratio", "Stretch fills the window and can distort. Preserve keeps proportions and adds black bars.",
                "Display", "AspectRatio", "Stretch", new[] { "Stretch", "Preserve" }, new[] { "Stretch", "Preserve" });
            IniChoice(s, "Upscale filter", "How the image is scaled to the output size. Nearest keeps hard pixel edges.",
                "Display", "UpscaleFilter", "Bilinear", new[] { "Bilinear", "Nearest" }, new[] { "Bilinear", "Nearest" });
            IniToggle(s, "Integer scale", "Only whole-number scale factors, for perfectly square pixels at or near PSP resolution.", "Display", "IntegerScale", false);

            s = Section(null);
            IniToggle(s, "Show FPS counter", "The game's own on-screen frames-per-second counter.", "Display", "ShowFPS", false);
        }

        void PageRendering()
        {
            Head("Internal Rendering", "What the game actually renders at, independent of window size.");
            var s = Section("Resolution");
            IniChoice(s, "Internal resolution", "Higher is sharper geometry and text at a real GPU cost.", "Rendering", "InternalResolutionMode", "Desktop",
                new[] { "Match desktop", "PSP native", "Scale", "Custom" }, new[] { "Desktop", "PSP", "Scale", "Custom" }, null,
                "What the GE (graphics engine) renders at before the Window page's output resolution scales it to your screen. Scale multiplies the PSP's 480x272 by a whole number.", true);
            string mode = ini.Get("Rendering", "InternalResolutionMode") ?? "Desktop";
            if (mode == "Scale")
                IniChoice(s, "Scale", "Multiplies 480x272 by this factor (4x = 1920x1088).", "Rendering", "InternalScale", "2",
                    new[] { "1x", "2x", "3x", "4x", "5x", "6x", "7x", "8x" }, new[] { "1", "2", "3", "4", "5", "6", "7", "8" });
            if (mode == "Custom")
            {
                AddRow(s, "Width", "Internal render width in pixels.", NumberBox(ini.Int("Rendering", "InternalWidth", 1920), 480, 16384, v => ini.SetInt("Rendering", "InternalWidth", v)));
                AddRow(s, "Height", "Internal render height in pixels.", NumberBox(ini.Int("Rendering", "InternalHeight", 1080), 272, 16384, v => ini.SetInt("Rendering", "InternalHeight", v)));
            }

            s = Section("Filtering");
            IniChoice(s, "Anisotropic filtering", "Keeps textures at steep angles (roads, pavements) sharp instead of blurry.", "Rendering", "AnisotropicFiltering", "1",
                new[] { "Off", "2x", "4x", "8x", "16x" }, new[] { "1", "2", "4", "8", "16" });
            IniChoice(s, "Depth precision", "Depth buffer precision. Higher reduces flicker between overlapping surfaces over the long draw distances.", "Rendering", "DepthPrecision", "24",
                new[] { "16-bit", "24-bit", "32-bit" }, new[] { "16", "24", "32" }, null,
                "Falls back automatically to the closest depth format the GPU supports.");
            IniSlider(s, "Texture sharpening", "Unsharp mask on the final frame. 0 is off; 0.3 to 0.6 is a good range before halos appear.", "Rendering", "Sharpen", 0.0, 0.0, 1.0, 0.05);

            s = Section(null);
            IniToggle(s, "GPU hardware transform", "Moves vertex transform and lighting to the GPU.", "Rendering", "HardwareTransform", false);
            AddNote(s, "Experimental: known to produce distorted or untextured geometry. Leave off unless you are testing it.", true);
        }

        void PageQuality()
        {
            Head("Quality", null);
            var s = Section(null);
            IniToggle(s, "Widescreen (16:9)", "Widens the PSP's projection to 16:9 instead of stretching or pillarboxing the original field of view.", "Widescreen", "Enabled", true);

            s = Section("Anti-aliasing");
            IniToggle(s, "SMAA", "Three-pass SMAA 1x with the reference lookup textures. Sharper than FXAA, especially on the HUD. Takes priority over FXAA.", "SMAA", "Enabled", true, shaders);
            IniToggle(s, "FXAA", "Fast single-pass approximate anti-aliasing (kept under the historical Rendering.SMAA key).", "Rendering", "SMAA", false);

            s = Section("Bloom");
            IniToggle(s, "Bloom", "A soft glow around bright highlights: streetlights, headlights, neon, sun glare.", "SimulateHDR", "Enabled", true, null, null, true);
            if (ini.Bool("SimulateHDR", "Enabled", true))
            {
                IniSlider(s, "Threshold", "Luminance above which a pixel starts glowing. Lower blooms more of the scene.", "SimulateHDR", "Threshold", 0.80, 0.0, 1.0, 0.05);
                IniSlider(s, "Intensity", "How strongly the glow is added back. High values can blow highlights out to white.", "SimulateHDR", "Intensity", 0.60, 0.0, 2.0, 0.05);
            }
            AddNote(s, "Bloom is composited on the CPU, so it is only applied when the GPU swapchain present is switched off (Performance page). With the default swapchain present it has no effect yet.", true);

            s = Section("Texture pack");
            int count = Game.PackCount(ini);
            if (count > 0) AddRow(s, "Status", null, new TextBlock { Text = "Installed (" + count + " textures)", Foreground = Theme.Accent2 });
            var buttons = new StackPanel { Orientation = Orientation.Horizontal };
            buttons.Children.Add(SmallButton("Install...", InstallPack, !busy));
            buttons.Children.Add(new Border { Width = 8 });
            buttons.Children.Add(SmallButton("Uninstall", UninstallPack, count > 0 && !busy));
            AddRow(s, "Replacement textures", "Optional higher-quality textures. Pick the official texture pack .zip, then restart the game.", buttons);

            s = Section("Volumetric clouds");
            IniToggle(s, "Volumetric clouds", "Raymarched clouds ported from ProperShaders/CloudWorks. Costs a little GPU time; turn off if you need more frame rate.", "VolumetricClouds", "Enabled", true, shaders);

            s = Section("Post effects");
            IniToggle(s, "Anti-banding dither", "Breaks up colour banding in gradients and dark areas.", "Dither", "Enabled", true, shaders);
            IniToggle(s, "AMD CAS sharpening", "FidelityFX Contrast Adaptive Sharpening: sharper detail without haloing hard edges.", "CAS", "Enabled", true, shaders, null, true);
            if (shaders.Bool("CAS", "Enabled", true))
                IniSlider(s, "CAS sharpness", null, "CAS", "Sharpness", 0.5, 0.0, 1.0, 0.05, "", shaders);
            IniToggle(s, "Vice City sky palette", "Pink dawn and dusk, teal days, violet nights, following the in-game clock. Weather is preserved.", "SkyPalette", "Enabled", true, shaders);
            IniToggle(s, "Time-of-day grade", "Warms and saturates the picture around sunrise and sunset and cools it at night.", "TimeOfDayGrade", "Enabled", true, shaders);
            IniToggle(s, "VHS filter", "Stylistic tape wiggle and colour smear across the whole frame, HUD included.", "VHS", "Enabled", false, shaders);

            s = Section("Color grading");
            IniToggle(s, "\"Vice Neon\" look", "Boosted saturation and a warm sunset-leaning tint.", "ColorGrading", "Enabled", true, null, null, true);
            if (ini.Bool("ColorGrading", "Enabled", true))
            {
                IniSlider(s, "Saturation", "1.0 is unchanged. 1.15 to 1.30 is the sweet spot.", "ColorGrading", "Saturation", 1.18, 0.5, 2.0, 0.05);
                IniSlider(s, "Contrast", "Contrast around mid grey. Higher values crush shadow detail.", "ColorGrading", "Contrast", 1.05, 0.5, 1.5, 0.02);
                IniSlider(s, "Brightness", "Flat brightness offset. Keep near zero.", "ColorGrading", "Brightness", 0.0, -0.3, 0.3, 0.02);
                IniSlider(s, "Tint red", null, "ColorGrading", "TintR", 1.05, 0.8, 1.3, 0.01);
                IniSlider(s, "Tint green", null, "ColorGrading", "TintG", 0.98, 0.8, 1.3, 0.01);
                IniSlider(s, "Tint blue", null, "ColorGrading", "TintB", 1.02, 0.8, 1.3, 0.01);
            }

            s = Section("Draw distance");
            IniToggle(s, "Extended draw distance", "Patches the game's own LOD and culling so far objects, vehicles and pedestrians appear much further out.", "DrawDistance", "Enabled", true, null, null, true);
            if (ini.Bool("DrawDistance", "Enabled", true))
            {
                IniSlider(s, "World objects", "Scenery draw distance and far clip plane. 1.0 is the original PSP distance.", "DrawDistance", "World", 1.0, 1.0, 3.0, 0.25, "x");
                IniSlider(s, "Model detail switch", "Distance at which a low-poly model becomes the full model. Purely visual, so it can go high.", "DrawDistance", "LOD", 1.0, 1.0, 3.0, 0.5, "x");
            }
        }

        static UIElement KeyText(string keys) { return new TextBlock { Text = keys, Foreground = Theme.Muted, FontFamily = new FontFamily("Consolas"), FontSize = 12.5 }; }

        void KeyList(string heading, string[][] rows)
        {
            var s = Section(heading);
            foreach (string[] r in rows) AddRow(s, r[0], null, KeyText(r[1]));
        }

        void PageControls()
        {
            Head("Controls", null);
            KeyList("On foot", new[] {
                new[] { "Move", "W A S D" }, new[] { "Walk slowly", "Left Alt + move" }, new[] { "Look / aim camera", "Mouse" },
                new[] { "Sprint", "Space" }, new[] { "Jump", "Left Shift" }, new[] { "Enter / exit vehicle", "F  or  Return" },
                new[] { "Fire / punch", "Left mouse" }, new[] { "Target / aim", "Right mouse" }, new[] { "Look behind", "Middle mouse" },
                new[] { "Previous / next weapon", "Q / E  or  mouse wheel" } });
            KeyList("In a vehicle", new[] {
                new[] { "Steer", "A / D" }, new[] { "Accelerate", "W  or  Up arrow" }, new[] { "Brake / reverse", "S  or  Down arrow" },
                new[] { "Handbrake", "Space" }, new[] { "Brake (alternate)", "Left Shift" }, new[] { "Horn", "H" },
                new[] { "Fire vehicle weapon", "Left mouse" }, new[] { "Change radio station", "Q / E  or  mouse wheel" }, new[] { "Look around", "Mouse" } });
            KeyList("Menus", new[] {
                new[] { "Navigate", "Arrow keys" }, new[] { "Confirm", "Space" }, new[] { "Back / cancel", "F" },
                new[] { "Pause", "Esc" }, new[] { "Map / select", "Tab" } });
            KeyList("Gamepad (Xbox layout)", new[] {
                new[] { "Move / look", "Left stick / Right stick" }, new[] { "Sprint, handbrake, confirm", "A" }, new[] { "Jump, brake / reverse", "X" },
                new[] { "Enter / exit vehicle", "Y" }, new[] { "Fire / punch", "B" }, new[] { "Horn / look behind", "Left bumper" },
                new[] { "Target / aim", "Right bumper" }, new[] { "Weapon / radio", "D-pad left and right" }, new[] { "Pause / map", "Start / Back" } });

            var s = Section("Prompts");
            IniToggle(s, "Show control names in prompts", "Rewrites button prompts to name your actual controls. They follow the device you used last, keyboard and mouse or controller.", "Controls", "KeyboardPrompts", true, null,
                "Turn off to see the original PSP button names.");
            AddNote(s, "In-game prompts switch automatically between keyboard and mouse and the controller layout depending on which you touched last.");

            s = Section("Camera");
            IniToggle(s, "Camera on right stick", "Aim and look with the controller's right stick.", "Controls", "CameraStick", true);
            IniToggle(s, "Invert camera Y", "Flips vertical camera movement.", "Controls", "InvertCameraY", false);
            IniIntSlider(s, "Mouse sensitivity", "Mouse look speed. Higher turns the camera further for the same movement.", "Controls", "MouseSensitivity", 50, 1, 100);
            IniIntSlider(s, "Look-up limit", "How far the on-foot camera may tilt up, in degrees. The game itself stops at 45.", "Controls", "PedCameraUpLimitDegrees", 40, 10, 45, "°");
        }

        void PageAddons()
        {
            Head("Addons", null);
            var s = Section(null);
            IniToggle(s, "Project2DFX", "Night-time upgrade: light coronas on streetlights, windows and signs, traffic-light glows, a procedural star field and a raised helicopter ceiling. Cosmetic only.", "Project2DFX", "Enabled", false);
        }

        void PagePerformance()
        {
            Head("Performance", "Vulkan presentation and worker threads. These are launcher settings applied when the game starts.");
            var s = Section(null);
            AddRow(s, "Target frame rate", "Locked to 60. The whole renderer is tuned and verified against a 60 fps baseline.", new TextBlock { Text = "60 fps", Foreground = Theme.Muted });

            s = Section("Graphics card");
            var labels = new List<string> { "Automatic" };
            var values = new List<string> { "" };
            foreach (string g in gpus) { labels.Add(g.Replace("NVIDIA ", "").Replace("GeForce ", "").Replace("AMD ", "").Replace("Radeon ", "").Replace("Intel(R) ", "")); values.Add(g); }
            string current = prefs.Get("gpu", "");
            if (!values.Contains(current)) current = "";
            AddRow(s, "GPU", "Automatic picks the discrete GPU with the most video memory. Choose one to force it.", Segmented(labels.ToArray(), values.ToArray(), current, v => prefs.Set("gpu", v)));

            s = Section("Presentation");
            int hz = Game.DisplayRefreshHz();
            if (hz > 1)
            {
                int nearest = (hz + 30) / 60 * 60;
                bool multiple = nearest >= 60 && hz + 1 >= nearest && hz <= nearest + 1;
                AddRow(s, "Display refresh rate", multiple
                    ? "Your display runs at " + hz + " Hz, an even multiple of the game's 60 fps: motion is evenly paced."
                    : "Your display runs at " + hz + " Hz. The game runs at 60 fps, so without variable refresh rate (G-SYNC / FreeSync) frames alternate between two lengths on this display, which looks like judder. Turn on variable refresh in your graphics driver and in Windows (Settings > Display > Graphics), or switch the display to 60, 120 or 180 Hz, for perfectly even motion.",
                    new TextBlock { Text = hz + " Hz", Foreground = multiple ? Theme.Accent2 : Theme.Warn });
            }
            AddRow(s, "Present mode", "V-Sync is smooth and tear-free. Low latency (Mailbox) suits 120 Hz and higher or variable-refresh displays.",
                Segmented(new[] { "V-Sync", "Low latency", "Adaptive", "Uncapped" }, new[] { "fifo", "mailbox", "relaxed", "immediate" }, prefs.Get("present", "fifo"), v => prefs.Set("present", v)),
                "V-Sync = FIFO, Low latency = Mailbox, Adaptive = FIFO relaxed, Uncapped = Immediate (may tear). Falls back to V-Sync if the driver does not offer the mode.");
            AddRow(s, "Frame presentation", "Auto uses the GPU swapchain when the build enables it. Off forces the slower CPU readback path, for troubleshooting.",
                Segmented(new[] { "Auto", "GPU swapchain", "CPU readback" }, new[] { "auto", "1", "0" }, prefs.Get("swapchain", "auto"), v => prefs.Set("swapchain", v)));

            s = Section("Worker threads");
            AddRow(s, "Asynchronous GE thread", "Runs display lists on their own thread. Recommended on; switch off only if you see hangs.", Toggle(prefs.Bool("async", true), v => prefs.Set("async", v ? "1" : "0")));
            AddRow(s, "Parallel vertex decode", "Decodes vertices on several cores. Recommended on.", Toggle(prefs.Bool("paralleldecode", true), v => prefs.Set("paralleldecode", v ? "1" : "0")));
        }

        // ---- actions ---------------------------------------------------------------------------

        bool SaveAll()
        {
            try { ini.Save(); shaders.Save(); prefs.Save(); return true; }
            catch (Exception e) { Flash("Could not save: " + e.Message, true, 8000); return false; }
        }

        void InstallPack()
        {
            var dialog = new Microsoft.Win32.OpenFileDialog { Title = "Choose the texture pack (.zip)", Filter = "Texture pack (*.zip)|*.zip" };
            if (dialog.ShowDialog(this) != true) return;
            string zip = dialog.FileName;
            busy = true; Render();
            Flash("Installing texture pack...", false, 600000);
            Task.Run(() =>
            {
                try
                {
                    int n = Game.InstallPack(ini, zip, (d, t) => Dispatcher.BeginInvoke(new Action(() => { status.Text = "Installing texture pack... " + d + " / " + t; })));
                    Dispatcher.BeginInvoke(new Action(() => { busy = false; Render(); Flash("Installed " + n + " textures. Restart the game to use them."); }));
                }
                catch (Exception e)
                {
                    Dispatcher.BeginInvoke(new Action(() => { busy = false; Render(); Flash("Install failed: " + e.Message, true, 8000); }));
                }
            });
        }

        void UninstallPack()
        {
            if (MessageBox.Show(this, "Remove all installed replacement textures?\n\nOnly the files the pack installed are deleted. The game itself is not touched.", "Uninstall texture pack", MessageBoxButton.OKCancel, MessageBoxImage.Question) != MessageBoxResult.OK) return;
            Game.RemovePack(ini);
            Render();
            Flash("Texture pack removed.");
        }

        void Play()
        {
            if (busy) { Flash("Please wait for the texture pack to finish installing.", true); return; }
            if (!SaveAll()) return;
            try
            {
                var info = new ProcessStartInfo(Game.Exe) { WorkingDirectory = Game.Dir, UseShellExecute = false };
                string root = System.IO.Path.Combine(Game.Dir, "PSP_DATA");
                string elf = System.IO.Path.Combine(root, "PSP_GAME", "SYSDIR", "EBOOT_DECRYPTED.ELF");
                string chosen = prefs.Get("gamefolder", "");
                if (!File.Exists(elf) && chosen.Length != 0 && File.Exists(System.IO.Path.Combine(chosen, "PSP_GAME", "SYSDIR", "EBOOT_DECRYPTED.ELF")))
                { root = chosen; elf = System.IO.Path.Combine(chosen, "PSP_GAME", "SYSDIR", "EBOOT_DECRYPTED.ELF"); }
                if (!File.Exists(elf))
                {
                    var pick = new System.Windows.Forms.FolderBrowserDialog { Description = "PSP_DATA was not found next to the game. Choose the folder that contains PSP_GAME." };
                    if (pick.ShowDialog() != System.Windows.Forms.DialogResult.OK) return;
                    root = pick.SelectedPath;
                    elf = System.IO.Path.Combine(root, "PSP_GAME", "SYSDIR", "EBOOT_DECRYPTED.ELF");
                    if (!File.Exists(elf)) { Flash("That folder has no PSP_GAME\\SYSDIR\\EBOOT_DECRYPTED.ELF.", true, 8000); return; }
                    prefs.Set("gamefolder", root); prefs.Save();
                }
                if (System.IO.Path.GetFullPath(root).TrimEnd('\\') != System.IO.Path.GetFullPath(System.IO.Path.Combine(Game.Dir, "PSP_DATA")).TrimEnd('\\'))
                    info.Arguments = "\"" + elf + "\" \"" + root + "\"";

                // Launch settings that are environment variables in the game.
                Action<string, string> env = (k, v) => info.EnvironmentVariables[k] = v;
                string gpu = prefs.Get("gpu", "");
                if (gpu.Length != 0) env("PSPRECOMP_VULKAN_DEVICE", gpu);
                string mode = prefs.Get("present", "fifo");
                if (mode != "fifo") env("PSPRECOMP_VULKAN_PRESENT_MODE", mode);
                string sc = prefs.Get("swapchain", "auto");
                if (sc != "auto") env("PSPRECOMP_VULKAN_SWAPCHAIN", sc);
                if (!prefs.Bool("async", true)) env("PSPRECOMP_GE_ASYNC", "0");
                if (!prefs.Bool("paralleldecode", true)) env("PSPRECOMP_GE_PARALLEL_VERTEX_DECODE", "0");

                Process.Start(info);
                Application.Current.Shutdown();
            }
            catch (Exception e) { Flash("Could not launch VCSNative: " + e.Message, true, 10000); }
        }
    }

    static class Program
    {
        [STAThread]
        static int Main()
        {
            var app = new Application();
            app.ShutdownMode = ShutdownMode.OnMainWindowClose;
            return app.Run(new MainWindow());
        }
    }
}
