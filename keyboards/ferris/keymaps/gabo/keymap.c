#include QMK_KEYBOARD_H

#define KEYMAP LAYOUT
//home rows configuration

// Left-hand home row mods
#define HOME_Z LGUI_T(KC_Z)
#define HOME_R LALT_T(KC_R)
#define HOME_S LSFT_T(KC_S)
#define HOME_T LCTL_T(KC_T)

// Right-hand home row mods
#define HOME_N RCTL_T(KC_N)
#define HOME_E RSFT_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_O RGUI_T(KC_O)

enum layers {
  _COLEMAK,
  _NUM,
  _SYM,
  _EDIT,
  _NAV,
  _FN
};

enum custom_keycodes {
  COLEMAK = SAFE_RANGE,
  NUM,
  SYM,
  EDIT,
  NAV,
  FN,
  HOMOLOGO, 
  CREATE_TB,
  SELECT
};

// For Tap Dance
enum {
    TD_COMM_SCLN, // (/) and (;)
    TD_ESC_RESET, // (ESC) and (RESET)
    TD_SLSH_ESC,  // (/) and (ESC) 
    TD_Q_TAB
};

enum combos {
    FP_CAPS
};

// Combo
const uint16_t PROGMEM fp_caps[] = {KC_F, KC_P, COMBO_END};

combo_t key_combos[] = {
    [FP_CAPS] = COMBO(fp_caps, KC_CAPS)
};

qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for , and twice for ;
    [TD_COMM_SCLN] = ACTION_TAP_DANCE_DOUBLE(KC_COMM, KC_SCLN),
    [TD_SLSH_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_ESC),
    [TD_Q_TAB] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_TAB)
};
// For Tap Dance

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
      //TRABAJO
        case HOMOLOGO:
            if (record->event.pressed){
                if (host_keyboard_led_state().caps_lock){
                    SEND_STRING("`RESPALDO-INTELIGENCIA-RIESGO.COBRANZA.homologa_cuentas`()" SS_TAP(X_LEFT));
                } else {
                    SEND_STRING("`respaldo-inteligencia-riesgo.cobranza.HOMOLOGA_CUENTAS`()" SS_TAP(X_LEFT));
                }
            } else {
                clear_keyboard();
            }
            break;

        case CREATE_TB:
            if (record->event.pressed){
                if (host_keyboard_led_state().caps_lock) {
                    SEND_STRING("create or replace table `RESPALDO-INTELIGENCIA-RIESGO.wsp_gjorquera.create`");
                } else{
                    SEND_STRING("CREATE OR REPLACE TABLE `respaldo-inteligencia-riesgo.WSP_GJORQUERA.CREATE_TB`");
                }
            } else {
                clear_keyboard();
            }
            break;
        
        case SELECT:
            if (record->event.pressed){
                if (host_keyboard_led_state().caps_lock){
                    SEND_STRING("select *" SS_TAP(X_ENT) "from");
                } else {
                    SEND_STRING("SELECT *" SS_TAP(X_ENT) "FROM");
                }
            } else {
                clear_keyboard();
            }
            break;
    }
    return true;
}


 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 #include "base_layout.h"
};



