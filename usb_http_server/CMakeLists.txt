#
# Copyright (c) 2018 Bosch Sensortec GmbH
#
# SPDX-License-Identifier: Apache-2.0
#

cmake_minimum_required(VERSION 3.20.0)

#default board can be overriden by -b
set(BOARD thingy53_nrf5340_cpuapp)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(usb_http_server)

FILE(GLOB app_sources src/*.c)
target_sources(app PRIVATE ${app_sources})
