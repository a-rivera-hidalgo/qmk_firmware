/*
Copyright 2021 Spencer Deven <splitlogicdesign@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License

along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#define DEVICE_VER 0x0100
#define VENDOR_ID 0x1234
#define PRODUCT_ID 0x5678

#ifdef OLED_ENABLE
  #define OLED_DISPLAY_128X64   //pixel size
  #define OLED_TIMEOUT 400000  //Clock frequency in Hz
  #define OLED_DISPLAY_ADDRESS 0x78
  #define OLED_BRIGHTNESS 128
  #endif

#ifdef ENCODER_ENABLE
  #define ENCODER_A_PINS { GP6 }  // This corresponds to the encoder's CLK (or PAD_A)
  #define ENCODERS_B_PINS { GP5 }  // This corresponds to the encoder's DT  (or PAD_B)
#endif

/* Double tap reset button to enter bootloader */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define I2C1_SCL_PIN GP5
#define I2C1_SDA_PIN GP4

#define ENCOER_PUSHBUTTON_PIN GP2

#define DIODE_DIRECTION COL2ROW  // 🔥 Required for QMK to compile
#define MATRIX_ROWS 6  // 🔥 Define a 1x1 matrix for your one-key test
#define MATRIX_COLS 18
