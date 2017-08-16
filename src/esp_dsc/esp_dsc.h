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
                           // RJ45 pin 8 - GND
                           // RJ45 pin 7 - Vcc
#define CHAN_DEC_A   5     // RJ45 pin 5 NodeMCU D1
#define CHAN_DEC_B   4     // RJ45 pin 6 NodeMCU D2
#define CHAN_RA_A   12     // RJ45 pin 1 NodeMCU D6
#define CHAN_RA_B   14     // RJ45 pin 2 NodeMCU D5
                           // RJ45 pin 3 - Vcc
                           // RJ45 pin 4 - GND 

#define ESP_DSC_VERSION "0.0.2"
#define MAX_SRV_CLIENTS 4
#define MAX_AP_RETRIES 60
#define SERIAL_SPEED 115200
#define SERIAL_PRINT_DELAY 1000

#define BUFF_LEN 10
#define CLIENT_BUFF_LEN 36

#endif // __ESP_DSC_H__
