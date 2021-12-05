// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Facing.hpp"
#define EXTRA_INCLUDE_PART_PORTALSHAPE
#include "Extra/PortalShapeAPI.hpp"
#undef EXTRA_INCLUDE_PART_PORTALSHAPE
class PortalShape {
#include "Extra/PortalShapeAPI.hpp"
public:
    MCAPI void createPortalBlocks(class WorldChangeTransaction&) const;
    MCAPI class PortalRecord createRecord() const;
    MCAPI void evaluate(class BlockPos const&, class BlockSource const&);
    MCAPI int getNumberOfPortalBlocks() const;
    MCAPI bool isFilled() const;
    MCAPI bool isValid() const;
    MCAPI void removePortalBlocks(class WorldChangeTransaction&, class BlockPos const&) const;
    MCAPI void setAxis(enum PortalAxis);
    MCAPI void updateNeighboringBlocks(class BlockSource&, class Vec3 const&) const;

protected:

private:
    MCAPI int _calculatePortalHeight(class BlockSource const&);
    MCAPI int _getDistanceUntilEdge(class BlockPos const&, enum Facing::Name, class BlockSource const&) const;
};