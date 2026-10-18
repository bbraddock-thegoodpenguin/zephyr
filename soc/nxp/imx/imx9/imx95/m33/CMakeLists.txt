# Copyright 2024 NXP

zephyr_include_directories(.)

zephyr_library()
zephyr_library_sources(soc.c)

set(SOC_LINKER_SCRIPT ${CMAKE_CURRENT_SOURCE_DIR}/linker.ld CACHE INTERNAL "")
zephyr_library_sources_ifdef(CONFIG_SOC_RESET_HOOK imx95_m33_startup.S)
zephyr_sources(common_clock_set.c)
