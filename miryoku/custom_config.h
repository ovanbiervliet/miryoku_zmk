// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define MIRYOKU_CLIPBOARD_MAC

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYS,    "Sys") \
MIRYOKU_X(PTR,    "Ptr") \

#define U_BASE   0
#define U_NAV    1
#define U_SYM    2
#define U_NUM    3
#define U_SYS    4
#define U_PTR    5

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LSHFT, A),    U_MT(LCTRL, R),    U_MT(LALT, S),     U_MT(LGUI, T),     &kp D,             &kp H,             U_MT(LGUI, N),     U_MT(LALT, E),     U_MT(LCTRL, I),    U_MT(LSHFT, O),    \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              U_LT(U_PTR, ESC),  U_LT(U_NAV, SPC),  U_LT(U_NUM, TAB),  U_LT(U_SYS, RET),  U_LT(U_SYM, BSPC), &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp LPAR,          &kp RPAR,          &kp MINUS,         &kp EQL,           \
&kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp EXCL,          &kp AT,            &kp HASH,          &kp DLLR,          &kp PRCT,          &kp CRRT,          &kp AMPS,          &kp ASTRK,         &kp MINUS,         &kp EQL,           \
&kp LPAR,          &kp LT,            &kp GT,            &kp RPAR,          &kp LS(LA(NUM_2)), U_NA,              &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         \
&kp LBKT,          &kp GRAVE,         &kp BSLH,          &kp RBKT,          &kp LA(NUM_3),     U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              &kp ESC,           &kp SPC,           &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
U_BOOT,            U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp BSPC,          \
&kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NA,              U_NA,              &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp SEMI,          \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         U_NA,              \
U_NP,              &kp ESC,           U_NA,              U_NA,              U_NA,              U_NA,              &kp NUM_0,         &kp DOT,           U_NP,              U_NP

#define MIRYOKU_LAYER_SYS \
&kp F1,            &kp F2,            &kp F3,            &kp F4,            &u_bt_sel_0,       U_RGB_TOG,         U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         \
&kp F5,            &kp F6,            &kp F7,            &kp F8,            &u_bt_sel_1,       U_EP_TOG,          U_NA,              &kp C_PREV,        &kp C_PP,          &kp C_NEXT,        \
&kp F9,            &kp F10,           &kp F11,           &kp F12,           &u_bt_sel_2,       U_NA,              &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_MUTE,        U_NA,              \
U_NP,              U_NP,              U_NA,              U_NA,              &u_out_tog,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_PTR \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NA,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
&kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NA,              U_NA,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
U_UND,             U_PST,             U_CPY,             U_CUT,             U_RDO,             U_NA,              U_BTN1,            U_BTN2,            U_NA,              U_NA,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP
