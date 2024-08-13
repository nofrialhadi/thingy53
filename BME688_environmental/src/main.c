/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */


#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/devicetree.h>

/* #include <zephyr/zephyr.h>  */
#include <zephyr/drivers/sensor.h>

/* Include the header file of the I2C API */
#include <zephyr/drivers/i2c.h>

/* Include the header file of printk() */
#include <zephyr/sys/printk.h>


void main(void)
{
	printk("BME688 Example Thingy:53! %s\n", CONFIG_BOARD);
	k_sleep(K_MSEC(5000));

	const struct device *bme = DEVICE_DT_GET_ONE(bosch_bme680);
	struct sensor_value temp, press, humidity, gas_res;


	if (!device_is_ready(bme)) {
		printk("sensor: device not ready.\n");
		return;
	}
	printk("Device %p name is %s\n", bme, bme->name);

	while (1) {
		sensor_sample_fetch(bme);
		sensor_channel_get(bme, SENSOR_CHAN_AMBIENT_TEMP, &temp);
		sensor_channel_get(bme, SENSOR_CHAN_PRESS, &press);
		sensor_channel_get(bme, SENSOR_CHAN_HUMIDITY, &humidity);
		sensor_channel_get(bme, SENSOR_CHAN_GAS_RES, &gas_res);

		printk("TEMPERATURE: %d.%06d | PRESSURE: %d.%06d | HUMIDITY: %d.%06d | GAS: %d.%06d\n",
				temp.val1, temp.val2, press.val1, press.val2,
				humidity.val1, humidity.val2, gas_res.val1, gas_res.val2);

                k_sleep(K_MSEC(1000));
	}
}