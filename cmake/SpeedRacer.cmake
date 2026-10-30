# Include after the existing ps2run target is defined.
option(PS2_BUILD_SPEEDRACER "Build the Speed Racer Windows launcher" OFF)
option(PS2_BUILD_SPEEDRACER_HARDWARE "Build a separate experimental hardware-GS GUI launcher" OFF)
option(PS2_BUILD_SPEEDRACER_PORTABLE "Build a separate SpeedRacer.exe without development data fallbacks" OFF)
if(PS2_BUILD_SPEEDRACER_HARDWARE AND NOT PS2_BUILD_SPEEDRACER)
    message(FATAL_ERROR "Hardware launcher requires PS2_BUILD_SPEEDRACER=ON")
endif()
if(PS2_BUILD_SPEEDRACER_PORTABLE AND NOT PS2_BUILD_SPEEDRACER)
    message(FATAL_ERROR "PS2_BUILD_SPEEDRACER_PORTABLE requires PS2_BUILD_SPEEDRACER=ON")
endif()
set(PS2_SPEEDRACER_DEV_ROOT "${CMAKE_SOURCE_DIR}" CACHE PATH "Development fallback containing games/speedracer and speedracer.ps2")
set(PS2_SPEEDRACER_DISC_HINT "" CACHE FILEPATH "Development fallback ISO; data/disc.iso beside SpeedRacer.exe takes priority")

if(PS2_BUILD_SPEEDRACER)
    if(NOT WIN32 OR EMSCRIPTEN)
        message(FATAL_ERROR "SpeedRacer is a native Windows target")
    endif()
    if(NOT TARGET ps2game OR NOT TARGET ps2run)
        message(FATAL_ERROR "Configure PS2_GENERATED with generated/speedracer before building SpeedRacer")
    endif()
    if(NOT SDL2_FOUND)
        find_package(SDL2 REQUIRED)
    endif()
    enable_language(RC)
    set(_speedracer_resources "${CMAKE_SOURCE_DIR}/host/speedracer.rc")
    set_property(SOURCE "${_speedracer_resources}" APPEND PROPERTY OBJECT_DEPENDS
        "${CMAKE_SOURCE_DIR}/host/assets/SpeedRacer.ico"
        "${CMAKE_SOURCE_DIR}/host/resource.h"
        "${CMAKE_SOURCE_DIR}/host/speedracer.manifest")
    add_library(speedracer_desktop STATIC
        "${CMAKE_SOURCE_DIR}/host/media_import.cpp"
        "${CMAKE_SOURCE_DIR}/host/media_setup.cpp"
        "${CMAKE_SOURCE_DIR}/host/save_import.cpp"
        "${CMAKE_SOURCE_DIR}/host/save_import_ui.cpp"
        "${CMAKE_SOURCE_DIR}/host/startup_report.cpp")
    target_include_directories(speedracer_desktop PUBLIC "${CMAKE_SOURCE_DIR}/host" PRIVATE "${CMAKE_SOURCE_DIR}/runtime/include")
    target_link_libraries(speedracer_desktop PUBLIC bcrypt comdlg32 comctl32)
    target_compile_options(speedracer_desktop PRIVATE -Wall -Wextra)
    add_executable(SpeedRacerSaveImport WIN32 "${CMAKE_SOURCE_DIR}/host/save_import_launcher.cpp" "${_speedracer_resources}")
    target_link_libraries(SpeedRacerSaveImport PRIVATE shell32 user32)
    set_target_properties(SpeedRacerSaveImport PROPERTIES OUTPUT_NAME "Importar progresso")
    # Reconfigure on generated-source changes rather than silently retaining
    # a stale object with more native programs than the current source contains.
    set(PS2_VU_EXTRA_SOURCE "${PS2_GENERATED}/extra/vu_extra.cpp")
    set(PS2_VU_EXTRA_MANIFEST "${PS2_GENERATED}/extra/.vu-extra-manifest.json")
    set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
        "${PS2_VU_EXTRA_SOURCE}" "${PS2_VU_EXTRA_MANIFEST}" "${CMAKE_SOURCE_DIR}/cmake/VerifyVuExtra.cmake")
    include("${CMAKE_SOURCE_DIR}/cmake/VerifyVuExtra.cmake")
    # Also check on every build: copying an older partial generated file can
    # preserve an old mtime and evade ordinary incremental dependency checks.
    add_custom_target(speedracer_vu_verify
        COMMAND ${CMAKE_COMMAND}
            "-DPS2_VU_EXTRA_SOURCE=${PS2_VU_EXTRA_SOURCE}"
            "-DPS2_VU_EXTRA_MANIFEST=${PS2_VU_EXTRA_MANIFEST}"
            -P "${CMAKE_SOURCE_DIR}/cmake/VerifyVuExtra.cmake"
        VERBATIM)
    add_dependencies(ps2game speedracer_vu_verify)
    file(TO_CMAKE_PATH "${PS2_SPEEDRACER_DEV_ROOT}" _speedracer_dev_root)
    file(TO_CMAKE_PATH "${PS2_SPEEDRACER_DISC_HINT}" _speedracer_disc_hint)
    add_executable(SpeedRacer WIN32 "${CMAKE_CURRENT_LIST_DIR}/../host/speedracer_main.cpp" "${CMAKE_SOURCE_DIR}/host/window.cpp" "${CMAKE_SOURCE_DIR}/host/controllers.cpp" "${CMAKE_SOURCE_DIR}/host/keyboard.cpp" "${_speedracer_resources}")
    target_include_directories(SpeedRacer PRIVATE "${CMAKE_SOURCE_DIR}/host")
    target_compile_definitions(SpeedRacer PRIVATE PS2_WINDOW PS2_SPEEDRACER_KEYBOARD "PS2_WINDOW_TITLE=\"Speed Racer\""
        "PS2_SPEEDRACER_DEV_ROOT=\"${_speedracer_dev_root}\""
        "PS2_SPEEDRACER_DISC_HINT=\"${_speedracer_disc_hint}\"")
    target_link_libraries(SpeedRacer PRIVATE ps2game ps2runtime SDL2::SDL2 shell32 speedracer_desktop)

    # Explicitly separate from the accepted compute launcher and portable target.
    if(PS2_BUILD_SPEEDRACER_HARDWARE)
        add_executable(SpeedRacerHardware WIN32 "${CMAKE_CURRENT_LIST_DIR}/../host/speedracer_main.cpp" "${CMAKE_SOURCE_DIR}/host/window.cpp" "${CMAKE_SOURCE_DIR}/host/controllers.cpp" "${CMAKE_SOURCE_DIR}/host/keyboard.cpp" "${_speedracer_resources}")
        target_include_directories(SpeedRacerHardware PRIVATE "${CMAKE_SOURCE_DIR}/host")
        target_compile_definitions(SpeedRacerHardware PRIVATE PS2_WINDOW PS2_SPEEDRACER_KEYBOARD PS2_SPEEDRACER_DEFAULT_HW
            "PS2_WINDOW_TITLE=\"Speed Racer — Vulkan experimental\""
            "PS2_SPEEDRACER_DEV_ROOT=\"\"" "PS2_SPEEDRACER_DISC_HINT=\"\"")
        target_link_libraries(SpeedRacerHardware PRIVATE ps2game ps2runtime SDL2::SDL2 shell32 speedracer_desktop)
        set_target_properties(SpeedRacerHardware PROPERTIES OUTPUT_NAME "SpeedRacer"
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/experimental-hardware")
    endif()

    # Keep the development launcher and its executable path unchanged. This
    # separate target must resolve game data beside itself or from explicit
    # arguments, even when this build cache contains development fallbacks.
    if(PS2_BUILD_SPEEDRACER_PORTABLE)
        add_executable(SpeedRacerPortable WIN32 "${CMAKE_CURRENT_LIST_DIR}/../host/speedracer_main.cpp" "${CMAKE_SOURCE_DIR}/host/window.cpp" "${CMAKE_SOURCE_DIR}/host/controllers.cpp" "${CMAKE_SOURCE_DIR}/host/keyboard.cpp" "${_speedracer_resources}")
        target_include_directories(SpeedRacerPortable PRIVATE "${CMAKE_SOURCE_DIR}/host")
        target_compile_definitions(SpeedRacerPortable PRIVATE PS2_WINDOW PS2_SPEEDRACER_KEYBOARD "PS2_WINDOW_TITLE=\"Speed Racer\""
            "PS2_SPEEDRACER_DEV_ROOT=\"\"" "PS2_SPEEDRACER_DISC_HINT=\"\"")
        target_link_libraries(SpeedRacerPortable PRIVATE ps2game ps2runtime SDL2::SDL2 shell32 speedracer_desktop)
        set_target_properties(SpeedRacerPortable PROPERTIES
            OUTPUT_NAME "SpeedRacer"
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/portable")
    endif()
endif()
