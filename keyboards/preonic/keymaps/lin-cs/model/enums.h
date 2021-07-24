#pragma once

#include QMK_KEYBOARD_H

enum preonic_layers {
    // Keyboard layouts
    _QWERTY,
    _COLEMAK,
    _DVORAK,
    _WORKMAN,

    // Lower layers
    _G_LOWER,
    _C_LOWER,
    _S_LOWER,
    _M_LOWER,
    _DEFAULT_LOWER,

    // Raise layers
    _G_RAISE,
    _C_RAISE,
    _S_RAISE,
    _M_RAISE,
    _DEFAULT_RAISE,

    // Adjust layer
    _ADJUST
};

enum profiles {
    _GAMING,
    _CODING,
    _STREAMING,
    _MORSE
};

enum preonic_keycodes {
    QWERTY = SAFE_RANGE,
    COLEMAK,
    DVORAK,
    WORKMAN,
    LOWER,
    RAISE,
    BACKLIT,
    GAMING,
    CODING,
    STREAMING,
    MORSE
};
