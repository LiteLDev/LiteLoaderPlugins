// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SHOOTERITEMCOMPONENT
#include "Extra/ShooterItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHOOTERITEMCOMPONENT
class ShooterItemComponent {
#include "Extra/ShooterItemComponentAPI.hpp"
public:
    /*0*/ virtual ~ShooterItemComponent();
    /*1*/ virtual bool checkComponentDataForContentErrors() const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const&);
    /*
    inline bool isNetworkComponent() const{
        bool (ShooterItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?isNetworkComponent@ShooterItemComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class CompoundTag> buildNetworkTag() const{
        std::unique_ptr<class CompoundTag> (ShooterItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?buildNetworkTag@ShooterItemComponent@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    inline bool checkComponentDataForContentErrors() const{
        bool (ShooterItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?checkComponentDataForContentErrors@ShooterItemComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void initializeFromNetwork(class CompoundTag const& a0){
        void (ShooterItemComponent::*rv)(class CompoundTag const&);
        *((void**)&rv) = dlsym("?initializeFromNetwork@ShooterItemComponent@@UEAAXAEBVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0));
    }
    */
    MCAPI bool releaseUsing(class ItemStack&, class Player*, int) const;
    MCAPI bool use(class ItemStack&, class Player&) const;
    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();

protected:

private:
    MCAPI void _consumeAmmunition(class Player*, class ItemStack const&, int, bool, bool) const;
    MCAPI int _getAmmunition(class Player const*, bool, class ItemStack&, bool&) const;
    MCAPI void _shootProjectiles(class ItemStack&, class Player*, int) const;
};