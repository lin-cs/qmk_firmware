#pragma once

#include "enums.h"

struct TriLayerPair
{
    enum preonic_layers lower;
    enum preonic_layers raise;
    enum preonic_layers adjust;
};

struct TriLayerPair CreateTriLayerPair(enum preonic_layers lower, enum preonic_layers raise, enum preonic_layers adjust) {
    struct TriLayerPair pair;
    pair.lower = lower;
    pair.raise = raise;
    pair.adjust = adjust;
    return pair;
}
