// Windows process-level guards that must run before anything else in VCSNative.exe.
//
// 1. CPU capability check. The generated code and the host are built for a Haswell-class baseline
//    when PSPRECOMP_NATIVE_AVX2 is on (AVX2, FMA, BMI1/2, LZCNT, F16C, MOVBE, POPCNT: what clang-cl's
//    /arch:AVX2 implies) and for AVX otherwise. On a CPU without them the first such instruction
//    raises STATUS_ILLEGAL_INSTRUCTION somewhere deep inside recompiled code, so the game just
//    disappears with no explanation. This checks first and says what is missing.
// 2. The two well-known exports that tell NVIDIA Optimus and AMD PowerXpress laptops to run this
//    program on the discrete GPU.
//
// This file is compiled for the plain x86-64 baseline (see CMakeLists.txt) so that the check itself can
// never execute an instruction the CPU lacks, and it uses init_seg(compiler) so its constructor runs
// before the constructors of every other translation unit. Set PSPRECOMP_SKIP_CPU_CHECK=1 to bypass.

#ifndef NOMINMAX
#define NOMINMAX
#endif
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>
#include <intrin.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#pragma warning(disable : 4073)
#pragma init_seg(compiler)

extern "C" {
// Hybrid-graphics laptops: prefer the high-performance GPU for this executable.
__declspec(dllexport) DWORD NvOptimusEnablement = 0x00000001;
__declspec(dllexport) int AmdPowerXpressRequestHighPerformance = 1;
}

#ifndef VCS_REQUIRE_AVX2
#define VCS_REQUIRE_AVX2 1
#endif

namespace {

struct CpuGuard {
    CpuGuard() noexcept {
        char skip[8] = {};
        if (GetEnvironmentVariableA("PSPRECOMP_SKIP_CPU_CHECK", skip, sizeof(skip)) != 0 && skip[0] == '1') return;

        char missing[256] = {};
        const auto add = [&missing](const char *name) {
            if (missing[0] != '\0') std::strncat(missing, ", ", sizeof(missing) - std::strlen(missing) - 1);
            std::strncat(missing, name, sizeof(missing) - std::strlen(missing) - 1);
        };

        int regs[4] = {};
        __cpuid(regs, 0);
        const int max_leaf = regs[0];
        __cpuid(regs, 1);
        const unsigned ecx1 = static_cast<unsigned>(regs[2]);
        const bool osxsave = (ecx1 & (1u << 27)) != 0u;
        const bool avx = (ecx1 & (1u << 28)) != 0u;
        // The OS has to save the YMM state too, or AVX code corrupts registers on a context switch.
        const bool ymm_enabled = osxsave && (_xgetbv(0) & 0x6u) == 0x6u;
        if (!avx || !ymm_enabled) add("AVX");

#if VCS_REQUIRE_AVX2
        unsigned ebx7 = 0u;
        if (max_leaf >= 7) {
            __cpuidex(regs, 7, 0);
            ebx7 = static_cast<unsigned>(regs[1]);
        }
        if ((ebx7 & (1u << 5)) == 0u) add("AVX2");
        if ((ecx1 & (1u << 12)) == 0u) add("FMA");
        if ((ebx7 & (1u << 3)) == 0u) add("BMI1");
        if ((ebx7 & (1u << 8)) == 0u) add("BMI2");
        if ((ecx1 & (1u << 29)) == 0u) add("F16C");
        if ((ecx1 & (1u << 22)) == 0u) add("MOVBE");
        if ((ecx1 & (1u << 23)) == 0u) add("POPCNT");
        __cpuid(regs, static_cast<int>(0x80000000u));
        bool lzcnt = false;
        if (static_cast<unsigned>(regs[0]) >= 0x80000001u) {
            __cpuid(regs, static_cast<int>(0x80000001u));
            lzcnt = (static_cast<unsigned>(regs[2]) & (1u << 5)) != 0u;
        }
        if (!lzcnt) add("LZCNT");
        const char *level = "AVX2 (Intel Haswell / AMD Excavator or newer, 2013+)";
#else
        const char *level = "AVX (Intel Sandy Bridge / AMD Bulldozer or newer, 2011+)";
#endif
        if (missing[0] == '\0') return;

        char text[768];
        std::snprintf(text, sizeof(text),
                      "This build of VCSNative needs a CPU with %s.\n\n"
                      "Missing on this processor: %s.\n\n"
                      "The game cannot run here and will close. (In a virtual machine, make sure the host's "
                      "CPU features are passed through.)",
                      level, missing);
        MessageBoxA(nullptr, text, "VCSNative - unsupported CPU", MB_OK | MB_ICONERROR);
        ExitProcess(1);
    }
};

CpuGuard g_cpu_guard;

} // namespace
