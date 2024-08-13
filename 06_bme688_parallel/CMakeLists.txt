#
# Copyright (c) 2018 Bosch Sensortec GmbH
#
# SPDX-License-Identifier: Apache-2.0
#

cmake_minimum_required(VERSION 3.20.0)
#default board can be overriden by -b
set(BOARD thingy53_nrf5340_cpuapp)
set(DTC_OVERLAY_FILE app.overlay)

# add Zephyr package
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(test_bme680)

# Add application source files
target_sources(app PRIVATE src/main.c)

# Include the directory containing the header file
zephyr_include_directories_ifdef(CONFIG_BME688 drivers/bme688)              #zephyr_include_directories(drivers/bme688)
zephyr_include_directories(drivers/BME68x-Sensor-API)

# add the c-file
target_sources_ifdef(CONFIG_BME688 app PRIVATE drivers/bme688/bme688.c)     #target_sources(app PRIVATE drivers/bme688/bme688.c)
target_sources(app PRIVATE drivers/BME68x-Sensor-API/bme68x.c)

#add_subdirectory(drivers)
#add_subdirectory_ifdef(CONFIG_BME688 drivers/bme688)
#add_subdirectory(drivers/BME68x-Sensor-API)