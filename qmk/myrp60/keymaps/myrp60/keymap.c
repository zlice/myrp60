/* Copyright 2024 zlice
 * Copyright 2018 Jack Humbert
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

// Make special keycodes more visible
#define USB_POLLING_INTERVAL_MS 1
#define ____ KC_TRNS
#define XXXX KC_NO

#include QMK_KEYBOARD_H
extern keymap_config_t keymap_config;

/*
  See PCB layout: '-' (minus) is on same col as 6 but row4
                  [ is on same col as 8 but row 4
                  " is on same col as = and ] but row4
                  ...
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
      // qwerty
  [0] = {
       KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    /*r6c4 KC_MINS*/  KC_EQL,  KC_BSPC,
       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    /*r8c4 KC_LBR*/   KC_RBRC, KC_BSLS,
       KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, /*nil*/           KC_QUOT, KC_ENT,
       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, /*nil*/           KC_UP, KC_RSFT,
       MO(2), KC_LGUI, KC_LALT,   KC_LALT, XXXX,    KC_SPC,  KC_MINS,          XXXX,    KC_LBRC, KC_APP,  /*nil*/           KC_LEFT, KC_DOWN,  KC_RGHT
      },
      // weird layout
  [1] = {
       KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    /*r6c4 KC_MINS*/  KC_EQL,  KC_BSPC,
       KC_TAB,  KC_Y,    KC_W,    KC_K,    KC_M,    KC_SLSH, KC_COMM, KC_C,    KC_F,    KC_G,    KC_Q,    /*r8c4 KC_LBRC*/  KC_RBRC, KC_BSLS,
       KC_LCTL, KC_O,    KC_E,    KC_R,    KC_T,    KC_L,    KC_D,    KC_N,    KC_I,    KC_S,    KC_A,    /*nil*/           KC_QUOT, KC_ENT,
       KC_LSFT, KC_Z,    KC_SCLN, KC_B,    KC_V,    KC_P,    KC_H,    KC_U,    KC_X,    KC_DOT,  KC_J,    /*nil*/           KC_UP, KC_RSFT,
       MO(2), KC_LGUI, KC_LALT,   KC_LALT, XXXX,    KC_SPC,  KC_MINS,          XXXX,    XXXX,    KC_APP,  /*nil*/           KC_LEFT, KC_DOWN,  KC_RGHT
      },
      // mod layer
[2] = {
       KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10, /*r6c4 KC_F11*/  KC_F12,  KC_DEL,
       ____,    ____,    ____,    ____,    ____,    ____,   DF(0),   KC_PGUP, KC_UP,   KC_PGDN, KC_PSCR, /*r8c4 KC_ESC*/  KC_BSPC, ____,
       ____,    ____,    ____,    ____,    KC_GRV,  ____,   KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_INS, /*nil*/          KC_DEL,  ____,
       ____,    KC_MUTE, ____,    ____,    ____,    DF(1),  KC_END,    ____,    ____,  ____, ____,      /*nil*/          ____,  ____,
       ____,    ____, KC_SCRL,    ____,    XXXX,    ____,   KC_F11,             XXXX,  XXXX,    QK_RBT, /*nil*/          ____, ____,  ____
      },
};

