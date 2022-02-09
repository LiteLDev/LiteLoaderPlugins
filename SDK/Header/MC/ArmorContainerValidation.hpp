// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ArmorContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORCONTAINERVALIDATION
public:
    class ArmorContainerValidation& operator=(class ArmorContainerValidation const&) = delete;
    ArmorContainerValidation(class ArmorContainerValidation const&) = delete;
    ArmorContainerValidation() = delete;
#endif

public:
    /*0*/ virtual ~ArmorContainerValidation();
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual bool isItemAllowedToAdd(class ItemStack const&) const;
    /*5*/ virtual bool isItemAllowedToRemove(class ContainerScreenContext const&, class ItemStackBase const&) const;
    /*6*/ virtual void __unk_vfn_6();
    /*9*/ virtual int getContainerSize(class ContainerScreenContext const&, class Container const&) const;
    /*
    inline bool canItemMoveToContainer(class ItemStackBase const& a0) const{
        bool (ArmorContainerValidation::*rv)(class ItemStackBase const&) const;
        *((void**)&rv) = dlsym("?canItemMoveToContainer@ArmorContainerValidation@@UEBA_NAEBVItemStackBase@@@Z");
        return (this->*rv)(std::forward<class ItemStackBase const&>(a0));
    }
    inline int getAvailableSetCount(int a0, class ItemStackBase const& a1) const{
        int (ArmorContainerValidation::*rv)(int, class ItemStackBase const&) const;
        *((void**)&rv) = dlsym("?getAvailableSetCount@ArmorContainerValidation@@UEBAHHAEBVItemStackBase@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStackBase const&>(a1));
    }
    */

protected:

private:

};