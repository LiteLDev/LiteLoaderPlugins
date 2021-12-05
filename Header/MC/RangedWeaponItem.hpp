// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Item.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_RANGEDWEAPONITEM
#include "Extra/RangedWeaponItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_RANGEDWEAPONITEM
class RangedWeaponItem : public Item {
#include "Extra/RangedWeaponItemAPI.hpp"
public:
    /*0*/ virtual ~RangedWeaponItem();
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
    /*35*/ virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;
    /*36*/ virtual int getEnchantSlot() const;
    /*37*/ virtual int getEnchantValue() const;
    /*38*/ virtual int getArmorValue() const;
    /*39*/ virtual void __unk_vfn_10();
    /*40*/ virtual bool isValidAuxValue(int) const;
    /*41*/ virtual void __unk_vfn_11();
    /*42*/ virtual void __unk_vfn_12();
    /*43*/ virtual void __unk_vfn_13();
    /*44*/ virtual void __unk_vfn_14();
    /*45*/ virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /*46*/ virtual bool hasCustomColor(class CompoundTag const*) const;
    /*47*/ virtual void __unk_vfn_15();
    /*48*/ virtual void clearColor(class CompoundTag*) const;
    /*49*/ virtual void __unk_vfn_16();
    /*50*/ virtual void __unk_vfn_17();
    /*51*/ virtual void __unk_vfn_18();
    /*52*/ virtual void __unk_vfn_19();
    /*53*/ virtual void __unk_vfn_20();
    /*54*/ virtual void __unk_vfn_21();
    /*55*/ virtual bool canUseOnSimTick() const;
    /*56*/ virtual class ItemStack& use(class ItemStack&, class Player&) const;
    /*57*/ virtual void releaseUsing(class ItemStack&, class Player*, int) const;
    /*58*/ virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /*59*/ virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;
    /*60*/ virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /*61*/ virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /*62*/ virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    /*63*/ virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    /*64*/ virtual void __unk_vfn_22();
    /*65*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*66*/ virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;
    /*67*/ virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    /*68*/ virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    /*69*/ virtual void __unk_vfn_23();
    /*70*/ virtual void __unk_vfn_24();
    /*71*/ virtual bool validFishInteraction(int) const;
    /*72*/ virtual std::string getInteractText(class Player const&) const;
    /*73*/ virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    /*74*/ virtual int getIconYOffset() const;
    /*75*/ virtual bool canBeCharged() const;
    /*76*/ virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    /*77*/ virtual void __unk_vfn_25();
    /*78*/ virtual std::string getAuxValuesDescription() const;
    /*79*/ virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const;
    /*
    inline void hurtActor(class ItemStack& a0, class Actor& a1, class Mob& a2) const{
        void (RangedWeaponItem::*rv)(class ItemStack&, class Actor&, class Mob&) const;
        *((void**)&rv) = dlsym("?hurtActor@RangedWeaponItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z");
        return (this->*rv)(std::forward<class ItemStack&>(a0), std::forward<class Actor&>(a1), std::forward<class Mob&>(a2));
    }
    inline bool mineBlock(class ItemStack& a0, class Block const& a1, int a2, int a3, int a4, class Actor* a5) const{
        bool (RangedWeaponItem::*rv)(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
        *((void**)&rv) = dlsym("?mineBlock@RangedWeaponItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z");
        return (this->*rv)(std::forward<class ItemStack&>(a0), std::forward<class Block const&>(a1), std::forward<int>(a2), std::forward<int>(a3), std::forward<int>(a4), std::forward<class Actor*>(a5));
    }
    inline int getEnchantValue() const{
        int (RangedWeaponItem::*rv)() const;
        *((void**)&rv) = dlsym("?getEnchantValue@RangedWeaponItem@@UEBAHXZ");
        return (this->*rv)();
    }
    inline int getAnimationFrameFor(class Mob* a0, bool a1, class ItemStack const* a2, bool a3) const{
        int (RangedWeaponItem::*rv)(class Mob*, bool, class ItemStack const*, bool) const;
        *((void**)&rv) = dlsym("?getAnimationFrameFor@RangedWeaponItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z");
        return (this->*rv)(std::forward<class Mob*>(a0), std::forward<bool>(a1), std::forward<class ItemStack const*>(a2), std::forward<bool>(a3));
    }
    inline void releaseUsing(class ItemStack& a0, class Player* a1, int a2) const{
        void (RangedWeaponItem::*rv)(class ItemStack&, class Player*, int) const;
        *((void**)&rv) = dlsym("?releaseUsing@RangedWeaponItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z");
        return (this->*rv)(std::forward<class ItemStack&>(a0), std::forward<class Player*>(a1), std::forward<int>(a2));
    }
    inline class ItemStack& use(class ItemStack& a0, class Player& a1) const{
        class ItemStack& (RangedWeaponItem::*rv)(class ItemStack&, class Player&) const;
        *((void**)&rv) = dlsym("?use@RangedWeaponItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class ItemStack&>(a0), std::forward<class Player&>(a1));
    }
    */
    MCAPI float getLaunchPower(int, int, int) const;

protected:

private:
};