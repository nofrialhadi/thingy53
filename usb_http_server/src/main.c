#include <zephyr/kernel.h>
#include <zephyr/usb/usb_device.h>
#include <zephyr/logging/log.h>
#include <zephyr/device.h>
#include <zephyr/net/http/server.h>
#include <zephyr/net/http/client.h>
#include <zephyr/net/http/service.h>
#include <zephyr/net/socket.h>
#include <zephyr/net/net_if.h>
#include <zephyr/net/net_mgmt.h>
#include <zephyr/net/net_ip.h>
#include <zephyr/data/json.h>
#include <stdio.h>
#include <string.h>
#include "cJSON.h"

LOG_MODULE_REGISTER(sensor_http_server, LOG_LEVEL_DBG);

#define SENSOR_BUFFER_SIZE 256

// Dummy data structure for sensor data
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
static uint8_t recv_buffer[1024];

// Dummy function to fetch sensor data
static void fetch_sensor_data(void) {
    // Dummy data for testing
    current_sensor_data.temperature = 22.5;
    current_sensor_data.pressure = 1013.25;
    current_sensor_data.humidity = 45.0;
    current_sensor_data.gas_resistance = 100.0;
    current_sensor_data.red = 150;
    current_sensor_data.green = 100;
    current_sensor_data.blue = 200;
    current_sensor_data.ir = 50;
}

static const struct json_obj_descr sensor_data_descr[] = {
    JSON_OBJ_DESCR_PRIM(struct sensor_data, temperature, JSON_TOK_NUMBER),
    JSON_OBJ_DESCR_PRIM(struct sensor_data, pressure, JSON_TOK_NUMBER),
    JSON_OBJ_DESCR_PRIM(struct sensor_data, humidity, JSON_TOK_NUMBER),
    JSON_OBJ_DESCR_PRIM(struct sensor_data, gas_resistance, JSON_TOK_NUMBER),
    JSON_OBJ_DESCR_PRIM(struct sensor_data, red, JSON_TOK_NUMBER),
    JSON_OBJ_DESCR_PRIM(struct sensor_data, green, JSON_TOK_NUMBER),
    JSON_OBJ_DESCR_PRIM(struct sensor_data, blue, JSON_TOK_NUMBER),
    JSON_OBJ_DESCR_PRIM(struct sensor_data, ir, JSON_TOK_NUMBER),
};

// Function to encode sensor data to JSON
static int encode_sensor_data_to_json(char *buffer, size_t buffer_size) {
    fetch_sensor_data();
    int ret = json_obj_encode_buf(sensor_data_descr, ARRAY_SIZE(sensor_data_descr),
                                  &current_sensor_data, buffer, buffer_size);
    if (ret < 0) {
        LOG_ERR("Error encoding JSON: %d", ret);
    }
    return ret;
}

// Response callback for handling dynamic resource requests
static int dyn_handler(struct http_client_ctx *client,
                       enum http_data_status status, uint8_t *buffer,
                       size_t len, void *user_data)
{
    char json_buffer[SENSOR_BUFFER_SIZE];
    //int ret;

    if (status == HTTP_SERVER_DATA_ABORTED) {
        LOG_DBG("Transaction aborted");
        return 0;
    }

    if (status == HTTP_SERVER_DATA_FINAL) {
        LOG_DBG("All data received.");
        if (encode_sensor_data_to_json(json_buffer, sizeof(json_buffer)) < 0) {
            ret = snprintf((char *)buffer, sizeof(json_buffer), "{\"error\":\"JSON encoding failed\"}");
            // Send HTTP response with an error message
            http_server_send_response(client, 500, "application/json", (uint8_t *)buffer, ret);
            return -1;
        }

        // Send HTTP response with sensor data
        http_server_send_response(client, 200, "application/json", (uint8_t *)json_buffer, strlen(json_buffer));
    }

    return len;
}


// Define and register your dynamic resource
static struct http_resource_detail_dynamic dyn_resource_detail = {
    .common = {
        .type = HTTP_RESOURCE_TYPE_DYNAMIC,
        .bitmask_of_supported_http_methods = BIT(HTTP_GET),
    },
    .cb = dyn_handler,
    .data_buffer = recv_buffer,
    .data_buffer_len = sizeof(recv_buffer),
    .user_data = NULL
};

// Register the resource with the HTTP server
HTTP_RESOURCE_DEFINE(dyn_resource, sensor_service, "/sensor_data",
                     &dyn_resource_detail);

void main(void) {
    int ret;

    // Initialize USB
    ret = usb_enable(NULL);
    if (ret != 0) {
        LOG_ERR("Failed to enable USB: %d", ret);
        return;
    }

    // Set up network interface
    struct net_if *iface = net_if_get_default();
    if (!iface) {
        LOG_ERR("No default network interface found");
        return;
    }

    // Start DHCP client to get IP address
    net_dhcpv4_start(iface);

    // Wait until IP is assigned (simplified wait)
    k_msleep(5000);

    // Start HTTP server
    ret = http_server_start();
    if (ret < 0) {
        LOG_ERR("Failed to start HTTP server: %d", ret);
        return;
    }

    LOG_INF("HTTP server started successfully");

    // Main loop
    while (1) {
        k_sleep(K_SECONDS(5)); // Simulate a periodic task
    }
}
