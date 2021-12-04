// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ContainerValidationBase.hpp"
#define EXTRA_INCLUDE_PART_TRADE2INGREDIENT1CONTAINERVALIDATION
#include "Extra/Trade2Ingredient1ContainerValidationAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRADE2INGREDIENT1CONTAINERVALIDATION
class Trade2Ingredient1ContainerValidation : public ContainerValidationBase {
#include "Extra/Trade2Ingredient1ContainerValidationAPI.hpp"
public:
    /*0*/ virtual ~Trade2Ingredient1ContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /*2*/ virtual void unk_vfn_2();
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void unk_vfn_5();
};