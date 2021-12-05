// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_ENCHANT
#include "Extra/EnchantAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENCHANT
class Enchant {
#include "Extra/EnchantAPI.hpp"
public:
    /*0*/ virtual ~Enchant();
    /*1*/ virtual bool isCompatibleWith(int /*enum enum Enchant::Type*/) const;
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual int getMaxLevel() const;
    /*6*/ virtual int getDamageProtection(int, class ActorDamageSource const&) const;
    /*7*/ virtual float getDamageBonus(int, class Actor const&) const;
    /*8*/ virtual void doPostAttack(class Actor&, class Actor&, int) const;
    /*9*/ virtual void doPostHurt(class ItemInstance&, class Actor&, class Actor&, int) const;
    /*10*/ virtual void __unk_vfn_1();
    /*11*/ virtual void __unk_vfn_2();
    /*12*/ virtual void __unk_vfn_3();
    /*13*/ virtual void __unk_vfn_4();
    /*14*/ virtual bool _isValidEnchantmentTypeForCategory(int /*enum enum Enchant::Type*/) const;
    /*
    inline bool isProtectionEnchant() const{
        bool (Enchant::*rv)() const;
        *((void**)&rv) = dlsym("?isProtectionEnchant@Enchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isTreasureOnly() const{
        bool (Enchant::*rv)() const;
        *((void**)&rv) = dlsym("?isTreasureOnly@Enchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isMeleeDamageEnchant() const{
        bool (Enchant::*rv)() const;
        *((void**)&rv) = dlsym("?isMeleeDamageEnchant@Enchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline int getDamageProtection(int a0, class ActorDamageSource const& a1) const{
        int (Enchant::*rv)(int, class ActorDamageSource const&) const;
        *((void**)&rv) = dlsym("?getDamageProtection@Enchant@@UEBAHHAEBVActorDamageSource@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ActorDamageSource const&>(a1));
    }
    inline void doPostHurt(class ItemInstance& a0, class Actor& a1, class Actor& a2, int a3) const{
        void (Enchant::*rv)(class ItemInstance&, class Actor&, class Actor&, int) const;
        *((void**)&rv) = dlsym("?doPostHurt@Enchant@@UEBAXAEAVItemInstance@@AEAVActor@@1H@Z");
        return (this->*rv)(std::forward<class ItemInstance&>(a0), std::forward<class Actor&>(a1), std::forward<class Actor&>(a2), std::forward<int>(a3));
    }
    inline void doPostAttack(class Actor& a0, class Actor& a1, int a2) const{
        void (Enchant::*rv)(class Actor&, class Actor&, int) const;
        *((void**)&rv) = dlsym("?doPostAttack@Enchant@@UEBAXAEAVActor@@0H@Z");
        return (this->*rv)(std::forward<class Actor&>(a0), std::forward<class Actor&>(a1), std::forward<int>(a2));
    }
    inline bool isDiscoverable() const{
        bool (Enchant::*rv)() const;
        *((void**)&rv) = dlsym("?isDiscoverable@Enchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool _isValidEnchantmentTypeForCategory(int \/*enum enum Enchant::Type*\/ a0) const{
        bool (Enchant::*rv)(int \/*enum enum Enchant::Type*\/) const;
        *((void**)&rv) = dlsym("?_isValidEnchantmentTypeForCategory@Enchant@@EEBA_NW4Type@1@@Z");
        return (this->*rv)(std::forward<int \/*enum enum Enchant::Type*\/>(a0));
    }
    inline int getMaxLevel() const{
        int (Enchant::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxLevel@Enchant@@UEBAHXZ");
        return (this->*rv)();
    }
    inline int getMinLevel() const{
        int (Enchant::*rv)() const;
        *((void**)&rv) = dlsym("?getMinLevel@Enchant@@UEBAHXZ");
        return (this->*rv)();
    }
    inline float getDamageBonus(int a0, class Actor const& a1) const{
        float (Enchant::*rv)(int, class Actor const&) const;
        *((void**)&rv) = dlsym("?getDamageBonus@Enchant@@UEBAMHAEBVActor@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class Actor const&>(a1));
    }
    inline int getMaxCost(int a0) const{
        int (Enchant::*rv)(int) const;
        *((void**)&rv) = dlsym("?getMaxCost@Enchant@@UEBAHH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline int getMinCost(int a0) const{
        int (Enchant::*rv)(int) const;
        *((void**)&rv) = dlsym("?getMinCost@Enchant@@UEBAHH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline bool isCompatibleWith(int \/*enum enum Enchant::Type*\/ a0) const{
        bool (Enchant::*rv)(int \/*enum enum Enchant::Type*\/) const;
        *((void**)&rv) = dlsym("?isCompatibleWith@Enchant@@UEBA_NW4Type@1@@Z");
        return (this->*rv)(std::forward<int \/*enum enum Enchant::Type*\/>(a0));
    }
    */
    MCAPI std::string getDescriptionId() const;
    MCAPI class HashedString const& getStringId() const;
    MCAPI bool isAvailable() const;
    MCAPI bool isDisabled() const;
    MCAPI static void initEnchants();
    MCAPI static std::vector<std::unique_ptr<class Enchant>> mEnchants;
    MCAPI static void shutdownEnchants();

protected:

private:
};