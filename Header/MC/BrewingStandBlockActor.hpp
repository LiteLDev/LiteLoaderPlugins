// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BREWINGSTANDBLOCKACTOR
#include "Extra/BrewingStandBlockActorAPI.hpp"
#undef EXTRA_INCLUDE_PART_BREWINGSTANDBLOCKACTOR
class BrewingStandBlockActor {
#include "Extra/BrewingStandBlockActorAPI.hpp"

public:
    MCAPI void brew();
    MCAPI int getBrewTime() const;
    MCAPI int getFuelAmount() const;
    MCAPI int getFuelTotal() const;
    MCAPI void setBrewTime(int);
    MCAPI void setFuelAmount(int);
    MCAPI void setFuelTotal(int);

    MCAPI static bool isFuel(class ItemDescriptor const&);

private:
    MCAPI bool canBrew();
};