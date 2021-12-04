// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ContainerValidationBase.hpp"
#define EXTRA_INCLUDE_PART_BARRELCONTAINERVALIDATION
#include "Extra/BarrelContainerValidationAPI.hpp"
#undef EXTRA_INCLUDE_PART_BARRELCONTAINERVALIDATION
class BarrelContainerValidation : public ContainerValidationBase {
#include "Extra/BarrelContainerValidationAPI.hpp"
public:
    /*0*/ virtual ~BarrelContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /*2*/ virtual void unk_vfn_2();
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void unk_vfn_5();
};