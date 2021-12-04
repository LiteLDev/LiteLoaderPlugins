// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BRIGHTNESS
#include "Extra/BrightnessAPI.hpp"
#undef EXTRA_INCLUDE_PART_BRIGHTNESS
struct Brightness {
#include "Extra/BrightnessAPI.hpp"

public:
    MCAPI struct Brightness& operator=(struct Brightness&&);
    MCAPI struct Brightness& operator=(struct Brightness const&);

    MCAPI static struct Brightness const INVALID;
    MCAPI static struct Brightness const MAX;
    MCAPI static struct Brightness const MIN;
};