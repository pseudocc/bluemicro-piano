// vim: noet ts=8 sw=8 sts=0
#ifndef HARDWARE_CONFIG_H
#define HARDWARE_CONFIG_H

#include "hardware_variants.h"

/**
 * nice!nano v2 Pinouts
 *      _________
 * +----|       |----+
 * | B- |       | B+ | // this 2 pins are not used
 * |006 |       | RAW|
 * |008 | -   - | GND|
 * |GND           RST|
 * |GND           VCC|
 * |017           031|
 * |020  +-----+  029|
 * |022  |     |  002|
 * |024  |     |  115|
 * |100  +-----+  113|
 * |011           111|
 * |104 nice!nano 010|
 * |106 v2.0 /\/\ 009|
 * +-----------------+
**/

#define MATRIX_ROWS 1
#define MATRIX_COLS 9
#define MATRIX_ROW_PINS { 33 }
#define MATRIX_COL_PINS { 36, 43, 24, 9, 38, 45, 22, 8, 6 }
#define UNUSED_PINS {}

// used in debug_cli.cpp to bypass 0.14 and 0.16 that are directly connected to 0.18 (reset)
#define ARDUINO_NICE_NANO 1

#define DIODE_DIRECTION COL2ROW
#define BACKLIGHT_PWM_ON 0
#define BATTERY_TYPE BATT_LIPO
#define VBAT_PIN  31
#define VCC_PIN 12
#define VCC_POLARITY_ON 0
#define STATUS_BLE_LED_PIN  15  //blue = 0.15

#endif
