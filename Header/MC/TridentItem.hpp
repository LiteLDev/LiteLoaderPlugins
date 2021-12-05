// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Item.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_TRIDENTITEM
#include "Extra/TridentItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRIDENTITEM
class TridentItem : public Item {
#include "Extra/TridentItemAPI.hpp"
public:
    /*0*/ virtual ~TridentItem();
    /*1*/ virtual void tearDown();
    /*2*/ virtual int getMaxUseDuration(class ItemStack const*) const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&) const;
    /*6*/ virtual void __unk_vfn_2();
    /*7*/ virtual bool isArmor() const;
    /*8*/ virtual bool isBlockPlanterItem() const;
    /*9*/ virtual void __unk_vfn_3();
    /*10*/ virtual void __unk_vfn_4();
    /*11*/ virtual bool isDyeable() const;
    /*12*/ virtual bool isDye() const;
    /*13*/ virtual int /*enum enum ItemColor*/ getItemColor() const;
    /*14*/ virtual bool isFertilizer() const;
    /*15*/ virtual void __unk_vfn_5();
    /*16*/ virtual bool isThrowable() const;
    /*17*/ virtual bool isUseable() const;
    /*18*/ virtual class ItemComponent* getComponent(class HashedString const&) const;
    /*19*/ virtual class FuelItemComponent* getFuel() const;
    /*20*/ virtual void __unk_vfn_6();
    /*21*/ virtual bool canDestroySpecial(class Block const&) const;
    /*22*/ virtual int getLevelDataForAuxValue(int) const;
    /*23*/ virtual short getMaxDamage() const;
    /*24*/ virtual int getAttackDamage() const;
    /*25*/ virtual bool isGlint(class ItemStackBase const&) const;
    /*26*/ virtual void __unk_vfn_7();
    /*27*/ virtual void __unk_vfn_8();
    /*28*/ virtual void __unk_vfn_9();
    /*29*/ virtual bool isWearableThroughLootTable(class CompoundTag const*) const;
    /*30*/ virtual bool canDestroyInCreative() const;
    /*31*/ virtual bool isDestructive(int) const;
    /*32*/ virtual bool isLiquidClipItem(int) const;
    /*33*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;
    /*34*/ virtual bool requiresInteract() const;
    /*35*/ virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;
    /*36*/ virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;
    /*37*/ virtual int getEnchantSlot() const;
    /*38*/ virtual int getEnchantValue() const;
    /*39*/ virtual int getArmorValue() const;
    /*40*/ virtual void __unk_vfn_10();
    /*41*/ virtual bool isValidAuxValue(int) const;
    /*42*/ virtual void __unk_vfn_11();
    /*43*/ virtual void __unk_vfn_12();
    /*44*/ virtual void __unk_vfn_13();
    /*45*/ virtual void __unk_vfn_14();
    /*46*/ virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /*47*/ virtual bool hasCustomColor(class CompoundTag const*) const;
    /*48*/ virtual void __unk_vfn_15();
    /*49*/ virtual void clearColor(class CompoundTag*) const;
    /*50*/ virtual void __unk_vfn_16();
    /*51*/ virtual void __unk_vfn_17();
    /*52*/ virtual void __unk_vfn_18();
    /*53*/ virtual void __unk_vfn_19();
    /*54*/ virtual void __unk_vfn_20();
    /*55*/ virtual void __unk_vfn_21();
    /*56*/ virtual bool canUseOnSimTick() const;
    /*57*/ virtual class ItemStack& use(class ItemStack&, class Player&) const;
    /*58*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*59*/ virtual void releaseUsing(class ItemStack&, class Player*, int) const;
    /*60*/ virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /*61*/ virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;
    /*62*/ virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /*63*/ virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /*64*/ virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    /*65*/ virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    /*66*/ virtual void __unk_vfn_22();
    /*67*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*68*/ virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;
    /*69*/ virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    /*70*/ virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    /*71*/ virtual void __unk_vfn_23();
    /*72*/ virtual void __unk_vfn_24();
    /*73*/ virtual bool validFishInteraction(int) const;
    /*74*/ virtual std::string getInteractText(class Player const&) const;
    /*75*/ virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    /*76*/ virtual int getIconYOffset() const;
    /*77*/ virtual bool canBeCharged() const;
    /*78*/ virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    /*79*/ virtual void __unk_vfn_25();
    /*80*/ virtual std::string getAuxValuesDescription() const;
    /*81*/ virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const;
    /*
    inline bool canDestroyInCreative() const{
        bool (TridentItem::*rv)() const;
        *((void**)&rv) = dlsym("?canDestroyInCreative@TridentItem@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isThrowable() const{
        bool (TridentItem::*rv)() const;
        *((void**)&rv) = dlsym("?isThrowable@TridentItem@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline int getEnchantValue() const{
        int (TridentItem::*rv)() const;
        *((void**)&rv) = dlsym("?getEnchantValue@TridentItem@@UEBAHXZ");
        return (this->*rv)();
    }
    inline int getAttackDamage() const{
        int (TridentItem::*rv)() const;
        *((void**)&rv) = dlsym("?getAttackDamage@TridentItem@@UEBAHXZ");
        return (this->*rv)();
    }
    inline short getMaxDamage() const{
        short (TridentItem::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxDamage@TridentItem@@UEBAFXZ");
        return (this->*rv)();
    }
    inline void appendFormattedHovertext(class ItemStackBase const& a0, class Level& a1, std::string& a2, bool a3) const{
        void (TridentItem::*rv)(class ItemStackBase const&, class Level&, std::string&, bool) const;
        *((void**)&rv) = dlsym("?appendFormattedHovertext@TridentItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z");
        return (this->*rv)(std::forward<class ItemStackBase const&>(a0), std::forward<class Level&>(a1), std::forward<std::string&>(a2), std::forward<bool>(a3));
    }
    inline bool dispense(class BlockSource& a0, class Container& a1, int a2, class Vec3 const& a3, unsigned char a4) const{
        bool (TridentItem::*rv)(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
        *((void**)&rv) = dlsym("?dispense@TridentItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class Container&>(a1), std::forward<int>(a2), std::forward<class Vec3 const&>(a3), std::forward<unsigned char>(a4));
    }
    inline int getEnchantSlot() const{
        int (TridentItem::*rv)() const;
        *((void**)&rv) = dlsym("?getEnchantSlot@TridentItem@@UEBAHXZ");
        return (this->*rv)();
    }
    inline void hurtActor(class ItemStack& a0, class Actor& a1, class Mob& a2) const{
        void (TridentItem::*rv)(class ItemStack&, class Actor&, class Mob&) const;
        *((void**)&rv) = dlsym("?hurtActor@TridentItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z");
        return (this->*rv)(std::forward<class ItemStack&>(a0), std::forward<class Actor&>(a1), std::forward<class Mob&>(a2));
    }
    inline void releaseUsing(class ItemStack& a0, class Player* a1, int a2) const{
        void (TridentItem::*rv)(class ItemStack&, class Player*, int) const;
        *((void**)&rv) = dlsym("?releaseUsing@TridentItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z");
        return (this->*rv)(std::forward<class ItemStack&>(a0), std::forward<class Player*>(a1), std::forward<int>(a2));
    }
    inline class ItemStack& use(class ItemStack& a0, class Player& a1) const{
        class ItemStack& (TridentItem::*rv)(class ItemStack&, class Player&) const;
        *((void**)&rv) = dlsym("?use@TridentItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class ItemStack&>(a0), std::forward<class Player&>(a1));
    }
    */
    MCAPI static int const CHARGE_THRESHOLD_TIME;
    MCAPI static int const THROW_THRESHOLD_TIME;

protected:

private:
    MCAPI class Actor* _setupProjectile(class Actor*, class ItemStack, bool) const;
};