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
#include <zephyr/sys/printk.h>
#include <zephyr/data/json.h>
#include <zephyr/logging/log.h>
#include <zephyr/usb/usb_device.h>
#include <zephyr/net/http/server.h>
#include <zephyr/net/net_if.h>
#include <zephyr/net/net_mgmt.h>
#include <zephyr/net/socket.h>
#include <zephyr/net/net_config.h>



LOG_MODULE_REGISTER(http_server, LOG_LEVEL_DBG);

#define SENSOR_BUFFER_SIZE 256

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
    int ret;

    // Fetch BME688 data
    ret = bme688_sample_fetch(bme688_dev, SENSOR_CHAN_ALL);
    if (ret) {
        LOG_ERR("Failed to fetch BME688 data: %d", ret);
        return;
    }

	//bme688 API usage, sensor_sample_fetch and sensor_channel_get also available
	struct bme68x_data data;
	uint8_t n_fields = bme688_data_get(bme688_dev, &data);
	if (n_fields && data.status == BME68X_VALID_DATA) {
        current_sensor_data.temperature = data.temperature;
        current_sensor_data.pressure = data.pressure;
        current_sensor_data.humidity = data.humidity;
        current_sensor_data.gas_resistance = data.gas_resistance;
	}
}

static void fetch_bh1749_data(void)
{
    struct sensor_value val;
    int ret;

    // Wait for the BH1749 data to be ready
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

static void sensor_data_response_cb(struct http_response *response,
                                    const char *url, const struct http_server_ctx *ctx)
{
    char sensor_data[SENSOR_BUFFER_SIZE];
    fetch_bme688_data();
    fetch_bh1749_data();
    snprintf(sensor_data, sizeof(sensor_data),
             "{\"temperature\":%.2f,\"pressure\":%.2f,\"humidity\":%.2f,"
             "\"gas_resistance\":%.2f,\"red\":%d,\"green\":%d,\"blue\":%d,\"ir\":%d}",
             current_sensor_data.temperature,
             current_sensor_data.pressure,
             current_sensor_data.humidity,
             current_sensor_data.gas_resistance,
             current_sensor_data.red,
             current_sensor_data.green,
             current_sensor_data.blue,
             current_sensor_data.ir);

    http_server_response_init(response, HTTP_STATUS_OK);
    response->http_status_code = HTTP_STATUS_OK;
    http_server_send_response(ctx, response, sensor_data, strlen(sensor_data), NULL);
}

static void sensor_data_handler(const struct http_server_ctx *ctx,
                                const struct http_request *request,
                                struct http_response *response)
{
    if (request->method != HTTP_GET) {
        http_server_response_init(response, HTTP_STATUS_METHOD_NOT_ALLOWED);
        http_server_send_response(ctx, response, NULL, 0, NULL);
        return;
    }

    sensor_data_response_cb(response, request->url, ctx);
}

void main(void)
{
    int ret;

    // Initialize semaphores
    k_sem_init(&sem_bh1749, 0, 1);

    // Initialize BH1749 device
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

    // Initialize BME688 device
    bme688_dev = DEVICE_DT_GET_ONE(bosch_bme688);
    if (!device_is_ready(bme688_dev)) {
        LOG_ERR("BME688 device not found");
        return;
    }

    bme688_init(bme688_dev);
    bme688_mode_t mode = bme688_mode_forced; // bme688_mode_forced, bme688_mode_parallel, bme688_mode_sequencial
    bme688_set_mode_default_conf(mode);
    LOG_INF("bme688 set to Forced Mode");
    k_sleep(K_MSEC(3000));

    // Enable USB device stack
    ret = usb_enable(NULL);
    if (ret != 0) {
        LOG_ERR("Failed to enable USB");
        return;
    }

    // Initialize the network interface
    struct net_if *iface = net_if_get_default();
    net_dhcpv4_start(iface);

    struct sockaddr_in addr = {
        .sin_family = AF_INET,
        .sin_port = htons(80),
        .sin_addr.s_addr = INADDR_ANY,
    };

    // Initialize and start the HTTP server
    struct http_server_ctx server_ctx;
    http_server_init(&server_ctx, addr);

    // Define the sensor data resource
    struct http_resource sensor_data_resource = {
        .path = "/sensor_data",
        .handler = sensor_data_handler,
    };

    // Register the resource with the server
    http_server_register_resource(&sensor_data_resource);

    LOG_INF("HTTP server started");

    // Main loop can include other tasks
    while (1) {
        k_sleep(K_MSEC(5000));
    }
}

