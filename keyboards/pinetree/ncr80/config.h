/*
Copyright 2021 Moritz Plattner
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Custom
#define PRODUCT         NCR-80

/* Set 1 kHz polling rate and force USB NKRO */
#define USB_POLLING_INTERVAL_MS 1
#define FORCE_NKRO

/* key matrix size */
#define MATRIX_ROWS 11
#define MATRIX_COLS 9

#define MATRIX_ROW_PINS { E6, B0, B1, B2, B3, B7, F7, F6, F5, F4, F1 }
#define MATRIX_COL_PINS { D0, D1, D2, D3, D5, D4, D6, D7, B4 }
// #define UNUSED_PINS { B6, C6, C7 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Backlight */
#define BACKLIGHT_PIN B6 // Timer 1 on mega32u4
#define BACKLIGHT_LEVELS 5
// #define BACKLIGHT_BREATHING
// #define BACKLIGHT_ON_STATE 1

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)


/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

/* Underglow */
#define RGB_DI_PIN E2
#define RGBLED_NUM 16
#define RGBLIGHT_ANIMATIONS

#define RGBLED_NUM 16
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
