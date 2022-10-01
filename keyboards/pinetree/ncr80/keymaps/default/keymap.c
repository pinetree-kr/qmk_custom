/* Copyright 2021 Moritz Plattner
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_KEYMAP(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7,
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I,
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,
		KC_LSFT, KC_SPC, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M,
		KC_LALT, KC_LCTL, KC_LGUI, MO(1), KC_APP, KC_SPC, KC_RALT, KC_RALT,
		KC_PAUS, KC_SLCK, KC_F12, KC_F11, KC_F10, KC_PSCR, KC_F9, KC_F8,
		KC_0, KC_PGUP, KC_HOME, KC_BSPC, KC_SPC, KC_EQL, KC_INS, KC_MINS, KC_9,
		KC_PGDN, KC_END, KC_ENT, KC_RBRC, KC_LBRC, KC_DEL, KC_P, KC_O,
		KC_UP, KC_BSLS, KC_QUOT, KC_SCLN, KC_L,
		KC_RGHT, KC_DOWN, KC_SPC, KC_RSFT, KC_SLSH, KC_LEFT, KC_DOT, KC_COMM),

	[1] = LAYOUT_KEYMAP(
		RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		RGB_TOG, KC_TRNS, KC_TRNS, KC_TRNS, RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		BL_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUI, RGB_SAI,
		KC_TRNS, KC_TRNS, KC_TRNS, BL_DEC, BL_INC, BL_STEP, KC_TRNS, KC_TRNS, RGB_HUD,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_NLCK, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, RGB_VAI,
		RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_VAI, RGB_VAD, RGB_SAD),
};



void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		DDRB |= (1 << 5); PORTB &= ~(1 << 5);
	} else {
		DDRB &= ~(1 << 5); PORTB &= ~(1 << 5);
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		DDRC |= (1 << 6); PORTC &= ~(1 << 6);
	} else {
		DDRC &= ~(1 << 6); PORTC &= ~(1 << 6);
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		DDRC |= (1 << 7); PORTC &= ~(1 << 7);
	} else {
		DDRC &= ~(1 << 7); PORTC &= ~(1 << 7);
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}
