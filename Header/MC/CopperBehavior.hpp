// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_COPPERBEHAVIOR
#include "Extra/CopperBehaviorAPI.hpp"
#undef EXTRA_INCLUDE_PART_COPPERBEHAVIOR
class CopperBehavior {
#include "Extra/CopperBehaviorAPI.hpp"

public:
    MCAPI class Block const& getCorrespondingWaxedBlock(class Block const&) const;
    MCAPI bool isWaxable() const;
    MCAPI bool isWaxed() const;
    MCAPI bool tryDecrementAge(class BlockSource&, class BlockPos const&) const;
    MCAPI bool tryIncrementAge(class BlockSource&, class BlockPos const&, float, float) const;
    MCAPI bool use(class Player&, class BlockPos const&, unsigned char) const;

private:
    MCAPI void _incrementAge(class BlockSource&, class Block const&, class BlockPos const&, float) const;
};