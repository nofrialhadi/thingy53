/*
 * Copyright (c) 2018 Bosch Sensortec GmbH
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/sensor.h>
#include <bme688.h>
#include <stdio.h>
#include <stdint.h>
#include <zephyr/sys/__assert.h>
#include <zephyr/logging/log.h>
#include <zephyr/sys/printk.h>
#include <zephyr/data/json.h>

LOG_MODULE_REGISTER(sensor_server, LOG_LEVEL_INF);

static struct k_sem sem_bh1749;
static const struct device *bme688_dev;
static const struct device *bh1749_dev;

struct sensor_data {
    float temperature;
    float pressure;
    float humidity;
    float gas_resistance;
    int red;
    int green;
    int blue;
    int ir;
};

static struct sensor_data current_sensor_data;

static void trigger_handler(const struct device *dev, const struct sensor_trigger *trigger)
{
    k_sem_give(&sem_bh1749);
}

static int init_bh1749(const struct device *dev)
{
    int ret;

    struct sensor_trigger trig = {
        .type = SENSOR_TRIG_DATA_READY,
        .chan = SENSOR_CHAN_ALL,
    };

    ret = sensor_trigger_set(dev, &trig, trigger_handler);
    if (ret) {
        LOG_ERR("Failed to set trigger: %d", ret);
        return ret;
    }

    return 0;
}

static void fetch_bme688_data(void)
{
	//bme688 API usage, sensor_sample_fetch and sensor_channel_get also available
	bme688_sample_fetch(bme688_dev,SENSOR_CHAN_ALL);
	struct bme68x_data data;
	uint8_t n_fields = bme688_data_get(bme688_dev, &data);
	if(n_fields){//only 1 expected in Forced mode
		if (data.status == BME68X_VALID_DATA){
			current_sensor_data.temperature = data.temperature;
			current_sensor_data.pressure = data.pressure;
			current_sensor_data.humidity = data.humidity;
			current_sensor_data.gas_resistance = data.gas_resistance;
		}
	}
}

static void fetch_bh1749_data(void)
{
    struct sensor_value val;
    int ret;

    k_sem_take(&sem_bh1749, K_FOREVER);

    ret = sensor_sample_fetch(bh1749_dev);
    if (ret) {
        LOG_ERR("Failed to fetch BH1749 data: %d", ret);
        return;
    }

    sensor_channel_get(bh1749_dev, SENSOR_CHAN_RED, &val);
    current_sensor_data.red = val.val1;
    sensor_channel_get(bh1749_dev, SENSOR_CHAN_GREEN, &val);
    current_sensor_data.green = val.val1;
    sensor_channel_get(bh1749_dev, SENSOR_CHAN_BLUE, &val);
    current_sensor_data.blue = val.val1;
    sensor_channel_get(bh1749_dev, SENSOR_CHAN_IR, &val);
    current_sensor_data.ir = val.val1;
}

void main(void)
{
	printf("Reading Environmental Data\n");
	//printf("waiting for 10 seconds\n");
	k_sleep(K_MSEC(10000));

	// ------------------ bh1749 ------------------
    int ret;
    k_sem_init(&sem_bh1749, 0, 1);

	bh1749_dev = DEVICE_DT_GET_ONE(rohm_bh1749);
    if (!device_is_ready(bh1749_dev)) {
        LOG_ERR("BH1749 device not found");
        return;
    }

    ret = init_bh1749(bh1749_dev);
    if (ret) {
        LOG_ERR("Failed to initialize BH1749: %d", ret);
        return;
    }

	printf("Sensor device %p name is %s\n", bh1749_dev, bh1749_dev->name);

	// ------------------ bme688 ------------------
	bme688_dev = DEVICE_DT_GET_ONE(bosch_bme688);
    if (!device_is_ready(bme688_dev)) {
        LOG_ERR("BME688 device not found");
        return;
    }

	printf("Sensor device %p name is %s\n", bme688_dev, bme688_dev->name);

	bme688_init(bme688_dev);
	bme688_mode_t mode = bme688_mode_forced;	//bme688_mode_forced, bme688_mode_parallel, bme688_mode_sequencial
	bme688_set_mode_default_conf(mode);
	printf("bme688 set to Forced Mode\n");
	k_sleep(K_MSEC(3000));


	while (1) {
		fetch_bme688_data();
		fetch_bh1749_data();

		printf("{\"temperature\":%.2f,\"pressure\":%.2f,\"humidity\":%.2f,"
				"\"gas_resistance\":%.2f,\"red\":%d,\"green\":%d,\"blue\":%d,\"ir\":%d}\n",
				current_sensor_data.temperature,
				current_sensor_data.pressure,
				current_sensor_data.humidity,
				current_sensor_data.gas_resistance,
				current_sensor_data.red,
				current_sensor_data.green,
				current_sensor_data.blue,
				current_sensor_data.ir);

    
        k_sleep(K_SECONDS(5));
    }
}

