// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_BOOSTABLECOMPONENT
#include "Extra/BoostableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_BOOSTABLECOMPONENT
class BoostableComponent {
#include "Extra/BoostableComponentAPI.hpp"
public:
    MCAPI int getBoostTime() const;
    MCAPI int getBoostTimeTotal() const;
    MCAPI bool getIsBoosting() const;
    MCAPI bool itemUseText(class Player const&, std::string&);
    MCAPI bool onItemInteract(class Actor&, class ItemStack&, class Player&);
    MCAPI void removePassenger(class Player&);
    MCAPI void setBoostTime(int);
    MCAPI void setIsBoosting(bool);
    MCAPI static class std::shared_ptr<class AttributeModifier> getSpeedModifierBoosting();

protected:

private:
    MCAPI static class std::shared_ptr<class AttributeModifier> SPEED_MODIFIER_BOOSTING;
    MCAPI static class mce::UUID const SPEED_MODIFIER_BOOSTING_UUID;
};