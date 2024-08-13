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
project(bme680_bh1749)

# Add application source files
FILE(GLOB app_sources src/*.c src/*.cpp)
target_sources(app PRIVATE ${app_sources})

# ------------ Include the directory containing the header file ------------
# drivers - folder
zephyr_include_directories_ifdef(CONFIG_BME688 drivers/bme688)
zephyr_include_directories(drivers/BME68x-Sensor-API)

# ------------ add the c-file ------------
# drivers - folder
target_sources_ifdef(CONFIG_BME688 app PRIVATE drivers/bme688/bme688.c drivers/BME68x-Sensor-API/bme68x.c) 

