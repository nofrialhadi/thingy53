#
# Copyright (c) 2020 Nordic Semiconductor ASA
#
# SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
#
cmake_minimum_required(VERSION 3.20.0)

#default board can be overriden by -b
set(BOARD thingy53_nrf5340_cpuapp)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(openthread_cli)

# NORDIC SDK APP START
target_sources(app PRIVATE src/main.c src/udp_client.c src/app_button.c)
# NORDIC SDK APP END

# Include the directory containing the header file
zephyr_include_directories(src)