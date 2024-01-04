
#define CTL_ESC MT(MOD_LCTL, KC_ESC)
#define CTL_GRV LCTL(KC_GRV)
#define GIT_GRV LT(GIT, KC_GRV)
#define DEL_CTL MT(MOD_LCTL, KC_DEL)
#define LOW_MOD LT(LOWER, KC_SPC)
#define RAS_MOD LT(RAISE, KC_SPC)
#define GRK_TAB LT(GREEK, KC_TAB)
#define GRK_ENT LT(GREEK, KC_ENT)
#define RGT_GRK LT(GREEK, KC_RGHT)
#define LFT_CAD LT(CADET, KC_LEFT)

enum layer {
    BASE = 0, // base layer
    RAISE,
    LOWER,
    FUNC,  // function layer
    GAME,  // gaming layer
    GIT,   // git macro layer
    CADET, // cadet unicode layer
    GREEK, // greek unicode layer
    FUT,   // futhark layer
};
