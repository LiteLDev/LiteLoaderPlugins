// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ENCHANT
#include "Extra/EnchantAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENCHANT
class Enchant {
#include "Extra/EnchantAPI.hpp"
public:
    /*0*/ virtual ~Enchant();
    /*1*/ virtual bool isCompatibleWith(int /*enum Enchant::Type*/) const;
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual int getMaxLevel() const;
    /*6*/ virtual int getDamageProtection(int, class ActorDamageSource const&) const;
    /*7*/ virtual float getDamageBonus(int, class Actor const&) const;
    /*8*/ virtual void doPostAttack(class Actor&, class Actor&, int) const;
    /*9*/ virtual void doPostHurt(class ItemInstance&, class Actor&, class Actor&, int) const;
    /*10*/ virtual void unk_vfn_10();
    /*11*/ virtual void unk_vfn_11();
    /*12*/ virtual void unk_vfn_12();
    /*13*/ virtual void unk_vfn_13();
    /*14*/ virtual bool _isValidEnchantmentTypeForCategory(int /*enum Enchant::Type*/) const;

public:
    MCAPI std::string getDescriptionId() const;
    MCAPI class HashedString const& getStringId() const;
    MCAPI bool isAvailable() const;
    MCAPI bool isDisabled() const;

    MCAPI static void initEnchants();
    MCAPI static std::vector<std::unique_ptr<class Enchant>> mEnchants;
    MCAPI static void shutdownEnchants();
};