// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ContainerValidationBase.hpp"
#define EXTRA_INCLUDE_PART_BREWINGSTANDFUELCONTAINERVALIDATION
#include "Extra/BrewingStandFuelContainerValidationAPI.hpp"
#undef EXTRA_INCLUDE_PART_BREWINGSTANDFUELCONTAINERVALIDATION
class BrewingStandFuelContainerValidation : public ContainerValidationBase {
#include "Extra/BrewingStandFuelContainerValidationAPI.hpp"
public:
    /*0*/ virtual ~BrewingStandFuelContainerValidation();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*
    inline bool isValidSlotForContainer(class ContainerScreenContext const& a0, class Container const& a1, int a2) const{
        bool (BrewingStandFuelContainerValidation::*rv)(class ContainerScreenContext const&, class Container const&, int) const;
        *((void**)&rv) = dlsym("?isValidSlotForContainer@BrewingStandFuelContainerValidation@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z");
        return (this->*rv)(std::forward<class ContainerScreenContext const&>(a0), std::forward<class Container const&>(a1), std::forward<int>(a2));
    }
    inline bool isItemAllowedInSlot(class ContainerScreenContext const& a0, int a1, class ItemStackBase const& a2, int a3) const{
        bool (BrewingStandFuelContainerValidation::*rv)(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
        *((void**)&rv) = dlsym("?isItemAllowedInSlot@BrewingStandFuelContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z");
        return (this->*rv)(std::forward<class ContainerScreenContext const&>(a0), std::forward<int>(a1), std::forward<class ItemStackBase const&>(a2), std::forward<int>(a3));
    }
    */

protected:

private:
};