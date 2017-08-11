#ifndef __ESP_DSC_H__
#define __ESP_DSC_H__

#include <Arduino.h>

/* 
 * For security reasons, define your WIFI_SSID and WIFI_PASSWORD 
 * in config.h
 */
#include "config.h"

/*
 * DO NOT EDIT BEYOND THIS POINT!
 */

/* Encoder pins on RJ45 */
#define CHAN_DEC_A   5     // RJ45 pin 7 NodeMCU D1
#define CHAN_DEC_B   4     // RJ45 pin 5 NodeMCU D2
#define CHAN_RA_A    2     // RJ45 pin 3 NodeMCU D4
#define CHAN_RA_B    14    // RJ45 pin 1 NodeMCU D5

/* Friendly names for the NodeMCU V2 version */
#define D0 16
#define D1 5
#define D2 4
#define D3 0
#define D4 2
#define D5 14
#define D6 12
#define D7 13
#define D8 15

#define ESP_DSC_VERSION "0.0.2"
#define MAX_SRV_CLIENTS 4
#define MAX_AP_RETRIES 60
#define SERIAL_SPEED 115200
#define SERIAL_PRINT_DELAY 1000

#define BUFF_LEN 10
#define CLIENT_BUFF_LEN 36

#endif // __ESP_DSC_H__
