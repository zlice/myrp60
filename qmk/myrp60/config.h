// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


#define DEBUG_MATRIX_SCAN_RATE

//#define QMK_WAITING_TEST_BUSY_PIN GP8
//#define QMK_WAITING_TEST_YIELD_PIN GP9

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define USB_POLLING_INTERVAL_MS 1
#define USB_MAX_POWER_CONSUMPTION 100

//#define BACKLIGHT_PWM_CHANNEL RP2040_PWM_CHANNEL_B

//#define AUDIO_PIN GP16
//#define AUDIO_PWM_DRIVER PWMD0
//#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A

//#define ADC_PIN GP26
