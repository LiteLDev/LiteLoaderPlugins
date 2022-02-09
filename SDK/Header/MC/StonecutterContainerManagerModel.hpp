// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StonecutterContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STONECUTTERCONTAINERMANAGERMODEL
public:
    class StonecutterContainerManagerModel& operator=(class StonecutterContainerManagerModel const&) = delete;
    StonecutterContainerManagerModel(class StonecutterContainerManagerModel const&) = delete;
    StonecutterContainerManagerModel() = delete;
#endif

public:
    /*0*/ virtual ~StonecutterContainerManagerModel();
    /*6*/ virtual std::vector<class ItemStack> getItemCopies() const;
    /*7*/ virtual void setSlot(int, class ItemStack const&, bool);
    /*8*/ virtual class ItemStack const& getSlot(int) const;
    /*9*/ virtual void setData(int, int);
    /*10*/ virtual void __unk_vfn_10();
    /*15*/ virtual bool isValid(float);
    /*16*/ virtual class ContainerScreenContext _postInit();
    /*
    inline void broadcastChanges(){
        void (StonecutterContainerManagerModel::*rv)();
        *((void**)&rv) = dlsym("?broadcastChanges@StonecutterContainerManagerModel@@UEAAXXZ");
        return (this->*rv)();
    }
    */
    MCAPI StonecutterContainerManagerModel(enum ContainerID, class Player&, class BlockPos const&);

protected:

private:

};