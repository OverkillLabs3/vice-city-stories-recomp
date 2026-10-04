# Compiles VCSLauncher.exe next to VCSNative.exe. Run by the VCSLauncher CMake target:
#   cmake -DCSC=<csc.exe> -DSRC_DIR=<launcher/windows> -DICON=<ico> -DOUT=<dir> -P build_launcher.cmake
#
# A launcher failure must never break the game build, so this only warns and always exits 0.

set(FW "$ENV{WINDIR}/Microsoft.NET/Framework64/v4.0.30319")
set(REFS
    "${FW}/mscorlib.dll" "${FW}/System.dll" "${FW}/System.Core.dll" "${FW}/System.Management.dll"
    "${FW}/System.IO.Compression.dll" "${FW}/System.IO.Compression.FileSystem.dll" "${FW}/System.Xaml.dll"
    "${FW}/System.Windows.Forms.dll" "${FW}/System.Drawing.dll" "${FW}/WPF/WindowsBase.dll"
    "${FW}/WPF/PresentationCore.dll" "${FW}/WPF/PresentationFramework.dll")
set(ARGS /nologo /noconfig /nostdlib+ /target:winexe /optimize+ /langversion:latest /platform:anycpu
    "/out:${OUT}/VCSLauncher.exe" "/win32manifest:${SRC_DIR}/VCSLauncher.manifest")
if(EXISTS "${ICON}")
    list(APPEND ARGS "/win32icon:${ICON}")
endif()
foreach(ref IN LISTS REFS)
    list(APPEND ARGS "/r:${ref}")
endforeach()
list(APPEND ARGS "${SRC_DIR}/VCSLauncher.cs")

# The game's output folder may not exist yet when this runs first in a parallel build.
file(MAKE_DIRECTORY "${OUT}")
execute_process(COMMAND "${CSC}" ${ARGS} RESULT_VARIABLE result OUTPUT_VARIABLE out ERROR_VARIABLE err)
if(NOT result EQUAL 0)
    # MSBuild fails a step whose output contains a line that looks like "error CSxxxx", so soften it.
    string(REPLACE "error " "problem " details "${out}${err}")
    message(WARNING "VCSLauncher.exe was not built (the game itself is unaffected):\n${details}")
else()
    message(STATUS "Built ${OUT}/VCSLauncher.exe")
endif()
