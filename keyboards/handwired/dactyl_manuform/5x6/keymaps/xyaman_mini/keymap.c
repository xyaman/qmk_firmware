#include QMK_KEYBOARD_H
#include "keymap_dvorak.h"

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_ESC, DV_PLUS, DV_LBRC, DV_LCBR, DV_LPRN, DV_AMPR,                         DV_EQL, DV_RPRN, DV_RCBR, DV_RBRC, DV_ASTR, DV_EXLM,
        KC_TAB, DV_SCLN, DV_COMM, DV_DOT,    DV_P,    DV_Y,                            DV_F,    DV_G,    DV_C,    DV_R,   DV_L,  DV_SLSH,
        KC_LSFT,   DV_A,    DV_O,   DV_E,    DV_U,    DV_I,                            DV_D,    DV_H,    DV_T,    DV_N,   DV_S,  DV_MINS,
        KC_BSLS,DV_QUOT,    DV_Q,   DV_J,    DV_K,    DV_X,                            DV_B,    DV_M,    DV_W,    DV_V,   DV_Z,  KC_RSFT,
                        KC_LEFT,KC_RIGHT,                                                        KC_UP, KC_DOWN,
                                         RAISE, XXXXXXX,                        XXXXXXX,  LOWER,
                                         KC_LGUI,KC_SPC,                         KC_ENT, KC_DEL,
                                         KC_LOPT,KC_RCTL,                        KC_BSPC, KC_RSFT
    ),

    [_LOWER] = LAYOUT_5x6(
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                            XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                            XXXXXXX,   DV_7,   DV_8,   DV_9,  DV_AT, DV_DLR,
        XXXXXXX,XXXXXXX,XXXXXXX,KC_LSFT,XXXXXXX,XXXXXXX,                            XXXXXXX,   DV_4,   DV_5,   DV_6,DV_PIPE,XXXXXXX,
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                            XXXXXXX,   DV_1,   DV_2,   DV_3,   DV_0,XXXXXXX,
                        _______,_______,                                                        _______,   DV_0,
                                            _______,_______,                   _______,_______,
                                            _______,_______,                   _______,_______,
                                            _______,_______,                   _______,_______

    ),

    [_RAISE] = LAYOUT_5x6(
          KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
          _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
          _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
          _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______
    )
};
