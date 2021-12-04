// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_EQUIPPABLECOMPONENT
#include "Extra/EquippableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_EQUIPPABLECOMPONENT
class EquippableComponent {
#include "Extra/EquippableComponentAPI.hpp"

public:
    MCAPI class UpdateEquipPacket createDataPacket(class Actor&, enum ContainerID) const;
    MCAPI std::unique_ptr<class CompoundTag> createTag(class Actor&) const;
    MCAPI int getSlotCount() const;
    MCAPI bool hasSlotAllowedItems(int) const;
    MCAPI void initFromDefinition(class Actor&, class EquippableDefinition const&);
    MCAPI bool onItemChanged(class Actor&, unsigned __int64, class ItemStack const&) const;
    MCAPI class EquippableComponent& operator=(class EquippableComponent&&);
    MCAPI std::vector<class ItemDescriptor> const* tryGetSlotAllowedItems(int) const;
};