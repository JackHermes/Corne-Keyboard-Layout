#include QMK_KEYBOARD_H

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LCTL_T(KC_S)
#define HOME_D LALT_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K LALT_T(KC_K)
#define HOME_L RCTL_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	 //[0] = LAYOUT_split_3x6_3(
	 //,-----------------------------------------------------.                    ,-----------------------------------------------------.
	 //   KC_ESC,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
	 //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	 //   KC_TAB,  HOME_A,  HOME_S,  HOME_D,  HOME_F,   KC_G,                        KC_H,   HOME_J,  HOME_K,  HOME_L,  HOME_SCLN, KC_QUOT,
	 //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	 //   KC_TAB,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                        KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
	 //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
	 //                                         MO(4),   MO(1),  KC_ENT,     KC_SPC,   MO(2), MO(5)
	 //                                     `--------------------------'  `--------------------------'
	 //),
	[0] = LAYOUT_split_3x6_3(KC_ESC,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_TAB, HOME_A, HOME_S, HOME_D, HOME_F, KC_G, KC_H, HOME_J, HOME_K, HOME_L, HOME_SCLN, KC_QUOT, KC_TAB, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_PENT, MO(4), MO(1), KC_ENT, KC_SPC, MO(2), MO(5)),
	[1] = LAYOUT_split_3x6_3(KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, LCTL(KC_C), KC_PGUP, KC_F5, KC_F6, KC_F7, KC_F8, KC_DEL, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, LCTL(KC_V), KC_PGDN, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_TRNS),
	[2] = LAYOUT_split_3x6_3(KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_ENT, LCTL(KC_C), KC_F5, KC_F6, KC_F7, KC_F8, KC_DEL, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_INS, LCTL(KC_V), KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, MO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_split_3x6_3(KC_TRNS, KC_CAPS, KC_NLCK, KC_VOLD, KC_VOLU, LSFT(KC_GRV), KC_PSLS, KC_7, KC_8, KC_9, KC_PMNS, KC_BSPC, KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_PAST, KC_4, KC_5, KC_6, KC_PPLS, KC_PDOT, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_PIPE, KC_0, KC_1, KC_2, KC_3, KC_EQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT_split_3x6_3(KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSLS, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_BSPC, KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_UNDS, KC_F1, KC_F2, KC_F3, KC_F4, KC_DEL, KC_TRNS, LGUI(KC_LEFT), LGUI(KC_DOWN), LGUI(KC_UP), LGUI(KC_RGHT), KC_NO, KC_NO, LGUI(KC_LEFT), LGUI(KC_UP), LGUI(KC_DOWN), LGUI(KC_RGHT), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(6)),
	[5] = LAYOUT_split_3x6_3(KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSLS, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_BSPC, KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_UNDS, KC_F1, KC_F2, KC_F3, KC_F4, KC_DEL, KC_TRNS, LGUI(KC_LEFT), LGUI(KC_DOWN), LGUI(KC_UP), LGUI(KC_RGHT), KC_NO, KC_NO, LGUI(KC_LEFT), LGUI(KC_UP), LGUI(KC_DOWN), LGUI(KC_RGHT), KC_TRNS, MO(6), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[6] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS)
};
