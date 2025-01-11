// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_6,   KC_5,   KC_4,   KC_3,   KC_2,   KC_1,   KC_GRAVE,
        KC_LEFT_BRACKET,    KC_T,   KC_R,   KC_E,   KC_W,   KC_Q,   KC_TAB,
        KC_NO,  KC_G,   KC_F,   KC_D,   KC_S,   KC_A,   KC_CAPS_LOCK,
        KC_B,   KC_V,   KC_C,   KC_X,   KC_Z,   KC_LEFT_SHIFT,
        KC_HOME,    KC_SPACE,   KC_BACKSPACE,   KC_RIGHT,   KC_LEFT,    KC_NO,  KC_NO,
        KC_END, KC_LEFT_CTRL,   KC_LEFT_GUI
    )
};
