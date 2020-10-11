#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layout 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl|Alt |Cmd |                        |Cmd |Alt |FN0 |FN1 |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        ESC,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    MINS, EQL,  BSPC, \
        TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    LBRC, RBRC, BSLS, \
        CAPS, A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT,       ENT,  \
        LSFT, Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH,             RSFT, \
        LCTL, LALT, LGUI,             SPACE,                        RGUI, RALT, FN0,  FN1),

    /* Layout 1: Function Layer
     * ,-----------------------------------------------------------.
     * |`  | B-| B+|MC*|LP*|   |   |Prv|Ply|Nxt|Mut|V- |V+ |Delete |
     * |-----------------------------------------------------------|
     * |     |   |Up |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |Lef|Dow|Rig|   |   |   |   |   |   |Hom|PUp|        |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |   |   |   |End|PDn|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl|Alt |Cmd |                        |Cmd |Alt |FN0 |FN1 |
     * `-----------------------------------------------------------'
     *
     * Note: Fn+3 is Ctrl+Up. This is pretty weird, but it's the default macOS
     *       keybinding to show Mission Control (in addition to the dedicated
     *       key), so just works if we do this way.
     *
     * Note: Fn+4 is F16, which is unused by the default macOS keybindings. You
     *       can manually map that to "Show Launchpad" (which is turned off by
     *       default) in keyboard shortcuts, which works well enough. Sending
     *       the proper key code is highly non-trivial.
     *
     */
    KEYMAP_ANSI(
        GRV,  BRTD, BRTI, FN2,  F16,  NO,   NO,   MPRV, MPLY, MNXT, MUTE, VOLD, VOLU, DEL,  \
        NO,   NO,   UP,   NO,   NO,   NO,   NO,   NO,   UP,   NO,   NO,   NO,   NO,   NO,   \
        NO,   LEFT, DOWN, RGHT, NO,   NO,   NO,   NO,   NO,   NO,   HOME, PGUP,       NO,   \
        TRNS, NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   END,  PGDN,             TRNS, \
        TRNS, TRNS, TRNS,             NO,                           TRNS, TRNS, FN0,  FN1),

    /* Layout 2: Function Keys
     * ,-----------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |   |   |   |   |   |Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl|Alt |Cmd |                        |Cmd |Alt |FN0 |FN1 |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        NO,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,  NO,   \
        NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   \
        NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,         NO,   \
        TRNS, NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,               TRNS, \
        TRNS, TRNS, TRNS,             NO,                           TRNS, TRNS, FN0,  FN1),
};

/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),        /* Monentary layout 1 */
    [1] = ACTION_LAYER_MOMENTARY(2),        /* Monentary layout 2 */
    [2] = ACTION_MODS_KEY(MOD_LCTL, KC_UP), /* Mission control */
};
