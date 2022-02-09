// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FurnaceContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FURNACECONTAINERMANAGERMODEL
public:
    class FurnaceContainerManagerModel& operator=(class FurnaceContainerManagerModel const&) = delete;
    FurnaceContainerManagerModel(class FurnaceContainerManagerModel const&) = delete;
    FurnaceContainerManagerModel() = delete;
#endif

public:
    /*0*/ virtual ~FurnaceContainerManagerModel();
    /*6*/ virtual std::vector<class ItemStack> getItemCopies() const;
    /*7*/ virtual void setSlot(int, class ItemStack const&, bool);
    /*8*/ virtual class ItemStack const& getSlot(int) const;
    /*9*/ virtual void setData(int, int);
    /*10*/ virtual void broadcastChanges();
    /*15*/ virtual bool isValid(float);
    /*16*/ virtual class ContainerScreenContext _postInit();
    /*
    inline  ~FurnaceContainerManagerModel(){
         (FurnaceContainerManagerModel::*rv)();
        *((void**)&rv) = dlsym("??1FurnaceContainerManagerModel@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI FurnaceContainerManagerModel(enum ContainerID, class Player&, class BlockPos const&);

protected:
    MCAPI FurnaceContainerManagerModel(class HashedString const&, enum ContainerType, enum BlockActorType, enum ContainerID, class Player&, class BlockPos const&);

private:
    MCAPI class FurnaceBlockActor* _getFurnaceEntity();
    MCAPI void _updateResultSlotInfo();

};