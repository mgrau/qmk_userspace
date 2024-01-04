#include QMK_KEYBOARD_H

void process_git_keycodes(uint16_t keycode);

enum git_keycodes {
    // GIT MACROS
    GIT_REV = SAFE_RANGE,
    GIT_TAG,
    GIT_BRA,
    GIT_PUL,
    GIT_MER,
    GIT_REB,
    GIT_COM,
    GIT_CHE,
    GIT_CLO,
    GIT_FET,
    GIT_STA,
};
