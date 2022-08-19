#pragma once

#include "keymap.h"

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ $ │ + │ [ │ { │ ( │ & │ = │ ) │ } │ ] │ * │ ! │ | │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ ; │ , │ . │ P │ Y │ F │ G │ C │ R │ L │ / │ @ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ O │ E │ U │ I │ D │ H │ T │ N │ S │ - │ \ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ \ │ ' │ Q │ J │ K │ X │ B │ M │ W │ V │ Z │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DV_DLR  KC_GRV  // $
#define DV_PLUS KC_1    // +
#define DV_LBRC KC_2    // [
#define DV_LCBR KC_3    // {
#define DV_LPRN KC_4    // (
#define DV_AMPR KC_5    // &
#define DV_EQL  KC_6    // =
#define DV_RPRN KC_7    // )
#define DV_RCBR KC_8    // }
#define DV_RBRC KC_9    // ]
#define DV_ASTR KC_0    // *
#define DV_EXLM KC_MINS // !
#define DV_PIPE KC_EQL  // |

// Row 2
#define DV_SCLN KC_Q    // ;
#define DV_COMM KC_W    // ,
#define DV_DOT  KC_E    // .
#define DV_P    KC_R    // P
#define DV_Y    KC_T    // Y
#define DV_F    KC_Y    // F
#define DV_G    KC_U    // G
#define DV_C    KC_I    // C
#define DV_R    KC_O    // R
#define DV_L    KC_P    // L
#define DV_SLSH KC_LBRC // /
#define DV_AT   KC_RBRC // @

// Row 3
#define DV_A    KC_A    // A
#define DV_O    KC_S    // O
#define DV_E    KC_D    // E
#define DV_U    KC_F    // U
#define DV_I    KC_G    // I
#define DV_D    KC_H    // D
#define DV_H    KC_J    // H
#define DV_T    KC_K    // T
#define DV_N    KC_L    // N
#define DV_S    KC_SCLN // S
#define DV_MINS KC_QUOT // -
#define DV_BSLS KC_NUBS // (backslash)

// Row 4
#define DV_QUOT KC_Z // '
#define DV_Q    KC_X // Q
#define DV_J    KC_C // J
#define DV_K    KC_V // K
#define DV_X    KC_B // X
#define DV_B    KC_N // B
#define DV_M    KC_M // M
#define DV_W    KC_COMM // W
#define DV_V    KC_DOT // V
#define DV_Z    KC_SLSH // Z
#define DV_MINB KC_ENT // -
#define DV_EQLB KC_SPC // =

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ~ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ % │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ^ │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ ¨ │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define DV_1 S(KC_1) // 1
#define DV_2 S(KC_2) // 2
#define DV_3 S(KC_3) // 3
#define DV_4 S(KC_4) // 4
#define DV_5 S(KC_5) // 5
#define DV_6 S(KC_6) // 6
#define DV_7 S(KC_7) // 7
#define DV_8 S(KC_8) // 8
#define DV_9 S(KC_9) // 9
#define DV_0 S(KC_0) // 0

// Row 2
#define DV_HASH S(DV_BSLS)