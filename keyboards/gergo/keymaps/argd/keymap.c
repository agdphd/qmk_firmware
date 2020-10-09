/* argd's keycodes
 *
 * https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
 */

#include QMK_KEYBOARD_H
#include "print.h"

enum layers {
    BASE,
    LSYM,
    RSYM,
    LNAV,
    RNAV,
    LFUN,
    RFUN,
};

#define XXX KC_NO

#define LAYOUT_gergo_rightlayer(\
K01, K02, K03, K04, K05,\
K06, K07, K08, K09, K10,\
K11, K12, K13, K14, K15,\
K16, K17, K18, K19\
)\
LAYOUT_gergo(\
            XXX, XXX, XXX, XXX, XXX, XXX,                          K01, K02, K03, K04, K05, XXX,\
  XXX,KC_LGUI,KC_LALT,KC_LCTL,KC_LSFT,XXX,XXX,                XXX, K06, K07, K08, K09, K10, XXX,\
            XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX,      XXX, XXX, K11, K12, K13, K14, K15, XXX,\
                                XXX, XXX, XXX, XXX,      K16, K17, K18, K19\
)

#define LAYOUT_gergo_leftlayer(\
K01, K02, K03, K04, K05,\
K06, K07, K08, K09, K10,\
K11, K12, K13, K14, K15,\
K16, K17, K18, K19\
)\
LAYOUT_gergo(\
            XXX, K01, K02, K03, K04, K05,                          XXX, XXX, XXX, XXX, XXX, XXX,\
            XXX, K06, K07, K08, K09, K10, XXX,                XXX,XXX,KC_LSFT, KC_LCTL,KC_LALT,KC_LGUI,XXX,\
            XXX, K11, K12, K13, K14, K15, XXX, XXX,      XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX,\
                                K16, K17, K18, K19,      XXX, XXX, XXX, XXX\
)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_gergo(
 XXXXXXX,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, XXXXXXX,
 XXXXXXX,GUI_T(KC_A),ALT_T(KC_S),CTL_T(KC_D),SFT_T(KC_F), KC_G, XXXXXXX,     XXXXXXX,KC_H,SFT_T(KC_J),CTL_T(KC_K),ALT_T(KC_L),GUI_T(KC_QUOT),XXXXXXX,
 XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, XXXXXXX, XXXXXXX,        RESET, XXXXXXX,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
               KC_APP,LT(RFUN,KC_ESC),LT(RSYM,KC_SPC),LT(RNAV,KC_TAB),        LT(LNAV,KC_ENT),LT(LSYM,KC_BSPC),LT(LFUN,KC_DEL), COMPOSE
),

[LSYM] = LAYOUT_gergo_leftlayer(
KC_EXLM,   KC_AT, KC_LCBR, KC_RCBR, KC_PIPE,
KC_HASH,  KC_DLR, KC_LPRN, KC_RPRN,  KC_GRV,
KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),
[RSYM] = LAYOUT_gergo_rightlayer(
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXX,
KC_PLUS, KC_MINS, KC_BSLS, KC_ASTR, KC_SCLN,
XXXXXXX, KC_AMPR, KC_EQL,  XXXXXXX, XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

[LNAV] = LAYOUT_gergo_leftlayer(
XXXXXXX, KC_HOME,   KC_UP, KC_PGUP, XXXXXXX,
KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,
 KC_INS,  KC_END, XXXXXXX, KC_PGDN, XXXXXXX,
         KC_APP,   KC_ESC,  KC_SPC,  KC_TAB
),
[RNAV] = LAYOUT_gergo_rightlayer(
KC_PSLS,   KC_P7,   KC_P8,   KC_P9, KC_PPLS,
KC_PAST,   KC_P4,   KC_P5,   KC_P6, KC_PMNS,
KC_PEQL,   KC_P1,   KC_P2,   KC_P3, KC_PENT,
XXXXXXX, XXXXXXX,   KC_P0, KC_PDOT
),

[LFUN] = LAYOUT_gergo_leftlayer(
XXXXXXX, XXXXXXX, KC_BRID, KC_BRIU, KC_MPLY,
XXXXXXX, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),
[RFUN] = LAYOUT_gergo_rightlayer(
XXXXXXX,   KC_F7,   KC_F8,   KC_F9,  KC_F12,
XXXXXXX,   KC_F4,   KC_F5,   KC_F6,  KC_F11,
XXXXXXX,   KC_F1,   KC_F2,   KC_F3,  KC_F10,
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),
};

void keyboard_post_init_user(void) {
    declare_compose_seq((uint64_t[]){KC_MINS, KC_MINS, KC_DOT}, 3, "–"); // endash
    declare_compose_seq((uint64_t[]){KC_MINS, KC_MINS, KC_DOT}, 3, "—"); // emdash
    declare_compose_seq((uint64_t[]){KC_S, KC_H, KC_R, KC_U, KC_G}, 5, "¯\\_(ツ)_/¯");
    declare_compose_seq((uint64_t[]){KC_F, KC_L, KC_I, KC_P}, 4, "(╯°□°)╯︵ ┻━┻");
    declare_compose_seq((uint64_t[]){KC_H, KC_A, KC_P, KC_P, KC_Y}, 5, "ᕕ( ᐛ )ᕗ");
    declare_compose_seq((uint64_t[]){KC_Y, KC_U, KC_N, KC_O}, 4, "ლ(ಠ益ಠლ)");
}

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_90;
}

void render_layer_state(void) {
    oled_write_P(PSTR("LAYER"), false);
    oled_write_P(PSTR("symb\n"), layer_state_is(LSYM) || layer_state_is(RSYM));
    oled_write_P(PSTR("navi\n"), layer_state_is(LNAV) || layer_state_is(RNAV));
    oled_write_P(PSTR("func\n"), layer_state_is(LFUN) || layer_state_is(RFUN));
}

void render_mod_state(void) {
    uint8_t modifiers = get_mods()|get_oneshot_mods();
    oled_write_P(PSTR("MODS\n"), false);
    oled_write_P(PSTR("shft\n"), (modifiers & MOD_MASK_SHIFT));
    oled_write_P(PSTR("ctrl\n"), (modifiers & MOD_MASK_CTRL));
    oled_write_P(PSTR("alt\n"), (modifiers & MOD_MASK_ALT));
    oled_write_P(PSTR("gui\n"), (modifiers & MOD_MASK_GUI));
}

void render_keylock_state(void) {
    led_t led_state = host_keyboard_led_state();
    oled_write_P(PSTR("LOCK\n"), false);
    oled_write_P(PSTR("caps\n"), led_state.caps_lock);
    oled_write_P(PSTR("comp\n"), compose_active());
}

void render_logo(void) {
    oled_write_P(PSTR("gergo"), false);
}

void render_blank_line(void) {
    oled_write_P(PSTR("\n"), false);
}

void oled_task_user(void) {
    render_layer_state();
    render_blank_line();
    
    render_mod_state();
    render_blank_line();
    
    render_keylock_state();
    render_blank_line();
    
    render_logo();
}
#endif
