#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
  ST_MACRO_28,
  ST_MACRO_29,
  ST_MACRO_30,
  ST_MACRO_31,
  ST_MACRO_32,
  ST_MACRO_33,
  ST_MACRO_34,
  ST_MACRO_35,
  ST_MACRO_36,
  ST_MACRO_37,
  ST_MACRO_38,
  ST_MACRO_39,
  ST_MACRO_40,
  ST_MACRO_41,
  ST_MACRO_42,
  ST_MACRO_43,
  ST_MACRO_44,
  ST_MACRO_45,
  ST_MACRO_46,
  ST_MACRO_47,
  ST_MACRO_48,
  ST_MACRO_49,
  ST_MACRO_50,
  ST_MACRO_51,
  ST_MACRO_52,
  ST_MACRO_53,
  ST_MACRO_54,
  ST_MACRO_55,
  ST_MACRO_56,
  ST_MACRO_57,
  ST_MACRO_58,
  ST_MACRO_59,
  ST_MACRO_60,
  ST_MACRO_61,
  ST_MACRO_62,
  ST_MACRO_63,
  ST_MACRO_64,
  ST_MACRO_65,
  ST_MACRO_66,
  ST_MACRO_67,
  ST_MACRO_68,
  ST_MACRO_69,
  ST_MACRO_70,
  ST_MACRO_71,
  ST_MACRO_72,
  ST_MACRO_73,
  ST_MACRO_74,
  ST_MACRO_75,
  ST_MACRO_76,
  ST_MACRO_77,
  ST_MACRO_78,
  ST_MACRO_79,
  ST_MACRO_80,
  ST_MACRO_81,
  ST_MACRO_82,
  ST_MACRO_83,
  ST_MACRO_84,
  ST_MACRO_85,
  ST_MACRO_86,
  ST_MACRO_87,
  ST_MACRO_88,
  ST_MACRO_89,
  ST_MACRO_90,
  ST_MACRO_91,
  ST_MACRO_92,
  ST_MACRO_93,
  ST_MACRO_94,
  ST_MACRO_95,
  ST_MACRO_96,
  ST_MACRO_97,
  ST_MACRO_98,
  ST_MACRO_99,
  ST_MACRO_100,
  ST_MACRO_101,
};



#define DUAL_FUNC_0 LT(4, KC_E)
#define DUAL_FUNC_1 LT(2, KC_J)
#define DUAL_FUNC_2 LT(7, KC_G)
#define DUAL_FUNC_3 LT(5, KC_F)
#define DUAL_FUNC_4 LT(3, KC_F1)
#define DUAL_FUNC_5 LT(8, KC_S)
#define DUAL_FUNC_6 LT(6, KC_F13)
#define DUAL_FUNC_7 LT(4, KC_F19)
#define DUAL_FUNC_8 LT(5, KC_F24)
#define DUAL_FUNC_9 LT(10, KC_D)
#define DUAL_FUNC_10 LT(14, KC_F2)
#define DUAL_FUNC_11 LT(13, KC_7)
#define DUAL_FUNC_12 LT(10, KC_4)
#define DUAL_FUNC_13 LT(9, KC_F22)
#define DUAL_FUNC_14 LT(8, KC_B)
#define DUAL_FUNC_15 LT(13, KC_X)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    DUAL_FUNC_0,    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TG(6),                                          AS_ON,          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           DUAL_FUNC_3,    
    LALT(KC_TAB),   KC_W,           KC_F,           KC_M,           KC_P,           KC_V,           KC_TRANSPARENT,                                 DUAL_FUNC_4,    DUAL_FUNC_5,    KC_DOT,         KC_Q,           KC_DQUO,        KC_QUOTE,       KC_Z,           
    KC_TRANSPARENT, KC_R,           KC_S,           KC_N,           KC_T,           KC_B,           KC_TRANSPARENT,                                                                 DUAL_FUNC_6,    KC_COMMA,       KC_A,           KC_E,           KC_I,           KC_H,           KC_J,           
    KC_TRANSPARENT, KC_X,           KC_C,           KC_L,           KC_D,           KC_G,                                           KC_MINUS,       KC_U,           KC_O,           KC_Y,           KC_K,           KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    DUAL_FUNC_1,    DUAL_FUNC_2,    OSL(8),                                                                                                         OSL(2),         DUAL_FUNC_7,    DUAL_FUNC_8,    KC_RIGHT_GUI,   KC_RIGHT_ALT,   KC_RIGHT_CTRL,  
    LT(1, KC_SPACE),KC_BSPC,        KC_TAB,                         KC_ESCAPE,      KC_DELETE,      KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE,       KC_UP,          KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_A),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LALT(LCTL(KC_B)),                                KC_TRANSPARENT, LCTL(KC_LEFT_SHIFT),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PGDN,        KC_PAGE_UP,     KC_HOME,        KC_END,         KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, LCTL(KC_LEFT),  LCTL(KC_RIGHT), LCTL(KC_UP),    LCTL(KC_DOWN),  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_QUES,        KC_PIPE,        KC_AMPR,        ST_MACRO_5,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PERC,        KC_7,           KC_8,           KC_9,           KC_CIRC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LABK,        KC_LCBR,        KC_LBRC,        KC_LPRN,        ST_MACRO_6,     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PLUS,        KC_4,           KC_5,           KC_6,           KC_ASTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_RABK,        KC_RCBR,        KC_RBRC,        KC_RPRN,        KC_COMMA,                                       KC_MINUS,       KC_1,           KC_2,           KC_3,           KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_SPACE,       KC_0,           KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_BSPC,        KC_ENTER,       KC_EQUAL
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_27,    ST_MACRO_28,    ST_MACRO_29,    ST_MACRO_30,    ST_MACRO_31,    ST_MACRO_32,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_33,    ST_MACRO_34,    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_35,    
    KC_TRANSPARENT, ST_MACRO_12,    ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    ST_MACRO_16,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_36,    ST_MACRO_37,    ST_MACRO_38,    ST_MACRO_39,    ST_MACRO_40,    
    KC_TRANSPARENT, ST_MACRO_17,    ST_MACRO_18,    ST_MACRO_19,    ST_MACRO_20,    LCTL(KC_SLASH),                                 ST_MACRO_41,    ST_MACRO_42,    ST_MACRO_43,    ST_MACRO_44,    ST_MACRO_45,    ST_MACRO_46,    
    KC_TRANSPARENT, ST_MACRO_21,    ST_MACRO_22,    ST_MACRO_23,    ST_MACRO_24,    ST_MACRO_25,                                                                                                    DUAL_FUNC_9,    ST_MACRO_47,    ST_MACRO_48,    ST_MACRO_49,    ST_MACRO_50,    ST_MACRO_51,    
    ST_MACRO_26,    KC_TRANSPARENT, KC_TRANSPARENT,                 LALT(LCTL(KC_N)),KC_TRANSPARENT, LCTL(KC_ENTER)
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, ST_MACRO_52,    ST_MACRO_53,    ST_MACRO_54,    ST_MACRO_55,    ST_MACRO_56,    KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_77,    ST_MACRO_78,    ST_MACRO_79,    ST_MACRO_80,    ST_MACRO_81,    KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_57,    ST_MACRO_58,    ST_MACRO_59,    ST_MACRO_60,    ST_MACRO_61,    KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_82,    ST_MACRO_83,    ST_MACRO_84,    ST_MACRO_85,    ST_MACRO_86,    KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_62,    ST_MACRO_63,    ST_MACRO_64,    ST_MACRO_65,    ST_MACRO_66,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, ST_MACRO_87,    ST_MACRO_88,    ST_MACRO_89,    ST_MACRO_90,    ST_MACRO_91,    KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_67,    ST_MACRO_68,    ST_MACRO_69,    ST_MACRO_70,    ST_MACRO_71,                                    ST_MACRO_92,    ST_MACRO_93,    ST_MACRO_94,    ST_MACRO_95,    ST_MACRO_96,    KC_TRANSPARENT, 
    ST_MACRO_72,    ST_MACRO_73,    ST_MACRO_74,    ST_MACRO_75,    ST_MACRO_76,    KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, ST_MACRO_97,    ST_MACRO_98,    ST_MACRO_99,    ST_MACRO_100,   ST_MACRO_101,   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 AS_OFF,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_ENTER,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_A,           KC_S,           KC_D,           KC_F,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_SPACE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, KC_MS_UP,       KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_MS_BTN3,     KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_ENTER,       KC_TRANSPARENT,                 KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN1
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_GUI,   KC_RIGHT_ALT,   KC_RIGHT_CTRL,  
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_10,   DUAL_FUNC_5,    DUAL_FUNC_11,   DUAL_FUNC_4,                                    KC_TRANSPARENT, KC_AT,          KC_7,           KC_8,           KC_9,           KC_KP_ASTERISK, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          DUAL_FUNC_12,   DUAL_FUNC_13,   DUAL_FUNC_14,   DUAL_FUNC_6,                                                                    KC_TRANSPARENT, KC_HASH,        KC_4,           KC_5,           KC_6,           KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_DOWN,        KC_LEFT,        KC_RIGHT,       DUAL_FUNC_15,                                   KC_DLR,         KC_1,           KC_2,           KC_3,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_DOT,         KC_0,           KC_KP_EQUAL,    KC_KP_SLASH,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', '*', '*', 'R', 'R', 'R', 'R', 'R',
                 '*', '*', '*', '*', '*', '*'
);









bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_O));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_R));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_V)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_1))SS_DELAY(100)  SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(100)  SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_X));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_V)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_T));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_G));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_P)SS_DELAY(100)  SS_LSFT(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_T));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_R));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_TAP(X_EQUAL)SS_DELAY(100)  SS_TAP(X_SPACE)SS_DELAY(100)  SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_DOT));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_P)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_A));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_J)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_LSFT(SS_TAP(X_C))SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_P)SS_DELAY(100)  SS_LSFT(SS_TAP(X_MINUS))SS_DELAY(100)  SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_P)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_P));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_R))SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_F));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_R));
    }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_K));
    }
    break;
    case ST_MACRO_30:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_H));
    }
    break;
    case ST_MACRO_31:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Q)SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_R));
    }
    break;
    case ST_MACRO_32:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_R));
    }
    break;
    case ST_MACRO_33:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_P)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_Y)SS_DELAY(100)  SS_LSFT(SS_TAP(X_9))SS_DELAY(100)  SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_F)SS_DELAY(100)  SS_LSFT(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_34:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_DOT)SS_DELAY(100)  SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_LSFT(SS_TAP(X_9))SS_DELAY(100)  SS_LSFT(SS_TAP(X_0))SS_DELAY(100)  SS_TAP(X_DOT)SS_DELAY(100)  SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_LSFT(SS_TAP(X_9))SS_DELAY(100)  SS_LSFT(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_35:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_36:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_F))SS_DELAY(100)  SS_TAP(X_DOT)SS_DELAY(100)  SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_L));
    }
    break;
    case ST_MACRO_37:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_F))SS_DELAY(100)  SS_TAP(X_DOT)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_T));
    }
    break;
    case ST_MACRO_38:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_F))SS_DELAY(100)  SS_TAP(X_DOT)SS_DELAY(100)  SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_39:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_F))SS_DELAY(100)  SS_TAP(X_DOT));
    }
    break;
    case ST_MACRO_40:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_T))SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_41:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_42:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_M));
    }
    break;
    case ST_MACRO_43:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_V)SS_DELAY(100)  SS_TAP(X_G));
    }
    break;
    case ST_MACRO_44:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_45:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_X));
    }
    break;
    case ST_MACRO_46:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_F))SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_47:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_T))SS_DELAY(100)  SS_LSFT(SS_TAP(X_O))SS_DELAY(100)  SS_LSFT(SS_TAP(X_D))SS_DELAY(100)  SS_LSFT(SS_TAP(X_O)));
    }
    break;
    case ST_MACRO_48:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS)SS_DELAY(100)  SS_TAP(X_MINUS));
    }
    break;
    case ST_MACRO_49:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_TAP(X_MINUS));
    }
    break;
    case ST_MACRO_50:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS)SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_51:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_A));
    }
    break;
    case ST_MACRO_52:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_O));
    }
    break;
    case ST_MACRO_53:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_54:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_T));
    }
    break;
    case ST_MACRO_55:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_T));
    }
    break;
    case ST_MACRO_56:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_X)SS_DELAY(100)  SS_TAP(X_T));
    }
    break;
    case ST_MACRO_57:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_K));
    }
    break;
    case ST_MACRO_58:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_T));
    }
    break;
    case ST_MACRO_59:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_K));
    }
    break;
    case ST_MACRO_60:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_K));
    }
    break;
    case ST_MACRO_61:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_62:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_63:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_W));
    }
    break;
    case ST_MACRO_64:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_65:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_V)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_66:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_L));
    }
    break;
    case ST_MACRO_67:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_W));
    }
    break;
    case ST_MACRO_68:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_W));
    }
    break;
    case ST_MACRO_69:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_70:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_71:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_72:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_S))SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_A));
    }
    break;
    case ST_MACRO_73:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_74:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_75:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_Y)SS_DELAY(100)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_76:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_77:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_78:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_79:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_80:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_V)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_81:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_K));
    }
    break;
    case ST_MACRO_82:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_83:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_84:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_85:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_V)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_86:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_87:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_88:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_O));
    }
    break;
    case ST_MACRO_89:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_O));
    }
    break;
    case ST_MACRO_90:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_T));
    }
    break;
    case ST_MACRO_91:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_92:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_93:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_94:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_T));
    }
    break;
    case ST_MACRO_95:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_T));
    }
    break;
    case ST_MACRO_96:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_97:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_98:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_99:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_100:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_101:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_L))SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_B)SS_DELAY(100)  SS_TAP(X_Y)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_Y));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_ESCAPE);
        } else {
          unregister_code16(KC_ESCAPE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LCTL(KC_DELETE)));
        } else {
          unregister_code16(LALT(LCTL(KC_DELETE)));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUES);
        } else {
          unregister_code16(KC_QUES);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_UNDS);
        } else {
          unregister_code16(KC_UNDS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_PSCR);
        } else {
          unregister_code16(KC_PSCR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(LSFT(KC_S)));
        } else {
          unregister_code16(LGUI(LSFT(KC_S)));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_PGDN);
        } else {
          unregister_code16(KC_PGDN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_PAGE_UP);
        } else {
          unregister_code16(KC_PAGE_UP);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_SLASH);
        } else {
          unregister_code16(KC_SLASH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_BSLS);
        } else {
          unregister_code16(KC_BSLS);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_END);
        } else {
          unregister_code16(KC_END);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_HOME);
        } else {
          unregister_code16(KC_HOME);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DQUO);
        } else {
          unregister_code16(KC_DQUO);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_SHIFT);
        } else {
          unregister_code16(KC_RIGHT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_COLN);
        } else {
          unregister_code16(KC_COLN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_CTRL);
        } else {
          unregister_code16(KC_RIGHT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_DOWN)));
        } else {
          unregister_code16(LALT(LSFT(KC_DOWN)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_ENTER)));
        } else {
          unregister_code16(LALT(LSFT(KC_ENTER)));
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUOTE);
        } else {
          unregister_code16(KC_QUOTE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_GRAVE);
        } else {
          unregister_code16(KC_GRAVE);
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LABK);
        } else {
          unregister_code16(KC_LABK);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RABK);
        } else {
          unregister_code16(KC_RABK);
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LBRC);
        } else {
          unregister_code16(KC_LBRC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RBRC);
        } else {
          unregister_code16(KC_RBRC);
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LCBR);
        } else {
          unregister_code16(KC_LCBR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RCBR);
        } else {
          unregister_code16(KC_RCBR);
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LPRN);
        } else {
          unregister_code16(KC_LPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RPRN);
        } else {
          unregister_code16(KC_RPRN);
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUES);
        } else {
          unregister_code16(KC_QUES);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_QUES);
        } else {
          unregister_code16(KC_QUES);
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

