#include QMK_KEYBOARD_H

#include "mgrau.h"
#include "unicode_map.h"

#define DEL_SFT MT(MOD_LSFT, KC_DEL)
#define SPC_LOW LT(RAISE, KC_SPC)
#define ENT_UP LT(LOWER, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | `    |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |CTLESC|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |DelSHF|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |SHFENT|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE | FUN  | RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
    [BASE] = LAYOUT(
    KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    CTL_ESC,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    DEL_SFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,  KC_RBRC,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SC_SENT,
                       KC_LALT, KC_LGUI, MO(LOWER),  SPC_LOW,  ENT_UP,    MO(RAISE), MO(ADJUST), MO(GREEK)
    ),
    [RAISE] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_DEL,
    _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______,                   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______,
    _______, KC_VOLD, KC_MUTE, KC_VOLU, _______, _______,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                               _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [LOWER] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_F5,   _______,                   _______, _______, _______, _______, _______, _______,
    _______, KC_VOLD, KC_MUTE, KC_VOLU, KC_DLR,  _______,                   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                               _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [ADJUST] = LAYOUT(
    QK_BOOT, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, TG(GAME),                  _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______,
                               _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [GAME] = LAYOUT(
    KC_GRV,  _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    KC_TAB,  _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    KC_LCTL, _______, _______, _______, _______, TG(GAME),                  _______, _______, _______, _______, _______, _______,
    KC_LSFT, _______, _______, _______, _______, QK_BOOT, _______, _______, _______, _______, _______, _______, _______, KC_RSFT,
                                KC_ESC, _______, KC_LALT, KC_SPC,  _______, KC_RALT, TO(BASE),KC_RCTL
    ),
    // [GIT] = LAYOUT(
    // _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, GIT_REV,
    // GIT_TAG, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    // _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    // GIT_REB, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, GIT_CHE,
    //                            GIT_BRA, GIT_PUL, GIT_MER, _______, GIT_COM, GIT_CLO, GIT_FET, GIT_STA
    // ),
    [CADET] = LAYOUT(
    X(IBNG), _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    _______, X(AND),  X(OR),   X(INSC), X(UNI),  X(SUB),                    X(SUP),  X(FALL), X(INF),  X(EXIS), X(PART), _______,
    _______, X(UPTK), X(DNTK), X(RTTK), X(LTTK), X(LRAR),                   X(LARR), X(DARR), X(UARR), X(RARR), _______, _______,
    _______, X(LDO),  X(LUP),  X(NOTE), X(ASYM), X(EQIV), _______, _______, X(LEQ),  X(GEQ),  _______, _______, _______, _______,
                               _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [GREEK] = LAYOUT(
    X(IBNG), S_1,     S_2,     S_3,     S_4,     S_5,                       S_6,     S_7,     S_8,     S_9,     S_0,     _______,
    _______, GK_Q,    GK_W,    GK_E,    GK_R,    GK_T,                      GK_Y,    GK_U,    GK_I,    GK_O,    GK_P,    _______,
    _______, GK_A,    GK_S,    GK_D,    GK_F,    GK_G,                      GK_H,    GK_J,    GK_K,    GK_L,    _______, _______,
    _______, GK_Z,    GK_X,    GK_C,    GK_V,    GK_B,    _______, _______, GK_N,    GK_M,    BRA,     KET,     X(Fint), _______,
                               _______, _______, _______, _______, _______, _______, _______, _______
    ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, LOWER, RAISE, ADJUST);
}

// SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) return OLED_ROTATION_180; // flips the display 180 degrees if offhand
    return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void        set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        // If you want to change the display of OLED, you need to change here
        oled_write_ln(read_layer_state(), false);
        oled_write_ln(read_keylog(), false);
        oled_write_ln(read_keylogs(), false);
        // oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
        // oled_write_ln(read_host_led_state(), false);
        // oled_write_ln(read_timelog(), false);
    } else {
        oled_write(read_logo(), false);
    }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef OLED_ENABLE
        set_keylog(keycode, record);
#endif
        // set_timelog();
    }
    return true;
}
