/* Good on you for modifying your layout! if you don't have
 * time to read the QMK docs, a list of keycodes can be found at
 *
 * https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
 *
 * There's also a template for adding new layers at the bottom of this file!
 */

#include QMK_KEYBOARD_H
#include "print.h"

#define BASE 0 // default layer
#define SYMB 1 // symbols
#define NUMB 2 // numbers/motion

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_gergo(
    KC_TAB,                 KC_Q,  KC_W,   KC_E,   KC_R, KC_T,                                          KC_Y,    KC_U, KC_I, KC_O,   KC_P,    KC_BSPC,
    MT(MOD_LCTL, KC_BSPC),  KC_A,  KC_S,   KC_D,   KC_F, KC_G, KC_HOME,                       KC_GRV,   KC_H,    KC_J, KC_K, KC_L,   KC_SCLN, KC_QUOT,
    KC_LSFT,                KC_Z,  KC_X,   KC_C,   KC_V, KC_B, KC_END,  KC_PGUP,     KC_PGDN, KC_MPLY,  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_MINS,
  MT(MOD_LGUI, KC_DEL), COMPOSE, LT(SYMB, KC_SPC), LT(NUMB, KC_ESC),    LT(SYMB, KC_ENT), LT(NUMB, KC_SPC), KC_TAB, KC_LOCK
    ),

[SYMB] = LAYOUT_gergo(
    KC_TRNS, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE,                                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS,
    KC_TRNS, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRV,  KC_TRNS,                          KC_TRNS, KC_PLUS, KC_MINS, KC_SLSH, KC_ASTR, KC_PERC, KC_QUOT,
    KC_TRNS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_AMPR, KC_EQL,  KC_COMM, KC_DOT,  KC_SLSH, KC_MINS,
                                        KC_TRNS, KC_TRNS, KC_SCLN, KC_EQL,         KC_EQL,  KC_SCLN, KC_PGUP, KC_DEL
    ),

[NUMB] = LAYOUT_gergo(
    KC_TRNS, KC_1, 	  KC_2,    KC_3,    KC_4,    KC_5,                                             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
    KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                         KC_TRNS,  KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_VOLU,
    KC_TRNS, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS,     KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD,
                                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
    ),
};

void keyboard_post_init_user(void) {
    declare_compose_seq((uint64_t[]){KC_G, KC_A}, 2, "α");
    declare_compose_seq((uint64_t[]){KC_G, KC_B}, 2, "β");
    declare_compose_seq((uint64_t[]){KC_S, KC_H, KC_R, KC_U, KC_G}, 5, "¯\\_(ツ)_/¯");
}
