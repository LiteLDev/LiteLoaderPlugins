// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SHULKERBOXBLOCKACTOR
#include "Extra/ShulkerBoxBlockActorAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHULKERBOXBLOCKACTOR
class ShulkerBoxBlockActor {
#include "Extra/ShulkerBoxBlockActorAPI.hpp"

public:
    MCAPI void setFacingDir(unsigned char);

    MCAPI static bool itemAllowed(class ItemStackBase const&);
    MCAPI static bool itemAllowedInSlot(int, class ItemStackBase const&, int);

private:
    MCAPI void _calculateBB();
    MCAPI class Vec3 _calculateMovementWithCollisions(class BlockSource&, class Actor*) const;

    MCAPI static int const ITEMS_SIZE;
};