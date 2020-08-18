/* argd's keycodes
 *
 * https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
 */

#include QMK_KEYBOARD_H
#include "print.h"

#define BASE 0 // default layer
#define SYMB 1 // symbols
#define NUMB 2 // numbers/motion

#define ST(kc) LT(SYMB, kc)
#define NT(kc) LT(NUMB, kc)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_gergo(
         KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
  KC_TAB,CTL_T(KC_A),SFT_T(KC_S), NT(KC_D),ST(KC_F),    KC_G, KC_HOME,                        KC_PGUP,    KC_H,ST(KC_J),NT(KC_K),SFT_T(KC_L),CTL_T(KC_SCLN),KC_QUOT,
        KC_LALT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_END, _______,      _______, KC_PGDN,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RALT,
                                            KC_LGUI, COMPOSE,  KC_SPC,  KC_ENT,       KC_ENT,  KC_SPC, KC_LOCK, KC_RGUI
    ),

[SYMB] = LAYOUT_gergo(
        _______, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE,                                          _______, _______, _______, _______, _______, _______,
        _______, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRV,  _______,                        _______, KC_PLUS, KC_MINS, KC_BSLS, KC_ASTR, KC_PERC, _______,
        _______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, _______, _______,      _______, _______, KC_AMPR, KC_EQL,  _______, _______,  _______, _______,
                                            _______, _______, _______, _______,      _______, _______, _______, _______
    ),

[NUMB] = LAYOUT_gergo(
        _______, _______, _______,   KC_UP, _______, _______,                                          _______,   KC_P7,   KC_P8,   KC_P9, _______, _______,
        _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,                        _______, _______,   KC_P4,   KC_P5,   KC_P6, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______,   KC_P1,   KC_P2,   KC_P3, _______, _______,
                                            _______, _______, _______, _______,      _______, _______,   KC_P0, KC_PDOT
    ),
};

void keyboard_post_init_user(void) {
    declare_compose_seq((uint64_t[]){KC_G, KC_A}, 2, "α");
    declare_compose_seq((uint64_t[]){KC_G, KC_B}, 2, "β");
    declare_compose_seq((uint64_t[]){KC_S, KC_H, KC_R, KC_U, KC_G}, 5, "¯\\_(ツ)_/¯");
}
