#include "vbn.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,
    LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),
    KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,
    U_NP,              U_NP,              U_NA,              LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB), LT(FUN, KC_ENT),   LT(NUM, KC_BSPC),  U_NA,              U_NP,              U_NP
  ),
 [NAV] = LAYOUT_miryoku(
    U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,
    KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           KC_DEL,
    U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            KC_INS,
    U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_BSPC,           U_NA,              U_NP,              U_NP
  ),
  [MOUSE] = LAYOUT_miryoku(
    RESET,             U_NA,              U_NA,              U_NA,              U_NA,              KC_MPLY,           KC_VOLD,           KC_VOLU,           KC_MUTE,           KC_MPRV,
    KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           KC_BTN2,
    U_NA,              KC_ALGR,           U_NA,              U_NA,              U_NA,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           KC_MNXT,
    U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN1,           KC_BTN3,           U_NA,              U_NP,              U_NP
  ),
  [NUM] = LAYOUT_miryoku(
    KC_1,              KC_2,              KC_3,              KC_4,              KC_5,              U_NA,              KC_GRV,            KC_MINS,           KC_EQL,            U_NA,
    LGUI_T(KC_6),      LALT_T(KC_7),      LCTL_T(KC_8),      LSFT_T(KC_9),      KC_0,              U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,
    KC_BSLS,           KC_DOT,            KC_SCLN,           KC_LBRC,           KC_RBRC,           U_NA,              U_NA,              U_NA,              U_NA,              U_NA,
    U_NP,              U_NP,              U_NA,              KC_SPC,            KC_ESC,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP
  ),
  [FUN] = LAYOUT_miryoku(
    KC_F1,             KC_F2,             KC_F3,             KC_F4,             KC_F5,            U_NA,              U_NA,              U_NA,              U_NA,               U_NA,
    LGUI_T(KC_F6),     LALT_T(KC_F7),     LCTL_T(KC_F8),     LSFT_T(KC_F9),     KC_F10,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,            KC_LGUI,
    KC_F11,            KC_F12,            KC_F13,            KC_F14,            KC_F15,           U_NA,              U_NA,              U_NA,              U_NA,               U_NA,
    U_NP,              U_NP,              U_NA,              U_NA,              U_NA,             U_NA,              U_NA,              U_NA,              U_NP,               U_NP
  )
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LGUI_T(KC_A):
        case LGUI_T(KC_QUOT):
            return TAPPING_TERM + 100;
        case LSFT_T(KC_F):
        case LSFT_T(KC_J):
            return TAPPING_TERM - 100;
        default:
            return TAPPING_TERM;
    }
}
