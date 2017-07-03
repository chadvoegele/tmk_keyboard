#include "action.h"
#include "actionmap.h"
#include "hook.h"
#include "fc660c.h"

#define AC_L1       ACTION_LAYER_MOMENTARY(1)

#ifdef KEYMAP_SECTION_ENABLE
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] PROGMEM = {
#endif
    [0] = KMAP(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS,
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,     DEL,
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,UP,
        LCTL,LGUI,LALT,          SPC,                     RALT,RCTL,L1,  LEFT,DOWN,RGHT
    ),
    [1] = KMAP(
        GRV, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     INS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   7,   8,   9,TRNS,TRNS,TRNS,TRNS,     DEL,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   4,   5,   6,TRNS,TRNS,     TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   0,   1,   2,   3,TRNS,          RSFT,PGUP,
        TRNS,TRNS,TRNS,          SPC,                     TRNS,TRNS,TRNS,TRNS,PGDN,TRNS
    ),
};
