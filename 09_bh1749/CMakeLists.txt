
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
project(bh1749)

# Add application source files
#FILE(GLOB app_sources src/*.c)
#target_sources(app PRIVATE ${app_sources})
target_sources(app PRIVATE src/main.c)

# Include the directory containing the header file
#zephyr_include_directories_ifdef(CONFIG_BH1749 drivers/bh1749)
zephyr_include_directories(include)

# add the c-file
#FILE(GLOB app_drivers drivers/bh1749/*.c)
#target_sources_ifdef(CONFIG_BH1749 app PRIVATE ${app_drivers})
#target_sources_ifdef(CONFIG_BH1749 app PRIVATE drivers/bh1749/bh1749.c) 
#target_sources_ifdef(CONFIG_BH1749_TRIGGER app PRIVATE drivers/bh1749/bh1749_trigger.c)

#zephyr_library()
#zephyr_library_sources(bh1749.c)
#zephyr_library_sources_ifdef(CONFIG_BH1749_TRIGGER bh1749_trigger.c)