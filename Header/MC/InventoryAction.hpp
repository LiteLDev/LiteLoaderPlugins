// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_INVENTORYACTION
#include "Extra/InventoryActionAPI.hpp"
#undef EXTRA_INCLUDE_PART_INVENTORYACTION
class InventoryAction {
#include "Extra/InventoryActionAPI.hpp"
public:
    MCAPI class InventoryAction& operator=(class InventoryAction const&);
    MCAPI void postLoadItems(class BlockPalette&, bool);

protected:

private:
};