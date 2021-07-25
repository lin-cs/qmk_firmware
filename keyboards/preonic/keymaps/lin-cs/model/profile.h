#pragma once

#include "enums.h"
#include "tri-layer-pair.h"

typedef struct TriLayerPair (*trilayer_t)(enum preonic_layers, enum preonic_layers, enum preonic_layers);

trilayer_t profileLayers[_MORSE+1] = {
    [_GAMING] = CreateTriLayerPair(_DEFAULT_LOWER, _DEFAULT_RAISE, _ADJUST),
    [_CODING] = CreateTriLayerPair(_DEFAULT_LOWER, _DEFAULT_RAISE, _ADJUST),
    [_STREAMING] = CreateTriLayerPair(_DEFAULT_LOWER, _DEFAULT_RAISE, _ADJUST),
    [_MORSE] = CreateTriLayerPair(_DEFAULT_LOWER, _DEFAULT_RAISE, _ADJUST)
};

enum preonic_layers defaultLayouts[_MORSE+1] = {
    [_GAMING] = _QWERTY,
    [_CODING] = _WORKMAN,
    [_STREAMING] = _QWERTY,
    [_MORSE] = _QWERTY
};
