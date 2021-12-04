// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ADMIREITEMCOMPONENT
#include "Extra/AdmireItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_ADMIREITEMCOMPONENT
class AdmireItemComponent {
#include "Extra/AdmireItemComponentAPI.hpp"

public:
    MCAPI class ItemStack const& getAdmireItem() const;
    MCAPI struct Tick const& getAdmireUntil() const;
    MCAPI class Actor* getItemOwner() const;
    MCAPI bool isAdmiring() const;
    MCAPI void onAdmireItemPickedUp(class Actor const&, class ItemStack const&, class Actor*);
    MCAPI void stopAdmiring();
};