// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_HOPPERCOMPONENT
#include "Extra/HopperComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_HOPPERCOMPONENT
class HopperComponent {
#include "Extra/HopperComponentAPI.hpp"
public:
    MCAPI class BlockPos getLastPosition() const;
    MCAPI bool pullInItems(class Actor&);

protected:

private:
};