/* argd's keycodes
 *
 * https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
 */

#include QMK_KEYBOARD_H
#include "print.h"

enum layers {
    BASE,
    SYMB,
    NAVI,
};

#define SYMBSPC LT(SYMB, KC_SPC)
#define NAVIENT LT(NAVI, KC_ENT)
#define ALTDEL LGUI_T(KC_DEL)
#define CTLQUOT RCTL_T(KC_QUOT)
#define LTAPCAPS LSFT_T(KC_CAPS)
#define RTAPCAPS RSFT_T(KC_CAPS)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_gergo(
 LGUI_T(KC_ESC),    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_PIPE,
        KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, _______,                        _______,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, CTLQUOT,
       LTAPCAPS,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, _______, _______,      _______, _______,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,RTAPCAPS,
                                             KC_TAB,  ALTDEL, SYMBSPC, NAVIENT,      SYMBSPC, NAVIENT, KC_BSPC, COMPOSE
    ),

[SYMB] = LAYOUT_gergo(
        _______, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE,                                          _______, _______, _______, _______, _______, _______,
        _______, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRV,  _______,                        _______, KC_PLUS, KC_MINS, KC_BSLS, KC_ASTR, _______, _______,
        _______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, _______, _______,      _______, _______, KC_AMPR, KC_EQL,  _______, _______, _______, _______,
                                            _______, _______, _______, _______,      _______, _______, _______, _______
    ),

[NAVI] = LAYOUT_gergo(
        _______, _______, KC_HOME,   KC_UP,  KC_END, KC_PGUP,                                          _______,   KC_P7,   KC_P8,   KC_P9, _______, _______,
        _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______,                        _______, _______,   KC_P4,   KC_P5,   KC_P6, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______,   KC_P1,   KC_P2,   KC_P3, _______, _______,
                                            _______, _______, _______, _______,      _______, _______,   KC_P0, KC_PDOT
    ),
};

void keyboard_post_init_user(void) {
    declare_compose_seq((uint64_t[]){KC_G, KC_A}, 2, "α");
    declare_compose_seq((uint64_t[]){KC_G, KC_B}, 2, "β");
    declare_compose_seq((uint64_t[]){KC_S, KC_H, KC_R, KC_U, KC_G}, 5, "¯\\_(ツ)_/¯");
}
