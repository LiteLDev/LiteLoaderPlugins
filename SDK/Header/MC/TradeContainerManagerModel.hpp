// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TradeContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADECONTAINERMANAGERMODEL
public:
    class TradeContainerManagerModel& operator=(class TradeContainerManagerModel const&) = delete;
    TradeContainerManagerModel(class TradeContainerManagerModel const&) = delete;
    TradeContainerManagerModel() = delete;
#endif

public:
    /*0*/ virtual ~TradeContainerManagerModel();
    /*1*/ virtual enum ContainerID getContainerId() const;
    /*2*/ virtual void setContainerId(enum ContainerID);
    /*3*/ virtual enum ContainerType getContainerType() const;
    /*4*/ virtual void setContainerType(enum ContainerType);
    /*6*/ virtual std::vector<class ItemStack> getItemCopies() const;
    /*7*/ virtual void setSlot(int, class ItemStack const&, bool);
    /*8*/ virtual class ItemStack const& getSlot(int) const;
    /*9*/ virtual void setData(int, int);
    /*10*/ virtual void broadcastChanges();
    /*15*/ virtual bool isValid(float);
    /*16*/ virtual class ContainerScreenContext _postInit();
    MCAPI TradeContainerManagerModel(enum ContainerID, class Player&, struct ActorUniqueID const&);

protected:

private:

};