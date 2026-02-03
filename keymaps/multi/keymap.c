#include QMK_KEYBOARD_H


enum LAYERS {
    LAYER_QWERTY,
    LAYER_MIRROR,
    LAYER_FUNC,
    LAYER_MOUSE,
    LAYER_SYSTEM,
    LAYER_
};
const uint16_t MIRROR = MO(LAYER_MIRROR);
const uint16_t FUNC = MO(LAYER_FUNC);
const uint16_t MOUSE = MO(LAYER_MOUSE);
const uint16_t SYSTEM = MO(LAYER_SYSTEM);
const uint16_t NAV = MO(LAYER_SYSTEM);
const uint16_t VOL_UP = KC_KB_VOLUME_UP;
const uint16_t VOL_DOWN = KC_KB_VOLUME_DOWN;    

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_QWERTY] = LAYOUT(
        KC_GRV,		KC_1,		KC_2,		KC_3,		KC_4,		KC_5,				KC_6,		KC_7,		KC_8,		KC_9,		KC_0,		KC_MINS,
        KC_LBRC,	KC_Q,		KC_W,		KC_E,		KC_R,		KC_T,				KC_Y,		KC_U,		KC_I,		KC_O,		KC_P,		KC_RBRC,
        KC_LALT,	KC_A,		KC_S,		KC_D,		KC_F,		KC_G,				KC_H,		KC_J,		KC_K,		KC_L,		KC_SCLN,	KC_RALT,
        KC_LSFT,	KC_Z,		KC_X,		KC_C,		KC_V,		KC_B,				KC_N,		KC_M,		KC_COMM,	KC_DOT,		KC_SLSH,	KC_RSFT,
        KC_TAB,		KC_SPC,		FUNC,		KC_LCTL,															KC_SPC,		KC_EQL,	    KC_QUOT,	KC_BSLS,  
        MIRROR,		MOUSE,		KC_LGUI,																					KC_BSPC,	KC_ENT,		MOUSE
    ),
    [LAYER_MIRROR] = LAYOUT(
        KC_MINS,	KC_0,		KC_9,		KC_8,		KC_7,		KC_6,				_______,	_______,	_______,	_______,	_______,	_______,
        KC_RBRC,	KC_P,		KC_O,		KC_I,		KC_U,		KC_Y,				_______,	_______,	KC_UP,		_______,	_______,	_______,
        _______,	KC_SCLN,	KC_L,		KC_K,		KC_J,		KC_H,				_______,	KC_LEFT,	KC_DOWN,	KC_RGHT,	_______,	_______,
        _______,	KC_SLSH,	KC_DOT,		KC_COMM,	KC_M,		KC_N,				_______,	_______,	_______,	_______,	_______,	_______,
        KC_BSLS,	KC_QUOT,	KC_EQL,	    _______,															_______,	_______,	_______,	_______,  
        _______,	KC_BSPC,	_______,																					_______,	_______,	_______
    ),
    [LAYER_FUNC] = LAYOUT(
        KC_F6,		KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,				_______,	_______,	_______,	_______,	_______,	_______,
        _______,	KC_F10,		_______,	KC_UP,		_______,	MEH(KC_F6),			_______,	_______,	KC_UP,		_______,	_______,	_______,
        _______,	KC_F11,		KC_LEFT,	KC_DOWN,	KC_RGHT,	MEH(KC_F5),			_______,	KC_LEFT,	KC_DOWN,	KC_RGHT,	_______,	_______,
        _______,	KC_F12,		MEH(KC_F1),	MEH(KC_F2),	MEH(KC_F3),	MEH(KC_F4),			_______,	_______,	_______,	_______,	_______,	_______,
        _______,	_______,	_______,	_______,												_______,	_______,	_______,	_______,  
        _______,	_______,	_______,																					_______,	_______,	_______
    ),
    [LAYER_MOUSE] = LAYOUT(
        KC_CAPS,	MEH(KC_F7),	MEH(KC_F8),	MEH(KC_F9),	MEH(KC_F10),MEH(KC_F11),		_______,	_______,	_______,	_______,	_______,	_______,
        KC_BRIU,	VOL_UP,		_______,	MS_WHLU,	_______,	KC_F7,  			_______,	_______,	KC_UP,		_______,	_______,	_______,
        KC_BRID,	VOL_DOWN,	MS_WHLL,	MS_WHLD,	MS_WHLR,	KC_F8,		    	_______,	KC_LEFT,	KC_DOWN,	KC_RGHT,	_______,	_______,
        KC_PSCR,	_______,	MS_BTN1,	MS_BTN3,	MS_BTN2,	KC_F9,		    	_______,	_______,	_______,	_______,	_______,	_______,
        _______,	_______,	_______,	_______,															_______,	_______,	_______,	_______,  
        KC_LCTL,	_______,	_______,																					_______,	_______,	_______
    )
    // [TRNS] = LAYOUT(
    //     _______,  _______,   _______,    _______,    _______,    _______,       _______,    _______,    _______,    _______,    _______,    _______,
    //     _______,  _______,   _______,    _______,    _______,    _______,       _______,    _______,    _______,    _______,    _______,    _______,
    //     _______,  _______,   _______,    _______,    _______,    _______,       _______,    _______,    _______,    _______,    _______,    _______,
    //     _______,  _______,   _______,    _______,    _______,    _______,       _______,    _______,    _______, _______,  _______, _______,
    //     _______, _______,   _______,  _______, _______,                         
    //     _______,  _______, _______,  _______,   _______
    // )
};

const uint16_t PROGMEM K_ENT[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM K_DEL[] = {KC_X, KC_F, COMBO_END};
const uint16_t PROGMEM K_ESC[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM K_PGUP[] = {KC_W, KC_R, COMBO_END};
const uint16_t PROGMEM K_PGDN[] = {KC_X, KC_V, COMBO_END};
const uint16_t PROGMEM K_BSPC[] = {KC_G, KC_T, COMBO_END};
const uint16_t PROGMEM K_BOOT[] = {KC_F2, KC_F11, COMBO_END};

combo_t key_combos[] = {
    COMBO(K_ENT, KC_ENT),
    COMBO(K_DEL, KC_DEL), 
    COMBO(K_ESC, KC_ESC), 
    COMBO(K_PGUP, KC_PGUP), 
    COMBO(K_PGDN, KC_PGDN), 
    COMBO(K_BSPC, KC_BACKSPACE),

    COMBO(K_BOOT, QK_BOOT)
};
