#
# Copyright (c) 2020 Nordic Semiconductor ASA
#
# SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
#
cmake_minimum_required(VERSION 3.20.0)

#default board can be overriden by -b
set(BOARD thingy53_nrf5340_cpuapp)
set(DTC_OVERLAY_FILE app.overlay)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(openthread_cli)

# Add application source files
FILE(GLOB app_sources src/*.c src/*.cpp)
target_sources(app PRIVATE ${app_sources})

# ------------ Include the directory containing the header file ------------
# drivers - folder
zephyr_include_directories_ifdef(CONFIG_BME688 drivers/bme688)
zephyr_include_directories(drivers/BME68x-Sensor-API)
# include - folder
zephyr_include_directories(include)
# subsys - folder
zephyr_include_directories_ifdef(CONFIG_APP_FLASH subsys/app_flash)
zephyr_include_directories_ifdef(CONFIG_BME688_SERVER subsys/bme688_server)
zephyr_include_directories_ifdef(CONFIG_BME688_BSEC2 subsys/bme688_server/bsec2)
zephyr_include_directories_ifdef(CONFIG_BME688_BSEC2 subsys/bme688_server/bsec2/Bosch-BSEC2-Library/src/inc)
zephyr_include_directories_ifdef(CONFIG_BME688_BSEC2 subsys/bme688_server/bsec2/Bosch-BSEC2-Library/src/config/FieldAir_HandSanitizer)
zephyr_include_directories_ifdef(CONFIG_BME688_BSEC2 subsys/bme688_server/bsec2/Bosch-BSEC2-Library/src/cortex-m33/fpv5-sp-d16-hard)

# ------------ add the c-file ------------
# drivers - folder
target_sources_ifdef(CONFIG_BME688 app PRIVATE drivers/bme688/bme688.c drivers/BME68x-Sensor-API/bme68x.c) 
# subsys - folder
target_sources_ifdef(CONFIG_APP_BATTERY app PRIVATE subsys/app_battery/app_battery.c)
target_sources_ifdef(CONFIG_APP_FLASH app PRIVATE subsys/app_flash/flash_settings_storage.cpp)
target_sources_ifdef(CONFIG_APP_LED app PRIVATE subsys/app_led/app_led.c)
target_sources_ifdef(CONFIG_APP_OT app PRIVATE subsys/app_ot/app_button.c subsys/app_ot/app_ot.c)
target_sources_ifdef(CONFIG_BME688_SERVER app PRIVATE subsys/bme688_server/bme688_server.cpp)
target_sources_ifdef(CONFIG_BME688_BSEC2 app PRIVATE subsys/bme688_server/bsec2/bsec2.cpp)
target_sources_ifdef(CONFIG_BME688_BSEC2 app PRIVATE subsys/bme688_server/bsec2/Bosch-BSEC2-Library/src/config/FieldAir_HandSanitizer/FieldAir_HandSanitizer.c)
target_sources_ifdef(CONFIG_JSON_ENDPOINT app PRIVATE subsys/json_endpoint/json_endpoint.cpp)
target_sources_ifdef(CONFIG_UDP_BROADCAST app PRIVATE subsys/udp_broadcast/udp_broadcast.cpp)

# lib_bsec
zephyr_library_import(lib_bsec ${CMAKE_CURRENT_SOURCE_DIR}/subsys/bme688_server/bsec2/Bosch-BSEC2-Library/src/cortex-m33/fpv5-sp-d16-hard/libalgobsec.a)
target_link_libraries(lib_bsec INTERFACE kernel)
target_link_libraries(app PRIVATE lib_bsec)