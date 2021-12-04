// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART_TRADE2CONTAINERMANAGERMODEL
#include "Extra/Trade2ContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRADE2CONTAINERMANAGERMODEL
class Trade2ContainerManagerModel : public ContainerManagerModel {
#include "Extra/Trade2ContainerManagerModelAPI.hpp"
public:
    /*0*/ virtual ~Trade2ContainerManagerModel();
    /*1*/ virtual int /*enum ContainerID*/ getContainerId() const;
    /*2*/ virtual void setContainerId(int /*enum ContainerID*/);
    /*3*/ virtual int /*enum ContainerType*/ getContainerType() const;
    /*4*/ virtual void setContainerType(int /*enum ContainerType*/);
    /*6*/ virtual std::vector<class ItemStack> getItemCopies() const;
    /*7*/ virtual void setSlot(int, class ItemStack const&, bool);
    /*8*/ virtual class ItemStack const& getSlot(int) const;
    /*9*/ virtual void setData(int, int);
    /*10*/ virtual void broadcastChanges();
    /*15*/ virtual bool isValid(float);
    /*16*/ virtual class ContainerScreenContext _postInit();
};