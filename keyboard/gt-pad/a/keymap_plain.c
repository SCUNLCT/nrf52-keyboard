/*
Copyright (C) 2018,2019 Jim Jiang <jim@lotlab.org>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "keymap_common.h"
#include "keyboard_fn.h"
#include "user_fn.h"

/* 
 * @brief 按键映射
 * 下面的按键映射与按键布局的第一组实际布局对应
 */

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP_ENC(
		KC_P6,  KC_PSLS,  KC_PAST,  KC_PMNS,\
		         KC_P7,    KC_P8,    KC_P9,  \
		KC_P4,   KC_P5,    KC_P6,  \
		KC_P1,   KC_P2,    KC_P3,  \
		KC_P0,  KC_PENT,  \
		  KC_VOLD, KC_VOLU, KC_MUTE ),

	KEYMAP_ENC(
		KC_TRNS,  KC_MYCM,   KC_MAIL,  KC_MSEL,\
		          KC_FN7,    KC_FN8,   KC_FN9, \
		KC_FN4,   KC_FN5,    KC_FN6,  \
		KC_FN1,   KC_FN2,    KC_FN3,  \
		KC_FN10,                       KC_FN11, \
		KC_BSPC,  KC_CALC,   KC_TRNS),

	KEYMAP_ENC(  //Android电视遥控器
		KC_NO,    KC_NO,    KC_VOLU, KC_VOLD,\
		          KC_NO,    KC_NO,   KC_HOME, \
		KC_LEFT,  KC_ENTER, KC_RIGHT,  \
		KC_NO,    KC_NO,    KC_NO,    \
		KC_NO,    KC_NO, \
		KC_TRNS,  KC_TRNS,  KC_TRNS ),
};

const action_t fn_actions[] = {
	ACTION_LAYER_TAP(2, KC_NLCK),
	ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_0),
	ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_1),
	ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_2),
	ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_READV),
	ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_REBOND),
	ACTION_FUNCTION_OPT(RGB_LIGHT_CONTROL, RGB_LIGHT_STEP),
    ACTION_FUNCTION_OPT(RGB_LIGHT_CONTROL, RGB_LIGHT_TOGGLE),
    ACTION_FUNCTION_OPT(RGB_LIGHT_CONTROL, RGB_LIGHT_TML),
	ACTION_FUNCTION_OPT(RGB_LIGHT_CONTROL, RGB_LIGHT_IHUE),
	ACTION_FUNCTION_OPT(RGB_LIGHT_CONTROL, RGB_LIGHT_DHUE),
	ACTION_LAYER_TAP(1, KC_PDOT),
};
