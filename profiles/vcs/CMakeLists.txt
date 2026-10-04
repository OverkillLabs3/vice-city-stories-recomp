set(VCS_PROFILE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

# Keep the enormous generated AOT corpus out of MSVC whole-program/LTCG IR by
# default.  Stage 45.8/45.9 cross-unit state makes whole-program analysis of all
# 234 generated units extremely memory hungry on Windows.  The AOT units are
# still fully optimized per translation unit; host/runtime code may still use
# PSPRECOMP_LTO.
option(PSPRECOMP_VCS_AOT_LTO
    "Include generated VCS AOT units in MSVC whole-program optimization" OFF)

option(PSPRECOMP_PROFILE_GUIDED_AOT
    "Optimize the measured VCS hot AOT units above the base generated level" ON)
set(PSPRECOMP_HOT_GENERATED_OPT_LEVEL "2" CACHE STRING
    "Optimization level for profile-guided VCS AOT units (0, 1, 2 or 3)")
set_property(CACHE PSPRECOMP_HOT_GENERATED_OPT_LEVEL PROPERTY STRINGS 0 1 2 3)
if(NOT PSPRECOMP_HOT_GENERATED_OPT_LEVEL MATCHES "^[0-3]$")
    message(FATAL_ERROR "PSPRECOMP_HOT_GENERATED_OPT_LEVEL must be 0, 1, 2 or 3")
endif()

# Full /Ob3 is valuable at runtime but several large, cold units still make
# MSVC spend minutes and close to a gigabyte per compiler process. Keep those
# units buildable, then override this level only for the measured hot corpus.
set(PSPRECOMP_GENERATED_INLINE_LEVEL "0" CACHE STRING
    "MSVC /Ob level for generated VCS AOT units (0, 1, 2 or 3)")
set_property(CACHE PSPRECOMP_GENERATED_INLINE_LEVEL PROPERTY STRINGS 0 1 2 3)
if(NOT PSPRECOMP_GENERATED_INLINE_LEVEL MATCHES "^[0-3]$")
    message(FATAL_ERROR "PSPRECOMP_GENERATED_INLINE_LEVEL must be 0, 1, 2 or 3")
endif()
set(PSPRECOMP_HOT_GENERATED_INLINE_LEVEL "3" CACHE STRING
    "MSVC /Ob level for measured hot VCS AOT units (0, 1, 2 or 3)")
set_property(CACHE PSPRECOMP_HOT_GENERATED_INLINE_LEVEL PROPERTY STRINGS 0 1 2 3)
if(NOT PSPRECOMP_HOT_GENERATED_INLINE_LEVEL MATCHES "^[0-3]$")
    message(FATAL_ERROR "PSPRECOMP_HOT_GENERATED_INLINE_LEVEL must be 0, 1, 2 or 3")
endif()

file(GLOB VCS_GENERATED CONFIGURE_DEPENDS "${VCS_PROFILE_DIR}/generated/*.cpp")

# Windows: compile the generated AOT corpus with clang-cl (the ClangCL toolset that ships with Visual
# Studio) instead of cl.exe. The units are enormous single functions; MSVC stops inlining inside them
# (its per-function inline budget) so every guest load/store and VFPU helper stays a real call, even at
# /Ob3 and even for __forceinline. Clang has no such limit and is the compiler the macOS build uses.
# Host and runtime code still build with MSVC. Falls back to the plain MSVC path when the toolset is
# not installed or the generator is not Visual Studio. PSPRECOMP_VCS_CLANG_AOT=OFF forces MSVC.
option(PSPRECOMP_VCS_CLANG_AOT "Compile the generated VCS units with the ClangCL toolset (MSVC builds)" ON)
set(VCS_CLANG_AOT OFF)
if(MSVC AND PSPRECOMP_VCS_CLANG_AOT AND CMAKE_GENERATOR MATCHES "Visual Studio" AND CMAKE_GENERATOR_INSTANCE)
    if(EXISTS "${CMAKE_GENERATOR_INSTANCE}/VC/Tools/Llvm/x64/bin/clang-cl.exe" AND
       EXISTS "${CMAKE_GENERATOR_INSTANCE}/MSBuild/Microsoft/VC/v170/Platforms/x64/PlatformToolsets/ClangCL")
        set(VCS_CLANG_AOT ON)
    endif()
endif()
message(STATUS "VCS generated AOT compiler: ${VCS_CLANG_AOT} (ON = clang-cl, OFF = default compiler)")

if(MSVC AND NOT VCS_CLANG_AOT)
    if(PSPRECOMP_GENERATED_OPT_LEVEL STREQUAL "0")
        set(VCS_GENERATED_MSVC_OPT "/Od")
    elseif(PSPRECOMP_GENERATED_OPT_LEVEL STREQUAL "3")
        set(VCS_GENERATED_MSVC_OPT "/Ox")
    else()
        set(VCS_GENERATED_MSVC_OPT "/O${PSPRECOMP_GENERATED_OPT_LEVEL}")
    endif()
    set(VCS_GENERATED_MSVC_OPTIONS
        "${VCS_GENERATED_MSVC_OPT};/Ob${PSPRECOMP_GENERATED_INLINE_LEVEL};/bigobj;${PSPRECOMP_MSVC_MP_FLAG}")
    if(PSPRECOMP_LTO AND NOT PSPRECOMP_VCS_AOT_LTO)
        # CMAKE_INTERPROCEDURAL_OPTIMIZATION adds /GL at target scope.  /GL- on
        # these sources overrides it so the linker receives native .obj code
        # instead of 234 giant LTCG IR modules.
        string(APPEND VCS_GENERATED_MSVC_OPTIONS ";/GL-")
    endif()
    set_source_files_properties(${VCS_GENERATED} PROPERTIES COMPILE_OPTIONS
        "${VCS_GENERATED_MSVC_OPTIONS}")
else()
    set_source_files_properties(${VCS_GENERATED} PROPERTIES COMPILE_OPTIONS
        "-O${PSPRECOMP_GENERATED_OPT_LEVEL};-g0")
endif()

if(PSPRECOMP_PROFILE_GUIDED_AOT AND NOT VCS_CLANG_AOT)
    # This unit is hot in the current capture and finishes /Ob3 without
    # triggering MSVC's pathological optimizer growth. It also contains the
    # validated native collision leaf at guest PC 0x088B1554. Other measured
    # units remain /Ob0 until their oversized helpers are split/noinline.
    set(VCS_HOT_UNIT_IDS
        0043)
    if(MSVC)
        # MSVC compiles the generated corpus at /Ob0 (no inlining, not even __forceinline), which
        # leaves every guest load/store and VFPU helper as a real call in the units below. A sampling
        # profile of the Windows Vulkan build in gameplay put ~95% of the vblank thread in guest code
        # and ~20% of it in those un-inlined helpers. These units account for 56% of the samples and
        # each compiles at /Ob3 in 10-20 s (checked one by one), so they get the hot-unit treatment.
        # macOS/clang keeps its own settings: this list only applies to MSVC.
        list(APPEND VCS_HOT_UNIT_IDS
            0129 0142 0092 0163 0044 0023 0154 0024 0173 0152 0093 0085 0089 0018 0162 0179 0022
            0186 0165 0086 0199 0091 0169 0095 0150 0087 0005 0141 0007 0006 0198 0067 0155 0084
            0075 0153 0149 0158 0174 0189 0030 0036 0002 0066 0035 0037 0038 0069 0088 0113 0188
            0215)
    endif()
    set(VCS_HOT_SOURCES)
    foreach(VCS_UNIT_ID IN LISTS VCS_HOT_UNIT_IDS)
        set(VCS_UNIT_SOURCE "${VCS_PROFILE_DIR}/generated/generated_unit_${VCS_UNIT_ID}.cpp")
        if(NOT EXISTS "${VCS_UNIT_SOURCE}")
            message(FATAL_ERROR "VCS profile-guided AOT unit is missing: ${VCS_UNIT_SOURCE}")
        endif()
        list(APPEND VCS_HOT_SOURCES "${VCS_UNIT_SOURCE}")
    endforeach()
    if(MSVC)
        if(PSPRECOMP_HOT_GENERATED_OPT_LEVEL STREQUAL "0")
            set(VCS_HOT_MSVC_OPT "/Od")
        elseif(PSPRECOMP_HOT_GENERATED_OPT_LEVEL STREQUAL "3")
            set(VCS_HOT_MSVC_OPT "/Ox")
        else()
            set(VCS_HOT_MSVC_OPT "/O${PSPRECOMP_HOT_GENERATED_OPT_LEVEL}")
        endif()
        set(VCS_HOT_MSVC_OPTIONS
            "${VCS_HOT_MSVC_OPT};/Ob${PSPRECOMP_HOT_GENERATED_INLINE_LEVEL};/bigobj;${PSPRECOMP_MSVC_MP_FLAG}")
        if(PSPRECOMP_LTO AND NOT PSPRECOMP_VCS_AOT_LTO)
            string(APPEND VCS_HOT_MSVC_OPTIONS ";/GL-")
        endif()
        set_source_files_properties(${VCS_HOT_SOURCES} PROPERTIES COMPILE_OPTIONS
            "${VCS_HOT_MSVC_OPTIONS}")
    else()
        set_source_files_properties(${VCS_HOT_SOURCES} PROPERTIES COMPILE_OPTIONS
            "-O${PSPRECOMP_HOT_GENERATED_OPT_LEVEL};-g0")
    endif()
endif()

if(MSVC AND PSPRECOMP_NATIVE_AVX2 AND NOT VCS_CLANG_AOT)
    # MSVC 19.44's AVX2 optimizer crashes (C1001/c2.dll) on this translation
    # unit, while the identical /Ox /Ob0 compile completes in ~3 s with AVX.
    # Keep AVX2 for the host and the other AOT units; append the weaker ISA only
    # to the known compiler-bug trigger (the last /arch switch wins in cl.exe).
    set(PSPRECOMP_VCS_MSVC_AVX_FALLBACK_UNITS "0018;0022;0035;0089;0091;0117;0164" CACHE STRING
        "Generated VCS units forced to AVX because MSVC 19.44 crashes with AVX2")
    set(VCS_MSVC_AVX_FALLBACK_SOURCES)
    foreach(VCS_UNIT_ID IN LISTS PSPRECOMP_VCS_MSVC_AVX_FALLBACK_UNITS)
        set(VCS_UNIT_SOURCE "${VCS_PROFILE_DIR}/generated/generated_unit_${VCS_UNIT_ID}.cpp")
        if(NOT EXISTS "${VCS_UNIT_SOURCE}")
            message(FATAL_ERROR "VCS AVX fallback unit is missing: ${VCS_UNIT_SOURCE}")
        endif()
        list(APPEND VCS_MSVC_AVX_FALLBACK_SOURCES "${VCS_UNIT_SOURCE}")
    endforeach()
    set_property(SOURCE ${VCS_MSVC_AVX_FALLBACK_SOURCES} APPEND PROPERTY
        COMPILE_OPTIONS "/arch:AVX")
endif()

        # vcs_profile.cpp used to be force-built at -O2 here (undocumented,
        # no comment explaining why) even in Release, silently downgrading
        # the exact file containing the hot GE display-list interpreter
        # (execute_ge_list, the per-vertex/per-command switch loop) below
        # whatever CMAKE_BUILD_TYPE=Release would otherwise give it (-O3 for
        # Clang/GCC). Confirmed building fine at Release's normal level;
        # removed rather than kept as a stale, unexplained downgrade.

# Graphics backend and platform layer are chosen automatically from the machine doing the build:
#
#   macOS    -> Vulkan (MoltenVK) + platform/macos
#   Windows  -> Vulkan + platform/windows when the Vulkan SDK (glslc) is installed, because that is
#               the backend that carries the whole graphics stack, texture pack and performance
#               work; otherwise DirectX 12 (the older, smaller backend) so a build never fails just
#               for lack of the SDK
#   other    -> Vulkan + platform/generic (CPU readback present)
#
# PSPRECOMP_VCS_GE_BACKEND=VULKAN or DX12 overrides the choice on Windows.
# (PSPRECOMP_VCS_WIN32_VULKAN=ON is still accepted and means VULKAN.)
set(PSPRECOMP_VCS_GE_BACKEND "AUTO" CACHE STRING
    "GE backend: AUTO, VULKAN or DX12 (DX12 only exists on Windows)")
set_property(CACHE PSPRECOMP_VCS_GE_BACKEND PROPERTY STRINGS AUTO VULKAN DX12)
if(PSPRECOMP_VCS_WIN32_VULKAN)
    set(PSPRECOMP_VCS_GE_BACKEND "VULKAN")
endif()
if(NOT WIN32)
    set(VCS_BACKEND_CHOICE "VULKAN")
elseif(PSPRECOMP_VCS_GE_BACKEND STREQUAL "DX12" OR PSPRECOMP_VCS_GE_BACKEND STREQUAL "VULKAN")
    set(VCS_BACKEND_CHOICE "${PSPRECOMP_VCS_GE_BACKEND}")
else()
    find_package(Vulkan QUIET)
    find_program(VCS_GLSLC_PROBE NAMES glslc HINTS "$ENV{VULKAN_SDK}/bin" "$ENV{VULKAN_SDK}/Bin")
    if(Vulkan_FOUND AND VCS_GLSLC_PROBE)
        set(VCS_BACKEND_CHOICE "VULKAN")
    else()
        set(VCS_BACKEND_CHOICE "DX12")
        message(WARNING "Vulkan SDK (with glslc) not found: building the DirectX 12 backend, which "
                "does NOT include the graphics stack or texture pack. Install the Vulkan SDK "
                "(https://vulkan.lunarg.com/) and reconfigure for the full build.")
    endif()
endif()
message(STATUS "VCS graphics backend: ${VCS_BACKEND_CHOICE}")

if(VCS_BACKEND_CHOICE STREQUAL "DX12")
    set(VCS_GPU_BACKEND_SOURCE host/ge_gpu_backend_dx12.cpp)
    set(VCS_USE_VULKAN_BACKEND FALSE)
else()
    set(VCS_GPU_BACKEND_SOURCE host/ge_gpu_backend_vulkan.cpp)
    set(VCS_USE_VULKAN_BACKEND TRUE)
    # The Vulkan backend is platform-neutral; exactly one platform layer is compiled with it.
    if(APPLE)
        set(VCS_VULKAN_PLATFORM_SOURCE platform/macos/vulkan_platform_metal.cpp)
    elseif(WIN32)
        set(VCS_VULKAN_PLATFORM_SOURCE platform/windows/vulkan_platform_win32.cpp)
    else()
        set(VCS_VULKAN_PLATFORM_SOURCE platform/generic/vulkan_platform_stub.cpp)
    endif()
    find_package(Vulkan REQUIRED)

    # GLSL -> SPIR-V -> C header, compiled at build time. glslc ships with the
    # Vulkan SDK and with Homebrew's shaderc formula. The LunarG Windows SDK
    # installer sets VULKAN_SDK with capital "Bin" (vs. Homebrew's lowercase
    # "bin" on macOS) -- both hints are listed so this works on either.
    find_program(VCS_GLSLC NAMES glslc
        HINTS "$ENV{VULKAN_SDK}/bin" "$ENV{VULKAN_SDK}/Bin" /opt/homebrew/bin /usr/local/bin)
    if(NOT VCS_GLSLC)
        message(FATAL_ERROR
            "glslc not found; it compiles the Vulkan GE shaders. Install it with "
            "`brew install shaderc`, or from the Vulkan SDK (https://vulkan.lunarg.com/, "
            "sets VULKAN_SDK automatically on Windows), or set VCS_GLSLC.")
    endif()

    set(VCS_SHADER_OUTPUT_DIR "${CMAKE_CURRENT_BINARY_DIR}/vcs_shaders")
    file(MAKE_DIRECTORY "${VCS_SHADER_OUTPUT_DIR}")
    set(VCS_SHADER_HEADERS)
    # (source stem, glslc stage extension, generated symbol) triples, kept in
    # step with the #includes in ge_gpu_backend_vulkan.cpp. psp_ge_hw and
    # psp_ge_hw_packed0115 are the GPU hardware-transform vertex shaders
    # (model->clip transform done on the GPU instead of ge_renderer.cpp's CPU
    # loop); both share psp_ge.frag unchanged, so only new vertex stages are
    # needed here.
    # bloom.vert/frag: the experimental single-pass bright-pass/blur post
    # process (see [SimulateHDR] in the .ini and ge_gpu_backend_vulkan.cpp's
    # bloom_* state) -- same build-time GLSL->SPIR-V->header pipeline as the
    # GE shaders above, just two more entries.
    # present.frag: the native-swapchain migration's plain blit/upscale
    # fragment shader (see ge_gpu_backend_vulkan.cpp's swapchain_* state) --
    # shares bloom.vert's fullscreen-triangle vertex stage, no new one needed.
    # fxaa.frag: single-pass FXAA anti-aliasing (Rendering.SMAA/AntiAliasing
    # in the .ini), same fullscreen-triangle vertex stage too.
    # color_grade.frag: parametric color grading ([ColorGrading] in the
    # .ini), same fullscreen-triangle vertex stage.
    # cloud_march/cloud_resolve/cloud_composite.frag: the CloudWorks
    # volumetric cloud port ([VolumetricClouds] in ProperShaders.ini, see
    # ge_cloudworks_present_shader.hpp for the HLSL source of truth) -- share
    # bloom.vert's fullscreen-triangle vertex stage too (they read
    # gl_FragCoord directly, never the vertex-interpolated UV).
    set(VCS_SHADER_STEMS psp_ge psp_ge psp_ge_hw psp_ge_hw_packed0115 bloom bloom present fxaa
        color_grade cloud_march cloud_resolve cloud_composite smaa_edge smaa_weights smaa_blend sky_palette)
    set(VCS_SHADER_EXTS vert frag vert vert vert frag frag frag frag frag frag frag frag frag frag frag)
    set(VCS_SHADER_SYMBOLS kPspGeVertSpv kPspGeFragSpv kPspGeHwVertSpv kPspGeHwPacked0115VertSpv
        kBloomVertSpv kBloomFragSpv kPresentFragSpv kFxaaFragSpv kColorGradeFragSpv
        kCloudMarchFragSpv kCloudResolveFragSpv kCloudCompositeFragSpv
        kSmaaEdgeFragSpv kSmaaWeightsFragSpv kSmaaBlendFragSpv kSkyPaletteFragSpv)
    list(LENGTH VCS_SHADER_STEMS VCS_SHADER_COUNT)
    math(EXPR VCS_SHADER_LAST "${VCS_SHADER_COUNT} - 1")
    foreach(VCS_SHADER_INDEX RANGE ${VCS_SHADER_LAST})
        list(GET VCS_SHADER_STEMS ${VCS_SHADER_INDEX} VCS_SHADER_STEM)
        list(GET VCS_SHADER_EXTS ${VCS_SHADER_INDEX} VCS_SHADER_EXT)
        list(GET VCS_SHADER_SYMBOLS ${VCS_SHADER_INDEX} VCS_SHADER_SYMBOL)
        set(VCS_SHADER_SOURCE "${VCS_PROFILE_DIR}/host/shaders/${VCS_SHADER_STEM}.${VCS_SHADER_EXT}")
        set(VCS_SHADER_HEADER "${VCS_SHADER_OUTPUT_DIR}/${VCS_SHADER_STEM}_${VCS_SHADER_EXT}_spv.h")
        add_custom_command(
            OUTPUT "${VCS_SHADER_HEADER}"
            COMMAND "${VCS_GLSLC}" -O
                    -mfmt=c
                    --target-env=vulkan1.1
                    -I "${VCS_PROFILE_DIR}/host/shaders"
                    -o "${VCS_SHADER_HEADER}.inc"
                    "${VCS_SHADER_SOURCE}"
            # -mfmt=c emits a bare {0x07230203, ...} initializer list; wrap it
            # in a declaration so the backend can include it directly.
            COMMAND ${CMAKE_COMMAND} -E echo "#pragma once" > "${VCS_SHADER_HEADER}"
            COMMAND ${CMAKE_COMMAND} -E echo "#include <cstdint>" >> "${VCS_SHADER_HEADER}"
            COMMAND ${CMAKE_COMMAND} -E echo
                    "static const std::uint32_t ${VCS_SHADER_SYMBOL}[] =" >> "${VCS_SHADER_HEADER}"
            COMMAND ${CMAKE_COMMAND} -E cat "${VCS_SHADER_HEADER}.inc" >> "${VCS_SHADER_HEADER}"
            COMMAND ${CMAKE_COMMAND} -E echo ";" >> "${VCS_SHADER_HEADER}"
            DEPENDS "${VCS_SHADER_SOURCE}" "${VCS_PROFILE_DIR}/host/shaders/SMAA.h"
            COMMENT "Compiling ${VCS_SHADER_STEM}.${VCS_SHADER_EXT} to SPIR-V"
            VERBATIM)
        list(APPEND VCS_SHADER_HEADERS "${VCS_SHADER_HEADER}")
    endforeach()
    add_custom_target(vcs_ge_shaders DEPENDS ${VCS_SHADER_HEADERS})
endif()
# Each platform has its own window/input/present layer (and, with Vulkan, its own surface layer).
# Exactly one is compiled, chosen by the machine doing the build.
if(WIN32)
    set(VCS_DISPLAY_WINDOW_SOURCE platform/windows/display_window_win32.cpp)
elseif(APPLE)
    set(VCS_DISPLAY_WINDOW_SOURCE platform/macos/display_window_sdl.cpp)
else()
    set(VCS_DISPLAY_WINDOW_SOURCE platform/generic/display_window_stub.cpp)
endif()
set(VCS_HDR_POST_SOURCE host/vcs_hdr_post_dx12_stub.cpp)
set(VCS_HOST_SOURCES
    host/vcs_bootstrap_paths.cpp
    host/vcs_profile.cpp
    host/vcs_native_fast_paths.cpp
    host/framebuffer_capture.cpp
    ${VCS_DISPLAY_WINDOW_SOURCE}
    host/audio_output.cpp
    host/vcs_config.cpp
    host/vcs_texture_replace.cpp
    host/vcs_key_prompts.cpp
    host/vcs_camera_input.cpp
    host/vcs_vehicle_input.cpp
    host/vcs_fps_overlay.cpp
    host/vcs_media_decoder.cpp
    host/vcs_project2dfx.cpp
    host/vcs_project2dfx_lights.cpp
    host/vcs_draw_distance_patch.cpp
    host/vcs_runtime_log.cpp
    ${VCS_HDR_POST_SOURCE}
    host/ge_renderer.cpp
    ${VCS_GPU_BACKEND_SOURCE}
    ${VCS_VULKAN_PLATFORM_SOURCE}
    host/dx12_presenter.cpp
)
if(APPLE)
    # Objective-C++: lets Metal HUD report the game's real internal render
    # resolution instead of the display's, by setting the SDL-created
    # CAMetalLayer's drawableSize explicitly. See metal_drawable_size.h.
    list(APPEND VCS_HOST_SOURCES platform/macos/metal_drawable_size.mm)
endif()

function(vcs_target_common target)
    target_include_directories(${target} PRIVATE
        "${VCS_PROFILE_DIR}/host"
        "${VCS_PROFILE_DIR}/generated"
        "${VCS_PROFILE_DIR}/third_party/ffmpeg/include")
    target_link_libraries(${target} PRIVATE psprecomp_core ${CMAKE_DL_LIBS})
    if(APPLE)
        target_include_directories(${target} PRIVATE "${VCS_PROFILE_DIR}/platform/macos")
    endif()
    # Link whichever GE backend was actually selected above (VCS_USE_VULKAN_BACKEND),
    # not just "not Windows" -- PSPRECOMP_VCS_WIN32_VULKAN can select Vulkan on
    # Windows too, and DX12 libs must not be linked in that case (nothing in
    # the source needs them when ge_gpu_backend_dx12.cpp isn't compiled in).
    if(VCS_USE_VULKAN_BACKEND)
        target_link_libraries(${target} PRIVATE Vulkan::Vulkan)
        target_include_directories(${target} PRIVATE "${VCS_SHADER_OUTPUT_DIR}")
        add_dependencies(${target} vcs_ge_shaders)
    endif()
    if(WIN32)
        # host/dx12_presenter.cpp is compiled on every Windows build (video and software-frame
        # present), so the D3D12/DXGI libraries are needed with the Vulkan backend too.
        target_link_libraries(${target} PRIVATE d3d12 dxgi d3dcompiler dxguid)
        foreach(VCS_FFMPEG_LIB avcodec avformat avutil swresample swscale)
            target_link_libraries(${target} PRIVATE
                "${VCS_PROFILE_DIR}/third_party/ffmpeg/lib/${VCS_FFMPEG_LIB}.lib")
        endforeach()
        # winmm is used by the Windows audio/timer path regardless of which
        # GE backend is selected.
        target_link_libraries(${target} PRIVATE winmm)
    elseif(APPLE)
        # /opt/homebrew (Apple Silicon) is not on CMake's default search path;
        # /usr/local covers Intel Macs and anyone who relocated Homebrew there.
        list(APPEND CMAKE_PREFIX_PATH /opt/homebrew /usr/local)
        # metal_drawable_size.mm sets CAMetalLayer.drawableSize directly.
        find_library(VCS_QUARTZCORE QuartzCore REQUIRED)
        target_link_libraries(${target} PRIVATE ${VCS_QUARTZCORE})
        # vcs_config.cpp's InternalResolutionMode::Desktop case queries the
        # real display via CGDisplayPixelsWide/High (CoreGraphics) instead of
        # silently falling back to whatever InternalWidth/InternalHeight the
        # .ini happens to have -- confirmed that fallback was firing on every
        # Mac regardless of actual display size.
        find_library(VCS_COREGRAPHICS CoreGraphics REQUIRED)
        target_link_libraries(${target} PRIVATE ${VCS_COREGRAPHICS})

        # display_window.cpp/audio_output.cpp's Apple branch is SDL2-based.
        find_package(SDL2 REQUIRED)
        if(TARGET SDL2::SDL2)
            target_link_libraries(${target} PRIVATE SDL2::SDL2)
        else()
            # Older Homebrew SDL2 casks/FindSDL2 modules without the modern
            # SDL2::SDL2 CMake package config target.
            target_include_directories(${target} PRIVATE ${SDL2_INCLUDE_DIRS})
            target_link_libraries(${target} PRIVATE ${SDL2_LIBRARIES})
        endif()

        # Homebrew's FFmpeg ships plain .dylib names, but its prefix (Apple
        # Silicon vs Intel) is not always on CMake's default search path.
        set(VCS_FFMPEG_HOMEBREW_HINTS /opt/homebrew/lib /usr/local/lib)
        # A distributable build links our own LGPL FFmpeg 7.1 (see scripts/macos_release.sh) instead
        # of Homebrew's GPL build, so it can be bundled inside the app.
        set(VCS_FFMPEG_MACOS_PREFIX "" CACHE PATH "FFmpeg 7.1 install prefix to link on macOS (empty = Homebrew)")
        foreach(VCS_FFMPEG_LIB avcodec avformat avutil swresample swscale)
            if(VCS_FFMPEG_MACOS_PREFIX)
                find_library(VCS_SYSTEM_${VCS_FFMPEG_LIB}
                    NAMES ${VCS_FFMPEG_LIB}
                    PATHS "${VCS_FFMPEG_MACOS_PREFIX}/lib"
                    NO_DEFAULT_PATH
                    REQUIRED)
            else()
                find_library(VCS_SYSTEM_${VCS_FFMPEG_LIB}
                    NAMES ${VCS_FFMPEG_LIB}
                    HINTS ${VCS_FFMPEG_HOMEBREW_HINTS}
                    REQUIRED)
            endif()
            target_link_libraries(${target} PRIVATE ${VCS_SYSTEM_${VCS_FFMPEG_LIB}})
        endforeach()
    else()
        # The profile vendors FFmpeg 7 headers. Some validation hosts install only
        # the versioned runtime sonames (without development symlinks), so accept
        # the matching FFmpeg 7 ABI names as fallbacks.
        set(VCS_FFMPEG_avcodec_NAMES avcodec libavcodec.so.61)
        set(VCS_FFMPEG_avformat_NAMES avformat libavformat.so.61)
        set(VCS_FFMPEG_avutil_NAMES avutil libavutil.so.59)
        set(VCS_FFMPEG_swresample_NAMES swresample libswresample.so.5)
        set(VCS_FFMPEG_swscale_NAMES swscale libswscale.so.8)
        foreach(VCS_FFMPEG_LIB avcodec avformat avutil swresample swscale)
            find_library(VCS_SYSTEM_${VCS_FFMPEG_LIB}
                NAMES ${VCS_FFMPEG_${VCS_FFMPEG_LIB}_NAMES}
                REQUIRED)
            target_link_libraries(${target} PRIVATE ${VCS_SYSTEM_${VCS_FFMPEG_LIB}})
        endforeach()
    endif()
    psprecomp_enable_host_avx(${target})
endfunction()


function(vcs_set_runtime_output target)
    set_target_properties(${target} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/$<CONFIG>")
endfunction()

set(VCS_APP_RESOURCES)
if(WIN32)
    list(APPEND VCS_APP_RESOURCES resources/VCSNative.rc)
endif()

set(VCS_GENERATED_FOR_EXE ${VCS_GENERATED})
# Host sources of the game exe only. The test executables keep using the full VCS_HOST_SOURCES list.
set(VCS_HOST_SOURCES_EXE ${VCS_HOST_SOURCES})
if(VCS_CLANG_AOT)
    # The corpus is split into shards, one Visual Studio project each, because MSBuild parallelises
    # across projects (cl.exe /MP does not apply to the ClangCL toolset). Build with /m:<jobs>.
    set(VCS_AOT_SHARD_COUNT 12 CACHE STRING "Number of parallel clang-cl projects for the generated units")
    math(EXPR VCS_AOT_SHARD_LAST "${VCS_AOT_SHARD_COUNT} - 1")
    set(VCS_AOT_INDEX 0)
    foreach(VCS_AOT_SOURCE IN LISTS VCS_GENERATED)
        math(EXPR VCS_AOT_SHARD "${VCS_AOT_INDEX} % ${VCS_AOT_SHARD_COUNT}")
        list(APPEND VCS_AOT_SHARD_SOURCES_${VCS_AOT_SHARD} "${VCS_AOT_SOURCE}")
        math(EXPR VCS_AOT_INDEX "${VCS_AOT_INDEX} + 1")
    endforeach()
    set(VCS_GENERATED_FOR_EXE)
    foreach(VCS_AOT_SHARD RANGE 0 ${VCS_AOT_SHARD_LAST})
        if(NOT VCS_AOT_SHARD_SOURCES_${VCS_AOT_SHARD})
            continue()
        endif()
        set(VCS_AOT_TARGET vcs_aot_${VCS_AOT_SHARD})
        add_library(${VCS_AOT_TARGET} OBJECT ${VCS_AOT_SHARD_SOURCES_${VCS_AOT_SHARD}})
        set_target_properties(${VCS_AOT_TARGET} PROPERTIES
            VS_PLATFORM_TOOLSET ClangCL
            INTERPROCEDURAL_OPTIMIZATION OFF
            FOLDER "vcs_aot")
        target_include_directories(${VCS_AOT_TARGET} PRIVATE
            "${VCS_PROFILE_DIR}/host" "${VCS_PROFILE_DIR}/generated")
        target_link_libraries(${VCS_AOT_TARGET} PRIVATE psprecomp_core)
        # -O3 like the macOS build. -ffp-contract=off keeps float results identical to the MSVC/PSP
        # semantics the generated code was validated against (no fused multiply-add).
        target_compile_options(${VCS_AOT_TARGET} PRIVATE
            /clang:-O3 /clang:-ffp-contract=off /GL- -Wno-everything)
        list(APPEND VCS_GENERATED_FOR_EXE $<TARGET_OBJECTS:${VCS_AOT_TARGET}>)
    endforeach()

    # The software geometry pipeline (vertex decode, transform, lighting, triangle assembly) is the
    # other hot CPU code; it gets the same compiler.
    set(VCS_CLANG_HOST_SOURCES host/ge_renderer.cpp)
    list(REMOVE_ITEM VCS_HOST_SOURCES_EXE ${VCS_CLANG_HOST_SOURCES})
    add_library(vcs_host_clang OBJECT ${VCS_CLANG_HOST_SOURCES})
    set_target_properties(vcs_host_clang PROPERTIES
        VS_PLATFORM_TOOLSET ClangCL
        INTERPROCEDURAL_OPTIMIZATION OFF
        FOLDER "vcs_aot")
    target_include_directories(vcs_host_clang PRIVATE
        "${VCS_PROFILE_DIR}/host" "${VCS_PROFILE_DIR}/generated"
        "${VCS_PROFILE_DIR}/third_party/ffmpeg/include")
    target_link_libraries(vcs_host_clang PRIVATE psprecomp_core)
    target_compile_options(vcs_host_clang PRIVATE
        /clang:-O3 /clang:-ffp-contract=off /GL- -Wno-everything)
    list(APPEND VCS_GENERATED_FOR_EXE $<TARGET_OBJECTS:vcs_host_clang>)
endif()

if(WIN32 AND MSVC)
    # Startup CPU check and the Optimus/PowerXpress exports (see platform/windows/host_guard_win32.cpp).
    # Its own object library so the directory-wide /arch:AVX2 does not apply: the check must not itself
    # run an instruction that the CPU it is checking for might lack.
    add_library(vcs_host_guard OBJECT platform/windows/host_guard_win32.cpp)
    set_target_properties(vcs_host_guard PROPERTIES COMPILE_OPTIONS "" INTERPROCEDURAL_OPTIMIZATION OFF)
    if(PSPRECOMP_NATIVE_AVX2)
        target_compile_definitions(vcs_host_guard PRIVATE VCS_REQUIRE_AVX2=1)
    else()
        target_compile_definitions(vcs_host_guard PRIVATE VCS_REQUIRE_AVX2=0)
    endif()
    list(APPEND VCS_GENERATED_FOR_EXE $<TARGET_OBJECTS:vcs_host_guard>)
endif()

add_executable(VCSNative
    ${VCS_APP_RESOURCES}
    host/main.cpp
    ${VCS_HOST_SOURCES_EXE}
    ${VCS_GENERATED_FOR_EXE}
)
if(VCS_CLANG_AOT)
    foreach(VCS_AOT_SHARD RANGE 0 ${VCS_AOT_SHARD_LAST})
        if(TARGET vcs_aot_${VCS_AOT_SHARD})
            add_dependencies(VCSNative vcs_aot_${VCS_AOT_SHARD})
        endif()
    endforeach()
    add_dependencies(VCSNative vcs_host_clang)
endif()
vcs_target_common(VCSNative)
vcs_set_runtime_output(VCSNative)
if(WIN32)
    # Per-monitor DPI awareness (see the manifest). Link-only: no translation unit is recompiled.
    target_sources(VCSNative PRIVATE "${VCS_PROFILE_DIR}/platform/windows/VCSNative.manifest")
    # The launcher (launcher/windows) is built with the game and lands next to VCSNative.exe. It is a
    # WPF app compiled with the Roslyn compiler that ships with Visual Studio; if that compiler is not
    # found the build says so and carries on without a launcher.
    set(VCS_PF86 "$ENV{ProgramFiles\(x86\)}")
    set(VCS_CSC_HINTS)
    if(CMAKE_VS_MSBUILD_COMMAND)
        get_filename_component(VCS_MSBUILD_DIR "${CMAKE_VS_MSBUILD_COMMAND}" DIRECTORY)
        list(APPEND VCS_CSC_HINTS "${VCS_MSBUILD_DIR}/Roslyn")
    endif()
    foreach(VCS_VS_EDITION BuildTools Community Professional Enterprise)
        list(APPEND VCS_CSC_HINTS
            "${VCS_PF86}/Microsoft Visual Studio/2022/${VCS_VS_EDITION}/MSBuild/Current/Bin/Roslyn"
            "$ENV{ProgramFiles}/Microsoft Visual Studio/2022/${VCS_VS_EDITION}/MSBuild/Current/Bin/Roslyn")
    endforeach()
    find_program(VCS_CSC NAMES csc.exe HINTS ${VCS_CSC_HINTS} NO_DEFAULT_PATH)
    if(VCS_CSC)
        set(VCS_LAUNCHER_SRC "${VCS_PROFILE_DIR}/launcher/windows")
        add_custom_target(VCSLauncher
            COMMAND ${CMAKE_COMMAND} "-DCSC=${VCS_CSC}" "-DSRC_DIR=${VCS_LAUNCHER_SRC}"
                    "-DICON=${VCS_PROFILE_DIR}/resources/vcsnative.ico" "-DOUT=$<TARGET_FILE_DIR:VCSNative>"
                    -P "${VCS_LAUNCHER_SRC}/build_launcher.cmake"
            SOURCES "${VCS_LAUNCHER_SRC}/VCSLauncher.cs" "${VCS_LAUNCHER_SRC}/build_launcher.cmake"
            COMMENT "Building VCSLauncher.exe"
            VERBATIM)
        add_dependencies(VCSNative VCSLauncher)
    else()
        message(WARNING "Roslyn csc.exe not found: VCSLauncher.exe will not be built.")
    endif()
    if(MSVC)
        # A symbol file for profiling and crash triage. /OPT:REF and /OPT:ICF are stated explicitly
        # because /DEBUG would otherwise switch them off; code generation is unchanged.
        target_link_options(VCSNative PRIVATE /DEBUG /OPT:REF /OPT:ICF)
    endif()
endif()
if(MSVC)
    # /Ob3 must stay off the target: target_compile_options lands in the vcxproj
    # AdditionalOptions, which cl.exe sees *after* the per-source
    # InlineFunctionExpansion, so a target-wide /Ob3 silently overrides the
    # /Ob${PSPRECOMP_GENERATED_INLINE_LEVEL} set on the generated corpus above
    # (MSVC reports this as "D9025: overriding '/Ob0' with '/Ob3'").  Apply it to
    # the host sources only.
    target_compile_options(VCSNative PRIVATE ${PSPRECOMP_MSVC_MP_FLAG})
    set_source_files_properties(host/main.cpp ${VCS_HOST_SOURCES}
        DIRECTORY "${VCS_PROFILE_DIR}" PROPERTIES COMPILE_OPTIONS
        "$<$<CONFIG:Release>:/Ob3>;$<$<CONFIG:RelWithDebInfo>:/Ob3>")
    target_link_options(VCSNative PRIVATE /STACK:67108864)
    if(PSPRECOMP_LTO)
        # Make the otherwise silent LTCG phase visible in the console.
        target_link_options(VCSNative PRIVATE /LTCG:STATUS /INCREMENTAL:NO)
        if(NOT PSPRECOMP_MSVC_CGTHREADS STREQUAL "0")
            target_link_options(VCSNative PRIVATE "/CGTHREADS:${PSPRECOMP_MSVC_CGTHREADS}")
        endif()
    endif()
endif()

if(APPLE)
    # Game Mode (macOS Sonoma+) needs LSApplicationCategoryType visible to
    # Launch Services -- confirmed with `mdls`: a bare executable with the
    # category merely embedded in its __TEXT,__info_plist section reads back
    # kMDItemAppStoreCategoryType = (null), so Game Mode never sees it. A real
    # .app bundle is what Launch Services actually indexes.
    #
    # PSP_DATA and the .ini files are not built by this project -- the user
    # places PSP_DATA beside the executable themselves -- and main.cpp finds
    # them by looking beside its own binary. Bundling moves the real binary
    # to VCSNative.app/Contents/MacOS/VCSNative, which would orphan an
    # existing PSP_DATA one directory below the bundle. A symlink from inside
    # the bundle back out to that existing PSP_DATA (created post-build, see
    # below) keeps "beside the executable" true without copying or moving
    # several gigabytes of extracted game data.
    set_target_properties(VCSNative PROPERTIES
        MACOSX_BUNDLE TRUE
        MACOSX_BUNDLE_INFO_PLIST "${VCS_PROFILE_DIR}/resources/Info.plist")
    # PSP_DATA lives beside the bundle itself (the same place the flat
    # executable used to sit): $<TARGET_FILE_DIR:VCSNative> resolves to
    # .../VCSNative.app/Contents/MacOS, so three levels up is that directory.
    # Recreated every build so it survives a PSP_DATA the user adds or moves
    # after the first configure.
    add_custom_command(TARGET VCSNative POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E rm -f "$<TARGET_FILE_DIR:VCSNative>/PSP_DATA"
        COMMAND ${CMAKE_COMMAND} -E create_symlink
            "../../../PSP_DATA" "$<TARGET_FILE_DIR:VCSNative>/PSP_DATA"
        COMMENT "Linking PSP_DATA into the app bundle")
endif()

if(WIN32)
    add_custom_command(TARGET VCSNative POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
            "${VCS_PROFILE_DIR}/third_party/ffmpeg/bin" "$<TARGET_FILE_DIR:VCSNative>"
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${VCS_PROFILE_DIR}/third_party/ffmpeg/COPYING.LGPLv2.1"
            "$<TARGET_FILE_DIR:VCSNative>/COPYING.LGPLv2.1")
    # App-local Visual C++ runtime, so the game starts on a PC without the Visual C++ Redistributable
    # installed (see third_party/vcruntime/README.txt).
    foreach(VCS_VCRT msvcp140 msvcp140_atomic_wait vcruntime140 vcruntime140_1)
        add_custom_command(TARGET VCSNative POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${VCS_PROFILE_DIR}/third_party/vcruntime/${VCS_VCRT}.dll"
                "$<TARGET_FILE_DIR:VCSNative>/${VCS_VCRT}.dll")
    endforeach()
endif()
add_custom_command(TARGET VCSNative POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${VCS_PROFILE_DIR}/config/VCSNative.ini" "$<TARGET_FILE_DIR:VCSNative>/VCSNative.ini"
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${VCS_PROFILE_DIR}/config/ProperShaders.ini" "$<TARGET_FILE_DIR:VCSNative>/ProperShaders.ini"
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${VCS_PROFILE_DIR}/data/VCSProject2DFX_Lights.bin"
        "$<TARGET_FILE_DIR:VCSNative>/VCSProject2DFX_Lights.bin"
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${VCS_PROFILE_DIR}/third_party/project2dfx/ATTRIBUTION.md"
        "$<TARGET_FILE_DIR:VCSNative>/PROJECT2DFX_ATTRIBUTION.md"
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${VCS_PROFILE_DIR}/third_party/project2dfx/LICENSE.txt"
        "$<TARGET_FILE_DIR:VCSNative>/PROJECT2DFX_LICENSE.txt"
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${VCS_PROFILE_DIR}/third_party/cloudworks/ATTRIBUTION.md"
        "$<TARGET_FILE_DIR:VCSNative>/CLOUDWORKS_ATTRIBUTION.md")

if(APPLE)
    # VCSLauncher: a small native SwiftUI settings GUI for VCSNative.ini,
    # built and bundled here so a normal build of this project produces it
    # alongside VCSNative.app rather than it only existing on whatever
    # machine last ran swiftc by hand. Swift isn't enabled as a CMake
    # language project-wide (that needs a much newer CMake minimum than the
    # rest of this project requires), so this drives swiftc directly with a
    # custom command instead -- the same compiler invocation, one target.
    #
    # -target arm64-apple-macosx13.0 matters, not just as a floor: leaving it
    # off lets swiftc default to whatever SDK macosx version happens to be
    # newest on the build machine (confirmed: a beta/future SDK on this one),
    # which produces a binary macOS itself then refuses to launch with "You
    # can't use this version of the application" -- unrelated-looking
    # launch failures traced back to this same missing flag.
    find_program(VCS_SWIFTC_EXECUTABLE swiftc)
    if(VCS_SWIFTC_EXECUTABLE)
        set(VCS_LAUNCHER_SRC "${VCS_PROFILE_DIR}/launcher/VCSLauncher.swift")
        set(VCS_LAUNCHER_PLIST "${VCS_PROFILE_DIR}/launcher/Info.plist")
        # $<TARGET_FILE_DIR:VCSNative> is .../VCSNative.app/Contents/MacOS;
        # the launcher's own bundle is a sibling of VCSNative.app, so three
        # levels up from there is the actual bin/$<CONFIG> directory.
        set(VCS_LAUNCHER_APP_DIR
            "$<TARGET_FILE_DIR:VCSNative>/../../../VCSLauncher.app")
        set(VCS_LAUNCHER_BIN_DIR "${VCS_LAUNCHER_APP_DIR}/Contents/MacOS")
        add_custom_command(
            OUTPUT "${CMAKE_BINARY_DIR}/vcs_launcher_stamp"
            COMMAND ${CMAKE_COMMAND} -E make_directory "${VCS_LAUNCHER_BIN_DIR}"
            COMMAND "${VCS_SWIFTC_EXECUTABLE}" -O -parse-as-library
                    -target arm64-apple-macosx13.0
                    "${VCS_LAUNCHER_SRC}"
                    -o "${VCS_LAUNCHER_BIN_DIR}/VCSLauncher"
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                    "${VCS_LAUNCHER_PLIST}" "${VCS_LAUNCHER_APP_DIR}/Contents/Info.plist"
            COMMAND ${CMAKE_COMMAND} -E touch "${CMAKE_BINARY_DIR}/vcs_launcher_stamp"
            DEPENDS "${VCS_LAUNCHER_SRC}" "${VCS_LAUNCHER_PLIST}"
            COMMENT "Building VCSLauncher.app (Swift settings GUI)"
            VERBATIM)
        add_custom_target(vcs_launcher ALL DEPENDS "${CMAKE_BINARY_DIR}/vcs_launcher_stamp")

        # The distributable app: ONE self-contained VCSNative.app (launcher + game + every library it needs,
        # sealed and signed) in <build>/dist, so a build from source is ready to double-click and share.
        # Set VCS_FFMPEG_MACOS_PREFIX (scripts/build_macos.sh does) to bundle an LGPL FFmpeg; without it the
        # Homebrew FFmpeg is bundled, which is fine for your own use but is GPL and must not be redistributed.
        find_package(Python3 COMPONENTS Interpreter)
        if(Python3_FOUND)
            if(VCS_FFMPEG_MACOS_PREFIX)
                set(VCS_BUNDLE_FFMPEG_PREFIX "${VCS_FFMPEG_MACOS_PREFIX}")
            else()
                set(VCS_BUNDLE_FFMPEG_PREFIX "/opt/homebrew")
            endif()
            add_custom_target(vcs_macos_dist ALL
                COMMAND "${Python3_EXECUTABLE}" "${VCS_PROFILE_DIR}/scripts/macos_bundle.py"
                        --game "$<TARGET_BUNDLE_DIR:VCSNative>"
                        --launcher "${VCS_LAUNCHER_APP_DIR}"
                        --out "${CMAKE_BINARY_DIR}/dist/VCSNative.app"
                        --ffmpeg-prefix "${VCS_BUNDLE_FFMPEG_PREFIX}"
                DEPENDS VCSNative vcs_launcher
                COMMENT "Assembling the self-contained VCSNative.app in dist/"
                VERBATIM)
        endif()
    else()
        message(WARNING
            "swiftc not found -- VCSLauncher.app will not be built. "
            "Install Xcode or the Swift toolchain to get the settings GUI.")
    endif()
endif()

# Profile-specific generator. The root psp_recomp target stays game-neutral.
add_executable(vcs_recomp tools/vcs_codegen_main.cpp)
target_link_libraries(vcs_recomp PRIVATE psprecomp_core)
vcs_set_runtime_output(vcs_recomp)

if(PSPRECOMP_BUILD_PROFILE_TESTS)
    if(NOT PSPRECOMP_BUILD_TESTS)
        enable_testing()
    endif()
    add_executable(vcs_profile_tests tests/vcs_profile_tests.cpp ${VCS_HOST_SOURCES})
    vcs_target_common(vcs_profile_tests)
    vcs_set_runtime_output(vcs_profile_tests)
    add_test(NAME vcs_profile_tests COMMAND vcs_profile_tests)

    add_executable(vcs_config_tests
        tests/vcs_config_tests.cpp
        host/vcs_config.cpp
        host/vcs_camera_input.cpp
        host/vcs_vehicle_input.cpp)
    target_include_directories(vcs_config_tests PRIVATE host)
    if(APPLE)
        # vcs_config.cpp's InternalResolutionMode::Desktop case calls
        # CGDisplayPixelsWide/High (CoreGraphics) -- this target compiles
        # that file standalone rather than through vcs_target_common(), so
        # it needs the same framework linked here directly.
        find_library(VCS_CONFIG_TESTS_COREGRAPHICS CoreGraphics REQUIRED)
        target_link_libraries(vcs_config_tests PRIVATE ${VCS_CONFIG_TESTS_COREGRAPHICS})
    endif()
    add_test(NAME vcs_config_tests COMMAND vcs_config_tests)

    add_executable(audio_resampler_tests tests/audio_resampler_tests.cpp)
    target_include_directories(audio_resampler_tests PRIVATE host)
    add_test(NAME audio_resampler_tests COMMAND audio_resampler_tests)

    add_executable(vcs_bootstrap_paths_tests
        tests/vcs_bootstrap_paths_tests.cpp host/vcs_bootstrap_paths.cpp)
    target_include_directories(vcs_bootstrap_paths_tests PRIVATE host)
    target_link_libraries(vcs_bootstrap_paths_tests PRIVATE psprecomp_core)
    add_test(NAME vcs_bootstrap_paths_tests COMMAND vcs_bootstrap_paths_tests)
endif()

if(WIN32)
    add_executable(vcs_dx12_probe
        tools/dx12_probe_main.cpp
        host/dx12_presenter.cpp
        host/vcs_runtime_log.cpp
        host/vcs_config.cpp
        host/vcs_camera_input.cpp
        host/vcs_vehicle_input.cpp)
    target_include_directories(vcs_dx12_probe PRIVATE host "${PROJECT_SOURCE_DIR}/include")
    target_link_libraries(vcs_dx12_probe PRIVATE d3d12 dxgi d3dcompiler dxguid)
    vcs_set_runtime_output(vcs_dx12_probe)

    add_executable(vcs_dx12_ge_probe
        tools/dx12_ge_probe_main.cpp
        host/ge_gpu_backend_dx12.cpp
        host/vcs_runtime_log.cpp
        host/vcs_config.cpp
        host/vcs_camera_input.cpp
        host/vcs_vehicle_input.cpp)
    target_include_directories(vcs_dx12_ge_probe PRIVATE host "${PROJECT_SOURCE_DIR}/include")
    target_link_libraries(vcs_dx12_ge_probe PRIVATE d3d12 dxgi d3dcompiler dxguid)
    vcs_set_runtime_output(vcs_dx12_ge_probe)
endif()

# Offline texture tool: same classify/upscale code as the game, for evaluation and pack building.
add_executable(vcs_texture_tool tools/texture_tool.cpp host/vcs_texture_replace.cpp)
target_include_directories(vcs_texture_tool PRIVATE host)
