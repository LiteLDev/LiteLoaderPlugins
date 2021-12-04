// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SHOOTERITEMCOMPONENT
#include "Extra/ShooterItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHOOTERITEMCOMPONENT
class ShooterItemComponent {
#include "Extra/ShooterItemComponentAPI.hpp"
public:
    /*0*/ virtual ~ShooterItemComponent();
    /*1*/ virtual bool checkComponentDataForContentErrors() const;
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual bool isNetworkComponent() const;
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI bool releaseUsing(class ItemStack&, class Player*, int) const;
    MCAPI bool use(class ItemStack&, class Player&) const;

    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();

private:
    MCAPI void _consumeAmmunition(class Player*, class ItemStack const&, int, bool, bool) const;
    MCAPI int _getAmmunition(class Player const*, bool, class ItemStack&, bool&) const;
    MCAPI void _shootProjectiles(class ItemStack&, class Player*, int) const;
};