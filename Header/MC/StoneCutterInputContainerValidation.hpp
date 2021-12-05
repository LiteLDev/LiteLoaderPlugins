// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ContainerValidationBase.hpp"
#define EXTRA_INCLUDE_PART_STONECUTTERINPUTCONTAINERVALIDATION
#include "Extra/StoneCutterInputContainerValidationAPI.hpp"
#undef EXTRA_INCLUDE_PART_STONECUTTERINPUTCONTAINERVALIDATION
class StoneCutterInputContainerValidation : public ContainerValidationBase {
#include "Extra/StoneCutterInputContainerValidationAPI.hpp"
public:
    /*0*/ virtual ~StoneCutterInputContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*
    inline bool isValidSlotForContainer(class ContainerScreenContext const& a0, class Container const& a1, int a2) const{
        bool (StoneCutterInputContainerValidation::*rv)(class ContainerScreenContext const&, class Container const&, int) const;
        *((void**)&rv) = dlsym("?isValidSlotForContainer@StoneCutterInputContainerValidation@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z");
        return (this->*rv)(std::forward<class ContainerScreenContext const&>(a0), std::forward<class Container const&>(a1), std::forward<int>(a2));
    }
    */

protected:

private:
};