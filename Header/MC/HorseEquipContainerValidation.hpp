// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ContainerValidationBase.hpp"
#define EXTRA_INCLUDE_PART_HORSEEQUIPCONTAINERVALIDATION
#include "Extra/HorseEquipContainerValidationAPI.hpp"
#undef EXTRA_INCLUDE_PART_HORSEEQUIPCONTAINERVALIDATION
class HorseEquipContainerValidation : public ContainerValidationBase {
#include "Extra/HorseEquipContainerValidationAPI.hpp"
public:
    /*0*/ virtual ~HorseEquipContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void __unk_vfn_2();
    /*
    inline bool isItemAllowedToAdd(class ItemStack const& a0) const{
        bool (HorseEquipContainerValidation::*rv)(class ItemStack const&) const;
        *((void**)&rv) = dlsym("?isItemAllowedToAdd@HorseEquipContainerValidation@@UEBA_NAEBVItemStack@@@Z");
        return (this->*rv)(std::forward<class ItemStack const&>(a0));
    }
    inline int getAvailableSetCount(int a0, class ItemStackBase const& a1) const{
        int (HorseEquipContainerValidation::*rv)(int, class ItemStackBase const&) const;
        *((void**)&rv) = dlsym("?getAvailableSetCount@HorseEquipContainerValidation@@UEBAHHAEBVItemStackBase@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStackBase const&>(a1));
    }
    inline bool isItemAllowedInSlot(class ContainerScreenContext const& a0, int a1, class ItemStackBase const& a2, int a3) const{
        bool (HorseEquipContainerValidation::*rv)(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
        *((void**)&rv) = dlsym("?isItemAllowedInSlot@HorseEquipContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z");
        return (this->*rv)(std::forward<class ContainerScreenContext const&>(a0), std::forward<int>(a1), std::forward<class ItemStackBase const&>(a2), std::forward<int>(a3));
    }
    inline bool isValidSlotForContainer(class ContainerScreenContext const& a0, class Container const& a1, int a2) const{
        bool (HorseEquipContainerValidation::*rv)(class ContainerScreenContext const&, class Container const&, int) const;
        *((void**)&rv) = dlsym("?isValidSlotForContainer@HorseEquipContainerValidation@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z");
        return (this->*rv)(std::forward<class ContainerScreenContext const&>(a0), std::forward<class Container const&>(a1), std::forward<int>(a2));
    }
    */

protected:

private:
};